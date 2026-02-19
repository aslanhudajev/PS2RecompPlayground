#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: move_logic16
// Address: 0x23ed50 - 0x23f054
void move_logic16_0x23ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23ed50u;

    // 0x23ed50: 0x27bdffb0
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23ed54: 0xffbf0030
    ctx->pc = 0x23ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23ed58: 0xffb20020
    ctx->pc = 0x23ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23ed5c: 0xffb10010
    ctx->pc = 0x23ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23ed60: 0xffb00000
    ctx->pc = 0x23ed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ed64: 0xe7b50048
    ctx->pc = 0x23ed64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23ed68: 0xe7b40040
    ctx->pc = 0x23ed68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23ed6c: 0x80882d
    ctx->pc = 0x23ed6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed70: 0x240303b0
    ctx->pc = 0x23ed70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23ed74: 0x2231818
    ctx->pc = 0x23ed74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ed78: 0x3c020033
    ctx->pc = 0x23ed78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23ed7c: 0x2442dfd0
    ctx->pc = 0x23ed7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23ed80: 0x628021
    ctx->pc = 0x23ed80u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ed84: 0x4480a800
    ctx->pc = 0x23ed84u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x23ed88: 0x8e02036c
    ctx->pc = 0x23ed88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23ed8c: 0xc08ed18
    ctx->pc = 0x23ED8Cu;
    SET_GPR_U32(ctx, 31, 0x23ED94u);
    ctx->pc = 0x23ED90u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 2)));
    ctx->pc = 0x23B460u;
    {
        const uint32_t __entryPc = ctx->pc;
        FoundSuicideBomber_0x23b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ED94u; }
    }
    if (ctx->pc != 0x23ED94u) { return; }
    ctx->pc = 0x23ED94u;
    // 0x23ed94: 0x1040000b
    ctx->pc = 0x23ED94u;
    {
        const bool branch_taken_0x23ed94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23ED98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x23ed94) {
            ctx->pc = 0x23EDC4u;
            goto label_23edc4;
        }
    }
    ctx->pc = 0x23ED9Cu;
    // 0x23ed9c: 0xa6020324
    ctx->pc = 0x23ed9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x23eda0: 0x220202d
    ctx->pc = 0x23eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eda4: 0xdfbf0030
    ctx->pc = 0x23eda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23eda8: 0xdfb20020
    ctx->pc = 0x23eda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23edac: 0xdfb10010
    ctx->pc = 0x23edacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23edb0: 0xdfb00000
    ctx->pc = 0x23edb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23edb4: 0xc7b50048
    ctx->pc = 0x23edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23edb8: 0xc7b40040
    ctx->pc = 0x23edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23edbc: 0x809095a
    ctx->pc = 0x23EDBCu;
    ctx->pc = 0x23EDC0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x242568u;
    do_ai_0x242568(rdram, ctx, runtime); return;
    ctx->pc = 0x23EDC4u;
label_23edc4:
    // 0x23edc4: 0x40034800
    ctx->pc = 0x23edc4u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23edc8: 0x3c02003a
    ctx->pc = 0x23edc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23edcc: 0x8c4221d0
    ctx->pc = 0x23edccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23edd0: 0xac430268
    ctx->pc = 0x23edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 3));
    // 0x23edd4: 0x86030324
    ctx->pc = 0x23edd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23edd8: 0x86020328
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x23eddc: 0x10620004
    ctx->pc = 0x23EDDCu;
    {
        const bool branch_taken_0x23eddc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23EDE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23eddc) {
            ctx->pc = 0x23EDF0u;
            goto label_23edf0;
        }
    }
    ctx->pc = 0x23EDE4u;
    // 0x23ede4: 0xc08e210
    ctx->pc = 0x23EDE4u;
    SET_GPR_U32(ctx, 31, 0x23EDECu);
    ctx->pc = 0x23EDE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x238840u;
    {
        const uint32_t __entryPc = ctx->pc;
        format_brain_0x238840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EDECu; }
    }
    if (ctx->pc != 0x23EDECu) { return; }
    ctx->pc = 0x23EDECu;
    // 0x23edec: 0x200202d
    ctx->pc = 0x23edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23edf0:
    // 0x23edf0: 0xc08f0f0
    ctx->pc = 0x23EDF0u;
    SET_GPR_U32(ctx, 31, 0x23EDF8u);
    ctx->pc = 0x23EDF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x23C3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_face_ang_0x23c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EDF8u; }
    }
    if (ctx->pc != 0x23EDF8u) { return; }
    ctx->pc = 0x23EDF8u;
    // 0x23edf8: 0xe6000260
    ctx->pc = 0x23edf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x23edfc: 0x86020288
    ctx->pc = 0x23edfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x23ee00: 0x4400071
    ctx->pc = 0x23EE00u;
    {
        const bool branch_taken_0x23ee00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23EE04u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23ee00) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EE08u;
    // 0x23ee08: 0x431818
    ctx->pc = 0x23ee08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23ee0c: 0x3c020032
    ctx->pc = 0x23ee0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23ee10: 0x24421bc0
    ctx->pc = 0x23ee10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23ee14: 0x621821
    ctx->pc = 0x23ee14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ee18: 0xc6010044
    ctx->pc = 0x23ee18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ee1c: 0xc4600054
    ctx->pc = 0x23ee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ee20: 0x860202f0
    ctx->pc = 0x23ee20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x23ee24: 0x10400068
    ctx->pc = 0x23EE24u;
    {
        const bool branch_taken_0x23ee24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EE28u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x23ee24) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EE2Cu;
    // 0x23ee2c: 0x3c01c120
    ctx->pc = 0x23ee2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x23ee30: 0x44810000
    ctx->pc = 0x23ee30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ee34: 0x46010036
    ctx->pc = 0x23ee34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ee38: 0x45000063
    ctx->pc = 0x23EE38u;
    {
        const bool branch_taken_0x23ee38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ee38) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EE40u;
    // 0x23ee40: 0x3c014120
    ctx->pc = 0x23ee40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x23ee44: 0x44810000
    ctx->pc = 0x23ee44u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ee48: 0x46000836
    ctx->pc = 0x23ee48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ee4c: 0x4500005e
    ctx->pc = 0x23EE4Cu;
    {
        const bool branch_taken_0x23ee4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ee4c) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EE54u;
    // 0x23ee54: 0x8e020330
    ctx->pc = 0x23ee54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23ee58: 0x1440000c
    ctx->pc = 0x23EE58u;
    {
        const bool branch_taken_0x23ee58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23EE5Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x23ee58) {
            ctx->pc = 0x23EE8Cu;
            goto label_23ee8c;
        }
    }
    ctx->pc = 0x23EE60u;
    // 0x23ee60: 0x3c013f19
    ctx->pc = 0x23ee60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x23ee64: 0x3421999a
    ctx->pc = 0x23ee64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x23ee68: 0x44810800
    ctx->pc = 0x23ee68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23ee6c: 0x46010002
    ctx->pc = 0x23ee6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23ee70: 0xc6010290
    ctx->pc = 0x23ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ee74: 0x46000836
    ctx->pc = 0x23ee74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ee78: 0x0
    ctx->pc = 0x23ee78u;
    // NOP
    // 0x23ee7c: 0x4500001c
    ctx->pc = 0x23EE7Cu;
    {
        const bool branch_taken_0x23ee7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EE80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x23ee7c) {
            ctx->pc = 0x23EEF0u;
            goto label_23eef0;
        }
    }
    ctx->pc = 0x23EE84u;
    // 0x23ee84: 0x1000001a
    ctx->pc = 0x23EE84u;
    {
        const bool branch_taken_0x23ee84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EE88u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
        if (branch_taken_0x23ee84) {
            ctx->pc = 0x23EEF0u;
            goto label_23eef0;
        }
    }
    ctx->pc = 0x23EE8Cu;
label_23ee8c:
    // 0x23ee8c: 0x3c013f4c
    ctx->pc = 0x23ee8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x23ee90: 0x3421cccd
    ctx->pc = 0x23ee90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23ee94: 0x44810800
    ctx->pc = 0x23ee94u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23ee98: 0x46010002
    ctx->pc = 0x23ee98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23ee9c: 0xc6010290
    ctx->pc = 0x23ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eea0: 0x46010034
    ctx->pc = 0x23eea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eea4: 0x0
    ctx->pc = 0x23eea4u;
    // NOP
    // 0x23eea8: 0x45030011
    ctx->pc = 0x23EEA8u;
    {
        const bool branch_taken_0x23eea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eea8) {
            ctx->pc = 0x23EEACu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
            ctx->pc = 0x23EEF0u;
            goto label_23eef0;
        }
    }
    ctx->pc = 0x23EEB0u;
    // 0x23eeb0: 0x8e02036c
    ctx->pc = 0x23eeb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23eeb4: 0x5840000f
    ctx->pc = 0x23EEB4u;
    {
        const bool branch_taken_0x23eeb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23eeb4) {
            ctx->pc = 0x23EEB8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->pc = 0x23EEF4u;
            goto label_23eef4;
        }
    }
    ctx->pc = 0x23EEBCu;
    // 0x23eebc: 0x8e040338
    ctx->pc = 0x23eebcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23eec0: 0x28820008
    ctx->pc = 0x23eec0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x23eec4: 0x10400009
    ctx->pc = 0x23EEC4u;
    {
        const bool branch_taken_0x23eec4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EEC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x23eec4) {
            ctx->pc = 0x23EEECu;
            goto label_23eeec;
        }
    }
    ctx->pc = 0x23EECCu;
    // 0x23eecc: 0x2442de30
    ctx->pc = 0x23eeccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x23eed0: 0x41880
    ctx->pc = 0x23eed0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x23eed4: 0x621821
    ctx->pc = 0x23eed4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23eed8: 0xc4750000
    ctx->pc = 0x23eed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23eedc: 0x24820001
    ctx->pc = 0x23eedcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x23eee0: 0xae020338
    ctx->pc = 0x23eee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
    // 0x23eee4: 0x10000002
    ctx->pc = 0x23EEE4u;
    {
        const bool branch_taken_0x23eee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EEE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
        if (branch_taken_0x23eee4) {
            ctx->pc = 0x23EEF0u;
            goto label_23eef0;
        }
    }
    ctx->pc = 0x23EEECu;
label_23eeec:
    // 0x23eeec: 0xae000330
    ctx->pc = 0x23eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
label_23eef0:
    // 0x23eef0: 0x8e030334
    ctx->pc = 0x23eef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23eef4:
    // 0x23eef4: 0x18600005
    ctx->pc = 0x23EEF4u;
    {
        const bool branch_taken_0x23eef4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23EEF8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23eef4) {
            ctx->pc = 0x23EF0Cu;
            goto label_23ef0c;
        }
    }
    ctx->pc = 0x23EEFCu;
    // 0x23eefc: 0x8c42ffbc
    ctx->pc = 0x23eefcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x23ef00: 0x621023
    ctx->pc = 0x23ef00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ef04: 0x10000030
    ctx->pc = 0x23EF04u;
    {
        const bool branch_taken_0x23ef04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EF08u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        if (branch_taken_0x23ef04) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EF0Cu;
label_23ef0c:
    // 0x23ef0c: 0x8e020330
    ctx->pc = 0x23ef0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x23ef10: 0x54400006
    ctx->pc = 0x23EF10u;
    {
        const bool branch_taken_0x23ef10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23ef10) {
            ctx->pc = 0x23EF14u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x23EF2Cu;
            goto label_23ef2c;
        }
    }
    ctx->pc = 0x23EF18u;
    // 0x23ef18: 0x200202d
    ctx->pc = 0x23ef18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef1c: 0xc09de18
    ctx->pc = 0x23EF1Cu;
    SET_GPR_U32(ctx, 31, 0x23EF24u);
    ctx->pc = 0x23EF20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF24u; }
    }
    if (ctx->pc != 0x23EF24u) { return; }
    ctx->pc = 0x23EF24u;
    // 0x23ef24: 0x10000028
    ctx->pc = 0x23EF24u;
    {
        const bool branch_taken_0x23ef24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x23ef24) {
            ctx->pc = 0x23EFC8u;
            goto label_23efc8;
        }
    }
    ctx->pc = 0x23EF2Cu;
label_23ef2c:
    // 0x23ef2c: 0x3c014049
    ctx->pc = 0x23ef2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x23ef30: 0x34210fdb
    ctx->pc = 0x23ef30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23ef34: 0x44810800
    ctx->pc = 0x23ef34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23ef38: 0x46010500
    ctx->pc = 0x23ef38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23ef3c: 0x4615a500
    ctx->pc = 0x23ef3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x23ef40: 0x46140834
    ctx->pc = 0x23ef40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ef44: 0x45000006
    ctx->pc = 0x23EF44u;
    {
        const bool branch_taken_0x23ef44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ef44) {
            ctx->pc = 0x23EF60u;
            goto label_23ef60;
        }
    }
    ctx->pc = 0x23EF4Cu;
    // 0x23ef4c: 0x3c0140c9
    ctx->pc = 0x23ef4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23ef50: 0x34210fdb
    ctx->pc = 0x23ef50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23ef54: 0x44810000
    ctx->pc = 0x23ef54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ef58: 0x1000000c
    ctx->pc = 0x23EF58u;
    {
        const bool branch_taken_0x23ef58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EF5Cu;
        ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x23ef58) {
            ctx->pc = 0x23EF8Cu;
            goto label_23ef8c;
        }
    }
    ctx->pc = 0x23EF60u;
label_23ef60:
    // 0x23ef60: 0x3c01c049
    ctx->pc = 0x23ef60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x23ef64: 0x34210fdb
    ctx->pc = 0x23ef64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23ef68: 0x44810000
    ctx->pc = 0x23ef68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ef6c: 0x4600a036
    ctx->pc = 0x23ef6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ef70: 0x0
    ctx->pc = 0x23ef70u;
    // NOP
    // 0x23ef74: 0x45000005
    ctx->pc = 0x23EF74u;
    {
        const bool branch_taken_0x23ef74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23EF78u;
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x23ef74) {
            ctx->pc = 0x23EF8Cu;
            goto label_23ef8c;
        }
    }
    ctx->pc = 0x23EF7Cu;
    // 0x23ef7c: 0x3c0140c9
    ctx->pc = 0x23ef7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x23ef80: 0x34210fdb
    ctx->pc = 0x23ef80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x23ef84: 0x44810000
    ctx->pc = 0x23ef84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23ef88: 0x4600a340
    ctx->pc = 0x23ef88u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_23ef8c:
    // 0x23ef8c: 0x46006d06
    ctx->pc = 0x23ef8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x23ef90: 0x200202d
    ctx->pc = 0x23ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef94: 0xc09de18
    ctx->pc = 0x23EF94u;
    SET_GPR_U32(ctx, 31, 0x23EF9Cu);
    ctx->pc = 0x23EF98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x277860u;
    {
        const uint32_t __entryPc = ctx->pc;
        RequestEnemyAction_0x277860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF9Cu; }
    }
    if (ctx->pc != 0x23EF9Cu) { return; }
    ctx->pc = 0x23EF9Cu;
    // 0x23ef9c: 0x8e0200e0
    ctx->pc = 0x23ef9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x23efa0: 0x2442ffea
    ctx->pc = 0x23efa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967274));
    // 0x23efa4: 0x2c420002
    ctx->pc = 0x23efa4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23efa8: 0x10400006
    ctx->pc = 0x23EFA8u;
    {
        const bool branch_taken_0x23efa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23EFACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23efa8) {
            ctx->pc = 0x23EFC4u;
            goto label_23efc4;
        }
    }
    ctx->pc = 0x23EFB0u;
    // 0x23efb0: 0x3c013f4c
    ctx->pc = 0x23efb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x23efb4: 0x3421cccd
    ctx->pc = 0x23efb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x23efb8: 0x44816000
    ctx->pc = 0x23efb8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x23efbc: 0xc08f14c
    ctx->pc = 0x23EFBCu;
    SET_GPR_U32(ctx, 31, 0x23EFC4u);
    ctx->pc = 0x23EFC0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x23C530u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_enemy_trans_0x23c530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EFC4u; }
    }
    if (ctx->pc != 0x23EFC4u) { return; }
    ctx->pc = 0x23EFC4u;
label_23efc4:
    // 0x23efc4: 0xae00036c
    ctx->pc = 0x23efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_23efc8:
    // 0x23efc8: 0xc08f20c
    ctx->pc = 0x23EFC8u;
    SET_GPR_U32(ctx, 31, 0x23EFD0u);
    ctx->pc = 0x23EFCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23C830u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_0x23c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EFD0u; }
    }
    if (ctx->pc != 0x23EFD0u) { return; }
    ctx->pc = 0x23EFD0u;
    // 0x23efd0: 0xe6000258
    ctx->pc = 0x23efd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x23efd4: 0xc090e82
    ctx->pc = 0x23EFD4u;
    SET_GPR_U32(ctx, 31, 0x23EFDCu);
    ctx->pc = 0x23EFD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x243A08u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_move_0x243a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EFDCu; }
    }
    if (ctx->pc != 0x23EFDCu) { return; }
    ctx->pc = 0x23EFDCu;
    // 0x23efdc: 0x86020294
    ctx->pc = 0x23efdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x23efe0: 0x54400001
    ctx->pc = 0x23EFE0u;
    {
        const bool branch_taken_0x23efe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23efe0) {
            ctx->pc = 0x23EFE4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
            ctx->pc = 0x23EFE8u;
            goto label_23efe8;
        }
    }
    ctx->pc = 0x23EFE8u;
label_23efe8:
    // 0x23efe8: 0x16400007
    ctx->pc = 0x23EFE8u;
    {
        const bool branch_taken_0x23efe8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x23efe8) {
            ctx->pc = 0x23F008u;
            goto label_23f008;
        }
    }
    ctx->pc = 0x23EFF0u;
    // 0x23eff0: 0x8e02036c
    ctx->pc = 0x23eff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x23eff4: 0x18400004
    ctx->pc = 0x23EFF4u;
    {
        const bool branch_taken_0x23eff4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23eff4) {
            ctx->pc = 0x23F008u;
            goto label_23f008;
        }
    }
    ctx->pc = 0x23EFFCu;
    // 0x23effc: 0xc6000260
    ctx->pc = 0x23effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f000: 0xe6000268
    ctx->pc = 0x23f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 616), bits); }
    // 0x23f004: 0xae000338
    ctx->pc = 0x23f004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_23f008:
    // 0x23f008: 0x40034800
    ctx->pc = 0x23f008u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x23f00c: 0x3c02003a
    ctx->pc = 0x23f00cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x23f010: 0x8c4421d0
    ctx->pc = 0x23f010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x23f014: 0x8c820268
    ctx->pc = 0x23f014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x23f018: 0x621823
    ctx->pc = 0x23f018u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f01c: 0x8c820260
    ctx->pc = 0x23f01cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x23f020: 0x621821
    ctx->pc = 0x23f020u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23f024: 0xac830260
    ctx->pc = 0x23f024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 3));
    // 0x23f028: 0x8c820264
    ctx->pc = 0x23f028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x23f02c: 0x24420001
    ctx->pc = 0x23f02cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f030: 0xac820264
    ctx->pc = 0x23f030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 2));
    // 0x23f034: 0xdfbf0030
    ctx->pc = 0x23f034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f038: 0xdfb20020
    ctx->pc = 0x23f038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f03c: 0xdfb10010
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f040: 0xdfb00000
    ctx->pc = 0x23f040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f044: 0xc7b50048
    ctx->pc = 0x23f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23f048: 0xc7b40040
    ctx->pc = 0x23f048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f04c: 0x3e00008
    ctx->pc = 0x23F04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F050u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23EDC4u: goto label_23edc4;
            case 0x23EDF0u: goto label_23edf0;
            case 0x23EE8Cu: goto label_23ee8c;
            case 0x23EEECu: goto label_23eeec;
            case 0x23EEF0u: goto label_23eef0;
            case 0x23EEF4u: goto label_23eef4;
            case 0x23EF0Cu: goto label_23ef0c;
            case 0x23EF2Cu: goto label_23ef2c;
            case 0x23EF60u: goto label_23ef60;
            case 0x23EF8Cu: goto label_23ef8c;
            case 0x23EFC4u: goto label_23efc4;
            case 0x23EFC8u: goto label_23efc8;
            case 0x23EFE8u: goto label_23efe8;
            case 0x23F008u: goto label_23f008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F054u;
}
