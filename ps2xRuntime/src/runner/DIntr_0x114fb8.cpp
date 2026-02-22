#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DIntr
// Address: 0x114fb8 - 0x115000
void DIntr_0x114fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114fb8u;

    // 0x114fb8: 0x40036000
    ctx->pc = 0x114fb8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_status);
    // 0x114fbc: 0x3c020001
    ctx->pc = 0x114fbcu;
    SET_GPR_S32(ctx, 2, ((uint32_t)1 << 16));
    // 0x114fc0: 0x621824
    ctx->pc = 0x114fc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114fc4: 0x1060000b
    ctx->pc = 0x114FC4u;
    {
        const bool branch_taken_0x114fc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x114FC8u;
        SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        if (branch_taken_0x114fc4) {
            ctx->pc = 0x114FF4u;
            goto label_114ff4;
        }
    }
    ctx->pc = 0x114FCCu;
    // 0x114fcc: 0x0
    ctx->pc = 0x114fccu;
    // NOP
label_114fd0:
    // 0x114fd0: 0x42000039
    ctx->pc = 0x114fd0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x114fd4: 0x40f
    ctx->pc = 0x114fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x114fd8: 0x40026000
    ctx->pc = 0x114fd8u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x114fdc: 0x3c030001
    ctx->pc = 0x114fdcu;
    SET_GPR_S32(ctx, 3, ((uint32_t)1 << 16));
    // 0x114fe0: 0x431024
    ctx->pc = 0x114fe0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114fe4: 0x1440fffa
    ctx->pc = 0x114FE4u;
    {
        const bool branch_taken_0x114fe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x114fe4) {
            ctx->pc = 0x114FD0u;
            goto label_114fd0;
        }
    }
    ctx->pc = 0x114FECu;
    // 0x114fec: 0x3e00008
    ctx->pc = 0x114FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114FF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114FD0u: goto label_114fd0;
            case 0x114FF4u: goto label_114ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x114FF4u;
label_114ff4:
    // 0x114ff4: 0x202d
    ctx->pc = 0x114ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ff8: 0x3e00008
    ctx->pc = 0x114FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114FFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114FD0u: goto label_114fd0;
            case 0x114FF4u: goto label_114ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115000u;
}
