#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: alloc__14TexBufMgrClassFii
// Address: 0x21a140 - 0x21a300
void alloc__14TexBufMgrClassFii_0x21a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("alloc__14TexBufMgrClassFii");


    ctx->pc = 0x21a140u;

    // 0x21a140: 0x27bdff80
    ctx->pc = 0x21a140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21a144: 0x7fbf0070
    ctx->pc = 0x21a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x21a148: 0x7fb60060
    ctx->pc = 0x21a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21a14c: 0x7fb50050
    ctx->pc = 0x21a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21a150: 0x7fb40040
    ctx->pc = 0x21a150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21a154: 0x7fb30030
    ctx->pc = 0x21a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21a158: 0x7fb20020
    ctx->pc = 0x21a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a15c: 0x7fb10010
    ctx->pc = 0x21a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a160: 0x7fb00000
    ctx->pc = 0x21a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a164: 0x8c830394
    ctx->pc = 0x21a164u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x21a168: 0x7080b628
    ctx->pc = 0x21a168u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21a16c: 0x70a0ae28
    ctx->pc = 0x21a16cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21a170: 0x70c0a628
    ctx->pc = 0x21a170u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x21a174: 0x70008e28
    ctx->pc = 0x21a174u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a178: 0x1060001b
    ctx->pc = 0x21A178u;
    {
        const bool branch_taken_0x21a178 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A17Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a178) {
            ctx->pc = 0x21A1E8u;
            goto label_21a1e8;
        }
    }
    ctx->pc = 0x21A180u;
    // 0x21a180: 0x2682ffff
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x21a184: 0x402827
    ctx->pc = 0x21a184u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_21a188:
    // 0x21a188: 0x8c660008
    ctx->pc = 0x21a188u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21a18c: 0x8c67000c
    ctx->pc = 0x21a18cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21a190: 0xd41021
    ctx->pc = 0x21a190u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x21a194: 0x2442ffff
    ctx->pc = 0x21a194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21a198: 0xa21024
    ctx->pc = 0x21a198u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21a19c: 0x461023
    ctx->pc = 0x21a19cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21a1a0: 0xe21023
    ctx->pc = 0x21a1a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21a1a4: 0x55102a
    ctx->pc = 0x21a1a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 21)));
    // 0x21a1a8: 0x1440000b
    ctx->pc = 0x21A1A8u;
    {
        const bool branch_taken_0x21a1a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A1ACu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
        if (branch_taken_0x21a1a8) {
            ctx->pc = 0x21A1D8u;
            goto label_21a1d8;
        }
    }
    ctx->pc = 0x21A1B0u;
    // 0x21a1b0: 0x16200005
    ctx->pc = 0x21A1B0u;
    {
        const bool branch_taken_0x21a1b0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A1B4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
        if (branch_taken_0x21a1b0) {
            ctx->pc = 0x21A1C8u;
            goto label_21a1c8;
        }
    }
    ctx->pc = 0x21A1B8u;
    // 0x21a1b8: 0x70402628
    ctx->pc = 0x21a1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a1bc: 0x10000006
    ctx->pc = 0x21A1BCu;
    {
        const bool branch_taken_0x21a1bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A1C0u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a1bc) {
            ctx->pc = 0x21A1D8u;
            goto label_21a1d8;
        }
    }
    ctx->pc = 0x21A1C4u;
    // 0x21a1c4: 0x44082a
    ctx->pc = 0x21a1c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_21a1c8:
    // 0x21a1c8: 0x10200003
    ctx->pc = 0x21A1C8u;
    {
        const bool branch_taken_0x21a1c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a1c8) {
            ctx->pc = 0x21A1D8u;
            goto label_21a1d8;
        }
    }
    ctx->pc = 0x21A1D0u;
    // 0x21a1d0: 0x70402628
    ctx->pc = 0x21a1d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a1d4: 0x70608e28
    ctx->pc = 0x21a1d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_21a1d8:
    // 0x21a1d8: 0x8c630000
    ctx->pc = 0x21a1d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a1dc: 0x1460ffea
    ctx->pc = 0x21A1DCu;
    {
        const bool branch_taken_0x21a1dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a1dc) {
            ctx->pc = 0x21A188u;
            goto label_21a188;
        }
    }
    ctx->pc = 0x21A1E4u;
    // 0x21a1e4: 0x0
    ctx->pc = 0x21a1e4u;
    // NOP
label_21a1e8:
    // 0x21a1e8: 0x16200004
    ctx->pc = 0x21A1E8u;
    {
        const bool branch_taken_0x21a1e8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A1ECu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a1e8) {
            ctx->pc = 0x21A1FCu;
            goto label_21a1fc;
        }
    }
    ctx->pc = 0x21A1F0u;
    // 0x21a1f0: 0xaec003a4
    ctx->pc = 0x21a1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 932), GPR_U32(ctx, 0));
    // 0x21a1f4: 0x10000038
    ctx->pc = 0x21A1F4u;
    {
        const bool branch_taken_0x21a1f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A1F8u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a1f4) {
            ctx->pc = 0x21A2D8u;
            goto label_21a2d8;
        }
    }
    ctx->pc = 0x21A1FCu;
label_21a1fc:
    // 0x21a1fc: 0xc0867d8
    ctx->pc = 0x21A1FCu;
    SET_GPR_U32(ctx, 31, 0x21A204u);
    ctx->pc = 0x219F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        getAllocBlock__14TexBufMgrClassFv_0x219f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A204u; }
        else if (ctx->pc != 0x21A204u) { ctx->pc = 0x21A204u; }
    }
    if (ctx->pc != 0x21A204u) { return; }
    ctx->pc = 0x21A204u;
    // 0x21a204: 0x70408628
    ctx->pc = 0x21a204u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a208: 0x16000003
    ctx->pc = 0x21A208u;
    {
        const bool branch_taken_0x21a208 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A20Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a208) {
            ctx->pc = 0x21A218u;
            goto label_21a218;
        }
    }
    ctx->pc = 0x21A210u;
    // 0x21a210: 0x10000032
    ctx->pc = 0x21A210u;
    {
        const bool branch_taken_0x21a210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A214u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x21a210) {
            ctx->pc = 0x21A2DCu;
            goto label_21a2dc;
        }
    }
    ctx->pc = 0x21A218u;
label_21a218:
    // 0x21a218: 0x8e260008
    ctx->pc = 0x21a218u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21a21c: 0x2682ffff
    ctx->pc = 0x21a21cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x21a220: 0x401027
    ctx->pc = 0x21a220u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x21a224: 0x72c02628
    ctx->pc = 0x21a224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x21a228: 0x72002e28
    ctx->pc = 0x21a228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21a22c: 0xd41821
    ctx->pc = 0x21a22cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x21a230: 0x2463ffff
    ctx->pc = 0x21a230u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21a234: 0x439824
    ctx->pc = 0x21a234u;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a238: 0xae130008
    ctx->pc = 0x21a238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x21a23c: 0x2669023
    ctx->pc = 0x21a23cu;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x21a240: 0xc086828
    ctx->pc = 0x21A240u;
    SET_GPR_U32(ctx, 31, 0x21A248u);
    ctx->pc = 0x21A244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    ctx->pc = 0x21A0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        appendAllocBlockList__14TexBufMgrClassFP10TexSurface_0x21a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A248u; }
        else if (ctx->pc != 0x21A248u) { ctx->pc = 0x21A248u; }
    }
    if (ctx->pc != 0x21A248u) { return; }
    ctx->pc = 0x21A248u;
    // 0x21a248: 0x8e23000c
    ctx->pc = 0x21a248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21a24c: 0x2a3082a
    ctx->pc = 0x21a24cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 3)));
    // 0x21a250: 0x1020001d
    ctx->pc = 0x21A250u;
    {
        const bool branch_taken_0x21a250 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A254u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a250) {
            ctx->pc = 0x21A2C8u;
            goto label_21a2c8;
        }
    }
    ctx->pc = 0x21A258u;
    // 0x21a258: 0x1a400014
    ctx->pc = 0x21A258u;
    {
        const bool branch_taken_0x21a258 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x21A25Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        if (branch_taken_0x21a258) {
            ctx->pc = 0x21A2ACu;
            goto label_21a2ac;
        }
    }
    ctx->pc = 0x21A260u;
    // 0x21a260: 0x43082a
    ctx->pc = 0x21a260u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x21a264: 0x1020000f
    ctx->pc = 0x21A264u;
    {
        const bool branch_taken_0x21a264 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A268u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a264) {
            ctx->pc = 0x21A2A4u;
            goto label_21a2a4;
        }
    }
    ctx->pc = 0x21A26Cu;
    // 0x21a26c: 0xc0867c8
    ctx->pc = 0x21A26Cu;
    SET_GPR_U32(ctx, 31, 0x21A274u);
    ctx->pc = 0x219F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFreeBlock__14TexBufMgrClassFv_0x219f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A274u; }
        else if (ctx->pc != 0x21A274u) { ctx->pc = 0x21A274u; }
    }
    if (ctx->pc != 0x21A274u) { return; }
    ctx->pc = 0x21A274u;
    // 0x21a274: 0x14400003
    ctx->pc = 0x21A274u;
    {
        const bool branch_taken_0x21a274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A278u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        if (branch_taken_0x21a274) {
            ctx->pc = 0x21A284u;
            goto label_21a284;
        }
    }
    ctx->pc = 0x21A27Cu;
    // 0x21a27c: 0x10000016
    ctx->pc = 0x21A27Cu;
    {
        const bool branch_taken_0x21a27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A280u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a27c) {
            ctx->pc = 0x21A2D8u;
            goto label_21a2d8;
        }
    }
    ctx->pc = 0x21A284u;
label_21a284:
    // 0x21a284: 0xac430008
    ctx->pc = 0x21a284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x21a288: 0x8e23000c
    ctx->pc = 0x21a288u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21a28c: 0x72c02628
    ctx->pc = 0x21a28cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x21a290: 0x70402e28
    ctx->pc = 0x21a290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21a294: 0x751823
    ctx->pc = 0x21a294u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x21a298: 0x721823
    ctx->pc = 0x21a298u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x21a29c: 0xc086800
    ctx->pc = 0x21A29Cu;
    SET_GPR_U32(ctx, 31, 0x21A2A4u);
    ctx->pc = 0x21A2A0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x21A000u;
    {
        const uint32_t __entryPc = ctx->pc;
        appendFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2A4u; }
        else if (ctx->pc != 0x21A2A4u) { ctx->pc = 0x21A2A4u; }
    }
    if (ctx->pc != 0x21A2A4u) { return; }
    ctx->pc = 0x21A2A4u;
label_21a2a4:
    // 0x21a2a4: 0x1000000a
    ctx->pc = 0x21A2A4u;
    {
        const bool branch_taken_0x21a2a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A2A8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
        if (branch_taken_0x21a2a4) {
            ctx->pc = 0x21A2D0u;
            goto label_21a2d0;
        }
    }
    ctx->pc = 0x21A2ACu;
label_21a2ac:
    // 0x21a2ac: 0x8e220008
    ctx->pc = 0x21a2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21a2b0: 0x551021
    ctx->pc = 0x21a2b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21a2b4: 0xae220008
    ctx->pc = 0x21a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x21a2b8: 0x8e22000c
    ctx->pc = 0x21a2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x21a2bc: 0x551023
    ctx->pc = 0x21a2bcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21a2c0: 0x10000003
    ctx->pc = 0x21A2C0u;
    {
        const bool branch_taken_0x21a2c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A2C4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x21a2c0) {
            ctx->pc = 0x21A2D0u;
            goto label_21a2d0;
        }
    }
    ctx->pc = 0x21A2C8u;
label_21a2c8:
    // 0x21a2c8: 0xc086810
    ctx->pc = 0x21A2C8u;
    SET_GPR_U32(ctx, 31, 0x21A2D0u);
    ctx->pc = 0x21A2CCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        removeFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2D0u; }
        else if (ctx->pc != 0x21A2D0u) { ctx->pc = 0x21A2D0u; }
    }
    if (ctx->pc != 0x21A2D0u) { return; }
    ctx->pc = 0x21A2D0u;
label_21a2d0:
    // 0x21a2d0: 0xae140010
    ctx->pc = 0x21a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x21a2d4: 0x72001628
    ctx->pc = 0x21a2d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_21a2d8:
    // 0x21a2d8: 0x7bbf0070
    ctx->pc = 0x21a2d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21a2dc:
    // 0x21a2dc: 0x7bb60060
    ctx->pc = 0x21a2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a2e0: 0x7bb50050
    ctx->pc = 0x21a2e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a2e4: 0x7bb40040
    ctx->pc = 0x21a2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a2e8: 0x7bb30030
    ctx->pc = 0x21a2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a2ec: 0x7bb20020
    ctx->pc = 0x21a2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a2f0: 0x7bb10010
    ctx->pc = 0x21a2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a2f4: 0x7bb00000
    ctx->pc = 0x21a2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a2f8: 0x3e00008
    ctx->pc = 0x21A2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A2FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A188u: goto label_21a188;
            case 0x21A1C8u: goto label_21a1c8;
            case 0x21A1D8u: goto label_21a1d8;
            case 0x21A1E8u: goto label_21a1e8;
            case 0x21A1FCu: goto label_21a1fc;
            case 0x21A218u: goto label_21a218;
            case 0x21A284u: goto label_21a284;
            case 0x21A2A4u: goto label_21a2a4;
            case 0x21A2ACu: goto label_21a2ac;
            case 0x21A2C8u: goto label_21a2c8;
            case 0x21A2D0u: goto label_21a2d0;
            case 0x21A2D8u: goto label_21a2d8;
            case 0x21A2DCu: goto label_21a2dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A300u;
}
