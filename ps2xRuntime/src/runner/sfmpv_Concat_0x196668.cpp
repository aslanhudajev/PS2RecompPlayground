#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_Concat
// Address: 0x196668 - 0x1966b8
void sfmpv_Concat_0x196668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_Concat");


    ctx->pc = 0x196668u;

    // 0x196668: 0x27bdffd0
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19666c: 0xffb10010
    ctx->pc = 0x19666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x196670: 0xffb00000
    ctx->pc = 0x196670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196674: 0xc0882d
    ctx->pc = 0x196674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196678: 0xffbf0020
    ctx->pc = 0x196678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19667c: 0xc0659ae
    ctx->pc = 0x19667Cu;
    SET_GPR_U32(ctx, 31, 0x196684u);
    ctx->pc = 0x196680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1966B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ConcatSub_0x1966b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196684u; }
        else if (ctx->pc != 0x196684u) { ctx->pc = 0x196684u; }
    }
    if (ctx->pc != 0x196684u) { return; }
    ctx->pc = 0x196684u;
    // 0x196684: 0x2403ffff
    ctx->pc = 0x196684u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196688: 0x14430003
    ctx->pc = 0x196688u;
    {
        const bool branch_taken_0x196688 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19668Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196688) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196690u;
    // 0x196690: 0x10000004
    ctx->pc = 0x196690u;
    {
        const bool branch_taken_0x196690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196694u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x196690) {
            ctx->pc = 0x1966A4u;
            goto label_1966a4;
        }
    }
    ctx->pc = 0x196698u;
label_196698:
    // 0x196698: 0xc065a26
    ctx->pc = 0x196698u;
    SET_GPR_U32(ctx, 31, 0x1966A0u);
    ctx->pc = 0x19669Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x196898u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_DiscardSec_0x196898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1966A0u; }
        else if (ctx->pc != 0x1966A0u) { ctx->pc = 0x1966A0u; }
    }
    if (ctx->pc != 0x1966A0u) { return; }
    ctx->pc = 0x1966A0u;
    // 0x1966a0: 0x102d
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1966a4:
    // 0x1966a4: 0xdfbf0020
    ctx->pc = 0x1966a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1966a8: 0xdfb10010
    ctx->pc = 0x1966a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1966ac: 0xdfb00000
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1966b0: 0x3e00008
    ctx->pc = 0x1966B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1966B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196698u: goto label_196698;
            case 0x1966A4u: goto label_1966a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1966B8u;
}
