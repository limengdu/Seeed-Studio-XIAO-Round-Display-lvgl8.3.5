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
extern lv_obj_t * ui_RSSI;
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
extern lv_obj_t * ui_minute;
extern lv_obj_t * ui_hour;
extern lv_obj_t * ui_second;
void ui_event_timestart(lv_event_t * e);
extern lv_obj_t * ui_timestart;
extern lv_obj_t * ui_notepage;
extern lv_obj_t * ui_content;
extern lv_obj_t * ui_Decorationbar;
extern lv_obj_t * ui_notification;
extern lv_obj_t * ui_message;
extern lv_obj_t * ui_twitterbar;
extern lv_obj_t * ui_twitter;
extern lv_obj_t * ui_messagelogo;
extern lv_obj_t * ui_people;
extern lv_obj_t * ui_messagecontent;
extern lv_obj_t * ui_youtubebar;
extern lv_obj_t * ui_youtube;
extern lv_obj_t * ui_messagelogo1;
extern lv_obj_t * ui_messagecontent1;
extern lv_obj_t * ui_gmailbar;
extern lv_obj_t * ui_gmail;
extern lv_obj_t * ui_messagelogo2;
extern lv_obj_t * ui_people2;
extern lv_obj_t * ui_messagecontent2;
extern lv_obj_t * ui_facebookbar;
extern lv_obj_t * ui_facebook;
extern lv_obj_t * ui_messagelogo3;
extern lv_obj_t * ui_messagecontent3;
void ui_event_backbutton(lv_event_t * e);
extern lv_obj_t * ui_backbutton;
void ui_event_setting(lv_event_t * e);
extern lv_obj_t * ui_setting;
extern lv_obj_t * ui_background;
extern lv_obj_t * ui_date2;
extern lv_obj_t * ui_week2;
void ui_event_wifi(lv_event_t * e);
extern lv_obj_t * ui_wifi;
extern lv_obj_t * ui_ble;
extern lv_obj_t * ui_ring;
extern lv_obj_t * ui_bluemessage;
extern lv_obj_t * ui_wifimessage;
extern lv_obj_t * ui_Ring;
void ui_event_music(lv_event_t * e);
extern lv_obj_t * ui_music;
extern lv_obj_t * ui_background3;
extern lv_obj_t * ui_musicbg;
extern lv_obj_t * ui_sound;
extern lv_obj_t * ui_songname;
extern lv_obj_t * ui_musictime;
extern lv_obj_t * ui_up;
extern lv_obj_t * ui_next;
void ui_event_play(lv_event_t * e);
extern lv_obj_t * ui_play;
void ui_event_backbutton2(lv_event_t * e);
extern lv_obj_t * ui_backbutton2;


LV_IMG_DECLARE(ui_img_pannel_240w_png);    // assets\pannel_240w.png
LV_IMG_DECLARE(ui_img_run_25h_png);    // assets\run_25h.png
LV_IMG_DECLARE(ui_img_powerlogo_png);    // assets\powerlogo.png
LV_IMG_DECLARE(ui_img_1387450172);    // assets\minute_80h-2.png
LV_IMG_DECLARE(ui_img_364787093);    // assets\hour_50h-2.png
LV_IMG_DECLARE(ui_img_827571443);    // assets\second_120h-2.png
LV_IMG_DECLARE(ui_img_message_png);    // assets\message.png
LV_IMG_DECLARE(ui_img_people1_png);    // assets\people1.png
LV_IMG_DECLARE(ui_img_people2_png);    // assets\people2.png
LV_IMG_DECLARE(ui_img_back_png);    // assets\back.png
LV_IMG_DECLARE(ui_img_wifion2_png);    // assets\wifion2.png
LV_IMG_DECLARE(ui_img_wifioff2_png);    // assets\wifioff2.png
LV_IMG_DECLARE(ui_img_bleon2_png);    // assets\bleon2.png
LV_IMG_DECLARE(ui_img_ringon_png);    // assets\ringon.png
LV_IMG_DECLARE(ui_img_music_bg_png);    // assets\music_bg.png
LV_IMG_DECLARE(ui_img_up2_png);    // assets\up2.png
LV_IMG_DECLARE(ui_img_next_png);    // assets\next.png
LV_IMG_DECLARE(ui_img_palyer_png);    // assets\palyer.png
LV_IMG_DECLARE(ui_img_stop_png);    // assets\stop.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
