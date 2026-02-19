#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldObjCollide
// Address: 0x21da40 - 0x21de80
void WorldObjCollide_0x21da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21da40u;

    // 0x21da40: 0x27bdff40
    ctx->pc = 0x21da40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21da44: 0xffbf00a0
    ctx->pc = 0x21da44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x21da48: 0xffb30090
    ctx->pc = 0x21da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x21da4c: 0xffb20080
    ctx->pc = 0x21da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x21da50: 0xffb10070
    ctx->pc = 0x21da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x21da54: 0xffb00060
    ctx->pc = 0x21da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x21da58: 0xe7b400b0
    ctx->pc = 0x21da58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21da5c: 0x80882d
    ctx->pc = 0x21da5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da60: 0x46006506
    ctx->pc = 0x21da60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x21da64: 0xa0902d
    ctx->pc = 0x21da64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da68: 0xc0982d
    ctx->pc = 0x21da68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da6c: 0x8e220010
    ctx->pc = 0x21da6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21da70: 0x3c030100
    ctx->pc = 0x21da70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x21da74: 0x431024
    ctx->pc = 0x21da74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21da78: 0x1040000a
    ctx->pc = 0x21DA78u;
    {
        const bool branch_taken_0x21da78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DA7Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21da78) {
            ctx->pc = 0x21DAA4u;
            goto label_21daa4;
        }
    }
    ctx->pc = 0x21DA80u;
    // 0x21da80: 0x5600000e
    ctx->pc = 0x21DA80u;
    {
        const bool branch_taken_0x21da80 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21da80) {
            ctx->pc = 0x21DA84u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DA88u;
    // 0x21da88: 0x27b00010
    ctx->pc = 0x21da88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21da8c: 0x8e240028
    ctx->pc = 0x21da8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21da90: 0x200282d
    ctx->pc = 0x21da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da94: 0xc0b4302
    ctx->pc = 0x21DA94u;
    SET_GPR_U32(ctx, 31, 0x21DA9Cu);
    ctx->pc = 0x21DA98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DA9Cu; }
    }
    if (ctx->pc != 0x21DA9Cu) { return; }
    ctx->pc = 0x21DA9Cu;
    // 0x21da9c: 0x10000007
    ctx->pc = 0x21DA9Cu;
    {
        const bool branch_taken_0x21da9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DAA0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 48));
        if (branch_taken_0x21da9c) {
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DAA4u;
label_21daa4:
    // 0x21daa4: 0x8e220010
    ctx->pc = 0x21daa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21daa8: 0x30421000
    ctx->pc = 0x21daa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x21daac: 0x10400003
    ctx->pc = 0x21DAACu;
    {
        const bool branch_taken_0x21daac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DAB0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 28));
        if (branch_taken_0x21daac) {
            ctx->pc = 0x21DABCu;
            goto label_21dabc;
        }
    }
    ctx->pc = 0x21DAB4u;
    // 0x21dab4: 0x8e220028
    ctx->pc = 0x21dab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21dab8: 0x24450030
    ctx->pc = 0x21dab8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 48));
label_21dabc:
    // 0x21dabc: 0x3c020032
    ctx->pc = 0x21dabcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dac0: 0x2444fcf0
    ctx->pc = 0x21dac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x21dac4: 0xc4a20000
    ctx->pc = 0x21dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dac8: 0xc449fcf0
    ctx->pc = 0x21dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x21dacc: 0x46091081
    ctx->pc = 0x21daccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x21dad0: 0xe7a20000
    ctx->pc = 0x21dad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21dad4: 0xc4a10004
    ctx->pc = 0x21dad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dad8: 0xc4880004
    ctx->pc = 0x21dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21dadc: 0x46080841
    ctx->pc = 0x21dadcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x21dae0: 0xe7a10004
    ctx->pc = 0x21dae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21dae4: 0xc4a00008
    ctx->pc = 0x21dae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dae8: 0xc4870008
    ctx->pc = 0x21dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21daec: 0x46070001
    ctx->pc = 0x21daecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x21daf0: 0xe7a00008
    ctx->pc = 0x21daf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21daf4: 0x3c020032
    ctx->pc = 0x21daf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21daf8: 0x2443fd10
    ctx->pc = 0x21daf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x21dafc: 0xc443fd10
    ctx->pc = 0x21dafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21db00: 0x46031082
    ctx->pc = 0x21db00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x21db04: 0xc4660004
    ctx->pc = 0x21db04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21db08: 0x46060842
    ctx->pc = 0x21db08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x21db0c: 0x46011080
    ctx->pc = 0x21db0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21db10: 0xc4640008
    ctx->pc = 0x21db10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21db14: 0x46040002
    ctx->pc = 0x21db14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21db18: 0x46001080
    ctx->pc = 0x21db18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21db1c: 0xc6200030
    ctx->pc = 0x21db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db20: 0x4600a140
    ctx->pc = 0x21db20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x21db24: 0x3c020032
    ctx->pc = 0x21db24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21db28: 0xc440fd20
    ctx->pc = 0x21db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db2c: 0x46002800
    ctx->pc = 0x21db2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x21db30: 0x46020034
    ctx->pc = 0x21db30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21db34: 0x0
    ctx->pc = 0x21db34u;
    // NOP
    // 0x21db38: 0x450100ca
    ctx->pc = 0x21DB38u;
    {
        const bool branch_taken_0x21db38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DB3Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x21db38) {
            ctx->pc = 0x21DE64u;
            goto label_21de64;
        }
    }
    ctx->pc = 0x21DB40u;
    // 0x21db40: 0x46002807
    ctx->pc = 0x21db40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x21db44: 0x46001034
    ctx->pc = 0x21db44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21db48: 0x0
    ctx->pc = 0x21db48u;
    // NOP
    // 0x21db4c: 0x450300c6
    ctx->pc = 0x21DB4Cu;
    {
        const bool branch_taken_0x21db4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21db4c) {
            ctx->pc = 0x21DB50u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->pc = 0x21DE68u;
            goto label_21de68;
        }
    }
    ctx->pc = 0x21DB54u;
    // 0x21db54: 0x46031002
    ctx->pc = 0x21db54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x21db58: 0x46090000
    ctx->pc = 0x21db58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x21db5c: 0xe7a00000
    ctx->pc = 0x21db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21db60: 0x460610c2
    ctx->pc = 0x21db60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x21db64: 0x460818c0
    ctx->pc = 0x21db64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x21db68: 0xe7a30004
    ctx->pc = 0x21db68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21db6c: 0x46041102
    ctx->pc = 0x21db6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x21db70: 0x46072100
    ctx->pc = 0x21db70u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x21db74: 0xe7a40008
    ctx->pc = 0x21db74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21db78: 0xc4a20000
    ctx->pc = 0x21db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21db7c: 0x46001081
    ctx->pc = 0x21db7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21db80: 0xe7a20000
    ctx->pc = 0x21db80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21db84: 0xc4a10004
    ctx->pc = 0x21db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21db88: 0x46030841
    ctx->pc = 0x21db88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x21db8c: 0xe7a10004
    ctx->pc = 0x21db8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21db90: 0xc4a00008
    ctx->pc = 0x21db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db94: 0x46040001
    ctx->pc = 0x21db94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x21db98: 0xe7a00008
    ctx->pc = 0x21db98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21db9c: 0x46021082
    ctx->pc = 0x21db9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21dba0: 0x46010842
    ctx->pc = 0x21dba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x21dba4: 0x46011080
    ctx->pc = 0x21dba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x21dba8: 0x46000002
    ctx->pc = 0x21dba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21dbac: 0x46001080
    ctx->pc = 0x21dbacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21dbb0: 0x46052802
    ctx->pc = 0x21dbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x21dbb4: 0x46001034
    ctx->pc = 0x21dbb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dbb8: 0x0
    ctx->pc = 0x21dbb8u;
    // NOP
    // 0x21dbbc: 0x450000a9
    ctx->pc = 0x21DBBCu;
    {
        const bool branch_taken_0x21dbbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DBC0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
        if (branch_taken_0x21dbbc) {
            ctx->pc = 0x21DE64u;
            goto label_21de64;
        }
    }
    ctx->pc = 0x21DBC4u;
    // 0x21dbc4: 0x8e220010
    ctx->pc = 0x21dbc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21dbc8: 0x431024
    ctx->pc = 0x21dbc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21dbcc: 0x5440000a
    ctx->pc = 0x21DBCCu;
    {
        const bool branch_taken_0x21dbcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21dbcc) {
            ctx->pc = 0x21DBD0u;
            SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
            ctx->pc = 0x21DBF8u;
            goto label_21dbf8;
        }
    }
    ctx->pc = 0x21DBD4u;
    // 0x21dbd4: 0x8e230010
    ctx->pc = 0x21dbd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21dbd8: 0x30621000
    ctx->pc = 0x21dbd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4096));
    // 0x21dbdc: 0x10400042
    ctx->pc = 0x21DBDCu;
    {
        const bool branch_taken_0x21dbdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DBE0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x21dbdc) {
            ctx->pc = 0x21DCE8u;
            goto label_21dce8;
        }
    }
    ctx->pc = 0x21DBE4u;
    // 0x21dbe4: 0x14400018
    ctx->pc = 0x21DBE4u;
    {
        const bool branch_taken_0x21dbe4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21DBE8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 40)));
        if (branch_taken_0x21dbe4) {
            ctx->pc = 0x21DC48u;
            goto label_21dc48;
        }
    }
    ctx->pc = 0x21DBECu;
    // 0x21dbec: 0x3c040032
    ctx->pc = 0x21dbecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21dbf0: 0x2484fcf0
    ctx->pc = 0x21dbf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x21dbf4: 0x3c050032
    ctx->pc = 0x21dbf4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_21dbf8:
    // 0x21dbf8: 0x24a5f9d0
    ctx->pc = 0x21dbf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965712));
    // 0x21dbfc: 0xc0b587e
    ctx->pc = 0x21DBFCu;
    SET_GPR_U32(ctx, 31, 0x21DC04u);
    ctx->pc = 0x21DC00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC04u; }
    }
    if (ctx->pc != 0x21DC04u) { return; }
    ctx->pc = 0x21DC04u;
    // 0x21dc04: 0x3c040032
    ctx->pc = 0x21dc04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21dc08: 0x2484fd00
    ctx->pc = 0x21dc08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966528));
    // 0x21dc0c: 0x3c050032
    ctx->pc = 0x21dc0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x21dc10: 0x24a5f9e0
    ctx->pc = 0x21dc10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965728));
    // 0x21dc14: 0xc0b587e
    ctx->pc = 0x21DC14u;
    SET_GPR_U32(ctx, 31, 0x21DC1Cu);
    ctx->pc = 0x21DC18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DC1Cu; }
    }
    if (ctx->pc != 0x21DC1Cu) { return; }
    ctx->pc = 0x21DC1Cu;
    // 0x21dc1c: 0x3c020032
    ctx->pc = 0x21dc1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dc20: 0xc440fd24
    ctx->pc = 0x21dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc24: 0xc6020034
    ctx->pc = 0x21dc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dc28: 0x460200c1
    ctx->pc = 0x21dc28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21dc2c: 0xc6010014
    ctx->pc = 0x21dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc30: 0x460118c2
    ctx->pc = 0x21dc30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x21dc34: 0x3c020032
    ctx->pc = 0x21dc34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dc38: 0xc440fd28
    ctx->pc = 0x21dc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc3c: 0x46020081
    ctx->pc = 0x21dc3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21dc40: 0x10000041
    ctx->pc = 0x21DC40u;
    {
        const bool branch_taken_0x21dc40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DC44u;
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        if (branch_taken_0x21dc40) {
            ctx->pc = 0x21DD48u;
            goto label_21dd48;
        }
    }
    ctx->pc = 0x21DC48u;
label_21dc48:
    // 0x21dc48: 0x3c030032
    ctx->pc = 0x21dc48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21dc4c: 0x2465f9d0
    ctx->pc = 0x21dc4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965712));
    // 0x21dc50: 0x3c020032
    ctx->pc = 0x21dc50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dc54: 0x2444fcf0
    ctx->pc = 0x21dc54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x21dc58: 0xc440fcf0
    ctx->pc = 0x21dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc5c: 0xc6010030
    ctx->pc = 0x21dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc60: 0x46010001
    ctx->pc = 0x21dc60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dc64: 0xe460f9d0
    ctx->pc = 0x21dc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965712), bits); }
    // 0x21dc68: 0xc4800004
    ctx->pc = 0x21dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc6c: 0xc6010034
    ctx->pc = 0x21dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc70: 0x46010001
    ctx->pc = 0x21dc70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dc74: 0xe4a00004
    ctx->pc = 0x21dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21dc78: 0xc4800008
    ctx->pc = 0x21dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc7c: 0xc6010038
    ctx->pc = 0x21dc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dc80: 0x46010001
    ctx->pc = 0x21dc80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dc84: 0xe4a00008
    ctx->pc = 0x21dc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21dc88: 0x3c030032
    ctx->pc = 0x21dc88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21dc8c: 0x2465f9e0
    ctx->pc = 0x21dc8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965728));
    // 0x21dc90: 0x3c020032
    ctx->pc = 0x21dc90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dc94: 0x2444fd00
    ctx->pc = 0x21dc94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x21dc98: 0xc440fd00
    ctx->pc = 0x21dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc9c: 0xc6010030
    ctx->pc = 0x21dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dca0: 0x46010001
    ctx->pc = 0x21dca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dca4: 0xe460f9e0
    ctx->pc = 0x21dca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965728), bits); }
    // 0x21dca8: 0xc4800004
    ctx->pc = 0x21dca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcac: 0xc6010034
    ctx->pc = 0x21dcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcb0: 0x46010001
    ctx->pc = 0x21dcb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dcb4: 0xe4a00004
    ctx->pc = 0x21dcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21dcb8: 0xc4800008
    ctx->pc = 0x21dcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcbc: 0xc6010038
    ctx->pc = 0x21dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcc0: 0x46010001
    ctx->pc = 0x21dcc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dcc4: 0xe4a00008
    ctx->pc = 0x21dcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21dcc8: 0x3c020032
    ctx->pc = 0x21dcc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dccc: 0xc440fd24
    ctx->pc = 0x21dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcd0: 0xc6010034
    ctx->pc = 0x21dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcd4: 0x460100c1
    ctx->pc = 0x21dcd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dcd8: 0x3c020032
    ctx->pc = 0x21dcd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dcdc: 0xc440fd28
    ctx->pc = 0x21dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dce0: 0x10000019
    ctx->pc = 0x21DCE0u;
    {
        const bool branch_taken_0x21dce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DCE4u;
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x21dce0) {
            ctx->pc = 0x21DD48u;
            goto label_21dd48;
        }
    }
    ctx->pc = 0x21DCE8u;
label_21dce8:
    // 0x21dce8: 0x3c030032
    ctx->pc = 0x21dce8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21dcec: 0x2465f9d0
    ctx->pc = 0x21dcecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965712));
    // 0x21dcf0: 0x3c020032
    ctx->pc = 0x21dcf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dcf4: 0x2444fcf0
    ctx->pc = 0x21dcf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966512));
    // 0x21dcf8: 0xc440fcf0
    ctx->pc = 0x21dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcfc: 0xe460f9d0
    ctx->pc = 0x21dcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965712), bits); }
    // 0x21dd00: 0xc4800004
    ctx->pc = 0x21dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd04: 0xe4a00004
    ctx->pc = 0x21dd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21dd08: 0xc4800008
    ctx->pc = 0x21dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd0c: 0xe4a00008
    ctx->pc = 0x21dd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21dd10: 0x3c030032
    ctx->pc = 0x21dd10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21dd14: 0x2465f9e0
    ctx->pc = 0x21dd14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294965728));
    // 0x21dd18: 0x3c020032
    ctx->pc = 0x21dd18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dd1c: 0x2444fd00
    ctx->pc = 0x21dd1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x21dd20: 0xc440fd00
    ctx->pc = 0x21dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd24: 0xe460f9e0
    ctx->pc = 0x21dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965728), bits); }
    // 0x21dd28: 0xc4800004
    ctx->pc = 0x21dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd2c: 0xe4a00004
    ctx->pc = 0x21dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21dd30: 0xc4800008
    ctx->pc = 0x21dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd34: 0xe4a00008
    ctx->pc = 0x21dd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21dd38: 0x3c020032
    ctx->pc = 0x21dd38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dd3c: 0xc443fd24
    ctx->pc = 0x21dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21dd40: 0x3c020032
    ctx->pc = 0x21dd40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21dd44: 0xc442fd28
    ctx->pc = 0x21dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21dd48:
    // 0x21dd48: 0x3c014280
    ctx->pc = 0x21dd48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17024 << 16));
    // 0x21dd4c: 0x44810000
    ctx->pc = 0x21dd4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21dd50: 0x46001842
    ctx->pc = 0x21dd50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x21dd54: 0x46001002
    ctx->pc = 0x21dd54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21dd58: 0x8e2b0010
    ctx->pc = 0x21dd58u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21dd5c: 0x8e240038
    ctx->pc = 0x21dd5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21dd60: 0x240282d
    ctx->pc = 0x21dd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd64: 0x4600a306
    ctx->pc = 0x21dd64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21dd68: 0x27a60050
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21dd6c: 0x260382d
    ctx->pc = 0x21dd6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd70: 0x3a0402d
    ctx->pc = 0x21dd70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd74: 0x460008a4
    ctx->pc = 0x21dd74u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[1]);
    // 0x21dd78: 0x44091000
    ctx->pc = 0x21dd78u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x21dd7c: 0x46000064
    ctx->pc = 0x21dd7cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21dd80: 0x440a0800
    ctx->pc = 0x21dd80u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[1]);
    // 0x21dd84: 0xc08758e
    ctx->pc = 0x21DD84u;
    SET_GPR_U32(ctx, 31, 0x21DD8Cu);
    ctx->pc = 0x21DD88u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), 64));
    ctx->pc = 0x21D638u;
    {
        const uint32_t __entryPc = ctx->pc;
        CTriListCollide_0x21d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD8Cu; }
    }
    if (ctx->pc != 0x21DD8Cu) { return; }
    ctx->pc = 0x21DD8Cu;
    // 0x21dd8c: 0x46000046
    ctx->pc = 0x21dd8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x21dd90: 0x44800000
    ctx->pc = 0x21dd90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21dd94: 0x46010036
    ctx->pc = 0x21dd94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dd98: 0x0
    ctx->pc = 0x21dd98u;
    // NOP
    // 0x21dd9c: 0x45000031
    ctx->pc = 0x21DD9Cu;
    {
        const bool branch_taken_0x21dd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DDA0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x21dd9c) {
            ctx->pc = 0x21DE64u;
            goto label_21de64;
        }
    }
    ctx->pc = 0x21DDA4u;
    // 0x21dda4: 0x8e220010
    ctx->pc = 0x21dda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21dda8: 0x30420200
    ctx->pc = 0x21dda8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x21ddac: 0x10400010
    ctx->pc = 0x21DDACu;
    {
        const bool branch_taken_0x21ddac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DDB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21ddac) {
            ctx->pc = 0x21DDF0u;
            goto label_21ddf0;
        }
    }
    ctx->pc = 0x21DDB4u;
    // 0x21ddb4: 0x2442fca0
    ctx->pc = 0x21ddb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966432));
    // 0x21ddb8: 0xc4400040
    ctx->pc = 0x21ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ddbc: 0x46000834
    ctx->pc = 0x21ddbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ddc0: 0x0
    ctx->pc = 0x21ddc0u;
    // NOP
    // 0x21ddc4: 0x45000028
    ctx->pc = 0x21DDC4u;
    {
        const bool branch_taken_0x21ddc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DDC8u;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x21ddc4) {
            ctx->pc = 0x21DE68u;
            goto label_21de68;
        }
    }
    ctx->pc = 0x21DDCCu;
    // 0x21ddcc: 0xac510044
    ctx->pc = 0x21ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 17));
    // 0x21ddd0: 0xe4410040
    ctx->pc = 0x21ddd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x21ddd4: 0xc7a00000
    ctx->pc = 0x21ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ddd8: 0xe4400030
    ctx->pc = 0x21ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x21dddc: 0xc7a00004
    ctx->pc = 0x21dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dde0: 0xe4400034
    ctx->pc = 0x21dde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x21dde4: 0xc7a00008
    ctx->pc = 0x21dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dde8: 0x1000001f
    ctx->pc = 0x21DDE8u;
    {
        const bool branch_taken_0x21dde8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DDECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        if (branch_taken_0x21dde8) {
            ctx->pc = 0x21DE68u;
            goto label_21de68;
        }
    }
    ctx->pc = 0x21DDF0u;
label_21ddf0:
    // 0x21ddf0: 0x3c03003c
    ctx->pc = 0x21ddf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21ddf4: 0xc460d5a4
    ctx->pc = 0x21ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ddf8: 0x46000834
    ctx->pc = 0x21ddf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ddfc: 0x0
    ctx->pc = 0x21ddfcu;
    // NOP
    // 0x21de00: 0x45000017
    ctx->pc = 0x21DE00u;
    {
        const bool branch_taken_0x21de00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DE04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21de00) {
            ctx->pc = 0x21DE60u;
            goto label_21de60;
        }
    }
    ctx->pc = 0x21DE08u;
    // 0x21de08: 0xac51d5a0
    ctx->pc = 0x21de08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956448), GPR_U32(ctx, 17));
    // 0x21de0c: 0xe461d5a4
    ctx->pc = 0x21de0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956452), bits); }
    // 0x21de10: 0x3c030032
    ctx->pc = 0x21de10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21de14: 0x8fa20050
    ctx->pc = 0x21de14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21de18: 0xac62fd40
    ctx->pc = 0x21de18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966592), GPR_U32(ctx, 2));
    // 0x21de1c: 0x3c040032
    ctx->pc = 0x21de1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21de20: 0x3c030032
    ctx->pc = 0x21de20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21de24: 0x8c63fa00
    ctx->pc = 0x21de24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965760)));
    // 0x21de28: 0x431023
    ctx->pc = 0x21de28u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21de2c: 0x3c03cccc
    ctx->pc = 0x21de2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52428 << 16));
    // 0x21de30: 0x3463cccd
    ctx->pc = 0x21de30u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x21de34: 0x431018
    ctx->pc = 0x21de34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21de38: 0x210c3
    ctx->pc = 0x21de38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x21de3c: 0xac82fd34
    ctx->pc = 0x21de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966580), GPR_U32(ctx, 2));
    // 0x21de40: 0x3c02003c
    ctx->pc = 0x21de40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21de44: 0x2443d5b0
    ctx->pc = 0x21de44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294956464));
    // 0x21de48: 0xc7a00000
    ctx->pc = 0x21de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de4c: 0xe440d5b0
    ctx->pc = 0x21de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956464), bits); }
    // 0x21de50: 0xc7a00004
    ctx->pc = 0x21de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de54: 0xe4600004
    ctx->pc = 0x21de54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21de58: 0xc7a00008
    ctx->pc = 0x21de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de5c: 0xe4600008
    ctx->pc = 0x21de5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_21de60:
    // 0x21de60: 0xdfbf00a0
    ctx->pc = 0x21de60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21de64:
    // 0x21de64: 0xdfb30090
    ctx->pc = 0x21de64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21de68:
    // 0x21de68: 0xdfb20080
    ctx->pc = 0x21de68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21de6c: 0xdfb10070
    ctx->pc = 0x21de6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21de70: 0xdfb00060
    ctx->pc = 0x21de70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21de74: 0xc7b400b0
    ctx->pc = 0x21de74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21de78: 0x3e00008
    ctx->pc = 0x21DE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DE7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DAA4u: goto label_21daa4;
            case 0x21DABCu: goto label_21dabc;
            case 0x21DBF8u: goto label_21dbf8;
            case 0x21DC48u: goto label_21dc48;
            case 0x21DCE8u: goto label_21dce8;
            case 0x21DD48u: goto label_21dd48;
            case 0x21DDF0u: goto label_21ddf0;
            case 0x21DE60u: goto label_21de60;
            case 0x21DE64u: goto label_21de64;
            case 0x21DE68u: goto label_21de68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21DE80u;
}
