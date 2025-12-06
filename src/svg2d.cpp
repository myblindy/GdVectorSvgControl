#include "svg2d.h"

#include "godot_cpp/classes/engine.hpp"
#include "godot_cpp/variant/color.hpp"
#include "godot_cpp/classes/main_loop.hpp"
#include "godot_cpp/classes/theme_db.hpp"

using namespace godot;

void Svg2D::_bind_methods() {
    ClassDB::bind_method(D_METHOD("load_svg_from_file", "file_path"), &Svg2D::load_svg_from_file);
    ClassDB::bind_method(D_METHOD("_draw"), &Svg2D::_draw);
}

void Svg2D::load_svg_from_file(const String &file_path) {
    // Implementation for loading SVG from file goes here
}

void Svg2D::_draw() {
    draw_string(ThemeDB::get_singleton()->get_fallback_font(), 
        Vector2(10, 10), "Moop");
}