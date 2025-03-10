#pragma once

#include <native_drawing/drawing_canvas.h>
#include <native_drawing/drawing_path.h>
#include "SvgGroup.h"
#include "utils/SvgAttributesParser.h"

namespace rnoh {
namespace svg {

class SvgSvg : public SvgGroup {
public:
    SvgSvg();
    ~SvgSvg() override = default;

    drawing::Path AsPath() override;

    Size GetSize() const;
    
    Rect GetViewBox() const;
    
    void Draw(OH_Drawing_Canvas *canvas) override;

    SvgAttributes attr_;

private:
    void FitCanvas(OH_Drawing_Canvas *canvas);
};

} // namespace svg
} // namespace rnoh
