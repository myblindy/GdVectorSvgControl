#pragma once

#include "godot_cpp/classes/node2d.hpp"

class Svg2D : public godot::Node2D
{
    GDCLASS(Svg2D, godot::Node2D)

protected:
    static void _bind_methods();

public:
    Svg2D() = default;
    ~Svg2D() override = default;

    void load_svg_from_file(const godot::String &file_path);

    void _draw() override;
};