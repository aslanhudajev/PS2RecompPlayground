#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_thermometer
// Address: 0x224560 - 0x224804
void init_thermometer_0x224560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224560u;

    // 0x224560: 0x27bdff60
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x224564: 0xffbf0090
    ctx->pc = 0x224564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x224568: 0xffbe0080
    ctx->pc = 0x224568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22456c: 0xffb70070
    ctx->pc = 0x22456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x224570: 0xffb60060
    ctx->pc = 0x224570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x224574: 0xffb50050
    ctx->pc = 0x224574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x224578: 0xffb40040
    ctx->pc = 0x224578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22457c: 0xffb30030
    ctx->pc = 0x22457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x224580: 0xffb20020
    ctx->pc = 0x224580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x224584: 0xffb10010
    ctx->pc = 0x224584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x224588: 0xffb00000
    ctx->pc = 0x224588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22458c: 0x3c03003c
    ctx->pc = 0x22458cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x224590: 0x3c02003c
    ctx->pc = 0x224590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x224594: 0xac401810
    ctx->pc = 0x224594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6160), GPR_U32(ctx, 0));
    // 0x224598: 0xac60180c
    ctx->pc = 0x224598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6156), GPR_U32(ctx, 0));
    // 0x22459c: 0x3c020031
    ctx->pc = 0x22459cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2245a0: 0x8c420018
    ctx->pc = 0x2245a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2245a4: 0x30424000
    ctx->pc = 0x2245a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
    // 0x2245a8: 0x10400029
    ctx->pc = 0x2245A8u;
    {
        const bool branch_taken_0x2245a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2245ACu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2245a8) {
            ctx->pc = 0x224650u;
            goto label_224650;
        }
    }
    ctx->pc = 0x2245B0u;
    // 0x2245b0: 0x3c020034
    ctx->pc = 0x2245b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2245b4: 0x8c42d1cc
    ctx->pc = 0x2245b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955468)));
    // 0x2245b8: 0x10400025
    ctx->pc = 0x2245B8u;
    {
        const bool branch_taken_0x2245b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2245BCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2245b8) {
            ctx->pc = 0x224650u;
            goto label_224650;
        }
    }
    ctx->pc = 0x2245C0u;
    // 0x2245c0: 0x241e2b00
    ctx->pc = 0x2245c0u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2245c4: 0x3c020032
    ctx->pc = 0x2245c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2245c8: 0x24571bc0
    ctx->pc = 0x2245c8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2245cc: 0x3c160034
    ctx->pc = 0x2245ccu;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x2245d0: 0x3c150034
    ctx->pc = 0x2245d0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x2245d4: 0x24140008
    ctx->pc = 0x2245d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2245d8: 0x241300b4
    ctx->pc = 0x2245d8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2245dc: 0x23e1018
    ctx->pc = 0x2245dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2245e0:
    // 0x2245e0: 0x578021
    ctx->pc = 0x2245e0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2245e4: 0x8ec2d1cc
    ctx->pc = 0x2245e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294955468)));
    // 0x2245e8: 0x8c420000
    ctx->pc = 0x2245e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2245ec: 0x220202d
    ctx->pc = 0x2245ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2245f0: 0xc09d9fe
    ctx->pc = 0x2245F0u;
    SET_GPR_U32(ctx, 31, 0x2245F8u);
    ctx->pc = 0x2245F4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->pc = 0x2767F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasRune_0x2767f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245F8u; }
    }
    if (ctx->pc != 0x2245F8u) { return; }
    ctx->pc = 0x2245F8u;
    // 0x2245f8: 0x10400003
    ctx->pc = 0x2245F8u;
    {
        const bool branch_taken_0x2245f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2245FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294961136)));
        if (branch_taken_0x2245f8) {
            ctx->pc = 0x224608u;
            goto label_224608;
        }
    }
    ctx->pc = 0x224600u;
    // 0x224600: 0x10000013
    ctx->pc = 0x224600u;
    {
        const bool branch_taken_0x224600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224604u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x224600) {
            ctx->pc = 0x224650u;
            goto label_224650;
        }
    }
    ctx->pc = 0x224608u;
label_224608:
    // 0x224608: 0x14540007
    ctx->pc = 0x224608u;
    {
        const bool branch_taken_0x224608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x224608) {
            ctx->pc = 0x224628u;
            goto label_224628;
        }
    }
    ctx->pc = 0x224610u;
    // 0x224610: 0x8e02000c
    ctx->pc = 0x224610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x224614: 0x531818
    ctx->pc = 0x224614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x224618: 0x701021
    ctx->pc = 0x224618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22461c: 0x94420cf8
    ctx->pc = 0x22461cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x224620: 0x10000006
    ctx->pc = 0x224620u;
    {
        const bool branch_taken_0x224620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x224624u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
        if (branch_taken_0x224620) {
            ctx->pc = 0x22463Cu;
            goto label_22463c;
        }
    }
    ctx->pc = 0x224628u;
label_224628:
    // 0x224628: 0xc09d592
    ctx->pc = 0x224628u;
    SET_GPR_U32(ctx, 31, 0x224630u);
    ctx->pc = 0x22462Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x275648u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldOrder_0x275648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224630u; }
    }
    if (ctx->pc != 0x224630u) { return; }
    ctx->pc = 0x224630u;
    // 0x224630: 0x220202d
    ctx->pc = 0x224630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224634: 0xc09da6e
    ctx->pc = 0x224634u;
    SET_GPR_U32(ctx, 31, 0x22463Cu);
    ctx->pc = 0x224638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2769B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerHasShard_0x2769b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22463Cu; }
    }
    if (ctx->pc != 0x22463Cu) { return; }
    ctx->pc = 0x22463Cu;
label_22463c:
    // 0x22463c: 0x2900b
    ctx->pc = 0x22463cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
    // 0x224640: 0x26310001
    ctx->pc = 0x224640u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x224644: 0x2a220004
    ctx->pc = 0x224644u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x224648: 0x1440ffe5
    ctx->pc = 0x224648u;
    {
        const bool branch_taken_0x224648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22464Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x224648) {
            ctx->pc = 0x2245E0u;
            goto label_2245e0;
        }
    }
    ctx->pc = 0x224650u;
label_224650:
    // 0x224650: 0x202d
    ctx->pc = 0x224650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224654: 0x282d
    ctx->pc = 0x224654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224658: 0x24060188
    ctx->pc = 0x224658u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 392));
    // 0x22465c: 0x2407ffff
    ctx->pc = 0x22465cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224660: 0x2408ffff
    ctx->pc = 0x224660u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224664: 0xc0b0b54
    ctx->pc = 0x224664u;
    SET_GPR_U32(ctx, 31, 0x22466Cu);
    ctx->pc = 0x224668u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22466Cu; }
    }
    if (ctx->pc != 0x22466Cu) { return; }
    ctx->pc = 0x22466Cu;
    // 0x22466c: 0x3c100032
    ctx->pc = 0x22466cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x224670: 0x261108a8
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2216));
    // 0x224674: 0xae0208a8
    ctx->pc = 0x224674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2216), GPR_U32(ctx, 2));
    // 0x224678: 0x202d
    ctx->pc = 0x224678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22467c: 0x282d
    ctx->pc = 0x22467cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224680: 0x24060188
    ctx->pc = 0x224680u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 392));
    // 0x224684: 0x2407ffff
    ctx->pc = 0x224684u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224688: 0x2408ffff
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22468c: 0xc0b0b54
    ctx->pc = 0x22468Cu;
    SET_GPR_U32(ctx, 31, 0x224694u);
    ctx->pc = 0x224690u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224694u; }
    }
    if (ctx->pc != 0x224694u) { return; }
    ctx->pc = 0x224694u;
    // 0x224694: 0xae220004
    ctx->pc = 0x224694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x224698: 0x3c014779
    ctx->pc = 0x224698u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x22469c: 0x3421a800
    ctx->pc = 0x22469cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 43008));
    // 0x2246a0: 0x44816000
    ctx->pc = 0x2246a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2246a4: 0xc0b0dd6
    ctx->pc = 0x2246A4u;
    SET_GPR_U32(ctx, 31, 0x2246ACu);
    ctx->pc = 0x2246A8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2216)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246ACu; }
    }
    if (ctx->pc != 0x2246ACu) { return; }
    ctx->pc = 0x2246ACu;
    // 0x2246ac: 0x3c014779
    ctx->pc = 0x2246acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x2246b0: 0x3421a700
    ctx->pc = 0x2246b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 42752));
    // 0x2246b4: 0x44816000
    ctx->pc = 0x2246b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2246b8: 0xc0b0dd6
    ctx->pc = 0x2246B8u;
    SET_GPR_U32(ctx, 31, 0x2246C0u);
    ctx->pc = 0x2246BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246C0u; }
    }
    if (ctx->pc != 0x2246C0u) { return; }
    ctx->pc = 0x2246C0u;
    // 0x2246c0: 0x8e0408a8
    ctx->pc = 0x2246c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2216)));
    // 0x2246c4: 0xc0b0ce8
    ctx->pc = 0x2246C4u;
    SET_GPR_U32(ctx, 31, 0x2246CCu);
    ctx->pc = 0x2246C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246CCu; }
    }
    if (ctx->pc != 0x2246CCu) { return; }
    ctx->pc = 0x2246CCu;
    // 0x2246cc: 0x8e240004
    ctx->pc = 0x2246ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2246d0: 0xc0b0ce8
    ctx->pc = 0x2246D0u;
    SET_GPR_U32(ctx, 31, 0x2246D8u);
    ctx->pc = 0x2246D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246D8u; }
    }
    if (ctx->pc != 0x2246D8u) { return; }
    ctx->pc = 0x2246D8u;
    // 0x2246d8: 0x3c04003a
    ctx->pc = 0x2246d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2246dc: 0x24846a60
    ctx->pc = 0x2246dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27232));
    // 0x2246e0: 0x282d
    ctx->pc = 0x2246e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246e4: 0xc0b1ba8
    ctx->pc = 0x2246E4u;
    SET_GPR_U32(ctx, 31, 0x2246ECu);
    ctx->pc = 0x2246E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246ECu; }
    }
    if (ctx->pc != 0x2246ECu) { return; }
    ctx->pc = 0x2246ECu;
    // 0x2246ec: 0x8e0408a8
    ctx->pc = 0x2246ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2216)));
    // 0x2246f0: 0x40282d
    ctx->pc = 0x2246f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2246f4: 0xc0b0ed6
    ctx->pc = 0x2246F4u;
    SET_GPR_U32(ctx, 31, 0x2246FCu);
    ctx->pc = 0x2246F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2246FCu; }
    }
    if (ctx->pc != 0x2246FCu) { return; }
    ctx->pc = 0x2246FCu;
    // 0x2246fc: 0x3c04003a
    ctx->pc = 0x2246fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x224700: 0x24846a70
    ctx->pc = 0x224700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27248));
    // 0x224704: 0x282d
    ctx->pc = 0x224704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224708: 0xc0b1ba8
    ctx->pc = 0x224708u;
    SET_GPR_U32(ctx, 31, 0x224710u);
    ctx->pc = 0x22470Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224710u; }
    }
    if (ctx->pc != 0x224710u) { return; }
    ctx->pc = 0x224710u;
    // 0x224710: 0x8e240004
    ctx->pc = 0x224710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x224714: 0x40282d
    ctx->pc = 0x224714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224718: 0xc0b0ed6
    ctx->pc = 0x224718u;
    SET_GPR_U32(ctx, 31, 0x224720u);
    ctx->pc = 0x22471Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224720u; }
    }
    if (ctx->pc != 0x224720u) { return; }
    ctx->pc = 0x224720u;
    // 0x224720: 0x8e240004
    ctx->pc = 0x224720u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x224724: 0x3c01bf80
    ctx->pc = 0x224724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x224728: 0x44816000
    ctx->pc = 0x224728u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22472c: 0x3c013f4a
    ctx->pc = 0x22472cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16202 << 16));
    // 0x224730: 0x44817000
    ctx->pc = 0x224730u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x224734: 0x3c013f80
    ctx->pc = 0x224734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x224738: 0x44817800
    ctx->pc = 0x224738u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x22473c: 0xc0b0e6a
    ctx->pc = 0x22473Cu;
    SET_GPR_U32(ctx, 31, 0x224744u);
    ctx->pc = 0x224740u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224744u; }
    }
    if (ctx->pc != 0x224744u) { return; }
    ctx->pc = 0x224744u;
    // 0x224744: 0x8e240004
    ctx->pc = 0x224744u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x224748: 0x282d
    ctx->pc = 0x224748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22474c: 0xc0b0cf6
    ctx->pc = 0x22474Cu;
    SET_GPR_U32(ctx, 31, 0x224754u);
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224754u; }
    }
    if (ctx->pc != 0x224754u) { return; }
    ctx->pc = 0x224754u;
    // 0x224754: 0x3c020032
    ctx->pc = 0x224754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224758: 0x2442f9f8
    ctx->pc = 0x224758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x22475c: 0xc44c0030
    ctx->pc = 0x22475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224760: 0xc4410034
    ctx->pc = 0x224760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224764: 0xc4420038
    ctx->pc = 0x224764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224768: 0x3c020032
    ctx->pc = 0x224768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22476c: 0x460c6002
    ctx->pc = 0x22476cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x224770: 0x46010842
    ctx->pc = 0x224770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x224774: 0x46010000
    ctx->pc = 0x224774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224778: 0x46021082
    ctx->pc = 0x224778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22477c: 0x46020000
    ctx->pc = 0x22477cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x224780: 0x0
    ctx->pc = 0x224780u;
    // NOP
    // 0x224784: 0x0
    ctx->pc = 0x224784u;
    // NOP
    // 0x224788: 0x46000004
    ctx->pc = 0x224788u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x22478c: 0x46000032
    ctx->pc = 0x22478cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224790: 0x0
    ctx->pc = 0x224790u;
    // NOP
    // 0x224794: 0x45010005
    ctx->pc = 0x224794u;
    {
        const bool branch_taken_0x224794 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x224798u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 1800));
        if (branch_taken_0x224794) {
            ctx->pc = 0x2247ACu;
            goto label_2247ac;
        }
    }
    ctx->pc = 0x22479Cu;
    // 0x22479c: 0x460c6302
    ctx->pc = 0x22479cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2247a0: 0x46016300
    ctx->pc = 0x2247a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2247a4: 0xc0ba284
    ctx->pc = 0x2247A4u;
    SET_GPR_U32(ctx, 31, 0x2247ACu);
    ctx->pc = 0x2247A8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2247ACu; }
    }
    if (ctx->pc != 0x2247ACu) { return; }
    ctx->pc = 0x2247ACu;
label_2247ac:
    // 0x2247ac: 0x3c013f33
    ctx->pc = 0x2247acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16179 << 16));
    // 0x2247b0: 0x34213333
    ctx->pc = 0x2247b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x2247b4: 0x44810800
    ctx->pc = 0x2247b4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2247b8: 0x46010042
    ctx->pc = 0x2247b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2247bc: 0x3c013f80
    ctx->pc = 0x2247bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2247c0: 0x44810000
    ctx->pc = 0x2247c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2247c4: 0x0
    ctx->pc = 0x2247c4u;
    // NOP
    // 0x2247c8: 0x0
    ctx->pc = 0x2247c8u;
    // NOP
    // 0x2247cc: 0x46010003
    ctx->pc = 0x2247ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2247d0: 0xe6000000
    ctx->pc = 0x2247d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2247d4: 0xdfbf0090
    ctx->pc = 0x2247d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2247d8: 0xdfbe0080
    ctx->pc = 0x2247d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2247dc: 0xdfb70070
    ctx->pc = 0x2247dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2247e0: 0xdfb60060
    ctx->pc = 0x2247e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2247e4: 0xdfb50050
    ctx->pc = 0x2247e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2247e8: 0xdfb40040
    ctx->pc = 0x2247e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2247ec: 0xdfb30030
    ctx->pc = 0x2247ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2247f0: 0xdfb20020
    ctx->pc = 0x2247f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2247f4: 0xdfb10010
    ctx->pc = 0x2247f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2247f8: 0xdfb00000
    ctx->pc = 0x2247f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2247fc: 0x3e00008
    ctx->pc = 0x2247FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224800u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2245E0u: goto label_2245e0;
            case 0x224608u: goto label_224608;
            case 0x224628u: goto label_224628;
            case 0x22463Cu: goto label_22463c;
            case 0x224650u: goto label_224650;
            case 0x2247ACu: goto label_2247ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224804u;
}
