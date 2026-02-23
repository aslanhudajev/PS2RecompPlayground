#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetTotTime
// Address: 0x19cd28 - 0x19cd9c
void SFD_SetTotTime_0x19cd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetTotTime");


    ctx->pc = 0x19cd28u;

    // 0x19cd28: 0x27bdffc0
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19cd2c: 0xffb00000
    ctx->pc = 0x19cd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19cd30: 0xffb20020
    ctx->pc = 0x19cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19cd34: 0x80802d
    ctx->pc = 0x19cd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd38: 0xffb10010
    ctx->pc = 0x19cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19cd3c: 0xa0902d
    ctx->pc = 0x19cd3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd40: 0xffbf0030
    ctx->pc = 0x19cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19cd44: 0xc064f1e
    ctx->pc = 0x19CD44u;
    SET_GPR_U32(ctx, 31, 0x19CD4Cu);
    ctx->pc = 0x19CD48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD4Cu; }
        else if (ctx->pc != 0x19CD4Cu) { ctx->pc = 0x19CD4Cu; }
    }
    if (ctx->pc != 0x19CD4Cu) { return; }
    ctx->pc = 0x19CD4Cu;
    // 0x19cd4c: 0x10400006
    ctx->pc = 0x19CD4Cu;
    {
        const bool branch_taken_0x19cd4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CD50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cd4c) {
            ctx->pc = 0x19CD68u;
            goto label_19cd68;
        }
    }
    ctx->pc = 0x19CD54u;
    // 0x19cd54: 0x3c05ff00
    ctx->pc = 0x19cd54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19cd58: 0xc064ea0
    ctx->pc = 0x19CD58u;
    SET_GPR_U32(ctx, 31, 0x19CD60u);
    ctx->pc = 0x19CD5Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 346));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD60u; }
        else if (ctx->pc != 0x19CD60u) { ctx->pc = 0x19CD60u; }
    }
    if (ctx->pc != 0x19CD60u) { return; }
    ctx->pc = 0x19CD60u;
    // 0x19cd60: 0x10000009
    ctx->pc = 0x19CD60u;
    {
        const bool branch_taken_0x19cd60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CD64u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19cd60) {
            ctx->pc = 0x19CD88u;
            goto label_19cd88;
        }
    }
    ctx->pc = 0x19CD68u;
label_19cd68:
    // 0x19cd68: 0x8e026758
    ctx->pc = 0x19cd68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19cd6c: 0x10400004
    ctx->pc = 0x19CD6Cu;
    {
        const bool branch_taken_0x19cd6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CD70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cd6c) {
            ctx->pc = 0x19CD80u;
            goto label_19cd80;
        }
    }
    ctx->pc = 0x19CD74u;
    // 0x19cd74: 0xac510db8
    ctx->pc = 0x19cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3512), GPR_U32(ctx, 17));
    // 0x19cd78: 0xc0673e4
    ctx->pc = 0x19CD78u;
    SET_GPR_U32(ctx, 31, 0x19CD80u);
    ctx->pc = 0x19CD7Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3508), GPR_U32(ctx, 18));
    ctx->pc = 0x19CF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_UpdateEByteRate_0x19cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CD80u; }
        else if (ctx->pc != 0x19CD80u) { ctx->pc = 0x19CD80u; }
    }
    if (ctx->pc != 0x19CD80u) { return; }
    ctx->pc = 0x19CD80u;
label_19cd80:
    // 0x19cd80: 0x102d
    ctx->pc = 0x19cd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd84: 0xdfbf0030
    ctx->pc = 0x19cd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19cd88:
    // 0x19cd88: 0xdfb20020
    ctx->pc = 0x19cd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cd8c: 0xdfb10010
    ctx->pc = 0x19cd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd90: 0xdfb00000
    ctx->pc = 0x19cd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd94: 0x3e00008
    ctx->pc = 0x19CD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CD68u: goto label_19cd68;
            case 0x19CD80u: goto label_19cd80;
            case 0x19CD88u: goto label_19cd88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CD9Cu;
}
