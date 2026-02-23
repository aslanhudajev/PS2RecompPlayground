#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_wait_hst
// Address: 0x176008 - 0x1760b4
void srd_wait_hst_0x176008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_wait_hst");


    ctx->pc = 0x176008u;

    // 0x176008: 0x27bdff80
    ctx->pc = 0x176008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17600c: 0x24020001
    ctx->pc = 0x17600cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176010: 0xffb10020
    ctx->pc = 0x176010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x176014: 0xffb50060
    ctx->pc = 0x176014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x176018: 0x3c1100ff
    ctx->pc = 0x176018u;
    SET_GPR_U32(ctx, 17, ((uint32_t)255 << 16));
    // 0x17601c: 0xffb40050
    ctx->pc = 0x17601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x176020: 0x24150009
    ctx->pc = 0x176020u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 9));
    // 0x176024: 0xffb30040
    ctx->pc = 0x176024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x176028: 0x24140001
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17602c: 0xffb20030
    ctx->pc = 0x17602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x176030: 0x3c130024
    ctx->pc = 0x176030u;
    SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
    // 0x176034: 0xffbf0070
    ctx->pc = 0x176034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x176038: 0x902d
    ctx->pc = 0x176038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17603c: 0xffb00010
    ctx->pc = 0x17603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x176040: 0x3631ffff
    ctx->pc = 0x176040u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 65535));
    // 0x176044: 0xafa20000
    ctx->pc = 0x176044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x176048: 0x8fa20000
    ctx->pc = 0x176048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17604c: 0x0
    ctx->pc = 0x17604cu;
    // NOP
label_176050:
    // 0x176050: 0x1454000f
    ctx->pc = 0x176050u;
    {
        const bool branch_taken_0x176050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        ctx->pc = 0x176054u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 4294936432));
        if (branch_taken_0x176050) {
            ctx->pc = 0x176090u;
            goto label_176090;
        }
    }
    ctx->pc = 0x176058u;
    // 0x176058: 0x24050001
    ctx->pc = 0x176058u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17605c: 0x8e040018
    ctx->pc = 0x17605cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x176060: 0xc05651a
    ctx->pc = 0x176060u;
    SET_GPR_U32(ctx, 31, 0x176068u);
    ctx->pc = 0x176064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x159468u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceIoctl_0x159468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176068u; }
        else if (ctx->pc != 0x176068u) { ctx->pc = 0x176068u; }
    }
    if (ctx->pc != 0x176068u) { return; }
    ctx->pc = 0x176068u;
    // 0x176068: 0x4410004
    ctx->pc = 0x176068u;
    {
        const bool branch_taken_0x176068 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x176068) {
            ctx->pc = 0x17607Cu;
            goto label_17607c;
        }
    }
    ctx->pc = 0x176070u;
    // 0x176070: 0xae020024
    ctx->pc = 0x176070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x176074: 0x10000006
    ctx->pc = 0x176074u;
    {
        const bool branch_taken_0x176074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176078u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
        if (branch_taken_0x176074) {
            ctx->pc = 0x176090u;
            goto label_176090;
        }
    }
    ctx->pc = 0x17607Cu;
label_17607c:
    // 0x17607c: 0xc05d7f4
    ctx->pc = 0x17607Cu;
    SET_GPR_U32(ctx, 31, 0x176084u);
    ctx->pc = 0x176080u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x175FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_wait_0x175fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176084u; }
        else if (ctx->pc != 0x176084u) { ctx->pc = 0x176084u; }
    }
    if (ctx->pc != 0x176084u) { return; }
    ctx->pc = 0x176084u;
    // 0x176084: 0x232102a
    ctx->pc = 0x176084u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x176088: 0x1040fff1
    ctx->pc = 0x176088u;
    {
        const bool branch_taken_0x176088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17608Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x176088) {
            ctx->pc = 0x176050u;
            goto label_176050;
        }
    }
    ctx->pc = 0x176090u;
label_176090:
    // 0x176090: 0xdfbf0070
    ctx->pc = 0x176090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176094: 0xdfb50060
    ctx->pc = 0x176094u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176098: 0xdfb40050
    ctx->pc = 0x176098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17609c: 0xdfb30040
    ctx->pc = 0x17609cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1760a0: 0xdfb20030
    ctx->pc = 0x1760a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1760a4: 0xdfb10020
    ctx->pc = 0x1760a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1760a8: 0xdfb00010
    ctx->pc = 0x1760a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1760ac: 0x3e00008
    ctx->pc = 0x1760ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1760B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176050u: goto label_176050;
            case 0x17607Cu: goto label_17607c;
            case 0x176090u: goto label_176090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1760B4u;
}
