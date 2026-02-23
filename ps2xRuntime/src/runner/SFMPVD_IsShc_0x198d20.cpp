#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVD_IsShc
// Address: 0x198d20 - 0x198dbc
void SFMPVD_IsShc_0x198d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVD_IsShc");


    ctx->pc = 0x198d20u;

    // 0x198d20: 0x27bdffc0
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198d24: 0xffb00010
    ctx->pc = 0x198d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x198d28: 0xffb10020
    ctx->pc = 0x198d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x198d2c: 0x80802d
    ctx->pc = 0x198d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d30: 0xffbf0030
    ctx->pc = 0x198d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198d34: 0xc061610
    ctx->pc = 0x198D34u;
    SET_GPR_U32(ctx, 31, 0x198D3Cu);
    ctx->pc = 0x198D38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D3Cu; }
        else if (ctx->pc != 0x198D3Cu) { ctx->pc = 0x198D3Cu; }
    }
    if (ctx->pc != 0x198D3Cu) { return; }
    ctx->pc = 0x198D3Cu;
    // 0x198d3c: 0x24030040
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x198d40: 0x14430019
    ctx->pc = 0x198D40u;
    {
        const bool branch_taken_0x198d40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x198D44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198d40) {
            ctx->pc = 0x198DA8u;
            goto label_198da8;
        }
    }
    ctx->pc = 0x198D48u;
    // 0x198d48: 0x200202d
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d4c: 0x220282d
    ctx->pc = 0x198d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d50: 0x3a0302d
    ctx->pc = 0x198d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d54: 0xc066370
    ctx->pc = 0x198D54u;
    SET_GPR_U32(ctx, 31, 0x198D5Cu);
    ctx->pc = 0x198D58u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x198DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvd_ReadParPr_0x198dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D5Cu; }
        else if (ctx->pc != 0x198D5Cu) { ctx->pc = 0x198D5Cu; }
    }
    if (ctx->pc != 0x198D5Cu) { return; }
    ctx->pc = 0x198D5Cu;
    // 0x198d5c: 0x14400012
    ctx->pc = 0x198D5Cu;
    {
        const bool branch_taken_0x198d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198D60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x198d5c) {
            ctx->pc = 0x198DA8u;
            goto label_198da8;
        }
    }
    ctx->pc = 0x198D64u;
    // 0x198d64: 0x8fa20000
    ctx->pc = 0x198d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198d68: 0x14400003
    ctx->pc = 0x198D68u;
    {
        const bool branch_taken_0x198d68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198D6Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x198d68) {
            ctx->pc = 0x198D78u;
            goto label_198d78;
        }
    }
    ctx->pc = 0x198D70u;
label_198d70:
    // 0x198d70: 0x1000000d
    ctx->pc = 0x198D70u;
    {
        const bool branch_taken_0x198d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198D74u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198d70) {
            ctx->pc = 0x198DA8u;
            goto label_198da8;
        }
    }
    ctx->pc = 0x198D78u;
label_198d78:
    // 0x198d78: 0x1040fffd
    ctx->pc = 0x198D78u;
    {
        const bool branch_taken_0x198d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198D7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198d78) {
            ctx->pc = 0x198D70u;
            goto label_198d70;
        }
    }
    ctx->pc = 0x198D80u;
    // 0x198d80: 0x220282d
    ctx->pc = 0x198d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d84: 0x37a60008
    ctx->pc = 0x198d84u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
    // 0x198d88: 0xc06637c
    ctx->pc = 0x198D88u;
    SET_GPR_U32(ctx, 31, 0x198D90u);
    ctx->pc = 0x198D8Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x198DF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvd_ReadBrMb_0x198df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198D90u; }
        else if (ctx->pc != 0x198D90u) { ctx->pc = 0x198D90u; }
    }
    if (ctx->pc != 0x198D90u) { return; }
    ctx->pc = 0x198D90u;
    // 0x198d90: 0x14400005
    ctx->pc = 0x198D90u;
    {
        const bool branch_taken_0x198d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198D94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x198d90) {
            ctx->pc = 0x198DA8u;
            goto label_198da8;
        }
    }
    ctx->pc = 0x198D98u;
    // 0x198d98: 0x8fa20008
    ctx->pc = 0x198d98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198d9c: 0x1040fff4
    ctx->pc = 0x198D9Cu;
    {
        const bool branch_taken_0x198d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x198DA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
        if (branch_taken_0x198d9c) {
            ctx->pc = 0x198D70u;
            goto label_198d70;
        }
    }
    ctx->pc = 0x198DA4u;
    // 0x198da4: 0x2102b
    ctx->pc = 0x198da4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_198da8:
    // 0x198da8: 0xdfbf0030
    ctx->pc = 0x198da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198dac: 0xdfb10020
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198db0: 0xdfb00010
    ctx->pc = 0x198db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198db4: 0x3e00008
    ctx->pc = 0x198DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198D70u: goto label_198d70;
            case 0x198D78u: goto label_198d78;
            case 0x198DA8u: goto label_198da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198DBCu;
}
