//
// "$Id: TiledGroup.h 5575 2007-01-02 17:31:40Z spitzak $"
//
// The child widgets are expected to be all laid out to touch each other
// and fill this group. The user can then move the boundaries between
// them by grabbing the junctions between the children.
//
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
//

#ifndef fltk_TiledGroup_h
#define fltk_TiledGroup_h

#include "Group.h"

namespace fltk {

class FL_API TiledGroup : public Group {
protected:
  void layout();
public:
  int handle(int);
  TiledGroup(int x,int y,int w,int h, const char*l=0, bool begin=false) :
    Group(x,y,w,h,l,begin) {}
  void position(int, int, int, int);
};

}
#endif

//
// End of "$Id: TiledGroup.h 5575 2007-01-02 17:31:40Z spitzak $".
//
