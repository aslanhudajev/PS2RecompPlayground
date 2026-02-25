#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kHMMBuffer = 0x00227170u;

// make_info_block: writes (used<<31 | slices) to *ptr
static void hiMakeInfoBlock(uint8_t* rdram, uint32_t ptr, uint32_t slices, uint32_t used) {
    FAST_WRITE32(ptr, (used << 31u) | slices);
}

void sceHiMemAlign_0x10d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiMemAlign_0x10d6f0");
#endif
    uint32_t align = GPR_U32(ctx, 4);   // a0 = alignment
    uint32_t size = GPR_U32(ctx, 5);    // a1 = size

    uint32_t result = 0u;
    if ((align & 3u) == 0u && align != 0u && runtime && runtime->hasFunction(0x10d4c0u)) {
        // sceHiMemAlloc(size + align + 1)
        R5900Context tmp = *ctx;
        SET_GPR_U32(&tmp, 4, size + align + 1u);
        SET_GPR_U32(&tmp, 31, 0x10d6f0u);
        tmp.pc = 0x10d4c0u;
        auto fn = runtime->lookupFunction(0x10d4c0u);
        fn(rdram, &tmp, runtime);
        uint32_t iVar1 = getRegU32(&tmp, 2);  // v0

        if (iVar1 != 0u) {
            uint32_t uVar2 = align - (iVar1 % align);
            result = iVar1;
            if (uVar2 != 0u) {
                result = iVar1 + uVar2;
                uint32_t headerAddr = iVar1 - 4u;
                uint32_t oldVal = FAST_READ32(headerAddr) & 0x7FFFFFFFu;
                hiMakeInfoBlock(rdram, result - 4u, oldVal - (uVar2 >> 2u), 1u);
                hiMakeInfoBlock(rdram, headerAddr, (uVar2 >> 2u) - 1u, 0u);
                // sceHiMemFree(iVar1)
                if (runtime->hasFunction(0x10d5d0u)) {
                    SET_GPR_U32(&tmp, 4, iVar1);
                    tmp.pc = 0x10d5d0u;
                    auto freeFn = runtime->lookupFunction(0x10d5d0u);
                    freeFn(rdram, &tmp, runtime);
                }
            }
        }
    }

    setReturnU32(ctx, result);
    ctx->pc = getRegU32(ctx, 31);
}
