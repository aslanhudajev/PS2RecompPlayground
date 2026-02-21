#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic13
// Address: 0x23f7b8 - 0x23fa60
void move_logic13_0x23f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23f7b8u;

    // 0x23f7b8: 0x27bdffb0
    ctx->pc = 0x23f7b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23f7bc: 0xffbf0040
    ctx->pc = 0x23f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23f7c0: 0xffb20030
    ctx->pc = 0x23f7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23f7c4: 0xffb10020
    ctx->pc = 0x23f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23f7c8: 0xffb00010
    ctx->pc = 0x23f7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23f7cc: 0x80902d
    ctx->pc = 0x23f7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7d0: 0x240303b0
    ctx->pc = 0x23f7d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23f7d4: 0x2431818
    ctx->pc = 0x23f7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f7d8: 0x3c020033
    ctx->pc = 0x23f7d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23f7dc: 0x2442dfd0
    ctx->pc = 0x23f7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23f7e0: 0x628821
    ctx->pc = 0x23f7e0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f7e4: 0xc08ed18
    ctx->pc = 0x23F7E4u;
    SET_GPR_U32(ctx, 31, 0x23F7ECu);
    ctx->pc = 0x23F7E8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 676)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F7ECu; }
    }
    if (ctx->pc != 0x23F7ECu) { return; }
    ctx->pc = 0x23F7ECu;
    // 0x23f7ec: 0x1440002a
    ctx->pc = 0x23F7ECu;
    {
        const bool branch_taken_0x23f7ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23F7F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x23f7ec) {
            ctx->pc = 0x23F898u;
            goto label_23f898;
        }
    }
    ctx->pc = 0x23F7F4u;
    // 0x23f7f4: 0x862202f2
    ctx->pc = 0x23f7f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
    // 0x23f7f8: 0x10400005
    ctx->pc = 0x23F7F8u;
    {
        const bool branch_taken_0x23f7f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F7FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x23f7f8) {
            ctx->pc = 0x23F810u;
            goto label_23f810;
        }
    }
    ctx->pc = 0x23F800u;
    // 0x23f800: 0x86220288
    ctx->pc = 0x23f800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x23f804: 0x4410004
    ctx->pc = 0x23F804u;
    {
        const bool branch_taken_0x23f804 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23F808u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23f804) {
            ctx->pc = 0x23F818u;
            goto label_23f818;
        }
    }
    ctx->pc = 0x23F80Cu;
    // 0x23f80c: 0x32420001
    ctx->pc = 0x23f80cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
label_23f810:
    // 0x23f810: 0x10000021
    ctx->pc = 0x23F810u;
    {
        const bool branch_taken_0x23f810 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F814u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
        if (branch_taken_0x23f810) {
            ctx->pc = 0x23F898u;
            goto label_23f898;
        }
    }
    ctx->pc = 0x23F818u;
label_23f818:
    // 0x23f818: 0xdc420e28
    ctx->pc = 0x23f818u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x23f81c: 0x30420010
    ctx->pc = 0x23f81cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x23f820: 0x10400018
    ctx->pc = 0x23F820u;
    {
        const bool branch_taken_0x23f820 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23f820) {
            ctx->pc = 0x23F884u;
            goto label_23f884;
        }
    }
    ctx->pc = 0x23F828u;
    // 0x23f828: 0x8e220348
    ctx->pc = 0x23f828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x23f82c: 0x56420006
    ctx->pc = 0x23F82Cu;
    {
        const bool branch_taken_0x23f82c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x23f82c) {
            ctx->pc = 0x23F830u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 844)));
            ctx->pc = 0x23F848u;
            goto label_23f848;
        }
    }
    ctx->pc = 0x23F834u;
    // 0x23f834: 0x3c04003a
    ctx->pc = 0x23f834u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x23f838: 0x24847fb8
    ctx->pc = 0x23f838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32696));
    // 0x23f83c: 0xc0b492e
    ctx->pc = 0x23F83Cu;
    SET_GPR_U32(ctx, 31, 0x23F844u);
    ctx->pc = 0x23F840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F844u; }
    }
    if (ctx->pc != 0x23F844u) { return; }
    ctx->pc = 0x23F844u;
    // 0x23f844: 0x8e22034c
    ctx->pc = 0x23f844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 844)));
label_23f848:
    // 0x23f848: 0x56420006
    ctx->pc = 0x23F848u;
    {
        const bool branch_taken_0x23f848 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x23f848) {
            ctx->pc = 0x23F84Cu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 840)));
            ctx->pc = 0x23F864u;
            goto label_23f864;
        }
    }
    ctx->pc = 0x23F850u;
    // 0x23f850: 0x3c04003a
    ctx->pc = 0x23f850u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x23f854: 0x24847fc8
    ctx->pc = 0x23f854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32712));
    // 0x23f858: 0xc0b492e
    ctx->pc = 0x23F858u;
    SET_GPR_U32(ctx, 31, 0x23F860u);
    ctx->pc = 0x23F85Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F860u; }
    }
    if (ctx->pc != 0x23F860u) { return; }
    ctx->pc = 0x23F860u;
    // 0x23f860: 0x8e260348
    ctx->pc = 0x23f860u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_23f864:
    // 0x23f864: 0x4c00007
    ctx->pc = 0x23F864u;
    {
        const bool branch_taken_0x23f864 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x23f864) {
            ctx->pc = 0x23F884u;
            goto label_23f884;
        }
    }
    ctx->pc = 0x23F86Cu;
    // 0x23f86c: 0x8e22034c
    ctx->pc = 0x23f86cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 844)));
    // 0x23f870: 0x14c20004
    ctx->pc = 0x23F870u;
    {
        const bool branch_taken_0x23f870 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x23F874u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x23f870) {
            ctx->pc = 0x23F884u;
            goto label_23f884;
        }
    }
    ctx->pc = 0x23F878u;
    // 0x23f878: 0x24847fd8
    ctx->pc = 0x23f878u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32728));
    // 0x23f87c: 0xc0b492e
    ctx->pc = 0x23F87Cu;
    SET_GPR_U32(ctx, 31, 0x23F884u);
    ctx->pc = 0x23F880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F884u; }
    }
    if (ctx->pc != 0x23F884u) { return; }
    ctx->pc = 0x23F884u;
label_23f884:
    // 0x23f884: 0x12000004
    ctx->pc = 0x23F884u;
    {
        const bool branch_taken_0x23f884 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F888u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23f884) {
            ctx->pc = 0x23F898u;
            goto label_23f898;
        }
    }
    ctx->pc = 0x23F88Cu;
    // 0x23f88c: 0x8e220348
    ctx->pc = 0x23f88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x23f890: 0x4410006
    ctx->pc = 0x23F890u;
    {
        const bool branch_taken_0x23f890 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23F894u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23f890) {
            ctx->pc = 0x23F8ACu;
            goto label_23f8ac;
        }
    }
    ctx->pc = 0x23F898u;
label_23f898:
    // 0x23f898: 0xa6220324
    ctx->pc = 0x23f898u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23f89c: 0xc09095a
    ctx->pc = 0x23F89Cu;
    SET_GPR_U32(ctx, 31, 0x23F8A4u);
    ctx->pc = 0x23F8A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8A4u; }
    }
    if (ctx->pc != 0x23F8A4u) { return; }
    ctx->pc = 0x23F8A4u;
    // 0x23f8a4: 0x10000069
    ctx->pc = 0x23F8A4u;
    {
        const bool branch_taken_0x23f8a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23F8A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x23f8a4) {
            ctx->pc = 0x23FA4Cu;
            goto label_23fa4c;
        }
    }
    ctx->pc = 0x23F8ACu;
label_23f8ac:
    // 0x23f8ac: 0x40034800
    ctx->pc = 0x23f8acu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23f8b0: 0x3c02003a
    ctx->pc = 0x23f8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23f8b4: 0x8c4221d0
    ctx->pc = 0x23f8b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23f8b8: 0xac430238
    ctx->pc = 0x23f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 568), GPR_U32(ctx, 3));
    // 0x23f8bc: 0x86230324
    ctx->pc = 0x23f8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x23f8c0: 0x86220328
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x23f8c4: 0x50620004
    ctx->pc = 0x23F8C4u;
    {
        const bool branch_taken_0x23f8c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23f8c4) {
            ctx->pc = 0x23F8C8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 840)));
            ctx->pc = 0x23F8D8u;
            goto label_23f8d8;
        }
    }
    ctx->pc = 0x23F8CCu;
    // 0x23f8cc: 0xc08e210
    ctx->pc = 0x23F8CCu;
    SET_GPR_U32(ctx, 31, 0x23F8D4u);
    ctx->pc = 0x23F8D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8D4u; }
    }
    if (ctx->pc != 0x23F8D4u) { return; }
    ctx->pc = 0x23F8D4u;
    // 0x23f8d4: 0x8e230348
    ctx->pc = 0x23f8d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 840)));
label_23f8d8:
    // 0x23f8d8: 0x240203b0
    ctx->pc = 0x23f8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23f8dc: 0x621818
    ctx->pc = 0x23f8dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f8e0: 0x3c020033
    ctx->pc = 0x23f8e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23f8e4: 0x2442dfd0
    ctx->pc = 0x23f8e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23f8e8: 0x628021
    ctx->pc = 0x23f8e8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f8ec: 0x26040040
    ctx->pc = 0x23f8ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x23f8f0: 0xc09a2aa
    ctx->pc = 0x23F8F0u;
    SET_GPR_U32(ctx, 31, 0x23F8F8u);
    ctx->pc = 0x23F8F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8F8u; }
    }
    if (ctx->pc != 0x23F8F8u) { return; }
    ctx->pc = 0x23F8F8u;
    // 0x23f8f8: 0xe6200260
    ctx->pc = 0x23f8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x23f8fc: 0x220202d
    ctx->pc = 0x23f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f900: 0x3c013f80
    ctx->pc = 0x23f900u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23f904: 0x44816000
    ctx->pc = 0x23f904u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23f908: 0xc08f14c
    ctx->pc = 0x23F908u;
    SET_GPR_U32(ctx, 31, 0x23F910u);
    ctx->pc = 0x23F90Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F910u; }
    }
    if (ctx->pc != 0x23F910u) { return; }
    ctx->pc = 0x23F910u;
    // 0x23f910: 0xc08f20c
    ctx->pc = 0x23F910u;
    SET_GPR_U32(ctx, 31, 0x23F918u);
    ctx->pc = 0x23F914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F918u; }
    }
    if (ctx->pc != 0x23F918u) { return; }
    ctx->pc = 0x23F918u;
    // 0x23f918: 0xe6200258
    ctx->pc = 0x23f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 600), bits); }
    // 0x23f91c: 0xc090e82
    ctx->pc = 0x23F91Cu;
    SET_GPR_U32(ctx, 31, 0x23F924u);
    ctx->pc = 0x23F920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F924u; }
    }
    if (ctx->pc != 0x23F924u) { return; }
    ctx->pc = 0x23F924u;
    // 0x23f924: 0xc6010040
    ctx->pc = 0x23f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f928: 0xc6200040
    ctx->pc = 0x23f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f92c: 0x46000b01
    ctx->pc = 0x23f92cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f930: 0xe7ac0000
    ctx->pc = 0x23f930u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f934: 0xc6020044
    ctx->pc = 0x23f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f938: 0xc6200044
    ctx->pc = 0x23f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f93c: 0x46001081
    ctx->pc = 0x23f93cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23f940: 0xe7a20004
    ctx->pc = 0x23f940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23f944: 0xc6010048
    ctx->pc = 0x23f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f948: 0xc6200048
    ctx->pc = 0x23f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f94c: 0x46000841
    ctx->pc = 0x23f94cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23f950: 0xe7a10008
    ctx->pc = 0x23f950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23f954: 0x460c6002
    ctx->pc = 0x23f954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23f958: 0x46021082
    ctx->pc = 0x23f958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x23f95c: 0x46020000
    ctx->pc = 0x23f95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23f960: 0x46010842
    ctx->pc = 0x23f960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23f964: 0x46010000
    ctx->pc = 0x23f964u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23f968: 0x0
    ctx->pc = 0x23f968u;
    // NOP
    // 0x23f96c: 0x0
    ctx->pc = 0x23f96cu;
    // NOP
    // 0x23f970: 0x460000c4
    ctx->pc = 0x23f970u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x23f974: 0x46031832
    ctx->pc = 0x23f974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f978: 0x45010006
    ctx->pc = 0x23F978u;
    {
        const bool branch_taken_0x23f978 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23f978) {
            ctx->pc = 0x23F994u;
            goto label_23f994;
        }
    }
    ctx->pc = 0x23F980u;
    // 0x23f980: 0x460c6302
    ctx->pc = 0x23f980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23f984: 0x46026300
    ctx->pc = 0x23f984u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x23f988: 0xc0ba284
    ctx->pc = 0x23F988u;
    SET_GPR_U32(ctx, 31, 0x23F990u);
    ctx->pc = 0x23F98Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F990u; }
    }
    if (ctx->pc != 0x23F990u) { return; }
    ctx->pc = 0x23F990u;
    // 0x23f990: 0x460000c6
    ctx->pc = 0x23f990u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_23f994:
    // 0x23f994: 0x3c014170
    ctx->pc = 0x23f994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16752 << 16));
    // 0x23f998: 0x44810000
    ctx->pc = 0x23f998u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23f99c: 0x46030036
    ctx->pc = 0x23f99cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f9a0: 0x0
    ctx->pc = 0x23f9a0u;
    // NOP
    // 0x23f9a4: 0x4500001d
    ctx->pc = 0x23F9A4u;
    {
        const bool branch_taken_0x23f9a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F9A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23f9a4) {
            ctx->pc = 0x23FA1Cu;
            goto label_23fa1c;
        }
    }
    ctx->pc = 0x23F9ACu;
    // 0x23f9ac: 0x8e230374
    ctx->pc = 0x23f9acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x23f9b0: 0x8c42ffbc
    ctx->pc = 0x23f9b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23f9b4: 0x621821
    ctx->pc = 0x23f9b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f9b8: 0xae230374
    ctx->pc = 0x23f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 3));
    // 0x23f9bc: 0x286300b4
    ctx->pc = 0x23f9bcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 180));
    // 0x23f9c0: 0x14600016
    ctx->pc = 0x23F9C0u;
    {
        const bool branch_taken_0x23f9c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x23F9C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x23f9c0) {
            ctx->pc = 0x23FA1Cu;
            goto label_23fa1c;
        }
    }
    ctx->pc = 0x23F9C8u;
    // 0x23f9c8: 0x8e230348
    ctx->pc = 0x23f9c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 840)));
    // 0x23f9cc: 0x621818
    ctx->pc = 0x23f9ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23f9d0: 0x3c020033
    ctx->pc = 0x23f9d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23f9d4: 0x2442dfd0
    ctx->pc = 0x23f9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23f9d8: 0x628021
    ctx->pc = 0x23f9d8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f9dc: 0x24040007
    ctx->pc = 0x23f9dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x23f9e0: 0x2403ffff
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23f9e4: 0x240503b0
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23f9e8: 0x3c020033
    ctx->pc = 0x23f9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23f9ec: 0x2447dfd0
    ctx->pc = 0x23f9ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294959056));
label_23f9f0:
    // 0x23f9f0: 0xa6040324
    ctx->pc = 0x23f9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 4));
    // 0x23f9f4: 0xa6040326
    ctx->pc = 0x23f9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 806), (uint16_t)GPR_U32(ctx, 4));
    // 0x23f9f8: 0xae03034c
    ctx->pc = 0x23f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 3));
    // 0x23f9fc: 0x8e020348
    ctx->pc = 0x23f9fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x23fa00: 0xae030348
    ctx->pc = 0x23fa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 3));
    // 0x23fa04: 0x453018
    ctx->pc = 0x23fa04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23fa08: 0xc78021
    ctx->pc = 0x23fa08u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x23fa0c: 0x441fff8
    ctx->pc = 0x23FA0Cu;
    {
        const bool branch_taken_0x23fa0c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23fa0c) {
            ctx->pc = 0x23F9F0u;
            goto label_23f9f0;
        }
    }
    ctx->pc = 0x23FA14u;
    // 0x23fa14: 0x2402ffff
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23fa18: 0xae220348
    ctx->pc = 0x23fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 840), GPR_U32(ctx, 2));
label_23fa1c:
    // 0x23fa1c: 0x40034800
    ctx->pc = 0x23fa1cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23fa20: 0x3c02003a
    ctx->pc = 0x23fa20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23fa24: 0x8c4421d0
    ctx->pc = 0x23fa24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23fa28: 0x8c820238
    ctx->pc = 0x23fa28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 568)));
    // 0x23fa2c: 0x621823
    ctx->pc = 0x23fa2cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fa30: 0x8c820230
    ctx->pc = 0x23fa30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x23fa34: 0x621821
    ctx->pc = 0x23fa34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fa38: 0xac830230
    ctx->pc = 0x23fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 3));
    // 0x23fa3c: 0x8c820234
    ctx->pc = 0x23fa3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x23fa40: 0x24420001
    ctx->pc = 0x23fa40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23fa44: 0xac820234
    ctx->pc = 0x23fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 2));
    // 0x23fa48: 0xdfbf0040
    ctx->pc = 0x23fa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23fa4c:
    // 0x23fa4c: 0xdfb20030
    ctx->pc = 0x23fa4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fa50: 0xdfb10020
    ctx->pc = 0x23fa50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fa54: 0xdfb00010
    ctx->pc = 0x23fa54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa58: 0x3e00008
    ctx->pc = 0x23FA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FA5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F810u: goto label_23f810;
            case 0x23F818u: goto label_23f818;
            case 0x23F848u: goto label_23f848;
            case 0x23F864u: goto label_23f864;
            case 0x23F884u: goto label_23f884;
            case 0x23F898u: goto label_23f898;
            case 0x23F8ACu: goto label_23f8ac;
            case 0x23F8D8u: goto label_23f8d8;
            case 0x23F994u: goto label_23f994;
            case 0x23F9F0u: goto label_23f9f0;
            case 0x23FA1Cu: goto label_23fa1c;
            case 0x23FA4Cu: goto label_23fa4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FA60u;
}
