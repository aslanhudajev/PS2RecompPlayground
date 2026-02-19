#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateDirMatrix
// Address: 0x2d65e0 - 0x2d6798
void CreateDirMatrix_0x2d65e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d65e0u;

    // 0x2d65e0: 0x27bdffb0
    ctx->pc = 0x2d65e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d65e4: 0xffbf0040
    ctx->pc = 0x2d65e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d65e8: 0xffb20030
    ctx->pc = 0x2d65e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d65ec: 0xffb10020
    ctx->pc = 0x2d65ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2d65f0: 0xffb00010
    ctx->pc = 0x2d65f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d65f4: 0x80802d
    ctx->pc = 0x2d65f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65f8: 0xa0882d
    ctx->pc = 0x2d65f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65fc: 0xc6210000
    ctx->pc = 0x2d65fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6600: 0x46010842
    ctx->pc = 0x2d6600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d6604: 0xc6200004
    ctx->pc = 0x2d6604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6608: 0x46000002
    ctx->pc = 0x2d6608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d660c: 0x46000840
    ctx->pc = 0x2d660cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d6610: 0xc6200008
    ctx->pc = 0x2d6610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6614: 0x46000002
    ctx->pc = 0x2d6614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d6618: 0x46000840
    ctx->pc = 0x2d6618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d661c: 0x3c013a83
    ctx->pc = 0x2d661cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2d6620: 0x3421126f
    ctx->pc = 0x2d6620u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2d6624: 0x44810000
    ctx->pc = 0x2d6624u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6628: 0x46000834
    ctx->pc = 0x2d6628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d662c: 0x0
    ctx->pc = 0x2d662cu;
    // NOP
    // 0x2d6630: 0x45000007
    ctx->pc = 0x2D6630u;
    {
        const bool branch_taken_0x2d6630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6634u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d6630) {
            ctx->pc = 0x2D6650u;
            goto label_2d6650;
        }
    }
    ctx->pc = 0x2D6638u;
    // 0x2d6638: 0x3c04003a
    ctx->pc = 0x2d6638u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d663c: 0x24842550
    ctx->pc = 0x2d663cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x2d6640: 0xc0b549e
    ctx->pc = 0x2D6640u;
    SET_GPR_U32(ctx, 31, 0x2D6648u);
    ctx->pc = 0x2D6644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6648u; }
    }
    if (ctx->pc != 0x2D6648u) { return; }
    ctx->pc = 0x2D6648u;
    // 0x2d6648: 0x1000004a
    ctx->pc = 0x2D6648u;
    {
        const bool branch_taken_0x2d6648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d6648) {
            ctx->pc = 0x2D6774u;
            goto label_2d6774;
        }
    }
    ctx->pc = 0x2D6650u;
label_2d6650:
    // 0x2d6650: 0x56400015
    ctx->pc = 0x2D6650u;
    {
        const bool branch_taken_0x2d6650 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d6650) {
            ctx->pc = 0x2D6654u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2D66A8u;
            goto label_2d66a8;
        }
    }
    ctx->pc = 0x2D6658u;
    // 0x2d6658: 0xc62c0000
    ctx->pc = 0x2d6658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d665c: 0xc0b5c34
    ctx->pc = 0x2D665Cu;
    SET_GPR_U32(ctx, 31, 0x2D6664u);
    ctx->pc = 0x2D6660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6664u; }
    }
    if (ctx->pc != 0x2D6664u) { return; }
    ctx->pc = 0x2D6664u;
    // 0x2d6664: 0xc62c0004
    ctx->pc = 0x2d6664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6668: 0xc0ba04a
    ctx->pc = 0x2D6668u;
    SET_GPR_U32(ctx, 31, 0x2D6670u);
    ctx->pc = 0x2D666Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6670u; }
    }
    if (ctx->pc != 0x2D6670u) { return; }
    ctx->pc = 0x2D6670u;
    // 0x2d6670: 0x3c013f00
    ctx->pc = 0x2d6670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2d6674: 0x44810800
    ctx->pc = 0x2d6674u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d6678: 0x46010002
    ctx->pc = 0x2d6678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d667c: 0xe7a00000
    ctx->pc = 0x2d667cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d6680: 0xc62c0000
    ctx->pc = 0x2d6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6684: 0xc0ba04a
    ctx->pc = 0x2D6684u;
    SET_GPR_U32(ctx, 31, 0x2D668Cu);
    ctx->pc = 0x2D6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D668Cu; }
    }
    if (ctx->pc != 0x2D668Cu) { return; }
    ctx->pc = 0x2D668Cu;
    // 0x2d668c: 0xe7a00004
    ctx->pc = 0x2d668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d6690: 0xafa00008
    ctx->pc = 0x2d6690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d6694: 0x200202d
    ctx->pc = 0x2d6694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6698: 0xc0b5ae8
    ctx->pc = 0x2D6698u;
    SET_GPR_U32(ctx, 31, 0x2D66A0u);
    ctx->pc = 0x2D669Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66A0u; }
    }
    if (ctx->pc != 0x2D66A0u) { return; }
    ctx->pc = 0x2D66A0u;
    // 0x2d66a0: 0x10000038
    ctx->pc = 0x2D66A0u;
    {
        const bool branch_taken_0x2d66a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D66A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d66a0) {
            ctx->pc = 0x2D6784u;
            goto label_2d6784;
        }
    }
    ctx->pc = 0x2D66A8u;
label_2d66a8:
    // 0x2d66a8: 0xe6000020
    ctx->pc = 0x2d66a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2d66ac: 0xc6200004
    ctx->pc = 0x2d66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d66b0: 0xe6000024
    ctx->pc = 0x2d66b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2d66b4: 0xc6200008
    ctx->pc = 0x2d66b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d66b8: 0xe6000028
    ctx->pc = 0x2d66b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2d66bc: 0xc0b58ca
    ctx->pc = 0x2D66BCu;
    SET_GPR_U32(ctx, 31, 0x2D66C4u);
    ctx->pc = 0x2D66C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D66C4u; }
    }
    if (ctx->pc != 0x2D66C4u) { return; }
    ctx->pc = 0x2D66C4u;
    // 0x2d66c4: 0xc6030024
    ctx->pc = 0x2d66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d66c8: 0xc6410008
    ctx->pc = 0x2d66c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d66cc: 0x46011842
    ctx->pc = 0x2d66ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2d66d0: 0xc6020028
    ctx->pc = 0x2d66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d66d4: 0xc6400004
    ctx->pc = 0x2d66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d66d8: 0x46001002
    ctx->pc = 0x2d66d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d66dc: 0x46000841
    ctx->pc = 0x2d66dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d66e0: 0xe6010010
    ctx->pc = 0x2d66e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2d66e4: 0xc6400000
    ctx->pc = 0x2d66e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d66e8: 0x46001082
    ctx->pc = 0x2d66e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d66ec: 0xc6010020
    ctx->pc = 0x2d66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d66f0: 0xc6400008
    ctx->pc = 0x2d66f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d66f4: 0x46000802
    ctx->pc = 0x2d66f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d66f8: 0x46001081
    ctx->pc = 0x2d66f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2d66fc: 0xe6020014
    ctx->pc = 0x2d66fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2d6700: 0xc6400004
    ctx->pc = 0x2d6700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6704: 0x46000842
    ctx->pc = 0x2d6704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d6708: 0xc6400000
    ctx->pc = 0x2d6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d670c: 0x460018c2
    ctx->pc = 0x2d670cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d6710: 0x46030841
    ctx->pc = 0x2d6710u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d6714: 0xe6010018
    ctx->pc = 0x2d6714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2d6718: 0xc0b58ca
    ctx->pc = 0x2D6718u;
    SET_GPR_U32(ctx, 31, 0x2D6720u);
    ctx->pc = 0x2D671Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x2D6328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SlowNormalVector_0x2d6328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6720u; }
    }
    if (ctx->pc != 0x2D6720u) { return; }
    ctx->pc = 0x2D6720u;
    // 0x2d6720: 0xc6040014
    ctx->pc = 0x2d6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d6724: 0xc6030028
    ctx->pc = 0x2d6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6728: 0x46032042
    ctx->pc = 0x2d6728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d672c: 0xc6020018
    ctx->pc = 0x2d672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6730: 0xc6050024
    ctx->pc = 0x2d6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d6734: 0x46051002
    ctx->pc = 0x2d6734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2d6738: 0x46000841
    ctx->pc = 0x2d6738u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d673c: 0xe6010000
    ctx->pc = 0x2d673cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d6740: 0xc6010020
    ctx->pc = 0x2d6740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6744: 0x46011082
    ctx->pc = 0x2d6744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d6748: 0xc6000010
    ctx->pc = 0x2d6748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d674c: 0x460300c2
    ctx->pc = 0x2d674cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d6750: 0x46031081
    ctx->pc = 0x2d6750u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2d6754: 0xe6020004
    ctx->pc = 0x2d6754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d6758: 0x46050002
    ctx->pc = 0x2d6758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2d675c: 0x46012102
    ctx->pc = 0x2d675cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d6760: 0x46040001
    ctx->pc = 0x2d6760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d6764: 0xe6000008
    ctx->pc = 0x2d6764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d6768: 0xae00000c
    ctx->pc = 0x2d6768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d676c: 0xae00001c
    ctx->pc = 0x2d676cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2d6770: 0xae00002c
    ctx->pc = 0x2d6770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_2d6774:
    // 0x2d6774: 0x3c013f80
    ctx->pc = 0x2d6774u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6778: 0x44810000
    ctx->pc = 0x2d6778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d677c: 0xe600003c
    ctx->pc = 0x2d677cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2d6780: 0xdfbf0040
    ctx->pc = 0x2d6780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d6784:
    // 0x2d6784: 0xdfb20030
    ctx->pc = 0x2d6784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6788: 0xdfb10020
    ctx->pc = 0x2d6788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d678c: 0xdfb00010
    ctx->pc = 0x2d678cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6790: 0x3e00008
    ctx->pc = 0x2D6790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D6650u: goto label_2d6650;
            case 0x2D66A8u: goto label_2d66a8;
            case 0x2D6774u: goto label_2d6774;
            case 0x2D6784u: goto label_2d6784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D6798u;
}
