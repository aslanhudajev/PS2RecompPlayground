#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WorldDynCollide
// Address: 0x21fc20 - 0x21fec8
void WorldDynCollide_0x21fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21fc20u;

    // 0x21fc20: 0x27bdff30
    ctx->pc = 0x21fc20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x21fc24: 0xffbf00a0
    ctx->pc = 0x21fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x21fc28: 0xffbe0090
    ctx->pc = 0x21fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x21fc2c: 0xffb70080
    ctx->pc = 0x21fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x21fc30: 0xffb60070
    ctx->pc = 0x21fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x21fc34: 0xffb50060
    ctx->pc = 0x21fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x21fc38: 0xffb40050
    ctx->pc = 0x21fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x21fc3c: 0xffb30040
    ctx->pc = 0x21fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x21fc40: 0xffb20030
    ctx->pc = 0x21fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21fc44: 0xffb10020
    ctx->pc = 0x21fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x21fc48: 0xffb00010
    ctx->pc = 0x21fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21fc4c: 0xe7b700c8
    ctx->pc = 0x21fc4cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x21fc50: 0xe7b600c0
    ctx->pc = 0x21fc50u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x21fc54: 0xe7b500b8
    ctx->pc = 0x21fc54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x21fc58: 0xe7b400b0
    ctx->pc = 0x21fc58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x21fc5c: 0x460085c6
    ctx->pc = 0x21fc5cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x21fc60: 0x46008d86
    ctx->pc = 0x21fc60u;
    ctx->f[22] = FPU_MOV_S(ctx->f[17]);
    // 0x21fc64: 0x46009546
    ctx->pc = 0x21fc64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x21fc68: 0x80b82d
    ctx->pc = 0x21fc68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc6c: 0x46009d06
    ctx->pc = 0x21fc6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[19]);
    // 0x21fc70: 0xa0b02d
    ctx->pc = 0x21fc70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc74: 0x3c040032
    ctx->pc = 0x21fc74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x21fc78: 0x8c83fd50
    ctx->pc = 0x21fc78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294966608)));
    // 0x21fc7c: 0x24630001
    ctx->pc = 0x21fc7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21fc80: 0x3402fa00
    ctx->pc = 0x21fc80u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 64000));
    // 0x21fc84: 0x43102a
    ctx->pc = 0x21fc84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x21fc88: 0x10400003
    ctx->pc = 0x21FC88u;
    {
        const bool branch_taken_0x21fc88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FC8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966608), GPR_U32(ctx, 3));
        if (branch_taken_0x21fc88) {
            ctx->pc = 0x21FC98u;
            goto label_21fc98;
        }
    }
    ctx->pc = 0x21FC90u;
    // 0x21fc90: 0x24020001
    ctx->pc = 0x21fc90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fc94: 0xac82fd50
    ctx->pc = 0x21fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966608), GPR_U32(ctx, 2));
label_21fc98:
    // 0x21fc98: 0x3c020032
    ctx->pc = 0x21fc98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21fc9c: 0x2442f9f8
    ctx->pc = 0x21fc9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21fca0: 0xc4400018
    ctx->pc = 0x21fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fca4: 0x46006001
    ctx->pc = 0x21fca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x21fca8: 0x3c030032
    ctx->pc = 0x21fca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21fcac: 0xc461fd4c
    ctx->pc = 0x21fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fcb0: 0x46010002
    ctx->pc = 0x21fcb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fcb4: 0x46000064
    ctx->pc = 0x21fcb4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21fcb8: 0xe7a10000
    ctx->pc = 0x21fcb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21fcbc: 0xc4400020
    ctx->pc = 0x21fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fcc0: 0x46007001
    ctx->pc = 0x21fcc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[0]);
    // 0x21fcc4: 0xc461fd4c
    ctx->pc = 0x21fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21fcc8: 0x46010002
    ctx->pc = 0x21fcc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21fccc: 0x46000064
    ctx->pc = 0x21fcccu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x21fcd0: 0xe7a10004
    ctx->pc = 0x21fcd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21fcd4: 0x8fa30000
    ctx->pc = 0x21fcd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fcd8: 0x4600007
    ctx->pc = 0x21FCD8u;
    {
        const bool branch_taken_0x21fcd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21FCDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21fcd8) {
            ctx->pc = 0x21FCF8u;
            goto label_21fcf8;
        }
    }
    ctx->pc = 0x21FCE0u;
    // 0x21fce0: 0x8c42d5f8
    ctx->pc = 0x21fce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956536)));
    // 0x21fce4: 0x2442ffff
    ctx->pc = 0x21fce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21fce8: 0x60202d
    ctx->pc = 0x21fce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcec: 0x44182a
    ctx->pc = 0x21fcecu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x21fcf0: 0x10000002
    ctx->pc = 0x21FCF0u;
    {
        const bool branch_taken_0x21fcf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FCF4u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x21fcf0) {
            ctx->pc = 0x21FCFCu;
            goto label_21fcfc;
        }
    }
    ctx->pc = 0x21FCF8u;
label_21fcf8:
    // 0x21fcf8: 0x202d
    ctx->pc = 0x21fcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fcfc:
    // 0x21fcfc: 0xafa40000
    ctx->pc = 0x21fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x21fd00: 0x8fa30004
    ctx->pc = 0x21fd00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21fd04: 0x4600007
    ctx->pc = 0x21FD04u;
    {
        const bool branch_taken_0x21fd04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21FD08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21fd04) {
            ctx->pc = 0x21FD24u;
            goto label_21fd24;
        }
    }
    ctx->pc = 0x21FD0Cu;
    // 0x21fd0c: 0x8c42d5fc
    ctx->pc = 0x21fd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
    // 0x21fd10: 0x2442ffff
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21fd14: 0x60202d
    ctx->pc = 0x21fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd18: 0x44182a
    ctx->pc = 0x21fd18u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x21fd1c: 0x10000002
    ctx->pc = 0x21FD1Cu;
    {
        const bool branch_taken_0x21fd1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FD20u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x21fd1c) {
            ctx->pc = 0x21FD28u;
            goto label_21fd28;
        }
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x202d
    ctx->pc = 0x21fd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fd28:
    // 0x21fd28: 0xafa40004
    ctx->pc = 0x21fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x21fd2c: 0x46006024
    ctx->pc = 0x21fd2cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x21fd30: 0xe7a00008
    ctx->pc = 0x21fd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21fd34: 0x46006824
    ctx->pc = 0x21fd34u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x21fd38: 0x44120000
    ctx->pc = 0x21fd38u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[0]);
    // 0x21fd3c: 0x46007024
    ctx->pc = 0x21fd3cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[14]);
    // 0x21fd40: 0x441e0000
    ctx->pc = 0x21fd40u;
    SET_GPR_U32(ctx, 30, *(uint32_t*)&ctx->f[0]);
    // 0x21fd44: 0x3c02003c
    ctx->pc = 0x21fd44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_21fd48:
    // 0x21fd48: 0x8c43d5f8
    ctx->pc = 0x21fd48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956536)));
    // 0x21fd4c: 0x8fa20004
    ctx->pc = 0x21fd4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21fd50: 0x431018
    ctx->pc = 0x21fd50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21fd54: 0x8fa30000
    ctx->pc = 0x21fd54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fd58: 0x431021
    ctx->pc = 0x21fd58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21fd5c: 0x3c03003c
    ctx->pc = 0x21fd5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21fd60: 0x8c63d5f0
    ctx->pc = 0x21fd60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294956528)));
    // 0x21fd64: 0x21040
    ctx->pc = 0x21fd64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x21fd68: 0x431021
    ctx->pc = 0x21fd68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21fd6c: 0x94430000
    ctx->pc = 0x21fd6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fd70: 0x10600035
    ctx->pc = 0x21FD70u;
    {
        const bool branch_taken_0x21fd70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FD74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21fd70) {
            ctx->pc = 0x21FE48u;
            goto label_21fe48;
        }
    }
    ctx->pc = 0x21FD78u;
    // 0x21fd78: 0x3c15003c
    ctx->pc = 0x21fd78u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    // 0x21fd7c: 0x3c14003c
    ctx->pc = 0x21fd7cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)60 << 16));
    // 0x21fd80: 0x3c110032
    ctx->pc = 0x21fd80u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21fd84: 0x2453f9f8
    ctx->pc = 0x21fd84u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21fd88: 0x31880
    ctx->pc = 0x21fd88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21fd8c: 0x0
    ctx->pc = 0x21fd8cu;
    // NOP
label_21fd90:
    // 0x21fd90: 0x8ea2d5e4
    ctx->pc = 0x21fd90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294956516)));
    // 0x21fd94: 0x628021
    ctx->pc = 0x21fd94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fd98: 0x86030000
    ctx->pc = 0x21fd98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21fd9c: 0x24020050
    ctx->pc = 0x21fd9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x21fda0: 0x621818
    ctx->pc = 0x21fda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21fda4: 0x8e82d5dc
    ctx->pc = 0x21fda4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294956508)));
    // 0x21fda8: 0x623821
    ctx->pc = 0x21fda8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fdac: 0x94e30042
    ctx->pc = 0x21fdacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 66)));
    // 0x21fdb0: 0x8e22fd50
    ctx->pc = 0x21fdb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294966608)));
    // 0x21fdb4: 0x10620021
    ctx->pc = 0x21FDB4u;
    {
        const bool branch_taken_0x21fdb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FDB8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294966608)));
        if (branch_taken_0x21fdb4) {
            ctx->pc = 0x21FE3Cu;
            goto label_21fe3c;
        }
    }
    ctx->pc = 0x21FDBCu;
    // 0x21fdbc: 0xa4e20042
    ctx->pc = 0x21fdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x21fdc0: 0x84e30040
    ctx->pc = 0x21fdc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x21fdc4: 0x2402003c
    ctx->pc = 0x21fdc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21fdc8: 0x621818
    ctx->pc = 0x21fdc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21fdcc: 0x8e620004
    ctx->pc = 0x21fdccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21fdd0: 0x621821
    ctx->pc = 0x21fdd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21fdd4: 0x8c620018
    ctx->pc = 0x21fdd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21fdd8: 0x10400003
    ctx->pc = 0x21FDD8u;
    {
        const bool branch_taken_0x21fdd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FDDCu;
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 53)));
        if (branch_taken_0x21fdd8) {
            ctx->pc = 0x21FDE8u;
            goto label_21fde8;
        }
    }
    ctx->pc = 0x21FDE0u;
    // 0x21fde0: 0x80420035
    ctx->pc = 0x21fde0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 53)));
    // 0x21fde4: 0xa22825
    ctx->pc = 0x21fde4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21fde8:
    // 0x21fde8: 0x8c640010
    ctx->pc = 0x21fde8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21fdec: 0x2e41024
    ctx->pc = 0x21fdecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x21fdf0: 0x10400012
    ctx->pc = 0x21FDF0u;
    {
        const bool branch_taken_0x21fdf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FDF4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        if (branch_taken_0x21fdf0) {
            ctx->pc = 0x21FE3Cu;
            goto label_21fe3c;
        }
    }
    ctx->pc = 0x21FDF8u;
    // 0x21fdf8: 0x54400011
    ctx->pc = 0x21FDF8u;
    {
        const bool branch_taken_0x21fdf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21fdf8) {
            ctx->pc = 0x21FDFCu;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->pc = 0x21FE40u;
            goto label_21fe40;
        }
    }
    ctx->pc = 0x21FE00u;
    // 0x21fe00: 0x3c021000
    ctx->pc = 0x21fe00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x21fe04: 0x821024
    ctx->pc = 0x21fe04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21fe08: 0x5440000d
    ctx->pc = 0x21FE08u;
    {
        const bool branch_taken_0x21fe08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x21fe08) {
            ctx->pc = 0x21FE0Cu;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->pc = 0x21FE40u;
            goto label_21fe40;
        }
    }
    ctx->pc = 0x21FE10u;
    // 0x21fe10: 0x8c620038
    ctx->pc = 0x21fe10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x21fe14: 0x4400009
    ctx->pc = 0x21FE14u;
    {
        const bool branch_taken_0x21fe14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21FE18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21fe14) {
            ctx->pc = 0x21FE3Cu;
            goto label_21fe3c;
        }
    }
    ctx->pc = 0x21FE1Cu;
    // 0x21fe1c: 0x4600a306
    ctx->pc = 0x21fe1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x21fe20: 0x84650036
    ctx->pc = 0x21fe20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x21fe24: 0xc087690
    ctx->pc = 0x21FE24u;
    SET_GPR_U32(ctx, 31, 0x21FE2Cu);
    ctx->pc = 0x21FE28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldObjCollide_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE2Cu; }
    }
    if (ctx->pc != 0x21FE2Cu) { return; }
    ctx->pc = 0x21FE2Cu;
    // 0x21fe2c: 0xc087858
    ctx->pc = 0x21FE2Cu;
    SET_GPR_U32(ctx, 31, 0x21FE34u);
    ctx->pc = 0x21E160u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExitCollisionEarly_0x21e160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE34u; }
    }
    if (ctx->pc != 0x21FE34u) { return; }
    ctx->pc = 0x21FE34u;
    // 0x21fe34: 0x14400015
    ctx->pc = 0x21FE34u;
    {
        const bool branch_taken_0x21fe34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21FE38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x21fe34) {
            ctx->pc = 0x21FE8Cu;
            goto label_21fe8c;
        }
    }
    ctx->pc = 0x21FE3Cu;
label_21fe3c:
    // 0x21fe3c: 0x96030002
    ctx->pc = 0x21fe3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_21fe40:
    // 0x21fe40: 0x1460ffd3
    ctx->pc = 0x21FE40u;
    {
        const bool branch_taken_0x21fe40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21FE44u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x21fe40) {
            ctx->pc = 0x21FD90u;
            goto label_21fd90;
        }
    }
    ctx->pc = 0x21FE48u;
label_21fe48:
    // 0x21fe48: 0xc087858
    ctx->pc = 0x21FE48u;
    SET_GPR_U32(ctx, 31, 0x21FE50u);
    ctx->pc = 0x21E160u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExitCollisionEarly_0x21e160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE50u; }
    }
    if (ctx->pc != 0x21FE50u) { return; }
    ctx->pc = 0x21FE50u;
    // 0x21fe50: 0x1440000d
    ctx->pc = 0x21FE50u;
    {
        const bool branch_taken_0x21fe50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21FE54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21fe50) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FE58u;
    // 0x21fe58: 0x27a50004
    ctx->pc = 0x21fe58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    // 0x21fe5c: 0x8fa60008
    ctx->pc = 0x21fe5cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fe60: 0x240382d
    ctx->pc = 0x21fe60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe64: 0x3c0402d
    ctx->pc = 0x21fe64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe68: 0x240482d
    ctx->pc = 0x21fe68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe6c: 0x4600bb06
    ctx->pc = 0x21fe6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x21fe70: 0x4600b346
    ctx->pc = 0x21fe70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x21fe74: 0x4600ab86
    ctx->pc = 0x21fe74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x21fe78: 0xc087e4c
    ctx->pc = 0x21FE78u;
    SET_GPR_U32(ctx, 31, 0x21FE80u);
    ctx->pc = 0x21FE7Cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x21F930u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextDynGrid_0x21f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE80u; }
    }
    if (ctx->pc != 0x21FE80u) { return; }
    ctx->pc = 0x21FE80u;
    // 0x21fe80: 0x1440ffb1
    ctx->pc = 0x21FE80u;
    {
        const bool branch_taken_0x21fe80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21FE84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21fe80) {
            ctx->pc = 0x21FD48u;
            goto label_21fd48;
        }
    }
    ctx->pc = 0x21FE88u;
label_21fe88:
    // 0x21fe88: 0xdfbf00a0
    ctx->pc = 0x21fe88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_21fe8c:
    // 0x21fe8c: 0xdfbe0090
    ctx->pc = 0x21fe8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21fe90: 0xdfb70080
    ctx->pc = 0x21fe90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21fe94: 0xdfb60070
    ctx->pc = 0x21fe94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21fe98: 0xdfb50060
    ctx->pc = 0x21fe98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21fe9c: 0xdfb40050
    ctx->pc = 0x21fe9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21fea0: 0xdfb30040
    ctx->pc = 0x21fea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21fea4: 0xdfb20030
    ctx->pc = 0x21fea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fea8: 0xdfb10020
    ctx->pc = 0x21fea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21feac: 0xdfb00010
    ctx->pc = 0x21feacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21feb0: 0xc7b700c8
    ctx->pc = 0x21feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21feb4: 0xc7b600c0
    ctx->pc = 0x21feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21feb8: 0xc7b500b8
    ctx->pc = 0x21feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21febc: 0xc7b400b0
    ctx->pc = 0x21febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21fec0: 0x3e00008
    ctx->pc = 0x21FEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FEC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FC98u: goto label_21fc98;
            case 0x21FCF8u: goto label_21fcf8;
            case 0x21FCFCu: goto label_21fcfc;
            case 0x21FD24u: goto label_21fd24;
            case 0x21FD28u: goto label_21fd28;
            case 0x21FD48u: goto label_21fd48;
            case 0x21FD90u: goto label_21fd90;
            case 0x21FDE8u: goto label_21fde8;
            case 0x21FE3Cu: goto label_21fe3c;
            case 0x21FE40u: goto label_21fe40;
            case 0x21FE48u: goto label_21fe48;
            case 0x21FE88u: goto label_21fe88;
            case 0x21FE8Cu: goto label_21fe8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FEC8u;
}
