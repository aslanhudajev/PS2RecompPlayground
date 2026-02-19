#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbCloseGlobal
// Address: 0x2a2d50 - 0x2a2e98
void pbCloseGlobal_0x2a2d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2d50u;

    // 0x2a2d50: 0x27bdffd0
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2d54: 0xffbf0020
    ctx->pc = 0x2a2d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2d58: 0xffb10010
    ctx->pc = 0x2a2d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2d5c: 0xffb00000
    ctx->pc = 0x2a2d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2d60: 0x3c100036
    ctx->pc = 0x2a2d60u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a2d64: 0x8e11dee0
    ctx->pc = 0x2a2d64u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a2d68: 0x3c030036
    ctx->pc = 0x2a2d68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2d6c: 0x24020001
    ctx->pc = 0x2a2d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2d70: 0xc0a9562
    ctx->pc = 0x2A2D70u;
    SET_GPR_U32(ctx, 31, 0x2A2D78u);
    ctx->pc = 0x2A2D74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958820), GPR_U32(ctx, 2));
    ctx->pc = 0x2A5588u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseError_0x2a5588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D78u; }
    }
    if (ctx->pc != 0x2A2D78u) { return; }
    ctx->pc = 0x2A2D78u;
    // 0x2a2d78: 0xc0aa318
    ctx->pc = 0x2A2D78u;
    SET_GPR_U32(ctx, 31, 0x2A2D80u);
    ctx->pc = 0x2A8C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseFrame_0x2a8c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D80u; }
    }
    if (ctx->pc != 0x2A2D80u) { return; }
    ctx->pc = 0x2A2D80u;
    // 0x2a2d80: 0xc0aad94
    ctx->pc = 0x2A2D80u;
    SET_GPR_U32(ctx, 31, 0x2A2D88u);
    ctx->pc = 0x2AB650u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseRender_0x2ab650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D88u; }
    }
    if (ctx->pc != 0x2A2D88u) { return; }
    ctx->pc = 0x2A2D88u;
    // 0x2a2d88: 0xc0aadcc
    ctx->pc = 0x2A2D88u;
    SET_GPR_U32(ctx, 31, 0x2A2D90u);
    ctx->pc = 0x2AB730u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseWindow_0x2ab730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D90u; }
    }
    if (ctx->pc != 0x2A2D90u) { return; }
    ctx->pc = 0x2A2D90u;
    // 0x2a2d90: 0xc0aba4c
    ctx->pc = 0x2A2D90u;
    SET_GPR_U32(ctx, 31, 0x2A2D98u);
    ctx->pc = 0x2AE930u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseAttribute_0x2ae930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D98u; }
    }
    if (ctx->pc != 0x2A2D98u) { return; }
    ctx->pc = 0x2A2D98u;
    // 0x2a2d98: 0xc0a9714
    ctx->pc = 0x2A2D98u;
    SET_GPR_U32(ctx, 31, 0x2A2DA0u);
    ctx->pc = 0x2A5C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDma_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DA0u; }
    }
    if (ctx->pc != 0x2A2DA0u) { return; }
    ctx->pc = 0x2A2DA0u;
    // 0x2a2da0: 0xc0ab46c
    ctx->pc = 0x2A2DA0u;
    SET_GPR_U32(ctx, 31, 0x2A2DA8u);
    ctx->pc = 0x2AD1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseScreen_0x2ad1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DA8u; }
    }
    if (ctx->pc != 0x2A2DA8u) { return; }
    ctx->pc = 0x2A2DA8u;
    // 0x2a2da8: 0xc0ab480
    ctx->pc = 0x2A2DA8u;
    SET_GPR_U32(ctx, 31, 0x2A2DB0u);
    ctx->pc = 0x2AD200u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseStats_0x2ad200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DB0u; }
    }
    if (ctx->pc != 0x2A2DB0u) { return; }
    ctx->pc = 0x2A2DB0u;
    // 0x2a2db0: 0xc0a8c30
    ctx->pc = 0x2A2DB0u;
    SET_GPR_U32(ctx, 31, 0x2A2DB8u);
    ctx->pc = 0x2A30C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDebug_0x2a30c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DB8u; }
    }
    if (ctx->pc != 0x2A2DB8u) { return; }
    ctx->pc = 0x2A2DB8u;
    // 0x2a2db8: 0xc0aa2cc
    ctx->pc = 0x2A2DB8u;
    SET_GPR_U32(ctx, 31, 0x2A2DC0u);
    ctx->pc = 0x2A8B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDiag_0x2a8b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DC0u; }
    }
    if (ctx->pc != 0x2A2DC0u) { return; }
    ctx->pc = 0x2A2DC0u;
    // 0x2a2dc0: 0xc0a947c
    ctx->pc = 0x2A2DC0u;
    SET_GPR_U32(ctx, 31, 0x2A2DC8u);
    ctx->pc = 0x2A51F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseMem_0x2a51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DC8u; }
    }
    if (ctx->pc != 0x2A2DC8u) { return; }
    ctx->pc = 0x2A2DC8u;
    // 0x2a2dc8: 0xc0ab496
    ctx->pc = 0x2A2DC8u;
    SET_GPR_U32(ctx, 31, 0x2A2DD0u);
    ctx->pc = 0x2AD258u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseModel_0x2ad258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DD0u; }
    }
    if (ctx->pc != 0x2A2DD0u) { return; }
    ctx->pc = 0x2A2DD0u;
    // 0x2a2dd0: 0xc0ab4aa
    ctx->pc = 0x2A2DD0u;
    SET_GPR_U32(ctx, 31, 0x2A2DD8u);
    ctx->pc = 0x2AD2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseText_0x2ad2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DD8u; }
    }
    if (ctx->pc != 0x2A2DD8u) { return; }
    ctx->pc = 0x2A2DD8u;
    // 0x2a2dd8: 0xc0ab4d0
    ctx->pc = 0x2A2DD8u;
    SET_GPR_U32(ctx, 31, 0x2A2DE0u);
    ctx->pc = 0x2AD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseBlit_0x2ad340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DE0u; }
    }
    if (ctx->pc != 0x2A2DE0u) { return; }
    ctx->pc = 0x2A2DE0u;
    // 0x2a2de0: 0xc0ab4e4
    ctx->pc = 0x2A2DE0u;
    SET_GPR_U32(ctx, 31, 0x2A2DE8u);
    ctx->pc = 0x2AD390u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseGeom_0x2ad390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DE8u; }
    }
    if (ctx->pc != 0x2A2DE8u) { return; }
    ctx->pc = 0x2A2DE8u;
    // 0x2a2de8: 0xc0ab50a
    ctx->pc = 0x2A2DE8u;
    SET_GPR_U32(ctx, 31, 0x2A2DF0u);
    ctx->pc = 0x2AD428u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseTexture_0x2ad428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DF0u; }
    }
    if (ctx->pc != 0x2A2DF0u) { return; }
    ctx->pc = 0x2A2DF0u;
    // 0x2a2df0: 0xc0abbf4
    ctx->pc = 0x2A2DF0u;
    SET_GPR_U32(ctx, 31, 0x2A2DF8u);
    ctx->pc = 0x2AEFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseUtils_0x2aefd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2DF8u; }
    }
    if (ctx->pc != 0x2A2DF8u) { return; }
    ctx->pc = 0x2A2DF8u;
    // 0x2a2df8: 0xc0aad94
    ctx->pc = 0x2A2DF8u;
    SET_GPR_U32(ctx, 31, 0x2A2E00u);
    ctx->pc = 0x2AB650u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseRender_0x2ab650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E00u; }
    }
    if (ctx->pc != 0x2A2E00u) { return; }
    ctx->pc = 0x2A2E00u;
    // 0x2a2e00: 0xc0aadcc
    ctx->pc = 0x2A2E00u;
    SET_GPR_U32(ctx, 31, 0x2A2E08u);
    ctx->pc = 0x2AB730u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseWindow_0x2ab730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E08u; }
    }
    if (ctx->pc != 0x2A2E08u) { return; }
    ctx->pc = 0x2A2E08u;
    // 0x2a2e08: 0xc0aba4c
    ctx->pc = 0x2A2E08u;
    SET_GPR_U32(ctx, 31, 0x2A2E10u);
    ctx->pc = 0x2AE930u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseAttribute_0x2ae930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E10u; }
    }
    if (ctx->pc != 0x2A2E10u) { return; }
    ctx->pc = 0x2A2E10u;
    // 0x2a2e10: 0xc0a9714
    ctx->pc = 0x2A2E10u;
    SET_GPR_U32(ctx, 31, 0x2A2E18u);
    ctx->pc = 0x2A5C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDma_0x2a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E18u; }
    }
    if (ctx->pc != 0x2A2E18u) { return; }
    ctx->pc = 0x2A2E18u;
    // 0x2a2e18: 0xc0ab46c
    ctx->pc = 0x2A2E18u;
    SET_GPR_U32(ctx, 31, 0x2A2E20u);
    ctx->pc = 0x2AD1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseScreen_0x2ad1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E20u; }
    }
    if (ctx->pc != 0x2A2E20u) { return; }
    ctx->pc = 0x2A2E20u;
    // 0x2a2e20: 0xc0ab480
    ctx->pc = 0x2A2E20u;
    SET_GPR_U32(ctx, 31, 0x2A2E28u);
    ctx->pc = 0x2AD200u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseStats_0x2ad200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E28u; }
    }
    if (ctx->pc != 0x2A2E28u) { return; }
    ctx->pc = 0x2A2E28u;
    // 0x2a2e28: 0xc0ab496
    ctx->pc = 0x2A2E28u;
    SET_GPR_U32(ctx, 31, 0x2A2E30u);
    ctx->pc = 0x2AD258u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseModel_0x2ad258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E30u; }
    }
    if (ctx->pc != 0x2A2E30u) { return; }
    ctx->pc = 0x2A2E30u;
    // 0x2a2e30: 0xc0ab4aa
    ctx->pc = 0x2A2E30u;
    SET_GPR_U32(ctx, 31, 0x2A2E38u);
    ctx->pc = 0x2AD2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseText_0x2ad2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E38u; }
    }
    if (ctx->pc != 0x2A2E38u) { return; }
    ctx->pc = 0x2A2E38u;
    // 0x2a2e38: 0xc0ab4d0
    ctx->pc = 0x2A2E38u;
    SET_GPR_U32(ctx, 31, 0x2A2E40u);
    ctx->pc = 0x2AD340u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseBlit_0x2ad340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E40u; }
    }
    if (ctx->pc != 0x2A2E40u) { return; }
    ctx->pc = 0x2A2E40u;
    // 0x2a2e40: 0xc0ab4e4
    ctx->pc = 0x2A2E40u;
    SET_GPR_U32(ctx, 31, 0x2A2E48u);
    ctx->pc = 0x2AD390u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseGeom_0x2ad390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E48u; }
    }
    if (ctx->pc != 0x2A2E48u) { return; }
    ctx->pc = 0x2A2E48u;
    // 0x2a2e48: 0xc0ab50a
    ctx->pc = 0x2A2E48u;
    SET_GPR_U32(ctx, 31, 0x2A2E50u);
    ctx->pc = 0x2AD428u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseTexture_0x2ad428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E50u; }
    }
    if (ctx->pc != 0x2A2E50u) { return; }
    ctx->pc = 0x2A2E50u;
    // 0x2a2e50: 0xc0abbf4
    ctx->pc = 0x2A2E50u;
    SET_GPR_U32(ctx, 31, 0x2A2E58u);
    ctx->pc = 0x2AEFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseUtils_0x2aefd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E58u; }
    }
    if (ctx->pc != 0x2A2E58u) { return; }
    ctx->pc = 0x2A2E58u;
    // 0x2a2e58: 0xc0aa318
    ctx->pc = 0x2A2E58u;
    SET_GPR_U32(ctx, 31, 0x2A2E60u);
    ctx->pc = 0x2A8C60u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseFrame_0x2a8c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E60u; }
    }
    if (ctx->pc != 0x2A2E60u) { return; }
    ctx->pc = 0x2A2E60u;
    // 0x2a2e60: 0xc0a947c
    ctx->pc = 0x2A2E60u;
    SET_GPR_U32(ctx, 31, 0x2A2E68u);
    ctx->pc = 0x2A51F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseMem_0x2a51f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E68u; }
    }
    if (ctx->pc != 0x2A2E68u) { return; }
    ctx->pc = 0x2A2E68u;
    // 0x2a2e68: 0xc0a8c30
    ctx->pc = 0x2A2E68u;
    SET_GPR_U32(ctx, 31, 0x2A2E70u);
    ctx->pc = 0x2A30C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseDebug_0x2a30c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E70u; }
    }
    if (ctx->pc != 0x2A2E70u) { return; }
    ctx->pc = 0x2A2E70u;
    // 0x2a2e70: 0xc0a9562
    ctx->pc = 0x2A2E70u;
    SET_GPR_U32(ctx, 31, 0x2A2E78u);
    ctx->pc = 0x2A5588u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCloseError_0x2a5588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2E78u; }
    }
    if (ctx->pc != 0x2A2E78u) { return; }
    ctx->pc = 0x2A2E78u;
    // 0x2a2e78: 0x3c024000
    ctx->pc = 0x2a2e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x2a2e7c: 0xae220000
    ctx->pc = 0x2a2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a2e80: 0xae00dee0
    ctx->pc = 0x2a2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958816), GPR_U32(ctx, 0));
    // 0x2a2e84: 0xdfbf0020
    ctx->pc = 0x2a2e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2e88: 0xdfb10010
    ctx->pc = 0x2a2e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2e8c: 0xdfb00000
    ctx->pc = 0x2a2e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2e90: 0x3e00008
    ctx->pc = 0x2A2E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2E98u;
}
