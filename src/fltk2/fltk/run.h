// "$Id: run.h 5446 2006-09-18 21:57:27Z spitzak $"
//
/*! \file
  The basic fltk runtime. Every program needs to call this somewhere.
*/
// Copyright 1998-2006 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to "fltk-bugs@fltk.org".

#ifndef fltk_run_h
#define fltk_run_h

#include "FL_API.h"
#ifdef check
# undef check
#endif

namespace fltk {

FL_API void display(const char*);
FL_API int arg(int, char**, int&);
FL_API int args(int, char**, int&, int (*)(int,char**,int&) = 0);
extern FL_API const char* const help;
FL_API void args(int, char**);
FL_API bool enable_tablet_events();

FL_API int wait();
FL_API int wait(float time);
FL_API int check();
FL_API int ready();
FL_API int run();
FL_API void flush();
FL_API void redraw();
extern FL_API int damage_;
inline void damage(int d) {damage_ = d;}
inline int damage() {return damage_;}

/*! Type of function passed to add_timeout(), add_check(), and add_idle() */
typedef void (*TimeoutHandler)(void*);

FL_API double get_time_secs();

FL_API void add_timeout(float t, TimeoutHandler, void* v = 0);
FL_API void repeat_timeout(float t, TimeoutHandler,void* = 0);
FL_API bool has_timeout(TimeoutHandler, void* = 0);
FL_API void remove_timeout(TimeoutHandler, void* = 0);

FL_API void add_check(TimeoutHandler, void* = 0);
FL_API bool has_check(TimeoutHandler, void* = 0);
FL_API void remove_check(TimeoutHandler, void* = 0);

FL_API void add_idle(TimeoutHandler, void* = 0);
FL_API bool has_idle(TimeoutHandler, void* = 0);
FL_API void remove_idle(TimeoutHandler, void* = 0);

// For back-compatability only:
extern FL_API void (*idle)();
inline void set_idle(void (*cb)()) {idle = cb;}

/*! Type of function passed to add_fd() */
typedef void (*FileHandler)(int fd, void*);
enum {READ = 1, WRITE = 4, EXCEPT = 8};
FL_API void add_fd(int fd, int when, FileHandler, void* =0);
FL_API void add_fd(int fd, FileHandler, void* = 0);
FL_API void remove_fd(int, int when = -1);

extern FL_API bool in_main_thread_;

FL_API void lock();
FL_API void unlock();
FL_API void awake(void* message = 0);
FL_API void* thread_message();
inline bool in_main_thread() {return in_main_thread_;}

}

#endif
