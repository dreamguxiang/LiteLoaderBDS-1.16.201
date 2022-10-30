// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include "AnimatedImageData.hpp"
class SerializedPersonaPieceHandle {
public:
    std::string mPieceId;
    persona::PieceType mPieceType;
    mce::UUID mPackId;
    bool mIsDefaultPiece;
    std::string mProductId;
};

class TintMapColor {
public:
    std::array<mce::Color, 4> colors;
};
#undef BEFORE_EXTRA

class SerializedSkin {

#define AFTER_EXTRA
public:
    std::string skin_id, name, skin_resource_patch, geometry_name;
    mce::Image texture, cape_texture;
    std::vector<AnimatedImageData> animated_image_data;
    Json::Value geometry_data, geometry_data_mutable;
    std::string animation_data, cape_id;
    bool premium_skin, persona_skin, cape_on_classic_skin;
    std::vector<SerializedPersonaPieceHandle> persona_pieces;
    std::string arm_size;
    std::unordered_map<persona::PieceType, TintMapColor> piece_tint_colors;
    mce::Color skin_color;
    TrustedSkinFlag trusted_flag;
	
#undef AFTER_EXTRA
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERIALIZEDSKIN
#endif
    MCAPI SerializedSkin(class SerializedSkin const &);
    MCAPI SerializedSkin(class SubClientConnectionRequest const &);
    MCAPI SerializedSkin(class ConnectionRequest const &);
    MCAPI SerializedSkin(class SerializedSkin &&);
    MCAPI SerializedSkin();
    MCAPI class SerializedSkin & operator=(class SerializedSkin const &);
    MCAPI bool read(class ReadOnlyBinaryStream &);
    MCAPI void updateGeometryName();
    MCAPI void write(class BinaryStream &) const;
    MCAPI ~SerializedSkin();

};