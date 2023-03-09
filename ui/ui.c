// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: xiao-display

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_pannel;
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
lv_obj_t * ui_Arc1;
lv_obj_t * ui_dial;
lv_obj_t * ui_second;
lv_obj_t * ui_minute;
lv_obj_t * ui_hour;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_pannel = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_pannel, &ui_img_pannel_240w_png);
    lv_obj_set_width(ui_pannel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pannel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_pannel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_pannel, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_pannel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_step = lv_arc_create(ui_Screen1);
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

    ui_power = lv_arc_create(ui_Screen1);
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

    ui_Spinner2 = lv_spinner_create(ui_Screen1, 1000, 90);
    lv_obj_set_width(ui_Spinner2, 50);
    lv_obj_set_height(ui_Spinner2, 50);
    lv_obj_set_x(ui_Spinner2, 0);
    lv_obj_set_y(ui_Spinner2, 40);
    lv_obj_set_align(ui_Spinner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Spinner2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Spinner2, lv_color_hex(0x222222), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Spinner2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner2, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_Spinner2, 3, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_ampm = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_ampm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ampm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ampm, -26);
    lv_obj_set_y(ui_ampm, -60);
    lv_obj_set_align(ui_ampm, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ampm, "AM");
    lv_obj_set_style_text_color(ui_ampm, lv_color_hex(0x84F262), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ampm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ampm, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_time = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_time, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_time, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_time, 1);
    lv_obj_set_y(ui_time, -60);
    lv_obj_set_align(ui_time, LV_ALIGN_CENTER);
    lv_label_set_text(ui_time, "15:34");
    lv_obj_set_style_text_color(ui_time, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_time, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_week = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_week, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_week, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_week, 0);
    lv_obj_set_y(ui_week, -40);
    lv_obj_set_align(ui_week, LV_ALIGN_CENTER);
    lv_label_set_text(ui_week, "Friday");
    lv_obj_set_style_text_color(ui_week, lv_color_hex(0x64C8B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_week, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_date = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_date, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_date, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_date, 0);
    lv_obj_set_y(ui_date, 33);
    lv_obj_set_align(ui_date, LV_ALIGN_CENTER);
    lv_label_set_text(ui_date, "18");
    lv_obj_set_style_text_color(ui_date, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_date, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_month = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_month, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_month, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_month, 0);
    lv_obj_set_y(ui_month, 50);
    lv_obj_set_align(ui_month, LV_ALIGN_CENTER);
    lv_label_set_text(ui_month, "Oct");
    lv_obj_set_style_text_color(ui_month, lv_color_hex(0xB4B4B4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_month, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_stepplus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_stepplus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_stepplus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_stepplus, -30);
    lv_obj_set_y(ui_stepplus, 20);
    lv_obj_set_align(ui_stepplus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_stepplus, "+");
    lv_obj_set_style_text_color(ui_stepplus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_stepplus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_stepplus, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_stepnegative = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_stepnegative, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_stepnegative, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_stepnegative, -50);
    lv_obj_set_y(ui_stepnegative, 20);
    lv_obj_set_align(ui_stepnegative, LV_ALIGN_CENTER);
    lv_label_set_text(ui_stepnegative, "-");
    lv_obj_set_style_text_color(ui_stepnegative, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_stepnegative, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_stepnegative, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_powerplus = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_powerplus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powerplus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powerplus, 50);
    lv_obj_set_y(ui_powerplus, 20);
    lv_obj_set_align(ui_powerplus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_powerplus, "+");
    lv_obj_set_style_text_color(ui_powerplus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_powerplus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_powerplus, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_powernegative = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_powernegative, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powernegative, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powernegative, 30);
    lv_obj_set_y(ui_powernegative, 20);
    lv_obj_set_align(ui_powernegative, LV_ALIGN_CENTER);
    lv_label_set_text(ui_powernegative, "-");
    lv_obj_set_style_text_color(ui_powernegative, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_powernegative, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_powernegative, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_runingman = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_runingman, &ui_img_run_25h_png);
    lv_obj_set_width(ui_runingman, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_runingman, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_runingman, -40);
    lv_obj_set_y(ui_runingman, 1);
    lv_obj_set_align(ui_runingman, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_runingman, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_runingman, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_powerlogo = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_powerlogo, &ui_img_powerlogo_png);
    lv_obj_set_width(ui_powerlogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_powerlogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_powerlogo, 40);
    lv_obj_set_y(ui_powerlogo, 0);
    lv_obj_set_align(ui_powerlogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_powerlogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_powerlogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_powerlogo, 200);

    ui_Arc1 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1, 223);
    lv_obj_set_height(ui_Arc1, 214);
    lv_obj_set_x(ui_Arc1, 6);
    lv_obj_set_y(ui_Arc1, 0);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Arc1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_arc_set_range(ui_Arc1, 0, 50);
    lv_arc_set_value(ui_Arc1, 20);
    lv_arc_set_bg_angles(ui_Arc1, 120, 190);
    lv_arc_set_rotation(ui_Arc1, 25);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x2ED55C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x4040FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_dial = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_dial, 240);
    lv_obj_set_height(ui_dial, 240);
    lv_obj_set_align(ui_dial, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dial, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_dial, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dial, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_second = lv_img_create(ui_dial);
    lv_img_set_src(ui_second, &ui_img_second_120_png);
    lv_obj_set_width(ui_second, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_second, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_second, 0);
    lv_obj_set_y(ui_second, 30);
    lv_obj_set_align(ui_second, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_second, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_second, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_second, 5, 29);

    ui_minute = lv_img_create(ui_dial);
    lv_img_set_src(ui_minute, &ui_img_minute_80_png);
    lv_obj_set_width(ui_minute, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_minute, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_minute, 0);
    lv_obj_set_y(ui_minute, 34);
    lv_obj_set_align(ui_minute, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_minute, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_minute, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_minute, 5, 5);

    ui_hour = lv_img_create(ui_dial);
    lv_img_set_src(ui_hour, &ui_img_hour_png);
    lv_obj_set_width(ui_hour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour, 0);
    lv_obj_set_y(ui_hour, 19);
    lv_obj_set_align(ui_hour, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_hour, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_hour, 5, 4);
    lv_img_set_angle(ui_hour, 300);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
