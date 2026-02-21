#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_ai_control
// Address: 0x23b280 - 0x23b45c
void enemy_ai_control_0x23b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23b280u;

    // 0x23b280: 0x27bdffd0
    ctx->pc = 0x23b280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b284: 0xffbf0020
    ctx->pc = 0x23b284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23b288: 0xffb10010
    ctx->pc = 0x23b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23b28c: 0xffb00000
    ctx->pc = 0x23b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b290: 0x80882d
    ctx->pc = 0x23b290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b294: 0x240303b0
    ctx->pc = 0x23b294u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23b298: 0x2231818
    ctx->pc = 0x23b298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23b29c: 0x3c020033
    ctx->pc = 0x23b29cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23b2a0: 0x2442dfd0
    ctx->pc = 0x23b2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23b2a4: 0x628021
    ctx->pc = 0x23b2a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b2a8: 0x3c030031
    ctx->pc = 0x23b2a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x23b2ac: 0x960202ea
    ctx->pc = 0x23b2acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 746)));
    // 0x23b2b0: 0x9463ffbc
    ctx->pc = 0x23b2b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x23b2b4: 0x431021
    ctx->pc = 0x23b2b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b2b8: 0xa60202ea
    ctx->pc = 0x23b2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 746), (uint16_t)GPR_U32(ctx, 2));
    // 0x23b2bc: 0xc6010290
    ctx->pc = 0x23b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b2c0: 0xc6000314
    ctx->pc = 0x23b2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23b2c4: 0x46010034
    ctx->pc = 0x23b2c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b2c8: 0x0
    ctx->pc = 0x23b2c8u;
    // NOP
    // 0x23b2cc: 0x45020006
    ctx->pc = 0x23B2CCu;
    {
        const bool branch_taken_0x23b2cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b2cc) {
            ctx->pc = 0x23B2D0u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 650)));
            ctx->pc = 0x23B2E8u;
            goto label_23b2e8;
        }
    }
    ctx->pc = 0x23B2D4u;
    // 0x23b2d4: 0x860202f0
    ctx->pc = 0x23b2d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23b2d8: 0x54400003
    ctx->pc = 0x23B2D8u;
    {
        const bool branch_taken_0x23b2d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23b2d8) {
            ctx->pc = 0x23B2DCu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 650)));
            ctx->pc = 0x23B2E8u;
            goto label_23b2e8;
        }
    }
    ctx->pc = 0x23B2E0u;
    // 0x23b2e0: 0x10000059
    ctx->pc = 0x23B2E0u;
    {
        const bool branch_taken_0x23b2e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B2E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23b2e0) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B2E8u;
label_23b2e8:
    // 0x23b2e8: 0x4600007
    ctx->pc = 0x23B2E8u;
    {
        const bool branch_taken_0x23b2e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x23B2ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x23b2e8) {
            ctx->pc = 0x23B308u;
            goto label_23b308;
        }
    }
    ctx->pc = 0x23B2F0u;
    // 0x23b2f0: 0x86020288
    ctx->pc = 0x23b2f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23b2f4: 0x10430003
    ctx->pc = 0x23B2F4u;
    {
        const bool branch_taken_0x23b2f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x23B2F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x23b2f4) {
            ctx->pc = 0x23B304u;
            goto label_23b304;
        }
    }
    ctx->pc = 0x23B2FCu;
    // 0x23b2fc: 0xae000360
    ctx->pc = 0x23b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x23b300: 0xae020364
    ctx->pc = 0x23b300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_23b304:
    // 0x23b304: 0x3c020036
    ctx->pc = 0x23b304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_23b308:
    // 0x23b308: 0x8c42d934
    ctx->pc = 0x23b308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x23b30c: 0x440000e
    ctx->pc = 0x23B30Cu;
    {
        const bool branch_taken_0x23b30c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23B310u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x23b30c) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B314u;
    // 0x23b314: 0x8c42d808
    ctx->pc = 0x23b314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957064)));
    // 0x23b318: 0x1040000b
    ctx->pc = 0x23B318u;
    {
        const bool branch_taken_0x23b318 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B31Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x23b318) {
            ctx->pc = 0x23B348u;
            goto label_23b348;
        }
    }
    ctx->pc = 0x23B320u;
    // 0x23b320: 0x26050010
    ctx->pc = 0x23b320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x23b324: 0x302d
    ctx->pc = 0x23b324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b328: 0x24070001
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b32c: 0x8e080000
    ctx->pc = 0x23b32cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23b330: 0xc09f65e
    ctx->pc = 0x23B330u;
    SET_GPR_U32(ctx, 31, 0x23B338u);
    ctx->pc = 0x23B334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x27D978u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddEnemyHitCol_0x27d978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B338u; }
    }
    if (ctx->pc != 0x23B338u) { return; }
    ctx->pc = 0x23B338u;
    // 0x23b338: 0xc08e734
    ctx->pc = 0x23B338u;
    SET_GPR_U32(ctx, 31, 0x23B340u);
    ctx->pc = 0x23B33Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_enemy_0x239cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B340u; }
    }
    if (ctx->pc != 0x23B340u) { return; }
    ctx->pc = 0x23B340u;
    // 0x23b340: 0x10000041
    ctx->pc = 0x23B340u;
    {
        const bool branch_taken_0x23b340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23b340) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B348u;
label_23b348:
    // 0x23b348: 0xc09095a
    ctx->pc = 0x23B348u;
    SET_GPR_U32(ctx, 31, 0x23B350u);
    ctx->pc = 0x23B34Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B350u; }
    }
    if (ctx->pc != 0x23B350u) { return; }
    ctx->pc = 0x23B350u;
    // 0x23b350: 0x40882d
    ctx->pc = 0x23b350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b354: 0x8e0300e0
    ctx->pc = 0x23b354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23b358: 0x24020001
    ctx->pc = 0x23b358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b35c: 0x54620004
    ctx->pc = 0x23B35Cu;
    {
        const bool branch_taken_0x23b35c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23b35c) {
            ctx->pc = 0x23B360u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x23B370u;
            goto label_23b370;
        }
    }
    ctx->pc = 0x23B364u;
    // 0x23b364: 0x24020003
    ctx->pc = 0x23b364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b368: 0xae0200e4
    ctx->pc = 0x23b368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x23b36c: 0x8e030000
    ctx->pc = 0x23b36cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23b370:
    // 0x23b370: 0x24020018
    ctx->pc = 0x23b370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x23b374: 0x14620034
    ctx->pc = 0x23B374u;
    {
        const bool branch_taken_0x23b374 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23B378u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b374) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B37Cu;
    // 0x23b37c: 0x8e0300e0
    ctx->pc = 0x23b37cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23b380: 0x2462fffd
    ctx->pc = 0x23b380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x23b384: 0x2c420002
    ctx->pc = 0x23b384u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23b388: 0x14400003
    ctx->pc = 0x23B388u;
    {
        const bool branch_taken_0x23b388 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B38Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x23b388) {
            ctx->pc = 0x23B398u;
            goto label_23b398;
        }
    }
    ctx->pc = 0x23B390u;
    // 0x23b390: 0x54600029
    ctx->pc = 0x23B390u;
    {
        const bool branch_taken_0x23b390 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x23b390) {
            ctx->pc = 0x23B394u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23B438u;
            goto label_23b438;
        }
    }
    ctx->pc = 0x23B398u;
label_23b398:
    // 0x23b398: 0x860202e8
    ctx->pc = 0x23b398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x23b39c: 0x14400008
    ctx->pc = 0x23B39Cu;
    {
        const bool branch_taken_0x23b39c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23B3A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b39c) {
            ctx->pc = 0x23B3C0u;
            goto label_23b3c0;
        }
    }
    ctx->pc = 0x23B3A4u;
    // 0x23b3a4: 0xc08ec62
    ctx->pc = 0x23B3A4u;
    SET_GPR_U32(ctx, 31, 0x23B3ACu);
    ctx->pc = 0x23B3A8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->pc = 0x23B188u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_mod_alpha_0x23b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B3ACu; }
    }
    if (ctx->pc != 0x23B3ACu) { return; }
    ctx->pc = 0x23B3ACu;
    // 0x23b3ac: 0xc0b5c24
    ctx->pc = 0x23B3ACu;
    SET_GPR_U32(ctx, 31, 0x23B3B4u);
    ctx->pc = 0x23B3B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B3B4u; }
    }
    if (ctx->pc != 0x23B3B4u) { return; }
    ctx->pc = 0x23B3B4u;
    // 0x23b3b4: 0x2442003c
    ctx->pc = 0x23b3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
    // 0x23b3b8: 0x10000022
    ctx->pc = 0x23B3B8u;
    {
        const bool branch_taken_0x23b3b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B3BCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 744), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x23b3b8) {
            ctx->pc = 0x23B444u;
            goto label_23b444;
        }
    }
    ctx->pc = 0x23B3C0u;
label_23b3c0:
    // 0x23b3c0: 0x18400011
    ctx->pc = 0x23B3C0u;
    {
        const bool branch_taken_0x23b3c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23b3c0) {
            ctx->pc = 0x23B408u;
            goto label_23b408;
        }
    }
    ctx->pc = 0x23B3C8u;
    // 0x23b3c8: 0xc08ec62
    ctx->pc = 0x23B3C8u;
    SET_GPR_U32(ctx, 31, 0x23B3D0u);
    ctx->pc = 0x23B3CCu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->pc = 0x23B188u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_mod_alpha_0x23b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B3D0u; }
    }
    if (ctx->pc != 0x23B3D0u) { return; }
    ctx->pc = 0x23B3D0u;
    // 0x23b3d0: 0x3c020031
    ctx->pc = 0x23b3d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23b3d4: 0x960302e8
    ctx->pc = 0x23b3d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x23b3d8: 0x9442ffbc
    ctx->pc = 0x23b3d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23b3dc: 0x621823
    ctx->pc = 0x23b3dcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b3e0: 0xa60302e8
    ctx->pc = 0x23b3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 744), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b3e4: 0x31c00
    ctx->pc = 0x23b3e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x23b3e8: 0x4610017
    ctx->pc = 0x23B3E8u;
    {
        const bool branch_taken_0x23b3e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23B3ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b3e8) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B3F0u;
    // 0x23b3f0: 0xc0b5c24
    ctx->pc = 0x23B3F0u;
    SET_GPR_U32(ctx, 31, 0x23B3F8u);
    ctx->pc = 0x23B3F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B3F8u; }
    }
    if (ctx->pc != 0x23B3F8u) { return; }
    ctx->pc = 0x23B3F8u;
    // 0x23b3f8: 0x2442003c
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
    // 0x23b3fc: 0x21023
    ctx->pc = 0x23b3fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23b400: 0x10000010
    ctx->pc = 0x23B400u;
    {
        const bool branch_taken_0x23b400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B404u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 744), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x23b400) {
            ctx->pc = 0x23B444u;
            goto label_23b444;
        }
    }
    ctx->pc = 0x23B408u;
label_23b408:
    // 0x23b408: 0xc08ec62
    ctx->pc = 0x23B408u;
    SET_GPR_U32(ctx, 31, 0x23B410u);
    ctx->pc = 0x23B40Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23B188u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_mod_alpha_0x23b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B410u; }
    }
    if (ctx->pc != 0x23B410u) { return; }
    ctx->pc = 0x23B410u;
    // 0x23b410: 0x3c020031
    ctx->pc = 0x23b410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x23b414: 0x960302e8
    ctx->pc = 0x23b414u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x23b418: 0x9442ffbc
    ctx->pc = 0x23b418u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23b41c: 0x621821
    ctx->pc = 0x23b41cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23b420: 0xa60302e8
    ctx->pc = 0x23b420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 744), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b424: 0x31c00
    ctx->pc = 0x23b424u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x23b428: 0x18600007
    ctx->pc = 0x23B428u;
    {
        const bool branch_taken_0x23b428 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23B42Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23b428) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B430u;
    // 0x23b430: 0x10000005
    ctx->pc = 0x23B430u;
    {
        const bool branch_taken_0x23b430 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23B434u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 744), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23b430) {
            ctx->pc = 0x23B448u;
            goto label_23b448;
        }
    }
    ctx->pc = 0x23B438u;
label_23b438:
    // 0x23b438: 0xc08ec62
    ctx->pc = 0x23B438u;
    SET_GPR_U32(ctx, 31, 0x23B440u);
    ctx->pc = 0x23B43Cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->pc = 0x23B188u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_mod_alpha_0x23b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B440u; }
    }
    if (ctx->pc != 0x23B440u) { return; }
    ctx->pc = 0x23B440u;
    // 0x23b440: 0xa60002e8
    ctx->pc = 0x23b440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 744), (uint16_t)GPR_U32(ctx, 0));
label_23b444:
    // 0x23b444: 0x220102d
    ctx->pc = 0x23b444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b448:
    // 0x23b448: 0xdfbf0020
    ctx->pc = 0x23b448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b44c: 0xdfb10010
    ctx->pc = 0x23b44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b450: 0xdfb00000
    ctx->pc = 0x23b450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b454: 0x3e00008
    ctx->pc = 0x23B454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B2E8u: goto label_23b2e8;
            case 0x23B304u: goto label_23b304;
            case 0x23B308u: goto label_23b308;
            case 0x23B348u: goto label_23b348;
            case 0x23B370u: goto label_23b370;
            case 0x23B398u: goto label_23b398;
            case 0x23B3C0u: goto label_23b3c0;
            case 0x23B408u: goto label_23b408;
            case 0x23B438u: goto label_23b438;
            case 0x23B444u: goto label_23b444;
            case 0x23B448u: goto label_23b448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B45Cu;
}
