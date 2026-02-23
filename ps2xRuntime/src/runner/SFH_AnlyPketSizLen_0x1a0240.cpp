#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyPketSizLen
// Address: 0x1a0240 - 0x1a028c
void SFH_AnlyPketSizLen_0x1a0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyPketSizLen");


    ctx->pc = 0x1a0240u;

    // 0x1a0240: 0x27bdffd0
    ctx->pc = 0x1a0240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0244: 0xffb10010
    ctx->pc = 0x1a0244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0248: 0xffb00000
    ctx->pc = 0x1a0248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a024c: 0xa0882d
    ctx->pc = 0x1a024cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0250: 0xffbf0020
    ctx->pc = 0x1a0250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0254: 0x8c820004
    ctx->pc = 0x1a0254u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a0258: 0xc067f18
    ctx->pc = 0x1A0258u;
    SET_GPR_U32(ctx, 31, 0x1A0260u);
    ctx->pc = 0x1A025Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 128));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0260u; }
        else if (ctx->pc != 0x1A0260u) { ctx->pc = 0x1A0260u; }
    }
    if (ctx->pc != 0x1A0260u) { return; }
    ctx->pc = 0x1A0260u;
    // 0x1a0260: 0x54400003
    ctx->pc = 0x1A0260u;
    {
        const bool branch_taken_0x1a0260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0260) {
            ctx->pc = 0x1A0264u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1A0270u;
            goto label_1a0270;
        }
    }
    ctx->pc = 0x1A0268u;
    // 0x1a0268: 0x10000003
    ctx->pc = 0x1A0268u;
    {
        const bool branch_taken_0x1a0268 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A026Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0268) {
            ctx->pc = 0x1A0278u;
            goto label_1a0278;
        }
    }
    ctx->pc = 0x1A0270u;
label_1a0270:
    // 0x1a0270: 0x24020001
    ctx->pc = 0x1a0270u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0274: 0xae230000
    ctx->pc = 0x1a0274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a0278:
    // 0x1a0278: 0xdfbf0020
    ctx->pc = 0x1a0278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a027c: 0xdfb10010
    ctx->pc = 0x1a027cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0280: 0xdfb00000
    ctx->pc = 0x1a0280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0284: 0x3e00008
    ctx->pc = 0x1A0284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0288u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0270u: goto label_1a0270;
            case 0x1A0278u: goto label_1a0278;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A028Cu;
}
