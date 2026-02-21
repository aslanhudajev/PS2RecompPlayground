#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill_enemy
// Address: 0x239cd0 - 0x239eec
void kill_enemy_0x239cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239cd0u;

    // 0x239cd0: 0x27bdff90
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x239cd4: 0xffbf0060
    ctx->pc = 0x239cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x239cd8: 0xffb30050
    ctx->pc = 0x239cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x239cdc: 0xffb20040
    ctx->pc = 0x239cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x239ce0: 0xffb10030
    ctx->pc = 0x239ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x239ce4: 0xffb00020
    ctx->pc = 0x239ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x239ce8: 0x80982d
    ctx->pc = 0x239ce8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239cec: 0x240303b0
    ctx->pc = 0x239cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x239cf0: 0x2631818
    ctx->pc = 0x239cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x239cf4: 0x3c020033
    ctx->pc = 0x239cf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x239cf8: 0x2442dfd0
    ctx->pc = 0x239cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x239cfc: 0x628821
    ctx->pc = 0x239cfcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239d00: 0x802d
    ctx->pc = 0x239d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d04: 0x3c020036
    ctx->pc = 0x239d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x239d08: 0x8c42dbac
    ctx->pc = 0x239d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
    // 0x239d0c: 0x14400070
    ctx->pc = 0x239D0Cu;
    {
        const bool branch_taken_0x239d0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x239D10u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239d0c) {
            ctx->pc = 0x239ED0u;
            goto label_239ed0;
        }
    }
    ctx->pc = 0x239D14u;
    // 0x239d14: 0x8e220398
    ctx->pc = 0x239d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 920)));
    // 0x239d18: 0x50400005
    ctx->pc = 0x239D18u;
    {
        const bool branch_taken_0x239d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x239d18) {
            ctx->pc = 0x239D1Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D20u;
    // 0x239d20: 0x40802d
    ctx->pc = 0x239d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d24: 0xae200398
    ctx->pc = 0x239d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
    // 0x239d28: 0x10000021
    ctx->pc = 0x239D28u;
    {
        const bool branch_taken_0x239d28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239D2Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x239d28) {
            ctx->pc = 0x239DB0u;
            goto label_239db0;
        }
    }
    ctx->pc = 0x239D30u;
label_239d30:
    // 0x239d30: 0x24020020
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x239d34: 0x1462001e
    ctx->pc = 0x239D34u;
    {
        const bool branch_taken_0x239d34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239d34) {
            ctx->pc = 0x239DB0u;
            goto label_239db0;
        }
    }
    ctx->pc = 0x239D3Cu;
    // 0x239d3c: 0xc098980
    ctx->pc = 0x239D3Cu;
    SET_GPR_U32(ctx, 31, 0x239D44u);
    ctx->pc = 0x239D40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x262600u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelEnemyDesc_0x262600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D44u; }
    }
    if (ctx->pc != 0x239D44u) { return; }
    ctx->pc = 0x239D44u;
    // 0x239d44: 0x3a0202d
    ctx->pc = 0x239d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d48: 0x3c05003a
    ctx->pc = 0x239d48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x239d4c: 0x24a57f80
    ctx->pc = 0x239d4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32640));
    // 0x239d50: 0xc0b6252
    ctx->pc = 0x239D50u;
    SET_GPR_U32(ctx, 31, 0x239D58u);
    ctx->pc = 0x239D54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D58u; }
    }
    if (ctx->pc != 0x239D58u) { return; }
    ctx->pc = 0x239D58u;
    // 0x239d58: 0x83a20000
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239d5c: 0x1040000e
    ctx->pc = 0x239D5Cu;
    {
        const bool branch_taken_0x239d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239D60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239d5c) {
            ctx->pc = 0x239D98u;
            goto label_239d98;
        }
    }
    ctx->pc = 0x239D64u;
    // 0x239d64: 0x3c02003c
    ctx->pc = 0x239d64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x239d68: 0x2446a781
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x239d6c: 0x80a40000
    ctx->pc = 0x239d6cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_239d70:
    // 0x239d70: 0x861021
    ctx->pc = 0x239d70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x239d74: 0x90420000
    ctx->pc = 0x239d74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239d78: 0x30420002
    ctx->pc = 0x239d78u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x239d7c: 0x2483ffe0
    ctx->pc = 0x239d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x239d80: 0x62200b
    ctx->pc = 0x239d80u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x239d84: 0xa0a40000
    ctx->pc = 0x239d84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x239d88: 0x24a50001
    ctx->pc = 0x239d88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x239d8c: 0x80a20000
    ctx->pc = 0x239d8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239d90: 0x5440fff7
    ctx->pc = 0x239D90u;
    {
        const bool branch_taken_0x239d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x239d90) {
            ctx->pc = 0x239D94u;
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x239D70u;
            goto label_239d70;
        }
    }
    ctx->pc = 0x239D98u;
label_239d98:
    // 0x239d98: 0x24040001
    ctx->pc = 0x239d98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d9c: 0x24050010
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x239da0: 0x3a0302d
    ctx->pc = 0x239da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239da4: 0xc094e54
    ctx->pc = 0x239DA4u;
    SET_GPR_U32(ctx, 31, 0x239DACu);
    ctx->pc = 0x239DA8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253950u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItem_0x253950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DACu; }
    }
    if (ctx->pc != 0x239DACu) { return; }
    ctx->pc = 0x239DACu;
    // 0x239dac: 0x40802d
    ctx->pc = 0x239dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239db0:
    // 0x239db0: 0x5200001f
    ctx->pc = 0x239DB0u;
    {
        const bool branch_taken_0x239db0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x239db0) {
            ctx->pc = 0x239DB4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x239E30u;
            goto label_239e30;
        }
    }
    ctx->pc = 0x239DB8u;
    // 0x239db8: 0x12400008
    ctx->pc = 0x239DB8u;
    {
        const bool branch_taken_0x239db8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x239DBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x239db8) {
            ctx->pc = 0x239DDCu;
            goto label_239ddc;
        }
    }
    ctx->pc = 0x239DC0u;
    // 0x239dc0: 0xa20200e1
    ctx->pc = 0x239dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 2));
    // 0x239dc4: 0x26240050
    ctx->pc = 0x239dc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    // 0x239dc8: 0x44806000
    ctx->pc = 0x239dc8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x239dcc: 0xc09fc52
    ctx->pc = 0x239DCCu;
    SET_GPR_U32(ctx, 31, 0x239DD4u);
    ctx->pc = 0x239DD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F148u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartBagFX_0x27f148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DD4u; }
    }
    if (ctx->pc != 0x239DD4u) { return; }
    ctx->pc = 0x239DD4u;
    // 0x239dd4: 0x10000016
    ctx->pc = 0x239DD4u;
    {
        const bool branch_taken_0x239dd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239DD8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        if (branch_taken_0x239dd4) {
            ctx->pc = 0x239E30u;
            goto label_239e30;
        }
    }
    ctx->pc = 0x239DDCu;
label_239ddc:
    // 0x239ddc: 0xa20000e1
    ctx->pc = 0x239ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 0));
    // 0x239de0: 0x8e040070
    ctx->pc = 0x239de0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x239de4: 0x24050002
    ctx->pc = 0x239de4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x239de8: 0xc0b41e4
    ctx->pc = 0x239DE8u;
    SET_GPR_U32(ctx, 31, 0x239DF0u);
    ctx->pc = 0x239DECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DF0u; }
    }
    if (ctx->pc != 0x239DF0u) { return; }
    ctx->pc = 0x239DF0u;
    // 0x239df0: 0x8e020000
    ctx->pc = 0x239df0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x239df4: 0x8c430000
    ctx->pc = 0x239df4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239df8: 0x24020001
    ctx->pc = 0x239df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x239dfc: 0x54620004
    ctx->pc = 0x239DFCu;
    {
        const bool branch_taken_0x239dfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239dfc) {
            ctx->pc = 0x239E00u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x239E10u;
            goto label_239e10;
        }
    }
    ctx->pc = 0x239E04u;
    // 0x239e04: 0x2402003c
    ctx->pc = 0x239e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x239e08: 0xa6020100
    ctx->pc = 0x239e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 256), (uint16_t)GPR_U32(ctx, 2));
    // 0x239e0c: 0xc6200040
    ctx->pc = 0x239e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_239e10:
    // 0x239e10: 0xe6000040
    ctx->pc = 0x239e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x239e14: 0xc6200044
    ctx->pc = 0x239e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239e18: 0xe6000044
    ctx->pc = 0x239e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x239e1c: 0xc6200048
    ctx->pc = 0x239e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x239e20: 0xe6000048
    ctx->pc = 0x239e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x239e24: 0xc094c28
    ctx->pc = 0x239E24u;
    SET_GPR_U32(ctx, 31, 0x239E2Cu);
    ctx->pc = 0x239E28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2530A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaceItem_0x2530a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E2Cu; }
    }
    if (ctx->pc != 0x239E2Cu) { return; }
    ctx->pc = 0x239E2Cu;
    // 0x239e2c: 0x8e230000
    ctx->pc = 0x239e2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239e30:
    // 0x239e30: 0x2402001b
    ctx->pc = 0x239e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x239e34: 0x54620004
    ctx->pc = 0x239E34u;
    {
        const bool branch_taken_0x239e34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239e34) {
            ctx->pc = 0x239E38u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
            ctx->pc = 0x239E48u;
            goto label_239e48;
        }
    }
    ctx->pc = 0x239E3Cu;
    // 0x239e3c: 0xc08e6f4
    ctx->pc = 0x239E3Cu;
    SET_GPR_U32(ctx, 31, 0x239E44u);
    ctx->pc = 0x239E40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_death_fx_0x239bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E44u; }
    }
    if (ctx->pc != 0x239E44u) { return; }
    ctx->pc = 0x239E44u;
    // 0x239e44: 0xae200214
    ctx->pc = 0x239e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_239e48:
    // 0x239e48: 0xae2000c8
    ctx->pc = 0x239e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x239e4c: 0xc09a3ae
    ctx->pc = 0x239E4Cu;
    SET_GPR_U32(ctx, 31, 0x239E54u);
    ctx->pc = 0x239E50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x268EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_target_0x268eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E54u; }
    }
    if (ctx->pc != 0x239E54u) { return; }
    ctx->pc = 0x239E54u;
    // 0x239e54: 0x8e2401f0
    ctx->pc = 0x239e54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x239e58: 0x50800005
    ctx->pc = 0x239E58u;
    {
        const bool branch_taken_0x239e58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x239e58) {
            ctx->pc = 0x239E5Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 500)));
            ctx->pc = 0x239E70u;
            goto label_239e70;
        }
    }
    ctx->pc = 0x239E60u;
    // 0x239e60: 0xc0b3f1a
    ctx->pc = 0x239E60u;
    SET_GPR_U32(ctx, 31, 0x239E68u);
    ctx->pc = 0x239E64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E68u; }
    }
    if (ctx->pc != 0x239E68u) { return; }
    ctx->pc = 0x239E68u;
    // 0x239e68: 0xae2001f0
    ctx->pc = 0x239e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x239e6c: 0x8e2401f4
    ctx->pc = 0x239e6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 500)));
label_239e70:
    // 0x239e70: 0x4820005
    ctx->pc = 0x239E70u;
    {
        const bool branch_taken_0x239e70 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x239e70) {
            ctx->pc = 0x239E74u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x239E88u;
            goto label_239e88;
        }
    }
    ctx->pc = 0x239E78u;
    // 0x239e78: 0xc09e964
    ctx->pc = 0x239E78u;
    SET_GPR_U32(ctx, 31, 0x239E80u);
    ctx->pc = 0x239E7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239E80u; }
    }
    if (ctx->pc != 0x239E80u) { return; }
    ctx->pc = 0x239E80u;
    // 0x239e80: 0xae2201f4
    ctx->pc = 0x239e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
    // 0x239e84: 0x8e230000
    ctx->pc = 0x239e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239e88:
    // 0x239e88: 0x2402001b
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
    // 0x239e8c: 0x14620004
    ctx->pc = 0x239E8Cu;
    {
        const bool branch_taken_0x239e8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x239E90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239e8c) {
            ctx->pc = 0x239EA0u;
            goto label_239ea0;
        }
    }
    ctx->pc = 0x239E94u;
    // 0x239e94: 0x8e240070
    ctx->pc = 0x239e94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x239e98: 0xc09ea22
    ctx->pc = 0x239E98u;
    SET_GPR_U32(ctx, 31, 0x239EA0u);
    ctx->pc = 0x239E9Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27A888u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParented_0x27a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239EA0u; }
    }
    if (ctx->pc != 0x239EA0u) { return; }
    ctx->pc = 0x239EA0u;
label_239ea0:
    // 0x239ea0: 0xc08496c
    ctx->pc = 0x239EA0u;
    SET_GPR_U32(ctx, 31, 0x239EA8u);
    ctx->pc = 0x239EA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239EA8u; }
    }
    if (ctx->pc != 0x239EA8u) { return; }
    ctx->pc = 0x239EA8u;
    // 0x239ea8: 0x3c100033
    ctx->pc = 0x239ea8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
    // 0x239eac: 0x24020001
    ctx->pc = 0x239eacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x239eb0: 0xae024644
    ctx->pc = 0x239eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17988), GPR_U32(ctx, 2));
    // 0x239eb4: 0x8e240070
    ctx->pc = 0x239eb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x239eb8: 0xc0b3f1a
    ctx->pc = 0x239EB8u;
    SET_GPR_U32(ctx, 31, 0x239EC0u);
    ctx->pc = 0x239EBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239EC0u; }
    }
    if (ctx->pc != 0x239EC0u) { return; }
    ctx->pc = 0x239EC0u;
    // 0x239ec0: 0xae004644
    ctx->pc = 0x239ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17988), GPR_U32(ctx, 0));
    // 0x239ec4: 0xae200070
    ctx->pc = 0x239ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
    // 0x239ec8: 0xc08e688
    ctx->pc = 0x239EC8u;
    SET_GPR_U32(ctx, 31, 0x239ED0u);
    ctx->pc = 0x239ECCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        uncouple_enemy_0x239a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239ED0u; }
    }
    if (ctx->pc != 0x239ED0u) { return; }
    ctx->pc = 0x239ED0u;
label_239ed0:
    // 0x239ed0: 0xdfbf0060
    ctx->pc = 0x239ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x239ed4: 0xdfb30050
    ctx->pc = 0x239ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239ed8: 0xdfb20040
    ctx->pc = 0x239ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239edc: 0xdfb10030
    ctx->pc = 0x239edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239ee0: 0xdfb00020
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239ee4: 0x3e00008
    ctx->pc = 0x239EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239EE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239D30u: goto label_239d30;
            case 0x239D70u: goto label_239d70;
            case 0x239D98u: goto label_239d98;
            case 0x239DB0u: goto label_239db0;
            case 0x239DDCu: goto label_239ddc;
            case 0x239E10u: goto label_239e10;
            case 0x239E30u: goto label_239e30;
            case 0x239E48u: goto label_239e48;
            case 0x239E70u: goto label_239e70;
            case 0x239E88u: goto label_239e88;
            case 0x239EA0u: goto label_239ea0;
            case 0x239ED0u: goto label_239ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239EECu;
}
