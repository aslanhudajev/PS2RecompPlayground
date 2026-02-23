#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ChkTermFlg
// Address: 0x195d40 - 0x195d9c
void sfmpv_ChkTermFlg_0x195d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ChkTermFlg");


    ctx->pc = 0x195d40u;

    // 0x195d40: 0x27bdffe0
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195d44: 0xffb00000
    ctx->pc = 0x195d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195d48: 0xffbf0010
    ctx->pc = 0x195d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195d4c: 0xc06639a
    ctx->pc = 0x195D4Cu;
    SET_GPR_U32(ctx, 31, 0x195D54u);
    ctx->pc = 0x195D50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_GetNumFrm_0x198e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D54u; }
        else if (ctx->pc != 0x195D54u) { ctx->pc = 0x195D54u; }
    }
    if (ctx->pc != 0x195D54u) { return; }
    ctx->pc = 0x195D54u;
    // 0x195d54: 0x2403ffff
    ctx->pc = 0x195d54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195d58: 0x1443000d
    ctx->pc = 0x195D58u;
    {
        const bool branch_taken_0x195d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x195D5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x195d58) {
            ctx->pc = 0x195D90u;
            goto label_195d90;
        }
    }
    ctx->pc = 0x195D60u;
    // 0x195d60: 0x200202d
    ctx->pc = 0x195d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d64: 0xc065768
    ctx->pc = 0x195D64u;
    SET_GPR_U32(ctx, 31, 0x195D6Cu);
    ctx->pc = 0x195D68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x195DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_SetTermDst_0x195da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D6Cu; }
        else if (ctx->pc != 0x195D6Cu) { ctx->pc = 0x195D6Cu; }
    }
    if (ctx->pc != 0x195D6Cu) { return; }
    ctx->pc = 0x195D6Cu;
    // 0x195d6c: 0x8e020940
    ctx->pc = 0x195d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2368)));
    // 0x195d70: 0x14400007
    ctx->pc = 0x195D70u;
    {
        const bool branch_taken_0x195d70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195D74u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x195d70) {
            ctx->pc = 0x195D90u;
            goto label_195d90;
        }
    }
    ctx->pc = 0x195D78u;
    // 0x195d78: 0x200202d
    ctx->pc = 0x195d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d7c: 0xdfb00000
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d80: 0x24050005
    ctx->pc = 0x195d80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x195d84: 0x302d
    ctx->pc = 0x195d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d88: 0x8067464
    ctx->pc = 0x195D88u;
    ctx->pc = 0x195D8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19D190u;
    SFSET_SetCond_0x19d190(rdram, ctx, runtime); return;
    ctx->pc = 0x195D90u;
label_195d90:
    // 0x195d90: 0xdfb00000
    ctx->pc = 0x195d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d94: 0x3e00008
    ctx->pc = 0x195D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195D90u: goto label_195d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195D9Cu;
}
