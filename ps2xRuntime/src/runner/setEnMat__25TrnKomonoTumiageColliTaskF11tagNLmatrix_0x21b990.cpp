#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setEnMat__25TrnKomonoTumiageColliTaskF11tagNLmatrix
// Address: 0x21b990 - 0x21ba04
void setEnMat__25TrnKomonoTumiageColliTaskF11tagNLmatrix_0x21b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setEnMat__25TrnKomonoTumiageColliTaskF11tagNLmatrix");


    ctx->pc = 0x21b990u;

    // 0x21b990: 0x27bdffb0
    ctx->pc = 0x21b990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b994: 0x7fbf0000
    ctx->pc = 0x21b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x21b998: 0x27a70010
    ctx->pc = 0x21b998u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b99c: 0x24060008
    ctx->pc = 0x21b99cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
label_21b9a0:
    // 0x21b9a0: 0x8ca30000
    ctx->pc = 0x21b9a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b9a4: 0x8ca20004
    ctx->pc = 0x21b9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21b9a8: 0x24c6ffff
    ctx->pc = 0x21b9a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21b9ac: 0xace30000
    ctx->pc = 0x21b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x21b9b0: 0xace20004
    ctx->pc = 0x21b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x21b9b4: 0x24a50008
    ctx->pc = 0x21b9b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x21b9b8: 0x1cc0fff9
    ctx->pc = 0x21B9B8u;
    {
        const bool branch_taken_0x21b9b8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x21B9BCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
        if (branch_taken_0x21b9b8) {
            ctx->pc = 0x21B9A0u;
            goto label_21b9a0;
        }
    }
    ctx->pc = 0x21B9C0u;
    // 0x21b9c0: 0x27a70010
    ctx->pc = 0x21b9c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21b9c4: 0x248600e0
    ctx->pc = 0x21b9c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 224));
    // 0x21b9c8: 0x24050008
    ctx->pc = 0x21b9c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
label_21b9cc:
    // 0x21b9cc: 0x8ce30000
    ctx->pc = 0x21b9ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b9d0: 0x8ce20004
    ctx->pc = 0x21b9d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x21b9d4: 0x24a5ffff
    ctx->pc = 0x21b9d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21b9d8: 0xacc30000
    ctx->pc = 0x21b9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21b9dc: 0xacc20004
    ctx->pc = 0x21b9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x21b9e0: 0x24e70008
    ctx->pc = 0x21b9e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 8));
    // 0x21b9e4: 0x1ca0fff9
    ctx->pc = 0x21B9E4u;
    {
        const bool branch_taken_0x21b9e4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x21B9E8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x21b9e4) {
            ctx->pc = 0x21B9CCu;
            goto label_21b9cc;
        }
    }
    ctx->pc = 0x21B9ECu;
    // 0x21b9ec: 0x248400e0
    ctx->pc = 0x21b9ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 224));
    // 0x21b9f0: 0xc072f44
    ctx->pc = 0x21B9F0u;
    SET_GPR_U32(ctx, 31, 0x21B9F8u);
    ctx->pc = 0x21B9F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1CBD10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__18tagNLmatrix_memberFRC18tagNLmatrix_member_0x1cbd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21B9F8u; }
        else if (ctx->pc != 0x21B9F8u) { ctx->pc = 0x21B9F8u; }
    }
    if (ctx->pc != 0x21B9F8u) { return; }
    ctx->pc = 0x21B9F8u;
    // 0x21b9f8: 0x7bbf0000
    ctx->pc = 0x21b9f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b9fc: 0x3e00008
    ctx->pc = 0x21B9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BA00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21B9A0u: goto label_21b9a0;
            case 0x21B9CCu: goto label_21b9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BA04u;
}
