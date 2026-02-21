#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: receive_yaw
// Address: 0x26ecb8 - 0x26f440
void receive_yaw_0x26ecb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26ecb8u;

    // 0x26ecb8: 0x27bdff00
    ctx->pc = 0x26ecb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x26ecbc: 0xffbf00b0
    ctx->pc = 0x26ecbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x26ecc0: 0xffbe00a0
    ctx->pc = 0x26ecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x26ecc4: 0xffb70090
    ctx->pc = 0x26ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x26ecc8: 0xffb60080
    ctx->pc = 0x26ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x26eccc: 0xffb50070
    ctx->pc = 0x26ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x26ecd0: 0xffb40060
    ctx->pc = 0x26ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x26ecd4: 0xffb30050
    ctx->pc = 0x26ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x26ecd8: 0xffb20040
    ctx->pc = 0x26ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26ecdc: 0xffb10030
    ctx->pc = 0x26ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26ece0: 0xffb00020
    ctx->pc = 0x26ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26ece4: 0xe7ba00f0
    ctx->pc = 0x26ece4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x26ece8: 0xe7b900e8
    ctx->pc = 0x26ece8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x26ecec: 0xe7b800e0
    ctx->pc = 0x26ececu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x26ecf0: 0xe7b700d8
    ctx->pc = 0x26ecf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x26ecf4: 0xe7b600d0
    ctx->pc = 0x26ecf4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26ecf8: 0xe7b500c8
    ctx->pc = 0x26ecf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x26ecfc: 0xe7b400c0
    ctx->pc = 0x26ecfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26ed00: 0x46006686
    ctx->pc = 0x26ed00u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x26ed04: 0x240301a0
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26ed08: 0x831818
    ctx->pc = 0x26ed08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26ed0c: 0x3c020034
    ctx->pc = 0x26ed0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ed10: 0x2442eb60
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26ed14: 0x62a821
    ctx->pc = 0x26ed14u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ed18: 0x902d
    ctx->pc = 0x26ed18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed1c: 0xf02d
    ctx->pc = 0x26ed1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed20: 0x3c0147c3
    ctx->pc = 0x26ed20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x26ed24: 0x34215000
    ctx->pc = 0x26ed24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x26ed28: 0x4481a000
    ctx->pc = 0x26ed28u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x26ed2c: 0x4600a546
    ctx->pc = 0x26ed2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x26ed30: 0x4480b000
    ctx->pc = 0x26ed30u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x26ed34: 0x4600b606
    ctx->pc = 0x26ed34u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x26ed38: 0x4600b646
    ctx->pc = 0x26ed38u;
    ctx->f[25] = FPU_MOV_S(ctx->f[22]);
    // 0x26ed3c: 0x3c020034
    ctx->pc = 0x26ed3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ed40: 0x8c42f930
    ctx->pc = 0x26ed40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x26ed44: 0x4410005
    ctx->pc = 0x26ED44u;
    {
        const bool branch_taken_0x26ed44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26ED48u;
        ctx->f[23] = FPU_MOV_S(ctx->f[22]);
        if (branch_taken_0x26ed44) {
            ctx->pc = 0x26ED5Cu;
            goto label_26ed5c;
        }
    }
    ctx->pc = 0x26ED4Cu;
    // 0x26ed4c: 0x3c013f00
    ctx->pc = 0x26ed4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26ed50: 0x4481d000
    ctx->pc = 0x26ed50u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 1);
    // 0x26ed54: 0x10000023
    ctx->pc = 0x26ED54u;
    {
        const bool branch_taken_0x26ed54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26ED58u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ed54) {
            ctx->pc = 0x26EDE4u;
            goto label_26ede4;
        }
    }
    ctx->pc = 0x26ED5Cu;
label_26ed5c:
    // 0x26ed5c: 0x14800021
    ctx->pc = 0x26ED5Cu;
    {
        const bool branch_taken_0x26ed5c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x26ED60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ed5c) {
            ctx->pc = 0x26EDE4u;
            goto label_26ede4;
        }
    }
    ctx->pc = 0x26ED64u;
    // 0x26ed64: 0x3c020034
    ctx->pc = 0x26ed64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ed68: 0x8c42fa04
    ctx->pc = 0x26ed68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965764)));
    // 0x26ed6c: 0x1040001c
    ctx->pc = 0x26ED6Cu;
    {
        const bool branch_taken_0x26ed6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26ED70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x26ed6c) {
            ctx->pc = 0x26EDE0u;
            goto label_26ede0;
        }
    }
    ctx->pc = 0x26ED74u;
    // 0x26ed74: 0x8ea300f8
    ctx->pc = 0x26ed74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x26ed78: 0x1462001a
    ctx->pc = 0x26ED78u;
    {
        const bool branch_taken_0x26ed78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x26ED7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ed78) {
            ctx->pc = 0x26EDE4u;
            goto label_26ede4;
        }
    }
    ctx->pc = 0x26ED80u;
    // 0x26ed80: 0x3c020034
    ctx->pc = 0x26ed80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ed84: 0xc441f9fc
    ctx->pc = 0x26ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ed88: 0x3c013f20
    ctx->pc = 0x26ed88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16160 << 16));
    // 0x26ed8c: 0x44810000
    ctx->pc = 0x26ed8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ed90: 0x46010036
    ctx->pc = 0x26ed90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ed94: 0x0
    ctx->pc = 0x26ed94u;
    // NOP
    // 0x26ed98: 0x45000011
    ctx->pc = 0x26ED98u;
    {
        const bool branch_taken_0x26ed98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26ED9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ed98) {
            ctx->pc = 0x26EDE0u;
            goto label_26ede0;
        }
    }
    ctx->pc = 0x26EDA0u;
    // 0x26eda0: 0x3c030034
    ctx->pc = 0x26eda0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26eda4: 0x8c44fa20
    ctx->pc = 0x26eda4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965792)));
    // 0x26eda8: 0x8c65f928
    ctx->pc = 0x26eda8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294965544)));
    // 0x26edac: 0x1085000c
    ctx->pc = 0x26EDACu;
    {
        const bool branch_taken_0x26edac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x26EDB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26edac) {
            ctx->pc = 0x26EDE0u;
            goto label_26ede0;
        }
    }
    ctx->pc = 0x26EDB4u;
    // 0x26edb4: 0x8c43f92c
    ctx->pc = 0x26edb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26edb8: 0x10830009
    ctx->pc = 0x26EDB8u;
    {
        const bool branch_taken_0x26edb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x26EDBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26edb8) {
            ctx->pc = 0x26EDE0u;
            goto label_26ede0;
        }
    }
    ctx->pc = 0x26EDC0u;
    // 0x26edc0: 0x8c42fa24
    ctx->pc = 0x26edc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965796)));
    // 0x26edc4: 0x50450007
    ctx->pc = 0x26EDC4u;
    {
        const bool branch_taken_0x26edc4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x26edc4) {
            ctx->pc = 0x26EDC8u;
            SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
            ctx->pc = 0x26EDE4u;
            goto label_26ede4;
        }
    }
    ctx->pc = 0x26EDCCu;
    // 0x26edcc: 0x10430005
    ctx->pc = 0x26EDCCu;
    {
        const bool branch_taken_0x26edcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x26EDD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26edcc) {
            ctx->pc = 0x26EDE4u;
            goto label_26ede4;
        }
    }
    ctx->pc = 0x26EDD4u;
    // 0x26edd4: 0x3c013f00
    ctx->pc = 0x26edd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26edd8: 0x4481d000
    ctx->pc = 0x26edd8u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 1);
    // 0x26eddc: 0x241e0001
    ctx->pc = 0x26eddcu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 1));
label_26ede0:
    // 0x26ede0: 0x3c020034
    ctx->pc = 0x26ede0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26ede4:
    // 0x26ede4: 0x8c428b70
    ctx->pc = 0x26ede4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26ede8: 0x18400056
    ctx->pc = 0x26EDE8u;
    {
        const bool branch_taken_0x26ede8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26EDECu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26ede8) {
            ctx->pc = 0x26EF44u;
            goto label_26ef44;
        }
    }
    ctx->pc = 0x26EDF0u;
    // 0x26edf0: 0x3c020033
    ctx->pc = 0x26edf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26edf4: 0x24574b70
    ctx->pc = 0x26edf4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x26edf8: 0x3c160034
    ctx->pc = 0x26edf8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x26edfc: 0x3c140034
    ctx->pc = 0x26edfcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x26ee00: 0x3c130034
    ctx->pc = 0x26ee00u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x26ee04: 0x111180
    ctx->pc = 0x26ee04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
label_26ee08:
    // 0x26ee08: 0x578021
    ctx->pc = 0x26ee08u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x26ee0c: 0x92020000
    ctx->pc = 0x26ee0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26ee10: 0x54400047
    ctx->pc = 0x26EE10u;
    {
        const bool branch_taken_0x26ee10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26ee10) {
            ctx->pc = 0x26EE14u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26EF30u;
            goto label_26ef30;
        }
    }
    ctx->pc = 0x26EE18u;
    // 0x26ee18: 0x86020002
    ctx->pc = 0x26ee18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26ee1c: 0x50400044
    ctx->pc = 0x26EE1Cu;
    {
        const bool branch_taken_0x26ee1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26ee1c) {
            ctx->pc = 0x26EE20u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26EF30u;
            goto label_26ef30;
        }
    }
    ctx->pc = 0x26EE24u;
    // 0x26ee24: 0xc6a30180
    ctx->pc = 0x26ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ee28: 0xc6000010
    ctx->pc = 0x26ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ee2c: 0x460018c1
    ctx->pc = 0x26ee2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26ee30: 0xe7a30000
    ctx->pc = 0x26ee30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ee34: 0xc6a20184
    ctx->pc = 0x26ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ee38: 0xc6000014
    ctx->pc = 0x26ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ee3c: 0x46001081
    ctx->pc = 0x26ee3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26ee40: 0xe7a20004
    ctx->pc = 0x26ee40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ee44: 0xc6a00188
    ctx->pc = 0x26ee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ee48: 0xc6010018
    ctx->pc = 0x26ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ee4c: 0x46010001
    ctx->pc = 0x26ee4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26ee50: 0xe7a00008
    ctx->pc = 0x26ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ee54: 0x460318c2
    ctx->pc = 0x26ee54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x26ee58: 0x46021082
    ctx->pc = 0x26ee58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26ee5c: 0x460218c0
    ctx->pc = 0x26ee5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x26ee60: 0x46000002
    ctx->pc = 0x26ee60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26ee64: 0x46001b00
    ctx->pc = 0x26ee64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26ee68: 0x0
    ctx->pc = 0x26ee68u;
    // NOP
    // 0x26ee6c: 0x0
    ctx->pc = 0x26ee6cu;
    // NOP
    // 0x26ee70: 0x460c0044
    ctx->pc = 0x26ee70u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x26ee74: 0x46010832
    ctx->pc = 0x26ee74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ee78: 0x0
    ctx->pc = 0x26ee78u;
    // NOP
    // 0x26ee7c: 0x45030005
    ctx->pc = 0x26EE7Cu;
    {
        const bool branch_taken_0x26ee7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ee7c) {
            ctx->pc = 0x26EE80u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26EE94u;
            goto label_26ee94;
        }
    }
    ctx->pc = 0x26EE84u;
    // 0x26ee84: 0xc0ba284
    ctx->pc = 0x26EE84u;
    SET_GPR_U32(ctx, 31, 0x26EE8Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE8Cu; }
    }
    if (ctx->pc != 0x26EE8Cu) { return; }
    ctx->pc = 0x26EE8Cu;
    // 0x26ee8c: 0x46000046
    ctx->pc = 0x26ee8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x26ee90: 0xc7a00004
    ctx->pc = 0x26ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ee94:
    // 0x26ee94: 0x46000005
    ctx->pc = 0x26ee94u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26ee98: 0x8ec2f930
    ctx->pc = 0x26ee98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294965552)));
    // 0x26ee9c: 0x4410013
    ctx->pc = 0x26EE9Cu;
    {
        const bool branch_taken_0x26ee9c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26EEA0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26ee9c) {
            ctx->pc = 0x26EEECu;
            goto label_26eeec;
        }
    }
    ctx->pc = 0x26EEA4u;
    // 0x26eea4: 0x46140034
    ctx->pc = 0x26eea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eea8: 0x0
    ctx->pc = 0x26eea8u;
    // NOP
    // 0x26eeac: 0x45000006
    ctx->pc = 0x26EEACu;
    {
        const bool branch_taken_0x26eeac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EEB0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294965544)));
        if (branch_taken_0x26eeac) {
            ctx->pc = 0x26EEC8u;
            goto label_26eec8;
        }
    }
    ctx->pc = 0x26EEB4u;
    // 0x26eeb4: 0xae82f92c
    ctx->pc = 0x26eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965548), GPR_U32(ctx, 2));
    // 0x26eeb8: 0x4600a546
    ctx->pc = 0x26eeb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x26eebc: 0x4600c586
    ctx->pc = 0x26eebcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
    // 0x26eec0: 0x10000015
    ctx->pc = 0x26EEC0u;
    {
        const bool branch_taken_0x26eec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EEC4u;
        ctx->f[23] = FPU_MOV_S(ctx->f[25]);
        if (branch_taken_0x26eec0) {
            ctx->pc = 0x26EF18u;
            goto label_26ef18;
        }
    }
    ctx->pc = 0x26EEC8u;
label_26eec8:
    // 0x26eec8: 0x46150034
    ctx->pc = 0x26eec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eecc: 0x0
    ctx->pc = 0x26eeccu;
    // NOP
    // 0x26eed0: 0x45020017
    ctx->pc = 0x26EED0u;
    {
        const bool branch_taken_0x26eed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eed0) {
            ctx->pc = 0x26EED4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26EF30u;
            goto label_26ef30;
        }
    }
    ctx->pc = 0x26EED8u;
    // 0x26eed8: 0xae91f92c
    ctx->pc = 0x26eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965548), GPR_U32(ctx, 17));
    // 0x26eedc: 0x46000546
    ctx->pc = 0x26eedcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26eee0: 0xc6160024
    ctx->pc = 0x26eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26eee4: 0x10000010
    ctx->pc = 0x26EEE4u;
    {
        const bool branch_taken_0x26eee4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EEE8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        if (branch_taken_0x26eee4) {
            ctx->pc = 0x26EF28u;
            goto label_26ef28;
        }
    }
    ctx->pc = 0x26EEECu;
label_26eeec:
    // 0x26eeec: 0x16220006
    ctx->pc = 0x26EEECu;
    {
        const bool branch_taken_0x26eeec = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x26eeec) {
            ctx->pc = 0x26EF08u;
            goto label_26ef08;
        }
    }
    ctx->pc = 0x26EEF4u;
    // 0x26eef4: 0xae91f92c
    ctx->pc = 0x26eef4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965548), GPR_U32(ctx, 17));
    // 0x26eef8: 0x46000546
    ctx->pc = 0x26eef8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26eefc: 0xc6160024
    ctx->pc = 0x26eefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26ef00: 0x10000009
    ctx->pc = 0x26EF00u;
    {
        const bool branch_taken_0x26ef00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EF04u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        if (branch_taken_0x26ef00) {
            ctx->pc = 0x26EF28u;
            goto label_26ef28;
        }
    }
    ctx->pc = 0x26EF08u;
label_26ef08:
    // 0x26ef08: 0x46140034
    ctx->pc = 0x26ef08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ef0c: 0x0
    ctx->pc = 0x26ef0cu;
    // NOP
    // 0x26ef10: 0x45020007
    ctx->pc = 0x26EF10u;
    {
        const bool branch_taken_0x26ef10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ef10) {
            ctx->pc = 0x26EF14u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26EF30u;
            goto label_26ef30;
        }
    }
    ctx->pc = 0x26EF18u;
label_26ef18:
    // 0x26ef18: 0xae71f928
    ctx->pc = 0x26ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294965544), GPR_U32(ctx, 17));
    // 0x26ef1c: 0x46000506
    ctx->pc = 0x26ef1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26ef20: 0xc6180024
    ctx->pc = 0x26ef20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x26ef24: 0xc6190020
    ctx->pc = 0x26ef24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_26ef28:
    // 0x26ef28: 0x26520001
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x26ef2c: 0x26310001
    ctx->pc = 0x26ef2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_26ef30:
    // 0x26ef30: 0x3c020034
    ctx->pc = 0x26ef30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ef34: 0x8c428b70
    ctx->pc = 0x26ef34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26ef38: 0x222102a
    ctx->pc = 0x26ef38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x26ef3c: 0x1440ffb2
    ctx->pc = 0x26EF3Cu;
    {
        const bool branch_taken_0x26ef3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26EF40u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
        if (branch_taken_0x26ef3c) {
            ctx->pc = 0x26EE08u;
            goto label_26ee08;
        }
    }
    ctx->pc = 0x26EF44u;
label_26ef44:
    // 0x26ef44: 0x3c020034
    ctx->pc = 0x26ef44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ef48: 0x8c42f930
    ctx->pc = 0x26ef48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x26ef4c: 0x4400014
    ctx->pc = 0x26EF4Cu;
    {
        const bool branch_taken_0x26ef4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26EF50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26ef4c) {
            ctx->pc = 0x26EFA0u;
            goto label_26efa0;
        }
    }
    ctx->pc = 0x26EF54u;
    // 0x26ef54: 0x4614a834
    ctx->pc = 0x26ef54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ef58: 0x0
    ctx->pc = 0x26ef58u;
    // NOP
    // 0x26ef5c: 0x45000010
    ctx->pc = 0x26EF5Cu;
    {
        const bool branch_taken_0x26ef5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26EF60u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x26ef5c) {
            ctx->pc = 0x26EFA0u;
            goto label_26efa0;
        }
    }
    ctx->pc = 0x26EF64u;
    // 0x26ef64: 0x8c91f928
    ctx->pc = 0x26ef64u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 4294965544)));
    // 0x26ef68: 0x3c030034
    ctx->pc = 0x26ef68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26ef6c: 0x8c62f92c
    ctx->pc = 0x26ef6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965548)));
    // 0x26ef70: 0xac82f928
    ctx->pc = 0x26ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965544), GPR_U32(ctx, 2));
    // 0x26ef74: 0xac71f92c
    ctx->pc = 0x26ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965548), GPR_U32(ctx, 17));
    // 0x26ef78: 0x4600a006
    ctx->pc = 0x26ef78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x26ef7c: 0x4600ad06
    ctx->pc = 0x26ef7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x26ef80: 0x46000546
    ctx->pc = 0x26ef80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26ef84: 0x4600c006
    ctx->pc = 0x26ef84u;
    ctx->f[0] = FPU_MOV_S(ctx->f[24]);
    // 0x26ef88: 0x4600b606
    ctx->pc = 0x26ef88u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
    // 0x26ef8c: 0x46000586
    ctx->pc = 0x26ef8cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x26ef90: 0x4600c806
    ctx->pc = 0x26ef90u;
    ctx->f[0] = FPU_MOV_S(ctx->f[25]);
    // 0x26ef94: 0x4600be46
    ctx->pc = 0x26ef94u;
    ctx->f[25] = FPU_MOV_S(ctx->f[23]);
    // 0x26ef98: 0x460005c6
    ctx->pc = 0x26ef98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x26ef9c: 0x24020001
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_26efa0:
    // 0x26efa0: 0x16420007
    ctx->pc = 0x26EFA0u;
    {
        const bool branch_taken_0x26efa0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x26EFA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26efa0) {
            ctx->pc = 0x26EFC0u;
            goto label_26efc0;
        }
    }
    ctx->pc = 0x26EFA8u;
    // 0x26efa8: 0x3c030034
    ctx->pc = 0x26efa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26efac: 0x8c63f928
    ctx->pc = 0x26efacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965544)));
    // 0x26efb0: 0xac43f92c
    ctx->pc = 0x26efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965548), GPR_U32(ctx, 3));
    // 0x26efb4: 0x4600a546
    ctx->pc = 0x26efb4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x26efb8: 0x4600c586
    ctx->pc = 0x26efb8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[24]);
    // 0x26efbc: 0x4600cdc6
    ctx->pc = 0x26efbcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[25]);
label_26efc0:
    // 0x26efc0: 0x1240010b
    ctx->pc = 0x26EFC0u;
    {
        const bool branch_taken_0x26efc0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x26EFC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26efc0) {
            ctx->pc = 0x26F3F0u;
            goto label_26f3f0;
        }
    }
    ctx->pc = 0x26EFC8u;
    // 0x26efc8: 0x8c42f928
    ctx->pc = 0x26efc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26efcc: 0x21180
    ctx->pc = 0x26efccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x26efd0: 0x3c030033
    ctx->pc = 0x26efd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x26efd4: 0x24634b70
    ctx->pc = 0x26efd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19312));
    // 0x26efd8: 0x438021
    ctx->pc = 0x26efd8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26efdc: 0x3c020034
    ctx->pc = 0x26efdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26efe0: 0x8c42f92c
    ctx->pc = 0x26efe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26efe4: 0x21180
    ctx->pc = 0x26efe4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x26efe8: 0x438821
    ctx->pc = 0x26efe8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26efec: 0x4615a500
    ctx->pc = 0x26efecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x26eff0: 0x44800000
    ctx->pc = 0x26eff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26eff4: 0x4600a032
    ctx->pc = 0x26eff4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eff8: 0x0
    ctx->pc = 0x26eff8u;
    // NOP
    // 0x26effc: 0x450100fd
    ctx->pc = 0x26EFFCu;
    {
        const bool branch_taken_0x26effc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F000u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26effc) {
            ctx->pc = 0x26F3F4u;
            goto label_26f3f4;
        }
    }
    ctx->pc = 0x26F004u;
    // 0x26f004: 0x24020001
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f008: 0x124200f9
    ctx->pc = 0x26F008u;
    {
        const bool branch_taken_0x26f008 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x26F00Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 320));
        if (branch_taken_0x26f008) {
            ctx->pc = 0x26F3F0u;
            goto label_26f3f0;
        }
    }
    ctx->pc = 0x26F010u;
    // 0x26f010: 0x26050010
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f014: 0x26260010
    ctx->pc = 0x26f014u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x26f018: 0xc0874d8
    ctx->pc = 0x26F018u;
    SET_GPR_U32(ctx, 31, 0x26F020u);
    ctx->pc = 0x26F01Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x21D360u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineColl_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F020u; }
    }
    if (ctx->pc != 0x26F020u) { return; }
    ctx->pc = 0x26F020u;
    // 0x26f020: 0xc6010010
    ctx->pc = 0x26f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f024: 0xc6200010
    ctx->pc = 0x26f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f028: 0x46000b01
    ctx->pc = 0x26f028u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f02c: 0xe7ac0000
    ctx->pc = 0x26f02cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26f030: 0xc6020014
    ctx->pc = 0x26f030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f034: 0xc6200014
    ctx->pc = 0x26f034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f038: 0x46001081
    ctx->pc = 0x26f038u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26f03c: 0xe7a20004
    ctx->pc = 0x26f03cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26f040: 0xc6010018
    ctx->pc = 0x26f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f044: 0xc6200018
    ctx->pc = 0x26f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f048: 0x46000841
    ctx->pc = 0x26f048u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f04c: 0xe7a10008
    ctx->pc = 0x26f04cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26f050: 0x460c6002
    ctx->pc = 0x26f050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26f054: 0x46021082
    ctx->pc = 0x26f054u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26f058: 0x46020000
    ctx->pc = 0x26f058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26f05c: 0x46010842
    ctx->pc = 0x26f05cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26f060: 0x46010000
    ctx->pc = 0x26f060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26f064: 0x0
    ctx->pc = 0x26f064u;
    // NOP
    // 0x26f068: 0x0
    ctx->pc = 0x26f068u;
    // NOP
    // 0x26f06c: 0x46000004
    ctx->pc = 0x26f06cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26f070: 0x46000032
    ctx->pc = 0x26f070u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f074: 0x0
    ctx->pc = 0x26f074u;
    // NOP
    // 0x26f078: 0x45010006
    ctx->pc = 0x26F078u;
    {
        const bool branch_taken_0x26f078 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F07Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x26f078) {
            ctx->pc = 0x26F094u;
            goto label_26f094;
        }
    }
    ctx->pc = 0x26F080u;
    // 0x26f080: 0x460c6302
    ctx->pc = 0x26f080u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26f084: 0x46026300
    ctx->pc = 0x26f084u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26f088: 0xc0ba284
    ctx->pc = 0x26F088u;
    SET_GPR_U32(ctx, 31, 0x26F090u);
    ctx->pc = 0x26F08Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F090u; }
    }
    if (ctx->pc != 0x26F090u) { return; }
    ctx->pc = 0x26F090u;
    // 0x26f090: 0x46000506
    ctx->pc = 0x26f090u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26f094:
    // 0x26f094: 0xc6010010
    ctx->pc = 0x26f094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f098: 0xc7a00010
    ctx->pc = 0x26f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f09c: 0x46000b01
    ctx->pc = 0x26f09cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f0a0: 0xe7ac0000
    ctx->pc = 0x26f0a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26f0a4: 0xc6020014
    ctx->pc = 0x26f0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f0a8: 0xc7a00014
    ctx->pc = 0x26f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f0ac: 0x46001081
    ctx->pc = 0x26f0acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26f0b0: 0xe7a20004
    ctx->pc = 0x26f0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26f0b4: 0xc6010018
    ctx->pc = 0x26f0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f0b8: 0xc7a00018
    ctx->pc = 0x26f0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f0bc: 0x46000841
    ctx->pc = 0x26f0bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f0c0: 0xe7a10008
    ctx->pc = 0x26f0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26f0c4: 0x460c6002
    ctx->pc = 0x26f0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26f0c8: 0x46021082
    ctx->pc = 0x26f0c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26f0cc: 0x46020000
    ctx->pc = 0x26f0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26f0d0: 0x46010842
    ctx->pc = 0x26f0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26f0d4: 0x46010000
    ctx->pc = 0x26f0d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26f0d8: 0x0
    ctx->pc = 0x26f0d8u;
    // NOP
    // 0x26f0dc: 0x0
    ctx->pc = 0x26f0dcu;
    // NOP
    // 0x26f0e0: 0x46000004
    ctx->pc = 0x26f0e0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26f0e4: 0x46000032
    ctx->pc = 0x26f0e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f0e8: 0x45010005
    ctx->pc = 0x26F0E8u;
    {
        const bool branch_taken_0x26f0e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f0e8) {
            ctx->pc = 0x26F100u;
            goto label_26f100;
        }
    }
    ctx->pc = 0x26F0F0u;
    // 0x26f0f0: 0x460c6302
    ctx->pc = 0x26f0f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26f0f4: 0x46026300
    ctx->pc = 0x26f0f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26f0f8: 0xc0ba284
    ctx->pc = 0x26F0F8u;
    SET_GPR_U32(ctx, 31, 0x26F100u);
    ctx->pc = 0x26F0FCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F100u; }
    }
    if (ctx->pc != 0x26F100u) { return; }
    ctx->pc = 0x26F100u;
label_26f100:
    // 0x26f100: 0x0
    ctx->pc = 0x26f100u;
    // NOP
    // 0x26f104: 0x0
    ctx->pc = 0x26f104u;
    // NOP
    // 0x26f108: 0x46140043
    ctx->pc = 0x26f108u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[20];
    // 0x26f10c: 0x3c020034
    ctx->pc = 0x26f10cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f110: 0xe441f9d8
    ctx->pc = 0x26f110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965720), bits); }
    // 0x26f114: 0x3c04003c
    ctx->pc = 0x26f114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x26f118: 0x3c030031
    ctx->pc = 0x26f118u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26f11c: 0x8c82397c
    ctx->pc = 0x26f11cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14716)));
    // 0x26f120: 0x8c63ffbc
    ctx->pc = 0x26f120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26f124: 0x431023
    ctx->pc = 0x26f124u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26f128: 0x4410002
    ctx->pc = 0x26F128u;
    {
        const bool branch_taken_0x26f128 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26F12Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14716), GPR_U32(ctx, 2));
        if (branch_taken_0x26f128) {
            ctx->pc = 0x26F134u;
            goto label_26f134;
        }
    }
    ctx->pc = 0x26F130u;
    // 0x26f130: 0xac80397c
    ctx->pc = 0x26f130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14716), GPR_U32(ctx, 0));
label_26f134:
    // 0x26f134: 0x461a0836
    ctx->pc = 0x26f134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f138: 0x0
    ctx->pc = 0x26f138u;
    // NOP
    // 0x26f13c: 0x45000036
    ctx->pc = 0x26F13Cu;
    {
        const bool branch_taken_0x26f13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F140u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f13c) {
            ctx->pc = 0x26F218u;
            goto label_26f218;
        }
    }
    ctx->pc = 0x26F144u;
    // 0x26f144: 0x3c030034
    ctx->pc = 0x26f144u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f148: 0x8c44f930
    ctx->pc = 0x26f148u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x26f14c: 0x8c62f92c
    ctx->pc = 0x26f14cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965548)));
    // 0x26f150: 0x1482000c
    ctx->pc = 0x26F150u;
    {
        const bool branch_taken_0x26f150 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26F154u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f150) {
            ctx->pc = 0x26F184u;
            goto label_26f184;
        }
    }
    ctx->pc = 0x26F158u;
    // 0x26f158: 0x3c02003c
    ctx->pc = 0x26f158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f15c: 0x3c030034
    ctx->pc = 0x26f15cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f160: 0x8c443978
    ctx->pc = 0x26f160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 14712)));
    // 0x26f164: 0x8c62f928
    ctx->pc = 0x26f164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965544)));
    // 0x26f168: 0x14820006
    ctx->pc = 0x26F168u;
    {
        const bool branch_taken_0x26f168 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26F16Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f168) {
            ctx->pc = 0x26F184u;
            goto label_26f184;
        }
    }
    ctx->pc = 0x26F170u;
    // 0x26f170: 0x3c02003c
    ctx->pc = 0x26f170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f174: 0x8c42397c
    ctx->pc = 0x26f174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14716)));
    // 0x26f178: 0x1c40000d
    ctx->pc = 0x26F178u;
    {
        const bool branch_taken_0x26f178 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26F17Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f178) {
            ctx->pc = 0x26F1B0u;
            goto label_26f1b0;
        }
    }
    ctx->pc = 0x26F180u;
    // 0x26f180: 0x3c020034
    ctx->pc = 0x26f180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26f184:
    // 0x26f184: 0xe458f8f4
    ctx->pc = 0x26f184u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
    // 0x26f188: 0x3c020034
    ctx->pc = 0x26f188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f18c: 0xe459f8f8
    ctx->pc = 0x26f18cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965496), bits); }
    // 0x26f190: 0x3c030034
    ctx->pc = 0x26f190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f194: 0x3c020034
    ctx->pc = 0x26f194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f198: 0x8c42f928
    ctx->pc = 0x26f198u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26f19c: 0xac62f930
    ctx->pc = 0x26f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x26f1a0: 0x3c03003c
    ctx->pc = 0x26f1a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f1a4: 0x24020078
    ctx->pc = 0x26f1a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x26f1a8: 0xac62397c
    ctx->pc = 0x26f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14716), GPR_U32(ctx, 2));
    // 0x26f1ac: 0x3c020034
    ctx->pc = 0x26f1acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26f1b0:
    // 0x26f1b0: 0x8c42f8fc
    ctx->pc = 0x26f1b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x26f1b4: 0x28420002
    ctx->pc = 0x26f1b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26f1b8: 0x10400005
    ctx->pc = 0x26F1B8u;
    {
        const bool branch_taken_0x26f1b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F1BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26f1b8) {
            ctx->pc = 0x26F1D0u;
            goto label_26f1d0;
        }
    }
    ctx->pc = 0x26F1C0u;
    // 0x26f1c0: 0x8c42fff4
    ctx->pc = 0x26f1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x26f1c4: 0x28420002
    ctx->pc = 0x26f1c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26f1c8: 0x1440000a
    ctx->pc = 0x26F1C8u;
    {
        const bool branch_taken_0x26f1c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26F1CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f1c8) {
            ctx->pc = 0x26F1F4u;
            goto label_26f1f4;
        }
    }
    ctx->pc = 0x26F1D0u;
label_26f1d0:
    // 0x26f1d0: 0x3c030034
    ctx->pc = 0x26f1d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f1d4: 0x3c020034
    ctx->pc = 0x26f1d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f1d8: 0xc460f8f8
    ctx->pc = 0x26f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f1dc: 0xc441f908
    ctx->pc = 0x26f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1e0: 0x46010034
    ctx->pc = 0x26f1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f1e4: 0x0
    ctx->pc = 0x26f1e4u;
    // NOP
    // 0x26f1e8: 0x45030001
    ctx->pc = 0x26F1E8u;
    {
        const bool branch_taken_0x26f1e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f1e8) {
            ctx->pc = 0x26F1ECu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965496), bits); }
            ctx->pc = 0x26F1F0u;
            goto label_26f1f0;
        }
    }
    ctx->pc = 0x26F1F0u;
label_26f1f0:
    // 0x26f1f0: 0x3c020034
    ctx->pc = 0x26f1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26f1f4:
    // 0x26f1f4: 0x3c03003c
    ctx->pc = 0x26f1f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f1f8: 0xc441f8f8
    ctx->pc = 0x26f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1fc: 0xc46038f0
    ctx->pc = 0x26f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f200: 0x46010034
    ctx->pc = 0x26f200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f204: 0x0
    ctx->pc = 0x26f204u;
    // NOP
    // 0x26f208: 0x4500003e
    ctx->pc = 0x26F208u;
    {
        const bool branch_taken_0x26f208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F20Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26f208) {
            ctx->pc = 0x26F304u;
            goto label_26f304;
        }
    }
    ctx->pc = 0x26F210u;
    // 0x26f210: 0x1000003e
    ctx->pc = 0x26F210u;
    {
        const bool branch_taken_0x26f210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F214u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26f210) {
            ctx->pc = 0x26F30Cu;
            goto label_26f30c;
        }
    }
    ctx->pc = 0x26F218u;
label_26f218:
    // 0x26f218: 0x3c013f80
    ctx->pc = 0x26f218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26f21c: 0x44810000
    ctx->pc = 0x26f21cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f220: 0x461a0001
    ctx->pc = 0x26f220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x26f224: 0x46010034
    ctx->pc = 0x26f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f228: 0x0
    ctx->pc = 0x26f228u;
    // NOP
    // 0x26f22c: 0x45000038
    ctx->pc = 0x26F22Cu;
    {
        const bool branch_taken_0x26f22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F230u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26f22c) {
            ctx->pc = 0x26F310u;
            goto label_26f310;
        }
    }
    ctx->pc = 0x26F234u;
    // 0x26f234: 0x8c44f930
    ctx->pc = 0x26f234u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x26f238: 0x8c62f928
    ctx->pc = 0x26f238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965544)));
    // 0x26f23c: 0x1482000c
    ctx->pc = 0x26F23Cu;
    {
        const bool branch_taken_0x26f23c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26F240u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f23c) {
            ctx->pc = 0x26F270u;
            goto label_26f270;
        }
    }
    ctx->pc = 0x26F244u;
    // 0x26f244: 0x3c02003c
    ctx->pc = 0x26f244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f248: 0x3c030034
    ctx->pc = 0x26f248u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f24c: 0x8c443978
    ctx->pc = 0x26f24cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 14712)));
    // 0x26f250: 0x8c62f92c
    ctx->pc = 0x26f250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965548)));
    // 0x26f254: 0x14820006
    ctx->pc = 0x26F254u;
    {
        const bool branch_taken_0x26f254 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x26F258u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f254) {
            ctx->pc = 0x26F270u;
            goto label_26f270;
        }
    }
    ctx->pc = 0x26F25Cu;
    // 0x26f25c: 0x3c02003c
    ctx->pc = 0x26f25cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26f260: 0x8c42397c
    ctx->pc = 0x26f260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14716)));
    // 0x26f264: 0x1c40000d
    ctx->pc = 0x26F264u;
    {
        const bool branch_taken_0x26f264 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26F268u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f264) {
            ctx->pc = 0x26F29Cu;
            goto label_26f29c;
        }
    }
    ctx->pc = 0x26F26Cu;
    // 0x26f26c: 0x3c020034
    ctx->pc = 0x26f26cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26f270:
    // 0x26f270: 0xe456f8f4
    ctx->pc = 0x26f270u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
    // 0x26f274: 0x3c020034
    ctx->pc = 0x26f274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f278: 0xe457f8f8
    ctx->pc = 0x26f278u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965496), bits); }
    // 0x26f27c: 0x3c030034
    ctx->pc = 0x26f27cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f280: 0x3c020034
    ctx->pc = 0x26f280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f284: 0x8c42f92c
    ctx->pc = 0x26f284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26f288: 0xac62f930
    ctx->pc = 0x26f288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x26f28c: 0x3c03003c
    ctx->pc = 0x26f28cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f290: 0x24020078
    ctx->pc = 0x26f290u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 120));
    // 0x26f294: 0xac62397c
    ctx->pc = 0x26f294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14716), GPR_U32(ctx, 2));
    // 0x26f298: 0x3c020034
    ctx->pc = 0x26f298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26f29c:
    // 0x26f29c: 0x8c42f8fc
    ctx->pc = 0x26f29cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x26f2a0: 0x28420002
    ctx->pc = 0x26f2a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26f2a4: 0x10400005
    ctx->pc = 0x26F2A4u;
    {
        const bool branch_taken_0x26f2a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F2A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x26f2a4) {
            ctx->pc = 0x26F2BCu;
            goto label_26f2bc;
        }
    }
    ctx->pc = 0x26F2ACu;
    // 0x26f2ac: 0x8c42fff4
    ctx->pc = 0x26f2acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x26f2b0: 0x28420002
    ctx->pc = 0x26f2b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x26f2b4: 0x1440000a
    ctx->pc = 0x26F2B4u;
    {
        const bool branch_taken_0x26f2b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26F2B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26f2b4) {
            ctx->pc = 0x26F2E0u;
            goto label_26f2e0;
        }
    }
    ctx->pc = 0x26F2BCu;
label_26f2bc:
    // 0x26f2bc: 0x3c030034
    ctx->pc = 0x26f2bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f2c0: 0x3c020034
    ctx->pc = 0x26f2c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f2c4: 0xc460f8f8
    ctx->pc = 0x26f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f2c8: 0xc441f908
    ctx->pc = 0x26f2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f2cc: 0x46010034
    ctx->pc = 0x26f2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f2d0: 0x0
    ctx->pc = 0x26f2d0u;
    // NOP
    // 0x26f2d4: 0x45030001
    ctx->pc = 0x26F2D4u;
    {
        const bool branch_taken_0x26f2d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f2d4) {
            ctx->pc = 0x26F2D8u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965496), bits); }
            ctx->pc = 0x26F2DCu;
            goto label_26f2dc;
        }
    }
    ctx->pc = 0x26F2DCu;
label_26f2dc:
    // 0x26f2dc: 0x3c020034
    ctx->pc = 0x26f2dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26f2e0:
    // 0x26f2e0: 0x3c03003c
    ctx->pc = 0x26f2e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f2e4: 0xc441f8f8
    ctx->pc = 0x26f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f2e8: 0xc46038f0
    ctx->pc = 0x26f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f2ec: 0x46010034
    ctx->pc = 0x26f2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f2f0: 0x0
    ctx->pc = 0x26f2f0u;
    // NOP
    // 0x26f2f4: 0x45000003
    ctx->pc = 0x26F2F4u;
    {
        const bool branch_taken_0x26f2f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F2F8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26f2f4) {
            ctx->pc = 0x26F304u;
            goto label_26f304;
        }
    }
    ctx->pc = 0x26F2FCu;
    // 0x26f2fc: 0x10000003
    ctx->pc = 0x26F2FCu;
    {
        const bool branch_taken_0x26f2fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F300u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26f2fc) {
            ctx->pc = 0x26F30Cu;
            goto label_26f30c;
        }
    }
    ctx->pc = 0x26F304u;
label_26f304:
    // 0x26f304: 0x3c03003c
    ctx->pc = 0x26f304u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f308: 0x2402ffff
    ctx->pc = 0x26f308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f30c:
    // 0x26f30c: 0xac6238ec
    ctx->pc = 0x26f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14572), GPR_U32(ctx, 2));
label_26f310:
    // 0x26f310: 0x3c020034
    ctx->pc = 0x26f310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f314: 0xc441f8f4
    ctx->pc = 0x26f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f318: 0xc6a000b4
    ctx->pc = 0x26f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f31c: 0x46000841
    ctx->pc = 0x26f31cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f320: 0x3c01c049
    ctx->pc = 0x26f320u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26f324: 0x34210fdb
    ctx->pc = 0x26f324u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f328: 0x44810000
    ctx->pc = 0x26f328u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f32c: 0x46000834
    ctx->pc = 0x26f32cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f330: 0x0
    ctx->pc = 0x26f330u;
    // NOP
    // 0x26f334: 0x45000003
    ctx->pc = 0x26F334u;
    {
        const bool branch_taken_0x26f334 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F338u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26f334) {
            ctx->pc = 0x26F344u;
            goto label_26f344;
        }
    }
    ctx->pc = 0x26F33Cu;
    // 0x26f33c: 0x1000000f
    ctx->pc = 0x26F33Cu;
    {
        const bool branch_taken_0x26f33c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F340u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26f33c) {
            ctx->pc = 0x26F37Cu;
            goto label_26f37c;
        }
    }
    ctx->pc = 0x26F344u;
label_26f344:
    // 0x26f344: 0x44800000
    ctx->pc = 0x26f344u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26f348: 0x46000834
    ctx->pc = 0x26f348u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f34c: 0x0
    ctx->pc = 0x26f34cu;
    // NOP
    // 0x26f350: 0x4501000a
    ctx->pc = 0x26F350u;
    {
        const bool branch_taken_0x26f350 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F354u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26f350) {
            ctx->pc = 0x26F37Cu;
            goto label_26f37c;
        }
    }
    ctx->pc = 0x26F358u;
    // 0x26f358: 0x3c014049
    ctx->pc = 0x26f358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f35c: 0x34210fdb
    ctx->pc = 0x26f35cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f360: 0x44810000
    ctx->pc = 0x26f360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f364: 0x46000834
    ctx->pc = 0x26f364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f368: 0x0
    ctx->pc = 0x26f368u;
    // NOP
    // 0x26f36c: 0x45010003
    ctx->pc = 0x26F36Cu;
    {
        const bool branch_taken_0x26f36c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F370u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26f36c) {
            ctx->pc = 0x26F37Cu;
            goto label_26f37c;
        }
    }
    ctx->pc = 0x26F374u;
    // 0x26f374: 0x3c03003c
    ctx->pc = 0x26f374u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f378: 0x2402ffff
    ctx->pc = 0x26f378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26f37c:
    // 0x26f37c: 0xac6238e4
    ctx->pc = 0x26f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14564), GPR_U32(ctx, 2));
    // 0x26f380: 0x3c020034
    ctx->pc = 0x26f380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f384: 0x3c03003c
    ctx->pc = 0x26f384u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26f388: 0xc440f8f8
    ctx->pc = 0x26f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f38c: 0xc46c38f0
    ctx->pc = 0x26f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26f390: 0xc0b5a1a
    ctx->pc = 0x26F390u;
    SET_GPR_U32(ctx, 31, 0x26F398u);
    ctx->pc = 0x26F394u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F398u; }
    }
    if (ctx->pc != 0x26F398u) { return; }
    ctx->pc = 0x26F398u;
    // 0x26f398: 0x46000005
    ctx->pc = 0x26f398u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26f39c: 0x3c014049
    ctx->pc = 0x26f39cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26f3a0: 0x34210fdb
    ctx->pc = 0x26f3a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26f3a4: 0x44810800
    ctx->pc = 0x26f3a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26f3a8: 0x46000841
    ctx->pc = 0x26f3a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f3ac: 0x13c00009
    ctx->pc = 0x26F3ACu;
    {
        const bool branch_taken_0x26f3ac = (GPR_U32(ctx, 30) == GPR_U32(ctx, 0));
        ctx->pc = 0x26F3B0u;
        ctx->f[1] = FPU_ABS_S(ctx->f[1]);
        if (branch_taken_0x26f3ac) {
            ctx->pc = 0x26F3D4u;
            goto label_26f3d4;
        }
    }
    ctx->pc = 0x26F3B4u;
    // 0x26f3b4: 0x3c030034
    ctx->pc = 0x26f3b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f3b8: 0x3c020034
    ctx->pc = 0x26f3b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f3bc: 0x8c42f928
    ctx->pc = 0x26f3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26f3c0: 0xac62fa20
    ctx->pc = 0x26f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965792), GPR_U32(ctx, 2));
    // 0x26f3c4: 0x3c030034
    ctx->pc = 0x26f3c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26f3c8: 0x3c020034
    ctx->pc = 0x26f3c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26f3cc: 0x8c42f92c
    ctx->pc = 0x26f3ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26f3d0: 0xac62fa24
    ctx->pc = 0x26f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965796), GPR_U32(ctx, 2));
label_26f3d4:
    // 0x26f3d4: 0x3c013c8e
    ctx->pc = 0x26f3d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15502 << 16));
    // 0x26f3d8: 0x3421fa36
    ctx->pc = 0x26f3d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x26f3dc: 0x44810000
    ctx->pc = 0x26f3dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26f3e0: 0x46000834
    ctx->pc = 0x26f3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f3e4: 0x0
    ctx->pc = 0x26f3e4u;
    // NOP
    // 0x26f3e8: 0x45010002
    ctx->pc = 0x26F3E8u;
    {
        const bool branch_taken_0x26f3e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F3ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26f3e8) {
            ctx->pc = 0x26F3F4u;
            goto label_26f3f4;
        }
    }
    ctx->pc = 0x26F3F0u;
label_26f3f0:
    // 0x26f3f0: 0x102d
    ctx->pc = 0x26f3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f3f4:
    // 0x26f3f4: 0xdfbf00b0
    ctx->pc = 0x26f3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26f3f8: 0xdfbe00a0
    ctx->pc = 0x26f3f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26f3fc: 0xdfb70090
    ctx->pc = 0x26f3fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26f400: 0xdfb60080
    ctx->pc = 0x26f400u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f404: 0xdfb50070
    ctx->pc = 0x26f404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26f408: 0xdfb40060
    ctx->pc = 0x26f408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f40c: 0xdfb30050
    ctx->pc = 0x26f40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f410: 0xdfb20040
    ctx->pc = 0x26f410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f414: 0xdfb10030
    ctx->pc = 0x26f414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f418: 0xdfb00020
    ctx->pc = 0x26f418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f41c: 0xc7ba00f0
    ctx->pc = 0x26f41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x26f420: 0xc7b900e8
    ctx->pc = 0x26f420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x26f424: 0xc7b800e0
    ctx->pc = 0x26f424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x26f428: 0xc7b700d8
    ctx->pc = 0x26f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26f42c: 0xc7b600d0
    ctx->pc = 0x26f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26f430: 0xc7b500c8
    ctx->pc = 0x26f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26f434: 0xc7b400c0
    ctx->pc = 0x26f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f438: 0x3e00008
    ctx->pc = 0x26F438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F43Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ED5Cu: goto label_26ed5c;
            case 0x26EDE0u: goto label_26ede0;
            case 0x26EDE4u: goto label_26ede4;
            case 0x26EE08u: goto label_26ee08;
            case 0x26EE94u: goto label_26ee94;
            case 0x26EEC8u: goto label_26eec8;
            case 0x26EEECu: goto label_26eeec;
            case 0x26EF08u: goto label_26ef08;
            case 0x26EF18u: goto label_26ef18;
            case 0x26EF28u: goto label_26ef28;
            case 0x26EF30u: goto label_26ef30;
            case 0x26EF44u: goto label_26ef44;
            case 0x26EFA0u: goto label_26efa0;
            case 0x26EFC0u: goto label_26efc0;
            case 0x26F094u: goto label_26f094;
            case 0x26F100u: goto label_26f100;
            case 0x26F134u: goto label_26f134;
            case 0x26F184u: goto label_26f184;
            case 0x26F1B0u: goto label_26f1b0;
            case 0x26F1D0u: goto label_26f1d0;
            case 0x26F1F0u: goto label_26f1f0;
            case 0x26F1F4u: goto label_26f1f4;
            case 0x26F218u: goto label_26f218;
            case 0x26F270u: goto label_26f270;
            case 0x26F29Cu: goto label_26f29c;
            case 0x26F2BCu: goto label_26f2bc;
            case 0x26F2DCu: goto label_26f2dc;
            case 0x26F2E0u: goto label_26f2e0;
            case 0x26F304u: goto label_26f304;
            case 0x26F30Cu: goto label_26f30c;
            case 0x26F310u: goto label_26f310;
            case 0x26F344u: goto label_26f344;
            case 0x26F37Cu: goto label_26f37c;
            case 0x26F3D4u: goto label_26f3d4;
            case 0x26F3F0u: goto label_26f3f0;
            case 0x26F3F4u: goto label_26f3f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F440u;
}
