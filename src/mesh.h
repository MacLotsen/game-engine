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

#ifndef GAME_ENGINE_MESH_H
#define GAME_ENGINE_MESH_H

#include <glm/glm.hpp>
#include <GL/glew.h>
#include <vector>

struct Mesh {
    GLuint vao;
    GLuint pos_vbo;
    GLuint nor_vbo;
    GLuint uv_vbo;
    std::vector<glm::vec3> pos_buf;
    std::vector<glm::vec3> nor_buf;
    std::vector<glm::vec2> uv_buf;
};

void bindMesh(Mesh &, GLuint);
void drawMesh(const Mesh &, GLuint type = GL_TRIANGLES);

#endif //GAME_ENGINE_MESH_H