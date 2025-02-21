#pragma once

// (C) Copyright Takayama Fumihiko 2020.
// Distributed under the Boost Software License, Version 1.0.
// (See http://www.boost.org/LICENSE_1_0.txt)

#include <compare>
#include <functional>
#include <iostream>
#include <type_safe/strong_typedef.hpp>

namespace pqrs {
namespace hid {
namespace usage {
struct value_t : type_safe::strong_typedef<value_t, int32_t>,
                 type_safe::strong_typedef_op::equality_comparison<value_t>,
                 type_safe::strong_typedef_op::relational_comparison<value_t>,
                 type_safe::strong_typedef_op::increment<value_t>,
                 type_safe::strong_typedef_op::decrement<value_t> {
  using strong_typedef::strong_typedef;

  constexpr auto operator<=>(const value_t& other) const {
    return type_safe::get(*this) <=> type_safe::get(other);
  }
};

inline std::ostream& operator<<(std::ostream& stream, const value_t& value) {
  return stream << type_safe::get(value);
}

constexpr value_t undefined(0x00);

//
// usage_page::generic_desktop
//

namespace generic_desktop {
constexpr value_t undefined(0x00);
constexpr value_t pointer(0x01);
constexpr value_t mouse(0x02);
// Reserved 0x03
constexpr value_t joystick(0x04);
constexpr value_t game_pad(0x05);
constexpr value_t keyboard(0x06);
constexpr value_t keypad(0x07);
constexpr value_t multi_axis_controller(0x08);
constexpr value_t tablet_pc_system_controls(0x09);
// Reserved 0x0a - 0x2f
constexpr value_t x(0x30);
constexpr value_t y(0x31);
constexpr value_t z(0x32);
constexpr value_t rx(0x33);
constexpr value_t ry(0x34);
constexpr value_t rz(0x35);
constexpr value_t slider(0x36);
constexpr value_t dial(0x37);
constexpr value_t wheel(0x38);
constexpr value_t hat_switch(0x39);
} // namespace generic_desktop

//
// usage_page::keyboard_or_keypad
//

namespace keyboard_or_keypad {
// Reserved 0x00
constexpr value_t error_rollover(0x01);
constexpr value_t post_fail(0x02);
constexpr value_t error_undefined(0x03);
constexpr value_t keyboard_a(0x04);
constexpr value_t keyboard_b(0x05);
constexpr value_t keyboard_c(0x06);
constexpr value_t keyboard_d(0x07);
constexpr value_t keyboard_e(0x08);
constexpr value_t keyboard_f(0x09);
constexpr value_t keyboard_g(0x0a);
constexpr value_t keyboard_h(0x0b);
constexpr value_t keyboard_i(0x0c);
constexpr value_t keyboard_j(0x0d);
constexpr value_t keyboard_k(0x0e);
constexpr value_t keyboard_l(0x0f);
constexpr value_t keyboard_m(0x10);
constexpr value_t keyboard_n(0x11);
constexpr value_t keyboard_o(0x12);
constexpr value_t keyboard_p(0x13);
constexpr value_t keyboard_q(0x14);
constexpr value_t keyboard_r(0x15);
constexpr value_t keyboard_s(0x16);
constexpr value_t keyboard_t(0x17);
constexpr value_t keyboard_u(0x18);
constexpr value_t keyboard_v(0x19);
constexpr value_t keyboard_w(0x1a);
constexpr value_t keyboard_x(0x1b);
constexpr value_t keyboard_y(0x1c);
constexpr value_t keyboard_z(0x1d);
constexpr value_t keyboard_1(0x1e);
constexpr value_t keyboard_2(0x1f);
constexpr value_t keyboard_3(0x20);
constexpr value_t keyboard_4(0x21);
constexpr value_t keyboard_5(0x22);
constexpr value_t keyboard_6(0x23);
constexpr value_t keyboard_7(0x24);
constexpr value_t keyboard_8(0x25);
constexpr value_t keyboard_9(0x26);
constexpr value_t keyboard_0(0x27);
constexpr value_t keyboard_return_or_enter(0x28);
constexpr value_t keyboard_escape(0x29);
constexpr value_t keyboard_delete_or_backspace(0x2a);
constexpr value_t keyboard_tab(0x2b);
constexpr value_t keyboard_spacebar(0x2c);
constexpr value_t keyboard_hyphen(0x2d);
constexpr value_t keyboard_equal_sign(0x2e);
constexpr value_t keyboard_open_bracket(0x2f);
constexpr value_t keyboard_close_bracket(0x30);
constexpr value_t keyboard_backslash(0x31);
constexpr value_t keyboard_non_us_pound(0x32);
constexpr value_t keyboard_semicolon(0x33);
constexpr value_t keyboard_quote(0x34);
constexpr value_t keyboard_grave_accent_and_tilde(0x35);
constexpr value_t keyboard_comma(0x36);
constexpr value_t keyboard_period(0x37);
constexpr value_t keyboard_slash(0x38);
constexpr value_t keyboard_caps_lock(0x39);
constexpr value_t keyboard_f1(0x3a);
constexpr value_t keyboard_f2(0x3b);
constexpr value_t keyboard_f3(0x3c);
constexpr value_t keyboard_f4(0x3d);
constexpr value_t keyboard_f5(0x3e);
constexpr value_t keyboard_f6(0x3f);
constexpr value_t keyboard_f7(0x40);
constexpr value_t keyboard_f8(0x41);
constexpr value_t keyboard_f9(0x42);
constexpr value_t keyboard_f10(0x43);
constexpr value_t keyboard_f11(0x44);
constexpr value_t keyboard_f12(0x45);
constexpr value_t keyboard_print_screen(0x46);
constexpr value_t keyboard_scroll_lock(0x47);
constexpr value_t keyboard_pause(0x48);
constexpr value_t keyboard_insert(0x49);
constexpr value_t keyboard_home(0x4a);
constexpr value_t keyboard_page_up(0x4b);
constexpr value_t keyboard_delete_forward(0x4c);
constexpr value_t keyboard_end(0x4d);
constexpr value_t keyboard_page_down(0x4e);
constexpr value_t keyboard_right_arrow(0x4f);
constexpr value_t keyboard_left_arrow(0x50);
constexpr value_t keyboard_down_arrow(0x51);
constexpr value_t keyboard_up_arrow(0x52);
constexpr value_t keypad_num_lock(0x53);
constexpr value_t keypad_slash(0x54);
constexpr value_t keypad_asterisk(0x55);
constexpr value_t keypad_hyphen(0x56);
constexpr value_t keypad_plus(0x57);
constexpr value_t keypad_enter(0x58);
constexpr value_t keypad_1(0x59);
constexpr value_t keypad_2(0x5a);
constexpr value_t keypad_3(0x5b);
constexpr value_t keypad_4(0x5c);
constexpr value_t keypad_5(0x5d);
constexpr value_t keypad_6(0x5e);
constexpr value_t keypad_7(0x5f);
constexpr value_t keypad_8(0x60);
constexpr value_t keypad_9(0x61);
constexpr value_t keypad_0(0x62);
constexpr value_t keypad_period(0x63);
constexpr value_t keyboard_non_us_backslash(0x64);
constexpr value_t keyboard_application(0x65);
constexpr value_t keyboard_power(0x66);
constexpr value_t keypad_equal_sign(0x67);
constexpr value_t keyboard_f13(0x68);
constexpr value_t keyboard_f14(0x69);
constexpr value_t keyboard_f15(0x6a);
constexpr value_t keyboard_f16(0x6b);
constexpr value_t keyboard_f17(0x6c);
constexpr value_t keyboard_f18(0x6d);
constexpr value_t keyboard_f19(0x6e);
constexpr value_t keyboard_f20(0x6f);
constexpr value_t keyboard_f21(0x70);
constexpr value_t keyboard_f22(0x71);
constexpr value_t keyboard_f23(0x72);
constexpr value_t keyboard_f24(0x73);
constexpr value_t keyboard_execute(0x74);
constexpr value_t keyboard_help(0x75);
constexpr value_t keyboard_menu(0x76);
constexpr value_t keyboard_select(0x77);
constexpr value_t keyboard_stop(0x78);
constexpr value_t keyboard_again(0x79);
constexpr value_t keyboard_undo(0x7a);
constexpr value_t keyboard_cut(0x7b);
constexpr value_t keyboard_copy(0x7c);
constexpr value_t keyboard_paste(0x7d);
constexpr value_t keyboard_find(0x7e);
constexpr value_t keyboard_mute(0x7f);
constexpr value_t keyboard_volume_up(0x80);
constexpr value_t keyboard_volume_down(0x81);
constexpr value_t keyboard_locking_caps_lock(0x82);
constexpr value_t keyboard_locking_num_lock(0x83);
constexpr value_t keyboard_locking_scroll_lock(0x84);
constexpr value_t keypad_comma(0x85);
constexpr value_t keypad_equal_sign_as400(0x86);
constexpr value_t keyboard_international1(0x87);
constexpr value_t keyboard_international2(0x88);
constexpr value_t keyboard_international3(0x89);
constexpr value_t keyboard_international4(0x8a);
constexpr value_t keyboard_international5(0x8b);
constexpr value_t keyboard_international6(0x8c);
constexpr value_t keyboard_international7(0x8d);
constexpr value_t keyboard_international8(0x8e);
constexpr value_t keyboard_international9(0x8f);
constexpr value_t keyboard_lang1(0x90);
constexpr value_t keyboard_lang2(0x91);
constexpr value_t keyboard_lang3(0x92);
constexpr value_t keyboard_lang4(0x93);
constexpr value_t keyboard_lang5(0x94);
constexpr value_t keyboard_lang6(0x95);
constexpr value_t keyboard_lang7(0x96);
constexpr value_t keyboard_lang8(0x97);
constexpr value_t keyboard_lang9(0x98);
constexpr value_t keyboard_alternate_erase(0x99);
constexpr value_t keyboard_sys_req_or_attention(0x9a);
constexpr value_t keyboard_cancel(0x9b);
constexpr value_t keyboard_clear(0x9c);
constexpr value_t keyboard_prior(0x9d);
constexpr value_t keyboard_return(0x9e);
constexpr value_t keyboard_separator(0x9f);
constexpr value_t keyboard_out(0xa0);
constexpr value_t keyboard_oper(0xa1);
constexpr value_t keyboard_clear_or_again(0xa2);
constexpr value_t keyboard_cr_sel_or_props(0xa3);
constexpr value_t keyboard_ex_sel(0xa4);
// Reserved 0xa5 - 0xaf
// Skip 0xb0 - 0xdd (keypad usages)
// Reserved 0xde - 0xdf
constexpr value_t keyboard_left_control(0xe0);
constexpr value_t keyboard_left_shift(0xe1);
constexpr value_t keyboard_left_alt(0xe2);
constexpr value_t keyboard_left_gui(0xe3);
constexpr value_t keyboard_right_control(0xe4);
constexpr value_t keyboard_right_shift(0xe5);
constexpr value_t keyboard_right_alt(0xe6);
constexpr value_t keyboard_right_gui(0xe7);
// Reserved 0xe8 - 0xffff
constexpr value_t reserved(0xffff);
} // namespace keyboard_or_keypad

//
// usage_page::leds
//

namespace led {
constexpr value_t undefined(0x00);
constexpr value_t num_lock(0x01);
constexpr value_t caps_lock(0x02);
constexpr value_t scroll_lock(0x03);
} // namespace led

//
// usage_page::button
//

namespace button {
constexpr value_t button_1(0x01);
constexpr value_t button_2(0x02);
constexpr value_t button_3(0x03);
constexpr value_t button_4(0x04);
constexpr value_t button_5(0x05);
constexpr value_t button_6(0x06);
constexpr value_t button_7(0x07);
constexpr value_t button_8(0x08);
constexpr value_t button_9(0x09);
constexpr value_t button_10(0x0a);
constexpr value_t button_11(0x0b);
constexpr value_t button_12(0x0c);
constexpr value_t button_13(0x0d);
constexpr value_t button_14(0x0e);
constexpr value_t button_15(0x0f);
constexpr value_t button_16(0x10);
constexpr value_t button_17(0x11);
constexpr value_t button_18(0x12);
constexpr value_t button_19(0x13);
constexpr value_t button_20(0x14);
constexpr value_t button_21(0x15);
constexpr value_t button_22(0x16);
constexpr value_t button_23(0x17);
constexpr value_t button_24(0x18);
constexpr value_t button_25(0x19);
constexpr value_t button_26(0x1a);
constexpr value_t button_27(0x1b);
constexpr value_t button_28(0x1c);
constexpr value_t button_29(0x1d);
constexpr value_t button_30(0x1e);
constexpr value_t button_31(0x1f);
constexpr value_t button_32(0x20);
} // namespace button

//
// usage_page::consumer
//

namespace consumer {
constexpr value_t consumer_control(0x0001);
constexpr value_t power(0x0030);
constexpr value_t menu(0x0040);
constexpr value_t display_brightness_increment(0x006f); // from macOS IOHIDUsageTables.h
constexpr value_t display_brightness_decrement(0x0070); // from macOS IOHIDUsageTables.h
constexpr value_t fast_forward(0x00b3);
constexpr value_t rewind(0x00b4);
constexpr value_t scan_next_track(0x00b5);
constexpr value_t scan_previous_track(0x00b6);
constexpr value_t eject(0x00b8);
constexpr value_t play_or_pause(0x00cd);
constexpr value_t voice_command(0x00cf);
constexpr value_t mute(0x00e2);
constexpr value_t volume_increment(0x00e9);
constexpr value_t volume_decrement(0x00ea);

// application launch buttons

constexpr value_t al_word_processor(0x0184);
constexpr value_t al_text_editor(0x0185);
constexpr value_t al_spreadsheet(0x0186);
constexpr value_t al_graphics_editor(0x0187);
constexpr value_t al_presentation_app(0x0188);
constexpr value_t al_database_app(0x0189);
constexpr value_t al_email_reader(0x018a);
constexpr value_t al_newsreader(0x018b);
constexpr value_t al_voicemail(0x018c);
constexpr value_t al_contacts_or_address_book(0x018d);
constexpr value_t al_Calendar_Or_Schedule(0x018E);
constexpr value_t al_task_or_project_manager(0x018f);
constexpr value_t al_log_or_journal_or_timecard(0x0190);
constexpr value_t al_checkbook_or_finance(0x0191);
constexpr value_t al_calculator(0x0192);
constexpr value_t al_a_or_v_capture_or_playback(0x0193);
constexpr value_t al_local_machine_browser(0x0194);
constexpr value_t al_lan_or_wan_browser(0x0195);
constexpr value_t al_internet_browser(0x0196);
constexpr value_t al_remote_networking_or_isp_connect(0x0197);
constexpr value_t al_network_conference(0x0198);
constexpr value_t al_network_chat(0x0199);
constexpr value_t al_telephony_or_dialer(0x019a);
constexpr value_t al_logon(0x019b);
constexpr value_t al_logoff(0x019c);
constexpr value_t al_logon_or_logoff(0x019d);
constexpr value_t al_terminal_lock_or_screensaver(0x019e);
constexpr value_t al_control_panel(0x019f);
constexpr value_t al_command_line_processor_or_run(0x01a0);
constexpr value_t al_process_or_task_manager(0x01a1);
constexpr value_t al_select_task_or_application(0x01a2);
constexpr value_t al_next_task_or_application(0x01a3);
constexpr value_t al_previous_task_or_application(0x01a4);
constexpr value_t al_preemptive_halt_task_or_application(0x01a5);
constexpr value_t al_integrated_help_center(0x01a6);
constexpr value_t al_documents(0x01a7);
constexpr value_t al_thesaurus(0x01a8);
constexpr value_t al_dictionary(0x01a9);
constexpr value_t al_desktop(0x01aa);
constexpr value_t al_spell_check(0x01ab);
constexpr value_t al_grammer_check(0x01ac);
constexpr value_t al_wireless_status(0x01ad);
constexpr value_t al_keyboard_layout(0x01ae);
constexpr value_t al_virus_protection(0x01af);
constexpr value_t al_encryption(0x01b0);
constexpr value_t al_screen_saver(0x01b1);
constexpr value_t al_alarms(0x01b2);
constexpr value_t al_clock(0x01b3);
constexpr value_t al_file_browser(0x01b4);
constexpr value_t al_power_status(0x01b5);
constexpr value_t al_image_browser(0x01b6);
constexpr value_t al_audio_browser(0x01b7);
constexpr value_t al_movie_browser(0x01b8);
constexpr value_t al_digital_rights_manager(0x01b9);
constexpr value_t al_digital_wallet(0x01ba);
constexpr value_t al_instant_messaging(0x01bc);
constexpr value_t al_oem_feature_browser(0x01bd);
constexpr value_t al_oem_help(0x01be);
constexpr value_t al_online_community(0x01bf);
constexpr value_t al_entertainment_content_browser(0x01c0);
constexpr value_t al_online_shopping_browswer(0x01c1);
constexpr value_t al_smart_card_information_or_help(0x01c2);
constexpr value_t al_market_monitor_or_finance_browser(0x01c3);
constexpr value_t al_customized_corporate_news_browser(0x01c4);
constexpr value_t al_online_activity_browswer(0x01c5);
constexpr value_t al_research_or_search_browswer(0x01c6);
constexpr value_t al_audio_player(0x01c7);
constexpr value_t al_message_status(0x01c8);
constexpr value_t al_contact_sync(0x01c9);
constexpr value_t al_navigation(0x01ca);
constexpr value_t al_contextaware_desktop_assistant(0x01cb);

// generic gui application controls

constexpr value_t ac_home(0x0223);
constexpr value_t ac_back(0x0224);
constexpr value_t ac_forward(0x0225);
constexpr value_t ac_refresh(0x0227);
constexpr value_t ac_bookmarks(0x022a);
constexpr value_t ac_pan(0x0238); // Horizontal mouse wheel

} // namespace consumer

//
// usage_page::apple_vendor
//

namespace apple_vendor {
constexpr value_t top_case(0x0001);
constexpr value_t display(0x0002);
constexpr value_t accelerometer(0x0003);
constexpr value_t ambient_light_sensor(0x0004);
constexpr value_t temperature_sensor(0x0005);
constexpr value_t keyboard(0x0006);
constexpr value_t headset(0x0007);
constexpr value_t proximity_sensor(0x0008);
constexpr value_t gyro(0x0009);
constexpr value_t compass(0x000A);
constexpr value_t device_management(0x000B);
constexpr value_t trackpad(0x000C);
constexpr value_t top_case_reserved(0x000D);
constexpr value_t motion(0x000E);
constexpr value_t keyboard_backlight(0x000F);
constexpr value_t device_motion_lite(0x0010);
constexpr value_t force(0x0011);
constexpr value_t bluetooth_radio(0x0012);
constexpr value_t orb(0x0013);
constexpr value_t accessory_battery(0x0014);
constexpr value_t humidity(0x0015);
constexpr value_t hid_event_relay(0x0016);
constexpr value_t nx_event(0x0017);
constexpr value_t nx_event_translated(0x0018);
constexpr value_t nx_event_diagnostic(0x0019);
constexpr value_t homer(0x0020);
constexpr value_t color(0x0021);
constexpr value_t accessibility(0x0022);
} // namespace apple_vendor

//
// usage_page::apple_vendor_keyboard
//

namespace apple_vendor_keyboard {
constexpr value_t spotlight(0x0001);
constexpr value_t dashboard(0x0002);
constexpr value_t function(0x0003);
constexpr value_t launchpad(0x0004);
constexpr value_t reserved(0x000a);
constexpr value_t caps_lock_delay_enable(0x000b);
constexpr value_t power_state(0x000c);
constexpr value_t expose_all(0x0010);
constexpr value_t expose_desktop(0x0011);
constexpr value_t brightness_up(0x0020);
constexpr value_t brightness_down(0x0021);
constexpr value_t language(0x0030);
} // namespace apple_vendor_keyboard

//
// usage_page::apple_vendor_multitouch
//

namespace apple_vendor_multitouch {
constexpr value_t power_off(0x0001);
constexpr value_t device_ready(0x0002);
constexpr value_t external_message(0x0003);
constexpr value_t will_power_on(0x0004);
constexpr value_t touch_cancel(0x0005);
} // namespace apple_vendor_multitouch

//
// usage_page::apple_vendor_top_case
//

namespace apple_vendor_top_case {
constexpr value_t keyboard_fn(0x0003);
constexpr value_t brightness_up(0x0004);
constexpr value_t brightness_down(0x0005);
constexpr value_t video_mirror(0x0006);
constexpr value_t illumination_toggle(0x0007);
constexpr value_t illumination_up(0x0008);
constexpr value_t illumination_down(0x0009);
constexpr value_t clamshell_latched(0x000a);
constexpr value_t reserved_mouse_data(0x00c0);
} // namespace apple_vendor_top_case
} // namespace usage
} // namespace hid
} // namespace pqrs

namespace std {
template <>
struct hash<pqrs::hid::usage::value_t> : type_safe::hashable<pqrs::hid::usage::value_t> {
};
} // namespace std
