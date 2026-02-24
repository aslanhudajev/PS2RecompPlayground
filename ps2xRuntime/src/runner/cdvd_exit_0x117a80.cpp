#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cdvd_exit
// Address: 0x117a80 - 0x117b00
void cdvd_exit_0x117a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117a80u;

    // 0x117a80: 0x3c020017
    ctx->pc = 0x117a80u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x117a84: 0x27bdffe0
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117a88: 0x8c43fc94
    ctx->pc = 0x117a88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966420)));
    // 0x117a8c: 0xffbf0010
    ctx->pc = 0x117a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117a90: 0x10600009
    ctx->pc = 0x117A90u;
    {
        const bool branch_taken_0x117a90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x117A94u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x117a90) {
            ctx->pc = 0x117AB8u;
            goto label_117ab8;
        }
    }
    ctx->pc = 0x117A98u;
    // 0x117a98: 0x3c030017
    ctx->pc = 0x117a98u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x117a9c: 0x2402ffff
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117aa0: 0xac62fcd4
    ctx->pc = 0x117aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966484), GPR_U32(ctx, 2));
    // 0x117aa4: 0x3c100017
    ctx->pc = 0x117aa4u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x117aa8: 0xc0438b0
    ctx->pc = 0x117AA8u;
    SET_GPR_U32(ctx, 31, 0x117AB0u);
    ctx->pc = 0x117AACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966432)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AB0u; }
    }
    if (ctx->pc != 0x117AB0u) { return; }
    ctx->pc = 0x117AB0u;
    // 0x117ab0: 0x10000003
    ctx->pc = 0x117AB0u;
    {
        const bool branch_taken_0x117ab0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117AB4u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x117ab0) {
            ctx->pc = 0x117AC0u;
            goto label_117ac0;
        }
    }
    ctx->pc = 0x117AB8u;
label_117ab8:
    // 0x117ab8: 0x3c100017
    ctx->pc = 0x117ab8u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x117abc: 0x3c020017
    ctx->pc = 0x117abcu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_117ac0:
    // 0x117ac0: 0xc0438ac
    ctx->pc = 0x117AC0u;
    SET_GPR_U32(ctx, 31, 0x117AC8u);
    ctx->pc = 0x117AC4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966440)));
    ctx->pc = 0x10E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AC8u; }
    }
    if (ctx->pc != 0x117AC8u) { return; }
    ctx->pc = 0x117AC8u;
    // 0x117ac8: 0x3c030017
    ctx->pc = 0x117ac8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x117acc: 0xc0438ac
    ctx->pc = 0x117ACCu;
    SET_GPR_U32(ctx, 31, 0x117AD4u);
    ctx->pc = 0x117AD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4294966444)));
    ctx->pc = 0x10E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AD4u; }
    }
    if (ctx->pc != 0x117AD4u) { return; }
    ctx->pc = 0x117AD4u;
    // 0x117ad4: 0xc0438ac
    ctx->pc = 0x117AD4u;
    SET_GPR_U32(ctx, 31, 0x117ADCu);
    ctx->pc = 0x117AD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294966432)));
    ctx->pc = 0x10E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117ADCu; }
    }
    if (ctx->pc != 0x117ADCu) { return; }
    ctx->pc = 0x117ADCu;
    // 0x117adc: 0xc0453ee
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AE4u; }
    }
    if (ctx->pc != 0x117AE4u) { return; }
    ctx->pc = 0x117AE4u;
    // 0x117ae4: 0x3c048000
    ctx->pc = 0x117ae4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x117ae8: 0xc045658
    ctx->pc = 0x117AE8u;
    SET_GPR_U32(ctx, 31, 0x117AF0u);
    ctx->pc = 0x117AECu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)18);
    ctx->pc = 0x115960u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRemoveCmdHandler_0x115960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117AF0u; }
    }
    if (ctx->pc != 0x117AF0u) { return; }
    ctx->pc = 0x117AF0u;
    // 0x117af0: 0xdfbf0010
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117af4: 0xdfb00000
    ctx->pc = 0x117af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117af8: 0x8045400
    ctx->pc = 0x117AF8u;
    ctx->pc = 0x117AFCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x115000u;
    EIntr_0x115000(rdram, ctx, runtime); return;
    ctx->pc = 0x117B00u;
}
