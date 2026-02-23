#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_Destroy
// Address: 0x1953c8 - 0x195410
void SFMPS_Destroy_0x1953c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_Destroy");


    ctx->pc = 0x1953c8u;

    // 0x1953c8: 0x27bdffe0
    ctx->pc = 0x1953c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1953cc: 0xffb00000
    ctx->pc = 0x1953ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1953d0: 0xffbf0010
    ctx->pc = 0x1953d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1953d4: 0x80802d
    ctx->pc = 0x1953d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953d8: 0xc065504
    ctx->pc = 0x1953D8u;
    SET_GPR_U32(ctx, 31, 0x1953E0u);
    ctx->pc = 0x1953DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12384)));
    ctx->pc = 0x195410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_DestroySub_0x195410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953E0u; }
        else if (ctx->pc != 0x1953E0u) { ctx->pc = 0x1953E0u; }
    }
    if (ctx->pc != 0x1953E0u) { return; }
    ctx->pc = 0x1953E0u;
    // 0x1953e0: 0x10400006
    ctx->pc = 0x1953E0u;
    {
        const bool branch_taken_0x1953e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1953E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1953e0) {
            ctx->pc = 0x1953FCu;
            goto label_1953fc;
        }
    }
    ctx->pc = 0x1953E8u;
    // 0x1953e8: 0x3c05ff00
    ctx->pc = 0x1953e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1953ec: 0xc064ea0
    ctx->pc = 0x1953ECu;
    SET_GPR_U32(ctx, 31, 0x1953F4u);
    ctx->pc = 0x1953F0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3338));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1953F4u; }
        else if (ctx->pc != 0x1953F4u) { ctx->pc = 0x1953F4u; }
    }
    if (ctx->pc != 0x1953F4u) { return; }
    ctx->pc = 0x1953F4u;
    // 0x1953f4: 0x10000003
    ctx->pc = 0x1953F4u;
    {
        const bool branch_taken_0x1953f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1953F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1953f4) {
            ctx->pc = 0x195404u;
            goto label_195404;
        }
    }
    ctx->pc = 0x1953FCu;
label_1953fc:
    // 0x1953fc: 0x102d
    ctx->pc = 0x1953fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195400: 0xdfbf0010
    ctx->pc = 0x195400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195404:
    // 0x195404: 0xdfb00000
    ctx->pc = 0x195404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195408: 0x3e00008
    ctx->pc = 0x195408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19540Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1953FCu: goto label_1953fc;
            case 0x195404u: goto label_195404;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195410u;
}
