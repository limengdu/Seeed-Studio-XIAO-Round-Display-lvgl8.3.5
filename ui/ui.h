// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: xiao-display

#ifndef _XIAO_DISPLAY_UI_H
#define _XIAO_DISPLAY_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

void second_Animation(lv_obj_t * TargetObject, int delay);
void minute_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_maindail(lv_event_t * e);
extern lv_obj_t * ui_maindail;
extern lv_obj_t * ui_pannel;
extern lv_obj_t * ui_step;
extern lv_obj_t * ui_power;
extern lv_obj_t * ui_Spinner2;
extern lv_obj_t * ui_ampm;
extern lv_obj_t * ui_time;
extern lv_obj_t * ui_week;
extern lv_obj_t * ui_date;
extern lv_obj_t * ui_month;
extern lv_obj_t * ui_stepplus;
extern lv_obj_t * ui_stepnegative;
extern lv_obj_t * ui_powerplus;
extern lv_obj_t * ui_powernegative;
extern lv_obj_t * ui_runingman;
extern lv_obj_t * ui_powerlogo;
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_dial;
extern lv_obj_t * ui_minute;
extern lv_obj_t * ui_hour;
extern lv_obj_t * ui_second;
void ui_event_notepage(lv_event_t * e);
extern lv_obj_t * ui_notepage;
extern lv_obj_t * ui_background;
extern lv_obj_t * ui_Label1;


LV_IMG_DECLARE(ui_img_pannel_240w_png);    // assets\pannel_240w.png
LV_IMG_DECLARE(ui_img_run_25h_png);    // assets\run_25h.png
LV_IMG_DECLARE(ui_img_powerlogo_png);    // assets\powerlogo.png
LV_IMG_DECLARE(ui_img_1387450172);    // assets\minute_80h-2.png
LV_IMG_DECLARE(ui_img_364787093);    // assets\hour_50h-2.png
LV_IMG_DECLARE(ui_img_827571443);    // assets\second_120h-2.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
