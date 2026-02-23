#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetDisplayOffset
// Address: 0x1aee40 - 0x1aef74
void nlSetDisplayOffset_0x1aee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetDisplayOffset");


    ctx->pc = 0x1aee40u;

    // 0x1aee40: 0x27bdff90
    ctx->pc = 0x1aee40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1aee44: 0x7fbf0060
    ctx->pc = 0x1aee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1aee48: 0x7fb50050
    ctx->pc = 0x1aee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1aee4c: 0x7fb40040
    ctx->pc = 0x1aee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1aee50: 0x7fb30030
    ctx->pc = 0x1aee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1aee54: 0x7fb20020
    ctx->pc = 0x1aee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1aee58: 0x7fb10010
    ctx->pc = 0x1aee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aee5c: 0x7fb00000
    ctx->pc = 0x1aee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aee60: 0x3c010030
    ctx->pc = 0x1aee60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aee64: 0x84325834
    ctx->pc = 0x1aee64u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1aee68: 0x3c020030
    ctx->pc = 0x1aee68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1aee6c: 0x24503710
    ctx->pc = 0x1aee6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 14096));
    // 0x1aee70: 0x7080ae28
    ctx->pc = 0x1aee70u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1aee74: 0x8e040010
    ctx->pc = 0x1aee74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aee78: 0x70a0a628
    ctx->pc = 0x1aee78u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1aee7c: 0x3c010030
    ctx->pc = 0x1aee7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aee80: 0x84235836
    ctx->pc = 0x1aee80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1aee84: 0x4233c
    ctx->pc = 0x1aee84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
    // 0x1aee88: 0x426fe
    ctx->pc = 0x1aee88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 27));
    // 0x1aee8c: 0x48c3c
    ctx->pc = 0x1aee8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1aee90: 0x3c010030
    ctx->pc = 0x1aee90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aee94: 0x84225838
    ctx->pc = 0x1aee94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1aee98: 0x118c3f
    ctx->pc = 0x1aee98u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1aee9c: 0x14400002
    ctx->pc = 0x1AEE9Cu;
    {
        const bool branch_taken_0x1aee9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEEA0u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1aee9c) {
            ctx->pc = 0x1AEEA8u;
            goto label_1aeea8;
        }
    }
    ctx->pc = 0x1AEEA4u;
    // 0x1aeea4: 0x1cd
    ctx->pc = 0x1aeea4u;
    runtime->handleBreak(rdram, ctx);
label_1aeea8:
    // 0x1aeea8: 0x1012
    ctx->pc = 0x1aeea8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1aeeac: 0x15443c
    ctx->pc = 0x1aeeacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1aeeb0: 0x144c3c
    ctx->pc = 0x1aeeb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1aeeb4: 0x29c3c
    ctx->pc = 0x1aeeb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1aeeb8: 0x139c3f
    ctx->pc = 0x1aeeb8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1aeebc: 0x8443f
    ctx->pc = 0x1aeebcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1aeec0: 0x94c3f
    ctx->pc = 0x1aeec0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1aeec4: 0x72002628
    ctx->pc = 0x1aeec4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1aeec8: 0x72202e28
    ctx->pc = 0x1aeec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1aeecc: 0x72403628
    ctx->pc = 0x1aeeccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1aeed0: 0xc054b0c
    ctx->pc = 0x1AEED0u;
    SET_GPR_U32(ctx, 31, 0x1AEED8u);
    ctx->pc = 0x1AEED4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x152C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x152c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEED8u; }
        else if (ctx->pc != 0x1AEED8u) { ctx->pc = 0x1AEED8u; }
    }
    if (ctx->pc != 0x1AEED8u) { return; }
    ctx->pc = 0x1AEED8u;
    // 0x1aeed8: 0x15443c
    ctx->pc = 0x1aeed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1aeedc: 0x144c3c
    ctx->pc = 0x1aeedcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1aeee0: 0x8443f
    ctx->pc = 0x1aeee0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1aeee4: 0x94c3f
    ctx->pc = 0x1aeee4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1aeee8: 0x72202e28
    ctx->pc = 0x1aeee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1aeeec: 0x26040028
    ctx->pc = 0x1aeeecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 40));
    // 0x1aeef0: 0x72403628
    ctx->pc = 0x1aeef0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1aeef4: 0xc054b0c
    ctx->pc = 0x1AEEF4u;
    SET_GPR_U32(ctx, 31, 0x1AEEFCu);
    ctx->pc = 0x1AEEF8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x152C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x152c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEEFCu; }
        else if (ctx->pc != 0x1AEEFCu) { ctx->pc = 0x1AEEFCu; }
    }
    if (ctx->pc != 0x1AEEFCu) { return; }
    ctx->pc = 0x1AEEFCu;
    // 0x1aeefc: 0x121c3c
    ctx->pc = 0x1aeefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1aef00: 0x31c3f
    ctx->pc = 0x1aef00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1aef04: 0x2463003f
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1aef08: 0x4610003
    ctx->pc = 0x1AEF08u;
    {
        const bool branch_taken_0x1aef08 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AEF0Cu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 6));
        if (branch_taken_0x1aef08) {
            ctx->pc = 0x1AEF18u;
            goto label_1aef18;
        }
    }
    ctx->pc = 0x1AEF10u;
    // 0x1aef10: 0x2463003f
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1aef14: 0x32983
    ctx->pc = 0x1aef14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 6));
label_1aef18:
    // 0x1aef18: 0x131c3c
    ctx->pc = 0x1aef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1aef1c: 0x31c3f
    ctx->pc = 0x1aef1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1aef20: 0x2464001f
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 31));
    // 0x1aef24: 0x4810003
    ctx->pc = 0x1AEF24u;
    {
        const bool branch_taken_0x1aef24 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AEF28u;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        if (branch_taken_0x1aef24) {
            ctx->pc = 0x1AEF34u;
            goto label_1aef34;
        }
    }
    ctx->pc = 0x1AEF2Cu;
    // 0x1aef2c: 0x2483001f
    ctx->pc = 0x1aef2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 31));
    // 0x1aef30: 0x31943
    ctx->pc = 0x1aef30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1aef34:
    // 0x1aef34: 0xa32018
    ctx->pc = 0x1aef34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1aef38: 0x96050038
    ctx->pc = 0x1aef38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1aef3c: 0x2403fe00
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1aef40: 0x308401ff
    ctx->pc = 0x1aef40u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 511));
    // 0x1aef44: 0xa31824
    ctx->pc = 0x1aef44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aef48: 0x641825
    ctx->pc = 0x1aef48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aef4c: 0xa6030038
    ctx->pc = 0x1aef4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aef50: 0x7bbf0060
    ctx->pc = 0x1aef50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aef54: 0x7bb50050
    ctx->pc = 0x1aef54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aef58: 0x7bb40040
    ctx->pc = 0x1aef58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aef5c: 0x7bb30030
    ctx->pc = 0x1aef5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aef60: 0x7bb20020
    ctx->pc = 0x1aef60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aef64: 0x7bb10010
    ctx->pc = 0x1aef64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aef68: 0x7bb00000
    ctx->pc = 0x1aef68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aef6c: 0x3e00008
    ctx->pc = 0x1AEF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEF70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEEA8u: goto label_1aeea8;
            case 0x1AEF18u: goto label_1aef18;
            case 0x1AEF34u: goto label_1aef34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEF74u;
}
