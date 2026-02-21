#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic24
// Address: 0x23d928 - 0x23daf0
void move_logic24_0x23d928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23d928u;

    // 0x23d928: 0x27bdffb0
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23d92c: 0xffbf0030
    ctx->pc = 0x23d92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23d930: 0xffb20020
    ctx->pc = 0x23d930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23d934: 0xffb10010
    ctx->pc = 0x23d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23d938: 0xffb00000
    ctx->pc = 0x23d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d93c: 0xe7b40040
    ctx->pc = 0x23d93cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23d940: 0x80882d
    ctx->pc = 0x23d940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d944: 0x240303b0
    ctx->pc = 0x23d944u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23d948: 0x2231818
    ctx->pc = 0x23d948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d94c: 0x3c020033
    ctx->pc = 0x23d94cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23d950: 0x2442dfd0
    ctx->pc = 0x23d950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23d954: 0x628021
    ctx->pc = 0x23d954u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d958: 0x4480a000
    ctx->pc = 0x23d958u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x23d95c: 0x8e02036c
    ctx->pc = 0x23d95cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23d960: 0x2902a
    ctx->pc = 0x23d960u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x23d964: 0x40034800
    ctx->pc = 0x23d964u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23d968: 0x3c02003a
    ctx->pc = 0x23d968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23d96c: 0x8c4221d0
    ctx->pc = 0x23d96cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23d970: 0xac4302e8
    ctx->pc = 0x23d970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 3));
    // 0x23d974: 0x86030324
    ctx->pc = 0x23d974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23d978: 0x86020328
    ctx->pc = 0x23d978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23d97c: 0x50620004
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23D980u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x23D990u;
            goto label_23d990;
        }
    }
    ctx->pc = 0x23D984u;
    // 0x23d984: 0xc08e210
    ctx->pc = 0x23D984u;
    SET_GPR_U32(ctx, 31, 0x23D98Cu);
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D98Cu; }
    }
    if (ctx->pc != 0x23D98Cu) { return; }
    ctx->pc = 0x23D98Cu;
    // 0x23d98c: 0x8e02036c
    ctx->pc = 0x23d98cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_23d990:
    // 0x23d990: 0x1840000d
    ctx->pc = 0x23D990u;
    {
        const bool branch_taken_0x23d990 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23D994u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23d990) {
            ctx->pc = 0x23D9C8u;
            goto label_23d9c8;
        }
    }
    ctx->pc = 0x23D998u;
    // 0x23d998: 0x8e040338
    ctx->pc = 0x23d998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23d99c: 0x28820008
    ctx->pc = 0x23d99cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x23d9a0: 0x10400008
    ctx->pc = 0x23D9A0u;
    {
        const bool branch_taken_0x23d9a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23D9A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23d9a0) {
            ctx->pc = 0x23D9C4u;
            goto label_23d9c4;
        }
    }
    ctx->pc = 0x23D9A8u;
    // 0x23d9a8: 0x2442de30
    ctx->pc = 0x23d9a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23d9ac: 0x41880
    ctx->pc = 0x23d9acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d9b0: 0x621821
    ctx->pc = 0x23d9b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d9b4: 0xc4740000
    ctx->pc = 0x23d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d9b8: 0x24820001
    ctx->pc = 0x23d9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d9bc: 0xae020338
    ctx->pc = 0x23d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23d9c0: 0xae00036c
    ctx->pc = 0x23d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23d9c4:
    // 0x23d9c4: 0x3c020033
    ctx->pc = 0x23d9c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_23d9c8:
    // 0x23d9c8: 0x8c444638
    ctx->pc = 0x23d9c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 17976)));
    // 0x23d9cc: 0x240203b0
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23d9d0: 0x822018
    ctx->pc = 0x23d9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23d9d4: 0x3c020033
    ctx->pc = 0x23d9d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23d9d8: 0x2442dfe0
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x23d9dc: 0x822021
    ctx->pc = 0x23d9dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23d9e0: 0x24840030
    ctx->pc = 0x23d9e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
    // 0x23d9e4: 0xc09a2aa
    ctx->pc = 0x23D9E4u;
    SET_GPR_U32(ctx, 31, 0x23D9ECu);
    ctx->pc = 0x23D9E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x268AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_yaw_0x268aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D9ECu; }
    }
    if (ctx->pc != 0x23D9ECu) { return; }
    ctx->pc = 0x23D9ECu;
    // 0x23d9ec: 0x3c014049
    ctx->pc = 0x23d9ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23d9f0: 0x34210fdb
    ctx->pc = 0x23d9f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23d9f4: 0x44810800
    ctx->pc = 0x23d9f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23d9f8: 0x46010000
    ctx->pc = 0x23d9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23d9fc: 0x46140340
    ctx->pc = 0x23d9fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x23da00: 0x460d0834
    ctx->pc = 0x23da00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23da04: 0x0
    ctx->pc = 0x23da04u;
    // NOP
    // 0x23da08: 0x45000006
    ctx->pc = 0x23DA08u;
    {
        const bool branch_taken_0x23da08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DA0Cu;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23da08) {
            ctx->pc = 0x23DA24u;
            goto label_23da24;
        }
    }
    ctx->pc = 0x23DA10u;
    // 0x23da10: 0x3c0140c9
    ctx->pc = 0x23da10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23da14: 0x34210fdb
    ctx->pc = 0x23da14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23da18: 0x44810000
    ctx->pc = 0x23da18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23da1c: 0x1000000d
    ctx->pc = 0x23DA1Cu;
    {
        const bool branch_taken_0x23da1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DA20u;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x23da1c) {
            ctx->pc = 0x23DA54u;
            goto label_23da54;
        }
    }
    ctx->pc = 0x23DA24u;
label_23da24:
    // 0x23da24: 0xc60d0260
    ctx->pc = 0x23da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23da28: 0x3c01c049
    ctx->pc = 0x23da28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23da2c: 0x34210fdb
    ctx->pc = 0x23da2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23da30: 0x44810000
    ctx->pc = 0x23da30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23da34: 0x46006836
    ctx->pc = 0x23da34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23da38: 0x0
    ctx->pc = 0x23da38u;
    // NOP
    // 0x23da3c: 0x45020006
    ctx->pc = 0x23DA3Cu;
    {
        const bool branch_taken_0x23da3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23da3c) {
            ctx->pc = 0x23DA40u;
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
            ctx->pc = 0x23DA58u;
            goto label_23da58;
        }
    }
    ctx->pc = 0x23DA44u;
    // 0x23da44: 0x3c0140c9
    ctx->pc = 0x23da44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23da48: 0x34210fdb
    ctx->pc = 0x23da48u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23da4c: 0x44810000
    ctx->pc = 0x23da4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23da50: 0x46006b40
    ctx->pc = 0x23da50u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_23da54:
    // 0x23da54: 0xe60d0260
    ctx->pc = 0x23da54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_23da58:
    // 0x23da58: 0x3c014000
    ctx->pc = 0x23da58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23da5c: 0x44816000
    ctx->pc = 0x23da5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23da60: 0xc08f14c
    ctx->pc = 0x23DA60u;
    SET_GPR_U32(ctx, 31, 0x23DA68u);
    ctx->pc = 0x23DA64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA68u; }
    }
    if (ctx->pc != 0x23DA68u) { return; }
    ctx->pc = 0x23DA68u;
    // 0x23da68: 0xc08f20c
    ctx->pc = 0x23DA68u;
    SET_GPR_U32(ctx, 31, 0x23DA70u);
    ctx->pc = 0x23DA6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA70u; }
    }
    if (ctx->pc != 0x23DA70u) { return; }
    ctx->pc = 0x23DA70u;
    // 0x23da70: 0xe6000258
    ctx->pc = 0x23da70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23da74: 0xc090e82
    ctx->pc = 0x23DA74u;
    SET_GPR_U32(ctx, 31, 0x23DA7Cu);
    ctx->pc = 0x23DA78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA7Cu; }
    }
    if (ctx->pc != 0x23DA7Cu) { return; }
    ctx->pc = 0x23DA7Cu;
    // 0x23da7c: 0x86020294
    ctx->pc = 0x23da7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x23da80: 0x54400001
    ctx->pc = 0x23DA80u;
    {
        const bool branch_taken_0x23da80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23da80) {
            ctx->pc = 0x23DA84u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23DA88u;
            goto label_23da88;
        }
    }
    ctx->pc = 0x23DA88u;
label_23da88:
    // 0x23da88: 0x16400007
    ctx->pc = 0x23DA88u;
    {
        const bool branch_taken_0x23da88 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23da88) {
            ctx->pc = 0x23DAA8u;
            goto label_23daa8;
        }
    }
    ctx->pc = 0x23DA90u;
    // 0x23da90: 0x8e02036c
    ctx->pc = 0x23da90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23da94: 0x18400004
    ctx->pc = 0x23DA94u;
    {
        const bool branch_taken_0x23da94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23da94) {
            ctx->pc = 0x23DAA8u;
            goto label_23daa8;
        }
    }
    ctx->pc = 0x23DA9Cu;
    // 0x23da9c: 0xc6000260
    ctx->pc = 0x23da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23daa0: 0xe6000268
    ctx->pc = 0x23daa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x23daa4: 0xae000338
    ctx->pc = 0x23daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_23daa8:
    // 0x23daa8: 0x40034800
    ctx->pc = 0x23daa8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23daac: 0x3c02003a
    ctx->pc = 0x23daacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23dab0: 0x8c4421d0
    ctx->pc = 0x23dab0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23dab4: 0x8c8202e8
    ctx->pc = 0x23dab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x23dab8: 0x621823
    ctx->pc = 0x23dab8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dabc: 0x8c8202e0
    ctx->pc = 0x23dabcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x23dac0: 0x621821
    ctx->pc = 0x23dac0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dac4: 0xac8302e0
    ctx->pc = 0x23dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 3));
    // 0x23dac8: 0x8c8202e4
    ctx->pc = 0x23dac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x23dacc: 0x24420001
    ctx->pc = 0x23daccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23dad0: 0xac8202e4
    ctx->pc = 0x23dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 2));
    // 0x23dad4: 0xdfbf0030
    ctx->pc = 0x23dad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23dad8: 0xdfb20020
    ctx->pc = 0x23dad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dadc: 0xdfb10010
    ctx->pc = 0x23dadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dae0: 0xdfb00000
    ctx->pc = 0x23dae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dae4: 0xc7b40040
    ctx->pc = 0x23dae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23dae8: 0x3e00008
    ctx->pc = 0x23DAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D990u: goto label_23d990;
            case 0x23D9C4u: goto label_23d9c4;
            case 0x23D9C8u: goto label_23d9c8;
            case 0x23DA24u: goto label_23da24;
            case 0x23DA54u: goto label_23da54;
            case 0x23DA58u: goto label_23da58;
            case 0x23DA88u: goto label_23da88;
            case 0x23DAA8u: goto label_23daa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DAF0u;
}
