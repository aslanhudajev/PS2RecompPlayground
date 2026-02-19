#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateCam
// Address: 0x2160a8 - 0x21629c
void UpdateCam_0x2160a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2160a8u;

    // 0x2160a8: 0x27bdff90
    ctx->pc = 0x2160a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2160ac: 0xffbf0060
    ctx->pc = 0x2160acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2160b0: 0xffb30050
    ctx->pc = 0x2160b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2160b4: 0xffb20040
    ctx->pc = 0x2160b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2160b8: 0xffb10030
    ctx->pc = 0x2160b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2160bc: 0xffb00020
    ctx->pc = 0x2160bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2160c0: 0x80882d
    ctx->pc = 0x2160c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160c4: 0x3a0202d
    ctx->pc = 0x2160c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160c8: 0xc085216
    ctx->pc = 0x2160C8u;
    SET_GPR_U32(ctx, 31, 0x2160D0u);
    ctx->pc = 0x2160CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x214858u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamGetPlayerAvgPos_0x214858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2160D0u; }
    }
    if (ctx->pc != 0x2160D0u) { return; }
    ctx->pc = 0x2160D0u;
    // 0x2160d0: 0x54400003
    ctx->pc = 0x2160D0u;
    {
        const bool branch_taken_0x2160d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2160d0) {
            ctx->pc = 0x2160D4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 420)));
            ctx->pc = 0x2160E0u;
            goto label_2160e0;
        }
    }
    ctx->pc = 0x2160D8u;
    // 0x2160d8: 0x10000069
    ctx->pc = 0x2160D8u;
    {
        const bool branch_taken_0x2160d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2160DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2160d8) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x2160E0u;
label_2160e0:
    // 0x2160e0: 0x24630001
    ctx->pc = 0x2160e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2160e4: 0x3c020032
    ctx->pc = 0x2160e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2160e8: 0x8c42f778
    ctx->pc = 0x2160e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965112)));
    // 0x2160ec: 0x62001a
    ctx->pc = 0x2160ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2160f0: 0x1810
    ctx->pc = 0x2160f0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2160f4: 0x50400001
    ctx->pc = 0x2160F4u;
    {
        const bool branch_taken_0x2160f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2160f4) {
            ctx->pc = 0x2160F8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2160FCu;
            goto label_2160fc;
        }
    }
    ctx->pc = 0x2160FCu;
label_2160fc:
    // 0x2160fc: 0xae2301a4
    ctx->pc = 0x2160fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 3));
    // 0x216100: 0x2404000c
    ctx->pc = 0x216100u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    // 0x216104: 0x641018
    ctx->pc = 0x216104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x216108: 0x511821
    ctx->pc = 0x216108u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21610c: 0xc7a00000
    ctx->pc = 0x21610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216110: 0xe4600114
    ctx->pc = 0x216110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
    // 0x216114: 0x8e2201a4
    ctx->pc = 0x216114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x216118: 0x441818
    ctx->pc = 0x216118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21611c: 0x711021
    ctx->pc = 0x21611cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x216120: 0xc7a00004
    ctx->pc = 0x216120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216124: 0xe4400118
    ctx->pc = 0x216124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x216128: 0x8e2201a4
    ctx->pc = 0x216128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x21612c: 0x441818
    ctx->pc = 0x21612cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x216130: 0x711021
    ctx->pc = 0x216130u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x216134: 0xc7a00008
    ctx->pc = 0x216134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216138: 0xe440011c
    ctx->pc = 0x216138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x21613c: 0x3a0202d
    ctx->pc = 0x21613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216140: 0xc085216
    ctx->pc = 0x216140u;
    SET_GPR_U32(ctx, 31, 0x216148u);
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x214858u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamGetPlayerAvgPos_0x214858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216148u; }
    }
    if (ctx->pc != 0x216148u) { return; }
    ctx->pc = 0x216148u;
    // 0x216148: 0xc0850f8
    ctx->pc = 0x216148u;
    SET_GPR_U32(ctx, 31, 0x216150u);
    ctx->pc = 0x21614Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2143E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetTransmitter3D_0x2143e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216150u; }
    }
    if (ctx->pc != 0x216150u) { return; }
    ctx->pc = 0x216150u;
    // 0x216150: 0xc08560a
    ctx->pc = 0x216150u;
    SET_GPR_U32(ctx, 31, 0x216158u);
    ctx->pc = 0x216154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x215828u;
    {
        const uint32_t __entryPc = ctx->pc;
        CurTransmitterBlink_0x215828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216158u; }
    }
    if (ctx->pc != 0x216158u) { return; }
    ctx->pc = 0x216158u;
    // 0x216158: 0xc08564e
    ctx->pc = 0x216158u;
    SET_GPR_U32(ctx, 31, 0x216160u);
    ctx->pc = 0x21615Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x215938u;
    {
        const uint32_t __entryPc = ctx->pc;
        StdCamMoveAvgArrow_0x215938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216160u; }
    }
    if (ctx->pc != 0x216160u) { return; }
    ctx->pc = 0x216160u;
    // 0x216160: 0x200202d
    ctx->pc = 0x216160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216164: 0x27a50010
    ctx->pc = 0x216164u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x216168: 0xc0858a8
    ctx->pc = 0x216168u;
    SET_GPR_U32(ctx, 31, 0x216170u);
    ctx->pc = 0x21616Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x2162A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransGetYawPitch_0x2162a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216170u; }
    }
    if (ctx->pc != 0x216170u) { return; }
    ctx->pc = 0x216170u;
    // 0x216170: 0x220202d
    ctx->pc = 0x216170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216174: 0xc7ac0010
    ctx->pc = 0x216174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x216178: 0xc084f28
    ctx->pc = 0x216178u;
    SET_GPR_U32(ctx, 31, 0x216180u);
    ctx->pc = 0x21617Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x213CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitYawPitch_0x213ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216180u; }
    }
    if (ctx->pc != 0x216180u) { return; }
    ctx->pc = 0x216180u;
    // 0x216180: 0x40982d
    ctx->pc = 0x216180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216184: 0x220202d
    ctx->pc = 0x216184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216188: 0x3c050032
    ctx->pc = 0x216188u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x21618c: 0xc084fd8
    ctx->pc = 0x21618Cu;
    SET_GPR_U32(ctx, 31, 0x216194u);
    ctx->pc = 0x216190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965128));
    ctx->pc = 0x213F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitTranslate_0x213f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216194u; }
    }
    if (ctx->pc != 0x216194u) { return; }
    ctx->pc = 0x216194u;
    // 0x216194: 0x40902d
    ctx->pc = 0x216194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216198: 0x3c020031
    ctx->pc = 0x216198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x21619c: 0x8c43002c
    ctx->pc = 0x21619cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2161a0: 0x24020001
    ctx->pc = 0x2161a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2161a4: 0x5462000d
    ctx->pc = 0x2161A4u;
    {
        const bool branch_taken_0x2161a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2161a4) {
            ctx->pc = 0x2161A8u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x2161DCu;
            goto label_2161dc;
        }
    }
    ctx->pc = 0x2161ACu;
    // 0x2161ac: 0x3c020032
    ctx->pc = 0x2161acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2161b0: 0x8c42f7e0
    ctx->pc = 0x2161b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965216)));
    // 0x2161b4: 0x54400009
    ctx->pc = 0x2161B4u;
    {
        const bool branch_taken_0x2161b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2161b4) {
            ctx->pc = 0x2161B8u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x2161DCu;
            goto label_2161dc;
        }
    }
    ctx->pc = 0x2161BCu;
    // 0x2161bc: 0x3c020034
    ctx->pc = 0x2161bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2161c0: 0x8c42e7c8
    ctx->pc = 0x2161c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2161c4: 0x8c420060
    ctx->pc = 0x2161c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2161c8: 0x3c030032
    ctx->pc = 0x2161c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2161cc: 0xc440002c
    ctx->pc = 0x2161ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2161d0: 0xc461f7ac
    ctx->pc = 0x2161d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2161d4: 0x1000000d
    ctx->pc = 0x2161D4u;
    {
        const bool branch_taken_0x2161d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2161D8u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2161d4) {
            ctx->pc = 0x21620Cu;
            goto label_21620c;
        }
    }
    ctx->pc = 0x2161DCu;
label_2161dc:
    // 0x2161dc: 0x54400009
    ctx->pc = 0x2161DCu;
    {
        const bool branch_taken_0x2161dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2161dc) {
            ctx->pc = 0x2161E0u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->pc = 0x216204u;
            goto label_216204;
        }
    }
    ctx->pc = 0x2161E4u;
    // 0x2161e4: 0x3c020034
    ctx->pc = 0x2161e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2161e8: 0x8c42e7c8
    ctx->pc = 0x2161e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2161ec: 0x8c420060
    ctx->pc = 0x2161ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2161f0: 0x3c030032
    ctx->pc = 0x2161f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2161f4: 0xc4400030
    ctx->pc = 0x2161f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2161f8: 0xc461f7a8
    ctx->pc = 0x2161f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2161fc: 0x10000003
    ctx->pc = 0x2161FCu;
    {
        const bool branch_taken_0x2161fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216200u;
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2161fc) {
            ctx->pc = 0x21620Cu;
            goto label_21620c;
        }
    }
    ctx->pc = 0x216204u;
label_216204:
    // 0x216204: 0x44820000
    ctx->pc = 0x216204u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x216208: 0x46800020
    ctx->pc = 0x216208u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_21620c:
    // 0x21620c: 0xe62000dc
    ctx->pc = 0x21620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x216210: 0x8e2501a4
    ctx->pc = 0x216210u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x216214: 0x2402000c
    ctx->pc = 0x216214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x216218: 0xa22818
    ctx->pc = 0x216218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21621c: 0x24a50114
    ctx->pc = 0x21621cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 276));
    // 0x216220: 0x262400e0
    ctx->pc = 0x216220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 224));
    // 0x216224: 0x2252821
    ctx->pc = 0x216224u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x216228: 0xc62c00ec
    ctx->pc = 0x216228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21622c: 0x26260040
    ctx->pc = 0x21622cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 64));
    // 0x216230: 0xc0854e2
    ctx->pc = 0x216230u;
    SET_GPR_U32(ctx, 31, 0x216238u);
    ctx->pc = 0x216234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x215388u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcDist_0x215388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216238u; }
    }
    if (ctx->pc != 0x216238u) { return; }
    ctx->pc = 0x216238u;
    // 0x216238: 0x8e2201a4
    ctx->pc = 0x216238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x21623c: 0x21080
    ctx->pc = 0x21623cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x216240: 0x2221021
    ctx->pc = 0x216240u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x216244: 0xe4400180
    ctx->pc = 0x216244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x216248: 0x3c020032
    ctx->pc = 0x216248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21624c: 0x220202d
    ctx->pc = 0x21624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216250: 0xc0855b0
    ctx->pc = 0x216250u;
    SET_GPR_U32(ctx, 31, 0x216258u);
    ctx->pc = 0x216254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2156C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitDist_0x2156c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216258u; }
    }
    if (ctx->pc != 0x216258u) { return; }
    ctx->pc = 0x216258u;
    // 0x216258: 0x40802d
    ctx->pc = 0x216258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21625c: 0xc08504a
    ctx->pc = 0x21625Cu;
    SET_GPR_U32(ctx, 31, 0x216264u);
    ctx->pc = 0x216260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214128u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamUpdate_0x214128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216264u; }
    }
    if (ctx->pc != 0x216264u) { return; }
    ctx->pc = 0x216264u;
    // 0x216264: 0x16000005
    ctx->pc = 0x216264u;
    {
        const bool branch_taken_0x216264 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x216268u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x216264) {
            ctx->pc = 0x21627Cu;
            goto label_21627c;
        }
    }
    ctx->pc = 0x21626Cu;
    // 0x21626c: 0x56600004
    ctx->pc = 0x21626Cu;
    {
        const bool branch_taken_0x21626c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x21626c) {
            ctx->pc = 0x216270u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216274u;
    // 0x216274: 0x12400003
    ctx->pc = 0x216274u;
    {
        const bool branch_taken_0x216274 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x216278u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x216274) {
            ctx->pc = 0x216284u;
            goto label_216284;
        }
    }
    ctx->pc = 0x21627Cu;
label_21627c:
    // 0x21627c: 0x24020001
    ctx->pc = 0x21627cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_216280:
    // 0x216280: 0xdfbf0060
    ctx->pc = 0x216280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_216284:
    // 0x216284: 0xdfb30050
    ctx->pc = 0x216284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216288: 0xdfb20040
    ctx->pc = 0x216288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21628c: 0xdfb10030
    ctx->pc = 0x21628cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216290: 0xdfb00020
    ctx->pc = 0x216290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216294: 0x3e00008
    ctx->pc = 0x216294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2160E0u: goto label_2160e0;
            case 0x2160FCu: goto label_2160fc;
            case 0x2161DCu: goto label_2161dc;
            case 0x216204u: goto label_216204;
            case 0x21620Cu: goto label_21620c;
            case 0x21627Cu: goto label_21627c;
            case 0x216280u: goto label_216280;
            case 0x216284u: goto label_216284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21629Cu;
}
