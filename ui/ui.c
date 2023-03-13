// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: xiao-display

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
void second_Animation(lv_obj_t * TargetObject, int delay);
void minute_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_maindail(lv_event_t * e);
lv_obj_t * ui_maindail;
lv_obj_t * ui_pannel;
lv_obj_t * ui_RSSI;
lv_obj_t * ui_step;
lv_obj_t * ui_power;
lv_obj_t * ui_Spinner2;
lv_obj_t * ui_ampm;
lv_obj_t * ui_time;
lv_obj_t * ui_week;
lv_obj_t * ui_date;
lv_obj_t * ui_month;
lv_obj_t * ui_stepplus;
lv_obj_t * ui_stepnegative;
lv_obj_t * ui_powerplus;
lv_obj_t * ui_powernegative;
lv_obj_t * ui_runingman;
lv_obj_t * ui_powerlogo;
lv_obj_t * ui_dial;
lv_obj_t * ui_minute;
lv_obj_t * ui_hour;
lv_obj_t * ui_second;
void ui_event_timestart(lv_event_t * e);
lv_obj_t * ui_timestart;
lv_obj_t * ui_notepage;
lv_obj_t * ui_content;
lv_obj_t * ui_Decorationbar;
lv_obj_t * ui_notification;
lv_obj_t * ui_message;
lv_obj_t * ui_twitterbar;
lv_obj_t * ui_twitter;
lv_obj_t * ui_messagelogo;
lv_obj_t * ui_people;
lv_obj_t * ui_messagecontent;
lv_obj_t * ui_youtubebar;
lv_obj_t * ui_youtube;
lv_obj_t * ui_messagelogo1;
lv_obj_t * ui_messagecontent1;
lv_obj_t * ui_gmailbar;
lv_obj_t * ui_gmail;
lv_obj_t * ui_messagelogo2;
lv_obj_t * ui_people2;
lv_obj_t * ui_messagecontent2;
lv_obj_t * ui_facebookbar;
lv_obj_t * ui_facebook;
lv_obj_t * ui_messagelogo3;
lv_obj_t * ui_messagecontent3;
void ui_event_backbutton(lv_event_t * e);
lv_obj_t * ui_backbutton;
void ui_event_setting(lv_event_t * e);
lv_obj_t * ui_setting;
lv_obj_t * ui_background;
lv_obj_t * ui_date2;
lv_obj_t * ui_week2;
void ui_event_wifi(lv_event_t * e);
lv_obj_t * ui_wifi;
lv_obj_t * ui_ble;
lv_obj_t * ui_ring;
lv_obj_t * ui_bluemessage;
lv_obj_t * ui_wifimessage;
lv_obj_t * ui_Ring;
void ui_event_music(lv_event_t * e);
lv_obj_t * ui_music;
lv_obj_t * ui_background3;
lv_obj_t * ui_musicbg;
lv_obj_t * ui_sound;
lv_obj_t * ui_songprogress;
lv_obj_t * ui_songname;
lv_obj_t * ui_musictime;
lv_obj_t * ui_up;
lv_obj_t * ui_next;
void ui_event_play(lv_event_t * e);
lv_obj_t * ui_play;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void second_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 3600, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 60000);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);

}
void minute_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 3600, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 3600000);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

}
void hour_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 3600, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 43200000);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_maindail(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        _ui_screen_change(ui_notepage, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        _ui_screen_change(ui_setting, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_music, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_timestart(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        second_Animation(ui_second, 0);
        minute_Animation(ui_minute, 0);
        hour_Animation(ui_hour, 0);
    }
}
void ui_event_backbutton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_maindail, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_setting(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_BOTTOM) {
        _ui_screen_change(ui_maindail, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_wifi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_wifi, LV_STATE_DISABLED, _UI_MODIFY_STATE_ADD);
    }
}
void ui_event_music(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_maindail, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_play(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_play, LV_STATE_DISABLED, _UI_MODIFY_STATE_ADD);
    }
}

///////////////////// SCREENS ////////////////////
void ui_maindail_screen_init(void)
{
    ui_maindail = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_maindail, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_pannel = lv_img_create(ui_maindail);
    lv_img_set_src(ui_pannel, &ui_img_pannel_240w_png);
    lv_obj_set_width(ui_pannel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pannel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_pannel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_pannel, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_pannel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RSSI = lv_arc_create(ui_maindail);
    lv_obj_set_width(ui_RSSI, 223);
    lv_obj_set_height(ui_RSSI, 214);
    lv_obj_set_x(ui_RSSI, 6);
    lv_obj_set_y(ui_RSSI, 0);
    lv_obj_set_align(ui_RSSI, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_RSSI, 0, 50);
    lv_arc_set_value(ui_RSSI, 25);
    lv_arc_set_bg_angles(ui_RSSI, 120, 190);
    lv_arc_set_rotation(ui_RSSI, 25);
    lv_obj_set_style_arc_color(ui_RSSI, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_RSSI, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_RSSI, lv_color_hex(0xEA77BC), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_RSSI, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_RSSI, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RSSI, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_step = lv_arc_create(ui_maindail);
    lv_obj_set_width(ui_step, 50);
    lv_obj_set_height(ui_step, 50);
    lv_obj_set_x(ui_step, -40);
    lv_obj_set_y(ui_step, 0);
    lv_obj_set_align(ui_step, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_step, 0, 30000);
    lv_arc_set_value(ui_step, 6000);
    lv_obj_set_style_arc_color(ui_step, lv_color_hex(0xDD8862), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_step, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_step, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_step, lv_color_hex(0x2DC16B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_step, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_step, 6, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_step, lv_color_hex(0x88E8C8), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_step, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_step, lv_color_hex(0x3A9C7B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_step, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_step, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_step, LV_GRAD_DIR_VER, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_power = lv_arc_create(ui_maindail);
    lv_obj_set_width(ui_power, 50);
    lv_obj_set_height(ui_power, 50);
    lv_obj_set_x(ui_power, 40);
    lv_obj_set_y(ui_power, 0);
    lv_obj_set_align(ui_power, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_power, 90);
    lv_obj_set_style_arc_color(ui_power, lv_color_hex(0xBD1212), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_power, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_power, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_power, lv_color_hex(0x12BD41), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_power, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_power, 6, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_power, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_power, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Spinner2 = lv_spinner_create(ui_maindail, 1000, 90);
    lv_obj_set_width(ui_Spinner2, 50);
    lv_obj_set_height(ui_Spinner2, 50);
    lv_obj_set_x(ui_Spinner2, 0);
    lv_obj_set_y(ui_Spinner2, 40);
    lv_obj_set_align(ui_Spinner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Spinner2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Spinner2, lv_color_hex(0x222222), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Spinner2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0x2C64C4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner2, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0x2464D1), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner2, 3, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ampm = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_ampm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ampm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ampm, -26);
    lv_obj_set_y(ui_ampm, -60);
    lv_obj_set_align(ui_ampm, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ampm, "AM");
    lv_obj_set_style_text_color(ui_ampm, lv_color_hex(0x84F262), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ampm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ampm, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_time, 1);
    lv_obj_set_y(ui_time, -60);
    lv_obj_set_align(ui_time, LV_ALIGN_CENTER);
    lv_label_set_text(ui_time, "09:12");
    lv_obj_set_style_text_color(ui_time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_week = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_week, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_week, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_week, 0);
    lv_obj_set_y(ui_week, -40);
    lv_obj_set_align(ui_week, LV_ALIGN_CENTER);
    lv_label_set_text(ui_week, "Friday");
    lv_obj_set_style_text_color(ui_week, lv_color_hex(0x64C8B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_week, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_date = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_date, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_date, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_date, 0);
    lv_obj_set_y(ui_date, 33);
    lv_obj_set_align(ui_date, LV_ALIGN_CENTER);
    lv_label_set_text(ui_date, "10");
    lv_obj_set_style_text_color(ui_date, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_date, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_month = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_month, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_month, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_month, 0);
    lv_obj_set_y(ui_month, 50);
    lv_obj_set_align(ui_month, LV_ALIGN_CENTER);
    lv_label_set_text(ui_month, "MAR");
    lv_obj_set_style_text_color(ui_month, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_month, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_stepplus = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_stepplus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_stepplus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_stepplus, -30);
    lv_obj_set_y(ui_stepplus, 20);
    lv_obj_set_align(ui_stepplus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_stepplus, "+");
    lv_obj_set_style_text_color(ui_stepplus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_stepplus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_stepplus, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_stepnegative = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_stepnegative, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_stepnegative, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_stepnegative, -50);
    lv_obj_set_y(ui_stepnegative, 20);
    lv_obj_set_align(ui_stepnegative, LV_ALIGN_CENTER);
    lv_label_set_text(ui_stepnegative, "-");
    lv_obj_set_style_text_color(ui_stepnegative, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_stepnegative, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_stepnegative, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_powerplus = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_powerplus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powerplus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powerplus, 50);
    lv_obj_set_y(ui_powerplus, 20);
    lv_obj_set_align(ui_powerplus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_powerplus, "+");
    lv_obj_set_style_text_color(ui_powerplus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_powerplus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_powerplus, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_powernegative = lv_label_create(ui_maindail);
    lv_obj_set_width(ui_powernegative, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powernegative, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powernegative, 30);
    lv_obj_set_y(ui_powernegative, 20);
    lv_obj_set_align(ui_powernegative, LV_ALIGN_CENTER);
    lv_label_set_text(ui_powernegative, "-");
    lv_obj_set_style_text_color(ui_powernegative, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_powernegative, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_powernegative, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_runingman = lv_img_create(ui_maindail);
    lv_img_set_src(ui_runingman, &ui_img_run_25h_png);
    lv_obj_set_width(ui_runingman, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_runingman, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_runingman, -40);
    lv_obj_set_y(ui_runingman, 1);
    lv_obj_set_align(ui_runingman, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_runingman, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_runingman, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_powerlogo = lv_img_create(ui_maindail);
    lv_img_set_src(ui_powerlogo, &ui_img_powerlogo_png);
    lv_obj_set_width(ui_powerlogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powerlogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powerlogo, 40);
    lv_obj_set_y(ui_powerlogo, 0);
    lv_obj_set_align(ui_powerlogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_powerlogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_powerlogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_powerlogo, 200);

    ui_dial = lv_obj_create(ui_maindail);
    lv_obj_set_width(ui_dial, 180);
    lv_obj_set_height(ui_dial, 180);
    lv_obj_set_align(ui_dial, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dial, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_dial, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dial, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_dial, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_dial, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_minute = lv_img_create(ui_dial);
    lv_img_set_src(ui_minute, &ui_img_1387450172);
    lv_obj_set_width(ui_minute, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_minute, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_minute, 0);
    lv_obj_set_y(ui_minute, -38);
    lv_obj_set_align(ui_minute, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_minute, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_minute, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_minute, 5, 75);

    ui_hour = lv_img_create(ui_dial);
    lv_img_set_src(ui_hour, &ui_img_364787093);
    lv_obj_set_width(ui_hour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour, 0);
    lv_obj_set_y(ui_hour, -23);
    lv_obj_set_align(ui_hour, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_hour, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_hour, 5, 44);

    ui_second = lv_img_create(ui_dial);
    lv_img_set_src(ui_second, &ui_img_827571443);
    lv_obj_set_width(ui_second, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_second, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_second, 0);
    lv_obj_set_y(ui_second, -34);
    lv_obj_set_align(ui_second, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_second, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_second, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_second, 5, 91);
    lv_img_set_angle(ui_second, 3600);

    ui_timestart = lv_btn_create(ui_maindail);
    lv_obj_set_width(ui_timestart, 15);
    lv_obj_set_height(ui_timestart, 15);
    lv_obj_set_x(ui_timestart, 0);
    lv_obj_set_y(ui_timestart, -110);
    lv_obj_set_align(ui_timestart, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_timestart, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_timestart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_timestart, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timestart, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_timestart, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_timestart, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_timestart, ui_event_timestart, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_maindail, ui_event_maindail, LV_EVENT_ALL, NULL);

}
void ui_notepage_screen_init(void)
{
    ui_notepage = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_notepage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_content = lv_obj_create(ui_notepage);
    lv_obj_set_width(ui_content, 250);
    lv_obj_set_height(ui_content, 250);
    lv_obj_set_x(ui_content, 0);
    lv_obj_set_y(ui_content, 5);
    lv_obj_set_align(ui_content, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_content, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_content, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_content, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_content, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Decorationbar = lv_obj_create(ui_content);
    lv_obj_set_width(ui_Decorationbar, 240);
    lv_obj_set_height(ui_Decorationbar, 90);
    lv_obj_set_x(ui_Decorationbar, 0);
    lv_obj_set_y(ui_Decorationbar, -130);
    lv_obj_set_align(ui_Decorationbar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Decorationbar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Decorationbar, lv_color_hex(0x408AFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Decorationbar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_Decorationbar, lv_color_hex(0x0040A7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_Decorationbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_Decorationbar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Decorationbar, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Decorationbar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Decorationbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_notification = lv_label_create(ui_content);
    lv_obj_set_width(ui_notification, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_notification, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_notification, 0);
    lv_obj_set_y(ui_notification, -104);
    lv_obj_set_align(ui_notification, LV_ALIGN_CENTER);
    lv_label_set_text(ui_notification, "Notification");
    lv_obj_set_style_text_color(ui_notification, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_notification, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_notification, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_message = lv_obj_create(ui_content);
    lv_obj_set_width(ui_message, 240);
    lv_obj_set_height(ui_message, 300);
    lv_obj_set_x(ui_message, 0);
    lv_obj_set_y(ui_message, 70);
    lv_obj_set_align(ui_message, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_message, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_message, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_message, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_message, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_message, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twitterbar = lv_obj_create(ui_message);
    lv_obj_set_width(ui_twitterbar, 254);
    lv_obj_set_height(ui_twitterbar, 70);
    lv_obj_set_x(ui_twitterbar, 0);
    lv_obj_set_y(ui_twitterbar, -117);
    lv_obj_set_align(ui_twitterbar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_twitterbar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_twitterbar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twitterbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_twitterbar, lv_color_hex(0xB2A7A7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_twitterbar, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_twitterbar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_twitterbar, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twitter = lv_label_create(ui_twitterbar);
    lv_obj_set_width(ui_twitter, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twitter, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_twitter, 10);
    lv_obj_set_y(ui_twitter, -17);
    lv_obj_set_align(ui_twitter, LV_ALIGN_CENTER);
    lv_label_set_text(ui_twitter, "Twitter");
    lv_obj_set_style_text_color(ui_twitter, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_twitter, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_messagelogo = lv_img_create(ui_twitterbar);
    lv_img_set_src(ui_messagelogo, &ui_img_message_png);
    lv_obj_set_width(ui_messagelogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagelogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagelogo, -35);
    lv_obj_set_y(ui_messagelogo, -18);
    lv_obj_set_align(ui_messagelogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_messagelogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_messagelogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_messagelogo, 200);

    ui_people = lv_img_create(ui_twitterbar);
    lv_img_set_src(ui_people, &ui_img_people1_png);
    lv_obj_set_width(ui_people, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_people, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_people, -68);
    lv_obj_set_y(ui_people, 11);
    lv_obj_set_align(ui_people, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_people, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_people, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_messagecontent = lv_label_create(ui_twitterbar);
    lv_obj_set_width(ui_messagecontent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagecontent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagecontent, 28);
    lv_obj_set_y(ui_messagecontent, 11);
    lv_obj_set_align(ui_messagecontent, LV_ALIGN_CENTER);
    lv_label_set_text(ui_messagecontent, "Are you crazy my friend,\nto use XIAO to make a dial?!");
    lv_obj_set_style_text_color(ui_messagecontent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_messagecontent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_messagecontent, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_messagecontent, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_youtubebar = lv_obj_create(ui_message);
    lv_obj_set_width(ui_youtubebar, 254);
    lv_obj_set_height(ui_youtubebar, 70);
    lv_obj_set_x(ui_youtubebar, 0);
    lv_obj_set_y(ui_youtubebar, -47);
    lv_obj_set_align(ui_youtubebar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_youtubebar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_youtubebar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_youtubebar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_youtubebar, lv_color_hex(0xB2A7A7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_youtubebar, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_youtubebar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_youtubebar, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_youtube = lv_label_create(ui_youtubebar);
    lv_obj_set_width(ui_youtube, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_youtube, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_youtube, 17);
    lv_obj_set_y(ui_youtube, -19);
    lv_obj_set_align(ui_youtube, LV_ALIGN_CENTER);
    lv_label_set_text(ui_youtube, "YouTube");
    lv_obj_set_style_text_color(ui_youtube, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_youtube, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_messagelogo1 = lv_img_create(ui_youtubebar);
    lv_img_set_src(ui_messagelogo1, &ui_img_message_png);
    lv_obj_set_width(ui_messagelogo1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagelogo1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagelogo1, -35);
    lv_obj_set_y(ui_messagelogo1, -18);
    lv_obj_set_align(ui_messagelogo1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_messagelogo1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_messagelogo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_messagelogo1, 200);

    ui_messagecontent1 = lv_label_create(ui_youtubebar);
    lv_obj_set_width(ui_messagecontent1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagecontent1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagecontent1, 0);
    lv_obj_set_y(ui_messagecontent1, 11);
    lv_obj_set_align(ui_messagecontent1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_messagecontent1, "The channel you subscribe to is updated.");
    lv_obj_set_style_text_color(ui_messagecontent1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_messagecontent1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_messagecontent1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_messagecontent1, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gmailbar = lv_obj_create(ui_message);
    lv_obj_set_width(ui_gmailbar, 254);
    lv_obj_set_height(ui_gmailbar, 70);
    lv_obj_set_x(ui_gmailbar, 0);
    lv_obj_set_y(ui_gmailbar, 23);
    lv_obj_set_align(ui_gmailbar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_gmailbar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_gmailbar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_gmailbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_gmailbar, lv_color_hex(0xB2A7A7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_gmailbar, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_gmailbar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_gmailbar, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_gmail = lv_label_create(ui_gmailbar);
    lv_obj_set_width(ui_gmail, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_gmail, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_gmail, 14);
    lv_obj_set_y(ui_gmail, -17);
    lv_obj_set_align(ui_gmail, LV_ALIGN_CENTER);
    lv_label_set_text(ui_gmail, "Google Mail");
    lv_obj_set_style_text_color(ui_gmail, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_gmail, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_messagelogo2 = lv_img_create(ui_gmailbar);
    lv_img_set_src(ui_messagelogo2, &ui_img_message_png);
    lv_obj_set_width(ui_messagelogo2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagelogo2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagelogo2, -47);
    lv_obj_set_y(ui_messagelogo2, -18);
    lv_obj_set_align(ui_messagelogo2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_messagelogo2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_messagelogo2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_messagelogo2, 200);

    ui_people2 = lv_img_create(ui_gmailbar);
    lv_img_set_src(ui_people2, &ui_img_people2_png);
    lv_obj_set_width(ui_people2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_people2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_people2, -49);
    lv_obj_set_y(ui_people2, 12);
    lv_obj_set_align(ui_people2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_people2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_people2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_messagecontent2 = lv_label_create(ui_gmailbar);
    lv_obj_set_width(ui_messagecontent2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagecontent2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagecontent2, 24);
    lv_obj_set_y(ui_messagecontent2, 11);
    lv_obj_set_align(ui_messagecontent2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_messagecontent2, "How are you doing?");
    lv_obj_set_style_text_color(ui_messagecontent2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_messagecontent2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_messagecontent2, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_facebookbar = lv_obj_create(ui_message);
    lv_obj_set_width(ui_facebookbar, 254);
    lv_obj_set_height(ui_facebookbar, 70);
    lv_obj_set_x(ui_facebookbar, 0);
    lv_obj_set_y(ui_facebookbar, 93);
    lv_obj_set_align(ui_facebookbar, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_facebookbar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_facebookbar, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_facebookbar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_facebookbar, lv_color_hex(0xB2A7A7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_facebookbar, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_facebookbar, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_facebookbar, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_facebook = lv_label_create(ui_facebookbar);
    lv_obj_set_width(ui_facebook, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_facebook, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_facebook, 15);
    lv_obj_set_y(ui_facebook, -17);
    lv_obj_set_align(ui_facebook, LV_ALIGN_CENTER);
    lv_label_set_text(ui_facebook, "Fackbook");
    lv_obj_set_style_text_color(ui_facebook, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_facebook, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_messagelogo3 = lv_img_create(ui_facebookbar);
    lv_img_set_src(ui_messagelogo3, &ui_img_message_png);
    lv_obj_set_width(ui_messagelogo3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagelogo3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagelogo3, -35);
    lv_obj_set_y(ui_messagelogo3, -18);
    lv_obj_set_align(ui_messagelogo3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_messagelogo3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_messagelogo3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_messagelogo3, 200);

    ui_messagecontent3 = lv_label_create(ui_facebookbar);
    lv_obj_set_width(ui_messagecontent3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_messagecontent3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_messagecontent3, 0);
    lv_obj_set_y(ui_messagecontent3, 11);
    lv_obj_set_align(ui_messagecontent3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_messagecontent3, "Facebook is ready for an update!");
    lv_obj_set_style_text_color(ui_messagecontent3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_messagecontent3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_messagecontent3, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_backbutton = lv_btn_create(ui_notepage);
    lv_obj_set_width(ui_backbutton, 30);
    lv_obj_set_height(ui_backbutton, 30);
    lv_obj_set_x(ui_backbutton, -110);
    lv_obj_set_y(ui_backbutton, 0);
    lv_obj_set_align(ui_backbutton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_backbutton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_backbutton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_backbutton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_backbutton, 55, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_backbutton, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_backbutton, ui_event_backbutton, LV_EVENT_ALL, NULL);

}
void ui_setting_screen_init(void)
{
    ui_setting = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_setting, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_background = lv_obj_create(ui_setting);
    lv_obj_set_width(ui_background, 240);
    lv_obj_set_height(ui_background, 240);
    lv_obj_set_align(ui_background, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_background, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_background, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_background, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_background, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_date2 = lv_label_create(ui_setting);
    lv_obj_set_width(ui_date2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_date2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_date2, -32);
    lv_obj_set_y(ui_date2, -78);
    lv_obj_set_align(ui_date2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_date2, "3/10");
    lv_obj_set_style_text_color(ui_date2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_date2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_date2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_week2 = lv_label_create(ui_setting);
    lv_obj_set_width(ui_week2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_week2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_week2, 23);
    lv_obj_set_y(ui_week2, -78);
    lv_obj_set_align(ui_week2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_week2, "Friday");
    lv_obj_set_style_text_color(ui_week2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_week2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_week2, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifi = lv_imgbtn_create(ui_setting);
    lv_imgbtn_set_src(ui_wifi, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_wifion2_png, NULL);
    lv_imgbtn_set_src(ui_wifi, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_wifion2_png, NULL);
    lv_imgbtn_set_src(ui_wifi, LV_IMGBTN_STATE_DISABLED, NULL, &ui_img_wifioff2_png, NULL);
    lv_obj_set_width(ui_wifi, 33);
    lv_obj_set_height(ui_wifi, 33);
    lv_obj_set_x(ui_wifi, -70);
    lv_obj_set_y(ui_wifi, 0);
    lv_obj_set_align(ui_wifi, LV_ALIGN_CENTER);

    ui_ble = lv_btn_create(ui_setting);
    lv_obj_set_width(ui_ble, 50);
    lv_obj_set_height(ui_ble, 50);
    lv_obj_set_align(ui_ble, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ble, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ble, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ble, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ble, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ble, &ui_img_bleon2_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ble, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ble, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_ble, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_ble, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ring = lv_btn_create(ui_setting);
    lv_obj_set_width(ui_ring, 50);
    lv_obj_set_height(ui_ring, 50);
    lv_obj_set_x(ui_ring, 70);
    lv_obj_set_y(ui_ring, 0);
    lv_obj_set_align(ui_ring, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ring, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ring, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ring, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ring, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ring, &ui_img_ringon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ring, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ring, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_ring, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_ring, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bluemessage = lv_label_create(ui_setting);
    lv_obj_set_width(ui_bluemessage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bluemessage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_bluemessage, 0);
    lv_obj_set_y(ui_bluemessage, 40);
    lv_obj_set_align(ui_bluemessage, LV_ALIGN_CENTER);
    lv_label_set_text(ui_bluemessage, "Bluetooth");
    lv_obj_set_style_text_color(ui_bluemessage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluemessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluemessage, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_wifimessage = lv_label_create(ui_setting);
    lv_obj_set_width(ui_wifimessage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_wifimessage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_wifimessage, -70);
    lv_obj_set_y(ui_wifimessage, 40);
    lv_obj_set_align(ui_wifimessage, LV_ALIGN_CENTER);
    lv_label_set_text(ui_wifimessage, "WiFi");
    lv_obj_set_style_text_color(ui_wifimessage, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_wifimessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_wifimessage, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Ring = lv_label_create(ui_setting);
    lv_obj_set_width(ui_Ring, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Ring, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Ring, 70);
    lv_obj_set_y(ui_Ring, 40);
    lv_obj_set_align(ui_Ring, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Ring, "Ring");
    lv_obj_set_style_text_color(ui_Ring, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Ring, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Ring, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_wifi, ui_event_wifi, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_setting, ui_event_setting, LV_EVENT_ALL, NULL);

}
void ui_music_screen_init(void)
{
    ui_music = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_music, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_background3 = lv_obj_create(ui_music);
    lv_obj_set_width(ui_background3, 240);
    lv_obj_set_height(ui_background3, 240);
    lv_obj_set_align(ui_background3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_background3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_background3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_background3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_background3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_background3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_musicbg = lv_img_create(ui_music);
    lv_img_set_src(ui_musicbg, &ui_img_music_bg_png);
    lv_obj_set_width(ui_musicbg, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musicbg, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_musicbg, 0);
    lv_obj_set_y(ui_musicbg, -53);
    lv_obj_set_align(ui_musicbg, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_musicbg, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_musicbg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_musicbg, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_musicbg, 150, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sound = lv_arc_create(ui_music);
    lv_obj_set_width(ui_sound, 230);
    lv_obj_set_height(ui_sound, 230);
    lv_obj_set_align(ui_sound, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_sound, 25);
    lv_arc_set_bg_angles(ui_sound, 20, 160);
    lv_obj_set_style_arc_width(ui_sound, 7, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_sound, lv_color_hex(0x2EDA4C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_sound, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_sound, 7, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_sound, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sound, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_songprogress = lv_arc_create(ui_music);
    lv_obj_set_width(ui_songprogress, 230);
    lv_obj_set_height(ui_songprogress, 230);
    lv_obj_set_align(ui_songprogress, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_songprogress, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_arc_set_value(ui_songprogress, 10);
    lv_arc_set_bg_angles(ui_songprogress, 20, 160);
    lv_arc_set_rotation(ui_songprogress, 180);
    lv_obj_set_style_arc_color(ui_songprogress, lv_color_hex(0x202020), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_songprogress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_songprogress, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_songprogress, lv_color_hex(0xD7D7D7), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_songprogress, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_songprogress, 3, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_songprogress, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_songprogress, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_songname = lv_label_create(ui_music);
    lv_obj_set_width(ui_songname, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_songname, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_songname, 0);
    lv_obj_set_y(ui_songname, -30);
    lv_obj_set_align(ui_songname, LV_ALIGN_CENTER);
    lv_label_set_text(ui_songname, "YOASOBI  -  Halzion");
    lv_obj_set_style_text_color(ui_songname, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_songname, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_songname, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_musictime = lv_label_create(ui_music);
    lv_obj_set_width(ui_musictime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_musictime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_musictime, LV_ALIGN_CENTER);
    lv_label_set_text(ui_musictime, "0:53  |  3:23");
    lv_obj_set_style_text_color(ui_musictime, lv_color_hex(0xB7B7B7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_musictime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_musictime, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_up = lv_imgbtn_create(ui_music);
    lv_imgbtn_set_src(ui_up, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_up2_png, NULL);
    lv_imgbtn_set_src(ui_up, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_up2_png, NULL);
    lv_obj_set_height(ui_up, 40);
    lv_obj_set_width(ui_up, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_x(ui_up, -50);
    lv_obj_set_y(ui_up, 50);
    lv_obj_set_align(ui_up, LV_ALIGN_CENTER);

    ui_next = lv_imgbtn_create(ui_music);
    lv_imgbtn_set_src(ui_next, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_next_png, NULL);
    lv_imgbtn_set_src(ui_next, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_next_png, NULL);
    lv_obj_set_height(ui_next, 40);
    lv_obj_set_width(ui_next, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_x(ui_next, 50);
    lv_obj_set_y(ui_next, 50);
    lv_obj_set_align(ui_next, LV_ALIGN_CENTER);

    ui_play = lv_imgbtn_create(ui_music);
    lv_imgbtn_set_src(ui_play, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_palyer_png, NULL);
    lv_imgbtn_set_src(ui_play, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_palyer_png, NULL);
    lv_imgbtn_set_src(ui_play, LV_IMGBTN_STATE_DISABLED, NULL, &ui_img_stop_png, NULL);
    lv_obj_set_height(ui_play, 40);
    lv_obj_set_width(ui_play, LV_SIZE_CONTENT);   /// 40
    lv_obj_set_x(ui_play, 0);
    lv_obj_set_y(ui_play, 50);
    lv_obj_set_align(ui_play, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_play, ui_event_play, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_music, ui_event_music, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_maindail_screen_init();
    ui_notepage_screen_init();
    ui_setting_screen_init();
    ui_music_screen_init();
    lv_disp_load_scr(ui_maindail);
}
