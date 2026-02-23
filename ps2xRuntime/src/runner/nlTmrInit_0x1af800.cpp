#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlTmrInit
// Address: 0x1af800 - 0x1af830
void nlTmrInit_0x1af800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlTmrInit");


    ctx->pc = 0x1af800u;

    // 0x1af800: 0x3c051000
    ctx->pc = 0x1af800u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1af804: 0x70002628
    ctx->pc = 0x1af804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1af808:
    // 0x1af808: 0xaca00000
    ctx->pc = 0x1af808u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1af80c: 0xaca00010
    ctx->pc = 0x1af80cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0)); // MMIO: 0x10000010
    // 0x1af810: 0xaca00020
    ctx->pc = 0x1af810u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0)); // MMIO: 0x10000020
    // 0x1af814: 0x24840001
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1af818: 0xaca00030
    ctx->pc = 0x1af818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x1af81c: 0x28830002
    ctx->pc = 0x1af81cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 2));
    // 0x1af820: 0x1460fff9
    ctx->pc = 0x1AF820u;
    {
        const bool branch_taken_0x1af820 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AF824u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2048));
        if (branch_taken_0x1af820) {
            ctx->pc = 0x1AF808u;
            goto label_1af808;
        }
    }
    ctx->pc = 0x1AF828u;
    // 0x1af828: 0x3e00008
    ctx->pc = 0x1AF828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF808u: goto label_1af808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AF830u;
}
