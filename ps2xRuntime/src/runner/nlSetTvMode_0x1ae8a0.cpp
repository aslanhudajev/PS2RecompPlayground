#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetTvMode
// Address: 0x1ae8a0 - 0x1aeb94
void nlSetTvMode_0x1ae8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetTvMode");


    ctx->pc = 0x1ae8a0u;

    // 0x1ae8a0: 0x27bdff80
    ctx->pc = 0x1ae8a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ae8a4: 0x7fbf0070
    ctx->pc = 0x1ae8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1ae8a8: 0x7fb60060
    ctx->pc = 0x1ae8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ae8ac: 0x7fb50050
    ctx->pc = 0x1ae8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ae8b0: 0x7fb40040
    ctx->pc = 0x1ae8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ae8b4: 0x7fb30030
    ctx->pc = 0x1ae8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ae8b8: 0x7fb20020
    ctx->pc = 0x1ae8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae8bc: 0x7fb10010
    ctx->pc = 0x1ae8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae8c0: 0x7fb00000
    ctx->pc = 0x1ae8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ae8c4: 0x3c030030
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1ae8c8: 0x24703710
    ctx->pc = 0x1ae8c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 14096));
    // 0x1ae8cc: 0x3c020030
    ctx->pc = 0x1ae8ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ae8d0: 0x41840
    ctx->pc = 0x1ae8d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ae8d4: 0x641821
    ctx->pc = 0x1ae8d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae8d8: 0x24423700
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
    // 0x1ae8dc: 0xaf828a10
    ctx->pc = 0x1ae8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 2));
    // 0x1ae8e0: 0x3c04002c
    ctx->pc = 0x1ae8e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1ae8e4: 0x24020001
    ctx->pc = 0x1ae8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae8e8: 0x3c010030
    ctx->pc = 0x1ae8e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae8ec: 0xac223700
    ctx->pc = 0x1ae8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14080), GPR_U32(ctx, 2));
    // 0x1ae8f0: 0x31880
    ctx->pc = 0x1ae8f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae8f4: 0x2484d9f4
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957556));
    // 0x1ae8f8: 0x70c0a628
    ctx->pc = 0x1ae8f8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ae8fc: 0x832021
    ctx->pc = 0x1ae8fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae900: 0x84860000
    ctx->pc = 0x1ae900u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ae904: 0x3c010030
    ctx->pc = 0x1ae904u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae908: 0x70a0ae28
    ctx->pc = 0x1ae908u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ae90c: 0x70e09e28
    ctx->pc = 0x1ae90cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ae910: 0x71009628
    ctx->pc = 0x1ae910u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1ae914: 0x7120b628
    ctx->pc = 0x1ae914u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1ae918: 0x3c04002c
    ctx->pc = 0x1ae918u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1ae91c: 0x2484d9f6
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957558));
    // 0x1ae920: 0x832821
    ctx->pc = 0x1ae920u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae924: 0xa4265834
    ctx->pc = 0x1ae924u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22580), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae928: 0x3c04002c
    ctx->pc = 0x1ae928u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1ae92c: 0x84a60000
    ctx->pc = 0x1ae92cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae930: 0x2484d9f8
    ctx->pc = 0x1ae930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957560));
    // 0x1ae934: 0x3c010030
    ctx->pc = 0x1ae934u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae938: 0x832821
    ctx->pc = 0x1ae938u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae93c: 0x3c04002c
    ctx->pc = 0x1ae93cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1ae940: 0x2484d9fa
    ctx->pc = 0x1ae940u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957562));
    // 0x1ae944: 0xa4265836
    ctx->pc = 0x1ae944u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22582), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae948: 0x838821
    ctx->pc = 0x1ae948u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae94c: 0x84a40000
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae950: 0x3c010030
    ctx->pc = 0x1ae950u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae954: 0xa4245838
    ctx->pc = 0x1ae954u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22584), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ae958: 0x3c010030
    ctx->pc = 0x1ae958u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae95c: 0xa420583c
    ctx->pc = 0x1ae95cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22588), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ae960: 0x86270000
    ctx->pc = 0x1ae960u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ae964: 0x3c010030
    ctx->pc = 0x1ae964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae968: 0x14e20003
    ctx->pc = 0x1AE968u;
    {
        const bool branch_taken_0x1ae968 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AE96Cu;
        WRITE16(ADD32(GPR_U32(ctx, 1), 22590), (uint16_t)GPR_U32(ctx, 7));
        if (branch_taken_0x1ae968) {
            ctx->pc = 0x1AE978u;
            goto label_1ae978;
        }
    }
    ctx->pc = 0x1AE970u;
    // 0x1ae970: 0x10000002
    ctx->pc = 0x1AE970u;
    {
        const bool branch_taken_0x1ae970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ae970) {
            ctx->pc = 0x1AE97Cu;
            goto label_1ae97c;
        }
    }
    ctx->pc = 0x1AE978u;
label_1ae978:
    // 0x1ae978: 0x24020002
    ctx->pc = 0x1ae978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1ae97c:
    // 0x1ae97c: 0x3c010030
    ctx->pc = 0x1ae97cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae980: 0xa4225840
    ctx->pc = 0x1ae980u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 22592), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae984: 0x3c02002c
    ctx->pc = 0x1ae984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae988: 0x2442d9f0
    ctx->pc = 0x1ae988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957552));
    // 0x1ae98c: 0x431021
    ctx->pc = 0x1ae98cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae990: 0x84450000
    ctx->pc = 0x1ae990u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae994: 0x3c02002c
    ctx->pc = 0x1ae994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1ae998: 0x2442d9f2
    ctx->pc = 0x1ae998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957554));
    // 0x1ae99c: 0x431021
    ctx->pc = 0x1ae99cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae9a0: 0x84460000
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae9a4: 0xc054a8a
    ctx->pc = 0x1AE9A4u;
    SET_GPR_U32(ctx, 31, 0x1AE9ACu);
    ctx->pc = 0x1AE9A8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x152A28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x152a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9ACu; }
        else if (ctx->pc != 0x1AE9ACu) { ctx->pc = 0x1AE9ACu; }
    }
    if (ctx->pc != 0x1AE9ACu) { return; }
    ctx->pc = 0x1AE9ACu;
    // 0x1ae9ac: 0x3c010030
    ctx->pc = 0x1ae9acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae9b0: 0x84235836
    ctx->pc = 0x1ae9b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1ae9b4: 0x3c010030
    ctx->pc = 0x1ae9b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae9b8: 0x84225838
    ctx->pc = 0x1ae9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1ae9bc: 0x14400002
    ctx->pc = 0x1AE9BCu;
    {
        const bool branch_taken_0x1ae9bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AE9C0u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1ae9bc) {
            ctx->pc = 0x1AE9C8u;
            goto label_1ae9c8;
        }
    }
    ctx->pc = 0x1AE9C4u;
    // 0x1ae9c4: 0x1cd
    ctx->pc = 0x1ae9c4u;
    runtime->handleBreak(rdram, ctx);
label_1ae9c8:
    // 0x1ae9c8: 0x3c010030
    ctx->pc = 0x1ae9c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ae9cc: 0x84265834
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1ae9d0: 0x1012
    ctx->pc = 0x1ae9d0u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1ae9d4: 0x72804628
    ctx->pc = 0x1ae9d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1ae9d8: 0x72604e28
    ctx->pc = 0x1ae9d8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1ae9dc: 0x23c3c
    ctx->pc = 0x1ae9dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ae9e0: 0x72405628
    ctx->pc = 0x1ae9e0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1ae9e4: 0x72002628
    ctx->pc = 0x1ae9e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ae9e8: 0x72a02e28
    ctx->pc = 0x1ae9e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1ae9ec: 0xc054d00
    ctx->pc = 0x1AE9ECu;
    SET_GPR_U32(ctx, 31, 0x1AE9F4u);
    ctx->pc = 0x1AE9F0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->pc = 0x153400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDBuff_0x153400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE9F4u; }
        else if (ctx->pc != 0x1AE9F4u) { ctx->pc = 0x1AE9F4u; }
    }
    if (ctx->pc != 0x1AE9F4u) { return; }
    ctx->pc = 0x1AE9F4u;
    // 0x1ae9f4: 0x86230000
    ctx->pc = 0x1ae9f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ae9f8: 0x14600055
    ctx->pc = 0x1AE9F8u;
    {
        const bool branch_taken_0x1ae9f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AE9FCu;
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 16));
        if (branch_taken_0x1ae9f8) {
            ctx->pc = 0x1AEB50u;
            goto label_1aeb50;
        }
    }
    ctx->pc = 0x1AEA00u;
    // 0x1aea00: 0x52c3f
    ctx->pc = 0x1aea00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1aea04: 0x2403000a
    ctx->pc = 0x1aea04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1aea08: 0x10a3000e
    ctx->pc = 0x1AEA08u;
    {
        const bool branch_taken_0x1aea08 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AEA0Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x1aea08) {
            ctx->pc = 0x1AEA44u;
            goto label_1aea44;
        }
    }
    ctx->pc = 0x1AEA10u;
    // 0x1aea10: 0x24030002
    ctx->pc = 0x1aea10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1aea14: 0x10a3000c
    ctx->pc = 0x1AEA14u;
    {
        const bool branch_taken_0x1aea14 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AEA18u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1aea14) {
            ctx->pc = 0x1AEA48u;
            goto label_1aea48;
        }
    }
    ctx->pc = 0x1AEA1Cu;
    // 0x1aea1c: 0x24030001
    ctx->pc = 0x1aea1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aea20: 0x10a30005
    ctx->pc = 0x1AEA20u;
    {
        const bool branch_taken_0x1aea20 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1AEA24u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x1aea20) {
            ctx->pc = 0x1AEA38u;
            goto label_1aea38;
        }
    }
    ctx->pc = 0x1AEA28u;
    // 0x1aea28: 0x10a00004
    ctx->pc = 0x1AEA28u;
    {
        const bool branch_taken_0x1aea28 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AEA2Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1aea28) {
            ctx->pc = 0x1AEA3Cu;
            goto label_1aea3c;
        }
    }
    ctx->pc = 0x1AEA30u;
    // 0x1aea30: 0x10000007
    ctx->pc = 0x1AEA30u;
    {
        const bool branch_taken_0x1aea30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AEA34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
        if (branch_taken_0x1aea30) {
            ctx->pc = 0x1AEA50u;
            goto label_1aea50;
        }
    }
    ctx->pc = 0x1AEA38u;
label_1aea38:
    // 0x1aea38: 0x24070004
    ctx->pc = 0x1aea38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
label_1aea3c:
    // 0x1aea3c: 0x10000008
    ctx->pc = 0x1AEA3Cu;
    {
        const bool branch_taken_0x1aea3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aea3c) {
            ctx->pc = 0x1AEA60u;
            goto label_1aea60;
        }
    }
    ctx->pc = 0x1AEA44u;
label_1aea44:
    // 0x1aea44: 0x24070002
    ctx->pc = 0x1aea44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
label_1aea48:
    // 0x1aea48: 0x10000005
    ctx->pc = 0x1AEA48u;
    {
        const bool branch_taken_0x1aea48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aea48) {
            ctx->pc = 0x1AEA60u;
            goto label_1aea60;
        }
    }
    ctx->pc = 0x1AEA50u;
label_1aea50:
    // 0x1aea50: 0xc05114a
    ctx->pc = 0x1AEA50u;
    SET_GPR_U32(ctx, 31, 0x1AEA58u);
    ctx->pc = 0x1AEA54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294965648));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEA58u; }
        else if (ctx->pc != 0x1AEA58u) { ctx->pc = 0x1AEA58u; }
    }
    if (ctx->pc != 0x1AEA58u) { return; }
    ctx->pc = 0x1AEA58u;
label_1aea58:
    // 0x1aea58: 0x1000ffff
    ctx->pc = 0x1AEA58u;
    {
        const bool branch_taken_0x1aea58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aea58) {
            ctx->pc = 0x1AEA58u;
            goto label_1aea58;
        }
    }
    ctx->pc = 0x1AEA60u;
label_1aea60:
    // 0x1aea60: 0x3c010030
    ctx->pc = 0x1aea60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aea64: 0x84245836
    ctx->pc = 0x1aea64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22582)));
    // 0x1aea68: 0x3c010030
    ctx->pc = 0x1aea68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aea6c: 0x84235838
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22584)));
    // 0x1aea70: 0x14600002
    ctx->pc = 0x1AEA70u;
    {
        const bool branch_taken_0x1aea70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AEA74u;
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1aea70) {
            ctx->pc = 0x1AEA7Cu;
            goto label_1aea7c;
        }
    }
    ctx->pc = 0x1AEA78u;
    // 0x1aea78: 0x1cd
    ctx->pc = 0x1aea78u;
    runtime->handleBreak(rdram, ctx);
label_1aea7c:
    // 0x1aea7c: 0x3c010030
    ctx->pc = 0x1aea7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aea80: 0x84245834
    ctx->pc = 0x1aea80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 22580)));
    // 0x1aea84: 0x2812
    ctx->pc = 0x1aea84u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x1aea88: 0xc01827
    ctx->pc = 0x1aea88u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
    // 0x1aea8c: 0xc52821
    ctx->pc = 0x1aea8cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1aea90: 0x652824
    ctx->pc = 0x1aea90u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aea94: 0x2403ffe0
    ctx->pc = 0x1aea94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1aea98: 0x2484001f
    ctx->pc = 0x1aea98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31));
    // 0x1aea9c: 0x831824
    ctx->pc = 0x1aea9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aeaa0: 0x651818
    ctx->pc = 0x1aeaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1aeaa4: 0xe32018
    ctx->pc = 0x1aeaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1aeaa8: 0x4810003
    ctx->pc = 0x1AEAA8u;
    {
        const bool branch_taken_0x1aeaa8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AEAACu;
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 13));
        if (branch_taken_0x1aeaa8) {
            ctx->pc = 0x1AEAB8u;
            goto label_1aeab8;
        }
    }
    ctx->pc = 0x1AEAB0u;
    // 0x1aeab0: 0x24831fff
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 8191));
    // 0x1aeab4: 0x31b43
    ctx->pc = 0x1aeab4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 13));
label_1aeab8:
    // 0x1aeab8: 0x306701ff
    ctx->pc = 0x1aeab8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 3), 511));
    // 0x1aeabc: 0x41840
    ctx->pc = 0x1aeabcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1aeac0: 0x96040150
    ctx->pc = 0x1aeac0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aeac4: 0x2406fe00
    ctx->pc = 0x1aeac4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1aeac8: 0x300501ff
    ctx->pc = 0x1aeac8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 0), 511));
    // 0x1aeacc: 0x34343
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 13));
    // 0x1aead0: 0x862024
    ctx->pc = 0x1aead0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aead4: 0x872025
    ctx->pc = 0x1aead4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1aead8: 0xa6040150
    ctx->pc = 0x1aead8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 336), (uint16_t)GPR_U32(ctx, 4));
    // 0x1aeadc: 0x96040060
    ctx->pc = 0x1aeadcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1aeae0: 0x862024
    ctx->pc = 0x1aeae0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aeae4: 0x852025
    ctx->pc = 0x1aeae4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1aeae8: 0x4610003
    ctx->pc = 0x1AEAE8u;
    {
        const bool branch_taken_0x1aeae8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AEAECu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1aeae8) {
            ctx->pc = 0x1AEAF8u;
            goto label_1aeaf8;
        }
    }
    ctx->pc = 0x1AEAF0u;
    // 0x1aeaf0: 0x24631fff
    ctx->pc = 0x1aeaf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8191));
    // 0x1aeaf4: 0x34343
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 13));
label_1aeaf8:
    // 0x1aeaf8: 0x96030070
    ctx->pc = 0x1aeaf8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1aeafc: 0x2405fe00
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1aeb00: 0x310401ff
    ctx->pc = 0x1aeb00u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 8), 511));
    // 0x1aeb04: 0x651824
    ctx->pc = 0x1aeb04u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aeb08: 0x641825
    ctx->pc = 0x1aeb08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aeb0c: 0xa6030070
    ctx->pc = 0x1aeb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 112), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aeb10: 0x96030160
    ctx->pc = 0x1aeb10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1aeb14: 0x651824
    ctx->pc = 0x1aeb14u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aeb18: 0x641825
    ctx->pc = 0x1aeb18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aeb1c: 0xa6030160
    ctx->pc = 0x1aeb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aeb20: 0x96040150
    ctx->pc = 0x1aeb20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aeb24: 0x96030010
    ctx->pc = 0x1aeb24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aeb28: 0x308401ff
    ctx->pc = 0x1aeb28u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 511));
    // 0x1aeb2c: 0x651824
    ctx->pc = 0x1aeb2cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aeb30: 0x641825
    ctx->pc = 0x1aeb30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aeb34: 0xa6030010
    ctx->pc = 0x1aeb34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x1aeb38: 0x96040060
    ctx->pc = 0x1aeb38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1aeb3c: 0x96030038
    ctx->pc = 0x1aeb3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1aeb40: 0x308401ff
    ctx->pc = 0x1aeb40u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 511));
    // 0x1aeb44: 0x651824
    ctx->pc = 0x1aeb44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aeb48: 0x641825
    ctx->pc = 0x1aeb48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aeb4c: 0xa6030038
    ctx->pc = 0x1aeb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 3));
label_1aeb50:
    // 0x1aeb50: 0xaf808ad4
    ctx->pc = 0x1aeb50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937300), GPR_U32(ctx, 0));
    // 0x1aeb54: 0xaf808ae0
    ctx->pc = 0x1aeb54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937312), GPR_U32(ctx, 0));
    // 0x1aeb58: 0xaf808adc
    ctx->pc = 0x1aeb58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937308), GPR_U32(ctx, 0));
    // 0x1aeb5c: 0xaf968ae4
    ctx->pc = 0x1aeb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937316), GPR_U32(ctx, 22));
    // 0x1aeb60: 0xaf808a0c
    ctx->pc = 0x1aeb60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
    // 0x1aeb64: 0xaf808ad8
    ctx->pc = 0x1aeb64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937304), GPR_U32(ctx, 0));
    // 0x1aeb68: 0xaf808ad0
    ctx->pc = 0x1aeb68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937296), GPR_U32(ctx, 0));
    // 0x1aeb6c: 0x7bbf0070
    ctx->pc = 0x1aeb6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aeb70: 0x7bb60060
    ctx->pc = 0x1aeb70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aeb74: 0x7bb50050
    ctx->pc = 0x1aeb74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aeb78: 0x7bb40040
    ctx->pc = 0x1aeb78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aeb7c: 0x7bb30030
    ctx->pc = 0x1aeb7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aeb80: 0x7bb20020
    ctx->pc = 0x1aeb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aeb84: 0x7bb10010
    ctx->pc = 0x1aeb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeb88: 0x7bb00000
    ctx->pc = 0x1aeb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeb8c: 0x3e00008
    ctx->pc = 0x1AEB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE978u: goto label_1ae978;
            case 0x1AE97Cu: goto label_1ae97c;
            case 0x1AE9C8u: goto label_1ae9c8;
            case 0x1AEA38u: goto label_1aea38;
            case 0x1AEA3Cu: goto label_1aea3c;
            case 0x1AEA44u: goto label_1aea44;
            case 0x1AEA48u: goto label_1aea48;
            case 0x1AEA50u: goto label_1aea50;
            case 0x1AEA58u: goto label_1aea58;
            case 0x1AEA60u: goto label_1aea60;
            case 0x1AEA7Cu: goto label_1aea7c;
            case 0x1AEAB8u: goto label_1aeab8;
            case 0x1AEAF8u: goto label_1aeaf8;
            case 0x1AEB50u: goto label_1aeb50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEB94u;
}
