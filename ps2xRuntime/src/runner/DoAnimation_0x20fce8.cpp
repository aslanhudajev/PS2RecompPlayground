#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAnimation
// Address: 0x20fce8 - 0x20feec
void DoAnimation_0x20fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fce8u;

    // 0x20fce8: 0x27bdff60
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20fcec: 0xffbf0090
    ctx->pc = 0x20fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x20fcf0: 0xffb50080
    ctx->pc = 0x20fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x20fcf4: 0xffb40070
    ctx->pc = 0x20fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x20fcf8: 0xffb30060
    ctx->pc = 0x20fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x20fcfc: 0xffb20050
    ctx->pc = 0x20fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20fd00: 0xffb10040
    ctx->pc = 0x20fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x20fd04: 0xffb00030
    ctx->pc = 0x20fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x20fd08: 0x80902d
    ctx->pc = 0x20fd08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd0c: 0xa0982d
    ctx->pc = 0x20fd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd10: 0xc0802d
    ctx->pc = 0x20fd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd14: 0xe0a02d
    ctx->pc = 0x20fd14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd18: 0x100882d
    ctx->pc = 0x20fd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd1c: 0x8e490000
    ctx->pc = 0x20fd1cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20fd20: 0x11200069
    ctx->pc = 0x20FD20u;
    {
        const bool branch_taken_0x20fd20 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FD24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fd20) {
            ctx->pc = 0x20FEC8u;
            goto label_20fec8;
        }
    }
    ctx->pc = 0x20FD28u;
    // 0x20fd28: 0x8662000e
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x20fd2c: 0x210c0
    ctx->pc = 0x20fd2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x20fd30: 0x1224821
    ctx->pc = 0x20fd30u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x20fd34: 0x8e620004
    ctx->pc = 0x20fd34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x20fd38: 0x8c43000c
    ctx->pc = 0x20fd38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20fd3c: 0x8d220004
    ctx->pc = 0x20fd3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20fd40: 0x623021
    ctx->pc = 0x20fd40u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fd44: 0x95350000
    ctx->pc = 0x20fd44u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20fd48: 0x82620012
    ctx->pc = 0x20fd48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x20fd4c: 0x10400006
    ctx->pc = 0x20FD4Cu;
    {
        const bool branch_taken_0x20fd4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FD50u;
        SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        if (branch_taken_0x20fd4c) {
            ctx->pc = 0x20FD68u;
            goto label_20fd68;
        }
    }
    ctx->pc = 0x20FD54u;
    // 0x20fd54: 0x2402ffff
    ctx->pc = 0x20fd54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fd58: 0xa6420008
    ctx->pc = 0x20fd58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x20fd5c: 0xa640000a
    ctx->pc = 0x20fd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x20fd60: 0x24020002
    ctx->pc = 0x20fd60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fd64: 0xa2620012
    ctx->pc = 0x20fd64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 18), (uint8_t)GPR_U32(ctx, 2));
label_20fd68:
    // 0x20fd68: 0x32a20fff
    ctx->pc = 0x20fd68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 4095));
    // 0x20fd6c: 0x14400015
    ctx->pc = 0x20FD6Cu;
    {
        const bool branch_taken_0x20fd6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20FD70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fd6c) {
            ctx->pc = 0x20FDC4u;
            goto label_20fdc4;
        }
    }
    ctx->pc = 0x20FD74u;
    // 0x20fd74: 0x1200000f
    ctx->pc = 0x20FD74u;
    {
        const bool branch_taken_0x20fd74 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FD78u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x20fd74) {
            ctx->pc = 0x20FDB4u;
            goto label_20fdb4;
        }
    }
    ctx->pc = 0x20FD7Cu;
    // 0x20fd7c: 0x24842550
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x20fd80: 0xc0b549e
    ctx->pc = 0x20FD80u;
    SET_GPR_U32(ctx, 31, 0x20FD88u);
    ctx->pc = 0x20FD84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD88u; }
    }
    if (ctx->pc != 0x20FD88u) { return; }
    ctx->pc = 0x20FD88u;
    // 0x20fd88: 0x52200008
    ctx->pc = 0x20FD88u;
    {
        const bool branch_taken_0x20fd88 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fd88) {
            ctx->pc = 0x20FD8Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->pc = 0x20FDACu;
            goto label_20fdac;
        }
    }
    ctx->pc = 0x20FD90u;
    // 0x20fd90: 0xc6200000
    ctx->pc = 0x20fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fd94: 0xe6000030
    ctx->pc = 0x20fd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x20fd98: 0xc6200004
    ctx->pc = 0x20fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fd9c: 0xe6000034
    ctx->pc = 0x20fd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x20fda0: 0xc6200008
    ctx->pc = 0x20fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fda4: 0x10000003
    ctx->pc = 0x20FDA4u;
    {
        const bool branch_taken_0x20fda4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FDA8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        if (branch_taken_0x20fda4) {
            ctx->pc = 0x20FDB4u;
            goto label_20fdb4;
        }
    }
    ctx->pc = 0x20FDACu;
label_20fdac:
    // 0x20fdac: 0xae000034
    ctx->pc = 0x20fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x20fdb0: 0xae000038
    ctx->pc = 0x20fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_20fdb4:
    // 0x20fdb4: 0xc083eca
    ctx->pc = 0x20FDB4u;
    SET_GPR_U32(ctx, 31, 0x20FDBCu);
    ctx->pc = 0x20FDB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ZeroAnimData_0x20fb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDBCu; }
    }
    if (ctx->pc != 0x20FDBCu) { return; }
    ctx->pc = 0x20FDBCu;
    // 0x20fdbc: 0x10000042
    ctx->pc = 0x20FDBCu;
    {
        const bool branch_taken_0x20fdbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FDC0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fdbc) {
            ctx->pc = 0x20FEC8u;
            goto label_20fec8;
        }
    }
    ctx->pc = 0x20FDC4u;
label_20fdc4:
    // 0x20fdc4: 0x3a0282d
    ctx->pc = 0x20fdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdc8: 0x260382d
    ctx->pc = 0x20fdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdcc: 0xc083eee
    ctx->pc = 0x20FDCCu;
    SET_GPR_U32(ctx, 31, 0x20FDD4u);
    ctx->pc = 0x20FDD0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcAnimation_0x20fbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDD4u; }
    }
    if (ctx->pc != 0x20FDD4u) { return; }
    ctx->pc = 0x20FDD4u;
    // 0x20fdd4: 0x1040003c
    ctx->pc = 0x20FDD4u;
    {
        const bool branch_taken_0x20fdd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FDD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fdd4) {
            ctx->pc = 0x20FEC8u;
            goto label_20fec8;
        }
    }
    ctx->pc = 0x20FDDCu;
    // 0x20fddc: 0x12000022
    ctx->pc = 0x20FDDCu;
    {
        const bool branch_taken_0x20fddc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FDE0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 21), 32768));
        if (branch_taken_0x20fddc) {
            ctx->pc = 0x20FE68u;
            goto label_20fe68;
        }
    }
    ctx->pc = 0x20FDE4u;
    // 0x20fde4: 0x10400005
    ctx->pc = 0x20FDE4u;
    {
        const bool branch_taken_0x20fde4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FDE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20fde4) {
            ctx->pc = 0x20FDFCu;
            goto label_20fdfc;
        }
    }
    ctx->pc = 0x20FDECu;
    // 0x20fdec: 0xc0b5a4e
    ctx->pc = 0x20FDECu;
    SET_GPR_U32(ctx, 31, 0x20FDF4u);
    ctx->pc = 0x20FDF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6938u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreatePYRMatrix_0x2d6938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDF4u; }
    }
    if (ctx->pc != 0x20FDF4u) { return; }
    ctx->pc = 0x20FDF4u;
    // 0x20fdf4: 0x10000003
    ctx->pc = 0x20FDF4u;
    {
        const bool branch_taken_0x20fdf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fdf4) {
            ctx->pc = 0x20FE04u;
            goto label_20fe04;
        }
    }
    ctx->pc = 0x20FDFCu;
label_20fdfc:
    // 0x20fdfc: 0xc0b5a9c
    ctx->pc = 0x20FDFCu;
    SET_GPR_U32(ctx, 31, 0x20FE04u);
    ctx->pc = 0x20FE00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateRYPMatrix_0x2d6a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE04u; }
    }
    if (ctx->pc != 0x20FE04u) { return; }
    ctx->pc = 0x20FE04u;
label_20fe04:
    // 0x20fe04: 0x1220000c
    ctx->pc = 0x20FE04u;
    {
        const bool branch_taken_0x20fe04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FE08u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x20fe04) {
            ctx->pc = 0x20FE38u;
            goto label_20fe38;
        }
    }
    ctx->pc = 0x20FE0Cu;
    // 0x20fe0c: 0xc6210000
    ctx->pc = 0x20fe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fe10: 0x46010000
    ctx->pc = 0x20fe10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20fe14: 0xe6000030
    ctx->pc = 0x20fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x20fe18: 0xc7a00014
    ctx->pc = 0x20fe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe1c: 0xc6210004
    ctx->pc = 0x20fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fe20: 0x46010000
    ctx->pc = 0x20fe20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20fe24: 0xe6000034
    ctx->pc = 0x20fe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x20fe28: 0xc7a00018
    ctx->pc = 0x20fe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe2c: 0xc6210008
    ctx->pc = 0x20fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fe30: 0x10000005
    ctx->pc = 0x20FE30u;
    {
        const bool branch_taken_0x20fe30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FE34u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x20fe30) {
            ctx->pc = 0x20FE48u;
            goto label_20fe48;
        }
    }
    ctx->pc = 0x20FE38u;
label_20fe38:
    // 0x20fe38: 0xe6000030
    ctx->pc = 0x20fe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x20fe3c: 0xc7a00014
    ctx->pc = 0x20fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe40: 0xe6000034
    ctx->pc = 0x20fe40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x20fe44: 0xc7a00018
    ctx->pc = 0x20fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20fe48:
    // 0x20fe48: 0x12800007
    ctx->pc = 0x20FE48u;
    {
        const bool branch_taken_0x20fe48 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FE4Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        if (branch_taken_0x20fe48) {
            ctx->pc = 0x20FE68u;
            goto label_20fe68;
        }
    }
    ctx->pc = 0x20FE50u;
    // 0x20fe50: 0xc7a00020
    ctx->pc = 0x20fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe54: 0xe6800000
    ctx->pc = 0x20fe54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x20fe58: 0xc7a00024
    ctx->pc = 0x20fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe5c: 0xe6800004
    ctx->pc = 0x20fe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x20fe60: 0xc7a00028
    ctx->pc = 0x20fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe64: 0xe6800008
    ctx->pc = 0x20fe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_20fe68:
    // 0x20fe68: 0xc6610014
    ctx->pc = 0x20fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fe6c: 0x44800000
    ctx->pc = 0x20fe6cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x20fe70: 0x46000832
    ctx->pc = 0x20fe70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fe74: 0x0
    ctx->pc = 0x20fe74u;
    // NOP
    // 0x20fe78: 0x45000012
    ctx->pc = 0x20FE78u;
    {
        const bool branch_taken_0x20fe78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FE7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x20fe78) {
            ctx->pc = 0x20FEC4u;
            goto label_20fec4;
        }
    }
    ctx->pc = 0x20FE80u;
    // 0x20fe80: 0xe6400030
    ctx->pc = 0x20fe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x20fe84: 0xc7a00004
    ctx->pc = 0x20fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe88: 0xe6400034
    ctx->pc = 0x20fe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x20fe8c: 0xc7a00008
    ctx->pc = 0x20fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe90: 0xe6400038
    ctx->pc = 0x20fe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x20fe94: 0xc7a00010
    ctx->pc = 0x20fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fe98: 0xe6400060
    ctx->pc = 0x20fe98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x20fe9c: 0xc7a00014
    ctx->pc = 0x20fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fea0: 0xe6400064
    ctx->pc = 0x20fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x20fea4: 0xc7a00018
    ctx->pc = 0x20fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fea8: 0xe6400068
    ctx->pc = 0x20fea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x20feac: 0xc7a00020
    ctx->pc = 0x20feacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20feb0: 0xe6400090
    ctx->pc = 0x20feb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x20feb4: 0xc7a00024
    ctx->pc = 0x20feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20feb8: 0xe6400094
    ctx->pc = 0x20feb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x20febc: 0xc7a00028
    ctx->pc = 0x20febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fec0: 0xe6400098
    ctx->pc = 0x20fec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
label_20fec4:
    // 0x20fec4: 0x2a0102d
    ctx->pc = 0x20fec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20fec8:
    // 0x20fec8: 0xdfbf0090
    ctx->pc = 0x20fec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20fecc: 0xdfb50080
    ctx->pc = 0x20feccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20fed0: 0xdfb40070
    ctx->pc = 0x20fed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20fed4: 0xdfb30060
    ctx->pc = 0x20fed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20fed8: 0xdfb20050
    ctx->pc = 0x20fed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20fedc: 0xdfb10040
    ctx->pc = 0x20fedcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20fee0: 0xdfb00030
    ctx->pc = 0x20fee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fee4: 0x3e00008
    ctx->pc = 0x20FEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FEE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FD68u: goto label_20fd68;
            case 0x20FDACu: goto label_20fdac;
            case 0x20FDB4u: goto label_20fdb4;
            case 0x20FDC4u: goto label_20fdc4;
            case 0x20FDFCu: goto label_20fdfc;
            case 0x20FE04u: goto label_20fe04;
            case 0x20FE38u: goto label_20fe38;
            case 0x20FE48u: goto label_20fe48;
            case 0x20FE68u: goto label_20fe68;
            case 0x20FEC4u: goto label_20fec4;
            case 0x20FEC8u: goto label_20fec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FEECu;
}
