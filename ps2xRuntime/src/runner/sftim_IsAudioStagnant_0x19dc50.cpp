#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_IsAudioStagnant
// Address: 0x19dc50 - 0x19dccc
void sftim_IsAudioStagnant_0x19dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_IsAudioStagnant");


    ctx->pc = 0x19dc50u;

    // 0x19dc50: 0x27bdffc0
    ctx->pc = 0x19dc50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19dc54: 0x24050006
    ctx->pc = 0x19dc54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19dc58: 0xffb00010
    ctx->pc = 0x19dc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19dc5c: 0x80802d
    ctx->pc = 0x19dc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc60: 0xffbf0030
    ctx->pc = 0x19dc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19dc64: 0xc0674c2
    ctx->pc = 0x19DC64u;
    SET_GPR_U32(ctx, 31, 0x19DC6Cu);
    ctx->pc = 0x19DC68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC6Cu; }
        else if (ctx->pc != 0x19DC6Cu) { ctx->pc = 0x19DC6Cu; }
    }
    if (ctx->pc != 0x19DC6Cu) { return; }
    ctx->pc = 0x19DC6Cu;
    // 0x19dc6c: 0x10400006
    ctx->pc = 0x19DC6Cu;
    {
        const bool branch_taken_0x19dc6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dc6c) {
            ctx->pc = 0x19DC88u;
            goto label_19dc88;
        }
    }
    ctx->pc = 0x19DC74u;
    // 0x19dc74: 0xc0674c2
    ctx->pc = 0x19DC74u;
    SET_GPR_U32(ctx, 31, 0x19DC7Cu);
    ctx->pc = 0x19DC78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 51));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC7Cu; }
        else if (ctx->pc != 0x19DC7Cu) { ctx->pc = 0x19DC7Cu; }
    }
    if (ctx->pc != 0x19DC7Cu) { return; }
    ctx->pc = 0x19DC7Cu;
    // 0x19dc7c: 0x40882d
    ctx->pc = 0x19dc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc80: 0x16200003
    ctx->pc = 0x19DC80u;
    {
        const bool branch_taken_0x19dc80 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x19DC84u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2708));
        if (branch_taken_0x19dc80) {
            ctx->pc = 0x19DC90u;
            goto label_19dc90;
        }
    }
    ctx->pc = 0x19DC88u;
label_19dc88:
    // 0x19dc88: 0x1000000b
    ctx->pc = 0x19DC88u;
    {
        const bool branch_taken_0x19dc88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19DC8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19dc88) {
            ctx->pc = 0x19DCB8u;
            goto label_19dcb8;
        }
    }
    ctx->pc = 0x19DC90u;
label_19dc90:
    // 0x19dc90: 0x3a0282d
    ctx->pc = 0x19dc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc94: 0xc0676fa
    ctx->pc = 0x19DC94u;
    SET_GPR_U32(ctx, 31, 0x19DC9Cu);
    ctx->pc = 0x19DC98u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_GetVtimeTmr_0x19dbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC9Cu; }
        else if (ctx->pc != 0x19DC9Cu) { ctx->pc = 0x19DC9Cu; }
    }
    if (ctx->pc != 0x19DC9Cu) { return; }
    ctx->pc = 0x19DC9Cu;
    // 0x19dc9c: 0x8fa30004
    ctx->pc = 0x19dc9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19dca0: 0x8fa20000
    ctx->pc = 0x19dca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dca4: 0x50600001
    ctx->pc = 0x19DCA4u;
    {
        const bool branch_taken_0x19dca4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x19dca4) {
            ctx->pc = 0x19DCA8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19DCACu;
            goto label_19dcac;
        }
    }
    ctx->pc = 0x19DCACu;
label_19dcac:
    // 0x19dcac: 0x43001a
    ctx->pc = 0x19dcacu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19dcb0: 0x1012
    ctx->pc = 0x19dcb0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x19dcb4: 0x222102a
    ctx->pc = 0x19dcb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_19dcb8:
    // 0x19dcb8: 0xdfbf0030
    ctx->pc = 0x19dcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dcbc: 0xdfb10020
    ctx->pc = 0x19dcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dcc0: 0xdfb00010
    ctx->pc = 0x19dcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcc4: 0x3e00008
    ctx->pc = 0x19DCC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DCC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DC88u: goto label_19dc88;
            case 0x19DC90u: goto label_19dc90;
            case 0x19DCACu: goto label_19dcac;
            case 0x19DCB8u: goto label_19dcb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DCCCu;
}
