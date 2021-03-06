/*
 *  Modern OpenGL Game Engine C/C++
 *  Copyright (C) 2016  Erik Nijenhuis

 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NGIN_IO_H
#define NGIN_IO_H

#include "./model.h"

namespace NGin {

	namespace IO {

		typedef void (*output_f) ();

		struct KeyEvent {
			unsigned char key;
			int special_key;
		};

		enum MouseEvent {
			LEFT_MOUSE_CLICK,
			RIGHT_MOUSE_CLICK,
			MIDDLE_MOUSE_CLICK,
			SCROLL
		};

		struct Camera {
			Model::Object3D* head;
			float head_offset;
		};

	}

}

#endif //NGIN_IO_H
