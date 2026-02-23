#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_SetErrFunc
// Address: 0x186038 - 0x18609c
void MPV_SetErrFunc_0x186038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_SetErrFunc");


    ctx->pc = 0x186038u;

    // 0x186038: 0x27bdffc0
    ctx->pc = 0x186038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18603c: 0xffb00000
    ctx->pc = 0x18603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x186040: 0xffb20020
    ctx->pc = 0x186040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x186044: 0x80802d
    ctx->pc = 0x186044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186048: 0xffb10010
    ctx->pc = 0x186048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18604c: 0xa0902d
    ctx->pc = 0x18604cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186050: 0xffbf0030
    ctx->pc = 0x186050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x186054: 0xc062142
    ctx->pc = 0x186054u;
    SET_GPR_U32(ctx, 31, 0x18605Cu);
    ctx->pc = 0x186058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18605Cu; }
        else if (ctx->pc != 0x18605Cu) { ctx->pc = 0x18605Cu; }
    }
    if (ctx->pc != 0x18605Cu) { return; }
    ctx->pc = 0x18605Cu;
    // 0x18605c: 0x10400006
    ctx->pc = 0x18605Cu;
    {
        const bool branch_taken_0x18605c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18605c) {
            ctx->pc = 0x186078u;
            goto label_186078;
        }
    }
    ctx->pc = 0x186064u;
    // 0x186064: 0x3c05ff03
    ctx->pc = 0x186064u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x186068: 0xc061846
    ctx->pc = 0x186068u;
    SET_GPR_U32(ctx, 31, 0x186070u);
    ctx->pc = 0x18606Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 515));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186070u; }
        else if (ctx->pc != 0x186070u) { ctx->pc = 0x186070u; }
    }
    if (ctx->pc != 0x186070u) { return; }
    ctx->pc = 0x186070u;
    // 0x186070: 0x10000005
    ctx->pc = 0x186070u;
    {
        const bool branch_taken_0x186070 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186074u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x186070) {
            ctx->pc = 0x186088u;
            goto label_186088;
        }
    }
    ctx->pc = 0x186078u;
label_186078:
    // 0x186078: 0xae1101c0
    ctx->pc = 0x186078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 17));
    // 0x18607c: 0x102d
    ctx->pc = 0x18607cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186080: 0xae1201bc
    ctx->pc = 0x186080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 18));
    // 0x186084: 0xdfbf0030
    ctx->pc = 0x186084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_186088:
    // 0x186088: 0xdfb20020
    ctx->pc = 0x186088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18608c: 0xdfb10010
    ctx->pc = 0x18608cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186090: 0xdfb00000
    ctx->pc = 0x186090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186094: 0x3e00008
    ctx->pc = 0x186094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186098u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186078u: goto label_186078;
            case 0x186088u: goto label_186088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18609Cu;
}
