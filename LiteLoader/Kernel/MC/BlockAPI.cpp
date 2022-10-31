#include <LoggerAPI.h>
#include <Main/LiteLoader.h>
#include <MC/Block.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/BlockPalette.hpp>
#include <MC/BlockSerializationUtils.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/HashedString.hpp>
#include <MC/Level.hpp>

Block* Block::create(const string& name, unsigned short tileData) {
    BlockPalette& generator = Global<Level>->getBlockPalette();
    auto blk = generator.getBlockLegacy(name);
    if (!blk)
        return nullptr;
    return (Block*)((BlockLegacy*)blk)->toBlock(tileData);
}

Block* Block::create(CompoundTag* nbt) {
    // pair<enum BlockSerializationUtils::NBTState, Block*>
    auto result = BlockSerializationUtils::tryGetBlockFromNBT(*nbt, nullptr);
    return const_cast<Block*>(result.second);
}

string Block::getTypeName() const {
    return Block::toDebugString();
}


 int Block::getId() const {
     return getLegacyBlock().getBlockItemId();
 }

unsigned short Block::getTileData() {
    // 等待大佬改进
    auto tileData = mAux;
    auto blk = &getLegacyBlock();

    if (((BlockLegacy*)blk)->toBlock(tileData) == (Block*)this) {
        return tileData;
    }

    for (unsigned short i = 0; i < 16; ++i) {
        if (i == tileData) {
            continue;
        }
        if (((BlockLegacy*)blk)->toBlock(i) == (Block*)this) {
            return i;
        }
    }
    logger.error("Error in GetTileData");
    return 0;
}

std::unique_ptr<CompoundTag> Block::getNbt() {
    return CompoundTag::fromBlock(this);
}

bool Block::setNbt(CompoundTag* nbt) {
    nbt->setBlock(this);
    return true;
}

unsigned int const & Block::getRuntimeId() const{
    return mRuntimeId;
}