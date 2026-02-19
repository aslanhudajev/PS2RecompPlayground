#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetGlobal
// Address: 0x2a2bf8 - 0x2a2d50
void pbResetGlobal_0x2a2bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2bf8u;

    // 0x2a2bf8: 0x27bdfff0
    ctx->pc = 0x2a2bf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a2bfc: 0xffbf0000
    ctx->pc = 0x2a2bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2c00: 0x3c020036
    ctx->pc = 0x2a2c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2c04: 0xac40dee4
    ctx->pc = 0x2a2c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958820), GPR_U32(ctx, 0));
    // 0x2a2c08: 0x3c040036
    ctx->pc = 0x2a2c08u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a2c0c: 0x3c030036
    ctx->pc = 0x2a2c0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2c10: 0x2462df40
    ctx->pc = 0x2a2c10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294958912));
    // 0x2a2c14: 0xac82dee0
    ctx->pc = 0x2a2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958816), GPR_U32(ctx, 2));
    // 0x2a2c18: 0x8c63df40
    ctx->pc = 0x2a2c18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294958912)));
    // 0x2a2c1c: 0x3c022000
    ctx->pc = 0x2a2c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2a2c20: 0x10620003
    ctx->pc = 0x2A2C20u;
    {
        const bool branch_taken_0x2a2c20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A2C24u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2a2c20) {
            ctx->pc = 0x2A2C30u;
            goto label_2a2c30;
        }
    }
    ctx->pc = 0x2A2C28u;
    // 0x2a2c28: 0x80a8aa4
    ctx->pc = 0x2A2C28u;
    ctx->pc = 0x2A2C2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2A2A90u;
    pbInitGlobal_0x2a2a90(rdram, ctx, runtime); return;
    ctx->pc = 0x2A2C30u;
label_2a2c30:
    // 0x2a2c30: 0xc0a9558
    ctx->pc = 0x2A2C30u;
    SET_GPR_U32(ctx, 31, 0x2A2C38u);
    ctx->pc = 0x2A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetError_0x2a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C38u; }
    }
    if (ctx->pc != 0x2A2C38u) { return; }
    ctx->pc = 0x2A2C38u;
    // 0x2a2c38: 0xc0aa30e
    ctx->pc = 0x2A2C38u;
    SET_GPR_U32(ctx, 31, 0x2A2C40u);
    ctx->pc = 0x2A8C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetFrame_0x2a8c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C40u; }
    }
    if (ctx->pc != 0x2A2C40u) { return; }
    ctx->pc = 0x2A2C40u;
    // 0x2a2c40: 0xc0aad8a
    ctx->pc = 0x2A2C40u;
    SET_GPR_U32(ctx, 31, 0x2A2C48u);
    ctx->pc = 0x2AB628u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetRender_0x2ab628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C48u; }
    }
    if (ctx->pc != 0x2A2C48u) { return; }
    ctx->pc = 0x2A2C48u;
    // 0x2a2c48: 0xc0aadb0
    ctx->pc = 0x2A2C48u;
    SET_GPR_U32(ctx, 31, 0x2A2C50u);
    ctx->pc = 0x2AB6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetWindow_0x2ab6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C50u; }
    }
    if (ctx->pc != 0x2A2C50u) { return; }
    ctx->pc = 0x2A2C50u;
    // 0x2a2c50: 0xc0aba42
    ctx->pc = 0x2A2C50u;
    SET_GPR_U32(ctx, 31, 0x2A2C58u);
    ctx->pc = 0x2AE908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetAttribute_0x2ae908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C58u; }
    }
    if (ctx->pc != 0x2A2C58u) { return; }
    ctx->pc = 0x2A2C58u;
    // 0x2a2c58: 0xc0a96f8
    ctx->pc = 0x2A2C58u;
    SET_GPR_U32(ctx, 31, 0x2A2C60u);
    ctx->pc = 0x2A5BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDma_0x2a5be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C60u; }
    }
    if (ctx->pc != 0x2A2C60u) { return; }
    ctx->pc = 0x2A2C60u;
    // 0x2a2c60: 0xc0ab462
    ctx->pc = 0x2A2C60u;
    SET_GPR_U32(ctx, 31, 0x2A2C68u);
    ctx->pc = 0x2AD188u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetScreen_0x2ad188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C68u; }
    }
    if (ctx->pc != 0x2A2C68u) { return; }
    ctx->pc = 0x2A2C68u;
    // 0x2a2c68: 0xc0ab476
    ctx->pc = 0x2A2C68u;
    SET_GPR_U32(ctx, 31, 0x2A2C70u);
    ctx->pc = 0x2AD1D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetStats_0x2ad1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C70u; }
    }
    if (ctx->pc != 0x2A2C70u) { return; }
    ctx->pc = 0x2A2C70u;
    // 0x2a2c70: 0xc0a8c0c
    ctx->pc = 0x2A2C70u;
    SET_GPR_U32(ctx, 31, 0x2A2C78u);
    ctx->pc = 0x2A3030u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDebug_0x2a3030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C78u; }
    }
    if (ctx->pc != 0x2A2C78u) { return; }
    ctx->pc = 0x2A2C78u;
    // 0x2a2c78: 0xc0aa2c2
    ctx->pc = 0x2A2C78u;
    SET_GPR_U32(ctx, 31, 0x2A2C80u);
    ctx->pc = 0x2A8B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDiag_0x2a8b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C80u; }
    }
    if (ctx->pc != 0x2A2C80u) { return; }
    ctx->pc = 0x2A2C80u;
    // 0x2a2c80: 0xc0a9470
    ctx->pc = 0x2A2C80u;
    SET_GPR_U32(ctx, 31, 0x2A2C88u);
    ctx->pc = 0x2A51C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetMem_0x2a51c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C88u; }
    }
    if (ctx->pc != 0x2A2C88u) { return; }
    ctx->pc = 0x2A2C88u;
    // 0x2a2c88: 0xc0ab48c
    ctx->pc = 0x2A2C88u;
    SET_GPR_U32(ctx, 31, 0x2A2C90u);
    ctx->pc = 0x2AD230u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetModel_0x2ad230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C90u; }
    }
    if (ctx->pc != 0x2A2C90u) { return; }
    ctx->pc = 0x2A2C90u;
    // 0x2a2c90: 0xc0ab4a0
    ctx->pc = 0x2A2C90u;
    SET_GPR_U32(ctx, 31, 0x2A2C98u);
    ctx->pc = 0x2AD280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetText_0x2ad280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2C98u; }
    }
    if (ctx->pc != 0x2A2C98u) { return; }
    ctx->pc = 0x2A2C98u;
    // 0x2a2c98: 0xc0ab4c6
    ctx->pc = 0x2A2C98u;
    SET_GPR_U32(ctx, 31, 0x2A2CA0u);
    ctx->pc = 0x2AD318u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetBlit_0x2ad318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CA0u; }
    }
    if (ctx->pc != 0x2A2CA0u) { return; }
    ctx->pc = 0x2A2CA0u;
    // 0x2a2ca0: 0xc0ab4da
    ctx->pc = 0x2A2CA0u;
    SET_GPR_U32(ctx, 31, 0x2A2CA8u);
    ctx->pc = 0x2AD368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetGeom_0x2ad368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CA8u; }
    }
    if (ctx->pc != 0x2A2CA8u) { return; }
    ctx->pc = 0x2A2CA8u;
    // 0x2a2ca8: 0xc0ab4fc
    ctx->pc = 0x2A2CA8u;
    SET_GPR_U32(ctx, 31, 0x2A2CB0u);
    ctx->pc = 0x2AD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetTexture_0x2ad3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CB0u; }
    }
    if (ctx->pc != 0x2A2CB0u) { return; }
    ctx->pc = 0x2A2CB0u;
    // 0x2a2cb0: 0xc0abbea
    ctx->pc = 0x2A2CB0u;
    SET_GPR_U32(ctx, 31, 0x2A2CB8u);
    ctx->pc = 0x2AEFA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetUtils_0x2aefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CB8u; }
    }
    if (ctx->pc != 0x2A2CB8u) { return; }
    ctx->pc = 0x2A2CB8u;
    // 0x2a2cb8: 0xc0a9558
    ctx->pc = 0x2A2CB8u;
    SET_GPR_U32(ctx, 31, 0x2A2CC0u);
    ctx->pc = 0x2A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetError_0x2a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CC0u; }
    }
    if (ctx->pc != 0x2A2CC0u) { return; }
    ctx->pc = 0x2A2CC0u;
    // 0x2a2cc0: 0xc0a8c0c
    ctx->pc = 0x2A2CC0u;
    SET_GPR_U32(ctx, 31, 0x2A2CC8u);
    ctx->pc = 0x2A3030u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDebug_0x2a3030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CC8u; }
    }
    if (ctx->pc != 0x2A2CC8u) { return; }
    ctx->pc = 0x2A2CC8u;
    // 0x2a2cc8: 0xc0a9470
    ctx->pc = 0x2A2CC8u;
    SET_GPR_U32(ctx, 31, 0x2A2CD0u);
    ctx->pc = 0x2A51C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetMem_0x2a51c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CD0u; }
    }
    if (ctx->pc != 0x2A2CD0u) { return; }
    ctx->pc = 0x2A2CD0u;
    // 0x2a2cd0: 0xc0aa30e
    ctx->pc = 0x2A2CD0u;
    SET_GPR_U32(ctx, 31, 0x2A2CD8u);
    ctx->pc = 0x2A8C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetFrame_0x2a8c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CD8u; }
    }
    if (ctx->pc != 0x2A2CD8u) { return; }
    ctx->pc = 0x2A2CD8u;
    // 0x2a2cd8: 0xc0aad8a
    ctx->pc = 0x2A2CD8u;
    SET_GPR_U32(ctx, 31, 0x2A2CE0u);
    ctx->pc = 0x2AB628u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetRender_0x2ab628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CE0u; }
    }
    if (ctx->pc != 0x2A2CE0u) { return; }
    ctx->pc = 0x2A2CE0u;
    // 0x2a2ce0: 0xc0aadb0
    ctx->pc = 0x2A2CE0u;
    SET_GPR_U32(ctx, 31, 0x2A2CE8u);
    ctx->pc = 0x2AB6C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetWindow_0x2ab6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CE8u; }
    }
    if (ctx->pc != 0x2A2CE8u) { return; }
    ctx->pc = 0x2A2CE8u;
    // 0x2a2ce8: 0xc0aba42
    ctx->pc = 0x2A2CE8u;
    SET_GPR_U32(ctx, 31, 0x2A2CF0u);
    ctx->pc = 0x2AE908u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetAttribute_0x2ae908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CF0u; }
    }
    if (ctx->pc != 0x2A2CF0u) { return; }
    ctx->pc = 0x2A2CF0u;
    // 0x2a2cf0: 0xc0a96f8
    ctx->pc = 0x2A2CF0u;
    SET_GPR_U32(ctx, 31, 0x2A2CF8u);
    ctx->pc = 0x2A5BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetDma_0x2a5be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2CF8u; }
    }
    if (ctx->pc != 0x2A2CF8u) { return; }
    ctx->pc = 0x2A2CF8u;
    // 0x2a2cf8: 0xc0ab462
    ctx->pc = 0x2A2CF8u;
    SET_GPR_U32(ctx, 31, 0x2A2D00u);
    ctx->pc = 0x2AD188u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetScreen_0x2ad188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D00u; }
    }
    if (ctx->pc != 0x2A2D00u) { return; }
    ctx->pc = 0x2A2D00u;
    // 0x2a2d00: 0xc0ab476
    ctx->pc = 0x2A2D00u;
    SET_GPR_U32(ctx, 31, 0x2A2D08u);
    ctx->pc = 0x2AD1D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetStats_0x2ad1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D08u; }
    }
    if (ctx->pc != 0x2A2D08u) { return; }
    ctx->pc = 0x2A2D08u;
    // 0x2a2d08: 0xc0ab48c
    ctx->pc = 0x2A2D08u;
    SET_GPR_U32(ctx, 31, 0x2A2D10u);
    ctx->pc = 0x2AD230u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetModel_0x2ad230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D10u; }
    }
    if (ctx->pc != 0x2A2D10u) { return; }
    ctx->pc = 0x2A2D10u;
    // 0x2a2d10: 0xc0ab4a0
    ctx->pc = 0x2A2D10u;
    SET_GPR_U32(ctx, 31, 0x2A2D18u);
    ctx->pc = 0x2AD280u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetText_0x2ad280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D18u; }
    }
    if (ctx->pc != 0x2A2D18u) { return; }
    ctx->pc = 0x2A2D18u;
    // 0x2a2d18: 0xc0ab4c6
    ctx->pc = 0x2A2D18u;
    SET_GPR_U32(ctx, 31, 0x2A2D20u);
    ctx->pc = 0x2AD318u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetBlit_0x2ad318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D20u; }
    }
    if (ctx->pc != 0x2A2D20u) { return; }
    ctx->pc = 0x2A2D20u;
    // 0x2a2d20: 0xc0ab4da
    ctx->pc = 0x2A2D20u;
    SET_GPR_U32(ctx, 31, 0x2A2D28u);
    ctx->pc = 0x2AD368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetGeom_0x2ad368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D28u; }
    }
    if (ctx->pc != 0x2A2D28u) { return; }
    ctx->pc = 0x2A2D28u;
    // 0x2a2d28: 0xc0ab4fc
    ctx->pc = 0x2A2D28u;
    SET_GPR_U32(ctx, 31, 0x2A2D30u);
    ctx->pc = 0x2AD3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetTexture_0x2ad3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D30u; }
    }
    if (ctx->pc != 0x2A2D30u) { return; }
    ctx->pc = 0x2A2D30u;
    // 0x2a2d30: 0xc0abbea
    ctx->pc = 0x2A2D30u;
    SET_GPR_U32(ctx, 31, 0x2A2D38u);
    ctx->pc = 0x2AEFA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbResetUtils_0x2aefa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2D38u; }
    }
    if (ctx->pc != 0x2A2D38u) { return; }
    ctx->pc = 0x2A2D38u;
    // 0x2a2d38: 0x3c030036
    ctx->pc = 0x2a2d38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2d3c: 0x24020001
    ctx->pc = 0x2a2d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2d40: 0xac62dee4
    ctx->pc = 0x2a2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958820), GPR_U32(ctx, 2));
    // 0x2a2d44: 0xdfbf0000
    ctx->pc = 0x2a2d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2d48: 0x3e00008
    ctx->pc = 0x2A2D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2D4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A2C30u: goto label_2a2c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A2D50u;
}
