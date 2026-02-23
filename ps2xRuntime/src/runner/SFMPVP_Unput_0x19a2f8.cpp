#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_Unput
// Address: 0x19a2f8 - 0x19a340
void SFMPVP_Unput_0x19a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_Unput");


    ctx->pc = 0x19a2f8u;

    // 0x19a2f8: 0x27bdffd0
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a2fc: 0xffb00000
    ctx->pc = 0x19a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a300: 0xffb10010
    ctx->pc = 0x19a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a304: 0x80802d
    ctx->pc = 0x19a304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a308: 0xffbf0020
    ctx->pc = 0x19a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a30c: 0xc066774
    ctx->pc = 0x19A30Cu;
    SET_GPR_U32(ctx, 31, 0x19A314u);
    ctx->pc = 0x19A310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsSceMpegUsed_0x199dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A314u; }
        else if (ctx->pc != 0x19A314u) { ctx->pc = 0x19A314u; }
    }
    if (ctx->pc != 0x19A314u) { return; }
    ctx->pc = 0x19A314u;
    // 0x19a314: 0x14400003
    ctx->pc = 0x19A314u;
    {
        const bool branch_taken_0x19a314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A318u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15736));
        if (branch_taken_0x19a314) {
            ctx->pc = 0x19A324u;
            goto label_19a324;
        }
    }
    ctx->pc = 0x19A31Cu;
    // 0x19a31c: 0x10000003
    ctx->pc = 0x19A31Cu;
    {
        const bool branch_taken_0x19a31c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A320u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a31c) {
            ctx->pc = 0x19A32Cu;
            goto label_19a32c;
        }
    }
    ctx->pc = 0x19A324u;
label_19a324:
    // 0x19a324: 0xc0665a6
    ctx->pc = 0x19A324u;
    SET_GPR_U32(ctx, 31, 0x19A32Cu);
    ctx->pc = 0x19A328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199698u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufUnput_0x199698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A32Cu; }
        else if (ctx->pc != 0x19A32Cu) { ctx->pc = 0x19A32Cu; }
    }
    if (ctx->pc != 0x19A32Cu) { return; }
    ctx->pc = 0x19A32Cu;
label_19a32c:
    // 0x19a32c: 0xdfbf0020
    ctx->pc = 0x19a32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a330: 0xdfb10010
    ctx->pc = 0x19a330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a334: 0xdfb00000
    ctx->pc = 0x19a334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a338: 0x3e00008
    ctx->pc = 0x19A338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A33Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A324u: goto label_19a324;
            case 0x19A32Cu: goto label_19a32c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A340u;
}
