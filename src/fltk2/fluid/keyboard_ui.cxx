// generated by Fast Light User Interface Designer (fluid) version 0.99
#include "keyboard_ui.h"

fltk::Window *make_window() {
 fltk::Window *w;
 {fltk::Window* o = new fltk::Window(494, 193);
  w = o;
 }
 {fltk::Button* o = new fltk::Button(15, 50, 20, 20, "Esc");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Escape));
 }
 {fltk::Button* o = new fltk::Button(50, 50, 20, 20, "F1");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+1));
 }
 {fltk::Button* o = new fltk::Button(70, 50, 20, 20, "F2");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+2));
 }
 {fltk::Button* o = new fltk::Button(90, 50, 20, 20, "F3");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+3));
 }
 {fltk::Button* o = new fltk::Button(110, 50, 20, 20, "F4");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+4));
 }
 {fltk::Button* o = new fltk::Button(140, 50, 20, 20, "F5");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+5));
 }
 {fltk::Button* o = new fltk::Button(160, 50, 20, 20, "F6");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+6));
 }
 {fltk::Button* o = new fltk::Button(180, 50, 20, 20, "F7");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+7));
 }
 {fltk::Button* o = new fltk::Button(200, 50, 20, 20, "F8");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+8));
 }
 {fltk::Button* o = new fltk::Button(230, 50, 20, 20, "F9");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+9));
 }
 {fltk::Button* o = new fltk::Button(250, 50, 20, 20, "F10");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+10));
 }
 {fltk::Button* o = new fltk::Button(270, 50, 20, 20, "F11");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+11));
 }
 {fltk::Button* o = new fltk::Button(290, 50, 20, 20, "F12");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::F+12));
 }
 {fltk::Button* o = new fltk::Button(325, 50, 20, 20, "Print");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Print));
 }
 {fltk::Button* o = new fltk::Button(345, 50, 20, 20, "Sclk");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Scroll_Lock));
 }
 {fltk::Button* o = new fltk::Button(365, 50, 20, 20, "Paus");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Pause));
 }
 {fltk::Button* o = new fltk::Button(15, 80, 20, 20, "`");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(35, 80, 20, 20, "1");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(55, 80, 20, 20, "2");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(75, 80, 20, 20, "3");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(95, 80, 20, 20, "4");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(115, 80, 20, 20, "5");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(135, 80, 20, 20, "6");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(155, 80, 20, 20, "7");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(175, 80, 20, 20, "8");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(195, 80, 20, 20, "9");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(215, 80, 20, 20, "0");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(235, 80, 20, 20, "-");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(255, 80, 20, 20, "=");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(275, 80, 35, 20, "Bksp");
  o->labeltype(fltk::SYMBOL_LABEL);
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::BackSpace));
 }
 {fltk::Button* o = new fltk::Button(325, 80, 20, 20, "Ins");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Insert));
 }
 {fltk::Button* o = new fltk::Button(345, 80, 20, 20, "Home");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Home));
 }
 {fltk::Button* o = new fltk::Button(365, 80, 20, 20, "pgup");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Page_Up));
 }
 {fltk::Button* o = new fltk::Button(400, 80, 20, 20, "Num");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Num_Lock));
 }
 {fltk::Button* o = new fltk::Button(420, 80, 20, 20, "/");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'/'));
 }
 {fltk::Button* o = new fltk::Button(440, 80, 20, 20, "*");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'*'));
 }
 {fltk::Button* o = new fltk::Button(460, 80, 20, 20, "-");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'-'));
 }
 {fltk::Button* o = new fltk::Button(15, 100, 27, 20, "Tab");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Tab));
 }
 {fltk::Button* o = new fltk::Button(42, 100, 20, 20, "Q");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(62, 100, 20, 20, "W");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(82, 100, 20, 20, "E");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(102, 100, 20, 20, "R");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(122, 100, 20, 20, "T");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(142, 100, 20, 20, "Y");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(162, 100, 20, 20, "U");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(182, 100, 20, 20, "I");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(202, 100, 20, 20, "O");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(222, 100, 20, 20, "P");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(242, 100, 20, 20, "[");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(262, 100, 20, 20, "]");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(282, 100, 28, 20, "\\");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)('|'));
  o->align(20);
 }
 {fltk::Button* o = new fltk::Button(325, 100, 20, 20, "Del");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Delete));
 }
 {fltk::Button* o = new fltk::Button(345, 100, 20, 20, "End");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::End));
 }
 {fltk::Button* o = new fltk::Button(365, 100, 20, 20, "pgdn");
  o->labelsize(8);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Page_Down));
 }
 {fltk::Button* o = new fltk::Button(400, 100, 20, 20, "7");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'7'));
 }
 {fltk::Button* o = new fltk::Button(420, 100, 20, 20, "8");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'8'));
 }
 {fltk::Button* o = new fltk::Button(440, 100, 20, 20, "9");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'9'));
 }
 {fltk::Button* o = new fltk::Button(460, 100, 20, 40, "+");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'+'));
  o->align(17);
 }
 {fltk::Button* o = new fltk::Button(15, 120, 36, 20, "Lock");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Caps_Lock));
 }
 {fltk::Button* o = new fltk::Button(51, 120, 20, 20, "A");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(71, 120, 20, 20, "S");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(91, 120, 20, 20, "D");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(111, 120, 20, 20, "F");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(131, 120, 20, 20, "G");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(151, 120, 20, 20, "H");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(171, 120, 20, 20, "J");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(191, 120, 20, 20, "K");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(211, 120, 20, 20, "L");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(231, 120, 20, 20, ";");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(251, 120, 20, 20, "\'");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(271, 120, 39, 20, "Enter");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Enter));
 }
 {fltk::Button* o = new fltk::Button(400, 120, 20, 20, "4");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'4'));
 }
 {fltk::Button* o = new fltk::Button(420, 120, 20, 20, "5");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'5'));
 }
 {fltk::Button* o = new fltk::Button(440, 120, 20, 20, "6");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'6'));
 }
 {fltk::Button* o = new fltk::Button(15, 140, 45, 20, "Shift");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Shift_L));
 }
 {fltk::Button* o = new fltk::Button(60, 140, 20, 20, "Z");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(80, 140, 20, 20, "X");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(100, 140, 20, 20, "C");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(120, 140, 20, 20, "V");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(140, 140, 20, 20, "B");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(160, 140, 20, 20, "N");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(180, 140, 20, 20, "M");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(200, 140, 20, 20, ",");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(220, 140, 20, 20, ".");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(240, 140, 20, 20, "/");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb);
 }
 {fltk::Button* o = new fltk::Button(260, 140, 50, 20, "Shift");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Shift_R));
 }
 {fltk::Button* o = new fltk::Button(345, 140, 20, 20, "@8->");
  o->labeltype(fltk::SYMBOL_LABEL);
  o->labelsize(10);
  o->labelcolor(47);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Up));
 }
 {fltk::Button* o = new fltk::Button(400, 140, 20, 20, "1");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'1'));
 }
 {fltk::Button* o = new fltk::Button(420, 140, 20, 20, "2");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'2'));
 }
 {fltk::Button* o = new fltk::Button(440, 140, 20, 20, "3");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'3'));
 }
 {fltk::Button* o = new fltk::Button(460, 140, 20, 40);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP_Enter));
 }
 {fltk::Button* o = new fltk::Button(15, 160, 30, 20, "Ctrl");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Control_L));
 }
 {fltk::Button* o = new fltk::Button(45, 160, 30, 20, "Meta");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Meta_L));
 }
 {fltk::Button* o = new fltk::Button(75, 160, 30, 20, "Alt");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Alt_L));
 }
 {fltk::Button* o = new fltk::Button(105, 160, 85, 20);
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(' '));
 }
 {fltk::Button* o = new fltk::Button(190, 160, 30, 20, "Alt");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Alt_R));
 }
 {fltk::Button* o = new fltk::Button(220, 160, 30, 20, "Meta");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Meta_R));
 }
 {fltk::Button* o = new fltk::Button(250, 160, 30, 20, "Menu");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Menu));
 }
 {fltk::Button* o = new fltk::Button(280, 160, 30, 20, "Ctrl");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Control_R));
 }
 {fltk::Button* o = new fltk::Button(325, 160, 20, 20, "@4->");
  o->labeltype(fltk::SYMBOL_LABEL);
  o->labelsize(10);
  o->labelcolor(47);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Left));
 }
 {fltk::Button* o = new fltk::Button(345, 160, 20, 20, "@2->");
  o->labeltype(fltk::SYMBOL_LABEL);
  o->labelsize(10);
  o->labelcolor(47);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Down));
 }
 {fltk::Button* o = new fltk::Button(365, 160, 20, 20, "@6->");
  o->labeltype(fltk::SYMBOL_LABEL);
  o->labelsize(10);
  o->labelcolor(47);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::Right));
 }
 {fltk::Button* o = new fltk::Button(400, 160, 40, 20, "0");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'0'));
  o->align(20);
 }
 {fltk::Button* o = new fltk::Button(440, 160, 20, 20, ".");
  o->labelsize(10);
  o->callback((fltk::Callback*)key_cb, (void*)(fltk::KP+'.'));
 }
 {fltk::Input* o = new fltk::Input(15, 10, 370, 30);
 }
 {fltk::Button* o = new fltk::Button(400, 5, 20, 10, "shift");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::SHIFT));
 }
 {fltk::Button* o = new fltk::Button(420, 5, 20, 10, "lock");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::CAPS_LOCK));
 }
 {fltk::Button* o = new fltk::Button(440, 5, 20, 10, "ctrl");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::CTRL));
 }
 {fltk::Button* o = new fltk::Button(460, 5, 20, 10, "alt");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::ALT));
 }
 {fltk::Button* o = new fltk::Button(440, 15, 20, 10, "meta");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::META));
 }
 {fltk::Button* o = new fltk::Button(420, 15, 20, 10, "?");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(0x20));
 }
 {fltk::Button* o = new fltk::Button(400, 15, 20, 10, "num");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::NUM_LOCK));
 }
 {fltk::Button* o = new fltk::Button(400, 25, 20, 10, "b1");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::BUTTON1));
 }
 {fltk::Button* o = new fltk::Button(420, 25, 20, 10, "b2");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::BUTTON2));
 }
 {fltk::Button* o = new fltk::Button(440, 25, 20, 10, "b3");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::BUTTON3));
 }
 {fltk::Button* o = new fltk::Button(460, 15, 20, 10, "sclk");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(fltk::SCROLL_LOCK));
 }
 {fltk::Button* o = new fltk::Button(460, 25, 20, 10, "?");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(0x800));
 }
 {fltk::Button* o = new fltk::Button(400, 35, 20, 10, "?");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(0x1000));
 }
 {fltk::Button* o = new fltk::Button(420, 35, 20, 10, "?");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(0x2000));
 }
 {fltk::Button* o = new fltk::Button(440, 35, 20, 10, "?");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(0x4000));
 }
 {fltk::Button* o = new fltk::Button(460, 35, 20, 10, "?");
  o->box(fltk::THIN_UP_BOX);
  o->color2(3);
  o->labelsize(8);
  o->callback((fltk::Callback*)shift_cb, (void*)(0x8000));
 }
 w->end();
 return w;
}
