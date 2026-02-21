#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetScale
// Address: 0x2d06b8 - 0x2d06e0
void MBTreeSetScale_0x2d06b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d06b8u;

    // 0x2d06b8: 0x10800007
    ctx->pc = 0x2D06B8u;
    {
        const bool branch_taken_0x2d06b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d06b8) {
            ctx->pc = 0x2D06D8u;
            goto label_2d06d8;
        }
    }
    ctx->pc = 0x2D06C0u;
    // 0x2d06c0: 0x8c820060
    ctx->pc = 0x2d06c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d06c4: 0x34420008
    ctx->pc = 0x2d06c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2d06c8: 0xac820060
    ctx->pc = 0x2d06c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x2d06cc: 0xe48c0040
    ctx->pc = 0x2d06ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2d06d0: 0xe48d0044
    ctx->pc = 0x2d06d0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2d06d4: 0xe48e0048
    ctx->pc = 0x2d06d4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
label_2d06d8:
    // 0x2d06d8: 0x3e00008
    ctx->pc = 0x2D06D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D06D8u: goto label_2d06d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D06E0u;
}
