#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kputchar
// Address: 0x3048a8 - 0x3048e0
void kputchar_0x3048a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3048a8u;

    // 0x3048a8: 0x3c031000
    ctx->pc = 0x3048a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x3048ac: 0x3463f130
    ctx->pc = 0x3048acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61744));
label_3048b0:
    // 0x3048b0: 0x8c620000
    ctx->pc = 0x3048b0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x3048b4: 0x30428000
    ctx->pc = 0x3048b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x3048b8: 0x0
    ctx->pc = 0x3048b8u;
    // NOP
    // 0x3048bc: 0x0
    ctx->pc = 0x3048bcu;
    // NOP
    // 0x3048c0: 0x0
    ctx->pc = 0x3048c0u;
    // NOP
    // 0x3048c4: 0x1440fffa
    ctx->pc = 0x3048C4u;
    {
        const bool branch_taken_0x3048c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3048c4) {
            ctx->pc = 0x3048B0u;
            goto label_3048b0;
        }
    }
    ctx->pc = 0x3048CCu;
    // 0x3048cc: 0x3c031000
    ctx->pc = 0x3048ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x3048d0: 0x80102d
    ctx->pc = 0x3048d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048d4: 0x3463f180
    ctx->pc = 0x3048d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61824));
    // 0x3048d8: 0x3e00008
    ctx->pc = 0x3048D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3048DCu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3048B0u: goto label_3048b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3048E0u;
}
