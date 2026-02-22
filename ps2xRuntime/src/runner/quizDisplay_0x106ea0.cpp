#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: quizDisplay
// Address: 0x106ea0 - 0x107888
void quizDisplay_0x106ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x106ea0u;

    // 0x106ea0: 0x27bdff90
    ctx->pc = 0x106ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x106ea4: 0xffb40050
    ctx->pc = 0x106ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x106ea8: 0xffb20030
    ctx->pc = 0x106ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x106eac: 0x3c140014
    ctx->pc = 0x106eacu;
    SET_GPR_S32(ctx, 20, ((uint32_t)20 << 16));
    // 0x106eb0: 0xffb10020
    ctx->pc = 0x106eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x106eb4: 0x3c127f00
    ctx->pc = 0x106eb4u;
    SET_GPR_S32(ctx, 18, ((uint32_t)32512 << 16));
    // 0x106eb8: 0xffbf0060
    ctx->pc = 0x106eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x106ebc: 0x26911698
    ctx->pc = 0x106ebcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 5784));
    // 0x106ec0: 0xffb30040
    ctx->pc = 0x106ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x106ec4: 0x365280ff
    ctx->pc = 0x106ec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)33023);
    // 0x106ec8: 0xffb00010
    ctx->pc = 0x106ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x106ecc: 0xc6200058
    ctx->pc = 0x106eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106ed0: 0x46800020
    ctx->pc = 0x106ed0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x106ed4: 0xc6220064
    ctx->pc = 0x106ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106ed8: 0xc621005c
    ctx->pc = 0x106ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106edc: 0x46800860
    ctx->pc = 0x106edcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x106ee0: 0xc6230068
    ctx->pc = 0x106ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106ee4: 0x8e240044
    ctx->pc = 0x106ee4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x106ee8: 0x46020002
    ctx->pc = 0x106ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x106eec: 0x8e250048
    ctx->pc = 0x106eecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x106ef0: 0x46030842
    ctx->pc = 0x106ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x106ef4: 0x8e26004c
    ctx->pc = 0x106ef4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x106ef8: 0x8e270050
    ctx->pc = 0x106ef8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x106efc: 0x460000a4
    ctx->pc = 0x106efcu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x106f00: 0x44091000
    ctx->pc = 0x106f00u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x106f04: 0x8e280054
    ctx->pc = 0x106f04u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x106f08: 0x46000824
    ctx->pc = 0x106f08u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x106f0c: 0x440a0000
    ctx->pc = 0x106f0cu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x106f10: 0xc040f80
    ctx->pc = 0x106F10u;
    SET_GPR_U32(ctx, 31, 0x106F18u);
    ctx->pc = 0x106F14u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
    ctx->pc = 0x103E00u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw24bitImage_0x103e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F18u; }
    }
    if (ctx->pc != 0x106F18u) { return; }
    ctx->pc = 0x106F18u;
    // 0x106f18: 0xc62001f0
    ctx->pc = 0x106f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106f1c: 0x46800020
    ctx->pc = 0x106f1cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x106f20: 0xc62201fc
    ctx->pc = 0x106f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106f24: 0xc62101f4
    ctx->pc = 0x106f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106f28: 0x46800860
    ctx->pc = 0x106f28u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x106f2c: 0xc6230200
    ctx->pc = 0x106f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106f30: 0x3c027f19
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32537 << 16));
    // 0x106f34: 0x922b0204
    ctx->pc = 0x106f34u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x106f38: 0x46020002
    ctx->pc = 0x106f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x106f3c: 0x34422cef
    ctx->pc = 0x106f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)11503);
    // 0x106f40: 0x46030842
    ctx->pc = 0x106f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x106f44: 0x8e2401dc
    ctx->pc = 0x106f44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x106f48: 0x8e2501e0
    ctx->pc = 0x106f48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x106f4c: 0x460000a4
    ctx->pc = 0x106f4cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x106f50: 0x44091000
    ctx->pc = 0x106f50u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x106f54: 0x8e2601e4
    ctx->pc = 0x106f54u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x106f58: 0x46000824
    ctx->pc = 0x106f58u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x106f5c: 0x440a0000
    ctx->pc = 0x106f5cu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x106f60: 0x8e2701e8
    ctx->pc = 0x106f60u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x106f64: 0x8e2801ec
    ctx->pc = 0x106f64u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x106f68: 0xc041560
    ctx->pc = 0x106F68u;
    SET_GPR_U32(ctx, 31, 0x106F70u);
    ctx->pc = 0x106F6Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F70u; }
    }
    if (ctx->pc != 0x106F70u) { return; }
    ctx->pc = 0x106F70u;
    // 0x106f70: 0xc620009c
    ctx->pc = 0x106f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106f74: 0x46800020
    ctx->pc = 0x106f74u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x106f78: 0xc62200a8
    ctx->pc = 0x106f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106f7c: 0xc62100a0
    ctx->pc = 0x106f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106f80: 0x46800860
    ctx->pc = 0x106f80u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x106f84: 0xc62300ac
    ctx->pc = 0x106f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106f88: 0x922b00b0
    ctx->pc = 0x106f88u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x106f8c: 0x46020002
    ctx->pc = 0x106f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x106f90: 0x8e240088
    ctx->pc = 0x106f90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x106f94: 0x46030842
    ctx->pc = 0x106f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x106f98: 0x8e25008c
    ctx->pc = 0x106f98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x106f9c: 0x8e260090
    ctx->pc = 0x106f9cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x106fa0: 0x460000a4
    ctx->pc = 0x106fa0u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x106fa4: 0x44091000
    ctx->pc = 0x106fa4u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x106fa8: 0x8e270094
    ctx->pc = 0x106fa8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x106fac: 0x46000824
    ctx->pc = 0x106facu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x106fb0: 0x440a0000
    ctx->pc = 0x106fb0u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x106fb4: 0x8e280098
    ctx->pc = 0x106fb4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x106fb8: 0xc041560
    ctx->pc = 0x106FB8u;
    SET_GPR_U32(ctx, 31, 0x106FC0u);
    ctx->pc = 0x106FBCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106FC0u; }
    }
    if (ctx->pc != 0x106FC0u) { return; }
    ctx->pc = 0x106FC0u;
    // 0x106fc0: 0x3c020013
    ctx->pc = 0x106fc0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)19 << 16));
    // 0x106fc4: 0x24030002
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x106fc8: 0x84441458
    ctx->pc = 0x106fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5208)));
    // 0x106fcc: 0x1083007b
    ctx->pc = 0x106FCCu;
    {
        const bool branch_taken_0x106fcc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x106FD0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
        if (branch_taken_0x106fcc) {
            ctx->pc = 0x1071BCu;
            goto label_1071bc;
        }
    }
    ctx->pc = 0x106FD4u;
    // 0x106fd4: 0x10400005
    ctx->pc = 0x106FD4u;
    {
        const bool branch_taken_0x106fd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x106FD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x106fd4) {
            ctx->pc = 0x106FECu;
            goto label_106fec;
        }
    }
    ctx->pc = 0x106FDCu;
    // 0x106fdc: 0x1082000a
    ctx->pc = 0x106FDCu;
    {
        const bool branch_taken_0x106fdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x106FE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x106fdc) {
            ctx->pc = 0x107008u;
            goto label_107008;
        }
    }
    ctx->pc = 0x106FE4u;
    // 0x106fe4: 0x10000222
    ctx->pc = 0x106FE4u;
    {
        const bool branch_taken_0x106fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x106FE8u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x106fe4) {
            ctx->pc = 0x107870u;
            goto label_107870;
        }
    }
    ctx->pc = 0x106FECu;
label_106fec:
    // 0x106fec: 0x24130003
    ctx->pc = 0x106fecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
    // 0x106ff0: 0x10930102
    ctx->pc = 0x106FF0u;
    {
        const bool branch_taken_0x106ff0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 19));
        ctx->pc = 0x106FF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x106ff0) {
            ctx->pc = 0x1073FCu;
            goto label_1073fc;
        }
    }
    ctx->pc = 0x106FF8u;
    // 0x106ff8: 0x10820190
    ctx->pc = 0x106FF8u;
    {
        const bool branch_taken_0x106ff8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x106FFCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x106ff8) {
            ctx->pc = 0x10763Cu;
            goto label_10763c;
        }
    }
    ctx->pc = 0x107000u;
    // 0x107000: 0x1000021b
    ctx->pc = 0x107000u;
    {
        const bool branch_taken_0x107000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107004u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x107000) {
            ctx->pc = 0x107870u;
            goto label_107870;
        }
    }
    ctx->pc = 0x107008u;
label_107008:
    // 0x107008: 0x8f8280ac
    ctx->pc = 0x107008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x10700c: 0x54440039
    ctx->pc = 0x10700Cu;
    {
        const bool branch_taken_0x10700c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x10700c) {
            ctx->pc = 0x107010u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x1070F4u;
            goto label_1070f4;
        }
    }
    ctx->pc = 0x107014u;
    // 0x107014: 0x8f838168
    ctx->pc = 0x107014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x107018: 0x28620002
    ctx->pc = 0x107018u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x10701c: 0x10400015
    ctx->pc = 0x10701Cu;
    {
        const bool branch_taken_0x10701c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107020u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10701c) {
            ctx->pc = 0x107074u;
            goto label_107074;
        }
    }
    ctx->pc = 0x107024u;
    // 0x107024: 0xc62000e0
    ctx->pc = 0x107024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107028: 0x46800020
    ctx->pc = 0x107028u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x10702c: 0xc62200ec
    ctx->pc = 0x10702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107030: 0xc62100e4
    ctx->pc = 0x107030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107034: 0x46800860
    ctx->pc = 0x107034u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107038: 0xc62300f0
    ctx->pc = 0x107038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10703c: 0x922b00f4
    ctx->pc = 0x10703cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x107040: 0x46020002
    ctx->pc = 0x107040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107044: 0x8e2800dc
    ctx->pc = 0x107044u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x107048: 0x46030842
    ctx->pc = 0x107048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10704c: 0x8e2400cc
    ctx->pc = 0x10704cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x107050: 0x8e2500d0
    ctx->pc = 0x107050u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x107054: 0x460000a4
    ctx->pc = 0x107054u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107058: 0x44091000
    ctx->pc = 0x107058u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10705c: 0x8e2600d4
    ctx->pc = 0x10705cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x107060: 0x46000824
    ctx->pc = 0x107060u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107064: 0x440a0000
    ctx->pc = 0x107064u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107068: 0x8e2700d8
    ctx->pc = 0x107068u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x10706c: 0x10000018
    ctx->pc = 0x10706Cu;
    {
        const bool branch_taken_0x10706c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107070u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x10706c) {
            ctx->pc = 0x1070D0u;
            goto label_1070d0;
        }
    }
    ctx->pc = 0x107074u;
label_107074:
    // 0x107074: 0x1462001a
    ctx->pc = 0x107074u;
    {
        const bool branch_taken_0x107074 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x107078u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x107074) {
            ctx->pc = 0x1070E0u;
            goto label_1070e0;
        }
    }
    ctx->pc = 0x10707Cu;
    // 0x10707c: 0xc62000e0
    ctx->pc = 0x10707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107080: 0x46800020
    ctx->pc = 0x107080u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107084: 0xc62200ec
    ctx->pc = 0x107084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107088: 0xc62100e4
    ctx->pc = 0x107088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10708c: 0x46800860
    ctx->pc = 0x10708cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107090: 0xc62300f0
    ctx->pc = 0x107090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107094: 0x3c027fff
    ctx->pc = 0x107094u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x107098: 0x922b00f4
    ctx->pc = 0x107098u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x10709c: 0x46020002
    ctx->pc = 0x10709cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1070a0: 0x8e2800dc
    ctx->pc = 0x1070a0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1070a4: 0x46030842
    ctx->pc = 0x1070a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1070a8: 0x3442ffff
    ctx->pc = 0x1070a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x1070ac: 0x8e2400cc
    ctx->pc = 0x1070acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1070b0: 0x460000a4
    ctx->pc = 0x1070b0u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1070b4: 0x44091000
    ctx->pc = 0x1070b4u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1070b8: 0x8e2500d0
    ctx->pc = 0x1070b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1070bc: 0x46000824
    ctx->pc = 0x1070bcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1070c0: 0x440a0000
    ctx->pc = 0x1070c0u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1070c4: 0x8e2600d4
    ctx->pc = 0x1070c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1070c8: 0x8e2700d8
    ctx->pc = 0x1070c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x1070cc: 0xafa20000
    ctx->pc = 0x1070ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1070d0:
    // 0x1070d0: 0xc041560
    ctx->pc = 0x1070D0u;
    SET_GPR_U32(ctx, 31, 0x1070D8u);
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1070D8u; }
    }
    if (ctx->pc != 0x1070D8u) { return; }
    ctx->pc = 0x1070D8u;
    // 0x1070d8: 0x8f838168
    ctx->pc = 0x1070d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x1070dc: 0x24630001
    ctx->pc = 0x1070dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1070e0:
    // 0x1070e0: 0x24020004
    ctx->pc = 0x1070e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1070e4: 0x14620016
    ctx->pc = 0x1070E4u;
    {
        const bool branch_taken_0x1070e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1070E8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 3));
        if (branch_taken_0x1070e4) {
            ctx->pc = 0x107140u;
            goto label_107140;
        }
    }
    ctx->pc = 0x1070ECu;
    // 0x1070ec: 0x10000014
    ctx->pc = 0x1070ECu;
    {
        const bool branch_taken_0x1070ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1070F0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 0));
        if (branch_taken_0x1070ec) {
            ctx->pc = 0x107140u;
            goto label_107140;
        }
    }
    ctx->pc = 0x1070F4u;
label_1070f4:
    // 0x1070f4: 0xc62000e0
    ctx->pc = 0x1070f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1070f8: 0x46800020
    ctx->pc = 0x1070f8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1070fc: 0xc62100e4
    ctx->pc = 0x1070fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107100: 0x46800860
    ctx->pc = 0x107100u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107104: 0xc62300f0
    ctx->pc = 0x107104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107108: 0x922b00f4
    ctx->pc = 0x107108u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x10710c: 0x46020002
    ctx->pc = 0x10710cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107110: 0x8e2800dc
    ctx->pc = 0x107110u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x107114: 0x46030842
    ctx->pc = 0x107114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107118: 0x8e2400cc
    ctx->pc = 0x107118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10711c: 0x8e2500d0
    ctx->pc = 0x10711cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x107120: 0x460000a4
    ctx->pc = 0x107120u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107124: 0x44091000
    ctx->pc = 0x107124u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107128: 0x8e2600d4
    ctx->pc = 0x107128u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x10712c: 0x46000824
    ctx->pc = 0x10712cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107130: 0x440a0000
    ctx->pc = 0x107130u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107134: 0x8e2700d8
    ctx->pc = 0x107134u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x107138: 0xc041560
    ctx->pc = 0x107138u;
    SET_GPR_U32(ctx, 31, 0x107140u);
    ctx->pc = 0x10713Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107140u; }
    }
    if (ctx->pc != 0x107140u) { return; }
    ctx->pc = 0x107140u;
label_107140:
    // 0x107140: 0x26901698
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 5784));
    // 0x107144: 0x3c117fff
    ctx->pc = 0x107144u;
    SET_GPR_S32(ctx, 17, ((uint32_t)32767 << 16));
    // 0x107148: 0xc6000124
    ctx->pc = 0x107148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10714c: 0x46800020
    ctx->pc = 0x10714cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107150: 0xc6020130
    ctx->pc = 0x107150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107154: 0xc6010128
    ctx->pc = 0x107154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107158: 0x46800860
    ctx->pc = 0x107158u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x10715c: 0xc6030134
    ctx->pc = 0x10715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107160: 0x3631ffff
    ctx->pc = 0x107160u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)65535);
    // 0x107164: 0x920b0138
    ctx->pc = 0x107164u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x107168: 0x46020002
    ctx->pc = 0x107168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10716c: 0x8e040110
    ctx->pc = 0x10716cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x107170: 0x46030842
    ctx->pc = 0x107170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107174: 0x8e050114
    ctx->pc = 0x107174u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x107178: 0x8e060118
    ctx->pc = 0x107178u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x10717c: 0x460000a4
    ctx->pc = 0x10717cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107180: 0x44091000
    ctx->pc = 0x107180u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107184: 0x8e07011c
    ctx->pc = 0x107184u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x107188: 0x46000824
    ctx->pc = 0x107188u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x10718c: 0x440a0000
    ctx->pc = 0x10718cu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107190: 0x8e080120
    ctx->pc = 0x107190u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x107194: 0xc041560
    ctx->pc = 0x107194u;
    SET_GPR_U32(ctx, 31, 0x10719Cu);
    ctx->pc = 0x107198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10719Cu; }
    }
    if (ctx->pc != 0x10719Cu) { return; }
    ctx->pc = 0x10719Cu;
    // 0x10719c: 0xc6000168
    ctx->pc = 0x10719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1071a0: 0x46800020
    ctx->pc = 0x1071a0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1071a4: 0xc6020174
    ctx->pc = 0x1071a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1071a8: 0xc601016c
    ctx->pc = 0x1071a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1071ac: 0x46800860
    ctx->pc = 0x1071acu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1071b0: 0xc6030178
    ctx->pc = 0x1071b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1071b4: 0x1000006e
    ctx->pc = 0x1071B4u;
    {
        const bool branch_taken_0x1071b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1071B8u;
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 380)));
        if (branch_taken_0x1071b4) {
            ctx->pc = 0x107370u;
            goto label_107370;
        }
    }
    ctx->pc = 0x1071BCu;
label_1071bc:
    // 0x1071bc: 0xc62000e0
    ctx->pc = 0x1071bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1071c0: 0x46800020
    ctx->pc = 0x1071c0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1071c4: 0xc62200ec
    ctx->pc = 0x1071c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1071c8: 0xc62100e4
    ctx->pc = 0x1071c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1071cc: 0x46800860
    ctx->pc = 0x1071ccu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1071d0: 0xc62300f0
    ctx->pc = 0x1071d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1071d4: 0x3c107fff
    ctx->pc = 0x1071d4u;
    SET_GPR_S32(ctx, 16, ((uint32_t)32767 << 16));
    // 0x1071d8: 0x922b00f4
    ctx->pc = 0x1071d8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x1071dc: 0x46020002
    ctx->pc = 0x1071dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1071e0: 0x8e2400cc
    ctx->pc = 0x1071e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x1071e4: 0x46030842
    ctx->pc = 0x1071e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1071e8: 0x8e2500d0
    ctx->pc = 0x1071e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x1071ec: 0x8e2600d4
    ctx->pc = 0x1071ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1071f0: 0x3610ffff
    ctx->pc = 0x1071f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)65535);
    // 0x1071f4: 0x460000a4
    ctx->pc = 0x1071f4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1071f8: 0x44091000
    ctx->pc = 0x1071f8u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1071fc: 0x8e2700d8
    ctx->pc = 0x1071fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x107200: 0x46000824
    ctx->pc = 0x107200u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107204: 0x440a0000
    ctx->pc = 0x107204u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107208: 0x8e2800dc
    ctx->pc = 0x107208u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x10720c: 0xc041560
    ctx->pc = 0x10720Cu;
    SET_GPR_U32(ctx, 31, 0x107214u);
    ctx->pc = 0x107210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107214u; }
    }
    if (ctx->pc != 0x107214u) { return; }
    ctx->pc = 0x107214u;
    // 0x107214: 0x8f8380ac
    ctx->pc = 0x107214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x107218: 0x24020001
    ctx->pc = 0x107218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10721c: 0x54620037
    ctx->pc = 0x10721Cu;
    {
        const bool branch_taken_0x10721c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10721c) {
            ctx->pc = 0x107220u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x1072FCu;
            goto label_1072fc;
        }
    }
    ctx->pc = 0x107224u;
    // 0x107224: 0x8f838168
    ctx->pc = 0x107224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x107228: 0x28620002
    ctx->pc = 0x107228u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x10722c: 0x10400015
    ctx->pc = 0x10722Cu;
    {
        const bool branch_taken_0x10722c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x107230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x10722c) {
            ctx->pc = 0x107284u;
            goto label_107284;
        }
    }
    ctx->pc = 0x107234u;
    // 0x107234: 0xc6200124
    ctx->pc = 0x107234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107238: 0x46800020
    ctx->pc = 0x107238u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x10723c: 0xc6220130
    ctx->pc = 0x10723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107240: 0xc6210128
    ctx->pc = 0x107240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107244: 0x46800860
    ctx->pc = 0x107244u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107248: 0xc6230134
    ctx->pc = 0x107248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10724c: 0x922b0138
    ctx->pc = 0x10724cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x107250: 0x46020002
    ctx->pc = 0x107250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107254: 0x8e280120
    ctx->pc = 0x107254u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x107258: 0x46030842
    ctx->pc = 0x107258u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10725c: 0x8e240110
    ctx->pc = 0x10725cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x107260: 0x8e250114
    ctx->pc = 0x107260u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x107264: 0x460000a4
    ctx->pc = 0x107264u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107268: 0x44091000
    ctx->pc = 0x107268u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10726c: 0x8e260118
    ctx->pc = 0x10726cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x107270: 0x46000824
    ctx->pc = 0x107270u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107274: 0x440a0000
    ctx->pc = 0x107274u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107278: 0x8e27011c
    ctx->pc = 0x107278u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x10727c: 0x10000016
    ctx->pc = 0x10727Cu;
    {
        const bool branch_taken_0x10727c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107280u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x10727c) {
            ctx->pc = 0x1072D8u;
            goto label_1072d8;
        }
    }
    ctx->pc = 0x107284u;
label_107284:
    // 0x107284: 0x14620018
    ctx->pc = 0x107284u;
    {
        const bool branch_taken_0x107284 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x107288u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x107284) {
            ctx->pc = 0x1072E8u;
            goto label_1072e8;
        }
    }
    ctx->pc = 0x10728Cu;
    // 0x10728c: 0xc6200124
    ctx->pc = 0x10728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107290: 0x46800020
    ctx->pc = 0x107290u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107294: 0xc6220130
    ctx->pc = 0x107294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107298: 0xc6210128
    ctx->pc = 0x107298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10729c: 0x46800860
    ctx->pc = 0x10729cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1072a0: 0xc6230134
    ctx->pc = 0x1072a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1072a4: 0x922b0138
    ctx->pc = 0x1072a4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1072a8: 0x46020002
    ctx->pc = 0x1072a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1072ac: 0x8e280120
    ctx->pc = 0x1072acu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1072b0: 0x46030842
    ctx->pc = 0x1072b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1072b4: 0x8e240110
    ctx->pc = 0x1072b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1072b8: 0x8e250114
    ctx->pc = 0x1072b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x1072bc: 0x460000a4
    ctx->pc = 0x1072bcu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1072c0: 0x44091000
    ctx->pc = 0x1072c0u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1072c4: 0x8e260118
    ctx->pc = 0x1072c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1072c8: 0x46000824
    ctx->pc = 0x1072c8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1072cc: 0x440a0000
    ctx->pc = 0x1072ccu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1072d0: 0x8e27011c
    ctx->pc = 0x1072d0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1072d4: 0xafb00000
    ctx->pc = 0x1072d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1072d8:
    // 0x1072d8: 0xc041560
    ctx->pc = 0x1072D8u;
    SET_GPR_U32(ctx, 31, 0x1072E0u);
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1072E0u; }
    }
    if (ctx->pc != 0x1072E0u) { return; }
    ctx->pc = 0x1072E0u;
    // 0x1072e0: 0x8f838168
    ctx->pc = 0x1072e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x1072e4: 0x24630001
    ctx->pc = 0x1072e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1072e8:
    // 0x1072e8: 0x24020004
    ctx->pc = 0x1072e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1072ec: 0x14620016
    ctx->pc = 0x1072ECu;
    {
        const bool branch_taken_0x1072ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1072F0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 3));
        if (branch_taken_0x1072ec) {
            ctx->pc = 0x107348u;
            goto label_107348;
        }
    }
    ctx->pc = 0x1072F4u;
    // 0x1072f4: 0x10000014
    ctx->pc = 0x1072F4u;
    {
        const bool branch_taken_0x1072f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1072F8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 0));
        if (branch_taken_0x1072f4) {
            ctx->pc = 0x107348u;
            goto label_107348;
        }
    }
    ctx->pc = 0x1072FCu;
label_1072fc:
    // 0x1072fc: 0xc6200124
    ctx->pc = 0x1072fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107300: 0x46800020
    ctx->pc = 0x107300u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107304: 0xc6210128
    ctx->pc = 0x107304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107308: 0x46800860
    ctx->pc = 0x107308u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x10730c: 0xc6230134
    ctx->pc = 0x10730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107310: 0x922b0138
    ctx->pc = 0x107310u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x107314: 0x46020002
    ctx->pc = 0x107314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107318: 0x8e280120
    ctx->pc = 0x107318u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x10731c: 0x46030842
    ctx->pc = 0x10731cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107320: 0x8e240110
    ctx->pc = 0x107320u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x107324: 0x8e250114
    ctx->pc = 0x107324u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x107328: 0x460000a4
    ctx->pc = 0x107328u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x10732c: 0x44091000
    ctx->pc = 0x10732cu;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107330: 0x8e260118
    ctx->pc = 0x107330u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x107334: 0x46000824
    ctx->pc = 0x107334u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107338: 0x440a0000
    ctx->pc = 0x107338u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x10733c: 0x8e27011c
    ctx->pc = 0x10733cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x107340: 0xc041560
    ctx->pc = 0x107340u;
    SET_GPR_U32(ctx, 31, 0x107348u);
    ctx->pc = 0x107344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107348u; }
    }
    if (ctx->pc != 0x107348u) { return; }
    ctx->pc = 0x107348u;
label_107348:
    // 0x107348: 0x26901698
    ctx->pc = 0x107348u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 5784));
    // 0x10734c: 0x3c117fff
    ctx->pc = 0x10734cu;
    SET_GPR_S32(ctx, 17, ((uint32_t)32767 << 16));
    // 0x107350: 0xc6000168
    ctx->pc = 0x107350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107354: 0x46800020
    ctx->pc = 0x107354u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107358: 0xc6020174
    ctx->pc = 0x107358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10735c: 0xc601016c
    ctx->pc = 0x10735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107360: 0x46800860
    ctx->pc = 0x107360u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107364: 0xc6030178
    ctx->pc = 0x107364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107368: 0x920b017c
    ctx->pc = 0x107368u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x10736c: 0x3631ffff
    ctx->pc = 0x10736cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)65535);
label_107370:
    // 0x107370: 0x46020002
    ctx->pc = 0x107370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107374: 0x8e040154
    ctx->pc = 0x107374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x107378: 0x46030842
    ctx->pc = 0x107378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10737c: 0x8e050158
    ctx->pc = 0x10737cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x107380: 0x8e06015c
    ctx->pc = 0x107380u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x107384: 0x460000a4
    ctx->pc = 0x107384u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107388: 0x44091000
    ctx->pc = 0x107388u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10738c: 0x8e070160
    ctx->pc = 0x10738cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x107390: 0x46000824
    ctx->pc = 0x107390u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107394: 0x440a0000
    ctx->pc = 0x107394u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107398: 0x8e080164
    ctx->pc = 0x107398u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x10739c: 0xc041560
    ctx->pc = 0x10739Cu;
    SET_GPR_U32(ctx, 31, 0x1073A4u);
    ctx->pc = 0x1073A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1073A4u; }
    }
    if (ctx->pc != 0x1073A4u) { return; }
    ctx->pc = 0x1073A4u;
    // 0x1073a4: 0xc60001ac
    ctx->pc = 0x1073a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1073a8: 0x46800020
    ctx->pc = 0x1073a8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1073ac: 0xc60201b8
    ctx->pc = 0x1073acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1073b0: 0xc60101b0
    ctx->pc = 0x1073b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1073b4: 0x46800860
    ctx->pc = 0x1073b4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1073b8: 0xc60301bc
    ctx->pc = 0x1073b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1073bc: 0x920b01c0
    ctx->pc = 0x1073bcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x1073c0: 0x46020002
    ctx->pc = 0x1073c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1073c4: 0x8e0801a8
    ctx->pc = 0x1073c4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x1073c8: 0x46030842
    ctx->pc = 0x1073c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1073cc: 0x8e040198
    ctx->pc = 0x1073ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1073d0: 0x8e05019c
    ctx->pc = 0x1073d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x1073d4: 0x460000a4
    ctx->pc = 0x1073d4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1073d8: 0x44091000
    ctx->pc = 0x1073d8u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1073dc: 0x8e0601a0
    ctx->pc = 0x1073dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1073e0: 0x46000824
    ctx->pc = 0x1073e0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1073e4: 0x440a0000
    ctx->pc = 0x1073e4u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1073e8: 0x8e0701a4
    ctx->pc = 0x1073e8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x1073ec: 0xc041560
    ctx->pc = 0x1073ECu;
    SET_GPR_U32(ctx, 31, 0x1073F4u);
    ctx->pc = 0x1073F0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1073F4u; }
    }
    if (ctx->pc != 0x1073F4u) { return; }
    ctx->pc = 0x1073F4u;
    // 0x1073f4: 0x1000011d
    ctx->pc = 0x1073F4u;
    {
        const bool branch_taken_0x1073f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1073F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x1073f4) {
            ctx->pc = 0x10786Cu;
            goto label_10786c;
        }
    }
    ctx->pc = 0x1073FCu;
label_1073fc:
    // 0x1073fc: 0xc62000e0
    ctx->pc = 0x1073fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107400: 0x46800020
    ctx->pc = 0x107400u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107404: 0xc62200ec
    ctx->pc = 0x107404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107408: 0xc62100e4
    ctx->pc = 0x107408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10740c: 0x46800860
    ctx->pc = 0x10740cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107410: 0xc62300f0
    ctx->pc = 0x107410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107414: 0x3c107fff
    ctx->pc = 0x107414u;
    SET_GPR_S32(ctx, 16, ((uint32_t)32767 << 16));
    // 0x107418: 0x922b00f4
    ctx->pc = 0x107418u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x10741c: 0x46020002
    ctx->pc = 0x10741cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107420: 0x3610ffff
    ctx->pc = 0x107420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)65535);
    // 0x107424: 0x46030842
    ctx->pc = 0x107424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107428: 0x8e2400cc
    ctx->pc = 0x107428u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10742c: 0x8e2500d0
    ctx->pc = 0x10742cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x107430: 0x460000a4
    ctx->pc = 0x107430u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107434: 0x44091000
    ctx->pc = 0x107434u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107438: 0x8e2600d4
    ctx->pc = 0x107438u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x10743c: 0x46000824
    ctx->pc = 0x10743cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107440: 0x440a0000
    ctx->pc = 0x107440u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107444: 0x8e2700d8
    ctx->pc = 0x107444u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x107448: 0x8e2800dc
    ctx->pc = 0x107448u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x10744c: 0xc041560
    ctx->pc = 0x10744Cu;
    SET_GPR_U32(ctx, 31, 0x107454u);
    ctx->pc = 0x107450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107454u; }
    }
    if (ctx->pc != 0x107454u) { return; }
    ctx->pc = 0x107454u;
    // 0x107454: 0xc6200124
    ctx->pc = 0x107454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107458: 0x46800020
    ctx->pc = 0x107458u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x10745c: 0xc6220130
    ctx->pc = 0x10745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107460: 0xc6210128
    ctx->pc = 0x107460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107464: 0x46800860
    ctx->pc = 0x107464u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107468: 0xc6230134
    ctx->pc = 0x107468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10746c: 0x922b0138
    ctx->pc = 0x10746cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x107470: 0x46020002
    ctx->pc = 0x107470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107474: 0x8e240110
    ctx->pc = 0x107474u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x107478: 0x46030842
    ctx->pc = 0x107478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10747c: 0x8e250114
    ctx->pc = 0x10747cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x107480: 0x8e260118
    ctx->pc = 0x107480u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x107484: 0x460000a4
    ctx->pc = 0x107484u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107488: 0x44091000
    ctx->pc = 0x107488u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10748c: 0x8e27011c
    ctx->pc = 0x10748cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x107490: 0x46000824
    ctx->pc = 0x107490u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107494: 0x440a0000
    ctx->pc = 0x107494u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107498: 0x8e280120
    ctx->pc = 0x107498u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x10749c: 0xc041560
    ctx->pc = 0x10749Cu;
    SET_GPR_U32(ctx, 31, 0x1074A4u);
    ctx->pc = 0x1074A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1074A4u; }
    }
    if (ctx->pc != 0x1074A4u) { return; }
    ctx->pc = 0x1074A4u;
    // 0x1074a4: 0x8f8380ac
    ctx->pc = 0x1074a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x1074a8: 0x24020001
    ctx->pc = 0x1074a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1074ac: 0x54620037
    ctx->pc = 0x1074ACu;
    {
        const bool branch_taken_0x1074ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1074ac) {
            ctx->pc = 0x1074B0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x10758Cu;
            goto label_10758c;
        }
    }
    ctx->pc = 0x1074B4u;
    // 0x1074b4: 0x8f838168
    ctx->pc = 0x1074b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x1074b8: 0x28620002
    ctx->pc = 0x1074b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x1074bc: 0x10400015
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x107514u;
            goto label_107514;
        }
    }
    ctx->pc = 0x1074C4u;
    // 0x1074c4: 0xc6200168
    ctx->pc = 0x1074c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1074c8: 0x46800020
    ctx->pc = 0x1074c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1074cc: 0xc6220174
    ctx->pc = 0x1074ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1074d0: 0xc621016c
    ctx->pc = 0x1074d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1074d4: 0x46800860
    ctx->pc = 0x1074d4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1074d8: 0xc6230178
    ctx->pc = 0x1074d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1074dc: 0x922b017c
    ctx->pc = 0x1074dcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x1074e0: 0x46020002
    ctx->pc = 0x1074e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1074e4: 0x8e280164
    ctx->pc = 0x1074e4u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1074e8: 0x46030842
    ctx->pc = 0x1074e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1074ec: 0x8e240154
    ctx->pc = 0x1074ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1074f0: 0x8e250158
    ctx->pc = 0x1074f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1074f4: 0x460000a4
    ctx->pc = 0x1074f4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1074f8: 0x44091000
    ctx->pc = 0x1074f8u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1074fc: 0x8e26015c
    ctx->pc = 0x1074fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x107500: 0x46000824
    ctx->pc = 0x107500u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107504: 0x440a0000
    ctx->pc = 0x107504u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107508: 0x8e270160
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x10750c: 0x10000016
    ctx->pc = 0x10750Cu;
    {
        const bool branch_taken_0x10750c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107510u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x10750c) {
            ctx->pc = 0x107568u;
            goto label_107568;
        }
    }
    ctx->pc = 0x107514u;
label_107514:
    // 0x107514: 0x14730018
    ctx->pc = 0x107514u;
    {
        const bool branch_taken_0x107514 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        ctx->pc = 0x107518u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x107514) {
            ctx->pc = 0x107578u;
            goto label_107578;
        }
    }
    ctx->pc = 0x10751Cu;
    // 0x10751c: 0xc6200168
    ctx->pc = 0x10751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107520: 0x46800020
    ctx->pc = 0x107520u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107524: 0xc6220174
    ctx->pc = 0x107524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107528: 0xc621016c
    ctx->pc = 0x107528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10752c: 0x46800860
    ctx->pc = 0x10752cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107530: 0xc6230178
    ctx->pc = 0x107530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107534: 0x922b017c
    ctx->pc = 0x107534u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x107538: 0x46020002
    ctx->pc = 0x107538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x10753c: 0x8e280164
    ctx->pc = 0x10753cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x107540: 0x46030842
    ctx->pc = 0x107540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107544: 0x8e240154
    ctx->pc = 0x107544u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x107548: 0x8e250158
    ctx->pc = 0x107548u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x10754c: 0x460000a4
    ctx->pc = 0x10754cu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107550: 0x44091000
    ctx->pc = 0x107550u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107554: 0x8e26015c
    ctx->pc = 0x107554u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x107558: 0x46000824
    ctx->pc = 0x107558u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x10755c: 0x440a0000
    ctx->pc = 0x10755cu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107560: 0x8e270160
    ctx->pc = 0x107560u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x107564: 0xafb00000
    ctx->pc = 0x107564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_107568:
    // 0x107568: 0xc041560
    ctx->pc = 0x107568u;
    SET_GPR_U32(ctx, 31, 0x107570u);
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107570u; }
    }
    if (ctx->pc != 0x107570u) { return; }
    ctx->pc = 0x107570u;
    // 0x107570: 0x8f838168
    ctx->pc = 0x107570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x107574: 0x24630001
    ctx->pc = 0x107574u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_107578:
    // 0x107578: 0x24020004
    ctx->pc = 0x107578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10757c: 0x14620016
    ctx->pc = 0x10757Cu;
    {
        const bool branch_taken_0x10757c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x107580u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 3));
        if (branch_taken_0x10757c) {
            ctx->pc = 0x1075D8u;
            goto label_1075d8;
        }
    }
    ctx->pc = 0x107584u;
    // 0x107584: 0x10000014
    ctx->pc = 0x107584u;
    {
        const bool branch_taken_0x107584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107588u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 0));
        if (branch_taken_0x107584) {
            ctx->pc = 0x1075D8u;
            goto label_1075d8;
        }
    }
    ctx->pc = 0x10758Cu;
label_10758c:
    // 0x10758c: 0xc6200168
    ctx->pc = 0x10758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107590: 0x46800020
    ctx->pc = 0x107590u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107594: 0xc621016c
    ctx->pc = 0x107594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107598: 0x46800860
    ctx->pc = 0x107598u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x10759c: 0xc6230178
    ctx->pc = 0x10759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1075a0: 0x922b017c
    ctx->pc = 0x1075a0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x1075a4: 0x46020002
    ctx->pc = 0x1075a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1075a8: 0x8e280164
    ctx->pc = 0x1075a8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1075ac: 0x46030842
    ctx->pc = 0x1075acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1075b0: 0x8e240154
    ctx->pc = 0x1075b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1075b4: 0x8e250158
    ctx->pc = 0x1075b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1075b8: 0x460000a4
    ctx->pc = 0x1075b8u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1075bc: 0x44091000
    ctx->pc = 0x1075bcu;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1075c0: 0x8e26015c
    ctx->pc = 0x1075c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1075c4: 0x46000824
    ctx->pc = 0x1075c4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1075c8: 0x440a0000
    ctx->pc = 0x1075c8u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1075cc: 0x8e270160
    ctx->pc = 0x1075ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1075d0: 0xc041560
    ctx->pc = 0x1075D0u;
    SET_GPR_U32(ctx, 31, 0x1075D8u);
    ctx->pc = 0x1075D4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1075D8u; }
    }
    if (ctx->pc != 0x1075D8u) { return; }
    ctx->pc = 0x1075D8u;
label_1075d8:
    // 0x1075d8: 0x26821698
    ctx->pc = 0x1075d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 5784));
    // 0x1075dc: 0x3c037fff
    ctx->pc = 0x1075dcu;
    SET_GPR_S32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x1075e0: 0xc44001ac
    ctx->pc = 0x1075e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1075e4: 0x46800020
    ctx->pc = 0x1075e4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1075e8: 0xc44201b8
    ctx->pc = 0x1075e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1075ec: 0xc44101b0
    ctx->pc = 0x1075ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1075f0: 0x46800860
    ctx->pc = 0x1075f0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1075f4: 0xc44301bc
    ctx->pc = 0x1075f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1075f8: 0x904b01c0
    ctx->pc = 0x1075f8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x1075fc: 0x3463ffff
    ctx->pc = 0x1075fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)65535);
    // 0x107600: 0x46020002
    ctx->pc = 0x107600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107604: 0x8c4801a8
    ctx->pc = 0x107604u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x107608: 0x46030842
    ctx->pc = 0x107608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10760c: 0x8c440198
    ctx->pc = 0x10760cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x107610: 0x8c45019c
    ctx->pc = 0x107610u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x107614: 0x460000a4
    ctx->pc = 0x107614u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107618: 0x44091000
    ctx->pc = 0x107618u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10761c: 0x46000824
    ctx->pc = 0x10761cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107620: 0x440a0000
    ctx->pc = 0x107620u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107624: 0x8c4601a0
    ctx->pc = 0x107624u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x107628: 0x8c4701a4
    ctx->pc = 0x107628u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x10762c: 0xc041560
    ctx->pc = 0x10762Cu;
    SET_GPR_U32(ctx, 31, 0x107634u);
    ctx->pc = 0x107630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107634u; }
    }
    if (ctx->pc != 0x107634u) { return; }
    ctx->pc = 0x107634u;
    // 0x107634: 0x1000008d
    ctx->pc = 0x107634u;
    {
        const bool branch_taken_0x107634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107638u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x107634) {
            ctx->pc = 0x10786Cu;
            goto label_10786c;
        }
    }
    ctx->pc = 0x10763Cu;
label_10763c:
    // 0x10763c: 0xc62000e0
    ctx->pc = 0x10763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107640: 0x46800020
    ctx->pc = 0x107640u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107644: 0xc62200ec
    ctx->pc = 0x107644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107648: 0xc62100e4
    ctx->pc = 0x107648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10764c: 0x46800860
    ctx->pc = 0x10764cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107650: 0xc62300f0
    ctx->pc = 0x107650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107654: 0x3c107fff
    ctx->pc = 0x107654u;
    SET_GPR_S32(ctx, 16, ((uint32_t)32767 << 16));
    // 0x107658: 0x922b00f4
    ctx->pc = 0x107658u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x10765c: 0x46020002
    ctx->pc = 0x10765cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107660: 0x3610ffff
    ctx->pc = 0x107660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)65535);
    // 0x107664: 0x46030842
    ctx->pc = 0x107664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107668: 0x8e2400cc
    ctx->pc = 0x107668u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10766c: 0x8e2500d0
    ctx->pc = 0x10766cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x107670: 0x460000a4
    ctx->pc = 0x107670u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107674: 0x44091000
    ctx->pc = 0x107674u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107678: 0x8e2600d4
    ctx->pc = 0x107678u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x10767c: 0x46000824
    ctx->pc = 0x10767cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107680: 0x440a0000
    ctx->pc = 0x107680u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107684: 0x8e2700d8
    ctx->pc = 0x107684u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x107688: 0x8e2800dc
    ctx->pc = 0x107688u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x10768c: 0xc041560
    ctx->pc = 0x10768Cu;
    SET_GPR_U32(ctx, 31, 0x107694u);
    ctx->pc = 0x107690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107694u; }
    }
    if (ctx->pc != 0x107694u) { return; }
    ctx->pc = 0x107694u;
    // 0x107694: 0xc6200124
    ctx->pc = 0x107694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107698: 0x46800020
    ctx->pc = 0x107698u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x10769c: 0xc6220130
    ctx->pc = 0x10769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1076a0: 0xc6210128
    ctx->pc = 0x1076a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1076a4: 0x46800860
    ctx->pc = 0x1076a4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1076a8: 0xc6230134
    ctx->pc = 0x1076a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1076ac: 0x922b0138
    ctx->pc = 0x1076acu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1076b0: 0x46020002
    ctx->pc = 0x1076b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1076b4: 0x8e240110
    ctx->pc = 0x1076b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x1076b8: 0x46030842
    ctx->pc = 0x1076b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1076bc: 0x8e250114
    ctx->pc = 0x1076bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x1076c0: 0x8e260118
    ctx->pc = 0x1076c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1076c4: 0x460000a4
    ctx->pc = 0x1076c4u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1076c8: 0x44091000
    ctx->pc = 0x1076c8u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1076cc: 0x8e27011c
    ctx->pc = 0x1076ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x1076d0: 0x46000824
    ctx->pc = 0x1076d0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1076d4: 0x440a0000
    ctx->pc = 0x1076d4u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1076d8: 0x8e280120
    ctx->pc = 0x1076d8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1076dc: 0xc041560
    ctx->pc = 0x1076DCu;
    SET_GPR_U32(ctx, 31, 0x1076E4u);
    ctx->pc = 0x1076E0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1076E4u; }
    }
    if (ctx->pc != 0x1076E4u) { return; }
    ctx->pc = 0x1076E4u;
    // 0x1076e4: 0xc6200168
    ctx->pc = 0x1076e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1076e8: 0x46800020
    ctx->pc = 0x1076e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1076ec: 0xc6220174
    ctx->pc = 0x1076ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1076f0: 0xc621016c
    ctx->pc = 0x1076f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1076f4: 0x46800860
    ctx->pc = 0x1076f4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1076f8: 0xc6230178
    ctx->pc = 0x1076f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1076fc: 0x922b017c
    ctx->pc = 0x1076fcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x107700: 0x46020002
    ctx->pc = 0x107700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107704: 0x8e240154
    ctx->pc = 0x107704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x107708: 0x46030842
    ctx->pc = 0x107708u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10770c: 0x8e250158
    ctx->pc = 0x10770cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x107710: 0x8e26015c
    ctx->pc = 0x107710u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x107714: 0x460000a4
    ctx->pc = 0x107714u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107718: 0x44091000
    ctx->pc = 0x107718u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10771c: 0x8e270160
    ctx->pc = 0x10771cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x107720: 0x46000824
    ctx->pc = 0x107720u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107724: 0x440a0000
    ctx->pc = 0x107724u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107728: 0x8e280164
    ctx->pc = 0x107728u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x10772c: 0xc041560
    ctx->pc = 0x10772Cu;
    SET_GPR_U32(ctx, 31, 0x107734u);
    ctx->pc = 0x107730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107734u; }
    }
    if (ctx->pc != 0x107734u) { return; }
    ctx->pc = 0x107734u;
    // 0x107734: 0x8f8380ac
    ctx->pc = 0x107734u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x107738: 0x24020001
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10773c: 0x54620037
    ctx->pc = 0x10773Cu;
    {
        const bool branch_taken_0x10773c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x10773c) {
            ctx->pc = 0x107740u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->pc = 0x10781Cu;
            goto label_10781c;
        }
    }
    ctx->pc = 0x107744u;
    // 0x107744: 0x8f838168
    ctx->pc = 0x107744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x107748: 0x28620002
    ctx->pc = 0x107748u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x10774c: 0x10400015
    ctx->pc = 0x10774Cu;
    {
        const bool branch_taken_0x10774c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x10774c) {
            ctx->pc = 0x1077A4u;
            goto label_1077a4;
        }
    }
    ctx->pc = 0x107754u;
    // 0x107754: 0xc62001ac
    ctx->pc = 0x107754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107758: 0x46800020
    ctx->pc = 0x107758u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x10775c: 0xc62201b8
    ctx->pc = 0x10775cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107760: 0xc62101b0
    ctx->pc = 0x107760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107764: 0x46800860
    ctx->pc = 0x107764u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x107768: 0xc62301bc
    ctx->pc = 0x107768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10776c: 0x922b01c0
    ctx->pc = 0x10776cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x107770: 0x46020002
    ctx->pc = 0x107770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107774: 0x8e2801a8
    ctx->pc = 0x107774u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x107778: 0x46030842
    ctx->pc = 0x107778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x10777c: 0x8e240198
    ctx->pc = 0x10777cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x107780: 0x8e25019c
    ctx->pc = 0x107780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x107784: 0x460000a4
    ctx->pc = 0x107784u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x107788: 0x44091000
    ctx->pc = 0x107788u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x10778c: 0x8e2601a0
    ctx->pc = 0x10778cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x107790: 0x46000824
    ctx->pc = 0x107790u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107794: 0x440a0000
    ctx->pc = 0x107794u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x107798: 0x8e2701a4
    ctx->pc = 0x107798u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x10779c: 0x10000016
    ctx->pc = 0x10779Cu;
    {
        const bool branch_taken_0x10779c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1077A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x10779c) {
            ctx->pc = 0x1077F8u;
            goto label_1077f8;
        }
    }
    ctx->pc = 0x1077A4u;
label_1077a4:
    // 0x1077a4: 0x14730018
    ctx->pc = 0x1077A4u;
    {
        const bool branch_taken_0x1077a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 19));
        ctx->pc = 0x1077A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1077a4) {
            ctx->pc = 0x107808u;
            goto label_107808;
        }
    }
    ctx->pc = 0x1077ACu;
    // 0x1077ac: 0xc62001ac
    ctx->pc = 0x1077acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1077b0: 0x46800020
    ctx->pc = 0x1077b0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1077b4: 0xc62201b8
    ctx->pc = 0x1077b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1077b8: 0xc62101b0
    ctx->pc = 0x1077b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1077bc: 0x46800860
    ctx->pc = 0x1077bcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1077c0: 0xc62301bc
    ctx->pc = 0x1077c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1077c4: 0x922b01c0
    ctx->pc = 0x1077c4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x1077c8: 0x46020002
    ctx->pc = 0x1077c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1077cc: 0x8e2801a8
    ctx->pc = 0x1077ccu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x1077d0: 0x46030842
    ctx->pc = 0x1077d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1077d4: 0x8e240198
    ctx->pc = 0x1077d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x1077d8: 0x8e25019c
    ctx->pc = 0x1077d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x1077dc: 0x460000a4
    ctx->pc = 0x1077dcu;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1077e0: 0x44091000
    ctx->pc = 0x1077e0u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x1077e4: 0x8e2601a0
    ctx->pc = 0x1077e4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x1077e8: 0x46000824
    ctx->pc = 0x1077e8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1077ec: 0x440a0000
    ctx->pc = 0x1077ecu;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x1077f0: 0x8e2701a4
    ctx->pc = 0x1077f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x1077f4: 0xafb00000
    ctx->pc = 0x1077f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1077f8:
    // 0x1077f8: 0xc041560
    ctx->pc = 0x1077F8u;
    SET_GPR_U32(ctx, 31, 0x107800u);
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107800u; }
    }
    if (ctx->pc != 0x107800u) { return; }
    ctx->pc = 0x107800u;
    // 0x107800: 0x8f838168
    ctx->pc = 0x107800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x107804: 0x24630001
    ctx->pc = 0x107804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_107808:
    // 0x107808: 0x24020004
    ctx->pc = 0x107808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x10780c: 0x14620016
    ctx->pc = 0x10780Cu;
    {
        const bool branch_taken_0x10780c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x107810u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 3));
        if (branch_taken_0x10780c) {
            ctx->pc = 0x107868u;
            goto label_107868;
        }
    }
    ctx->pc = 0x107814u;
    // 0x107814: 0x10000014
    ctx->pc = 0x107814u;
    {
        const bool branch_taken_0x107814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x107818u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U32(ctx, 0));
        if (branch_taken_0x107814) {
            ctx->pc = 0x107868u;
            goto label_107868;
        }
    }
    ctx->pc = 0x10781Cu;
label_10781c:
    // 0x10781c: 0xc62001ac
    ctx->pc = 0x10781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107820: 0x46800020
    ctx->pc = 0x107820u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x107824: 0xc62101b0
    ctx->pc = 0x107824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107828: 0x46800860
    ctx->pc = 0x107828u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x10782c: 0xc62301bc
    ctx->pc = 0x10782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107830: 0x922b01c0
    ctx->pc = 0x107830u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x107834: 0x46020002
    ctx->pc = 0x107834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x107838: 0x8e2801a8
    ctx->pc = 0x107838u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x10783c: 0x46030842
    ctx->pc = 0x10783cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x107840: 0x8e240198
    ctx->pc = 0x107840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x107844: 0x8e25019c
    ctx->pc = 0x107844u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x107848: 0x460000a4
    ctx->pc = 0x107848u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x10784c: 0x44091000
    ctx->pc = 0x10784cu;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[2]);
    // 0x107850: 0x8e2601a0
    ctx->pc = 0x107850u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x107854: 0x46000824
    ctx->pc = 0x107854u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x107858: 0x440a0000
    ctx->pc = 0x107858u;
    SET_GPR_U32(ctx, 10, *(uint32_t*)&ctx->f[0]);
    // 0x10785c: 0x8e2701a4
    ctx->pc = 0x10785cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x107860: 0xc041560
    ctx->pc = 0x107860u;
    SET_GPR_U32(ctx, 31, 0x107868u);
    ctx->pc = 0x107864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x105580u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw32bitImage_0x105580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107868u; }
    }
    if (ctx->pc != 0x107868u) { return; }
    ctx->pc = 0x107868u;
label_107868:
    // 0x107868: 0xdfbf0060
    ctx->pc = 0x107868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10786c:
    // 0x10786c: 0xdfb40050
    ctx->pc = 0x10786cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_107870:
    // 0x107870: 0xdfb30040
    ctx->pc = 0x107870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107874: 0xdfb20030
    ctx->pc = 0x107874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107878: 0xdfb10020
    ctx->pc = 0x107878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10787c: 0xdfb00010
    ctx->pc = 0x10787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107880: 0x3e00008
    ctx->pc = 0x107880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107884u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x106FECu: goto label_106fec;
            case 0x107008u: goto label_107008;
            case 0x107074u: goto label_107074;
            case 0x1070D0u: goto label_1070d0;
            case 0x1070E0u: goto label_1070e0;
            case 0x1070F4u: goto label_1070f4;
            case 0x107140u: goto label_107140;
            case 0x1071BCu: goto label_1071bc;
            case 0x107284u: goto label_107284;
            case 0x1072D8u: goto label_1072d8;
            case 0x1072E8u: goto label_1072e8;
            case 0x1072FCu: goto label_1072fc;
            case 0x107348u: goto label_107348;
            case 0x107370u: goto label_107370;
            case 0x1073FCu: goto label_1073fc;
            case 0x107514u: goto label_107514;
            case 0x107568u: goto label_107568;
            case 0x107578u: goto label_107578;
            case 0x10758Cu: goto label_10758c;
            case 0x1075D8u: goto label_1075d8;
            case 0x10763Cu: goto label_10763c;
            case 0x1077A4u: goto label_1077a4;
            case 0x1077F8u: goto label_1077f8;
            case 0x107808u: goto label_107808;
            case 0x10781Cu: goto label_10781c;
            case 0x107868u: goto label_107868;
            case 0x10786Cu: goto label_10786c;
            case 0x107870u: goto label_107870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107888u;
}
