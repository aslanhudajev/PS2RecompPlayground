#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IntrFunc_VBLKIN__Fi
// Address: 0x1eec50 - 0x1eecbc
void IntrFunc_VBLKIN__Fi_0x1eec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IntrFunc_VBLKIN__Fi");


    ctx->pc = 0x1eec50u;

    // 0x1eec50: 0x27bdfff0
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eec54: 0x7fbf0000
    ctx->pc = 0x1eec54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eec58: 0x8f828d30
    ctx->pc = 0x1eec58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1eec5c: 0x24420001
    ctx->pc = 0x1eec5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eec60: 0xc06bdf4
    ctx->pc = 0x1EEC60u;
    SET_GPR_U32(ctx, 31, 0x1EEC68u);
    ctx->pc = 0x1EEC64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937904), GPR_U32(ctx, 2));
    ctx->pc = 0x1AF7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlVblankInFunction_0x1af7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC68u; }
        else if (ctx->pc != 0x1EEC68u) { ctx->pc = 0x1EEC68u; }
    }
    if (ctx->pc != 0x1EEC68u) { return; }
    ctx->pc = 0x1EEC68u;
    // 0x1eec68: 0x24020001
    ctx->pc = 0x1eec68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eec6c: 0xaf828bec
    ctx->pc = 0x1eec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 2));
    // 0x1eec70: 0x3c020050
    ctx->pc = 0x1eec70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eec74: 0xc075288
    ctx->pc = 0x1EEC74u;
    SET_GPR_U32(ctx, 31, 0x1EEC7Cu);
    ctx->pc = 0x1EEC78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D4A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        execVB__11CreditClassFv_0x1d4a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC7Cu; }
        else if (ctx->pc != 0x1EEC7Cu) { ctx->pc = 0x1EEC7Cu; }
    }
    if (ctx->pc != 0x1EEC7Cu) { return; }
    ctx->pc = 0x1EEC7Cu;
    // 0x1eec7c: 0xc07bbbc
    ctx->pc = 0x1EEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1EEC84u);
    ctx->pc = 0x1EEC80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937436));
    ctx->pc = 0x1EEEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_VB__14SwitchMgrClassFv_0x1eeef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC84u; }
        else if (ctx->pc != 0x1EEC84u) { ctx->pc = 0x1EEC84u; }
    }
    if (ctx->pc != 0x1EEC84u) { return; }
    ctx->pc = 0x1EEC84u;
    // 0x1eec84: 0x3c020050
    ctx->pc = 0x1eec84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eec88: 0xc07b75c
    ctx->pc = 0x1EEC88u;
    SET_GPR_U32(ctx, 31, 0x1EEC90u);
    ctx->pc = 0x1EEC8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957936));
    ctx->pc = 0x1EDD70u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_VB__11GunMgrClassFv_0x1edd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EEC90u; }
        else if (ctx->pc != 0x1EEC90u) { ctx->pc = 0x1EEC90u; }
    }
    if (ctx->pc != 0x1EEC90u) { return; }
    ctx->pc = 0x1EEC90u;
    // 0x1eec90: 0x8f828d08
    ctx->pc = 0x1eec90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x1eec94: 0x10400003
    ctx->pc = 0x1EEC94u;
    {
        const bool branch_taken_0x1eec94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EEC98u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eec94) {
            ctx->pc = 0x1EECA4u;
            goto label_1eeca4;
        }
    }
    ctx->pc = 0x1EEC9Cu;
    // 0x1eec9c: 0xc05b552
    ctx->pc = 0x1EEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EECA4u);
    ctx->pc = 0x16D548u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPS2_ExecVint_0x16d548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECA4u; }
        else if (ctx->pc != 0x1EECA4u) { ctx->pc = 0x1EECA4u; }
    }
    if (ctx->pc != 0x1EECA4u) { return; }
    ctx->pc = 0x1EECA4u;
label_1eeca4:
    // 0x1eeca4: 0xf
    ctx->pc = 0x1eeca4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1eeca8: 0x42000038
    ctx->pc = 0x1eeca8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1eecac: 0x7bbf0000
    ctx->pc = 0x1eecacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eecb0: 0x24020001
    ctx->pc = 0x1eecb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eecb4: 0x3e00008
    ctx->pc = 0x1EECB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EECB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EECA4u: goto label_1eeca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EECBCu;
}
