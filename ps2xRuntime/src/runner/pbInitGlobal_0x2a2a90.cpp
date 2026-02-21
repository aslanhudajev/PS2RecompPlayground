#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitGlobal
// Address: 0x2a2a90 - 0x2a2bf8
void pbInitGlobal_0x2a2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2a90u;

    // 0x2a2a90: 0x27bdffd0
    ctx->pc = 0x2a2a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2a94: 0xffbf0020
    ctx->pc = 0x2a2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a2a98: 0xffb10010
    ctx->pc = 0x2a2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a2a9c: 0xffb00000
    ctx->pc = 0x2a2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a2aa0: 0x3c020036
    ctx->pc = 0x2a2aa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2aa4: 0x3c110036
    ctx->pc = 0x2a2aa4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x2a2aa8: 0x2630df40
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294958912));
    // 0x2a2aac: 0xac50dee0
    ctx->pc = 0x2a2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958816), GPR_U32(ctx, 16));
    // 0x2a2ab0: 0xc0a9552
    ctx->pc = 0x2A2AB0u;
    SET_GPR_U32(ctx, 31, 0x2A2AB8u);
    ctx->pc = 0x2A2AB4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294958912), GPR_U32(ctx, 0));
    ctx->pc = 0x2A5548u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitError_0x2a5548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AB8u; }
    }
    if (ctx->pc != 0x2A2AB8u) { return; }
    ctx->pc = 0x2A2AB8u;
    // 0x2a2ab8: 0xc0a8bdc
    ctx->pc = 0x2A2AB8u;
    SET_GPR_U32(ctx, 31, 0x2A2AC0u);
    ctx->pc = 0x2A2F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitDebug_0x2a2f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AC0u; }
    }
    if (ctx->pc != 0x2A2AC0u) { return; }
    ctx->pc = 0x2A2AC0u;
    // 0x2a2ac0: 0xc0a9462
    ctx->pc = 0x2A2AC0u;
    SET_GPR_U32(ctx, 31, 0x2A2AC8u);
    ctx->pc = 0x2A5188u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitMem_0x2a5188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AC8u; }
    }
    if (ctx->pc != 0x2A2AC8u) { return; }
    ctx->pc = 0x2A2AC8u;
    // 0x2a2ac8: 0xc0aa308
    ctx->pc = 0x2A2AC8u;
    SET_GPR_U32(ctx, 31, 0x2A2AD0u);
    ctx->pc = 0x2A8C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitFrame_0x2a8c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AD0u; }
    }
    if (ctx->pc != 0x2A2AD0u) { return; }
    ctx->pc = 0x2A2AD0u;
    // 0x2a2ad0: 0xc0aad84
    ctx->pc = 0x2A2AD0u;
    SET_GPR_U32(ctx, 31, 0x2A2AD8u);
    ctx->pc = 0x2AB610u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitRender_0x2ab610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AD8u; }
    }
    if (ctx->pc != 0x2A2AD8u) { return; }
    ctx->pc = 0x2A2AD8u;
    // 0x2a2ad8: 0xc0aad98
    ctx->pc = 0x2A2AD8u;
    SET_GPR_U32(ctx, 31, 0x2A2AE0u);
    ctx->pc = 0x2AB660u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitWindow_0x2ab660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AE0u; }
    }
    if (ctx->pc != 0x2A2AE0u) { return; }
    ctx->pc = 0x2A2AE0u;
    // 0x2a2ae0: 0xc0aba3c
    ctx->pc = 0x2A2AE0u;
    SET_GPR_U32(ctx, 31, 0x2A2AE8u);
    ctx->pc = 0x2AE8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitAttribute_0x2ae8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AE8u; }
    }
    if (ctx->pc != 0x2A2AE8u) { return; }
    ctx->pc = 0x2A2AE8u;
    // 0x2a2ae8: 0xc0a96ba
    ctx->pc = 0x2A2AE8u;
    SET_GPR_U32(ctx, 31, 0x2A2AF0u);
    ctx->pc = 0x2A5AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitDma_0x2a5ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AF0u; }
    }
    if (ctx->pc != 0x2A2AF0u) { return; }
    ctx->pc = 0x2A2AF0u;
    // 0x2a2af0: 0xc0ab45c
    ctx->pc = 0x2A2AF0u;
    SET_GPR_U32(ctx, 31, 0x2A2AF8u);
    ctx->pc = 0x2AD170u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitScreen_0x2ad170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2AF8u; }
    }
    if (ctx->pc != 0x2A2AF8u) { return; }
    ctx->pc = 0x2A2AF8u;
    // 0x2a2af8: 0xc0ab470
    ctx->pc = 0x2A2AF8u;
    SET_GPR_U32(ctx, 31, 0x2A2B00u);
    ctx->pc = 0x2AD1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitStats_0x2ad1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B00u; }
    }
    if (ctx->pc != 0x2A2B00u) { return; }
    ctx->pc = 0x2A2B00u;
    // 0x2a2b00: 0xc0ab484
    ctx->pc = 0x2A2B00u;
    SET_GPR_U32(ctx, 31, 0x2A2B08u);
    ctx->pc = 0x2AD210u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitModel_0x2ad210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B08u; }
    }
    if (ctx->pc != 0x2A2B08u) { return; }
    ctx->pc = 0x2A2B08u;
    // 0x2a2b08: 0xc0ab49a
    ctx->pc = 0x2A2B08u;
    SET_GPR_U32(ctx, 31, 0x2A2B10u);
    ctx->pc = 0x2AD268u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitText_0x2ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B10u; }
    }
    if (ctx->pc != 0x2A2B10u) { return; }
    ctx->pc = 0x2A2B10u;
    // 0x2a2b10: 0xc0ab4ae
    ctx->pc = 0x2A2B10u;
    SET_GPR_U32(ctx, 31, 0x2A2B18u);
    ctx->pc = 0x2AD2B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitBlit_0x2ad2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B18u; }
    }
    if (ctx->pc != 0x2A2B18u) { return; }
    ctx->pc = 0x2A2B18u;
    // 0x2a2b18: 0xc0ab4d4
    ctx->pc = 0x2A2B18u;
    SET_GPR_U32(ctx, 31, 0x2A2B20u);
    ctx->pc = 0x2AD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitGeom_0x2ad350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B20u; }
    }
    if (ctx->pc != 0x2A2B20u) { return; }
    ctx->pc = 0x2A2B20u;
    // 0x2a2b20: 0xc0ab4e8
    ctx->pc = 0x2A2B20u;
    SET_GPR_U32(ctx, 31, 0x2A2B28u);
    ctx->pc = 0x2AD3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitTexture_0x2ad3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B28u; }
    }
    if (ctx->pc != 0x2A2B28u) { return; }
    ctx->pc = 0x2A2B28u;
    // 0x2a2b28: 0xc0abbe4
    ctx->pc = 0x2A2B28u;
    SET_GPR_U32(ctx, 31, 0x2A2B30u);
    ctx->pc = 0x2AEF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitUtils_0x2aef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2B30u; }
    }
    if (ctx->pc != 0x2A2B30u) { return; }
    ctx->pc = 0x2A2B30u;
    // 0x2a2b30: 0x3c020003
    ctx->pc = 0x2a2b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x2a2b34: 0x3442ffff
    ctx->pc = 0x2a2b34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a2b38: 0xae22df40
    ctx->pc = 0x2a2b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294958912), GPR_U32(ctx, 2));
    // 0x2a2b3c: 0x3c020036
    ctx->pc = 0x2a2b3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a2b40: 0x2442def0
    ctx->pc = 0x2a2b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958832));
    // 0x2a2b44: 0x8e03000c
    ctx->pc = 0x2a2b44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a2b48: 0xac430008
    ctx->pc = 0x2a2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2a2b4c: 0x8e030010
    ctx->pc = 0x2a2b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a2b50: 0xac43000c
    ctx->pc = 0x2a2b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2a2b54: 0x8e030014
    ctx->pc = 0x2a2b54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a2b58: 0xac430010
    ctx->pc = 0x2a2b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2a2b5c: 0x8e030018
    ctx->pc = 0x2a2b5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a2b60: 0xac430014
    ctx->pc = 0x2a2b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2a2b64: 0x8e03001c
    ctx->pc = 0x2a2b64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a2b68: 0xac430018
    ctx->pc = 0x2a2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a2b6c: 0x8e030020
    ctx->pc = 0x2a2b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a2b70: 0xac43001c
    ctx->pc = 0x2a2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2a2b74: 0x8e030024
    ctx->pc = 0x2a2b74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a2b78: 0xac430020
    ctx->pc = 0x2a2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2a2b7c: 0x8e030028
    ctx->pc = 0x2a2b7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a2b80: 0xac430024
    ctx->pc = 0x2a2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2a2b84: 0x8e03002c
    ctx->pc = 0x2a2b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a2b88: 0xac430028
    ctx->pc = 0x2a2b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2a2b8c: 0x8e030030
    ctx->pc = 0x2a2b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a2b90: 0xac43002c
    ctx->pc = 0x2a2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x2a2b94: 0x8e030034
    ctx->pc = 0x2a2b94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2a2b98: 0xac430030
    ctx->pc = 0x2a2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x2a2b9c: 0x8e030038
    ctx->pc = 0x2a2b9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2a2ba0: 0xac430034
    ctx->pc = 0x2a2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2a2ba4: 0x8e03003c
    ctx->pc = 0x2a2ba4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a2ba8: 0xac430038
    ctx->pc = 0x2a2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x2a2bac: 0x8e030040
    ctx->pc = 0x2a2bacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a2bb0: 0xac43003c
    ctx->pc = 0x2a2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x2a2bb4: 0x8e030044
    ctx->pc = 0x2a2bb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2a2bb8: 0xac430040
    ctx->pc = 0x2a2bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x2a2bbc: 0x8e030048
    ctx->pc = 0x2a2bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2a2bc0: 0xac430044
    ctx->pc = 0x2a2bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x2a2bc4: 0x8e03004c
    ctx->pc = 0x2a2bc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2a2bc8: 0xc0a8ba6
    ctx->pc = 0x2A2BC8u;
    SET_GPR_U32(ctx, 31, 0x2A2BD0u);
    ctx->pc = 0x2A2BCCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    ctx->pc = 0x2A2E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetupPBGPtrs_0x2a2e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2BD0u; }
    }
    if (ctx->pc != 0x2A2BD0u) { return; }
    ctx->pc = 0x2A2BD0u;
    // 0x2a2bd0: 0x3c022000
    ctx->pc = 0x2a2bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2a2bd4: 0xae020000
    ctx->pc = 0x2a2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a2bd8: 0x3c030036
    ctx->pc = 0x2a2bd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2bdc: 0x24020001
    ctx->pc = 0x2a2bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2be0: 0xac62dee4
    ctx->pc = 0x2a2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958820), GPR_U32(ctx, 2));
    // 0x2a2be4: 0xdfbf0020
    ctx->pc = 0x2a2be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2be8: 0xdfb10010
    ctx->pc = 0x2a2be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2bec: 0xdfb00000
    ctx->pc = 0x2a2becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2bf0: 0x3e00008
    ctx->pc = 0x2A2BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2BF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2BF8u;
}
