#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic22
// Address: 0x23dc40 - 0x23ddfc
void move_logic22_0x23dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23dc40u;

    // 0x23dc40: 0x27bdffb0
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23dc44: 0xffbf0040
    ctx->pc = 0x23dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23dc48: 0xffb20030
    ctx->pc = 0x23dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23dc4c: 0xffb10020
    ctx->pc = 0x23dc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x23dc50: 0xffb00010
    ctx->pc = 0x23dc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23dc54: 0x80902d
    ctx->pc = 0x23dc54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dc58: 0x240303b0
    ctx->pc = 0x23dc58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23dc5c: 0x2431818
    ctx->pc = 0x23dc5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23dc60: 0x3c020033
    ctx->pc = 0x23dc60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23dc64: 0x2442dfd0
    ctx->pc = 0x23dc64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23dc68: 0xc08ed18
    ctx->pc = 0x23DC68u;
    SET_GPR_U32(ctx, 31, 0x23DC70u);
    ctx->pc = 0x23DC6Cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DC70u; }
    }
    if (ctx->pc != 0x23DC70u) { return; }
    ctx->pc = 0x23DC70u;
    // 0x23dc70: 0x14400009
    ctx->pc = 0x23DC70u;
    {
        const bool branch_taken_0x23dc70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23DC74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x23dc70) {
            ctx->pc = 0x23DC98u;
            goto label_23dc98;
        }
    }
    ctx->pc = 0x23DC78u;
    // 0x23dc78: 0x862202f2
    ctx->pc = 0x23dc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 754)));
    // 0x23dc7c: 0x10400005
    ctx->pc = 0x23DC7Cu;
    {
        const bool branch_taken_0x23dc7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DC80u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x23dc7c) {
            ctx->pc = 0x23DC94u;
            goto label_23dc94;
        }
    }
    ctx->pc = 0x23DC84u;
    // 0x23dc84: 0x86220288
    ctx->pc = 0x23dc84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x23dc88: 0x4430008
    ctx->pc = 0x23DC88u;
    {
        const bool branch_taken_0x23dc88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23dc88) {
            ctx->pc = 0x23DC8Cu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 804)));
            ctx->pc = 0x23DCACu;
            goto label_23dcac;
        }
    }
    ctx->pc = 0x23DC90u;
    // 0x23dc90: 0x32420001
    ctx->pc = 0x23dc90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 18), 1));
label_23dc94:
    // 0x23dc94: 0x24420005
    ctx->pc = 0x23dc94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5));
label_23dc98:
    // 0x23dc98: 0xa6220324
    ctx->pc = 0x23dc98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23dc9c: 0xc09095a
    ctx->pc = 0x23DC9Cu;
    SET_GPR_U32(ctx, 31, 0x23DCA4u);
    ctx->pc = 0x23DCA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242568u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_ai_0x242568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DCA4u; }
    }
    if (ctx->pc != 0x23DCA4u) { return; }
    ctx->pc = 0x23DCA4u;
    // 0x23dca4: 0x10000050
    ctx->pc = 0x23DCA4u;
    {
        const bool branch_taken_0x23dca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DCA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x23dca4) {
            ctx->pc = 0x23DDE8u;
            goto label_23dde8;
        }
    }
    ctx->pc = 0x23DCACu;
label_23dcac:
    // 0x23dcac: 0x86220328
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 808)));
    // 0x23dcb0: 0x50620004
    ctx->pc = 0x23DCB0u;
    {
        const bool branch_taken_0x23dcb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23dcb0) {
            ctx->pc = 0x23DCB4u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 810)));
            ctx->pc = 0x23DCC4u;
            goto label_23dcc4;
        }
    }
    ctx->pc = 0x23DCB8u;
    // 0x23dcb8: 0xc08e210
    ctx->pc = 0x23DCB8u;
    SET_GPR_U32(ctx, 31, 0x23DCC0u);
    ctx->pc = 0x23DCBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DCC0u; }
    }
    if (ctx->pc != 0x23DCC0u) { return; }
    ctx->pc = 0x23DCC0u;
    // 0x23dcc0: 0x8623032a
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 810)));
label_23dcc4:
    // 0x23dcc4: 0x2402ffff
    ctx->pc = 0x23dcc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23dcc8: 0x10620037
    ctx->pc = 0x23DCC8u;
    {
        const bool branch_taken_0x23dcc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23DCCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23dcc8) {
            ctx->pc = 0x23DDA8u;
            goto label_23dda8;
        }
    }
    ctx->pc = 0x23DCD0u;
    // 0x23dcd0: 0x1460000b
    ctx->pc = 0x23DCD0u;
    {
        const bool branch_taken_0x23dcd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x23DCD4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x23dcd0) {
            ctx->pc = 0x23DD00u;
            goto label_23dd00;
        }
    }
    ctx->pc = 0x23DCD8u;
    // 0x23dcd8: 0xc08de78
    ctx->pc = 0x23DCD8u;
    SET_GPR_U32(ctx, 31, 0x23DCE0u);
    ctx->pc = 0x23DCDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x2379E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_milestone_0x2379e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DCE0u; }
    }
    if (ctx->pc != 0x23DCE0u) { return; }
    ctx->pc = 0x23DCE0u;
    // 0x23dce0: 0xae220330
    ctx->pc = 0x23dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x23dce4: 0x220202d
    ctx->pc = 0x23dce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23dce8: 0xc08f11c
    ctx->pc = 0x23DCE8u;
    SET_GPR_U32(ctx, 31, 0x23DCF0u);
    ctx->pc = 0x23DCECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_milestone_ang_0x23c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DCF0u; }
    }
    if (ctx->pc != 0x23DCF0u) { return; }
    ctx->pc = 0x23DCF0u;
    // 0x23dcf0: 0xe6200260
    ctx->pc = 0x23dcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x23dcf4: 0x24020001
    ctx->pc = 0x23dcf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dcf8: 0xa622032a
    ctx->pc = 0x23dcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x23dcfc: 0x3c040034
    ctx->pc = 0x23dcfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_23dd00:
    // 0x23dd00: 0x24848b80
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937472));
    // 0x23dd04: 0x8e220330
    ctx->pc = 0x23dd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x23dd08: 0x24030070
    ctx->pc = 0x23dd08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 112));
    // 0x23dd0c: 0x431018
    ctx->pc = 0x23dd0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23dd10: 0x441021
    ctx->pc = 0x23dd10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23dd14: 0xc44c0030
    ctx->pc = 0x23dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23dd18: 0xc6200040
    ctx->pc = 0x23dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dd1c: 0x46006301
    ctx->pc = 0x23dd1cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x23dd20: 0xe7ac0000
    ctx->pc = 0x23dd20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23dd24: 0xc4400034
    ctx->pc = 0x23dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dd28: 0xc6210044
    ctx->pc = 0x23dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dd2c: 0x46010001
    ctx->pc = 0x23dd2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23dd30: 0xe7a00004
    ctx->pc = 0x23dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23dd34: 0xc44d0038
    ctx->pc = 0x23dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23dd38: 0xc6200048
    ctx->pc = 0x23dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dd3c: 0x46006b41
    ctx->pc = 0x23dd3cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x23dd40: 0xc0b5c34
    ctx->pc = 0x23DD40u;
    SET_GPR_U32(ctx, 31, 0x23DD48u);
    ctx->pc = 0x23DD44u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD48u; }
    }
    if (ctx->pc != 0x23DD48u) { return; }
    ctx->pc = 0x23DD48u;
    // 0x23dd48: 0x3c013fc0
    ctx->pc = 0x23dd48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x23dd4c: 0x44810800
    ctx->pc = 0x23dd4cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23dd50: 0x46010036
    ctx->pc = 0x23dd50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dd54: 0x0
    ctx->pc = 0x23dd54u;
    // NOP
    // 0x23dd58: 0x4500000f
    ctx->pc = 0x23DD58u;
    {
        const bool branch_taken_0x23dd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23DD5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23dd58) {
            ctx->pc = 0x23DD98u;
            goto label_23dd98;
        }
    }
    ctx->pc = 0x23DD60u;
    // 0x23dd60: 0x8e300330
    ctx->pc = 0x23dd60u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 816)));
    // 0x23dd64: 0x3c013e32
    ctx->pc = 0x23dd64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15922 << 16));
    // 0x23dd68: 0x3421b8c3
    ctx->pc = 0x23dd68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x23dd6c: 0x44816000
    ctx->pc = 0x23dd6cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23dd70: 0xc08deba
    ctx->pc = 0x23DD70u;
    SET_GPR_U32(ctx, 31, 0x23DD78u);
    ctx->pc = 0x23DD74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x237AE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_next_milestone_0x237ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD78u; }
    }
    if (ctx->pc != 0x23DD78u) { return; }
    ctx->pc = 0x23DD78u;
    // 0x23dd78: 0x10500004
    ctx->pc = 0x23DD78u;
    {
        const bool branch_taken_0x23dd78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x23DD7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x23dd78) {
            ctx->pc = 0x23DD8Cu;
            goto label_23dd8c;
        }
    }
    ctx->pc = 0x23DD80u;
    // 0x23dd80: 0x9622032a
    ctx->pc = 0x23dd80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 810)));
    // 0x23dd84: 0x10000002
    ctx->pc = 0x23DD84u;
    {
        const bool branch_taken_0x23dd84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DD88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x23dd84) {
            ctx->pc = 0x23DD90u;
            goto label_23dd90;
        }
    }
    ctx->pc = 0x23DD8Cu;
label_23dd8c:
    // 0x23dd8c: 0x2402ffff
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23dd90:
    // 0x23dd90: 0xa622032a
    ctx->pc = 0x23dd90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 810), (uint16_t)GPR_U32(ctx, 2));
    // 0x23dd94: 0x220202d
    ctx->pc = 0x23dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23dd98:
    // 0x23dd98: 0xc08f11c
    ctx->pc = 0x23DD98u;
    SET_GPR_U32(ctx, 31, 0x23DDA0u);
    ctx->pc = 0x23DD9Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 816)));
    ctx->pc = 0x23C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_milestone_ang_0x23c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDA0u; }
    }
    if (ctx->pc != 0x23DDA0u) { return; }
    ctx->pc = 0x23DDA0u;
    // 0x23dda0: 0x10000004
    ctx->pc = 0x23DDA0u;
    {
        const bool branch_taken_0x23dda0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23DDA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
        if (branch_taken_0x23dda0) {
            ctx->pc = 0x23DDB4u;
            goto label_23ddb4;
        }
    }
    ctx->pc = 0x23DDA8u;
label_23dda8:
    // 0x23dda8: 0xc08f0f0
    ctx->pc = 0x23DDA8u;
    SET_GPR_U32(ctx, 31, 0x23DDB0u);
    ctx->pc = 0x23DDACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDB0u; }
    }
    if (ctx->pc != 0x23DDB0u) { return; }
    ctx->pc = 0x23DDB0u;
    // 0x23ddb0: 0xe6200260
    ctx->pc = 0x23ddb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
label_23ddb4:
    // 0x23ddb4: 0x8622032a
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 810)));
    // 0x23ddb8: 0x4400005
    ctx->pc = 0x23DDB8u;
    {
        const bool branch_taken_0x23ddb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23DDBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23ddb8) {
            ctx->pc = 0x23DDD0u;
            goto label_23ddd0;
        }
    }
    ctx->pc = 0x23DDC0u;
    // 0x23ddc0: 0x3c013f80
    ctx->pc = 0x23ddc0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x23ddc4: 0x44816000
    ctx->pc = 0x23ddc4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23ddc8: 0xc08f14c
    ctx->pc = 0x23DDC8u;
    SET_GPR_U32(ctx, 31, 0x23DDD0u);
    ctx->pc = 0x23DDCCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDD0u; }
    }
    if (ctx->pc != 0x23DDD0u) { return; }
    ctx->pc = 0x23DDD0u;
label_23ddd0:
    // 0x23ddd0: 0xc08f20c
    ctx->pc = 0x23DDD0u;
    SET_GPR_U32(ctx, 31, 0x23DDD8u);
    ctx->pc = 0x23DDD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDD8u; }
    }
    if (ctx->pc != 0x23DDD8u) { return; }
    ctx->pc = 0x23DDD8u;
    // 0x23ddd8: 0xe6200258
    ctx->pc = 0x23ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 600), bits); }
    // 0x23dddc: 0xc090e82
    ctx->pc = 0x23DDDCu;
    SET_GPR_U32(ctx, 31, 0x23DDE4u);
    ctx->pc = 0x23DDE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDE4u; }
    }
    if (ctx->pc != 0x23DDE4u) { return; }
    ctx->pc = 0x23DDE4u;
    // 0x23dde4: 0xdfbf0040
    ctx->pc = 0x23dde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23dde8:
    // 0x23dde8: 0xdfb20030
    ctx->pc = 0x23dde8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ddec: 0xdfb10020
    ctx->pc = 0x23ddecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ddf0: 0xdfb00010
    ctx->pc = 0x23ddf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ddf4: 0x3e00008
    ctx->pc = 0x23DDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DDF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23DC94u: goto label_23dc94;
            case 0x23DC98u: goto label_23dc98;
            case 0x23DCACu: goto label_23dcac;
            case 0x23DCC4u: goto label_23dcc4;
            case 0x23DD00u: goto label_23dd00;
            case 0x23DD8Cu: goto label_23dd8c;
            case 0x23DD90u: goto label_23dd90;
            case 0x23DD98u: goto label_23dd98;
            case 0x23DDA8u: goto label_23dda8;
            case 0x23DDB4u: goto label_23ddb4;
            case 0x23DDD0u: goto label_23ddd0;
            case 0x23DDE8u: goto label_23dde8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23DDFCu;
}
