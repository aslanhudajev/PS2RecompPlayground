#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic21
// Address: 0x23de00 - 0x23dfec
void move_logic21_0x23de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23de00u;

    // 0x23de00: 0x27bdffb0
    ctx->pc = 0x23de00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23de04: 0xffbf0030
    ctx->pc = 0x23de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23de08: 0xffb20020
    ctx->pc = 0x23de08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23de0c: 0xffb10010
    ctx->pc = 0x23de0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23de10: 0xffb00000
    ctx->pc = 0x23de10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23de14: 0xe7b40040
    ctx->pc = 0x23de14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23de18: 0x80882d
    ctx->pc = 0x23de18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de1c: 0x240303b0
    ctx->pc = 0x23de1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23de20: 0x2231818
    ctx->pc = 0x23de20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23de24: 0x3c020033
    ctx->pc = 0x23de24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23de28: 0x2442dfd0
    ctx->pc = 0x23de28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23de2c: 0x628021
    ctx->pc = 0x23de2cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23de30: 0x4480a000
    ctx->pc = 0x23de30u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x23de34: 0x8e02036c
    ctx->pc = 0x23de34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23de38: 0x2902a
    ctx->pc = 0x23de38u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    // 0x23de3c: 0x860202f2
    ctx->pc = 0x23de3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 754)));
    // 0x23de40: 0x10400004
    ctx->pc = 0x23DE40u;
    {
        const bool branch_taken_0x23de40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DE44u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x23de40) {
            ctx->pc = 0x23DE54u;
            goto label_23de54;
        }
    }
    ctx->pc = 0x23DE48u;
    // 0x23de48: 0x86020288
    ctx->pc = 0x23de48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23de4c: 0x441000b
    ctx->pc = 0x23DE4Cu;
    {
        const bool branch_taken_0x23de4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23DE50u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x23de4c) {
            ctx->pc = 0x23DE7Cu;
            goto label_23de7c;
        }
    }
    ctx->pc = 0x23DE54u;
label_23de54:
    // 0x23de54: 0x24420005
    ctx->pc = 0x23de54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
    // 0x23de58: 0xa6020324
    ctx->pc = 0x23de58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23de5c: 0x220202d
    ctx->pc = 0x23de5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23de60: 0xdfbf0030
    ctx->pc = 0x23de60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23de64: 0xdfb20020
    ctx->pc = 0x23de64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23de68: 0xdfb10010
    ctx->pc = 0x23de68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23de6c: 0xdfb00000
    ctx->pc = 0x23de6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23de70: 0xc7b40040
    ctx->pc = 0x23de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23de74: 0x809095a
    ctx->pc = 0x23DE74u;
    ctx->pc = 0x23DE78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23DE7Cu;
label_23de7c:
    // 0x23de7c: 0x40034800
    ctx->pc = 0x23de7cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23de80: 0x3c02003a
    ctx->pc = 0x23de80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23de84: 0x8c4221d0
    ctx->pc = 0x23de84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23de88: 0xac4302b8
    ctx->pc = 0x23de88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 3));
    // 0x23de8c: 0x86030324
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23de90: 0x86020328
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23de94: 0x50620004
    ctx->pc = 0x23DE94u;
    {
        const bool branch_taken_0x23de94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23de94) {
            ctx->pc = 0x23DE98u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->pc = 0x23DEA8u;
            goto label_23dea8;
        }
    }
    ctx->pc = 0x23DE9Cu;
    // 0x23de9c: 0xc08e210
    ctx->pc = 0x23DE9Cu;
    SET_GPR_U32(ctx, 31, 0x23DEA4u);
    ctx->pc = 0x23DEA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DEA4u; }
    }
    if (ctx->pc != 0x23DEA4u) { return; }
    ctx->pc = 0x23DEA4u;
    // 0x23dea4: 0x8e02036c
    ctx->pc = 0x23dea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_23dea8:
    // 0x23dea8: 0x1840000d
    ctx->pc = 0x23DEA8u;
    {
        const bool branch_taken_0x23dea8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23DEACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23dea8) {
            ctx->pc = 0x23DEE0u;
            goto label_23dee0;
        }
    }
    ctx->pc = 0x23DEB0u;
    // 0x23deb0: 0x8e040338
    ctx->pc = 0x23deb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23deb4: 0x28820008
    ctx->pc = 0x23deb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x23deb8: 0x10400008
    ctx->pc = 0x23DEB8u;
    {
        const bool branch_taken_0x23deb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DEBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23deb8) {
            ctx->pc = 0x23DEDCu;
            goto label_23dedc;
        }
    }
    ctx->pc = 0x23DEC0u;
    // 0x23dec0: 0x2442de30
    ctx->pc = 0x23dec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23dec4: 0x41880
    ctx->pc = 0x23dec4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x23dec8: 0x621821
    ctx->pc = 0x23dec8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23decc: 0xc4740000
    ctx->pc = 0x23deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ded0: 0x24820001
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x23ded4: 0xae020338
    ctx->pc = 0x23ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23ded8: 0xae00036c
    ctx->pc = 0x23ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23dedc:
    // 0x23dedc: 0x200202d
    ctx->pc = 0x23dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23dee0:
    // 0x23dee0: 0xc08f0f0
    ctx->pc = 0x23DEE0u;
    SET_GPR_U32(ctx, 31, 0x23DEE8u);
    ctx->pc = 0x23DEE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DEE8u; }
    }
    if (ctx->pc != 0x23DEE8u) { return; }
    ctx->pc = 0x23DEE8u;
    // 0x23dee8: 0x3c014049
    ctx->pc = 0x23dee8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23deec: 0x34210fdb
    ctx->pc = 0x23deecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23def0: 0x44810800
    ctx->pc = 0x23def0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23def4: 0x46010000
    ctx->pc = 0x23def4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23def8: 0x46140340
    ctx->pc = 0x23def8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x23defc: 0x460d0834
    ctx->pc = 0x23defcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23df00: 0x0
    ctx->pc = 0x23df00u;
    // NOP
    // 0x23df04: 0x45000006
    ctx->pc = 0x23DF04u;
    {
        const bool branch_taken_0x23df04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DF08u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
        if (branch_taken_0x23df04) {
            ctx->pc = 0x23DF20u;
            goto label_23df20;
        }
    }
    ctx->pc = 0x23DF0Cu;
    // 0x23df0c: 0x3c0140c9
    ctx->pc = 0x23df0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23df10: 0x34210fdb
    ctx->pc = 0x23df10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23df14: 0x44810000
    ctx->pc = 0x23df14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23df18: 0x1000000d
    ctx->pc = 0x23DF18u;
    {
        const bool branch_taken_0x23df18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DF1Cu;
        ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x23df18) {
            ctx->pc = 0x23DF50u;
            goto label_23df50;
        }
    }
    ctx->pc = 0x23DF20u;
label_23df20:
    // 0x23df20: 0xc60d0260
    ctx->pc = 0x23df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23df24: 0x3c01c049
    ctx->pc = 0x23df24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23df28: 0x34210fdb
    ctx->pc = 0x23df28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23df2c: 0x44810000
    ctx->pc = 0x23df2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23df30: 0x46006836
    ctx->pc = 0x23df30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23df34: 0x0
    ctx->pc = 0x23df34u;
    // NOP
    // 0x23df38: 0x45020006
    ctx->pc = 0x23DF38u;
    {
        const bool branch_taken_0x23df38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23df38) {
            ctx->pc = 0x23DF3Cu;
            { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
            ctx->pc = 0x23DF54u;
            goto label_23df54;
        }
    }
    ctx->pc = 0x23DF40u;
    // 0x23df40: 0x3c0140c9
    ctx->pc = 0x23df40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23df44: 0x34210fdb
    ctx->pc = 0x23df44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23df48: 0x44810000
    ctx->pc = 0x23df48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23df4c: 0x46006b40
    ctx->pc = 0x23df4cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_23df50:
    // 0x23df50: 0xe60d0260
    ctx->pc = 0x23df50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
label_23df54:
    // 0x23df54: 0x3c014000
    ctx->pc = 0x23df54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x23df58: 0x44816000
    ctx->pc = 0x23df58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23df5c: 0xc08f14c
    ctx->pc = 0x23DF5Cu;
    SET_GPR_U32(ctx, 31, 0x23DF64u);
    ctx->pc = 0x23DF60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF64u; }
    }
    if (ctx->pc != 0x23DF64u) { return; }
    ctx->pc = 0x23DF64u;
    // 0x23df64: 0xc08f20c
    ctx->pc = 0x23DF64u;
    SET_GPR_U32(ctx, 31, 0x23DF6Cu);
    ctx->pc = 0x23DF68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF6Cu; }
    }
    if (ctx->pc != 0x23DF6Cu) { return; }
    ctx->pc = 0x23DF6Cu;
    // 0x23df6c: 0xe6000258
    ctx->pc = 0x23df6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23df70: 0xc090e82
    ctx->pc = 0x23DF70u;
    SET_GPR_U32(ctx, 31, 0x23DF78u);
    ctx->pc = 0x23DF74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF78u; }
    }
    if (ctx->pc != 0x23DF78u) { return; }
    ctx->pc = 0x23DF78u;
    // 0x23df78: 0x86020294
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x23df7c: 0x54400001
    ctx->pc = 0x23DF7Cu;
    {
        const bool branch_taken_0x23df7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23df7c) {
            ctx->pc = 0x23DF80u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23DF84u;
            goto label_23df84;
        }
    }
    ctx->pc = 0x23DF84u;
label_23df84:
    // 0x23df84: 0x16400007
    ctx->pc = 0x23DF84u;
    {
        const bool branch_taken_0x23df84 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23df84) {
            ctx->pc = 0x23DFA4u;
            goto label_23dfa4;
        }
    }
    ctx->pc = 0x23DF8Cu;
    // 0x23df8c: 0x8e02036c
    ctx->pc = 0x23df8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23df90: 0x18400004
    ctx->pc = 0x23DF90u;
    {
        const bool branch_taken_0x23df90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23df90) {
            ctx->pc = 0x23DFA4u;
            goto label_23dfa4;
        }
    }
    ctx->pc = 0x23DF98u;
    // 0x23df98: 0xc6000260
    ctx->pc = 0x23df98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23df9c: 0xe6000268
    ctx->pc = 0x23df9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x23dfa0: 0xae000338
    ctx->pc = 0x23dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_23dfa4:
    // 0x23dfa4: 0x40034800
    ctx->pc = 0x23dfa4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23dfa8: 0x3c02003a
    ctx->pc = 0x23dfa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23dfac: 0x8c4421d0
    ctx->pc = 0x23dfacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23dfb0: 0x8c8202b8
    ctx->pc = 0x23dfb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 696)));
    // 0x23dfb4: 0x621823
    ctx->pc = 0x23dfb4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dfb8: 0x8c8202b0
    ctx->pc = 0x23dfb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x23dfbc: 0x621821
    ctx->pc = 0x23dfbcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23dfc0: 0xac8302b0
    ctx->pc = 0x23dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 3));
    // 0x23dfc4: 0x8c8202b4
    ctx->pc = 0x23dfc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x23dfc8: 0x24420001
    ctx->pc = 0x23dfc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23dfcc: 0xac8202b4
    ctx->pc = 0x23dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 2));
    // 0x23dfd0: 0xdfbf0030
    ctx->pc = 0x23dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23dfd4: 0xdfb20020
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dfd8: 0xdfb10010
    ctx->pc = 0x23dfd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dfdc: 0xdfb00000
    ctx->pc = 0x23dfdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dfe0: 0xc7b40040
    ctx->pc = 0x23dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23dfe4: 0x3e00008
    ctx->pc = 0x23DFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DFE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DE54u: goto label_23de54;
            case 0x23DE7Cu: goto label_23de7c;
            case 0x23DEA8u: goto label_23dea8;
            case 0x23DEDCu: goto label_23dedc;
            case 0x23DEE0u: goto label_23dee0;
            case 0x23DF20u: goto label_23df20;
            case 0x23DF50u: goto label_23df50;
            case 0x23DF54u: goto label_23df54;
            case 0x23DF84u: goto label_23df84;
            case 0x23DFA4u: goto label_23dfa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DFECu;
}
