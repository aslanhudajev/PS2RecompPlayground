#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Shared with sceHiMemInit
static constexpr uint32_t kHMMBuffer = 0x00227170u;
static constexpr uint32_t kHMMBufEnd = 0x00227174u;

// make_info_block: writes (used<<31 | slices) to *ptr
static void hiMakeInfoBlock(uint8_t* rdram, uint32_t ptr, uint32_t slices, uint32_t used) {
    FAST_WRITE32(ptr, (used << 31u) | slices);
}

void sceHiMemAlloc_0x10d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiMemAlloc_0x10d4c0");
#endif
    uint32_t param1 = GPR_U32(ctx, 4);  // size in bytes

    uint32_t result = 0u;
    if (param1 != 0u) {
        uint32_t uVar5 = (param1 >> 2u) + ((param1 & 3u) != 0u ? 1u : 0u);  // slices needed
        uint32_t hmmBuf = FAST_READ32(kHMMBuffer);
        uint32_t hmmEnd = FAST_READ32(kHMMBufEnd);
        uint32_t puVar4 = 0u;

        uint32_t puVar3 = hmmBuf;
        while (puVar3 < hmmEnd) {
            uint32_t uVar2 = FAST_READ32(puVar3);
            if (static_cast<int32_t>(uVar2) >= 0) {  // free block
                uint32_t slices = uVar2 & 0x7FFFFFFFu;
                if (slices >= uVar5) {
                    puVar4 = puVar3;
                    break;
                }
            }
            // Skip to next block: current + (slices+1)*4
            uint32_t skip = (uVar2 & 0x7FFFFFFFu) + 1u;
            puVar3 += skip * 4u;
        }

        if (puVar4 != 0u) {
            uint32_t oldSlices = FAST_READ32(puVar4) & 0x7FFFFFFFu;
            int32_t iVar1 = static_cast<int32_t>(oldSlices) - static_cast<int32_t>(uVar5);
            hiMakeInfoBlock(rdram, puVar4, uVar5, 1u);
            result = puVar4 + 4u;  // user pointer
            if (iVar1 > 0)
                hiMakeInfoBlock(rdram, puVar4 + 4u + uVar5 * 4u, static_cast<uint32_t>(iVar1) - 1u, 0u);
        }
    }

    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}
