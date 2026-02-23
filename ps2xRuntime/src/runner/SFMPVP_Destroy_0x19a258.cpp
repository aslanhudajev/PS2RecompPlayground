#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_Destroy
// Address: 0x19a258 - 0x19a29c
void SFMPVP_Destroy_0x19a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_Destroy");


    ctx->pc = 0x19a258u;

    // 0x19a258: 0x27bdffe0
    ctx->pc = 0x19a258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a25c: 0xffb00000
    ctx->pc = 0x19a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a260: 0xffbf0010
    ctx->pc = 0x19a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a264: 0xc066774
    ctx->pc = 0x19A264u;
    SET_GPR_U32(ctx, 31, 0x19A26Cu);
    ctx->pc = 0x19A268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsSceMpegUsed_0x199dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A26Cu; }
        else if (ctx->pc != 0x19A26Cu) { ctx->pc = 0x19A26Cu; }
    }
    if (ctx->pc != 0x19A26Cu) { return; }
    ctx->pc = 0x19A26Cu;
    // 0x19a26c: 0x10400008
    ctx->pc = 0x19A26Cu;
    {
        const bool branch_taken_0x19a26c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A270u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19a26c) {
            ctx->pc = 0x19A290u;
            goto label_19a290;
        }
    }
    ctx->pc = 0x19A274u;
    // 0x19a274: 0xc066746
    ctx->pc = 0x19A274u;
    SET_GPR_U32(ctx, 31, 0x19A27Cu);
    ctx->pc = 0x19A278u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15736));
    ctx->pc = 0x199D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufDelete_0x199d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A27Cu; }
        else if (ctx->pc != 0x19A27Cu) { ctx->pc = 0x19A27Cu; }
    }
    if (ctx->pc != 0x19A27Cu) { return; }
    ctx->pc = 0x19A27Cu;
    // 0x19a27c: 0x26043d30
    ctx->pc = 0x19a27cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15664));
    // 0x19a280: 0xdfbf0010
    ctx->pc = 0x19a280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a284: 0xdfb00000
    ctx->pc = 0x19a284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a288: 0x8058e5a
    ctx->pc = 0x19A288u;
    ctx->pc = 0x19A28Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x163968u;
    sceMpegDelete_0x163968(rdram, ctx, runtime); return;
    ctx->pc = 0x19A290u;
label_19a290:
    // 0x19a290: 0xdfb00000
    ctx->pc = 0x19a290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a294: 0x3e00008
    ctx->pc = 0x19A294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A290u: goto label_19a290;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A29Cu;
}
