#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: att_receive_yaw
// Address: 0x26c908 - 0x26d0d4
void att_receive_yaw_0x26c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26c908u;

    // 0x26c908: 0x27bdff00
    ctx->pc = 0x26c908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x26c90c: 0xffbf00b0
    ctx->pc = 0x26c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x26c910: 0xffbe00a0
    ctx->pc = 0x26c910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x26c914: 0xffb70090
    ctx->pc = 0x26c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x26c918: 0xffb60080
    ctx->pc = 0x26c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x26c91c: 0xffb50070
    ctx->pc = 0x26c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x26c920: 0xffb40060
    ctx->pc = 0x26c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x26c924: 0xffb30050
    ctx->pc = 0x26c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x26c928: 0xffb20040
    ctx->pc = 0x26c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x26c92c: 0xffb10030
    ctx->pc = 0x26c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26c930: 0xffb00020
    ctx->pc = 0x26c930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26c934: 0xe7ba00f0
    ctx->pc = 0x26c934u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x26c938: 0xe7b900e8
    ctx->pc = 0x26c938u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x26c93c: 0xe7b800e0
    ctx->pc = 0x26c93cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x26c940: 0xe7b700d8
    ctx->pc = 0x26c940u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x26c944: 0xe7b600d0
    ctx->pc = 0x26c944u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26c948: 0xe7b500c8
    ctx->pc = 0x26c948u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x26c94c: 0xe7b400c0
    ctx->pc = 0x26c94cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x26c950: 0x240201a0
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26c954: 0x822018
    ctx->pc = 0x26c954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26c958: 0x3c020034
    ctx->pc = 0x26c958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c95c: 0x2442eb60
    ctx->pc = 0x26c95cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26c960: 0x829821
    ctx->pc = 0x26c960u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26c964: 0x3c0147c3
    ctx->pc = 0x26c964u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x26c968: 0x34215000
    ctx->pc = 0x26c968u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x26c96c: 0x4481a800
    ctx->pc = 0x26c96cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x26c970: 0x4600ad86
    ctx->pc = 0x26c970u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x26c974: 0x4480b800
    ctx->pc = 0x26c974u;
    *(uint32_t*)&ctx->f[23] = GPR_U32(ctx, 0);
    // 0x26c978: 0x4600be86
    ctx->pc = 0x26c978u;
    ctx->f[26] = FPU_MOV_S(ctx->f[23]);
    // 0x26c97c: 0x4600be46
    ctx->pc = 0x26c97cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[23]);
    // 0x26c980: 0x4600be06
    ctx->pc = 0x26c980u;
    ctx->f[24] = FPU_MOV_S(ctx->f[23]);
    // 0x26c984: 0x3c020034
    ctx->pc = 0x26c984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c988: 0x8c5ef930
    ctx->pc = 0x26c988u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x26c98c: 0x3c020034
    ctx->pc = 0x26c98cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c990: 0x8c57f928
    ctx->pc = 0x26c990u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26c994: 0x882d
    ctx->pc = 0x26c994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c998: 0x3c020034
    ctx->pc = 0x26c998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26c99c: 0x8c428b70
    ctx->pc = 0x26c99cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26c9a0: 0x18400046
    ctx->pc = 0x26C9A0u;
    {
        const bool branch_taken_0x26c9a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26C9A4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26c9a0) {
            ctx->pc = 0x26CABCu;
            goto label_26cabc;
        }
    }
    ctx->pc = 0x26C9A8u;
    // 0x26c9a8: 0x3c020033
    ctx->pc = 0x26c9a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26c9ac: 0x24564b70
    ctx->pc = 0x26c9acu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x26c9b0: 0x3c150034
    ctx->pc = 0x26c9b0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x26c9b4: 0x3c140034
    ctx->pc = 0x26c9b4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x26c9b8: 0x111180
    ctx->pc = 0x26c9b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
    // 0x26c9bc: 0x0
    ctx->pc = 0x26c9bcu;
    // NOP
label_26c9c0:
    // 0x26c9c0: 0x568021
    ctx->pc = 0x26c9c0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x26c9c4: 0x92030000
    ctx->pc = 0x26c9c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c9c8: 0x24020001
    ctx->pc = 0x26c9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c9cc: 0x54620036
    ctx->pc = 0x26C9CCu;
    {
        const bool branch_taken_0x26c9cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x26c9cc) {
            ctx->pc = 0x26C9D0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26CAA8u;
            goto label_26caa8;
        }
    }
    ctx->pc = 0x26C9D4u;
    // 0x26c9d4: 0x86020002
    ctx->pc = 0x26c9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26c9d8: 0x50400033
    ctx->pc = 0x26C9D8u;
    {
        const bool branch_taken_0x26c9d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x26c9d8) {
            ctx->pc = 0x26C9DCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26CAA8u;
            goto label_26caa8;
        }
    }
    ctx->pc = 0x26C9E0u;
    // 0x26c9e0: 0xc6630070
    ctx->pc = 0x26c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c9e4: 0xc6000010
    ctx->pc = 0x26c9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c9e8: 0x460018c1
    ctx->pc = 0x26c9e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26c9ec: 0xe7a30000
    ctx->pc = 0x26c9ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c9f0: 0xc6620074
    ctx->pc = 0x26c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c9f4: 0xc6000014
    ctx->pc = 0x26c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c9f8: 0x46001081
    ctx->pc = 0x26c9f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26c9fc: 0xe7a20004
    ctx->pc = 0x26c9fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ca00: 0xc6600078
    ctx->pc = 0x26ca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ca04: 0xc6010018
    ctx->pc = 0x26ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ca08: 0x46010001
    ctx->pc = 0x26ca08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26ca0c: 0xe7a00008
    ctx->pc = 0x26ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ca10: 0x460318c2
    ctx->pc = 0x26ca10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x26ca14: 0x46021082
    ctx->pc = 0x26ca14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26ca18: 0x460218c0
    ctx->pc = 0x26ca18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x26ca1c: 0x46000002
    ctx->pc = 0x26ca1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26ca20: 0x46001b00
    ctx->pc = 0x26ca20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x26ca24: 0x0
    ctx->pc = 0x26ca24u;
    // NOP
    // 0x26ca28: 0x0
    ctx->pc = 0x26ca28u;
    // NOP
    // 0x26ca2c: 0x460c0004
    ctx->pc = 0x26ca2cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26ca30: 0x46000032
    ctx->pc = 0x26ca30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ca34: 0x0
    ctx->pc = 0x26ca34u;
    // NOP
    // 0x26ca38: 0x45010004
    ctx->pc = 0x26CA38u;
    {
        const bool branch_taken_0x26ca38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CA3Cu;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x26ca38) {
            ctx->pc = 0x26CA4Cu;
            goto label_26ca4c;
        }
    }
    ctx->pc = 0x26CA40u;
    // 0x26ca40: 0xc0ba284
    ctx->pc = 0x26CA40u;
    SET_GPR_U32(ctx, 31, 0x26CA48u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CA48u; }
    }
    if (ctx->pc != 0x26CA48u) { return; }
    ctx->pc = 0x26CA48u;
    // 0x26ca48: 0x46000086
    ctx->pc = 0x26ca48u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_26ca4c:
    // 0x26ca4c: 0x46151034
    ctx->pc = 0x26ca4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ca50: 0x0
    ctx->pc = 0x26ca50u;
    // NOP
    // 0x26ca54: 0x4500000a
    ctx->pc = 0x26CA54u;
    {
        const bool branch_taken_0x26ca54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CA58u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294965544)));
        if (branch_taken_0x26ca54) {
            ctx->pc = 0x26CA80u;
            goto label_26ca80;
        }
    }
    ctx->pc = 0x26CA5Cu;
    // 0x26ca5c: 0xaea2f92c
    ctx->pc = 0x26ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965548), GPR_U32(ctx, 2));
    // 0x26ca60: 0x4600ad86
    ctx->pc = 0x26ca60u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x26ca64: 0x4600d5c6
    ctx->pc = 0x26ca64u;
    ctx->f[23] = FPU_MOV_S(ctx->f[26]);
    // 0x26ca68: 0x4600ce06
    ctx->pc = 0x26ca68u;
    ctx->f[24] = FPU_MOV_S(ctx->f[25]);
    // 0x26ca6c: 0xae91f928
    ctx->pc = 0x26ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965544), GPR_U32(ctx, 17));
    // 0x26ca70: 0x46001546
    ctx->pc = 0x26ca70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
    // 0x26ca74: 0xc61a0024
    ctx->pc = 0x26ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x26ca78: 0x10000009
    ctx->pc = 0x26CA78u;
    {
        const bool branch_taken_0x26ca78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CA7Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        if (branch_taken_0x26ca78) {
            ctx->pc = 0x26CAA0u;
            goto label_26caa0;
        }
    }
    ctx->pc = 0x26CA80u;
label_26ca80:
    // 0x26ca80: 0x46161034
    ctx->pc = 0x26ca80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ca84: 0x0
    ctx->pc = 0x26ca84u;
    // NOP
    // 0x26ca88: 0x45020007
    ctx->pc = 0x26CA88u;
    {
        const bool branch_taken_0x26ca88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ca88) {
            ctx->pc = 0x26CA8Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26CAA8u;
            goto label_26caa8;
        }
    }
    ctx->pc = 0x26CA90u;
    // 0x26ca90: 0xaeb1f92c
    ctx->pc = 0x26ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965548), GPR_U32(ctx, 17));
    // 0x26ca94: 0x46001586
    ctx->pc = 0x26ca94u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
    // 0x26ca98: 0xc6170024
    ctx->pc = 0x26ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26ca9c: 0xc6180020
    ctx->pc = 0x26ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_26caa0:
    // 0x26caa0: 0x26520001
    ctx->pc = 0x26caa0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x26caa4: 0x26310001
    ctx->pc = 0x26caa4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_26caa8:
    // 0x26caa8: 0x3c020034
    ctx->pc = 0x26caa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26caac: 0x8c428b70
    ctx->pc = 0x26caacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x26cab0: 0x222102a
    ctx->pc = 0x26cab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x26cab4: 0x1440ffc2
    ctx->pc = 0x26CAB4u;
    {
        const bool branch_taken_0x26cab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26CAB8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
        if (branch_taken_0x26cab4) {
            ctx->pc = 0x26C9C0u;
            goto label_26c9c0;
        }
    }
    ctx->pc = 0x26CABCu;
label_26cabc:
    // 0x26cabc: 0x24020001
    ctx->pc = 0x26cabcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cac0: 0x16420007
    ctx->pc = 0x26CAC0u;
    {
        const bool branch_taken_0x26cac0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x26CAC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26cac0) {
            ctx->pc = 0x26CAE0u;
            goto label_26cae0;
        }
    }
    ctx->pc = 0x26CAC8u;
    // 0x26cac8: 0x3c030034
    ctx->pc = 0x26cac8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26cacc: 0x8c63f928
    ctx->pc = 0x26caccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294965544)));
    // 0x26cad0: 0xac43f92c
    ctx->pc = 0x26cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965548), GPR_U32(ctx, 3));
    // 0x26cad4: 0x4600ad86
    ctx->pc = 0x26cad4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x26cad8: 0x4600d5c6
    ctx->pc = 0x26cad8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[26]);
    // 0x26cadc: 0x4600ce06
    ctx->pc = 0x26cadcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[25]);
label_26cae0:
    // 0x26cae0: 0x1240015f
    ctx->pc = 0x26CAE0u;
    {
        const bool branch_taken_0x26cae0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CAE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26cae0) {
            ctx->pc = 0x26D060u;
            goto label_26d060;
        }
    }
    ctx->pc = 0x26CAE8u;
    // 0x26cae8: 0x8c42f928
    ctx->pc = 0x26cae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26caec: 0x21180
    ctx->pc = 0x26caecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x26caf0: 0x3c030033
    ctx->pc = 0x26caf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x26caf4: 0x24634b70
    ctx->pc = 0x26caf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19312));
    // 0x26caf8: 0x438021
    ctx->pc = 0x26caf8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cafc: 0x3c020034
    ctx->pc = 0x26cafcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26cb00: 0x8c42f92c
    ctx->pc = 0x26cb00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26cb04: 0x21180
    ctx->pc = 0x26cb04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x26cb08: 0x438821
    ctx->pc = 0x26cb08u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cb0c: 0x24020001
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cb10: 0x12420006
    ctx->pc = 0x26CB10u;
    {
        const bool branch_taken_0x26cb10 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x26CB14u;
        ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
        if (branch_taken_0x26cb10) {
            ctx->pc = 0x26CB2Cu;
            goto label_26cb2c;
        }
    }
    ctx->pc = 0x26CB18u;
    // 0x26cb18: 0x44800000
    ctx->pc = 0x26cb18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26cb1c: 0x4600a032
    ctx->pc = 0x26cb1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cb20: 0x0
    ctx->pc = 0x26cb20u;
    // NOP
    // 0x26cb24: 0x45000008
    ctx->pc = 0x26CB24u;
    {
        const bool branch_taken_0x26cb24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CB28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 112));
        if (branch_taken_0x26cb24) {
            ctx->pc = 0x26CB48u;
            goto label_26cb48;
        }
    }
    ctx->pc = 0x26CB2Cu;
label_26cb2c:
    // 0x26cb2c: 0x3c040035
    ctx->pc = 0x26cb2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x26cb30: 0x3c030031
    ctx->pc = 0x26cb30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26cb34: 0x8c82a2d4
    ctx->pc = 0x26cb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943444)));
    // 0x26cb38: 0x8c63ffbc
    ctx->pc = 0x26cb38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26cb3c: 0x431021
    ctx->pc = 0x26cb3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26cb40: 0x10000151
    ctx->pc = 0x26CB40u;
    {
        const bool branch_taken_0x26cb40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CB44u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294943444), GPR_U32(ctx, 2));
        if (branch_taken_0x26cb40) {
            ctx->pc = 0x26D088u;
            goto label_26d088;
        }
    }
    ctx->pc = 0x26CB48u;
label_26cb48:
    // 0x26cb48: 0x26050010
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x26cb4c: 0x26260010
    ctx->pc = 0x26cb4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 16));
    // 0x26cb50: 0xc0874d8
    ctx->pc = 0x26CB50u;
    SET_GPR_U32(ctx, 31, 0x26CB58u);
    ctx->pc = 0x26CB54u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x21D360u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineColl_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB58u; }
    }
    if (ctx->pc != 0x26CB58u) { return; }
    ctx->pc = 0x26CB58u;
    // 0x26cb58: 0xc6010010
    ctx->pc = 0x26cb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cb5c: 0xc6200010
    ctx->pc = 0x26cb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cb60: 0x46000b01
    ctx->pc = 0x26cb60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cb64: 0xe7ac0000
    ctx->pc = 0x26cb64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26cb68: 0xc6020014
    ctx->pc = 0x26cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26cb6c: 0xc6200014
    ctx->pc = 0x26cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cb70: 0x46001081
    ctx->pc = 0x26cb70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26cb74: 0xe7a20004
    ctx->pc = 0x26cb74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26cb78: 0xc6010018
    ctx->pc = 0x26cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cb7c: 0xc6200018
    ctx->pc = 0x26cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cb80: 0x46000841
    ctx->pc = 0x26cb80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cb84: 0xe7a10008
    ctx->pc = 0x26cb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26cb88: 0x460c6002
    ctx->pc = 0x26cb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26cb8c: 0x46021082
    ctx->pc = 0x26cb8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26cb90: 0x46020000
    ctx->pc = 0x26cb90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26cb94: 0x46010842
    ctx->pc = 0x26cb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26cb98: 0x46010000
    ctx->pc = 0x26cb98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26cb9c: 0x0
    ctx->pc = 0x26cb9cu;
    // NOP
    // 0x26cba0: 0x0
    ctx->pc = 0x26cba0u;
    // NOP
    // 0x26cba4: 0x46000004
    ctx->pc = 0x26cba4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26cba8: 0x46000032
    ctx->pc = 0x26cba8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cbac: 0x0
    ctx->pc = 0x26cbacu;
    // NOP
    // 0x26cbb0: 0x45010006
    ctx->pc = 0x26CBB0u;
    {
        const bool branch_taken_0x26cbb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CBB4u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x26cbb0) {
            ctx->pc = 0x26CBCCu;
            goto label_26cbcc;
        }
    }
    ctx->pc = 0x26CBB8u;
    // 0x26cbb8: 0x460c6302
    ctx->pc = 0x26cbb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26cbbc: 0x46026300
    ctx->pc = 0x26cbbcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26cbc0: 0xc0ba284
    ctx->pc = 0x26CBC0u;
    SET_GPR_U32(ctx, 31, 0x26CBC8u);
    ctx->pc = 0x26CBC4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CBC8u; }
    }
    if (ctx->pc != 0x26CBC8u) { return; }
    ctx->pc = 0x26CBC8u;
    // 0x26cbc8: 0x46000506
    ctx->pc = 0x26cbc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_26cbcc:
    // 0x26cbcc: 0xc6010010
    ctx->pc = 0x26cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cbd0: 0xc7a00010
    ctx->pc = 0x26cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cbd4: 0x46000b01
    ctx->pc = 0x26cbd4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cbd8: 0xe7ac0000
    ctx->pc = 0x26cbd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26cbdc: 0xc6020014
    ctx->pc = 0x26cbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26cbe0: 0xc7a00014
    ctx->pc = 0x26cbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cbe4: 0x46001081
    ctx->pc = 0x26cbe4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26cbe8: 0xe7a20004
    ctx->pc = 0x26cbe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26cbec: 0xc6010018
    ctx->pc = 0x26cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cbf0: 0xc7a00018
    ctx->pc = 0x26cbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cbf4: 0x46000841
    ctx->pc = 0x26cbf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cbf8: 0xe7a10008
    ctx->pc = 0x26cbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26cbfc: 0x460c6002
    ctx->pc = 0x26cbfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26cc00: 0x46021082
    ctx->pc = 0x26cc00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26cc04: 0x46020000
    ctx->pc = 0x26cc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26cc08: 0x46010842
    ctx->pc = 0x26cc08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26cc0c: 0x46010000
    ctx->pc = 0x26cc0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26cc10: 0x0
    ctx->pc = 0x26cc10u;
    // NOP
    // 0x26cc14: 0x0
    ctx->pc = 0x26cc14u;
    // NOP
    // 0x26cc18: 0x46000004
    ctx->pc = 0x26cc18u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x26cc1c: 0x46000032
    ctx->pc = 0x26cc1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc20: 0x45010005
    ctx->pc = 0x26CC20u;
    {
        const bool branch_taken_0x26cc20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc20) {
            ctx->pc = 0x26CC38u;
            goto label_26cc38;
        }
    }
    ctx->pc = 0x26CC28u;
    // 0x26cc28: 0x460c6302
    ctx->pc = 0x26cc28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26cc2c: 0x46026300
    ctx->pc = 0x26cc2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26cc30: 0xc0ba284
    ctx->pc = 0x26CC30u;
    SET_GPR_U32(ctx, 31, 0x26CC38u);
    ctx->pc = 0x26CC34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CC38u; }
    }
    if (ctx->pc != 0x26CC38u) { return; }
    ctx->pc = 0x26CC38u;
label_26cc38:
    // 0x26cc38: 0x0
    ctx->pc = 0x26cc38u;
    // NOP
    // 0x26cc3c: 0x0
    ctx->pc = 0x26cc3cu;
    // NOP
    // 0x26cc40: 0x46140083
    ctx->pc = 0x26cc40u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x26cc44: 0x3c02003c
    ctx->pc = 0x26cc44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26cc48: 0x4616a800
    ctx->pc = 0x26cc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x26cc4c: 0x0
    ctx->pc = 0x26cc4cu;
    // NOP
    // 0x26cc50: 0x0
    ctx->pc = 0x26cc50u;
    // NOP
    // 0x26cc54: 0x4600a803
    ctx->pc = 0x26cc54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[0] = ctx->f[21] / ctx->f[0];
    // 0x26cc58: 0x3c013e99
    ctx->pc = 0x26cc58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x26cc5c: 0x3421999a
    ctx->pc = 0x26cc5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x26cc60: 0x44810800
    ctx->pc = 0x26cc60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26cc64: 0x46000836
    ctx->pc = 0x26cc64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc68: 0x0
    ctx->pc = 0x26cc68u;
    // NOP
    // 0x26cc6c: 0x45000005
    ctx->pc = 0x26CC6Cu;
    {
        const bool branch_taken_0x26cc6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CC70u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14696), bits); }
        if (branch_taken_0x26cc6c) {
            ctx->pc = 0x26CC84u;
            goto label_26cc84;
        }
    }
    ctx->pc = 0x26CC74u;
    // 0x26cc74: 0x3c013f80
    ctx->pc = 0x26cc74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26cc78: 0x44810000
    ctx->pc = 0x26cc78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26cc7c: 0x10000013
    ctx->pc = 0x26CC7Cu;
    {
        const bool branch_taken_0x26cc7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CC80u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14696), bits); }
        if (branch_taken_0x26cc7c) {
            ctx->pc = 0x26CCCCu;
            goto label_26cccc;
        }
    }
    ctx->pc = 0x26CC84u;
label_26cc84:
    // 0x26cc84: 0xc4413968
    ctx->pc = 0x26cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cc88: 0x3c013e4c
    ctx->pc = 0x26cc88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x26cc8c: 0x3421cccd
    ctx->pc = 0x26cc8cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x26cc90: 0x44810000
    ctx->pc = 0x26cc90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26cc94: 0x46010036
    ctx->pc = 0x26cc94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cc98: 0x4500000c
    ctx->pc = 0x26CC98u;
    {
        const bool branch_taken_0x26cc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc98) {
            ctx->pc = 0x26CCCCu;
            goto label_26cccc;
        }
    }
    ctx->pc = 0x26CCA0u;
    // 0x26cca0: 0x3c013e99
    ctx->pc = 0x26cca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16025 << 16));
    // 0x26cca4: 0x3421999a
    ctx->pc = 0x26cca4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x26cca8: 0x44810000
    ctx->pc = 0x26cca8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ccac: 0x46000801
    ctx->pc = 0x26ccacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ccb0: 0x3c014100
    ctx->pc = 0x26ccb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x26ccb4: 0x44810800
    ctx->pc = 0x26ccb4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26ccb8: 0x46010002
    ctx->pc = 0x26ccb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ccbc: 0x3c013f80
    ctx->pc = 0x26ccbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26ccc0: 0x44810800
    ctx->pc = 0x26ccc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26ccc4: 0x46000841
    ctx->pc = 0x26ccc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ccc8: 0xe4413968
    ctx->pc = 0x26ccc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14696), bits); }
label_26cccc:
    // 0x26cccc: 0x3c013f00
    ctx->pc = 0x26ccccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x26ccd0: 0x44810000
    ctx->pc = 0x26ccd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ccd4: 0x46001036
    ctx->pc = 0x26ccd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ccd8: 0x0
    ctx->pc = 0x26ccd8u;
    // NOP
    // 0x26ccdc: 0x45000010
    ctx->pc = 0x26CCDCu;
    {
        const bool branch_taken_0x26ccdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CCE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26ccdc) {
            ctx->pc = 0x26CD20u;
            goto label_26cd20;
        }
    }
    ctx->pc = 0x26CCE4u;
    // 0x26cce4: 0xe45af8f4
    ctx->pc = 0x26cce4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
    // 0x26cce8: 0x3c020034
    ctx->pc = 0x26cce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ccec: 0xe459f8f8
    ctx->pc = 0x26ccecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965496), bits); }
    // 0x26ccf0: 0x3c030034
    ctx->pc = 0x26ccf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26ccf4: 0x3c020034
    ctx->pc = 0x26ccf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ccf8: 0x8c42f928
    ctx->pc = 0x26ccf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965544)));
    // 0x26ccfc: 0xac62f930
    ctx->pc = 0x26ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x26cd00: 0x3c02003c
    ctx->pc = 0x26cd00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26cd04: 0xc44038f0
    ctx->pc = 0x26cd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cd08: 0x46190034
    ctx->pc = 0x26cd08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cd0c: 0x0
    ctx->pc = 0x26cd0cu;
    // NOP
    // 0x26cd10: 0x45000015
    ctx->pc = 0x26CD10u;
    {
        const bool branch_taken_0x26cd10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CD14u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26cd10) {
            ctx->pc = 0x26CD68u;
            goto label_26cd68;
        }
    }
    ctx->pc = 0x26CD18u;
    // 0x26cd18: 0x10000015
    ctx->pc = 0x26CD18u;
    {
        const bool branch_taken_0x26cd18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CD1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26cd18) {
            ctx->pc = 0x26CD70u;
            goto label_26cd70;
        }
    }
    ctx->pc = 0x26CD20u;
label_26cd20:
    // 0x26cd20: 0x46020034
    ctx->pc = 0x26cd20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cd24: 0x0
    ctx->pc = 0x26cd24u;
    // NOP
    // 0x26cd28: 0x45000012
    ctx->pc = 0x26CD28u;
    {
        const bool branch_taken_0x26cd28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CD2Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x26cd28) {
            ctx->pc = 0x26CD74u;
            goto label_26cd74;
        }
    }
    ctx->pc = 0x26CD30u;
    // 0x26cd30: 0xe457f8f4
    ctx->pc = 0x26cd30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965492), bits); }
    // 0x26cd34: 0x3c020034
    ctx->pc = 0x26cd34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26cd38: 0xe458f8f8
    ctx->pc = 0x26cd38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965496), bits); }
    // 0x26cd3c: 0x3c020034
    ctx->pc = 0x26cd3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26cd40: 0x8c42f92c
    ctx->pc = 0x26cd40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26cd44: 0xac62f930
    ctx->pc = 0x26cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x26cd48: 0x3c02003c
    ctx->pc = 0x26cd48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26cd4c: 0xc44038f0
    ctx->pc = 0x26cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cd50: 0x46180034
    ctx->pc = 0x26cd50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cd54: 0x0
    ctx->pc = 0x26cd54u;
    // NOP
    // 0x26cd58: 0x45000003
    ctx->pc = 0x26CD58u;
    {
        const bool branch_taken_0x26cd58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CD5Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26cd58) {
            ctx->pc = 0x26CD68u;
            goto label_26cd68;
        }
    }
    ctx->pc = 0x26CD60u;
    // 0x26cd60: 0x10000003
    ctx->pc = 0x26CD60u;
    {
        const bool branch_taken_0x26cd60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CD64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26cd60) {
            ctx->pc = 0x26CD70u;
            goto label_26cd70;
        }
    }
    ctx->pc = 0x26CD68u;
label_26cd68:
    // 0x26cd68: 0x3c03003c
    ctx->pc = 0x26cd68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26cd6c: 0x2402ffff
    ctx->pc = 0x26cd6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26cd70:
    // 0x26cd70: 0xac6238ec
    ctx->pc = 0x26cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14572), GPR_U32(ctx, 2));
label_26cd74:
    // 0x26cd74: 0x3c020034
    ctx->pc = 0x26cd74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26cd78: 0xc441f8f4
    ctx->pc = 0x26cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cd7c: 0xc66000b4
    ctx->pc = 0x26cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cd80: 0x46000841
    ctx->pc = 0x26cd80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cd84: 0x3c01c049
    ctx->pc = 0x26cd84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26cd88: 0x34210fdb
    ctx->pc = 0x26cd88u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26cd8c: 0x44810000
    ctx->pc = 0x26cd8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26cd90: 0x46000834
    ctx->pc = 0x26cd90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cd94: 0x0
    ctx->pc = 0x26cd94u;
    // NOP
    // 0x26cd98: 0x45000003
    ctx->pc = 0x26CD98u;
    {
        const bool branch_taken_0x26cd98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CD9Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x26cd98) {
            ctx->pc = 0x26CDA8u;
            goto label_26cda8;
        }
    }
    ctx->pc = 0x26CDA0u;
    // 0x26cda0: 0x1000000f
    ctx->pc = 0x26CDA0u;
    {
        const bool branch_taken_0x26cda0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CDA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26cda0) {
            ctx->pc = 0x26CDE0u;
            goto label_26cde0;
        }
    }
    ctx->pc = 0x26CDA8u;
label_26cda8:
    // 0x26cda8: 0x44800000
    ctx->pc = 0x26cda8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26cdac: 0x46000834
    ctx->pc = 0x26cdacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cdb0: 0x0
    ctx->pc = 0x26cdb0u;
    // NOP
    // 0x26cdb4: 0x4501000a
    ctx->pc = 0x26CDB4u;
    {
        const bool branch_taken_0x26cdb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CDB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x26cdb4) {
            ctx->pc = 0x26CDE0u;
            goto label_26cde0;
        }
    }
    ctx->pc = 0x26CDBCu;
    // 0x26cdbc: 0x3c014049
    ctx->pc = 0x26cdbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26cdc0: 0x34210fdb
    ctx->pc = 0x26cdc0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26cdc4: 0x44810000
    ctx->pc = 0x26cdc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26cdc8: 0x46000834
    ctx->pc = 0x26cdc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cdcc: 0x0
    ctx->pc = 0x26cdccu;
    // NOP
    // 0x26cdd0: 0x45010003
    ctx->pc = 0x26CDD0u;
    {
        const bool branch_taken_0x26cdd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CDD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x26cdd0) {
            ctx->pc = 0x26CDE0u;
            goto label_26cde0;
        }
    }
    ctx->pc = 0x26CDD8u;
    // 0x26cdd8: 0x3c03003c
    ctx->pc = 0x26cdd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26cddc: 0x2402ffff
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26cde0:
    // 0x26cde0: 0xac6238e4
    ctx->pc = 0x26cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14564), GPR_U32(ctx, 2));
    // 0x26cde4: 0x3c020034
    ctx->pc = 0x26cde4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26cde8: 0x8c43f930
    ctx->pc = 0x26cde8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
    // 0x26cdec: 0x13c3009c
    ctx->pc = 0x26CDECu;
    {
        const bool branch_taken_0x26cdec = (GPR_U32(ctx, 30) == GPR_U32(ctx, 3));
        ctx->pc = 0x26CDF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x26cdec) {
            ctx->pc = 0x26D060u;
            goto label_26d060;
        }
    }
    ctx->pc = 0x26CDF4u;
    // 0x26cdf4: 0x24424b70
    ctx->pc = 0x26cdf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x26cdf8: 0x31980
    ctx->pc = 0x26cdf8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x26cdfc: 0x621821
    ctx->pc = 0x26cdfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ce00: 0xc6610070
    ctx->pc = 0x26ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ce04: 0xc4600010
    ctx->pc = 0x26ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ce08: 0x46000b01
    ctx->pc = 0x26ce08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ce0c: 0xe7ac0000
    ctx->pc = 0x26ce0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ce10: 0xc6620074
    ctx->pc = 0x26ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ce14: 0xc4600014
    ctx->pc = 0x26ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ce18: 0x46001081
    ctx->pc = 0x26ce18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x26ce1c: 0xe7a20004
    ctx->pc = 0x26ce1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ce20: 0xc6610078
    ctx->pc = 0x26ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ce24: 0xc4600018
    ctx->pc = 0x26ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ce28: 0x46000841
    ctx->pc = 0x26ce28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ce2c: 0xe7a10008
    ctx->pc = 0x26ce2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26ce30: 0x460c6002
    ctx->pc = 0x26ce30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26ce34: 0x46021082
    ctx->pc = 0x26ce34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x26ce38: 0x46020000
    ctx->pc = 0x26ce38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26ce3c: 0x46010842
    ctx->pc = 0x26ce3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26ce40: 0x46010000
    ctx->pc = 0x26ce40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ce44: 0x0
    ctx->pc = 0x26ce44u;
    // NOP
    // 0x26ce48: 0x0
    ctx->pc = 0x26ce48u;
    // NOP
    // 0x26ce4c: 0x460000c4
    ctx->pc = 0x26ce4cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x26ce50: 0x46031832
    ctx->pc = 0x26ce50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce54: 0x45010006
    ctx->pc = 0x26CE54u;
    {
        const bool branch_taken_0x26ce54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ce54) {
            ctx->pc = 0x26CE70u;
            goto label_26ce70;
        }
    }
    ctx->pc = 0x26CE5Cu;
    // 0x26ce5c: 0x460c6302
    ctx->pc = 0x26ce5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x26ce60: 0x46026300
    ctx->pc = 0x26ce60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26ce64: 0xc0ba284
    ctx->pc = 0x26CE64u;
    SET_GPR_U32(ctx, 31, 0x26CE6Cu);
    ctx->pc = 0x26CE68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE6Cu; }
    }
    if (ctx->pc != 0x26CE6Cu) { return; }
    ctx->pc = 0x26CE6Cu;
    // 0x26ce6c: 0x460000c6
    ctx->pc = 0x26ce6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_26ce70:
    // 0x26ce70: 0x3c0140a0
    ctx->pc = 0x26ce70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x26ce74: 0x44810000
    ctx->pc = 0x26ce74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ce78: 0x46001882
    ctx->pc = 0x26ce78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x26ce7c: 0x44800000
    ctx->pc = 0x26ce7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x26ce80: 0x46001032
    ctx->pc = 0x26ce80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce84: 0x0
    ctx->pc = 0x26ce84u;
    // NOP
    // 0x26ce88: 0x4501006e
    ctx->pc = 0x26CE88u;
    {
        const bool branch_taken_0x26ce88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CE8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26ce88) {
            ctx->pc = 0x26D044u;
            goto label_26d044;
        }
    }
    ctx->pc = 0x26CE90u;
    // 0x26ce90: 0x3c013f80
    ctx->pc = 0x26ce90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x26ce94: 0x44810000
    ctx->pc = 0x26ce94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26ce98: 0x46001034
    ctx->pc = 0x26ce98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ce9c: 0x0
    ctx->pc = 0x26ce9cu;
    // NOP
    // 0x26cea0: 0x45030001
    ctx->pc = 0x26CEA0u;
    {
        const bool branch_taken_0x26cea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cea0) {
            ctx->pc = 0x26CEA4u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x26CEA8u;
            goto label_26cea8;
        }
    }
    ctx->pc = 0x26CEA8u;
label_26cea8:
    // 0x26cea8: 0x3c020034
    ctx->pc = 0x26cea8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ceac: 0xc441f8f4
    ctx->pc = 0x26ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ceb0: 0xc66000b4
    ctx->pc = 0x26ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ceb4: 0x46000841
    ctx->pc = 0x26ceb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ceb8: 0x3c014049
    ctx->pc = 0x26ceb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26cebc: 0x34210fdb
    ctx->pc = 0x26cebcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26cec0: 0x44810000
    ctx->pc = 0x26cec0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26cec4: 0x46010034
    ctx->pc = 0x26cec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cec8: 0x0
    ctx->pc = 0x26cec8u;
    // NOP
    // 0x26cecc: 0x45000005
    ctx->pc = 0x26CECCu;
    {
        const bool branch_taken_0x26cecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26cecc) {
            ctx->pc = 0x26CEE4u;
            goto label_26cee4;
        }
    }
    ctx->pc = 0x26CED4u;
    // 0x26ced4: 0x3c0140c9
    ctx->pc = 0x26ced4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26ced8: 0x34210fdb
    ctx->pc = 0x26ced8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26cedc: 0x44810000
    ctx->pc = 0x26cedcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26cee0: 0x46010041
    ctx->pc = 0x26cee0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26cee4:
    // 0x26cee4: 0x0
    ctx->pc = 0x26cee4u;
    // NOP
    // 0x26cee8: 0x0
    ctx->pc = 0x26cee8u;
    // NOP
    // 0x26ceec: 0x46020803
    ctx->pc = 0x26ceecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x26cef0: 0x46000005
    ctx->pc = 0x26cef0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26cef4: 0x3c013c2b
    ctx->pc = 0x26cef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15403 << 16));
    // 0x26cef8: 0x342192a7
    ctx->pc = 0x26cef8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 37543));
    // 0x26cefc: 0x44810800
    ctx->pc = 0x26cefcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26cf00: 0x46000836
    ctx->pc = 0x26cf00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cf04: 0x0
    ctx->pc = 0x26cf04u;
    // NOP
    // 0x26cf08: 0x45000002
    ctx->pc = 0x26CF08u;
    {
        const bool branch_taken_0x26cf08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CF0Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14680), bits); }
        if (branch_taken_0x26cf08) {
            ctx->pc = 0x26CF14u;
            goto label_26cf14;
        }
    }
    ctx->pc = 0x26CF10u;
    // 0x26cf10: 0xe4413958
    ctx->pc = 0x26cf10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14680), bits); }
label_26cf14:
    // 0x26cf14: 0x3c03003c
    ctx->pc = 0x26cf14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26cf18: 0x3c02003c
    ctx->pc = 0x26cf18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26cf1c: 0xc4633958
    ctx->pc = 0x26cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26cf20: 0xc4413960
    ctx->pc = 0x26cf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cf24: 0x46011801
    ctx->pc = 0x26cf24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x26cf28: 0x46000005
    ctx->pc = 0x26cf28u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26cf2c: 0x3c013a64
    ctx->pc = 0x26cf2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26cf30: 0x3421c389
    ctx->pc = 0x26cf30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26cf34: 0x44812000
    ctx->pc = 0x26cf34u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x26cf38: 0x46002036
    ctx->pc = 0x26cf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cf3c: 0x0
    ctx->pc = 0x26cf3cu;
    // NOP
    // 0x26cf40: 0x4500000e
    ctx->pc = 0x26CF40u;
    {
        const bool branch_taken_0x26cf40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CF44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26cf40) {
            ctx->pc = 0x26CF7Cu;
            goto label_26cf7c;
        }
    }
    ctx->pc = 0x26CF48u;
    // 0x26cf48: 0x46030834
    ctx->pc = 0x26cf48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cf4c: 0x0
    ctx->pc = 0x26cf4cu;
    // NOP
    // 0x26cf50: 0x45000003
    ctx->pc = 0x26CF50u;
    {
        const bool branch_taken_0x26cf50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CF54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26cf50) {
            ctx->pc = 0x26CF60u;
            goto label_26cf60;
        }
    }
    ctx->pc = 0x26CF58u;
    // 0x26cf58: 0x10000006
    ctx->pc = 0x26CF58u;
    {
        const bool branch_taken_0x26cf58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26CF5Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
        if (branch_taken_0x26cf58) {
            ctx->pc = 0x26CF74u;
            goto label_26cf74;
        }
    }
    ctx->pc = 0x26CF60u;
label_26cf60:
    // 0x26cf60: 0xc4403960
    ctx->pc = 0x26cf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cf64: 0x3c013a64
    ctx->pc = 0x26cf64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14948 << 16));
    // 0x26cf68: 0x3421c389
    ctx->pc = 0x26cf68u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50057));
    // 0x26cf6c: 0x44810800
    ctx->pc = 0x26cf6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26cf70: 0x46010001
    ctx->pc = 0x26cf70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26cf74:
    // 0x26cf74: 0xe4603958
    ctx->pc = 0x26cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14680), bits); }
    // 0x26cf78: 0x3c020034
    ctx->pc = 0x26cf78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26cf7c:
    // 0x26cf7c: 0x3c03003c
    ctx->pc = 0x26cf7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26cf80: 0xc441f8f8
    ctx->pc = 0x26cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cf84: 0xc46038f0
    ctx->pc = 0x26cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cf88: 0x46000841
    ctx->pc = 0x26cf88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26cf8c: 0x3c02003c
    ctx->pc = 0x26cf8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26cf90: 0x0
    ctx->pc = 0x26cf90u;
    // NOP
    // 0x26cf94: 0x0
    ctx->pc = 0x26cf94u;
    // NOP
    // 0x26cf98: 0x46020803
    ctx->pc = 0x26cf98u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x26cf9c: 0x46000005
    ctx->pc = 0x26cf9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26cfa0: 0x3c013bcd
    ctx->pc = 0x26cfa0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15309 << 16));
    // 0x26cfa4: 0x3421e32f
    ctx->pc = 0x26cfa4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 58159));
    // 0x26cfa8: 0x44810800
    ctx->pc = 0x26cfa8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26cfac: 0x46000836
    ctx->pc = 0x26cfacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cfb0: 0x0
    ctx->pc = 0x26cfb0u;
    // NOP
    // 0x26cfb4: 0x45000002
    ctx->pc = 0x26CFB4u;
    {
        const bool branch_taken_0x26cfb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CFB8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14684), bits); }
        if (branch_taken_0x26cfb4) {
            ctx->pc = 0x26CFC0u;
            goto label_26cfc0;
        }
    }
    ctx->pc = 0x26CFBCu;
    // 0x26cfbc: 0xe441395c
    ctx->pc = 0x26cfbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14684), bits); }
label_26cfc0:
    // 0x26cfc0: 0x3c03003c
    ctx->pc = 0x26cfc0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26cfc4: 0x3c02003c
    ctx->pc = 0x26cfc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26cfc8: 0xc462395c
    ctx->pc = 0x26cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26cfcc: 0xc4413964
    ctx->pc = 0x26cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26cfd0: 0x46011001
    ctx->pc = 0x26cfd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x26cfd4: 0x46000005
    ctx->pc = 0x26cfd4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26cfd8: 0x3c013a09
    ctx->pc = 0x26cfd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14857 << 16));
    // 0x26cfdc: 0x3421421f
    ctx->pc = 0x26cfdcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16927));
    // 0x26cfe0: 0x44811800
    ctx->pc = 0x26cfe0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x26cfe4: 0x46001836
    ctx->pc = 0x26cfe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cfe8: 0x0
    ctx->pc = 0x26cfe8u;
    // NOP
    // 0x26cfec: 0x4502000d
    ctx->pc = 0x26CFECu;
    {
        const bool branch_taken_0x26cfec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cfec) {
            ctx->pc = 0x26CFF0u;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x26D024u;
            goto label_26d024;
        }
    }
    ctx->pc = 0x26CFF4u;
    // 0x26cff4: 0x46020834
    ctx->pc = 0x26cff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cff8: 0x0
    ctx->pc = 0x26cff8u;
    // NOP
    // 0x26cffc: 0x45000003
    ctx->pc = 0x26CFFCu;
    {
        const bool branch_taken_0x26cffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D000u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26cffc) {
            ctx->pc = 0x26D00Cu;
            goto label_26d00c;
        }
    }
    ctx->pc = 0x26D004u;
    // 0x26d004: 0x10000005
    ctx->pc = 0x26D004u;
    {
        const bool branch_taken_0x26d004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D008u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        if (branch_taken_0x26d004) {
            ctx->pc = 0x26D01Cu;
            goto label_26d01c;
        }
    }
    ctx->pc = 0x26D00Cu;
label_26d00c:
    // 0x26d00c: 0x3c013a09
    ctx->pc = 0x26d00cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14857 << 16));
    // 0x26d010: 0x3421421f
    ctx->pc = 0x26d010u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16927));
    // 0x26d014: 0x44810800
    ctx->pc = 0x26d014u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26d018: 0x46010001
    ctx->pc = 0x26d018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26d01c:
    // 0x26d01c: 0xe460395c
    ctx->pc = 0x26d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14684), bits); }
    // 0x26d020: 0x3c03003c
    ctx->pc = 0x26d020u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_26d024:
    // 0x26d024: 0x3c02003c
    ctx->pc = 0x26d024u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d028: 0xc4403958
    ctx->pc = 0x26d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d02c: 0xe4603960
    ctx->pc = 0x26d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14688), bits); }
    // 0x26d030: 0x3c03003c
    ctx->pc = 0x26d030u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d034: 0x3c02003c
    ctx->pc = 0x26d034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d038: 0xc440395c
    ctx->pc = 0x26d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d03c: 0x10000008
    ctx->pc = 0x26D03Cu;
    {
        const bool branch_taken_0x26d03c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D040u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14692), bits); }
        if (branch_taken_0x26d03c) {
            ctx->pc = 0x26D060u;
            goto label_26d060;
        }
    }
    ctx->pc = 0x26D044u;
label_26d044:
    // 0x26d044: 0xac403958
    ctx->pc = 0x26d044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14680), GPR_U32(ctx, 0));
    // 0x26d048: 0x3c02003c
    ctx->pc = 0x26d048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d04c: 0xac403960
    ctx->pc = 0x26d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14688), GPR_U32(ctx, 0));
    // 0x26d050: 0x3c02003c
    ctx->pc = 0x26d050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d054: 0xac40395c
    ctx->pc = 0x26d054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14684), GPR_U32(ctx, 0));
    // 0x26d058: 0x3c02003c
    ctx->pc = 0x26d058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d05c: 0xac403964
    ctx->pc = 0x26d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14692), GPR_U32(ctx, 0));
label_26d060:
    // 0x26d060: 0x6e00009
    ctx->pc = 0x26D060u;
    {
        const bool branch_taken_0x26d060 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x26D064u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26d060) {
            ctx->pc = 0x26D088u;
            goto label_26d088;
        }
    }
    ctx->pc = 0x26D068u;
    // 0x26d068: 0x8c42f92c
    ctx->pc = 0x26d068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965548)));
    // 0x26d06c: 0x16e20007
    ctx->pc = 0x26D06Cu;
    {
        const bool branch_taken_0x26d06c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x26D070u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x26d06c) {
            ctx->pc = 0x26D08Cu;
            goto label_26d08c;
        }
    }
    ctx->pc = 0x26D074u;
    // 0x26d074: 0x3c030033
    ctx->pc = 0x26d074u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x26d078: 0x24634b70
    ctx->pc = 0x26d078u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19312));
    // 0x26d07c: 0x171180
    ctx->pc = 0x26d07cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), 6));
    // 0x26d080: 0x431021
    ctx->pc = 0x26d080u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d084: 0xa4400002
    ctx->pc = 0x26d084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
label_26d088:
    // 0x26d088: 0xdfbf00b0
    ctx->pc = 0x26d088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26d08c:
    // 0x26d08c: 0xdfbe00a0
    ctx->pc = 0x26d08cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26d090: 0xdfb70090
    ctx->pc = 0x26d090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26d094: 0xdfb60080
    ctx->pc = 0x26d094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26d098: 0xdfb50070
    ctx->pc = 0x26d098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26d09c: 0xdfb40060
    ctx->pc = 0x26d09cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26d0a0: 0xdfb30050
    ctx->pc = 0x26d0a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26d0a4: 0xdfb20040
    ctx->pc = 0x26d0a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d0a8: 0xdfb10030
    ctx->pc = 0x26d0a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d0ac: 0xdfb00020
    ctx->pc = 0x26d0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d0b0: 0xc7ba00f0
    ctx->pc = 0x26d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x26d0b4: 0xc7b900e8
    ctx->pc = 0x26d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x26d0b8: 0xc7b800e0
    ctx->pc = 0x26d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x26d0bc: 0xc7b700d8
    ctx->pc = 0x26d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x26d0c0: 0xc7b600d0
    ctx->pc = 0x26d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26d0c4: 0xc7b500c8
    ctx->pc = 0x26d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26d0c8: 0xc7b400c0
    ctx->pc = 0x26d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d0cc: 0x3e00008
    ctx->pc = 0x26D0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D0D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26C9C0u: goto label_26c9c0;
            case 0x26CA4Cu: goto label_26ca4c;
            case 0x26CA80u: goto label_26ca80;
            case 0x26CAA0u: goto label_26caa0;
            case 0x26CAA8u: goto label_26caa8;
            case 0x26CABCu: goto label_26cabc;
            case 0x26CAE0u: goto label_26cae0;
            case 0x26CB2Cu: goto label_26cb2c;
            case 0x26CB48u: goto label_26cb48;
            case 0x26CBCCu: goto label_26cbcc;
            case 0x26CC38u: goto label_26cc38;
            case 0x26CC84u: goto label_26cc84;
            case 0x26CCCCu: goto label_26cccc;
            case 0x26CD20u: goto label_26cd20;
            case 0x26CD68u: goto label_26cd68;
            case 0x26CD70u: goto label_26cd70;
            case 0x26CD74u: goto label_26cd74;
            case 0x26CDA8u: goto label_26cda8;
            case 0x26CDE0u: goto label_26cde0;
            case 0x26CE70u: goto label_26ce70;
            case 0x26CEA8u: goto label_26cea8;
            case 0x26CEE4u: goto label_26cee4;
            case 0x26CF14u: goto label_26cf14;
            case 0x26CF60u: goto label_26cf60;
            case 0x26CF74u: goto label_26cf74;
            case 0x26CF7Cu: goto label_26cf7c;
            case 0x26CFC0u: goto label_26cfc0;
            case 0x26D00Cu: goto label_26d00c;
            case 0x26D01Cu: goto label_26d01c;
            case 0x26D024u: goto label_26d024;
            case 0x26D044u: goto label_26d044;
            case 0x26D060u: goto label_26d060;
            case 0x26D088u: goto label_26d088;
            case 0x26D08Cu: goto label_26d08c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D0D4u;
}
