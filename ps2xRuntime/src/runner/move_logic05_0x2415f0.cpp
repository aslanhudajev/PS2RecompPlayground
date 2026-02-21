#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic05
// Address: 0x2415f0 - 0x24199c
void move_logic05_0x2415f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2415f0u;

    // 0x2415f0: 0x27bdff80
    ctx->pc = 0x2415f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2415f4: 0xffbf0060
    ctx->pc = 0x2415f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2415f8: 0xffb10050
    ctx->pc = 0x2415f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2415fc: 0xffb00040
    ctx->pc = 0x2415fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x241600: 0xe7b50078
    ctx->pc = 0x241600u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x241604: 0xe7b40070
    ctx->pc = 0x241604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x241608: 0x80882d
    ctx->pc = 0x241608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24160c: 0x240303b0
    ctx->pc = 0x24160cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x241610: 0x2231818
    ctx->pc = 0x241610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x241614: 0x3c020033
    ctx->pc = 0x241614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x241618: 0x2442dfd0
    ctx->pc = 0x241618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x24161c: 0x628021
    ctx->pc = 0x24161cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241620: 0xc614024c
    ctx->pc = 0x241620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241624: 0x3c03003c
    ctx->pc = 0x241624u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x241628: 0x24631bb8
    ctx->pc = 0x241628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x24162c: 0x8e020000
    ctx->pc = 0x24162cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x241630: 0x21080
    ctx->pc = 0x241630u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x241634: 0x431021
    ctx->pc = 0x241634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241638: 0xc08ed18
    ctx->pc = 0x241638u;
    SET_GPR_U32(ctx, 31, 0x241640u);
    ctx->pc = 0x24163Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241640u; }
    }
    if (ctx->pc != 0x241640u) { return; }
    ctx->pc = 0x241640u;
    // 0x241640: 0x10400006
    ctx->pc = 0x241640u;
    {
        const bool branch_taken_0x241640 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x241644u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x241640) {
            ctx->pc = 0x24165Cu;
            goto label_24165c;
        }
    }
    ctx->pc = 0x241648u;
    // 0x241648: 0xa6020324
    ctx->pc = 0x241648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x24164c: 0xc09095a
    ctx->pc = 0x24164Cu;
    SET_GPR_U32(ctx, 31, 0x241654u);
    ctx->pc = 0x241650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241654u; }
    }
    if (ctx->pc != 0x241654u) { return; }
    ctx->pc = 0x241654u;
    // 0x241654: 0x100000cb
    ctx->pc = 0x241654u;
    {
        const bool branch_taken_0x241654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241658u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x241654) {
            ctx->pc = 0x241984u;
            goto label_241984;
        }
    }
    ctx->pc = 0x24165Cu;
label_24165c:
    // 0x24165c: 0x40034800
    ctx->pc = 0x24165cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241660: 0x3c02003a
    ctx->pc = 0x241660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x241664: 0x8c4221d0
    ctx->pc = 0x241664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241668: 0xac4301b8
    ctx->pc = 0x241668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 3));
    // 0x24166c: 0x86030324
    ctx->pc = 0x24166cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x241670: 0x86020328
    ctx->pc = 0x241670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x241674: 0x50620004
    ctx->pc = 0x241674u;
    {
        const bool branch_taken_0x241674 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x241674) {
            ctx->pc = 0x241678u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x241688u;
            goto label_241688;
        }
    }
    ctx->pc = 0x24167Cu;
    // 0x24167c: 0xc08e210
    ctx->pc = 0x24167Cu;
    SET_GPR_U32(ctx, 31, 0x241684u);
    ctx->pc = 0x241680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241684u; }
    }
    if (ctx->pc != 0x241684u) { return; }
    ctx->pc = 0x241684u;
    // 0x241684: 0x8e03036c
    ctx->pc = 0x241684u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_241688:
    // 0x241688: 0x18600029
    ctx->pc = 0x241688u;
    {
        const bool branch_taken_0x241688 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x24168Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x241688) {
            ctx->pc = 0x241730u;
            goto label_241730;
        }
    }
    ctx->pc = 0x241690u;
    // 0x241690: 0x8c42ffbc
    ctx->pc = 0x241690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x241694: 0x621023
    ctx->pc = 0x241694u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241698: 0x1c400025
    ctx->pc = 0x241698u;
    {
        const bool branch_taken_0x241698 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x24169Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x241698) {
            ctx->pc = 0x241730u;
            goto label_241730;
        }
    }
    ctx->pc = 0x2416A0u;
    // 0x2416a0: 0xc6000260
    ctx->pc = 0x2416a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2416a4: 0x3c013fc9
    ctx->pc = 0x2416a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2416a8: 0x34210fdb
    ctx->pc = 0x2416a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2416ac: 0x44810800
    ctx->pc = 0x2416acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2416b0: 0x46010041
    ctx->pc = 0x2416b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2416b4: 0x3c014049
    ctx->pc = 0x2416b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2416b8: 0x34210fdb
    ctx->pc = 0x2416b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2416bc: 0x44810000
    ctx->pc = 0x2416bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2416c0: 0x46010034
    ctx->pc = 0x2416c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2416c4: 0x0
    ctx->pc = 0x2416c4u;
    // NOP
    // 0x2416c8: 0x45000006
    ctx->pc = 0x2416C8u;
    {
        const bool branch_taken_0x2416c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2416CCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x2416c8) {
            ctx->pc = 0x2416E4u;
            goto label_2416e4;
        }
    }
    ctx->pc = 0x2416D0u;
    // 0x2416d0: 0x3c0140c9
    ctx->pc = 0x2416d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2416d4: 0x34210fdb
    ctx->pc = 0x2416d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2416d8: 0x44810000
    ctx->pc = 0x2416d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2416dc: 0x1000000d
    ctx->pc = 0x2416DCu;
    {
        const bool branch_taken_0x2416dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2416E0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2416dc) {
            ctx->pc = 0x241714u;
            goto label_241714;
        }
    }
    ctx->pc = 0x2416E4u;
label_2416e4:
    // 0x2416e4: 0xc6010260
    ctx->pc = 0x2416e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2416e8: 0x3c01c049
    ctx->pc = 0x2416e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2416ec: 0x34210fdb
    ctx->pc = 0x2416ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2416f0: 0x44810000
    ctx->pc = 0x2416f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2416f4: 0x46000836
    ctx->pc = 0x2416f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2416f8: 0x0
    ctx->pc = 0x2416f8u;
    // NOP
    // 0x2416fc: 0x45020005
    ctx->pc = 0x2416FCu;
    {
        const bool branch_taken_0x2416fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2416fc) {
            ctx->pc = 0x241700u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x241714u;
            goto label_241714;
        }
    }
    ctx->pc = 0x241704u;
    // 0x241704: 0x3c0140c9
    ctx->pc = 0x241704u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241708: 0x34210fdb
    ctx->pc = 0x241708u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x24170c: 0x44810000
    ctx->pc = 0x24170cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241710: 0x46000800
    ctx->pc = 0x241710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_241714:
    // 0x241714: 0xe6000260
    ctx->pc = 0x241714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241718: 0x8e020370
    ctx->pc = 0x241718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x24171c: 0x24420001
    ctx->pc = 0x24171cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x241720: 0xae020370
    ctx->pc = 0x241720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 2));
    // 0x241724: 0x28420004
    ctx->pc = 0x241724u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x241728: 0x50400001
    ctx->pc = 0x241728u;
    {
        const bool branch_taken_0x241728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x241728) {
            ctx->pc = 0x24172Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
            ctx->pc = 0x241730u;
            goto label_241730;
        }
    }
    ctx->pc = 0x241730u;
label_241730:
    // 0x241730: 0xc6040040
    ctx->pc = 0x241730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x241734: 0xe7a40010
    ctx->pc = 0x241734u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x241738: 0xc6020044
    ctx->pc = 0x241738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24173c: 0xc6030048
    ctx->pc = 0x24173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x241740: 0xe7a30018
    ctx->pc = 0x241740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x241744: 0xc600024c
    ctx->pc = 0x241744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241748: 0x3c013dcc
    ctx->pc = 0x241748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x24174c: 0x3421cccd
    ctx->pc = 0x24174cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x241750: 0x44810800
    ctx->pc = 0x241750u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x241754: 0x46010000
    ctx->pc = 0x241754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241758: 0x46020000
    ctx->pc = 0x241758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24175c: 0xe7a00014
    ctx->pc = 0x24175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x241760: 0xe7a40020
    ctx->pc = 0x241760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x241764: 0xe7a00024
    ctx->pc = 0x241764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x241768: 0xe7a30028
    ctx->pc = 0x241768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24176c: 0x3c013f00
    ctx->pc = 0x24176cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x241770: 0x44810000
    ctx->pc = 0x241770u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241774: 0x4600a500
    ctx->pc = 0x241774u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x241778: 0xc0b9e4a
    ctx->pc = 0x241778u;
    SET_GPR_U32(ctx, 31, 0x241780u);
    ctx->pc = 0x24177Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241780u; }
    }
    if (ctx->pc != 0x241780u) { return; }
    ctx->pc = 0x241780u;
    // 0x241780: 0x46140002
    ctx->pc = 0x241780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x241784: 0xc7a10020
    ctx->pc = 0x241784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241788: 0x46010000
    ctx->pc = 0x241788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24178c: 0xe7a00020
    ctx->pc = 0x24178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x241790: 0xc0b9dce
    ctx->pc = 0x241790u;
    SET_GPR_U32(ctx, 31, 0x241798u);
    ctx->pc = 0x241794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241798u; }
    }
    if (ctx->pc != 0x241798u) { return; }
    ctx->pc = 0x241798u;
    // 0x241798: 0x46140002
    ctx->pc = 0x241798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24179c: 0xc7a10028
    ctx->pc = 0x24179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2417a0: 0x46010000
    ctx->pc = 0x2417a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2417a4: 0xe7a00028
    ctx->pc = 0x2417a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2417a8: 0x27a40010
    ctx->pc = 0x2417a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2417ac: 0x27a50020
    ctx->pc = 0x2417acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2417b0: 0x302d
    ctx->pc = 0x2417b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2417b4: 0xc087b72
    ctx->pc = 0x2417B4u;
    SET_GPR_U32(ctx, 31, 0x2417BCu);
    ctx->pc = 0x2417B8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EDC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FastWallCollide_0x21edc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2417BCu; }
    }
    if (ctx->pc != 0x2417BCu) { return; }
    ctx->pc = 0x2417BCu;
    // 0x2417bc: 0x10400024
    ctx->pc = 0x2417BCu;
    {
        const bool branch_taken_0x2417bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2417C0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2417bc) {
            ctx->pc = 0x241850u;
            goto label_241850;
        }
    }
    ctx->pc = 0x2417C4u;
    // 0x2417c4: 0xc6000260
    ctx->pc = 0x2417c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2417c8: 0x3c013fc9
    ctx->pc = 0x2417c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2417cc: 0x34210fdb
    ctx->pc = 0x2417ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2417d0: 0x44810800
    ctx->pc = 0x2417d0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2417d4: 0x46010041
    ctx->pc = 0x2417d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2417d8: 0x3c014049
    ctx->pc = 0x2417d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2417dc: 0x34210fdb
    ctx->pc = 0x2417dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2417e0: 0x44810000
    ctx->pc = 0x2417e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2417e4: 0x46010034
    ctx->pc = 0x2417e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2417e8: 0x0
    ctx->pc = 0x2417e8u;
    // NOP
    // 0x2417ec: 0x45000006
    ctx->pc = 0x2417ECu;
    {
        const bool branch_taken_0x2417ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2417F0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x2417ec) {
            ctx->pc = 0x241808u;
            goto label_241808;
        }
    }
    ctx->pc = 0x2417F4u;
    // 0x2417f4: 0x3c0140c9
    ctx->pc = 0x2417f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2417f8: 0x34210fdb
    ctx->pc = 0x2417f8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2417fc: 0x44810000
    ctx->pc = 0x2417fcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241800: 0x1000000d
    ctx->pc = 0x241800u;
    {
        const bool branch_taken_0x241800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x241804u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x241800) {
            ctx->pc = 0x241838u;
            goto label_241838;
        }
    }
    ctx->pc = 0x241808u;
label_241808:
    // 0x241808: 0xc6010260
    ctx->pc = 0x241808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24180c: 0x3c01c049
    ctx->pc = 0x24180cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x241810: 0x34210fdb
    ctx->pc = 0x241810u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241814: 0x44810000
    ctx->pc = 0x241814u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241818: 0x46000836
    ctx->pc = 0x241818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24181c: 0x0
    ctx->pc = 0x24181cu;
    // NOP
    // 0x241820: 0x45020005
    ctx->pc = 0x241820u;
    {
        const bool branch_taken_0x241820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241820) {
            ctx->pc = 0x241824u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x241838u;
            goto label_241838;
        }
    }
    ctx->pc = 0x241828u;
    // 0x241828: 0x3c0140c9
    ctx->pc = 0x241828u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x24182c: 0x34210fdb
    ctx->pc = 0x24182cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241830: 0x44810000
    ctx->pc = 0x241830u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241834: 0x46000800
    ctx->pc = 0x241834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_241838:
    // 0x241838: 0xe6000260
    ctx->pc = 0x241838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x24183c: 0x220202d
    ctx->pc = 0x24183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241840: 0xc08efc2
    ctx->pc = 0x241840u;
    SET_GPR_U32(ctx, 31, 0x241848u);
    ctx->pc = 0x241844u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241848u; }
    }
    if (ctx->pc != 0x241848u) { return; }
    ctx->pc = 0x241848u;
    // 0x241848: 0x10000039
    ctx->pc = 0x241848u;
    {
        const bool branch_taken_0x241848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24184Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x241848) {
            ctx->pc = 0x241930u;
            goto label_241930;
        }
    }
    ctx->pc = 0x241850u;
label_241850:
    // 0x241850: 0xe7a00000
    ctx->pc = 0x241850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x241854: 0xc7a00014
    ctx->pc = 0x241854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241858: 0xe7a00004
    ctx->pc = 0x241858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24185c: 0xc7a00018
    ctx->pc = 0x24185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241860: 0xe7a00008
    ctx->pc = 0x241860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x241864: 0xc0b9e4a
    ctx->pc = 0x241864u;
    SET_GPR_U32(ctx, 31, 0x24186Cu);
    ctx->pc = 0x241868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24186Cu; }
    }
    if (ctx->pc != 0x24186Cu) { return; }
    ctx->pc = 0x24186Cu;
    // 0x24186c: 0x46150002
    ctx->pc = 0x24186cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x241870: 0xc7a10000
    ctx->pc = 0x241870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241874: 0x46010000
    ctx->pc = 0x241874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241878: 0xe7a00000
    ctx->pc = 0x241878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24187c: 0xc0b9dce
    ctx->pc = 0x24187Cu;
    SET_GPR_U32(ctx, 31, 0x241884u);
    ctx->pc = 0x241880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241884u; }
    }
    if (ctx->pc != 0x241884u) { return; }
    ctx->pc = 0x241884u;
    // 0x241884: 0x46150002
    ctx->pc = 0x241884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x241888: 0xc7a10008
    ctx->pc = 0x241888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24188c: 0x46010000
    ctx->pc = 0x24188cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241890: 0xe7a00008
    ctx->pc = 0x241890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x241894: 0x3a0202d
    ctx->pc = 0x241894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241898: 0xc08f296
    ctx->pc = 0x241898u;
    SET_GPR_U32(ctx, 31, 0x2418A0u);
    ctx->pc = 0x24189Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2418A0u; }
    }
    if (ctx->pc != 0x2418A0u) { return; }
    ctx->pc = 0x2418A0u;
    // 0x2418a0: 0x14400023
    ctx->pc = 0x2418A0u;
    {
        const bool branch_taken_0x2418a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2418A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2418a0) {
            ctx->pc = 0x241930u;
            goto label_241930;
        }
    }
    ctx->pc = 0x2418A8u;
    // 0x2418a8: 0xc6000260
    ctx->pc = 0x2418a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2418ac: 0x3c013fc9
    ctx->pc = 0x2418acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2418b0: 0x34210fdb
    ctx->pc = 0x2418b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2418b4: 0x44810800
    ctx->pc = 0x2418b4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2418b8: 0x46010041
    ctx->pc = 0x2418b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2418bc: 0x3c014049
    ctx->pc = 0x2418bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2418c0: 0x34210fdb
    ctx->pc = 0x2418c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2418c4: 0x44810000
    ctx->pc = 0x2418c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2418c8: 0x46010034
    ctx->pc = 0x2418c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2418cc: 0x0
    ctx->pc = 0x2418ccu;
    // NOP
    // 0x2418d0: 0x45000006
    ctx->pc = 0x2418D0u;
    {
        const bool branch_taken_0x2418d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2418D4u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x2418d0) {
            ctx->pc = 0x2418ECu;
            goto label_2418ec;
        }
    }
    ctx->pc = 0x2418D8u;
    // 0x2418d8: 0x3c0140c9
    ctx->pc = 0x2418d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2418dc: 0x34210fdb
    ctx->pc = 0x2418dcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2418e0: 0x44810000
    ctx->pc = 0x2418e0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2418e4: 0x1000000d
    ctx->pc = 0x2418E4u;
    {
        const bool branch_taken_0x2418e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2418E8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2418e4) {
            ctx->pc = 0x24191Cu;
            goto label_24191c;
        }
    }
    ctx->pc = 0x2418ECu;
label_2418ec:
    // 0x2418ec: 0xc6010260
    ctx->pc = 0x2418ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2418f0: 0x3c01c049
    ctx->pc = 0x2418f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2418f4: 0x34210fdb
    ctx->pc = 0x2418f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2418f8: 0x44810000
    ctx->pc = 0x2418f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2418fc: 0x46000836
    ctx->pc = 0x2418fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x241900: 0x0
    ctx->pc = 0x241900u;
    // NOP
    // 0x241904: 0x45020005
    ctx->pc = 0x241904u;
    {
        const bool branch_taken_0x241904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x241904) {
            ctx->pc = 0x241908u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24191Cu;
            goto label_24191c;
        }
    }
    ctx->pc = 0x24190Cu;
    // 0x24190c: 0x3c0140c9
    ctx->pc = 0x24190cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x241910: 0x34210fdb
    ctx->pc = 0x241910u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x241914: 0x44810000
    ctx->pc = 0x241914u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x241918: 0x46000800
    ctx->pc = 0x241918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24191c:
    // 0x24191c: 0xe6000260
    ctx->pc = 0x24191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x241920: 0x220202d
    ctx->pc = 0x241920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241924: 0xc08efc2
    ctx->pc = 0x241924u;
    SET_GPR_U32(ctx, 31, 0x24192Cu);
    ctx->pc = 0x241928u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24192Cu; }
    }
    if (ctx->pc != 0x24192Cu) { return; }
    ctx->pc = 0x24192Cu;
    // 0x24192c: 0x200202d
    ctx->pc = 0x24192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241930:
    // 0x241930: 0x3c013f80
    ctx->pc = 0x241930u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x241934: 0x44816000
    ctx->pc = 0x241934u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x241938: 0xc08f14c
    ctx->pc = 0x241938u;
    SET_GPR_U32(ctx, 31, 0x241940u);
    ctx->pc = 0x24193Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241940u; }
    }
    if (ctx->pc != 0x241940u) { return; }
    ctx->pc = 0x241940u;
    // 0x241940: 0xc08f20c
    ctx->pc = 0x241940u;
    SET_GPR_U32(ctx, 31, 0x241948u);
    ctx->pc = 0x241944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241948u; }
    }
    if (ctx->pc != 0x241948u) { return; }
    ctx->pc = 0x241948u;
    // 0x241948: 0xe6000258
    ctx->pc = 0x241948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x24194c: 0xc090e82
    ctx->pc = 0x24194Cu;
    SET_GPR_U32(ctx, 31, 0x241954u);
    ctx->pc = 0x241950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241954u; }
    }
    if (ctx->pc != 0x241954u) { return; }
    ctx->pc = 0x241954u;
    // 0x241954: 0x40034800
    ctx->pc = 0x241954u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x241958: 0x3c02003a
    ctx->pc = 0x241958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x24195c: 0x8c4421d0
    ctx->pc = 0x24195cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x241960: 0x8c8201b8
    ctx->pc = 0x241960u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x241964: 0x621823
    ctx->pc = 0x241964u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241968: 0x8c8201b0
    ctx->pc = 0x241968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x24196c: 0x621821
    ctx->pc = 0x24196cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241970: 0xac8301b0
    ctx->pc = 0x241970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 3));
    // 0x241974: 0x8c8201b4
    ctx->pc = 0x241974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x241978: 0x24420001
    ctx->pc = 0x241978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x24197c: 0xac8201b4
    ctx->pc = 0x24197cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 436), GPR_U32(ctx, 2));
    // 0x241980: 0xdfbf0060
    ctx->pc = 0x241980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_241984:
    // 0x241984: 0xdfb10050
    ctx->pc = 0x241984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241988: 0xdfb00040
    ctx->pc = 0x241988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24198c: 0xc7b50078
    ctx->pc = 0x24198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x241990: 0xc7b40070
    ctx->pc = 0x241990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241994: 0x3e00008
    ctx->pc = 0x241994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24165Cu: goto label_24165c;
            case 0x241688u: goto label_241688;
            case 0x2416E4u: goto label_2416e4;
            case 0x241714u: goto label_241714;
            case 0x241730u: goto label_241730;
            case 0x241808u: goto label_241808;
            case 0x241838u: goto label_241838;
            case 0x241850u: goto label_241850;
            case 0x2418ECu: goto label_2418ec;
            case 0x24191Cu: goto label_24191c;
            case 0x241930u: goto label_241930;
            case 0x241984u: goto label_241984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24199Cu;
}
