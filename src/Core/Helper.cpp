#include "Helper.hpp"
#include <glad/glad.hpp>

void Helper::clearColor(const Color& col) {
    Color color = col.getGLColors();
    glClearColor(color.r, color.g, color.b, color.a);
    glClear(GL_COLOR_BUFFER_BIT);
}