// generated by Fast Light User Interface Designer (fluid) version 2.0100

#ifndef FileChooser_h
#define FileChooser_h
// Header for //\n// "$Id: FileChooser.fl 5067 2006-05-02 12:00...
#include <fltk/DoubleBufferWindow.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fltk/Group.h>
#include <fltk/Choice.h>
#include <fltk/PopupMenu.h>
#include <fltk/Button.h>
#include <fltk/Preferences.h>
#include <fltk/TiledGroup.h>
#include <fltk/FileBrowser.h>
#include <fltk/InvisibleBox.h>
#include <fltk/CheckButton.h>
#include <fltk/FileInput.h>
#include <fltk/ReturnButton.h>
#include <fltk/ask.h>

namespace fltk {

class FL_API FileChooser  {
public:
  enum { SINGLE = 0, MULTI = 1, CREATE = 2, DIRECTORY = 4 };
private:
  static fltk::Preferences prefs_;
  void (*callback_)(FileChooser*, void *);
  void *data_;
  char directory_[1024];
  char pattern_[1024];
  char preview_text_[2048];
  int type_;
  void favoritesButtonCB();
  void favoritesCB(fltk::Widget *w);
  void fileListCB();
  void fileNameCB();
  void newdir();
  static void previewCB(FileChooser *fc);
  void showChoiceCB();
  void update_favorites();
  void update_preview();
public:
  FileChooser(const char *d, const char *p, int t, const char *title);
private:
  fltk::DoubleBufferWindow *window;
  inline void cb_window_i(fltk::DoubleBufferWindow*, void*);
  static void cb_window(fltk::DoubleBufferWindow*, void*);
      fltk::Choice *showChoice;
      inline void cb_showChoice_i(fltk::Choice*, void*);
      static void cb_showChoice(fltk::Choice*, void*);
      fltk::PopupMenu *favoritesButton;
      inline void cb_favoritesButton_i(fltk::PopupMenu*, void*);
      static void cb_favoritesButton(fltk::PopupMenu*, void*);
public:
      fltk::Button *newButton;
private:
      inline void cb_newButton_i(fltk::Button*, void*);
      static void cb_newButton(fltk::Button*, void*);
    inline void cb__i(fltk::TiledGroup*, void*);
    static void cb_(fltk::TiledGroup*, void*);
      fltk::FileBrowser *fileList;
      inline void cb_fileList_i(fltk::FileBrowser*, void*);
      static void cb_fileList(fltk::FileBrowser*, void*);
      fltk::InvisibleBox *previewBox;
public:
        fltk::CheckButton *previewButton;
private:
        inline void cb_previewButton_i(fltk::CheckButton*, void*);
        static void cb_previewButton(fltk::CheckButton*, void*);
public:
        fltk::CheckButton *showHiddenButton;
private:
        inline void cb_showHiddenButton_i(fltk::CheckButton*, void*);
        static void cb_showHiddenButton(fltk::CheckButton*, void*);
      fltk::FileInput *fileName;
      inline void cb_fileName_i(fltk::FileInput*, void*);
      static void cb_fileName(fltk::FileInput*, void*);
        fltk::ReturnButton *okButton;
        inline void cb_okButton_i(fltk::ReturnButton*, void*);
        static void cb_okButton(fltk::ReturnButton*, void*);
        fltk::Button *cancelButton;
        inline void cb_cancelButton_i(fltk::Button*, void*);
        static void cb_cancelButton(fltk::Button*, void*);
  fltk::DoubleBufferWindow *favWindow;
    fltk::FileBrowser *favList;
    inline void cb_favList_i(fltk::FileBrowser*, void*);
    static void cb_favList(fltk::FileBrowser*, void*);
      fltk::Button *favUpButton;
      inline void cb_favUpButton_i(fltk::Button*, void*);
      static void cb_favUpButton(fltk::Button*, void*);
      fltk::Button *favDeleteButton;
      inline void cb_favDeleteButton_i(fltk::Button*, void*);
      static void cb_favDeleteButton(fltk::Button*, void*);
      fltk::Button *favDownButton;
      inline void cb_favDownButton_i(fltk::Button*, void*);
      static void cb_favDownButton(fltk::Button*, void*);
      fltk::Button *favCancelButton;
      inline void cb_favCancelButton_i(fltk::Button*, void*);
      static void cb_favCancelButton(fltk::Button*, void*);
      fltk::ReturnButton *favOkButton;
      inline void cb_favOkButton_i(fltk::ReturnButton*, void*);
      static void cb_favOkButton(fltk::ReturnButton*, void*);
public:
  ~FileChooser();
  void callback(void (*cb)(FileChooser *, void *), void *d = 0);
  void color(Color c);
  Color color();
  int count();
  void directory(const char *d);
  char * directory();
  void filter(const char *p);
  const char * filter();
  int filter_value();
  void filter_value(int f);
  void hide();
  void icon_size(uchar s);
  uchar icon_size();
  void label(const char *l);
  const char * label();
  void ok_label(const char *l);
  const char * ok_label();
  void preview(int e);
  int preview() const { return previewButton->value(); };
  void rescan();
  void show();
  void show(int x, int y);
  int shown();
  void textcolor(Color c);
  Color textcolor();
  void textfont(Font* f);
  Font* textfont();
  void textsize(float s);
  float textsize();
  void type(int t);
  int type();
  void * user_data() const;
  void user_data(void *d);
  const char *value(int f = 1);
  void value(const char *filename);
  int visible();
  static const char *add_favorites_label;
  static const char *all_files_label;
  static const char *custom_filter_label;
  static const char *existing_file_label;
  static const char *favorites_label;
  static const char *filename_label;
  static const char *filesystems_label;
  static const char *manage_favorites_label;
  static const char *new_directory_label;
  static const char *new_directory_tooltip;
  static const char *preview_label;
  static const char *save_label;
  static const char *show_label;
  static File_Sort_F *sort;
};
extern FL_API void file_chooser_ok_label(const char*l);
}
// Header for //\n// End of "$Id: FileChooser.fl 5067 2006-05-0...
#endif
