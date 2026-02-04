#pragma once

namespace Helper {
    struct Color {
        float r, g, b, a;

        Color(float red, float green, float blue, float alpha = 255.0f)
            : r(red), g(green), b(blue), a(alpha) {}
        
        static Color Red() { return Color(255.0f, 0.0f, 0.0f); }
        static Color Green() { return Color(0.0f, 255.0f, 0.0f); }
        static Color Blue() { return Color(0.0f, 0.0f, 255.0f); }
        static Color White() { return Color(255.0f, 255.0f, 255.0f); }
        static Color Black() { return Color(0.0f, 0.0f, 0.0f); }

        Color getGLColors() const {
            return Color(r / 255.0f, g / 255.0f, b / 255.0f, a / 255.0f);
        }
    };

    void clearColor(const Color& col);
} // namespace Helper