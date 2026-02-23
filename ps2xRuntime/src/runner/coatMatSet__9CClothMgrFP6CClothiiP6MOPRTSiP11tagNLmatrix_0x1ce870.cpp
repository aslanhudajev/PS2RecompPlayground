#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix
// Address: 0x1ce870 - 0x1ce9c8
void coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix_0x1ce870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("coatMatSet__9CClothMgrFP6CClothiiP6MOPRTSiP11tagNLmatrix");


    ctx->pc = 0x1ce870u;

    // 0x1ce870: 0x27bdff20
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ce874: 0x7fbf0050
    ctx->pc = 0x1ce874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1ce878: 0x7fb40040
    ctx->pc = 0x1ce878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce87c: 0x7fb30030
    ctx->pc = 0x1ce87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce880: 0x7fb20020
    ctx->pc = 0x1ce880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce884: 0x7fb10010
    ctx->pc = 0x1ce884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce888: 0x7fb00000
    ctx->pc = 0x1ce888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce88c: 0x8f888c48
    ctx->pc = 0x1ce88cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1ce890: 0x70809628
    ctx->pc = 0x1ce890u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ce894: 0x70a08e28
    ctx->pc = 0x1ce894u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ce898: 0x61080
    ctx->pc = 0x1ce898u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ce89c: 0x3c0101f3
    ctx->pc = 0x1ce89cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1ce8a0: 0x410821
    ctx->pc = 0x1ce8a0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1ce8a4: 0x8d030004
    ctx->pc = 0x1ce8a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ce8a8: 0x8c309730
    ctx->pc = 0x1ce8a8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    // 0x1ce8ac: 0x27a500a0
    ctx->pc = 0x1ce8acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ce8b0: 0x24040008
    ctx->pc = 0x1ce8b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce8b4: 0x31040
    ctx->pc = 0x1ce8b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ce8b8: 0x431021
    ctx->pc = 0x1ce8b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce8bc: 0x21080
    ctx->pc = 0x1ce8bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ce8c0: 0x431021
    ctx->pc = 0x1ce8c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce8c4: 0x21100
    ctx->pc = 0x1ce8c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ce8c8: 0x481021
    ctx->pc = 0x1ce8c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ce8cc: 0x24480050
    ctx->pc = 0x1ce8ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 80));
label_1ce8d0:
    // 0x1ce8d0: 0x8d030000
    ctx->pc = 0x1ce8d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ce8d4: 0x8d020004
    ctx->pc = 0x1ce8d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ce8d8: 0x2484ffff
    ctx->pc = 0x1ce8d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1ce8dc: 0xaca30000
    ctx->pc = 0x1ce8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1ce8e0: 0xaca20004
    ctx->pc = 0x1ce8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1ce8e4: 0x25080008
    ctx->pc = 0x1ce8e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1ce8e8: 0x1c80fff9
    ctx->pc = 0x1CE8E8u;
    {
        const bool branch_taken_0x1ce8e8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CE8ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1ce8e8) {
            ctx->pc = 0x1CE8D0u;
            goto label_1ce8d0;
        }
    }
    ctx->pc = 0x1CE8F0u;
    // 0x1ce8f0: 0x70c02e28
    ctx->pc = 0x1ce8f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ce8f4: 0x70e03628
    ctx->pc = 0x1ce8f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ce8f8: 0xae4a0184
    ctx->pc = 0x1ce8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 10));
    // 0x1ce8fc: 0x27848d4c
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1ce900: 0xc07f1d8
    ctx->pc = 0x1CE900u;
    SET_GPR_U32(ctx, 31, 0x1CE908u);
    ctx->pc = 0x1CE904u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE908u; }
        else if (ctx->pc != 0x1CE908u) { ctx->pc = 0x1CE908u; }
    }
    if (ctx->pc != 0x1CE908u) { return; }
    ctx->pc = 0x1CE908u;
    // 0x1ce908: 0x70409e28
    ctx->pc = 0x1ce908u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ce90c: 0x2662000c
    ctx->pc = 0x1ce90cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 12));
    // 0x1ce910: 0xae420188
    ctx->pc = 0x1ce910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 2));
    // 0x1ce914: 0xc06bf55
    ctx->pc = 0x1CE914u;
    SET_GPR_U32(ctx, 31, 0x1CE91Cu);
    ctx->pc = 0x1CE918u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE91Cu; }
        else if (ctx->pc != 0x1CE91Cu) { ctx->pc = 0x1CE91Cu; }
    }
    if (ctx->pc != 0x1CE91Cu) { return; }
    ctx->pc = 0x1CE91Cu;
    // 0x1ce91c: 0xc06c20d
    ctx->pc = 0x1CE91Cu;
    SET_GPR_U32(ctx, 31, 0x1CE924u);
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE924u; }
        else if (ctx->pc != 0x1CE924u) { ctx->pc = 0x1CE924u; }
    }
    if (ctx->pc != 0x1CE924u) { return; }
    ctx->pc = 0x1CE924u;
    // 0x1ce924: 0xc06bf55
    ctx->pc = 0x1CE924u;
    SET_GPR_U32(ctx, 31, 0x1CE92Cu);
    ctx->pc = 0x1CE928u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 388)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE92Cu; }
        else if (ctx->pc != 0x1CE92Cu) { ctx->pc = 0x1CE92Cu; }
    }
    if (ctx->pc != 0x1CE92Cu) { return; }
    ctx->pc = 0x1CE92Cu;
    // 0x1ce92c: 0xc66d0004
    ctx->pc = 0x1ce92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce930: 0xc66e0008
    ctx->pc = 0x1ce930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce934: 0xc06c202
    ctx->pc = 0x1CE934u;
    SET_GPR_U32(ctx, 31, 0x1CE93Cu);
    ctx->pc = 0x1CE938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE93Cu; }
        else if (ctx->pc != 0x1CE93Cu) { ctx->pc = 0x1CE93Cu; }
    }
    if (ctx->pc != 0x1CE93Cu) { return; }
    ctx->pc = 0x1CE93Cu;
    // 0x1ce93c: 0x8e420188
    ctx->pc = 0x1ce93cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 392)));
    // 0x1ce940: 0xc06c157
    ctx->pc = 0x1CE940u;
    SET_GPR_U32(ctx, 31, 0x1CE948u);
    ctx->pc = 0x1CE944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE948u; }
        else if (ctx->pc != 0x1CE948u) { ctx->pc = 0x1CE948u; }
    }
    if (ctx->pc != 0x1CE948u) { return; }
    ctx->pc = 0x1CE948u;
    // 0x1ce948: 0x8e420188
    ctx->pc = 0x1ce948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 392)));
    // 0x1ce94c: 0xc06c0fb
    ctx->pc = 0x1CE94Cu;
    SET_GPR_U32(ctx, 31, 0x1CE954u);
    ctx->pc = 0x1CE950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE954u; }
        else if (ctx->pc != 0x1CE954u) { ctx->pc = 0x1CE954u; }
    }
    if (ctx->pc != 0x1CE954u) { return; }
    ctx->pc = 0x1CE954u;
    // 0x1ce954: 0x8e420188
    ctx->pc = 0x1ce954u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 392)));
    // 0x1ce958: 0xc06c09f
    ctx->pc = 0x1CE958u;
    SET_GPR_U32(ctx, 31, 0x1CE960u);
    ctx->pc = 0x1CE95Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE960u; }
        else if (ctx->pc != 0x1CE960u) { ctx->pc = 0x1CE960u; }
    }
    if (ctx->pc != 0x1CE960u) { return; }
    ctx->pc = 0x1CE960u;
    // 0x1ce960: 0x70009e28
    ctx->pc = 0x1ce960u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ce964: 0x10000006
    ctx->pc = 0x1CE964u;
    {
        const bool branch_taken_0x1ce964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE968u;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ce964) {
            ctx->pc = 0x1CE980u;
            goto label_1ce980;
        }
    }
    ctx->pc = 0x1CE96Cu;
label_1ce96c:
    // 0x1ce96c: 0x8e850024
    ctx->pc = 0x1ce96cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1ce970: 0xc073a74
    ctx->pc = 0x1CE970u;
    SET_GPR_U32(ctx, 31, 0x1CE978u);
    ctx->pc = 0x1CE974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        coatMatSet_rcv__9CClothMgrFP7_BODYPT_0x1ce9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE978u; }
        else if (ctx->pc != 0x1CE978u) { ctx->pc = 0x1CE978u; }
    }
    if (ctx->pc != 0x1CE978u) { return; }
    ctx->pc = 0x1CE978u;
    // 0x1ce978: 0x26940004
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1ce97c: 0x26730001
    ctx->pc = 0x1ce97cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1ce980:
    // 0x1ce980: 0x86020022
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1ce984: 0x262102a
    ctx->pc = 0x1ce984u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x1ce988: 0x1440fff8
    ctx->pc = 0x1CE988u;
    {
        const bool branch_taken_0x1ce988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ce988) {
            ctx->pc = 0x1CE96Cu;
            goto label_1ce96c;
        }
    }
    ctx->pc = 0x1CE990u;
    // 0x1ce990: 0x8e450184
    ctx->pc = 0x1ce990u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x1ce994: 0x72202628
    ctx->pc = 0x1ce994u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ce998: 0xc0748ac
    ctx->pc = 0x1CE998u;
    SET_GPR_U32(ctx, 31, 0x1CE9A0u);
    ctx->pc = 0x1CE99Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x1D22B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initOneskin__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1d22b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9A0u; }
        else if (ctx->pc != 0x1CE9A0u) { ctx->pc = 0x1CE9A0u; }
    }
    if (ctx->pc != 0x1CE9A0u) { return; }
    ctx->pc = 0x1CE9A0u;
    // 0x1ce9a0: 0xc06c038
    ctx->pc = 0x1CE9A0u;
    SET_GPR_U32(ctx, 31, 0x1CE9A8u);
    ctx->pc = 0x1CE9A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9A8u; }
        else if (ctx->pc != 0x1CE9A8u) { ctx->pc = 0x1CE9A8u; }
    }
    if (ctx->pc != 0x1CE9A8u) { return; }
    ctx->pc = 0x1CE9A8u;
    // 0x1ce9a8: 0x7bbf0050
    ctx->pc = 0x1ce9a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce9ac: 0x7bb40040
    ctx->pc = 0x1ce9acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce9b0: 0x7bb30030
    ctx->pc = 0x1ce9b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce9b4: 0x7bb20020
    ctx->pc = 0x1ce9b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce9b8: 0x7bb10010
    ctx->pc = 0x1ce9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce9bc: 0x7bb00000
    ctx->pc = 0x1ce9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce9c0: 0x3e00008
    ctx->pc = 0x1CE9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE8D0u: goto label_1ce8d0;
            case 0x1CE96Cu: goto label_1ce96c;
            case 0x1CE980u: goto label_1ce980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CE9C8u;
}
