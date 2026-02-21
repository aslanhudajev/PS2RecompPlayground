#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterRotate
// Address: 0x296f20 - 0x2971e0
void CritterRotate_0x296f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296f20u;

    // 0x296f20: 0x27bdffa0
    ctx->pc = 0x296f20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x296f24: 0xffbf0040
    ctx->pc = 0x296f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x296f28: 0xffb10030
    ctx->pc = 0x296f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x296f2c: 0xffb00020
    ctx->pc = 0x296f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x296f30: 0xe7b50058
    ctx->pc = 0x296f30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x296f34: 0xe7b40050
    ctx->pc = 0x296f34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x296f38: 0x80882d
    ctx->pc = 0x296f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f3c: 0x8e220004
    ctx->pc = 0x296f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x296f40: 0xc45400cc
    ctx->pc = 0x296f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296f44: 0x8ca20004
    ctx->pc = 0x296f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x296f48: 0x30420020
    ctx->pc = 0x296f48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x296f4c: 0x10400003
    ctx->pc = 0x296F4Cu;
    {
        const bool branch_taken_0x296f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296F50u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        if (branch_taken_0x296f4c) {
            ctx->pc = 0x296F5Cu;
            goto label_296f5c;
        }
    }
    ctx->pc = 0x296F54u;
    // 0x296f54: 0x10000047
    ctx->pc = 0x296F54u;
    {
        const bool branch_taken_0x296f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296F58u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x296f54) {
            ctx->pc = 0x297074u;
            goto label_297074;
        }
    }
    ctx->pc = 0x296F5Cu;
label_296f5c:
    // 0x296f5c: 0x86220134
    ctx->pc = 0x296f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x296f60: 0x441005d
    ctx->pc = 0x296F60u;
    {
        const bool branch_taken_0x296f60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x296f60) {
            ctx->pc = 0x2970D8u;
            goto label_2970d8;
        }
    }
    ctx->pc = 0x296F68u;
    // 0x296f68: 0x86240130
    ctx->pc = 0x296f68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x296f6c: 0x4820044
    ctx->pc = 0x296F6Cu;
    {
        const bool branch_taken_0x296f6c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x296f6c) {
            ctx->pc = 0x296F70u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2908)));
            ctx->pc = 0x297080u;
            goto label_297080;
        }
    }
    ctx->pc = 0x296F74u;
    // 0x296f74: 0x44800000
    ctx->pc = 0x296f74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x296f78: 0x46150034
    ctx->pc = 0x296f78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296f7c: 0x0
    ctx->pc = 0x296f7cu;
    // NOP
    // 0x296f80: 0x4502003f
    ctx->pc = 0x296F80u;
    {
        const bool branch_taken_0x296f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x296f80) {
            ctx->pc = 0x296F84u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2908)));
            ctx->pc = 0x297080u;
            goto label_297080;
        }
    }
    ctx->pc = 0x296F88u;
    // 0x296f88: 0xc08c61e
    ctx->pc = 0x296F88u;
    SET_GPR_U32(ctx, 31, 0x296F90u);
    ctx->pc = 0x296F8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x231878u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerColPos_0x231878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296F90u; }
    }
    if (ctx->pc != 0x296F90u) { return; }
    ctx->pc = 0x296F90u;
    // 0x296f90: 0xc7a10010
    ctx->pc = 0x296f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296f94: 0xc6200040
    ctx->pc = 0x296f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296f98: 0x46000b01
    ctx->pc = 0x296f98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x296f9c: 0xe7ac0010
    ctx->pc = 0x296f9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x296fa0: 0xc7a00014
    ctx->pc = 0x296fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296fa4: 0xc6210044
    ctx->pc = 0x296fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296fa8: 0x46010001
    ctx->pc = 0x296fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x296fac: 0xe7a00014
    ctx->pc = 0x296facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x296fb0: 0xc7a10018
    ctx->pc = 0x296fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296fb4: 0xc6200048
    ctx->pc = 0x296fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296fb8: 0x46000b41
    ctx->pc = 0x296fb8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x296fbc: 0xe7ad0018
    ctx->pc = 0x296fbcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x296fc0: 0x8e220004
    ctx->pc = 0x296fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x296fc4: 0x8c42005c
    ctx->pc = 0x296fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x296fc8: 0x30420400
    ctx->pc = 0x296fc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x296fcc: 0x1440003d
    ctx->pc = 0x296FCCu;
    {
        const bool branch_taken_0x296fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296fcc) {
            ctx->pc = 0x2970C4u;
            goto label_2970c4;
        }
    }
    ctx->pc = 0x296FD4u;
    // 0x296fd4: 0xc7ac0010
    ctx->pc = 0x296fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x296fd8: 0xc0ba04a
    ctx->pc = 0x296FD8u;
    SET_GPR_U32(ctx, 31, 0x296FE0u);
    ctx->pc = 0x296FDCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296FE0u; }
    }
    if (ctx->pc != 0x296FE0u) { return; }
    ctx->pc = 0x296FE0u;
    // 0x296fe0: 0xc6210104
    ctx->pc = 0x296fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296fe4: 0x46010041
    ctx->pc = 0x296fe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x296fe8: 0x3c014049
    ctx->pc = 0x296fe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x296fec: 0x34210fdb
    ctx->pc = 0x296fecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x296ff0: 0x44810000
    ctx->pc = 0x296ff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x296ff4: 0x46010034
    ctx->pc = 0x296ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296ff8: 0x45000006
    ctx->pc = 0x296FF8u;
    {
        const bool branch_taken_0x296ff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x296ff8) {
            ctx->pc = 0x297014u;
            goto label_297014;
        }
    }
    ctx->pc = 0x297000u;
    // 0x297000: 0x3c0140c9
    ctx->pc = 0x297000u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x297004: 0x34210fdb
    ctx->pc = 0x297004u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x297008: 0x44810000
    ctx->pc = 0x297008u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29700c: 0x1000000c
    ctx->pc = 0x29700Cu;
    {
        const bool branch_taken_0x29700c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297010u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29700c) {
            ctx->pc = 0x297040u;
            goto label_297040;
        }
    }
    ctx->pc = 0x297014u;
label_297014:
    // 0x297014: 0x3c01c049
    ctx->pc = 0x297014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x297018: 0x34210fdb
    ctx->pc = 0x297018u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29701c: 0x44810000
    ctx->pc = 0x29701cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297020: 0x46000836
    ctx->pc = 0x297020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297024: 0x0
    ctx->pc = 0x297024u;
    // NOP
    // 0x297028: 0x45020005
    ctx->pc = 0x297028u;
    {
        const bool branch_taken_0x297028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297028) {
            ctx->pc = 0x29702Cu;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x297040u;
            goto label_297040;
        }
    }
    ctx->pc = 0x297030u;
    // 0x297030: 0x3c0140c9
    ctx->pc = 0x297030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x297034: 0x34210fdb
    ctx->pc = 0x297034u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x297038: 0x44810000
    ctx->pc = 0x297038u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29703c: 0x46000800
    ctx->pc = 0x29703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_297040:
    // 0x297040: 0x46000046
    ctx->pc = 0x297040u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x297044: 0x4600a007
    ctx->pc = 0x297044u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x297048: 0x46000834
    ctx->pc = 0x297048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29704c: 0x45000003
    ctx->pc = 0x29704Cu;
    {
        const bool branch_taken_0x29704c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29704c) {
            ctx->pc = 0x29705Cu;
            goto label_29705c;
        }
    }
    ctx->pc = 0x297054u;
    // 0x297054: 0x10000005
    ctx->pc = 0x297054u;
    {
        const bool branch_taken_0x297054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297058u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x297054) {
            ctx->pc = 0x29706Cu;
            goto label_29706c;
        }
    }
    ctx->pc = 0x29705Cu;
label_29705c:
    // 0x29705c: 0x4601a034
    ctx->pc = 0x29705cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297060: 0x0
    ctx->pc = 0x297060u;
    // NOP
    // 0x297064: 0x45030001
    ctx->pc = 0x297064u;
    {
        const bool branch_taken_0x297064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297064) {
            ctx->pc = 0x297068u;
            ctx->f[1] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x29706Cu;
            goto label_29706c;
        }
    }
    ctx->pc = 0x29706Cu;
label_29706c:
    // 0x29706c: 0xc6200104
    ctx->pc = 0x29706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297070: 0x46000840
    ctx->pc = 0x297070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_297074:
    // 0x297074: 0xc6200108
    ctx->pc = 0x297074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297078: 0x10000018
    ctx->pc = 0x297078u;
    {
        const bool branch_taken_0x297078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29707Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x297078) {
            ctx->pc = 0x2970DCu;
            goto label_2970dc;
        }
    }
    ctx->pc = 0x297080u;
label_297080:
    // 0x297080: 0x10600015
    ctx->pc = 0x297080u;
    {
        const bool branch_taken_0x297080 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x297080) {
            ctx->pc = 0x2970D8u;
            goto label_2970d8;
        }
    }
    ctx->pc = 0x297088u;
    // 0x297088: 0x86220136
    ctx->pc = 0x297088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 310)));
    // 0x29708c: 0x14400012
    ctx->pc = 0x29708Cu;
    {
        const bool branch_taken_0x29708c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29708c) {
            ctx->pc = 0x2970D8u;
            goto label_2970d8;
        }
    }
    ctx->pc = 0x297094u;
    // 0x297094: 0xc46c0030
    ctx->pc = 0x297094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x297098: 0xc6200040
    ctx->pc = 0x297098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29709c: 0x46006301
    ctx->pc = 0x29709cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2970a0: 0xe7ac0010
    ctx->pc = 0x2970a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2970a4: 0xc4600034
    ctx->pc = 0x2970a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2970a8: 0xc6210044
    ctx->pc = 0x2970a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2970ac: 0x46010001
    ctx->pc = 0x2970acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2970b0: 0xe7a00014
    ctx->pc = 0x2970b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2970b4: 0xc46d0038
    ctx->pc = 0x2970b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2970b8: 0xc6200048
    ctx->pc = 0x2970b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2970bc: 0x46006b41
    ctx->pc = 0x2970bcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2970c0: 0xe7ad0018
    ctx->pc = 0x2970c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2970c4:
    // 0x2970c4: 0xc0ba04a
    ctx->pc = 0x2970C4u;
    SET_GPR_U32(ctx, 31, 0x2970CCu);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2970CCu; }
    }
    if (ctx->pc != 0x2970CCu) { return; }
    ctx->pc = 0x2970CCu;
    // 0x2970cc: 0xc6210108
    ctx->pc = 0x2970ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2970d0: 0x10000002
    ctx->pc = 0x2970D0u;
    {
        const bool branch_taken_0x2970d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2970D4u;
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2970d0) {
            ctx->pc = 0x2970DCu;
            goto label_2970dc;
        }
    }
    ctx->pc = 0x2970D8u;
label_2970d8:
    // 0x2970d8: 0x44800800
    ctx->pc = 0x2970d8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_2970dc:
    // 0x2970dc: 0x44800000
    ctx->pc = 0x2970dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2970e0: 0x46000832
    ctx->pc = 0x2970e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2970e4: 0x0
    ctx->pc = 0x2970e4u;
    // NOP
    // 0x2970e8: 0x45010037
    ctx->pc = 0x2970E8u;
    {
        const bool branch_taken_0x2970e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2970ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2970e8) {
            ctx->pc = 0x2971C8u;
            goto label_2971c8;
        }
    }
    ctx->pc = 0x2970F0u;
    // 0x2970f0: 0x3c014049
    ctx->pc = 0x2970f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2970f4: 0x34210fdb
    ctx->pc = 0x2970f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2970f8: 0x44810000
    ctx->pc = 0x2970f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2970fc: 0x46010034
    ctx->pc = 0x2970fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297100: 0x45000006
    ctx->pc = 0x297100u;
    {
        const bool branch_taken_0x297100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297100) {
            ctx->pc = 0x29711Cu;
            goto label_29711c;
        }
    }
    ctx->pc = 0x297108u;
    // 0x297108: 0x3c0140c9
    ctx->pc = 0x297108u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29710c: 0x34210fdb
    ctx->pc = 0x29710cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x297110: 0x44810000
    ctx->pc = 0x297110u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297114: 0x1000000c
    ctx->pc = 0x297114u;
    {
        const bool branch_taken_0x297114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297118u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x297114) {
            ctx->pc = 0x297148u;
            goto label_297148;
        }
    }
    ctx->pc = 0x29711Cu;
label_29711c:
    // 0x29711c: 0x3c01c049
    ctx->pc = 0x29711cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x297120: 0x34210fdb
    ctx->pc = 0x297120u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x297124: 0x44810000
    ctx->pc = 0x297124u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297128: 0x46000836
    ctx->pc = 0x297128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29712c: 0x0
    ctx->pc = 0x29712cu;
    // NOP
    // 0x297130: 0x45020005
    ctx->pc = 0x297130u;
    {
        const bool branch_taken_0x297130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297130) {
            ctx->pc = 0x297134u;
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x297148u;
            goto label_297148;
        }
    }
    ctx->pc = 0x297138u;
    // 0x297138: 0x3c0140c9
    ctx->pc = 0x297138u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29713c: 0x34210fdb
    ctx->pc = 0x29713cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x297140: 0x44810000
    ctx->pc = 0x297140u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x297144: 0x46000800
    ctx->pc = 0x297144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_297148:
    // 0x297148: 0x46000046
    ctx->pc = 0x297148u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x29714c: 0x3c020031
    ctx->pc = 0x29714cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x297150: 0xc440ffa8
    ctx->pc = 0x297150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297154: 0x86220b4e
    ctx->pc = 0x297154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2894)));
    // 0x297158: 0x18400005
    ctx->pc = 0x297158u;
    {
        const bool branch_taken_0x297158 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29715Cu;
        ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        if (branch_taken_0x297158) {
            ctx->pc = 0x297170u;
            goto label_297170;
        }
    }
    ctx->pc = 0x297160u;
    // 0x297160: 0x3c013dcc
    ctx->pc = 0x297160u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x297164: 0x3421cccd
    ctx->pc = 0x297164u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x297168: 0x44810000
    ctx->pc = 0x297168u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29716c: 0x46001082
    ctx->pc = 0x29716cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_297170:
    // 0x297170: 0x46001007
    ctx->pc = 0x297170u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x297174: 0x46000834
    ctx->pc = 0x297174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297178: 0x45000003
    ctx->pc = 0x297178u;
    {
        const bool branch_taken_0x297178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x297178) {
            ctx->pc = 0x297188u;
            goto label_297188;
        }
    }
    ctx->pc = 0x297180u;
    // 0x297180: 0x10000005
    ctx->pc = 0x297180u;
    {
        const bool branch_taken_0x297180 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297184u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x297180) {
            ctx->pc = 0x297198u;
            goto label_297198;
        }
    }
    ctx->pc = 0x297188u;
label_297188:
    // 0x297188: 0x46011034
    ctx->pc = 0x297188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29718c: 0x0
    ctx->pc = 0x29718cu;
    // NOP
    // 0x297190: 0x45030001
    ctx->pc = 0x297190u;
    {
        const bool branch_taken_0x297190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297190) {
            ctx->pc = 0x297194u;
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x297198u;
            goto label_297198;
        }
    }
    ctx->pc = 0x297198u;
label_297198:
    // 0x297198: 0xc6200108
    ctx->pc = 0x297198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29719c: 0x46000800
    ctx->pc = 0x29719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2971a0: 0xe6200108
    ctx->pc = 0x2971a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x2971a4: 0x26300010
    ctx->pc = 0x2971a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
    // 0x2971a8: 0x3c04003a
    ctx->pc = 0x2971a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2971ac: 0x24842550
    ctx->pc = 0x2971acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x2971b0: 0xc0b549e
    ctx->pc = 0x2971B0u;
    SET_GPR_U32(ctx, 31, 0x2971B8u);
    ctx->pc = 0x2971B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971B8u; }
    }
    if (ctx->pc != 0x2971B8u) { return; }
    ctx->pc = 0x2971B8u;
    // 0x2971b8: 0xc62c0108
    ctx->pc = 0x2971b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2971bc: 0xc0b5632
    ctx->pc = 0x2971BCu;
    SET_GPR_U32(ctx, 31, 0x2971C4u);
    ctx->pc = 0x2971C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2971C4u; }
    }
    if (ctx->pc != 0x2971C4u) { return; }
    ctx->pc = 0x2971C4u;
    // 0x2971c4: 0xdfbf0040
    ctx->pc = 0x2971c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2971c8:
    // 0x2971c8: 0xdfb10030
    ctx->pc = 0x2971c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2971cc: 0xdfb00020
    ctx->pc = 0x2971ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2971d0: 0xc7b50058
    ctx->pc = 0x2971d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2971d4: 0xc7b40050
    ctx->pc = 0x2971d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2971d8: 0x3e00008
    ctx->pc = 0x2971D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2971DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296F5Cu: goto label_296f5c;
            case 0x297014u: goto label_297014;
            case 0x297040u: goto label_297040;
            case 0x29705Cu: goto label_29705c;
            case 0x29706Cu: goto label_29706c;
            case 0x297074u: goto label_297074;
            case 0x297080u: goto label_297080;
            case 0x2970C4u: goto label_2970c4;
            case 0x2970D8u: goto label_2970d8;
            case 0x2970DCu: goto label_2970dc;
            case 0x29711Cu: goto label_29711c;
            case 0x297148u: goto label_297148;
            case 0x297170u: goto label_297170;
            case 0x297188u: goto label_297188;
            case 0x297198u: goto label_297198;
            case 0x2971C8u: goto label_2971c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2971E0u;
}
