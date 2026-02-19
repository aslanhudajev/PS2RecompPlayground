#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic12
// Address: 0x23fa60 - 0x23fc04
void move_logic12_0x23fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23fa60u;

    // 0x23fa60: 0x27bdffc0
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fa64: 0xffbf0030
    ctx->pc = 0x23fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23fa68: 0xffb20020
    ctx->pc = 0x23fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23fa6c: 0xffb10010
    ctx->pc = 0x23fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23fa70: 0xffb00000
    ctx->pc = 0x23fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fa74: 0x80882d
    ctx->pc = 0x23fa74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa78: 0x240303b0
    ctx->pc = 0x23fa78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23fa7c: 0x2231818
    ctx->pc = 0x23fa7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23fa80: 0x3c020033
    ctx->pc = 0x23fa80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23fa84: 0x2442dfd0
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23fa88: 0x628021
    ctx->pc = 0x23fa88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fa8c: 0xc08ed18
    ctx->pc = 0x23FA8Cu;
    SET_GPR_U32(ctx, 31, 0x23FA94u);
    ctx->pc = 0x23FA90u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 676)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA94u; }
    }
    if (ctx->pc != 0x23FA94u) { return; }
    ctx->pc = 0x23FA94u;
    // 0x23fa94: 0x5040000a
    ctx->pc = 0x23FA94u;
    {
        const bool branch_taken_0x23fa94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23fa94) {
            ctx->pc = 0x23FA98u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
            ctx->pc = 0x23FAC0u;
            goto label_23fac0;
        }
    }
    ctx->pc = 0x23FA9Cu;
    // 0x23fa9c: 0x24020018
    ctx->pc = 0x23fa9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x23faa0: 0xa6020324
    ctx->pc = 0x23faa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23faa4: 0x220202d
    ctx->pc = 0x23faa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23faa8: 0xdfbf0030
    ctx->pc = 0x23faa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23faac: 0xdfb20020
    ctx->pc = 0x23faacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fab0: 0xdfb10010
    ctx->pc = 0x23fab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fab4: 0xdfb00000
    ctx->pc = 0x23fab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fab8: 0x809095a
    ctx->pc = 0x23FAB8u;
    ctx->pc = 0x23FABCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23FAC0u;
label_23fac0:
    // 0x23fac0: 0x28420002
    ctx->pc = 0x23fac0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x23fac4: 0x50400004
    ctx->pc = 0x23FAC4u;
    {
        const bool branch_taken_0x23fac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23fac4) {
            ctx->pc = 0x23FAC8u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x23FAD8u;
            goto label_23fad8;
        }
    }
    ctx->pc = 0x23FACCu;
    // 0x23facc: 0x16400009
    ctx->pc = 0x23FACCu;
    {
        const bool branch_taken_0x23facc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23facc) {
            ctx->pc = 0x23FAF4u;
            goto label_23faf4;
        }
    }
    ctx->pc = 0x23FAD4u;
    // 0x23fad4: 0xa6000324
    ctx->pc = 0x23fad4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 0));
label_23fad8:
    // 0x23fad8: 0x220202d
    ctx->pc = 0x23fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fadc: 0xdfbf0030
    ctx->pc = 0x23fadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fae0: 0xdfb20020
    ctx->pc = 0x23fae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fae4: 0xdfb10010
    ctx->pc = 0x23fae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fae8: 0xdfb00000
    ctx->pc = 0x23fae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23faec: 0x809095a
    ctx->pc = 0x23FAECu;
    ctx->pc = 0x23FAF0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23FAF4u;
label_23faf4:
    // 0x23faf4: 0x40034800
    ctx->pc = 0x23faf4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23faf8: 0x3c02003a
    ctx->pc = 0x23faf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23fafc: 0x8c4221d0
    ctx->pc = 0x23fafcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23fb00: 0xac430228
    ctx->pc = 0x23fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 3));
    // 0x23fb04: 0x86030324
    ctx->pc = 0x23fb04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23fb08: 0x86020328
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23fb0c: 0x50620004
    ctx->pc = 0x23FB0Cu;
    {
        const bool branch_taken_0x23fb0c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23fb0c) {
            ctx->pc = 0x23FB10u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x23FB20u;
            goto label_23fb20;
        }
    }
    ctx->pc = 0x23FB14u;
    // 0x23fb14: 0xc08e210
    ctx->pc = 0x23FB14u;
    SET_GPR_U32(ctx, 31, 0x23FB1Cu);
    ctx->pc = 0x23FB18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB1Cu; }
    }
    if (ctx->pc != 0x23FB1Cu) { return; }
    ctx->pc = 0x23FB1Cu;
    // 0x23fb1c: 0x200202d
    ctx->pc = 0x23fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23fb20:
    // 0x23fb20: 0xc08f0f0
    ctx->pc = 0x23FB20u;
    SET_GPR_U32(ctx, 31, 0x23FB28u);
    ctx->pc = 0x23FB24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB28u; }
    }
    if (ctx->pc != 0x23FB28u) { return; }
    ctx->pc = 0x23FB28u;
    // 0x23fb28: 0xe6000260
    ctx->pc = 0x23fb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23fb2c: 0xc08f20c
    ctx->pc = 0x23FB2Cu;
    SET_GPR_U32(ctx, 31, 0x23FB34u);
    ctx->pc = 0x23FB30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB34u; }
    }
    if (ctx->pc != 0x23FB34u) { return; }
    ctx->pc = 0x23FB34u;
    // 0x23fb34: 0xe6000258
    ctx->pc = 0x23fb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23fb38: 0xc090e82
    ctx->pc = 0x23FB38u;
    SET_GPR_U32(ctx, 31, 0x23FB40u);
    ctx->pc = 0x23FB3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB40u; }
    }
    if (ctx->pc != 0x23FB40u) { return; }
    ctx->pc = 0x23FB40u;
    // 0x23fb40: 0x8603032a
    ctx->pc = 0x23fb40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 810)));
    // 0x23fb44: 0x10600005
    ctx->pc = 0x23FB44u;
    {
        const bool branch_taken_0x23fb44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FB48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23fb44) {
            ctx->pc = 0x23FB5Cu;
            goto label_23fb5c;
        }
    }
    ctx->pc = 0x23FB4Cu;
    // 0x23fb4c: 0x10620013
    ctx->pc = 0x23FB4Cu;
    {
        const bool branch_taken_0x23fb4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23FB50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23fb4c) {
            ctx->pc = 0x23FB9Cu;
            goto label_23fb9c;
        }
    }
    ctx->pc = 0x23FB54u;
    // 0x23fb54: 0x1000001a
    ctx->pc = 0x23FB54u;
    {
        const bool branch_taken_0x23fb54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FB58u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x23fb54) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23FB5Cu;
label_23fb5c:
    // 0x23fb5c: 0x12400018
    ctx->pc = 0x23FB5Cu;
    {
        const bool branch_taken_0x23fb5c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FB60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x23fb5c) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23FB64u;
    // 0x23fb64: 0x924200fa
    ctx->pc = 0x23fb64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 250)));
    // 0x23fb68: 0x92030330
    ctx->pc = 0x23fb68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23fb6c: 0x431025
    ctx->pc = 0x23fb6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23fb70: 0xa24200fa
    ctx->pc = 0x23fb70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 250), (uint8_t)GPR_U32(ctx, 2));
    // 0x23fb74: 0xc60002f4
    ctx->pc = 0x23fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fb78: 0xe6000040
    ctx->pc = 0x23fb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x23fb7c: 0xc60002f8
    ctx->pc = 0x23fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fb80: 0xe6000044
    ctx->pc = 0x23fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x23fb84: 0xc60002fc
    ctx->pc = 0x23fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fb88: 0xe6000048
    ctx->pc = 0x23fb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x23fb8c: 0xc080c70
    ctx->pc = 0x23FB8Cu;
    SET_GPR_U32(ctx, 31, 0x23FB94u);
    ctx->pc = 0x23FB90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 576));
    ctx->pc = 0x2031C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjColOffset_0x2031c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FB94u; }
    }
    if (ctx->pc != 0x23FB94u) { return; }
    ctx->pc = 0x23FB94u;
    // 0x23fb94: 0x10000009
    ctx->pc = 0x23FB94u;
    {
        const bool branch_taken_0x23fb94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FB98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23fb94) {
            ctx->pc = 0x23FBBCu;
            goto label_23fbbc;
        }
    }
    ctx->pc = 0x23FB9Cu;
label_23fb9c:
    // 0x23fb9c: 0x12400008
    ctx->pc = 0x23FB9Cu;
    {
        const bool branch_taken_0x23fb9c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x23FBA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23fb9c) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23FBA4u;
    // 0x23fba4: 0x924300fa
    ctx->pc = 0x23fba4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 250)));
    // 0x23fba8: 0x14620005
    ctx->pc = 0x23FBA8u;
    {
        const bool branch_taken_0x23fba8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23FBACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x23fba8) {
            ctx->pc = 0x23FBC0u;
            goto label_23fbc0;
        }
    }
    ctx->pc = 0x23FBB0u;
    // 0x23fbb0: 0xae0002f4
    ctx->pc = 0x23fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x23fbb4: 0xae0002f8
    ctx->pc = 0x23fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
    // 0x23fbb8: 0xae0002fc
    ctx->pc = 0x23fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
label_23fbbc:
    // 0x23fbbc: 0xa602032a
    ctx->pc = 0x23fbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 810), (uint16_t)GPR_U32(ctx, 2));
label_23fbc0:
    // 0x23fbc0: 0x40034800
    ctx->pc = 0x23fbc0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23fbc4: 0x3c02003a
    ctx->pc = 0x23fbc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23fbc8: 0x8c4421d0
    ctx->pc = 0x23fbc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23fbcc: 0x8c820228
    ctx->pc = 0x23fbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x23fbd0: 0x621823
    ctx->pc = 0x23fbd0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fbd4: 0x8c820220
    ctx->pc = 0x23fbd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x23fbd8: 0x621821
    ctx->pc = 0x23fbd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23fbdc: 0xac830220
    ctx->pc = 0x23fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 3));
    // 0x23fbe0: 0x8c820224
    ctx->pc = 0x23fbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x23fbe4: 0x24420001
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23fbe8: 0xac820224
    ctx->pc = 0x23fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
    // 0x23fbec: 0xdfbf0030
    ctx->pc = 0x23fbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fbf0: 0xdfb20020
    ctx->pc = 0x23fbf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fbf4: 0xdfb10010
    ctx->pc = 0x23fbf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fbf8: 0xdfb00000
    ctx->pc = 0x23fbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fbfc: 0x3e00008
    ctx->pc = 0x23FBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23FAC0u: goto label_23fac0;
            case 0x23FAD8u: goto label_23fad8;
            case 0x23FAF4u: goto label_23faf4;
            case 0x23FB20u: goto label_23fb20;
            case 0x23FB5Cu: goto label_23fb5c;
            case 0x23FB9Cu: goto label_23fb9c;
            case 0x23FBBCu: goto label_23fbbc;
            case 0x23FBC0u: goto label_23fbc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23FC04u;
}
