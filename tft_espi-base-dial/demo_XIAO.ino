#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>
#include "NotoSansBold15.h"
#include <Adafruit_GFX.h>

TFT_eSPI tft = TFT_eSPI();  // Invoke library, pins defined in User_Setup.h
TFT_eSprite spr = TFT_eSprite(&tft); // Sprite

#define TFT_GREY 0xBDF7
#define panel_height 240
#define panel_length 240
#define Radius 120
#define AA_FONT_SMALL NotoSansBold15
#define FSS9 &FreeSans9pt7b
#define FMO9 &FreeMono9pt7b
#define FSSB9 &FreeSansBold9pt7b

float sx = 0, sy = 1, mx = 1, my = 0, hx = -1, hy = 0;    // Saved H, M, S x & y multipliers
uint16_t x0=0, x1=0, yy0=0, yy1=0;
uint16_t osx=120, osy=120, omx=120, omy=120, ohx=120, ohy=120;  // Saved H, M, S x & y coords
uint16_t osx_1=120, osy_1=120, omx_1=120, omy_1=120, ohx_1=120, ohy_1=120;
float sdeg=0, mdeg=0, hdeg=0;
uint32_t targetTime = 0;                    // for next 1 second timeout
bool initial = 1;

static uint8_t conv2d(const char* p) {
  uint8_t v = 0;
  if ('0' <= *p && *p <= '9')
    v = *p - '0';
  return 10 * v + *++p - '0';
}

uint8_t hh=conv2d(__TIME__), mm=conv2d(__TIME__+3), ss=conv2d(__TIME__+6);  // Get H, M, S from compile time

void setup(void) {
  tft.init();
  tft.setRotation(0);  // 让Type-C接口朝右侧

  targetTime = millis() + 1000; 
}

void loop() {
  spr.createSprite(panel_height, panel_length);
  // 绘制表盘外圈
  spr.fillScreen(tft.color565(0, 238, 118));  //外圈颜色
  spr.fillCircle(panel_length/2, panel_height/2, Radius-3, tft.color565(0, 205, 130));
  spr.fillCircle(panel_length/2, panel_height/2, Radius-7, TFT_WHITE);
  spr.fillCircle(panel_length/2, panel_height/2, Radius-35, tft.color565(0, 205, 130));
  spr.fillCircle(panel_length/2, panel_height/2, Radius-50, TFT_BLACK);

  // 绘制分钟线
  for(int i = 0; i<360; i+= 6) {
    sx = cos((i-90)*0.0174532925);
    sy = sin((i-90)*0.0174532925);
    x0 = sx*(Radius-7) + Radius;
    yy0 = sy*(Radius-7) + Radius;
    x1 = sx*(Radius-10) + Radius;
    yy1 = sy*(Radius-10) + Radius;

    spr.drawLine(x0, yy0, x1, yy1, tft.color565(255, 0, 0));
    if(i%30==0)spr.drawWideLine(sx*(Radius-51) + Radius, sy*(Radius-51) + Radius, sx*(Radius-53) + Radius, sy*(Radius-53) + Radius, 2.0f, TFT_WHITE);
    else spr.drawLine(sx*(Radius-51) + Radius, sy*(Radius-51) + Radius, sx*(Radius-52) + Radius, sy*(Radius-52) + Radius, tft.color565(220, 220, 220));
  }

  // 绘制时刻线
  for(int i = 0; i<360; i+= 30) {
    sx = cos((i-90)*0.0174532925);
    sy = sin((i-90)*0.0174532925);
    x0 = sx*(Radius-7) + Radius;
    yy0 = sy*(Radius-7) + Radius;
    x1 = sx*(Radius-13) + Radius;
    yy1 = sy*(Radius-13) + Radius;
    if(i==0 || i==90 || i==180 || i==270)spr.drawWideLine(x0, yy0, x1, yy1, 2.0f, TFT_BLACK);
    else spr.drawLine(x0, yy0, x1, yy1, TFT_BLACK);
  }

  spr.setTextColor(TFT_BLACK, TFT_WHITE);
  spr.setTextSize(1);
  spr.setCursor(Radius+35, Radius-80);
  spr.setFreeFont(FMO9);
  spr.print("05");
  spr.setCursor(Radius+71, Radius-45);
  spr.print("10");
  spr.setCursor(Radius+72, Radius+52);
  spr.print("20");
  spr.setCursor(Radius+34, Radius+90);
  spr.print("25");
  spr.setCursor(Radius-55, Radius+90);
  spr.print("35");
  spr.setCursor(Radius-94, Radius+52);
  spr.print("40");
  spr.setCursor(Radius-94, Radius-45);
  spr.print("50");
  spr.setCursor(Radius-55, Radius-80);
  spr.print("55");

  spr.setFreeFont(FSSB9);
  spr.setCursor(Radius-9, Radius-90);
  spr.print("60");
  spr.setCursor(Radius-9, Radius+102);
  spr.print("30");
  spr.setCursor(Radius-107, Radius+5);
  spr.print("45");

  //充电口logo
  spr.fillTriangle(Radius+95, Radius, Radius+103, Radius, Radius+95, Radius+15, tft.color565(255, 0, 0));
  spr.fillTriangle(Radius+98, Radius-12, Radius+90, Radius+3, Radius+98, Radius+3, tft.color565(250, 128, 114));
  
  if (targetTime < millis()) {
    targetTime = millis()+1000;
    ss++;              // Advance second
    if (ss==60) {
      ss=0;
      mm++;            // Advance minute
      if(mm>59) {
        mm=0;
        hh++;          // Advance hour
        if (hh>23) {
          hh=0;
        }
      }
    }
  // Pre-compute hand degrees, x & y coords for a fast screen update
    sdeg = ss*6;                  // 0-59 -> 0-354
    mdeg = mm*6+sdeg*0.01666667;  // 0-59 -> 0-360 - includes seconds
    hdeg = hh*30+mdeg*0.0833333;  // 0-11 -> 0-360 - includes minutes and seconds
    hx = cos((hdeg-90)*0.0174532925);    
    hy = sin((hdeg-90)*0.0174532925);
    mx = cos((mdeg-90)*0.0174532925);    
    my = sin((mdeg-90)*0.0174532925);
    sx = cos((sdeg-90)*0.0174532925);    
    sy = sin((sdeg-90)*0.0174532925);

    if (ss==0 || initial) {
      initial = 0;
      // Erase hour and minute hand positions every minute
      ohx = hx*42+Radius+1;    
      ohy = hy*42+Radius+1;
      omx = mx*63+Radius+1;    
      omy = my*63+Radius+1;
    }

    // Redraw new hand positions, hour and minute hands not erased here to avoid flicker
    //覆盖上一次秒针
    
    osx = sx*90+Radius+1;    
    osy = sy*90+Radius+1;
//    tft.drawLine(osx, osy, Radius, Radius, tft.color565(0, 250, 154));
  }
  
  // 绘制表盘中心
  spr.drawWedgeLine(ohx, ohy, Radius, Radius, 4.0, 1.0, TFT_WHITE);    //时针
  spr.drawWedgeLine(omx, omy, Radius, Radius, 4.0, 1.0, TFT_WHITE);    //分针
  spr.drawWedgeLine(osx, osy, Radius, Radius, 2.5, 1.0, tft.color565(0, 250, 154));      //秒针
  spr.fillCircle(panel_length/2, panel_height/2, 6, TFT_WHITE);   
  spr.fillCircle(panel_length/2, panel_height/2, 4, TFT_BLACK);
  spr.pushSprite(0, 0);
//  spr.deleteSprite();
}
