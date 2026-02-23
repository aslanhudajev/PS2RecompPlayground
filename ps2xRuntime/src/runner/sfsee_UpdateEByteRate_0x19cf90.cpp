#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_UpdateEByteRate
// Address: 0x19cf90 - 0x19d014
void sfsee_UpdateEByteRate_0x19cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_UpdateEByteRate");


    ctx->pc = 0x19cf90u;

    // 0x19cf90: 0x27bdffe0
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cf94: 0xffbf0010
    ctx->pc = 0x19cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cf98: 0xffb00000
    ctx->pc = 0x19cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cf9c: 0x8c906758
    ctx->pc = 0x19cf9cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 26456)));
    // 0x19cfa0: 0x8e020dbc
    ctx->pc = 0x19cfa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 3516)));
    // 0x19cfa4: 0x5c400017
    ctx->pc = 0x19CFA4u;
    {
        const bool branch_taken_0x19cfa4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19cfa4) {
            ctx->pc = 0x19CFA8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x19D004u;
            goto label_19d004;
        }
    }
    ctx->pc = 0x19CFACu;
    // 0x19cfac: 0x8e040db0
    ctx->pc = 0x19cfacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x19cfb0: 0x8e060db4
    ctx->pc = 0x19cfb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 3508)));
    // 0x19cfb4: 0x18800003
    ctx->pc = 0x19CFB4u;
    {
        const bool branch_taken_0x19cfb4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19CFB8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 3512)));
        if (branch_taken_0x19cfb4) {
            ctx->pc = 0x19CFC4u;
            goto label_19cfc4;
        }
    }
    ctx->pc = 0x19CFBCu;
    // 0x19cfbc: 0x1cc0000e
    ctx->pc = 0x19CFBCu;
    {
        const bool branch_taken_0x19cfbc = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x19cfbc) {
            ctx->pc = 0x19CFF8u;
            goto label_19cff8;
        }
    }
    ctx->pc = 0x19CFC4u;
label_19cfc4:
    // 0x19cfc4: 0x8e020004
    ctx->pc = 0x19cfc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19cfc8: 0x5c40000e
    ctx->pc = 0x19CFC8u;
    {
        const bool branch_taken_0x19cfc8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19cfc8) {
            ctx->pc = 0x19CFCCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x19D004u;
            goto label_19d004;
        }
    }
    ctx->pc = 0x19CFD0u;
    // 0x19cfd0: 0x58800001
    ctx->pc = 0x19CFD0u;
    {
        const bool branch_taken_0x19cfd0 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x19cfd0) {
            ctx->pc = 0x19CFD4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 3480)));
            ctx->pc = 0x19CFD8u;
            goto label_19cfd8;
        }
    }
    ctx->pc = 0x19CFD8u;
label_19cfd8:
    // 0x19cfd8: 0x1cc00003
    ctx->pc = 0x19CFD8u;
    {
        const bool branch_taken_0x19cfd8 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x19cfd8) {
            ctx->pc = 0x19CFE8u;
            goto label_19cfe8;
        }
    }
    ctx->pc = 0x19CFE0u;
    // 0x19cfe0: 0x8e060d9c
    ctx->pc = 0x19cfe0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 3484)));
    // 0x19cfe4: 0x8e050da0
    ctx->pc = 0x19cfe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_19cfe8:
    // 0x19cfe8: 0x58800006
    ctx->pc = 0x19CFE8u;
    {
        const bool branch_taken_0x19cfe8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x19cfe8) {
            ctx->pc = 0x19CFECu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x19D004u;
            goto label_19d004;
        }
    }
    ctx->pc = 0x19CFF0u;
    // 0x19cff0: 0x58c00004
    ctx->pc = 0x19CFF0u;
    {
        const bool branch_taken_0x19cff0 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x19cff0) {
            ctx->pc = 0x19CFF4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
            ctx->pc = 0x19D004u;
            goto label_19d004;
        }
    }
    ctx->pc = 0x19CFF8u;
label_19cff8:
    // 0x19cff8: 0xc063132
    ctx->pc = 0x19CFF8u;
    SET_GPR_U32(ctx, 31, 0x19D000u);
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D000u; }
        else if (ctx->pc != 0x19D000u) { ctx->pc = 0x19D000u; }
    }
    if (ctx->pc != 0x19D000u) { return; }
    ctx->pc = 0x19D000u;
    // 0x19d000: 0xae020d94
    ctx->pc = 0x19d000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3476), GPR_U32(ctx, 2));
label_19d004:
    // 0x19d004: 0xdfbf0010
    ctx->pc = 0x19d004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d008: 0xdfb00000
    ctx->pc = 0x19d008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d00c: 0x3e00008
    ctx->pc = 0x19D00Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CFC4u: goto label_19cfc4;
            case 0x19CFD8u: goto label_19cfd8;
            case 0x19CFE8u: goto label_19cfe8;
            case 0x19CFF8u: goto label_19cff8;
            case 0x19D004u: goto label_19d004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D014u;
}
