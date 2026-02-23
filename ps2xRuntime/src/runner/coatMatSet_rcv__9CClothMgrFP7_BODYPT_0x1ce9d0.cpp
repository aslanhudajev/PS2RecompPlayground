#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: coatMatSet_rcv__9CClothMgrFP7_BODYPT
// Address: 0x1ce9d0 - 0x1ceaa4
void coatMatSet_rcv__9CClothMgrFP7_BODYPT_0x1ce9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("coatMatSet_rcv__9CClothMgrFP7_BODYPT");


    ctx->pc = 0x1ce9d0u;

label_1ce9d0:
    // 0x1ce9d0: 0x27bdff70
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce9d4: 0x7fbf0040
    ctx->pc = 0x1ce9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ce9d8: 0x7fb30030
    ctx->pc = 0x1ce9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce9dc: 0x7fb20020
    ctx->pc = 0x1ce9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce9e0: 0x7fb10010
    ctx->pc = 0x1ce9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce9e4: 0x7fb00000
    ctx->pc = 0x1ce9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce9e8: 0x70a08628
    ctx->pc = 0x1ce9e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ce9ec: 0x84a50020
    ctx->pc = 0x1ce9ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1ce9f0: 0x8c820188
    ctx->pc = 0x1ce9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x1ce9f4: 0x70808e28
    ctx->pc = 0x1ce9f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ce9f8: 0x51840
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ce9fc: 0x651821
    ctx->pc = 0x1ce9fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cea00: 0x31840
    ctx->pc = 0x1cea00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cea04: 0x439021
    ctx->pc = 0x1cea04u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cea08: 0xc06bf55
    ctx->pc = 0x1CEA08u;
    SET_GPR_U32(ctx, 31, 0x1CEA10u);
    ctx->pc = 0x1CEA0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA10u; }
        else if (ctx->pc != 0x1CEA10u) { ctx->pc = 0x1CEA10u; }
    }
    if (ctx->pc != 0x1CEA10u) { return; }
    ctx->pc = 0x1CEA10u;
    // 0x1cea10: 0xc60d0008
    ctx->pc = 0x1cea10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cea14: 0xc60e000c
    ctx->pc = 0x1cea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cea18: 0xc06c202
    ctx->pc = 0x1CEA18u;
    SET_GPR_U32(ctx, 31, 0x1CEA20u);
    ctx->pc = 0x1CEA1Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA20u; }
        else if (ctx->pc != 0x1CEA20u) { ctx->pc = 0x1CEA20u; }
    }
    if (ctx->pc != 0x1CEA20u) { return; }
    ctx->pc = 0x1CEA20u;
    // 0x1cea20: 0xc06c157
    ctx->pc = 0x1CEA20u;
    SET_GPR_U32(ctx, 31, 0x1CEA28u);
    ctx->pc = 0x1CEA24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA28u; }
        else if (ctx->pc != 0x1CEA28u) { ctx->pc = 0x1CEA28u; }
    }
    if (ctx->pc != 0x1CEA28u) { return; }
    ctx->pc = 0x1CEA28u;
    // 0x1cea28: 0xc06c0fb
    ctx->pc = 0x1CEA28u;
    SET_GPR_U32(ctx, 31, 0x1CEA30u);
    ctx->pc = 0x1CEA2Cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA30u; }
        else if (ctx->pc != 0x1CEA30u) { ctx->pc = 0x1CEA30u; }
    }
    if (ctx->pc != 0x1CEA30u) { return; }
    ctx->pc = 0x1CEA30u;
    // 0x1cea30: 0xc06c09f
    ctx->pc = 0x1CEA30u;
    SET_GPR_U32(ctx, 31, 0x1CEA38u);
    ctx->pc = 0x1CEA34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA38u; }
        else if (ctx->pc != 0x1CEA38u) { ctx->pc = 0x1CEA38u; }
    }
    if (ctx->pc != 0x1CEA38u) { return; }
    ctx->pc = 0x1CEA38u;
    // 0x1cea38: 0x86030020
    ctx->pc = 0x1cea38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cea3c: 0x8e220184
    ctx->pc = 0x1cea3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1cea40: 0x31980
    ctx->pc = 0x1cea40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1cea44: 0xc06bf55
    ctx->pc = 0x1CEA44u;
    SET_GPR_U32(ctx, 31, 0x1CEA4Cu);
    ctx->pc = 0x1CEA48u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA4Cu; }
        else if (ctx->pc != 0x1CEA4Cu) { ctx->pc = 0x1CEA4Cu; }
    }
    if (ctx->pc != 0x1CEA4Cu) { return; }
    ctx->pc = 0x1CEA4Cu;
    // 0x1cea4c: 0x70009628
    ctx->pc = 0x1cea4cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cea50: 0x10000007
    ctx->pc = 0x1CEA50u;
    {
        const bool branch_taken_0x1cea50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEA54u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cea50) {
            ctx->pc = 0x1CEA70u;
            goto label_1cea70;
        }
    }
    ctx->pc = 0x1CEA58u;
label_1cea58:
    // 0x1cea58: 0x8e650024
    ctx->pc = 0x1cea58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1cea5c: 0xc073a74
    ctx->pc = 0x1CEA5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA64u);
    ctx->pc = 0x1CEA60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1CE9D0u;
    goto label_1ce9d0;
    ctx->pc = 0x1CEA64u;
label_1cea64:
    // 0x1cea64: 0x26730004
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1cea68: 0x26520001
    ctx->pc = 0x1cea68u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cea6c: 0x0
    ctx->pc = 0x1cea6cu;
    // NOP
label_1cea70:
    // 0x1cea70: 0x86020022
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1cea74: 0x242102a
    ctx->pc = 0x1cea74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x1cea78: 0x1440fff7
    ctx->pc = 0x1CEA78u;
    {
        const bool branch_taken_0x1cea78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEA7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
        if (branch_taken_0x1cea78) {
            ctx->pc = 0x1CEA58u;
            goto label_1cea58;
        }
    }
    ctx->pc = 0x1CEA80u;
    // 0x1cea80: 0xc06c038
    ctx->pc = 0x1CEA80u;
    SET_GPR_U32(ctx, 31, 0x1CEA88u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEA88u; }
        else if (ctx->pc != 0x1CEA88u) { ctx->pc = 0x1CEA88u; }
    }
    if (ctx->pc != 0x1CEA88u) { return; }
    ctx->pc = 0x1CEA88u;
    // 0x1cea88: 0x7bbf0040
    ctx->pc = 0x1cea88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cea8c: 0x7bb30030
    ctx->pc = 0x1cea8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cea90: 0x7bb20020
    ctx->pc = 0x1cea90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cea94: 0x7bb10010
    ctx->pc = 0x1cea94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cea98: 0x7bb00000
    ctx->pc = 0x1cea98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cea9c: 0x3e00008
    ctx->pc = 0x1CEA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEAA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE9D0u: goto label_1ce9d0;
            case 0x1CEA58u: goto label_1cea58;
            case 0x1CEA64u: goto label_1cea64;
            case 0x1CEA70u: goto label_1cea70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEAA4u;
}
