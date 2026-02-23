#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_BuildSystem
// Address: 0x19f008 - 0x19f0bc
void sftrn_BuildSystem_0x19f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_BuildSystem");


    ctx->pc = 0x19f008u;

    // 0x19f008: 0x27bdffd0
    ctx->pc = 0x19f008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f00c: 0x24060001
    ctx->pc = 0x19f00cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f010: 0xffb10010
    ctx->pc = 0x19f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f014: 0xffb00000
    ctx->pc = 0x19f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f018: 0xa0882d
    ctx->pc = 0x19f018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f01c: 0x80802d
    ctx->pc = 0x19f01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f020: 0xffbf0020
    ctx->pc = 0x19f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f024: 0xc067c9c
    ctx->pc = 0x19F024u;
    SET_GPR_U32(ctx, 31, 0x19F02Cu);
    ctx->pc = 0x19F028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F270u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F02Cu; }
        else if (ctx->pc != 0x19F02Cu) { ctx->pc = 0x19F02Cu; }
    }
    if (ctx->pc != 0x19F02Cu) { return; }
    ctx->pc = 0x19F02Cu;
    // 0x19f02c: 0x8e220008
    ctx->pc = 0x19f02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19f030: 0x10400007
    ctx->pc = 0x19F030u;
    {
        const bool branch_taken_0x19f030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F034u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f030) {
            ctx->pc = 0x19F050u;
            goto label_19f050;
        }
    }
    ctx->pc = 0x19F038u;
    // 0x19f038: 0x24050001
    ctx->pc = 0x19f038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f03c: 0xc067c84
    ctx->pc = 0x19F03Cu;
    SET_GPR_U32(ctx, 31, 0x19F044u);
    ctx->pc = 0x19F040u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F210u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBufV_0x19f210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F044u; }
        else if (ctx->pc != 0x19F044u) { ctx->pc = 0x19F044u; }
    }
    if (ctx->pc != 0x19F044u) { return; }
    ctx->pc = 0x19F044u;
    // 0x19f044: 0x200202d
    ctx->pc = 0x19f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f048: 0xc067c30
    ctx->pc = 0x19F048u;
    SET_GPR_U32(ctx, 31, 0x19F050u);
    ctx->pc = 0x19F04Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F0C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildVideo_0x19f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F050u; }
        else if (ctx->pc != 0x19F050u) { ctx->pc = 0x19F050u; }
    }
    if (ctx->pc != 0x19F050u) { return; }
    ctx->pc = 0x19F050u;
label_19f050:
    // 0x19f050: 0x8e22000c
    ctx->pc = 0x19f050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19f054: 0x10400007
    ctx->pc = 0x19F054u;
    {
        const bool branch_taken_0x19f054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F058u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f054) {
            ctx->pc = 0x19F074u;
            goto label_19f074;
        }
    }
    ctx->pc = 0x19F05Cu;
    // 0x19f05c: 0x24050001
    ctx->pc = 0x19f05cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f060: 0xc067c88
    ctx->pc = 0x19F060u;
    SET_GPR_U32(ctx, 31, 0x19F068u);
    ctx->pc = 0x19F064u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F220u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBufA_0x19f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F068u; }
        else if (ctx->pc != 0x19F068u) { ctx->pc = 0x19F068u; }
    }
    if (ctx->pc != 0x19F068u) { return; }
    ctx->pc = 0x19F068u;
    // 0x19f068: 0x200202d
    ctx->pc = 0x19f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f06c: 0xc067c56
    ctx->pc = 0x19F06Cu;
    SET_GPR_U32(ctx, 31, 0x19F074u);
    ctx->pc = 0x19F070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F158u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_BuildAudio_0x19f158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F074u; }
        else if (ctx->pc != 0x19F074u) { ctx->pc = 0x19F074u; }
    }
    if (ctx->pc != 0x19F074u) { return; }
    ctx->pc = 0x19F074u;
label_19f074:
    // 0x19f074: 0x8e220020
    ctx->pc = 0x19f074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19f078: 0x1040000c
    ctx->pc = 0x19F078u;
    {
        const bool branch_taken_0x19f078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F07Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f078) {
            ctx->pc = 0x19F0ACu;
            goto label_19f0ac;
        }
    }
    ctx->pc = 0x19F080u;
    // 0x19f080: 0x200202d
    ctx->pc = 0x19f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f084: 0x24050001
    ctx->pc = 0x19f084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f088: 0xc067c8c
    ctx->pc = 0x19F088u;
    SET_GPR_U32(ctx, 31, 0x19F090u);
    ctx->pc = 0x19F08Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19F230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftrn_ConnTrnBufU_0x19f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F090u; }
        else if (ctx->pc != 0x19F090u) { ctx->pc = 0x19F090u; }
    }
    if (ctx->pc != 0x19F090u) { return; }
    ctx->pc = 0x19F090u;
    // 0x19f090: 0x200202d
    ctx->pc = 0x19f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f094: 0x220282d
    ctx->pc = 0x19f094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f098: 0xdfbf0020
    ctx->pc = 0x19f098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f09c: 0xdfb10010
    ctx->pc = 0x19f09cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0a0: 0xdfb00000
    ctx->pc = 0x19f0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0a4: 0x8067c7c
    ctx->pc = 0x19F0A4u;
    ctx->pc = 0x19F0A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F1F0u;
    sftrn_BuildUsr_0x19f1f0(rdram, ctx, runtime); return;
    ctx->pc = 0x19F0ACu;
label_19f0ac:
    // 0x19f0ac: 0xdfb10010
    ctx->pc = 0x19f0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f0b0: 0xdfb00000
    ctx->pc = 0x19f0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0b4: 0x3e00008
    ctx->pc = 0x19F0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F050u: goto label_19f050;
            case 0x19F074u: goto label_19f074;
            case 0x19F0ACu: goto label_19f0ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F0BCu;
}
