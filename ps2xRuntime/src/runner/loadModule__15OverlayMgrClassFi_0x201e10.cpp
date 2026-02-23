#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loadModule__15OverlayMgrClassFi
// Address: 0x201e10 - 0x201f24
void loadModule__15OverlayMgrClassFi_0x201e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loadModule__15OverlayMgrClassFi");


    ctx->pc = 0x201e10u;

    // 0x201e10: 0x27bdffc0
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201e14: 0x7fbf0030
    ctx->pc = 0x201e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x201e18: 0x7fb20020
    ctx->pc = 0x201e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x201e1c: 0x7fb10010
    ctx->pc = 0x201e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x201e20: 0x7fb00000
    ctx->pc = 0x201e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201e24: 0x70809628
    ctx->pc = 0x201e24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x201e28: 0x851821
    ctx->pc = 0x201e28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201e2c: 0x80640000
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201e30: 0x70a08e28
    ctx->pc = 0x201e30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x201e34: 0x24030002
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e38: 0x10830034
    ctx->pc = 0x201E38u;
    {
        const bool branch_taken_0x201e38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x201E3Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 11));
        if (branch_taken_0x201e38) {
            ctx->pc = 0x201F0Cu;
            goto label_201f0c;
        }
    }
    ctx->pc = 0x201E40u;
    // 0x201e40: 0x3c020027
    ctx->pc = 0x201e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x201e44: 0x101900
    ctx->pc = 0x201e44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x201e48: 0x2442bcc0
    ctx->pc = 0x201e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950080));
    // 0x201e4c: 0x433021
    ctx->pc = 0x201e4cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201e50: 0x3c020050
    ctx->pc = 0x201e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x201e54: 0x24440b40
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x201e58: 0x3c020027
    ctx->pc = 0x201e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x201e5c: 0xc07a5ac
    ctx->pc = 0x201E5Cu;
    SET_GPR_U32(ctx, 31, 0x201E64u);
    ctx->pc = 0x201E60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9584));
    ctx->pc = 0x1E96B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFileName__12FileMgrClassFPCcPCc_0x1e96b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E64u; }
        else if (ctx->pc != 0x201E64u) { ctx->pc = 0x201E64u; }
    }
    if (ctx->pc != 0x201E64u) { return; }
    ctx->pc = 0x201E64u;
    // 0x201e64: 0x70402628
    ctx->pc = 0x201e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x201e68: 0xc05ad72
    ctx->pc = 0x201E68u;
    SET_GPR_U32(ctx, 31, 0x201E70u);
    ctx->pc = 0x201E6Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16B5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Open_0x16b5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E70u; }
        else if (ctx->pc != 0x201E70u) { ctx->pc = 0x201E70u; }
    }
    if (ctx->pc != 0x201E70u) { return; }
    ctx->pc = 0x201E70u;
    // 0x201e70: 0xae420018
    ctx->pc = 0x201e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x201e74: 0x8e460018
    ctx->pc = 0x201e74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x201e78: 0x3c020050
    ctx->pc = 0x201e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x201e7c: 0x101880
    ctx->pc = 0x201e7cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x201e80: 0x24420c60
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3168));
    // 0x201e84: 0x438021
    ctx->pc = 0x201e84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201e88: 0x72402628
    ctx->pc = 0x201e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x201e8c: 0xae060000
    ctx->pc = 0x201e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x201e90: 0x72202e28
    ctx->pc = 0x201e90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x201e94: 0xc080868
    ctx->pc = 0x201E94u;
    SET_GPR_U32(ctx, 31, 0x201E9Cu);
    ctx->pc = 0x201E98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2021A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateEntryStat__15OverlayMgrClassFii_0x2021a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201E9Cu; }
        else if (ctx->pc != 0x201E9Cu) { ctx->pc = 0x201E9Cu; }
    }
    if (ctx->pc != 0x201E9Cu) { return; }
    ctx->pc = 0x201E9Cu;
    // 0x201e9c: 0x3c02002d
    ctx->pc = 0x201e9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x201ea0: 0x111880
    ctx->pc = 0x201ea0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x201ea4: 0x244255d0
    ctx->pc = 0x201ea4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21968));
    // 0x201ea8: 0x431021
    ctx->pc = 0x201ea8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201eac: 0x8c420000
    ctx->pc = 0x201eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201eb0: 0xae420014
    ctx->pc = 0x201eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x201eb4: 0xc05afe2
    ctx->pc = 0x201EB4u;
    SET_GPR_U32(ctx, 31, 0x201EBCu);
    ctx->pc = 0x201EB8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x16BF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFsizeSct_0x16bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EBCu; }
        else if (ctx->pc != 0x201EBCu) { ctx->pc = 0x201EBCu; }
    }
    if (ctx->pc != 0x201EBCu) { return; }
    ctx->pc = 0x201EBCu;
    // 0x201ebc: 0xae420010
    ctx->pc = 0x201ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x201ec0: 0x8e450010
    ctx->pc = 0x201ec0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x201ec4: 0x8e460014
    ctx->pc = 0x201ec4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x201ec8: 0xc05aeba
    ctx->pc = 0x201EC8u;
    SET_GPR_U32(ctx, 31, 0x201ED0u);
    ctx->pc = 0x201ECCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ED0u; }
        else if (ctx->pc != 0x201ED0u) { ctx->pc = 0x201ED0u; }
    }
    if (ctx->pc != 0x201ED0u) { return; }
    ctx->pc = 0x201ED0u;
    // 0x201ed0: 0xc07a6a8
    ctx->pc = 0x201ED0u;
    SET_GPR_U32(ctx, 31, 0x201ED8u);
    ctx->pc = 0x201ED4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x1E9AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201ED8u; }
        else if (ctx->pc != 0x201ED8u) { ctx->pc = 0x201ED8u; }
    }
    if (ctx->pc != 0x201ED8u) { return; }
    ctx->pc = 0x201ED8u;
    // 0x201ed8: 0xc05ae0c
    ctx->pc = 0x201ED8u;
    SET_GPR_U32(ctx, 31, 0x201EE0u);
    ctx->pc = 0x201EDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EE0u; }
        else if (ctx->pc != 0x201EE0u) { ctx->pc = 0x201EE0u; }
    }
    if (ctx->pc != 0x201EE0u) { return; }
    ctx->pc = 0x201EE0u;
    // 0x201ee0: 0xae000000
    ctx->pc = 0x201ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x201ee4: 0x8e420010
    ctx->pc = 0x201ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x201ee8: 0x8e440014
    ctx->pc = 0x201ee8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x201eec: 0xc071b54
    ctx->pc = 0x201EECu;
    SET_GPR_U32(ctx, 31, 0x201EF4u);
    ctx->pc = 0x201EF0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x1C6D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwOverlayInit_0x1c6d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EF4u; }
        else if (ctx->pc != 0x201EF4u) { ctx->pc = 0x201EF4u; }
    }
    if (ctx->pc != 0x201EF4u) { return; }
    ctx->pc = 0x201EF4u;
    // 0x201ef4: 0xc0552d8
    ctx->pc = 0x201EF4u;
    SET_GPR_U32(ctx, 31, 0x201EFCu);
    ctx->pc = 0x201EF8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201EFCu; }
        else if (ctx->pc != 0x201EFCu) { ctx->pc = 0x201EFCu; }
    }
    if (ctx->pc != 0x201EFCu) { return; }
    ctx->pc = 0x201EFCu;
    // 0x201efc: 0x72402628
    ctx->pc = 0x201efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x201f00: 0x72202e28
    ctx->pc = 0x201f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x201f04: 0xc080868
    ctx->pc = 0x201F04u;
    SET_GPR_U32(ctx, 31, 0x201F0Cu);
    ctx->pc = 0x201F08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2021A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateEntryStat__15OverlayMgrClassFii_0x2021a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201F0Cu; }
        else if (ctx->pc != 0x201F0Cu) { ctx->pc = 0x201F0Cu; }
    }
    if (ctx->pc != 0x201F0Cu) { return; }
    ctx->pc = 0x201F0Cu;
label_201f0c:
    // 0x201f0c: 0x7bbf0030
    ctx->pc = 0x201f0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201f10: 0x7bb20020
    ctx->pc = 0x201f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201f14: 0x7bb10010
    ctx->pc = 0x201f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201f18: 0x7bb00000
    ctx->pc = 0x201f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201f1c: 0x3e00008
    ctx->pc = 0x201F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201F0Cu: goto label_201f0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201F24u;
}
