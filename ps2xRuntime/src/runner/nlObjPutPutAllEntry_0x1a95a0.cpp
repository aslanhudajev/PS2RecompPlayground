#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutPutAllEntry
// Address: 0x1a95a0 - 0x1a9758
void nlObjPutPutAllEntry_0x1a95a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutPutAllEntry");


    ctx->pc = 0x1a95a0u;

label_1a95a0:
    // 0x1a95a0: 0x27bdffa0
    ctx->pc = 0x1a95a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a95a4:
    // 0x1a95a4: 0x7fbf0050
    ctx->pc = 0x1a95a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_1a95a8:
    // 0x1a95a8: 0x7fb30040
    ctx->pc = 0x1a95a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a95ac:
    // 0x1a95ac: 0x7fb20030
    ctx->pc = 0x1a95acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a95b0:
    // 0x1a95b0: 0x7fb10020
    ctx->pc = 0x1a95b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a95b4:
    // 0x1a95b4: 0x7fb00010
    ctx->pc = 0x1a95b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a95b8:
    // 0x1a95b8: 0xe7b60008
    ctx->pc = 0x1a95b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a95bc:
    // 0x1a95bc: 0xe7b50004
    ctx->pc = 0x1a95bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a95c0:
    // 0x1a95c0: 0xe7b40000
    ctx->pc = 0x1a95c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a95c4:
    // 0x1a95c4: 0x8f928a48
    ctx->pc = 0x1a95c4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 28), 4294937160)));
label_1a95c8:
    // 0x1a95c8: 0x70809e28
    ctx->pc = 0x1a95c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a95cc:
    // 0x1a95cc: 0xc0693a0
label_1a95d0:
    if (ctx->pc == 0x1A95D0u) {
        ctx->pc = 0x1A95D0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A95D4u;
        goto label_1a95d4;
    }
    ctx->pc = 0x1A95CCu;
    SET_GPR_U32(ctx, 31, 0x1A95D4u);
    ctx->pc = 0x1A95D0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A95D4u; }
        else if (ctx->pc != 0x1A95D4u) { ctx->pc = 0x1A95D4u; }
    }
    if (ctx->pc != 0x1A95D4u) { return; }
    ctx->pc = 0x1A95D4u;
label_1a95d4:
    // 0x1a95d4: 0x70008628
    ctx->pc = 0x1a95d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a95d8:
    // 0x1a95d8: 0x8e510000
    ctx->pc = 0x1a95d8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a95dc:
    // 0x1a95dc: 0x5220004f
label_1a95e0:
    if (ctx->pc == 0x1A95E0u) {
        ctx->pc = 0x1A95E0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1A95E4u;
        goto label_1a95e4;
    }
    ctx->pc = 0x1A95DCu;
    {
        const bool branch_taken_0x1a95dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a95dc) {
            ctx->pc = 0x1A95E0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1A971Cu;
            goto label_1a971c;
        }
    }
    ctx->pc = 0x1A95E4u;
label_1a95e4:
    // 0x1a95e4: 0x0
    ctx->pc = 0x1a95e4u;
    // NOP
label_1a95e8:
    // 0x1a95e8: 0x8e230004
    ctx->pc = 0x1a95e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a95ec:
    // 0x1a95ec: 0x24020003
    ctx->pc = 0x1a95ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1a95f0:
    // 0x1a95f0: 0x1062003f
label_1a95f4:
    if (ctx->pc == 0x1A95F4u) {
        ctx->pc = 0x1A95F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A95F8u;
        goto label_1a95f8;
    }
    ctx->pc = 0x1A95F0u;
    {
        const bool branch_taken_0x1a95f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A95F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1a95f0) {
            ctx->pc = 0x1A96F0u;
            goto label_1a96f0;
        }
    }
    ctx->pc = 0x1A95F8u;
label_1a95f8:
    // 0x1a95f8: 0x10620028
label_1a95fc:
    if (ctx->pc == 0x1A95FCu) {
        ctx->pc = 0x1A95FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9600u;
        goto label_1a9600;
    }
    ctx->pc = 0x1A95F8u;
    {
        const bool branch_taken_0x1a95f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A95FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a95f8) {
            ctx->pc = 0x1A969Cu;
            goto label_1a969c;
        }
    }
    ctx->pc = 0x1A9600u;
label_1a9600:
    // 0x1a9600: 0x1062000c
label_1a9604:
    if (ctx->pc == 0x1A9604u) {
        ctx->pc = 0x1A9608u;
        goto label_1a9608;
    }
    ctx->pc = 0x1A9600u;
    {
        const bool branch_taken_0x1a9600 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1a9600) {
            ctx->pc = 0x1A9634u;
            goto label_1a9634;
        }
    }
    ctx->pc = 0x1A9608u;
label_1a9608:
    // 0x1a9608: 0x10600003
label_1a960c:
    if (ctx->pc == 0x1A960Cu) {
        ctx->pc = 0x1A9610u;
        goto label_1a9610;
    }
    ctx->pc = 0x1A9608u;
    {
        const bool branch_taken_0x1a9608 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9608) {
            ctx->pc = 0x1A9618u;
            goto label_1a9618;
        }
    }
    ctx->pc = 0x1A9610u;
label_1a9610:
    // 0x1a9610: 0x1000003e
label_1a9614:
    if (ctx->pc == 0x1A9614u) {
        ctx->pc = 0x1A9614u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->pc = 0x1A9618u;
        goto label_1a9618;
    }
    ctx->pc = 0x1A9610u;
    {
        const bool branch_taken_0x1a9610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9614u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 240)));
        if (branch_taken_0x1a9610) {
            ctx->pc = 0x1A970Cu;
            goto label_1a970c;
        }
    }
    ctx->pc = 0x1A9618u;
label_1a9618:
    // 0x1a9618: 0x862200f4
    ctx->pc = 0x1a9618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
label_1a961c:
    // 0x1a961c: 0x1453003a
label_1a9620:
    if (ctx->pc == 0x1A9620u) {
        ctx->pc = 0x1A9620u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1A9624u;
        goto label_1a9624;
    }
    ctx->pc = 0x1A961Cu;
    {
        const bool branch_taken_0x1a961c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x1A9620u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x1a961c) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A9624u;
label_1a9624:
    // 0x1a9624: 0xc06a460
label_1a9628:
    if (ctx->pc == 0x1A9628u) {
        ctx->pc = 0x1A962Cu;
        goto label_1a962c;
    }
    ctx->pc = 0x1A9624u;
    SET_GPR_U32(ctx, 31, 0x1A962Cu);
    ctx->pc = 0x1A9180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutEntryPut_0x1a9180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A962Cu; }
        else if (ctx->pc != 0x1A962Cu) { ctx->pc = 0x1A962Cu; }
    }
    if (ctx->pc != 0x1A962Cu) { return; }
    ctx->pc = 0x1A962Cu;
label_1a962c:
    // 0x1a962c: 0x10000036
label_1a9630:
    if (ctx->pc == 0x1A9630u) {
        ctx->pc = 0x1A9634u;
        goto label_1a9634;
    }
    ctx->pc = 0x1A962Cu;
    {
        const bool branch_taken_0x1a962c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a962c) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A9634u;
label_1a9634:
    // 0x1a9634: 0x862200f4
    ctx->pc = 0x1a9634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
label_1a9638:
    // 0x1a9638: 0x14530033
label_1a963c:
    if (ctx->pc == 0x1A963Cu) {
        ctx->pc = 0x1A963Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        ctx->pc = 0x1A9640u;
        goto label_1a9640;
    }
    ctx->pc = 0x1A9638u;
    {
        const bool branch_taken_0x1a9638 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        ctx->pc = 0x1A963Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1a9638) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A9640u;
label_1a9640:
    // 0x1a9640: 0xc4343970
    ctx->pc = 0x1a9640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a9644:
    // 0x1a9644: 0xc6200058
    ctx->pc = 0x1a9644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9648:
    // 0x1a9648: 0x26240010
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_1a964c:
    // 0x1a964c: 0x3c010030
    ctx->pc = 0x1a964cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a9650:
    // 0x1a9650: 0xc4353974
    ctx->pc = 0x1a9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a9654:
    // 0x1a9654: 0x3c010030
    ctx->pc = 0x1a9654u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a9658:
    // 0x1a9658: 0xc4363978
    ctx->pc = 0x1a9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a965c:
    // 0x1a965c: 0x3c010030
    ctx->pc = 0x1a965cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a9660:
    // 0x1a9660: 0xe4203970
    ctx->pc = 0x1a9660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14704), bits); }
label_1a9664:
    // 0x1a9664: 0xc620005c
    ctx->pc = 0x1a9664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9668:
    // 0x1a9668: 0x3c010030
    ctx->pc = 0x1a9668u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a966c:
    // 0x1a966c: 0xe4203974
    ctx->pc = 0x1a966cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14708), bits); }
label_1a9670:
    // 0x1a9670: 0xc6200060
    ctx->pc = 0x1a9670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9674:
    // 0x1a9674: 0x3c010030
    ctx->pc = 0x1a9674u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a9678:
    // 0x1a9678: 0xc06b750
label_1a967c:
    if (ctx->pc == 0x1A967Cu) {
        ctx->pc = 0x1A967Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14712), bits); }
        ctx->pc = 0x1A9680u;
        goto label_1a9680;
    }
    ctx->pc = 0x1A9678u;
    SET_GPR_U32(ctx, 31, 0x1A9680u);
    ctx->pc = 0x1A967Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14712), bits); }
    ctx->pc = 0x1ADD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutSub_0x1add40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9680u; }
        else if (ctx->pc != 0x1A9680u) { ctx->pc = 0x1A9680u; }
    }
    if (ctx->pc != 0x1A9680u) { return; }
    ctx->pc = 0x1A9680u;
label_1a9680:
    // 0x1a9680: 0x3c010030
    ctx->pc = 0x1a9680u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a9684:
    // 0x1a9684: 0xe4343970
    ctx->pc = 0x1a9684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14704), bits); }
label_1a9688:
    // 0x1a9688: 0x3c010030
    ctx->pc = 0x1a9688u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a968c:
    // 0x1a968c: 0xe4353974
    ctx->pc = 0x1a968cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14708), bits); }
label_1a9690:
    // 0x1a9690: 0x3c010030
    ctx->pc = 0x1a9690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1a9694:
    // 0x1a9694: 0x1000001c
label_1a9698:
    if (ctx->pc == 0x1A9698u) {
        ctx->pc = 0x1A9698u;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14712), bits); }
        ctx->pc = 0x1A969Cu;
        goto label_1a969c;
    }
    ctx->pc = 0x1A9694u;
    {
        const bool branch_taken_0x1a9694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9698u;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14712), bits); }
        if (branch_taken_0x1a9694) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A969Cu;
label_1a969c:
    // 0x1a969c: 0x862200f4
    ctx->pc = 0x1a969cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
label_1a96a0:
    // 0x1a96a0: 0x14530019
label_1a96a4:
    if (ctx->pc == 0x1A96A4u) {
        ctx->pc = 0x1A96A8u;
        goto label_1a96a8;
    }
    ctx->pc = 0x1A96A0u;
    {
        const bool branch_taken_0x1a96a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x1a96a0) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A96A8u;
label_1a96a8:
    // 0x1a96a8: 0xc62000e0
    ctx->pc = 0x1a96a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a96ac:
    // 0x1a96ac: 0x3c010026
    ctx->pc = 0x1a96acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_1a96b0:
    // 0x1a96b0: 0x26240010
    ctx->pc = 0x1a96b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
label_1a96b4:
    // 0x1a96b4: 0x26250060
    ctx->pc = 0x1a96b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 96));
label_1a96b8:
    // 0x1a96b8: 0x262600a0
    ctx->pc = 0x1a96b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 160));
label_1a96bc:
    // 0x1a96bc: 0xe420fbd0
    ctx->pc = 0x1a96bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966224), bits); }
label_1a96c0:
    // 0x1a96c0: 0xc62000e4
    ctx->pc = 0x1a96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a96c4:
    // 0x1a96c4: 0x3c010026
    ctx->pc = 0x1a96c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_1a96c8:
    // 0x1a96c8: 0xe420fbd4
    ctx->pc = 0x1a96c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966228), bits); }
label_1a96cc:
    // 0x1a96cc: 0xc62000e8
    ctx->pc = 0x1a96ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a96d0:
    // 0x1a96d0: 0x3c010026
    ctx->pc = 0x1a96d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_1a96d4:
    // 0x1a96d4: 0xe420fbe0
    ctx->pc = 0x1a96d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966240), bits); }
label_1a96d8:
    // 0x1a96d8: 0xc62000ec
    ctx->pc = 0x1a96d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a96dc:
    // 0x1a96dc: 0x3c010026
    ctx->pc = 0x1a96dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)38 << 16));
label_1a96e0:
    // 0x1a96e0: 0xc071774
label_1a96e4:
    if (ctx->pc == 0x1A96E4u) {
        ctx->pc = 0x1A96E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966244), bits); }
        ctx->pc = 0x1A96E8u;
        goto label_1a96e8;
    }
    ctx->pc = 0x1A96E0u;
    SET_GPR_U32(ctx, 31, 0x1A96E8u);
    ctx->pc = 0x1A96E4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294966244), bits); }
    ctx->pc = 0x1C5DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPrtclPutMatrix_0x1c5dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A96E8u; }
        else if (ctx->pc != 0x1A96E8u) { ctx->pc = 0x1A96E8u; }
    }
    if (ctx->pc != 0x1A96E8u) { return; }
    ctx->pc = 0x1A96E8u;
label_1a96e8:
    // 0x1a96e8: 0x10000007
label_1a96ec:
    if (ctx->pc == 0x1A96ECu) {
        ctx->pc = 0x1A96F0u;
        goto label_1a96f0;
    }
    ctx->pc = 0x1A96E8u;
    {
        const bool branch_taken_0x1a96e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a96e8) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A96F0u;
label_1a96f0:
    // 0x1a96f0: 0x862200f4
    ctx->pc = 0x1a96f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 244)));
label_1a96f4:
    // 0x1a96f4: 0x14530004
label_1a96f8:
    if (ctx->pc == 0x1A96F8u) {
        ctx->pc = 0x1A96FCu;
        goto label_1a96fc;
    }
    ctx->pc = 0x1A96F4u;
    {
        const bool branch_taken_0x1a96f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x1a96f4) {
            ctx->pc = 0x1A9708u;
            goto label_1a9708;
        }
    }
    ctx->pc = 0x1A96FCu;
label_1a96fc:
    // 0x1a96fc: 0x8e220010
    ctx->pc = 0x1a96fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a9700:
    // 0x1a9700: 0x40f809
label_1a9704:
    if (ctx->pc == 0x1A9704u) {
        ctx->pc = 0x1A9704u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x1A9708u;
        goto label_1a9708;
    }
    ctx->pc = 0x1A9700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9708u);
        ctx->pc = 0x1A9704u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A95A0u: goto label_1a95a0;
            case 0x1A95A4u: goto label_1a95a4;
            case 0x1A95A8u: goto label_1a95a8;
            case 0x1A95ACu: goto label_1a95ac;
            case 0x1A95B0u: goto label_1a95b0;
            case 0x1A95B4u: goto label_1a95b4;
            case 0x1A95B8u: goto label_1a95b8;
            case 0x1A95BCu: goto label_1a95bc;
            case 0x1A95C0u: goto label_1a95c0;
            case 0x1A95C4u: goto label_1a95c4;
            case 0x1A95C8u: goto label_1a95c8;
            case 0x1A95CCu: goto label_1a95cc;
            case 0x1A95D0u: goto label_1a95d0;
            case 0x1A95D4u: goto label_1a95d4;
            case 0x1A95D8u: goto label_1a95d8;
            case 0x1A95DCu: goto label_1a95dc;
            case 0x1A95E0u: goto label_1a95e0;
            case 0x1A95E4u: goto label_1a95e4;
            case 0x1A95E8u: goto label_1a95e8;
            case 0x1A95ECu: goto label_1a95ec;
            case 0x1A95F0u: goto label_1a95f0;
            case 0x1A95F4u: goto label_1a95f4;
            case 0x1A95F8u: goto label_1a95f8;
            case 0x1A95FCu: goto label_1a95fc;
            case 0x1A9600u: goto label_1a9600;
            case 0x1A9604u: goto label_1a9604;
            case 0x1A9608u: goto label_1a9608;
            case 0x1A960Cu: goto label_1a960c;
            case 0x1A9610u: goto label_1a9610;
            case 0x1A9614u: goto label_1a9614;
            case 0x1A9618u: goto label_1a9618;
            case 0x1A961Cu: goto label_1a961c;
            case 0x1A9620u: goto label_1a9620;
            case 0x1A9624u: goto label_1a9624;
            case 0x1A9628u: goto label_1a9628;
            case 0x1A962Cu: goto label_1a962c;
            case 0x1A9630u: goto label_1a9630;
            case 0x1A9634u: goto label_1a9634;
            case 0x1A9638u: goto label_1a9638;
            case 0x1A963Cu: goto label_1a963c;
            case 0x1A9640u: goto label_1a9640;
            case 0x1A9644u: goto label_1a9644;
            case 0x1A9648u: goto label_1a9648;
            case 0x1A964Cu: goto label_1a964c;
            case 0x1A9650u: goto label_1a9650;
            case 0x1A9654u: goto label_1a9654;
            case 0x1A9658u: goto label_1a9658;
            case 0x1A965Cu: goto label_1a965c;
            case 0x1A9660u: goto label_1a9660;
            case 0x1A9664u: goto label_1a9664;
            case 0x1A9668u: goto label_1a9668;
            case 0x1A966Cu: goto label_1a966c;
            case 0x1A9670u: goto label_1a9670;
            case 0x1A9674u: goto label_1a9674;
            case 0x1A9678u: goto label_1a9678;
            case 0x1A967Cu: goto label_1a967c;
            case 0x1A9680u: goto label_1a9680;
            case 0x1A9684u: goto label_1a9684;
            case 0x1A9688u: goto label_1a9688;
            case 0x1A968Cu: goto label_1a968c;
            case 0x1A9690u: goto label_1a9690;
            case 0x1A9694u: goto label_1a9694;
            case 0x1A9698u: goto label_1a9698;
            case 0x1A969Cu: goto label_1a969c;
            case 0x1A96A0u: goto label_1a96a0;
            case 0x1A96A4u: goto label_1a96a4;
            case 0x1A96A8u: goto label_1a96a8;
            case 0x1A96ACu: goto label_1a96ac;
            case 0x1A96B0u: goto label_1a96b0;
            case 0x1A96B4u: goto label_1a96b4;
            case 0x1A96B8u: goto label_1a96b8;
            case 0x1A96BCu: goto label_1a96bc;
            case 0x1A96C0u: goto label_1a96c0;
            case 0x1A96C4u: goto label_1a96c4;
            case 0x1A96C8u: goto label_1a96c8;
            case 0x1A96CCu: goto label_1a96cc;
            case 0x1A96D0u: goto label_1a96d0;
            case 0x1A96D4u: goto label_1a96d4;
            case 0x1A96D8u: goto label_1a96d8;
            case 0x1A96DCu: goto label_1a96dc;
            case 0x1A96E0u: goto label_1a96e0;
            case 0x1A96E4u: goto label_1a96e4;
            case 0x1A96E8u: goto label_1a96e8;
            case 0x1A96ECu: goto label_1a96ec;
            case 0x1A96F0u: goto label_1a96f0;
            case 0x1A96F4u: goto label_1a96f4;
            case 0x1A96F8u: goto label_1a96f8;
            case 0x1A96FCu: goto label_1a96fc;
            case 0x1A9700u: goto label_1a9700;
            case 0x1A9704u: goto label_1a9704;
            case 0x1A9708u: goto label_1a9708;
            case 0x1A970Cu: goto label_1a970c;
            case 0x1A9710u: goto label_1a9710;
            case 0x1A9714u: goto label_1a9714;
            case 0x1A9718u: goto label_1a9718;
            case 0x1A971Cu: goto label_1a971c;
            case 0x1A9720u: goto label_1a9720;
            case 0x1A9724u: goto label_1a9724;
            case 0x1A9728u: goto label_1a9728;
            case 0x1A972Cu: goto label_1a972c;
            case 0x1A9730u: goto label_1a9730;
            case 0x1A9734u: goto label_1a9734;
            case 0x1A9738u: goto label_1a9738;
            case 0x1A973Cu: goto label_1a973c;
            case 0x1A9740u: goto label_1a9740;
            case 0x1A9744u: goto label_1a9744;
            case 0x1A9748u: goto label_1a9748;
            case 0x1A974Cu: goto label_1a974c;
            case 0x1A9750u: goto label_1a9750;
            case 0x1A9754u: goto label_1a9754;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9708u; }
            if (ctx->pc != 0x1A9708u) { return; }
        }
    }
    ctx->pc = 0x1A9708u;
label_1a9708:
    // 0x1a9708: 0x8e3100f0
    ctx->pc = 0x1a9708u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1a970c:
    // 0x1a970c: 0x1620ffb6
label_1a9710:
    if (ctx->pc == 0x1A9710u) {
        ctx->pc = 0x1A9714u;
        goto label_1a9714;
    }
    ctx->pc = 0x1A970Cu;
    {
        const bool branch_taken_0x1a970c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a970c) {
            ctx->pc = 0x1A95E8u;
            goto label_1a95e8;
        }
    }
    ctx->pc = 0x1A9714u;
label_1a9714:
    // 0x1a9714: 0x0
    ctx->pc = 0x1a9714u;
    // NOP
label_1a9718:
    // 0x1a9718: 0x26100001
    ctx->pc = 0x1a9718u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1a971c:
    // 0x1a971c: 0x2a020100
    ctx->pc = 0x1a971cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
label_1a9720:
    // 0x1a9720: 0x1440ffad
label_1a9724:
    if (ctx->pc == 0x1A9724u) {
        ctx->pc = 0x1A9724u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1A9728u;
        goto label_1a9728;
    }
    ctx->pc = 0x1A9720u;
    {
        const bool branch_taken_0x1a9720 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9724u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x1a9720) {
            ctx->pc = 0x1A95D8u;
            goto label_1a95d8;
        }
    }
    ctx->pc = 0x1A9728u;
label_1a9728:
    // 0x1a9728: 0xc069394
label_1a972c:
    if (ctx->pc == 0x1A972Cu) {
        ctx->pc = 0x1A972Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9730u;
        goto label_1a9730;
    }
    ctx->pc = 0x1A9728u;
    SET_GPR_U32(ctx, 31, 0x1A9730u);
    ctx->pc = 0x1A972Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9730u; }
        else if (ctx->pc != 0x1A9730u) { ctx->pc = 0x1A9730u; }
    }
    if (ctx->pc != 0x1A9730u) { return; }
    ctx->pc = 0x1A9730u;
label_1a9730:
    // 0x1a9730: 0x7bbf0050
    ctx->pc = 0x1a9730u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9734:
    // 0x1a9734: 0x7bb30040
    ctx->pc = 0x1a9734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9738:
    // 0x1a9738: 0x7bb20030
    ctx->pc = 0x1a9738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a973c:
    // 0x1a973c: 0x7bb10020
    ctx->pc = 0x1a973cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9740:
    // 0x1a9740: 0x7bb00010
    ctx->pc = 0x1a9740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9744:
    // 0x1a9744: 0xc7b60008
    ctx->pc = 0x1a9744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a9748:
    // 0x1a9748: 0xc7b50004
    ctx->pc = 0x1a9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a974c:
    // 0x1a974c: 0xc7b40000
    ctx->pc = 0x1a974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a9750:
    // 0x1a9750: 0x3e00008
label_1a9754:
    if (ctx->pc == 0x1A9754u) {
        ctx->pc = 0x1A9754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A9758u;
        goto label_fallthrough_0x1a9750;
    }
    ctx->pc = 0x1A9750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A95A0u: goto label_1a95a0;
            case 0x1A95A4u: goto label_1a95a4;
            case 0x1A95A8u: goto label_1a95a8;
            case 0x1A95ACu: goto label_1a95ac;
            case 0x1A95B0u: goto label_1a95b0;
            case 0x1A95B4u: goto label_1a95b4;
            case 0x1A95B8u: goto label_1a95b8;
            case 0x1A95BCu: goto label_1a95bc;
            case 0x1A95C0u: goto label_1a95c0;
            case 0x1A95C4u: goto label_1a95c4;
            case 0x1A95C8u: goto label_1a95c8;
            case 0x1A95CCu: goto label_1a95cc;
            case 0x1A95D0u: goto label_1a95d0;
            case 0x1A95D4u: goto label_1a95d4;
            case 0x1A95D8u: goto label_1a95d8;
            case 0x1A95DCu: goto label_1a95dc;
            case 0x1A95E0u: goto label_1a95e0;
            case 0x1A95E4u: goto label_1a95e4;
            case 0x1A95E8u: goto label_1a95e8;
            case 0x1A95ECu: goto label_1a95ec;
            case 0x1A95F0u: goto label_1a95f0;
            case 0x1A95F4u: goto label_1a95f4;
            case 0x1A95F8u: goto label_1a95f8;
            case 0x1A95FCu: goto label_1a95fc;
            case 0x1A9600u: goto label_1a9600;
            case 0x1A9604u: goto label_1a9604;
            case 0x1A9608u: goto label_1a9608;
            case 0x1A960Cu: goto label_1a960c;
            case 0x1A9610u: goto label_1a9610;
            case 0x1A9614u: goto label_1a9614;
            case 0x1A9618u: goto label_1a9618;
            case 0x1A961Cu: goto label_1a961c;
            case 0x1A9620u: goto label_1a9620;
            case 0x1A9624u: goto label_1a9624;
            case 0x1A9628u: goto label_1a9628;
            case 0x1A962Cu: goto label_1a962c;
            case 0x1A9630u: goto label_1a9630;
            case 0x1A9634u: goto label_1a9634;
            case 0x1A9638u: goto label_1a9638;
            case 0x1A963Cu: goto label_1a963c;
            case 0x1A9640u: goto label_1a9640;
            case 0x1A9644u: goto label_1a9644;
            case 0x1A9648u: goto label_1a9648;
            case 0x1A964Cu: goto label_1a964c;
            case 0x1A9650u: goto label_1a9650;
            case 0x1A9654u: goto label_1a9654;
            case 0x1A9658u: goto label_1a9658;
            case 0x1A965Cu: goto label_1a965c;
            case 0x1A9660u: goto label_1a9660;
            case 0x1A9664u: goto label_1a9664;
            case 0x1A9668u: goto label_1a9668;
            case 0x1A966Cu: goto label_1a966c;
            case 0x1A9670u: goto label_1a9670;
            case 0x1A9674u: goto label_1a9674;
            case 0x1A9678u: goto label_1a9678;
            case 0x1A967Cu: goto label_1a967c;
            case 0x1A9680u: goto label_1a9680;
            case 0x1A9684u: goto label_1a9684;
            case 0x1A9688u: goto label_1a9688;
            case 0x1A968Cu: goto label_1a968c;
            case 0x1A9690u: goto label_1a9690;
            case 0x1A9694u: goto label_1a9694;
            case 0x1A9698u: goto label_1a9698;
            case 0x1A969Cu: goto label_1a969c;
            case 0x1A96A0u: goto label_1a96a0;
            case 0x1A96A4u: goto label_1a96a4;
            case 0x1A96A8u: goto label_1a96a8;
            case 0x1A96ACu: goto label_1a96ac;
            case 0x1A96B0u: goto label_1a96b0;
            case 0x1A96B4u: goto label_1a96b4;
            case 0x1A96B8u: goto label_1a96b8;
            case 0x1A96BCu: goto label_1a96bc;
            case 0x1A96C0u: goto label_1a96c0;
            case 0x1A96C4u: goto label_1a96c4;
            case 0x1A96C8u: goto label_1a96c8;
            case 0x1A96CCu: goto label_1a96cc;
            case 0x1A96D0u: goto label_1a96d0;
            case 0x1A96D4u: goto label_1a96d4;
            case 0x1A96D8u: goto label_1a96d8;
            case 0x1A96DCu: goto label_1a96dc;
            case 0x1A96E0u: goto label_1a96e0;
            case 0x1A96E4u: goto label_1a96e4;
            case 0x1A96E8u: goto label_1a96e8;
            case 0x1A96ECu: goto label_1a96ec;
            case 0x1A96F0u: goto label_1a96f0;
            case 0x1A96F4u: goto label_1a96f4;
            case 0x1A96F8u: goto label_1a96f8;
            case 0x1A96FCu: goto label_1a96fc;
            case 0x1A9700u: goto label_1a9700;
            case 0x1A9704u: goto label_1a9704;
            case 0x1A9708u: goto label_1a9708;
            case 0x1A970Cu: goto label_1a970c;
            case 0x1A9710u: goto label_1a9710;
            case 0x1A9714u: goto label_1a9714;
            case 0x1A9718u: goto label_1a9718;
            case 0x1A971Cu: goto label_1a971c;
            case 0x1A9720u: goto label_1a9720;
            case 0x1A9724u: goto label_1a9724;
            case 0x1A9728u: goto label_1a9728;
            case 0x1A972Cu: goto label_1a972c;
            case 0x1A9730u: goto label_1a9730;
            case 0x1A9734u: goto label_1a9734;
            case 0x1A9738u: goto label_1a9738;
            case 0x1A973Cu: goto label_1a973c;
            case 0x1A9740u: goto label_1a9740;
            case 0x1A9744u: goto label_1a9744;
            case 0x1A9748u: goto label_1a9748;
            case 0x1A974Cu: goto label_1a974c;
            case 0x1A9750u: goto label_1a9750;
            case 0x1A9754u: goto label_1a9754;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a9750:
    ctx->pc = 0x1A9758u;
}
