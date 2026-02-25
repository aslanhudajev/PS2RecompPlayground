#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kHMMBuffer = 0x00227170u;
static constexpr uint32_t kHMMBufEnd = 0x00227174u;

static void hiMakeInfoBlock(uint8_t* rdram, uint32_t ptr, uint32_t slices, uint32_t used) {
    FAST_WRITE32(ptr, (used << 31u) | slices);
}

void sceHiMemFree_0x10d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiMemFree_0x10d5d0");
#endif
    uint32_t param1 = GPR_U32(ctx, 4);  // user pointer to free
    uint32_t puVar5 = param1 - 4u;      // block header addr
    uint32_t hmmBuf = FAST_READ32(kHMMBuffer);
    uint32_t hmmEnd = FAST_READ32(kHMMBufEnd);

    uint32_t puVar4 = hmmBuf;
    uint32_t uVar3;

    if (hmmBuf == puVar5) {
        uVar3 = FAST_READ32(puVar5) & 0x7FFFFFFFu;
    } else {
        uVar3 = FAST_READ32(hmmBuf);
        uint32_t uVar2 = uVar3 & 0x7FFFFFFFu;
        uint32_t puVar1 = hmmBuf + (uVar2 + 1u) * 4u;
        while (puVar1 != puVar5) {
            puVar4 = puVar4 + (uVar2 + 1u) * 4u;
            if (hmmEnd <= puVar4) {
                ctx->pc = getRegU32(ctx, 31);
                return;
            }
            uVar3 = FAST_READ32(puVar4);
            uVar2 = uVar3 & 0x7FFFFFFFu;
            puVar1 = puVar4 + (uVar2 + 1u) * 4u;
        }
        if (static_cast<int32_t>(uVar3) >= 0) {
            uVar3 = uVar2 + 1u + (FAST_READ32(puVar5) & 0x7FFFFFFFu);
        } else {
            uVar3 = FAST_READ32(puVar5) & 0x7FFFFFFFu;
        }
    }

    uVar3 &= 0x7FFFFFFFu;
    hiMakeInfoBlock(rdram, puVar4, uVar3, 0u);

    // Coalesce with next block if free
    uint32_t nextOff = (FAST_READ32(puVar5) & 0x7FFFFFFFu) + 1u;
    uint32_t nextHeader = puVar5 + nextOff * 4u;
    if (nextHeader < hmmEnd && static_cast<int32_t>(FAST_READ32(nextHeader)) >= 0) {
        uint32_t nextSlices = FAST_READ32(nextHeader) & 0x7FFFFFFFu;
        hiMakeInfoBlock(rdram, puVar4, (FAST_READ32(puVar4) & 0x7FFFFFFFu) + nextSlices + 1u, 0u);
    }

    ctx->pc = getRegU32(ctx, 31);
}
