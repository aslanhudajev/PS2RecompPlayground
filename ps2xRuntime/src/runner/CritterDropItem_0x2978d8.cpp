#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDropItem
// Address: 0x2978d8 - 0x297a7c
void CritterDropItem_0x2978d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2978d8u;

    // 0x2978d8: 0x27bdffa0
    ctx->pc = 0x2978d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2978dc: 0xffbf0050
    ctx->pc = 0x2978dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2978e0: 0xffb20040
    ctx->pc = 0x2978e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2978e4: 0xffb10030
    ctx->pc = 0x2978e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2978e8: 0xffb00020
    ctx->pc = 0x2978e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2978ec: 0x80882d
    ctx->pc = 0x2978ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978f0: 0x802d
    ctx->pc = 0x2978f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978f4: 0x8e220b54
    ctx->pc = 0x2978f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2900)));
    // 0x2978f8: 0x10400005
    ctx->pc = 0x2978F8u;
    {
        const bool branch_taken_0x2978f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2978FCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2978f8) {
            ctx->pc = 0x297910u;
            goto label_297910;
        }
    }
    ctx->pc = 0x297900u;
    // 0x297900: 0x40802d
    ctx->pc = 0x297900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297904: 0xae200b54
    ctx->pc = 0x297904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2900), GPR_U32(ctx, 0));
    // 0x297908: 0x10000026
    ctx->pc = 0x297908u;
    {
        const bool branch_taken_0x297908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29790Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x297908) {
            ctx->pc = 0x2979A4u;
            goto label_2979a4;
        }
    }
    ctx->pc = 0x297910u;
label_297910:
    // 0x297910: 0x8e220004
    ctx->pc = 0x297910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x297914: 0x8c420120
    ctx->pc = 0x297914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x297918: 0x84430020
    ctx->pc = 0x297918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29791c: 0x24020007
    ctx->pc = 0x29791cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x297920: 0x14620020
    ctx->pc = 0x297920u;
    {
        const bool branch_taken_0x297920 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x297920) {
            ctx->pc = 0x2979A4u;
            goto label_2979a4;
        }
    }
    ctx->pc = 0x297928u;
    // 0x297928: 0xc098980
    ctx->pc = 0x297928u;
    SET_GPR_U32(ctx, 31, 0x297930u);
    ctx->pc = 0x29792Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x262600u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelEnemyDesc_0x262600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297930u; }
    }
    if (ctx->pc != 0x297930u) { return; }
    ctx->pc = 0x297930u;
    // 0x297930: 0x3a0202d
    ctx->pc = 0x297930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297934: 0x3c05003b
    ctx->pc = 0x297934u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x297938: 0x24a5e348
    ctx->pc = 0x297938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959944));
    // 0x29793c: 0xc0b6252
    ctx->pc = 0x29793Cu;
    SET_GPR_U32(ctx, 31, 0x297944u);
    ctx->pc = 0x297940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297944u; }
    }
    if (ctx->pc != 0x297944u) { return; }
    ctx->pc = 0x297944u;
    // 0x297944: 0x83a20000
    ctx->pc = 0x297944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297948: 0x1040000f
    ctx->pc = 0x297948u;
    {
        const bool branch_taken_0x297948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29794Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x297948) {
            ctx->pc = 0x297988u;
            goto label_297988;
        }
    }
    ctx->pc = 0x297950u;
    // 0x297950: 0x3c02003c
    ctx->pc = 0x297950u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x297954: 0x2446a781
    ctx->pc = 0x297954u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x297958: 0x80a40000
    ctx->pc = 0x297958u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29795c: 0x0
    ctx->pc = 0x29795cu;
    // NOP
label_297960:
    // 0x297960: 0x861021
    ctx->pc = 0x297960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x297964: 0x90420000
    ctx->pc = 0x297964u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297968: 0x30420002
    ctx->pc = 0x297968u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x29796c: 0x2483ffe0
    ctx->pc = 0x29796cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x297970: 0x62200b
    ctx->pc = 0x297970u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x297974: 0xa0a40000
    ctx->pc = 0x297974u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x297978: 0x24a50001
    ctx->pc = 0x297978u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x29797c: 0x80a20000
    ctx->pc = 0x29797cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x297980: 0x5440fff7
    ctx->pc = 0x297980u;
    {
        const bool branch_taken_0x297980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x297980) {
            ctx->pc = 0x297984u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x297960u;
            goto label_297960;
        }
    }
    ctx->pc = 0x297988u;
label_297988:
    // 0x297988: 0x24040001
    ctx->pc = 0x297988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29798c: 0x24050010
    ctx->pc = 0x29798cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x297990: 0x3a0302d
    ctx->pc = 0x297990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297994: 0xc094e54
    ctx->pc = 0x297994u;
    SET_GPR_U32(ctx, 31, 0x29799Cu);
    ctx->pc = 0x297998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253950u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItem_0x253950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29799Cu; }
    }
    if (ctx->pc != 0x29799Cu) { return; }
    ctx->pc = 0x29799Cu;
    // 0x29799c: 0x40802d
    ctx->pc = 0x29799cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979a0: 0x24120002
    ctx->pc = 0x2979a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
label_2979a4:
    // 0x2979a4: 0x12000030
    ctx->pc = 0x2979A4u;
    {
        const bool branch_taken_0x2979a4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2979A8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2979a4) {
            ctx->pc = 0x297A68u;
            goto label_297a68;
        }
    }
    ctx->pc = 0x2979ACu;
    // 0x2979ac: 0x8e220004
    ctx->pc = 0x2979acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2979b0: 0x8c420120
    ctx->pc = 0x2979b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x2979b4: 0x84430020
    ctx->pc = 0x2979b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2979b8: 0x24020007
    ctx->pc = 0x2979b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2979bc: 0x10620008
    ctx->pc = 0x2979BCu;
    {
        const bool branch_taken_0x2979bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2979C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2979bc) {
            ctx->pc = 0x2979E0u;
            goto label_2979e0;
        }
    }
    ctx->pc = 0x2979C4u;
    // 0x2979c4: 0x1462000a
    ctx->pc = 0x2979C4u;
    {
        const bool branch_taken_0x2979c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2979C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 134));
        if (branch_taken_0x2979c4) {
            ctx->pc = 0x2979F0u;
            goto label_2979f0;
        }
    }
    ctx->pc = 0x2979CCu;
    // 0x2979cc: 0x2405ffff
    ctx->pc = 0x2979ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2979d0: 0xc0a3a1c
    ctx->pc = 0x2979D0u;
    SET_GPR_U32(ctx, 31, 0x2979D8u);
    ctx->pc = 0x2979D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979D8u; }
    }
    if (ctx->pc != 0x2979D8u) { return; }
    ctx->pc = 0x2979D8u;
    // 0x2979d8: 0x10000005
    ctx->pc = 0x2979D8u;
    {
        const bool branch_taken_0x2979d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2979d8) {
            ctx->pc = 0x2979F0u;
            goto label_2979f0;
        }
    }
    ctx->pc = 0x2979E0u;
label_2979e0:
    // 0x2979e0: 0x2404008a
    ctx->pc = 0x2979e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 138));
    // 0x2979e4: 0x2405ffff
    ctx->pc = 0x2979e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2979e8: 0xc0a3a1c
    ctx->pc = 0x2979E8u;
    SET_GPR_U32(ctx, 31, 0x2979F0u);
    ctx->pc = 0x2979ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2979F0u; }
    }
    if (ctx->pc != 0x2979F0u) { return; }
    ctx->pc = 0x2979F0u;
label_2979f0:
    // 0x2979f0: 0x12400008
    ctx->pc = 0x2979F0u;
    {
        const bool branch_taken_0x2979f0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2979F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2979f0) {
            ctx->pc = 0x297A14u;
            goto label_297a14;
        }
    }
    ctx->pc = 0x2979F8u;
    // 0x2979f8: 0xa20200e1
    ctx->pc = 0x2979f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 2));
    // 0x2979fc: 0x26240050
    ctx->pc = 0x2979fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    // 0x297a00: 0x44806000
    ctx->pc = 0x297a00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x297a04: 0xc09fc52
    ctx->pc = 0x297A04u;
    SET_GPR_U32(ctx, 31, 0x297A0Cu);
    ctx->pc = 0x297A08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F148u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartBagFX_0x27f148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A0Cu; }
    }
    if (ctx->pc != 0x297A0Cu) { return; }
    ctx->pc = 0x297A0Cu;
    // 0x297a0c: 0x10000016
    ctx->pc = 0x297A0Cu;
    {
        const bool branch_taken_0x297a0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297A10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x297a0c) {
            ctx->pc = 0x297A68u;
            goto label_297a68;
        }
    }
    ctx->pc = 0x297A14u;
label_297a14:
    // 0x297a14: 0xa20000e1
    ctx->pc = 0x297a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 0));
    // 0x297a18: 0x8e040070
    ctx->pc = 0x297a18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x297a1c: 0x24050002
    ctx->pc = 0x297a1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x297a20: 0xc0b41e4
    ctx->pc = 0x297A20u;
    SET_GPR_U32(ctx, 31, 0x297A28u);
    ctx->pc = 0x297A24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A28u; }
    }
    if (ctx->pc != 0x297A28u) { return; }
    ctx->pc = 0x297A28u;
    // 0x297a28: 0x8e020000
    ctx->pc = 0x297a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297a2c: 0x8c430000
    ctx->pc = 0x297a2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297a30: 0x24020001
    ctx->pc = 0x297a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x297a34: 0x54620004
    ctx->pc = 0x297A34u;
    {
        const bool branch_taken_0x297a34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x297a34) {
            ctx->pc = 0x297A38u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x297A48u;
            goto label_297a48;
        }
    }
    ctx->pc = 0x297A3Cu;
    // 0x297a3c: 0x2402003c
    ctx->pc = 0x297a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x297a40: 0xa6020100
    ctx->pc = 0x297a40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x297a44: 0xc6200040
    ctx->pc = 0x297a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_297a48:
    // 0x297a48: 0xe6000040
    ctx->pc = 0x297a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x297a4c: 0xc6200044
    ctx->pc = 0x297a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297a50: 0xe6000044
    ctx->pc = 0x297a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x297a54: 0xc6200048
    ctx->pc = 0x297a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297a58: 0xe6000048
    ctx->pc = 0x297a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x297a5c: 0xc094c28
    ctx->pc = 0x297A5Cu;
    SET_GPR_U32(ctx, 31, 0x297A64u);
    ctx->pc = 0x297A60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2530A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceItem_0x2530a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A64u; }
    }
    if (ctx->pc != 0x297A64u) { return; }
    ctx->pc = 0x297A64u;
    // 0x297a64: 0xdfbf0050
    ctx->pc = 0x297a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_297a68:
    // 0x297a68: 0xdfb20040
    ctx->pc = 0x297a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297a6c: 0xdfb10030
    ctx->pc = 0x297a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a70: 0xdfb00020
    ctx->pc = 0x297a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297a74: 0x3e00008
    ctx->pc = 0x297A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297910u: goto label_297910;
            case 0x297960u: goto label_297960;
            case 0x297988u: goto label_297988;
            case 0x2979A4u: goto label_2979a4;
            case 0x2979E0u: goto label_2979e0;
            case 0x2979F0u: goto label_2979f0;
            case 0x297A14u: goto label_297a14;
            case 0x297A48u: goto label_297a48;
            case 0x297A68u: goto label_297a68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297A7Cu;
}
