#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVif1Idle
// Address: 0x2b4150 - 0x2b4178
void pbVif1Idle_0x2b4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4150u;

    // 0x2b4150: 0x3c021000
    ctx->pc = 0x2b4150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2b4154: 0x34423c00
    ctx->pc = 0x2b4154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 15360));
    // 0x2b4158: 0x8c430000
    ctx->pc = 0x2b4158u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x2b415c: 0x30620f0c
    ctx->pc = 0x2b415cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3852));
    // 0x2b4160: 0x10400003
    ctx->pc = 0x2B4160u;
    {
        const bool branch_taken_0x2b4160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4164u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x2b4160) {
            ctx->pc = 0x2B4170u;
            goto label_2b4170;
        }
    }
    ctx->pc = 0x2B4168u;
    // 0x2b4168: 0x3e00008
    ctx->pc = 0x2B4168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B416Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4170u: goto label_2b4170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4170u;
label_2b4170:
    // 0x2b4170: 0x3e00008
    ctx->pc = 0x2B4170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4174u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4170u: goto label_2b4170;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4178u;
}
