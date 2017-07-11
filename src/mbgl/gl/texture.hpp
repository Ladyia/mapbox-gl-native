#pragma once

#include <mbgl/gl/object.hpp>
#include <mbgl/util/size.hpp>

namespace mbgl {
namespace gl {

class Texture {
public:
    Texture(Size size_, UniqueTexture texture_,
            TextureFilter filter_ = TextureFilter::Nearest,
            TextureMipMap mipmap_ = TextureMipMap::No,
            TextureWrap wrapX_ = TextureWrap::Clamp,
            TextureWrap wrapY_ = TextureWrap::Clamp)
        : size(std::move(size_)),
          texture(std::move(texture_)),
          filter(filter_),
          mipmap(mipmap_),
          wrapX(wrapX_),
          wrapY(wrapY_) {}

    Size size;
    UniqueTexture texture;
    TextureFilter filter = TextureFilter::Nearest;
    TextureMipMap mipmap = TextureMipMap::No;
    TextureWrap wrapX = TextureWrap::Clamp;
    TextureWrap wrapY = TextureWrap::Clamp;
};

} // namespace gl
} // namespace mbgl
