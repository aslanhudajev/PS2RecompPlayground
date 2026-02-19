#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic08
// Address: 0x240970 - 0x240d40
void move_logic08_0x240970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x240970u;

    // 0x240970: 0x27bdff90
    ctx->pc = 0x240970u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x240974: 0xffbf0050
    ctx->pc = 0x240974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x240978: 0xffb30040
    ctx->pc = 0x240978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24097c: 0xffb20030
    ctx->pc = 0x24097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x240980: 0xffb10020
    ctx->pc = 0x240980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x240984: 0xffb00010
    ctx->pc = 0x240984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x240988: 0xe7b50068
    ctx->pc = 0x240988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x24098c: 0xe7b40060
    ctx->pc = 0x24098cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x240990: 0x80902d
    ctx->pc = 0x240990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240994: 0x240303b0
    ctx->pc = 0x240994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x240998: 0x2431818
    ctx->pc = 0x240998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24099c: 0x3c020033
    ctx->pc = 0x24099cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2409a0: 0x2442dfd0
    ctx->pc = 0x2409a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2409a4: 0x628021
    ctx->pc = 0x2409a4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2409a8: 0x982d
    ctx->pc = 0x2409a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409ac: 0x3c03003c
    ctx->pc = 0x2409acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2409b0: 0x24631bb8
    ctx->pc = 0x2409b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7096));
    // 0x2409b4: 0x8e020000
    ctx->pc = 0x2409b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2409b8: 0x21080
    ctx->pc = 0x2409b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2409bc: 0x431021
    ctx->pc = 0x2409bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2409c0: 0xc08ed18
    ctx->pc = 0x2409C0u;
    SET_GPR_U32(ctx, 31, 0x2409C8u);
    ctx->pc = 0x2409C4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2409C8u; }
    }
    if (ctx->pc != 0x2409C8u) { return; }
    ctx->pc = 0x2409C8u;
    // 0x2409c8: 0x14400008
    ctx->pc = 0x2409C8u;
    {
        const bool branch_taken_0x2409c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2409CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x2409c8) {
            ctx->pc = 0x2409ECu;
            goto label_2409ec;
        }
    }
    ctx->pc = 0x2409D0u;
    // 0x2409d0: 0x860202f2
    ctx->pc = 0x2409d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x2409d4: 0x10400004
    ctx->pc = 0x2409D4u;
    {
        const bool branch_taken_0x2409d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2409D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2409d4) {
            ctx->pc = 0x2409E8u;
            goto label_2409e8;
        }
    }
    ctx->pc = 0x2409DCu;
    // 0x2409dc: 0x86020288
    ctx->pc = 0x2409dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x2409e0: 0x4410007
    ctx->pc = 0x2409E0u;
    {
        const bool branch_taken_0x2409e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2409E4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2409e0) {
            ctx->pc = 0x240A00u;
            goto label_240a00;
        }
    }
    ctx->pc = 0x2409E8u;
label_2409e8:
    // 0x2409e8: 0x24420005
    ctx->pc = 0x2409e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
label_2409ec:
    // 0x2409ec: 0xa6020324
    ctx->pc = 0x2409ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x2409f0: 0xc09095a
    ctx->pc = 0x2409F0u;
    SET_GPR_U32(ctx, 31, 0x2409F8u);
    ctx->pc = 0x2409F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2409F8u; }
    }
    if (ctx->pc != 0x2409F8u) { return; }
    ctx->pc = 0x2409F8u;
    // 0x2409f8: 0x100000c9
    ctx->pc = 0x2409F8u;
    {
        const bool branch_taken_0x2409f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2409FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2409f8) {
            ctx->pc = 0x240D20u;
            goto label_240d20;
        }
    }
    ctx->pc = 0x240A00u;
label_240a00:
    // 0x240a00: 0x40034800
    ctx->pc = 0x240a00u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x240a04: 0x3c02003a
    ctx->pc = 0x240a04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x240a08: 0x8c4221d0
    ctx->pc = 0x240a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x240a0c: 0xac4301e8
    ctx->pc = 0x240a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 3));
    // 0x240a10: 0x86030324
    ctx->pc = 0x240a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x240a14: 0x86020328
    ctx->pc = 0x240a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x240a18: 0x10620003
    ctx->pc = 0x240A18u;
    {
        const bool branch_taken_0x240a18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x240a18) {
            ctx->pc = 0x240A28u;
            goto label_240a28;
        }
    }
    ctx->pc = 0x240A20u;
    // 0x240a20: 0xc08e210
    ctx->pc = 0x240A20u;
    SET_GPR_U32(ctx, 31, 0x240A28u);
    ctx->pc = 0x240A24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A28u; }
    }
    if (ctx->pc != 0x240A28u) { return; }
    ctx->pc = 0x240A28u;
label_240a28:
    // 0x240a28: 0xc08de10
    ctx->pc = 0x240A28u;
    SET_GPR_U32(ctx, 31, 0x240A30u);
    ctx->pc = 0x240A2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x237840u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_chest_0x237840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A30u; }
    }
    if (ctx->pc != 0x240A30u) { return; }
    ctx->pc = 0x240A30u;
    // 0x240a30: 0x8e020354
    ctx->pc = 0x240a30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x240a34: 0x4400005
    ctx->pc = 0x240A34u;
    {
        const bool branch_taken_0x240a34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240A38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240a34) {
            ctx->pc = 0x240A4Cu;
            goto label_240a4c;
        }
    }
    ctx->pc = 0x240A3Cu;
    // 0x240a3c: 0xc08f12a
    ctx->pc = 0x240A3Cu;
    SET_GPR_U32(ctx, 31, 0x240A44u);
    ctx->pc = 0x240A40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_chest_ang_0x23c4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A44u; }
    }
    if (ctx->pc != 0x240A44u) { return; }
    ctx->pc = 0x240A44u;
    // 0x240a44: 0x10000004
    ctx->pc = 0x240A44u;
    {
        const bool branch_taken_0x240a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240A48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240a44) {
            ctx->pc = 0x240A58u;
            goto label_240a58;
        }
    }
    ctx->pc = 0x240A4Cu;
label_240a4c:
    // 0x240a4c: 0xc08f0f0
    ctx->pc = 0x240A4Cu;
    SET_GPR_U32(ctx, 31, 0x240A54u);
    ctx->pc = 0x240A50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A54u; }
    }
    if (ctx->pc != 0x240A54u) { return; }
    ctx->pc = 0x240A54u;
    // 0x240a54: 0x3c02003c
    ctx->pc = 0x240a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_240a58:
    // 0x240a58: 0xe4401c6c
    ctx->pc = 0x240a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x240a5c: 0x8e03036c
    ctx->pc = 0x240a5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x240a60: 0x18600005
    ctx->pc = 0x240A60u;
    {
        const bool branch_taken_0x240a60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x240A64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x240a60) {
            ctx->pc = 0x240A78u;
            goto label_240a78;
        }
    }
    ctx->pc = 0x240A68u;
    // 0x240a68: 0x8c42ffbc
    ctx->pc = 0x240a68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x240a6c: 0x621023
    ctx->pc = 0x240a6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240a70: 0x1c40008d
    ctx->pc = 0x240A70u;
    {
        const bool branch_taken_0x240a70 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x240A74u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 2));
        if (branch_taken_0x240a70) {
            ctx->pc = 0x240CA8u;
            goto label_240ca8;
        }
    }
    ctx->pc = 0x240A78u;
label_240a78:
    // 0x240a78: 0x8e020298
    ctx->pc = 0x240a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x240a7c: 0x4400007
    ctx->pc = 0x240A7Cu;
    {
        const bool branch_taken_0x240a7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240A80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240a7c) {
            ctx->pc = 0x240A9Cu;
            goto label_240a9c;
        }
    }
    ctx->pc = 0x240A84u;
    // 0x240a84: 0xc08f0f0
    ctx->pc = 0x240A84u;
    SET_GPR_U32(ctx, 31, 0x240A8Cu);
    ctx->pc = 0x240A88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A8Cu; }
    }
    if (ctx->pc != 0x240A8Cu) { return; }
    ctx->pc = 0x240A8Cu;
    // 0x240a8c: 0x3c02003c
    ctx->pc = 0x240a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240a90: 0xe4401c6c
    ctx->pc = 0x240a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7276), bits); }
    // 0x240a94: 0x1000002e
    ctx->pc = 0x240A94u;
    {
        const bool branch_taken_0x240a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240A98u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x240a94) {
            ctx->pc = 0x240B50u;
            goto label_240b50;
        }
    }
    ctx->pc = 0x240A9Cu;
label_240a9c:
    // 0x240a9c: 0xc08f13a
    ctx->pc = 0x240A9Cu;
    SET_GPR_U32(ctx, 31, 0x240AA4u);
    ctx->pc = 0x240AA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 672)));
    ctx->pc = 0x23C4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_chest_0x23c4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240AA4u; }
    }
    if (ctx->pc != 0x240AA4u) { return; }
    ctx->pc = 0x240AA4u;
    // 0x240aa4: 0x14400029
    ctx->pc = 0x240AA4u;
    {
        const bool branch_taken_0x240aa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240AA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240aa4) {
            ctx->pc = 0x240B4Cu;
            goto label_240b4c;
        }
    }
    ctx->pc = 0x240AACu;
    // 0x240aac: 0x86030212
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 530)));
    // 0x240ab0: 0x24020001
    ctx->pc = 0x240ab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x240ab4: 0x5462000e
    ctx->pc = 0x240AB4u;
    {
        const bool branch_taken_0x240ab4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x240ab4) {
            ctx->pc = 0x240AB8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x240AF0u;
            goto label_240af0;
        }
    }
    ctx->pc = 0x240ABCu;
    // 0x240abc: 0x3c02003c
    ctx->pc = 0x240abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240ac0: 0xc4541c6c
    ctx->pc = 0x240ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240ac4: 0x8e020368
    ctx->pc = 0x240ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240ac8: 0x14400005
    ctx->pc = 0x240AC8u;
    {
        const bool branch_taken_0x240ac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240ACCu;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240ac8) {
            ctx->pc = 0x240AE0u;
            goto label_240ae0;
        }
    }
    ctx->pc = 0x240AD0u;
    // 0x240ad0: 0xc08efec
    ctx->pc = 0x240AD0u;
    SET_GPR_U32(ctx, 31, 0x240AD8u);
    ctx->pc = 0x240AD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_turn_dir_0x23bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240AD8u; }
    }
    if (ctx->pc != 0x240AD8u) { return; }
    ctx->pc = 0x240AD8u;
    // 0x240ad8: 0xae020368
    ctx->pc = 0x240ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x240adc: 0x8e020368
    ctx->pc = 0x240adcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_240ae0:
    // 0x240ae0: 0x1c40000d
    ctx->pc = 0x240AE0u;
    {
        const bool branch_taken_0x240ae0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x240AE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x240ae0) {
            ctx->pc = 0x240B18u;
            goto label_240b18;
        }
    }
    ctx->pc = 0x240AE8u;
    // 0x240ae8: 0x10000013
    ctx->pc = 0x240AE8u;
    {
        const bool branch_taken_0x240ae8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240AECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958944));
        if (branch_taken_0x240ae8) {
            ctx->pc = 0x240B38u;
            goto label_240b38;
        }
    }
    ctx->pc = 0x240AF0u;
label_240af0:
    // 0x240af0: 0x54400005
    ctx->pc = 0x240AF0u;
    {
        const bool branch_taken_0x240af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x240af0) {
            ctx->pc = 0x240AF4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x240B08u;
            goto label_240b08;
        }
    }
    ctx->pc = 0x240AF8u;
    // 0x240af8: 0x8e02029c
    ctx->pc = 0x240af8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x240afc: 0x4400013
    ctx->pc = 0x240AFCu;
    {
        const bool branch_taken_0x240afc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x240B00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240afc) {
            ctx->pc = 0x240B4Cu;
            goto label_240b4c;
        }
    }
    ctx->pc = 0x240B04u;
    // 0x240b04: 0xc6140260
    ctx->pc = 0x240b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240b08:
    // 0x240b08: 0x8e020368
    ctx->pc = 0x240b08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240b0c: 0x18400008
    ctx->pc = 0x240B0Cu;
    {
        const bool branch_taken_0x240b0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x240B10u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240b0c) {
            ctx->pc = 0x240B30u;
            goto label_240b30;
        }
    }
    ctx->pc = 0x240B14u;
    // 0x240b14: 0x3c020033
    ctx->pc = 0x240b14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_240b18:
    // 0x240b18: 0x2442df60
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x240b1c: 0x111880
    ctx->pc = 0x240b1cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240b20: 0x621821
    ctx->pc = 0x240b20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240b24: 0xc4600000
    ctx->pc = 0x240b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240b28: 0x10000009
    ctx->pc = 0x240B28u;
    {
        const bool branch_taken_0x240b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240B2Cu;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240b28) {
            ctx->pc = 0x240B50u;
            goto label_240b50;
        }
    }
    ctx->pc = 0x240B30u;
label_240b30:
    // 0x240b30: 0x3c020033
    ctx->pc = 0x240b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x240b34: 0x2442df60
    ctx->pc = 0x240b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958944));
label_240b38:
    // 0x240b38: 0x111880
    ctx->pc = 0x240b38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x240b3c: 0x621821
    ctx->pc = 0x240b3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240b40: 0xc4600000
    ctx->pc = 0x240b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240b44: 0x10000002
    ctx->pc = 0x240B44u;
    {
        const bool branch_taken_0x240b44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240B48u;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240b44) {
            ctx->pc = 0x240B50u;
            goto label_240b50;
        }
    }
    ctx->pc = 0x240B4Cu;
label_240b4c:
    // 0x240b4c: 0xc4541c6c
    ctx->pc = 0x240b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240b50:
    // 0x240b50: 0x3c014049
    ctx->pc = 0x240b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x240b54: 0x34210fdb
    ctx->pc = 0x240b54u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240b58: 0x44810000
    ctx->pc = 0x240b58u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240b5c: 0x46140034
    ctx->pc = 0x240b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240b60: 0x45000006
    ctx->pc = 0x240B60u;
    {
        const bool branch_taken_0x240b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240b60) {
            ctx->pc = 0x240B7Cu;
            goto label_240b7c;
        }
    }
    ctx->pc = 0x240B68u;
    // 0x240b68: 0x3c0140c9
    ctx->pc = 0x240b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240b6c: 0x34210fdb
    ctx->pc = 0x240b6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240b70: 0x44810000
    ctx->pc = 0x240b70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240b74: 0x1000000c
    ctx->pc = 0x240B74u;
    {
        const bool branch_taken_0x240b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240B78u;
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x240b74) {
            ctx->pc = 0x240BA8u;
            goto label_240ba8;
        }
    }
    ctx->pc = 0x240B7Cu;
label_240b7c:
    // 0x240b7c: 0x3c01c049
    ctx->pc = 0x240b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x240b80: 0x34210fdb
    ctx->pc = 0x240b80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240b84: 0x44810000
    ctx->pc = 0x240b84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240b88: 0x4600a036
    ctx->pc = 0x240b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240b8c: 0x0
    ctx->pc = 0x240b8cu;
    // NOP
    // 0x240b90: 0x45020005
    ctx->pc = 0x240B90u;
    {
        const bool branch_taken_0x240b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240b90) {
            ctx->pc = 0x240B94u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x240BA8u;
            goto label_240ba8;
        }
    }
    ctx->pc = 0x240B98u;
    // 0x240b98: 0x3c0140c9
    ctx->pc = 0x240b98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x240b9c: 0x34210fdb
    ctx->pc = 0x240b9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x240ba0: 0x44810000
    ctx->pc = 0x240ba0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x240ba4: 0x4600a000
    ctx->pc = 0x240ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_240ba8:
    // 0x240ba8: 0x46000506
    ctx->pc = 0x240ba8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x240bac: 0xc6000040
    ctx->pc = 0x240bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240bb0: 0xe7a00000
    ctx->pc = 0x240bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x240bb4: 0xc6020044
    ctx->pc = 0x240bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x240bb8: 0xc6000048
    ctx->pc = 0x240bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240bbc: 0xe7a00008
    ctx->pc = 0x240bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x240bc0: 0xc600024c
    ctx->pc = 0x240bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240bc4: 0x3c013dcc
    ctx->pc = 0x240bc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x240bc8: 0x3421cccd
    ctx->pc = 0x240bc8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x240bcc: 0x44810800
    ctx->pc = 0x240bccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x240bd0: 0x46010000
    ctx->pc = 0x240bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240bd4: 0x46020000
    ctx->pc = 0x240bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x240bd8: 0xe7a00004
    ctx->pc = 0x240bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x240bdc: 0xc0b9e4a
    ctx->pc = 0x240BDCu;
    SET_GPR_U32(ctx, 31, 0x240BE4u);
    ctx->pc = 0x240BE0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BE4u; }
    }
    if (ctx->pc != 0x240BE4u) { return; }
    ctx->pc = 0x240BE4u;
    // 0x240be4: 0x46150002
    ctx->pc = 0x240be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x240be8: 0xc7a10000
    ctx->pc = 0x240be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240bec: 0x46010000
    ctx->pc = 0x240becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240bf0: 0xe7a00000
    ctx->pc = 0x240bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x240bf4: 0xc0b9dce
    ctx->pc = 0x240BF4u;
    SET_GPR_U32(ctx, 31, 0x240BFCu);
    ctx->pc = 0x240BF8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BFCu; }
    }
    if (ctx->pc != 0x240BFCu) { return; }
    ctx->pc = 0x240BFCu;
    // 0x240bfc: 0x46150002
    ctx->pc = 0x240bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x240c00: 0xc7a10008
    ctx->pc = 0x240c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240c04: 0x46010000
    ctx->pc = 0x240c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240c08: 0xe7a00008
    ctx->pc = 0x240c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x240c0c: 0xc6000260
    ctx->pc = 0x240c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240c10: 0xc6010264
    ctx->pc = 0x240c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240c14: 0x46010001
    ctx->pc = 0x240c14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x240c18: 0x46000005
    ctx->pc = 0x240c18u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x240c1c: 0x3c013d0e
    ctx->pc = 0x240c1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15630 << 16));
    // 0x240c20: 0x3421fa36
    ctx->pc = 0x240c20u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x240c24: 0x44811000
    ctx->pc = 0x240c24u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x240c28: 0x46001034
    ctx->pc = 0x240c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240c2c: 0x0
    ctx->pc = 0x240c2cu;
    // NOP
    // 0x240c30: 0x45000008
    ctx->pc = 0x240C30u;
    {
        const bool branch_taken_0x240c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x240C34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240c30) {
            ctx->pc = 0x240C54u;
            goto label_240c54;
        }
    }
    ctx->pc = 0x240C38u;
    // 0x240c38: 0x4601a001
    ctx->pc = 0x240c38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x240c3c: 0x46000005
    ctx->pc = 0x240c3cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x240c40: 0x46020036
    ctx->pc = 0x240c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240c44: 0x0
    ctx->pc = 0x240c44u;
    // NOP
    // 0x240c48: 0x45030007
    ctx->pc = 0x240C48u;
    {
        const bool branch_taken_0x240c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240c48) {
            ctx->pc = 0x240C4Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x240C68u;
            goto label_240c68;
        }
    }
    ctx->pc = 0x240C50u;
    // 0x240c50: 0x3a0202d
    ctx->pc = 0x240c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_240c54:
    // 0x240c54: 0xc08f296
    ctx->pc = 0x240C54u;
    SET_GPR_U32(ctx, 31, 0x240C5Cu);
    ctx->pc = 0x240C58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23CA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_vacancy_0x23ca58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C5Cu; }
    }
    if (ctx->pc != 0x240C5Cu) { return; }
    ctx->pc = 0x240C5Cu;
    // 0x240c5c: 0x54400005
    ctx->pc = 0x240C5Cu;
    {
        const bool branch_taken_0x240c5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x240c5c) {
            ctx->pc = 0x240C60u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x240C74u;
            goto label_240c74;
        }
    }
    ctx->pc = 0x240C64u;
    // 0x240c64: 0x24130001
    ctx->pc = 0x240c64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_240c68:
    // 0x240c68: 0x9602037a
    ctx->pc = 0x240c68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x240c6c: 0x24420001
    ctx->pc = 0x240c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x240c70: 0xa602037a
    ctx->pc = 0x240c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 2));
label_240c74:
    // 0x240c74: 0x8602037a
    ctx->pc = 0x240c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 890)));
    // 0x240c78: 0x2842000b
    ctx->pc = 0x240c78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x240c7c: 0x14400004
    ctx->pc = 0x240C7Cu;
    {
        const bool branch_taken_0x240c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240C80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240c7c) {
            ctx->pc = 0x240C90u;
            goto label_240c90;
        }
    }
    ctx->pc = 0x240C84u;
    // 0x240c84: 0xc4401c6c
    ctx->pc = 0x240c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240c88: 0xe6000260
    ctx->pc = 0x240c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x240c8c: 0x46000506
    ctx->pc = 0x240c8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_240c90:
    // 0x240c90: 0x16600007
    ctx->pc = 0x240C90u;
    {
        const bool branch_taken_0x240c90 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x240C94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240c90) {
            ctx->pc = 0x240CB0u;
            goto label_240cb0;
        }
    }
    ctx->pc = 0x240C98u;
    // 0x240c98: 0xc6000260
    ctx->pc = 0x240c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240c9c: 0xe6000264
    ctx->pc = 0x240c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x240ca0: 0x10000003
    ctx->pc = 0x240CA0u;
    {
        const bool branch_taken_0x240ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240CA4u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x240ca0) {
            ctx->pc = 0x240CB0u;
            goto label_240cb0;
        }
    }
    ctx->pc = 0x240CA8u;
label_240ca8:
    // 0x240ca8: 0xc6140260
    ctx->pc = 0x240ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240cac: 0x200202d
    ctx->pc = 0x240cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240cb0:
    // 0x240cb0: 0x3c013f80
    ctx->pc = 0x240cb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x240cb4: 0x44816000
    ctx->pc = 0x240cb4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x240cb8: 0xc08f14c
    ctx->pc = 0x240CB8u;
    SET_GPR_U32(ctx, 31, 0x240CC0u);
    ctx->pc = 0x240CBCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CC0u; }
    }
    if (ctx->pc != 0x240CC0u) { return; }
    ctx->pc = 0x240CC0u;
    // 0x240cc0: 0x12600005
    ctx->pc = 0x240CC0u;
    {
        const bool branch_taken_0x240cc0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x240CC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x240cc0) {
            ctx->pc = 0x240CD8u;
            goto label_240cd8;
        }
    }
    ctx->pc = 0x240CC8u;
    // 0x240cc8: 0xc4401c6c
    ctx->pc = 0x240cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240ccc: 0x4600a032
    ctx->pc = 0x240cccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240cd0: 0x45000005
    ctx->pc = 0x240CD0u;
    {
        const bool branch_taken_0x240cd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x240cd0) {
            ctx->pc = 0x240CE8u;
            goto label_240ce8;
        }
    }
    ctx->pc = 0x240CD8u;
label_240cd8:
    // 0x240cd8: 0x200202d
    ctx->pc = 0x240cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240cdc: 0xc08f196
    ctx->pc = 0x240CDCu;
    SET_GPR_U32(ctx, 31, 0x240CE4u);
    ctx->pc = 0x240CE0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C658u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_ang_0x23c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CE4u; }
    }
    if (ctx->pc != 0x240CE4u) { return; }
    ctx->pc = 0x240CE4u;
    // 0x240ce4: 0xe6000258
    ctx->pc = 0x240ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_240ce8:
    // 0x240ce8: 0xc090e82
    ctx->pc = 0x240CE8u;
    SET_GPR_U32(ctx, 31, 0x240CF0u);
    ctx->pc = 0x240CECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240CF0u; }
    }
    if (ctx->pc != 0x240CF0u) { return; }
    ctx->pc = 0x240CF0u;
    // 0x240cf0: 0x40034800
    ctx->pc = 0x240cf0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x240cf4: 0x3c02003a
    ctx->pc = 0x240cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x240cf8: 0x8c4421d0
    ctx->pc = 0x240cf8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x240cfc: 0x8c8201e8
    ctx->pc = 0x240cfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x240d00: 0x621823
    ctx->pc = 0x240d00u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240d04: 0x8c8201e0
    ctx->pc = 0x240d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x240d08: 0x621821
    ctx->pc = 0x240d08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240d0c: 0xac8301e0
    ctx->pc = 0x240d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 3));
    // 0x240d10: 0x8c8201e4
    ctx->pc = 0x240d10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x240d14: 0x24420001
    ctx->pc = 0x240d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x240d18: 0xac8201e4
    ctx->pc = 0x240d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 2));
    // 0x240d1c: 0xdfbf0050
    ctx->pc = 0x240d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_240d20:
    // 0x240d20: 0xdfb30040
    ctx->pc = 0x240d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240d24: 0xdfb20030
    ctx->pc = 0x240d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240d28: 0xdfb10020
    ctx->pc = 0x240d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240d2c: 0xdfb00010
    ctx->pc = 0x240d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240d30: 0xc7b50068
    ctx->pc = 0x240d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x240d34: 0xc7b40060
    ctx->pc = 0x240d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x240d38: 0x3e00008
    ctx->pc = 0x240D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240D3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2409E8u: goto label_2409e8;
            case 0x2409ECu: goto label_2409ec;
            case 0x240A00u: goto label_240a00;
            case 0x240A28u: goto label_240a28;
            case 0x240A4Cu: goto label_240a4c;
            case 0x240A58u: goto label_240a58;
            case 0x240A78u: goto label_240a78;
            case 0x240A9Cu: goto label_240a9c;
            case 0x240AE0u: goto label_240ae0;
            case 0x240AF0u: goto label_240af0;
            case 0x240B08u: goto label_240b08;
            case 0x240B18u: goto label_240b18;
            case 0x240B30u: goto label_240b30;
            case 0x240B38u: goto label_240b38;
            case 0x240B4Cu: goto label_240b4c;
            case 0x240B50u: goto label_240b50;
            case 0x240B7Cu: goto label_240b7c;
            case 0x240BA8u: goto label_240ba8;
            case 0x240C54u: goto label_240c54;
            case 0x240C68u: goto label_240c68;
            case 0x240C74u: goto label_240c74;
            case 0x240C90u: goto label_240c90;
            case 0x240CA8u: goto label_240ca8;
            case 0x240CB0u: goto label_240cb0;
            case 0x240CD8u: goto label_240cd8;
            case 0x240CE8u: goto label_240ce8;
            case 0x240D20u: goto label_240d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240D40u;
}
