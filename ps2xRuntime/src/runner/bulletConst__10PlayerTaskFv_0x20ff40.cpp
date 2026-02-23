#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: bulletConst__10PlayerTaskFv
// Address: 0x20ff40 - 0x21029c
void bulletConst__10PlayerTaskFv_0x20ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("bulletConst__10PlayerTaskFv");


    ctx->pc = 0x20ff40u;

    // 0x20ff40: 0x27bdff80
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20ff44: 0x7fbf0040
    ctx->pc = 0x20ff44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x20ff48: 0x7fb30030
    ctx->pc = 0x20ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20ff4c: 0x7fb20020
    ctx->pc = 0x20ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20ff50: 0x7fb10010
    ctx->pc = 0x20ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ff54: 0x7fb00000
    ctx->pc = 0x20ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ff58: 0x8f828be4
    ctx->pc = 0x20ff58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x20ff5c: 0x70808628
    ctx->pc = 0x20ff5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20ff60: 0x4410004
    ctx->pc = 0x20FF60u;
    {
        const bool branch_taken_0x20ff60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20FF64u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x20ff60) {
            ctx->pc = 0x20FF74u;
            goto label_20ff74;
        }
    }
    ctx->pc = 0x20FF68u;
    // 0x20ff68: 0x12400002
    ctx->pc = 0x20FF68u;
    {
        const bool branch_taken_0x20ff68 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ff68) {
            ctx->pc = 0x20FF74u;
            goto label_20ff74;
        }
    }
    ctx->pc = 0x20FF70u;
    // 0x20ff70: 0x2652fffc
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
label_20ff74:
    // 0x20ff74: 0x3c010050
    ctx->pc = 0x20ff74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20ff78: 0x8423e504
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20ff7c: 0x2402000a
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20ff80: 0x1462000a
    ctx->pc = 0x20FF80u;
    {
        const bool branch_taken_0x20ff80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20FF84u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ff80) {
            ctx->pc = 0x20FFACu;
            goto label_20ffac;
        }
    }
    ctx->pc = 0x20FF88u;
    // 0x20ff88: 0x8f838bcc
    ctx->pc = 0x20ff88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20ff8c: 0x24020001
    ctx->pc = 0x20ff8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ff90: 0x14620005
    ctx->pc = 0x20FF90u;
    {
        const bool branch_taken_0x20ff90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20ff90) {
            ctx->pc = 0x20FFA8u;
            goto label_20ffa8;
        }
    }
    ctx->pc = 0x20FF98u;
    // 0x20ff98: 0x8f828cb0
    ctx->pc = 0x20ff98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20ff9c: 0x30420010
    ctx->pc = 0x20ff9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x20ffa0: 0x10400004
    ctx->pc = 0x20FFA0u;
    {
        const bool branch_taken_0x20ffa0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ffa0) {
            ctx->pc = 0x20FFB4u;
            goto label_20ffb4;
        }
    }
    ctx->pc = 0x20FFA8u;
label_20ffa8:
    // 0x20ffa8: 0x70009e28
    ctx->pc = 0x20ffa8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ffac:
    // 0x20ffac: 0x10000011
    ctx->pc = 0x20FFACu;
    {
        const bool branch_taken_0x20ffac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FFB0u;
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7360)));
        if (branch_taken_0x20ffac) {
            ctx->pc = 0x20FFF4u;
            goto label_20fff4;
        }
    }
    ctx->pc = 0x20FFB4u;
label_20ffb4:
    // 0x20ffb4: 0x8e041cbc
    ctx->pc = 0x20ffb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20ffb8: 0x3c020050
    ctx->pc = 0x20ffb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20ffbc: 0x2443fc80
    ctx->pc = 0x20ffbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294966400));
    // 0x20ffc0: 0x24020008
    ctx->pc = 0x20ffc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ffc4: 0x8c840000
    ctx->pc = 0x20ffc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ffc8: 0x42080
    ctx->pc = 0x20ffc8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ffcc: 0x641821
    ctx->pc = 0x20ffccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ffd0: 0x80730000
    ctx->pc = 0x20ffd0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ffd4: 0x16620006
    ctx->pc = 0x20FFD4u;
    {
        const bool branch_taken_0x20ffd4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x20FFD8u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x20ffd4) {
            ctx->pc = 0x20FFF0u;
            goto label_20fff0;
        }
    }
    ctx->pc = 0x20FFDCu;
    // 0x20ffdc: 0x8c22fcf4
    ctx->pc = 0x20ffdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294966516)));
    // 0x20ffe0: 0x28410005
    ctx->pc = 0x20ffe0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x20ffe4: 0x10200002
    ctx->pc = 0x20FFE4u;
    {
        const bool branch_taken_0x20ffe4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ffe4) {
            ctx->pc = 0x20FFF0u;
            goto label_20fff0;
        }
    }
    ctx->pc = 0x20FFECu;
    // 0x20ffec: 0x70009e28
    ctx->pc = 0x20ffecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20fff0:
    // 0x20fff0: 0x86071cc0
    ctx->pc = 0x20fff0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7360)));
label_20fff4:
    // 0x20fff4: 0x3c02bd4d
    ctx->pc = 0x20fff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48461 << 16));
    // 0x20fff8: 0x8e051cbc
    ctx->pc = 0x20fff8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20fffc: 0x24040001
    ctx->pc = 0x20fffcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210000: 0x3c03bf80
    ctx->pc = 0x210000u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x210004: 0x344235a8
    ctx->pc = 0x210004u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13736));
    // 0x210008: 0x73040
    ctx->pc = 0x210008u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 1));
    // 0x21000c: 0xc73021
    ctx->pc = 0x21000cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x210010: 0x63080
    ctx->pc = 0x210010u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x210014: 0xc73021
    ctx->pc = 0x210014u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x210018: 0x63080
    ctx->pc = 0x210018u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x21001c: 0xa63821
    ctx->pc = 0x21001cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x210020: 0xa4e40208
    ctx->pc = 0x210020u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 520), (uint16_t)GPR_U32(ctx, 4));
    // 0x210024: 0xace00230
    ctx->pc = 0x210024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 560), GPR_U32(ctx, 0));
    // 0x210028: 0x8e061cbc
    ctx->pc = 0x210028u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x21002c: 0x24f10208
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 7), 520));
    // 0x210030: 0xc7808c50
    ctx->pc = 0x210030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210034: 0x26240010
    ctx->pc = 0x210034u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x210038: 0xc4c1001c
    ctx->pc = 0x210038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21003c: 0x46000803
    ctx->pc = 0x21003cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x210040: 0xe4e0020c
    ctx->pc = 0x210040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 524), bits); }
    // 0x210044: 0x8e061cbc
    ctx->pc = 0x210044u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x210048: 0xc7808c50
    ctx->pc = 0x210048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21004c: 0xc4c10020
    ctx->pc = 0x21004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210050: 0x46000803
    ctx->pc = 0x210050u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x210054: 0xe4e00210
    ctx->pc = 0x210054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 528), bits); }
    // 0x210058: 0xace30214
    ctx->pc = 0x210058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 532), GPR_U32(ctx, 3));
    // 0x21005c: 0xc4e30214
    ctx->pc = 0x21005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x210060: 0xc4e0020c
    ctx->pc = 0x210060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210064: 0xc4e10210
    ctx->pc = 0x210064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210068: 0x46030083
    ctx->pc = 0x210068u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[3];
    // 0x21006c: 0xace20214
    ctx->pc = 0x21006cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 532), GPR_U32(ctx, 2));
    // 0x210070: 0xc4e00214
    ctx->pc = 0x210070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210074: 0x46030843
    ctx->pc = 0x210074u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x210078: 0x46001002
    ctx->pc = 0x210078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21007c: 0xe4e0020c
    ctx->pc = 0x21007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 524), bits); }
    // 0x210080: 0xc4e00214
    ctx->pc = 0x210080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210084: 0x46000802
    ctx->pc = 0x210084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210088: 0xe4e00210
    ctx->pc = 0x210088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 528), bits); }
    // 0x21008c: 0xc4ec020c
    ctx->pc = 0x21008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210090: 0xc4ed0210
    ctx->pc = 0x210090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x210094: 0xc4ee0214
    ctx->pc = 0x210094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x210098: 0xc072348
    ctx->pc = 0x210098u;
    SET_GPR_U32(ctx, 31, 0x2100A0u);
    ctx->pc = 0x21009Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 20));
    ctx->pc = 0x1C8D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAngleYX__FfffPiPi_0x1c8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2100A0u; }
        else if (ctx->pc != 0x2100A0u) { ctx->pc = 0x2100A0u; }
    }
    if (ctx->pc != 0x2100A0u) { return; }
    ctx->pc = 0x2100A0u;
    // 0x2100a0: 0x8e230014
    ctx->pc = 0x2100a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2100a4: 0x24020001
    ctx->pc = 0x2100a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2100a8: 0x24637fff
    ctx->pc = 0x2100a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32767));
    // 0x2100ac: 0x24630001
    ctx->pc = 0x2100acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2100b0: 0xae230014
    ctx->pc = 0x2100b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2100b4: 0x8e230010
    ctx->pc = 0x2100b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2100b8: 0x31823
    ctx->pc = 0x2100b8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2100bc: 0xae230010
    ctx->pc = 0x2100bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2100c0: 0xae33002c
    ctx->pc = 0x2100c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x2100c4: 0xae320030
    ctx->pc = 0x2100c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
    // 0x2100c8: 0x86051cc0
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7360)));
    // 0x2100cc: 0x8e031cbc
    ctx->pc = 0x2100ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x2100d0: 0x52040
    ctx->pc = 0x2100d0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2100d4: 0x852021
    ctx->pc = 0x2100d4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2100d8: 0x42080
    ctx->pc = 0x2100d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2100dc: 0x852021
    ctx->pc = 0x2100dcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2100e0: 0x42080
    ctx->pc = 0x2100e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2100e4: 0x641821
    ctx->pc = 0x2100e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2100e8: 0xa46200d0
    ctx->pc = 0x2100e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 208), (uint16_t)GPR_U32(ctx, 2));
    // 0x2100ec: 0xac6000f8
    ctx->pc = 0x2100ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 0));
    // 0x2100f0: 0x247100d0
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 208));
    // 0x2100f4: 0x4bede37d
    ctx->pc = 0x2100f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x2100f8: 0x4bedeb7d
    ctx->pc = 0x2100f8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x2100fc: 0x4bedf37d
    ctx->pc = 0x2100fcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x210100: 0x4bedfb7d
    ctx->pc = 0x210100u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x210104: 0x8f848c48
    ctx->pc = 0x210104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x210108: 0x8c830004
    ctx->pc = 0x210108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21010c: 0x31040
    ctx->pc = 0x21010cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x210110: 0x431021
    ctx->pc = 0x210110u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210114: 0x21080
    ctx->pc = 0x210114u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x210118: 0x431021
    ctx->pc = 0x210118u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21011c: 0x21100
    ctx->pc = 0x21011cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x210120: 0x821021
    ctx->pc = 0x210120u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210124: 0xc06c038
    ctx->pc = 0x210124u;
    SET_GPR_U32(ctx, 31, 0x21012Cu);
    ctx->pc = 0x210128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21012Cu; }
        else if (ctx->pc != 0x21012Cu) { ctx->pc = 0x21012Cu; }
    }
    if (ctx->pc != 0x21012Cu) { return; }
    ctx->pc = 0x21012Cu;
    // 0x21012c: 0x8e031cbc
    ctx->pc = 0x21012cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x210130: 0xc7818c50
    ctx->pc = 0x210130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210134: 0x3c02bf80
    ctx->pc = 0x210134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x210138: 0x27a40050
    ctx->pc = 0x210138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21013c: 0x27a50060
    ctx->pc = 0x21013cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x210140: 0xc460001c
    ctx->pc = 0x210140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210144: 0x46010003
    ctx->pc = 0x210144u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x210148: 0xe7a00050
    ctx->pc = 0x210148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21014c: 0x8e031cbc
    ctx->pc = 0x21014cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x210150: 0xc4600020
    ctx->pc = 0x210150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210154: 0x46010003
    ctx->pc = 0x210154u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x210158: 0x0
    ctx->pc = 0x210158u;
    // NOP
    // 0x21015c: 0xe7a00054
    ctx->pc = 0x21015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x210160: 0xc06bf00
    ctx->pc = 0x210160u;
    SET_GPR_U32(ctx, 31, 0x210168u);
    ctx->pc = 0x210164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210168u; }
        else if (ctx->pc != 0x210168u) { ctx->pc = 0x210168u; }
    }
    if (ctx->pc != 0x210168u) { return; }
    ctx->pc = 0x210168u;
    // 0x210168: 0xc7a00060
    ctx->pc = 0x210168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21016c: 0xe6200004
    ctx->pc = 0x21016cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x210170: 0xc7a00064
    ctx->pc = 0x210170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210174: 0xe6200008
    ctx->pc = 0x210174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x210178: 0xc7a00068
    ctx->pc = 0x210178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21017c: 0xe620000c
    ctx->pc = 0x21017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x210180: 0x4bff6b7e
    ctx->pc = 0x210180u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x210184: 0x4bfe6b7e
    ctx->pc = 0x210184u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x210188: 0x4bfd6b7e
    ctx->pc = 0x210188u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21018c: 0x4bfc6b7e
    ctx->pc = 0x21018cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x210190: 0x8f828c48
    ctx->pc = 0x210190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x210194: 0xc6200004
    ctx->pc = 0x210194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210198: 0x27a40070
    ctx->pc = 0x210198u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x21019c: 0x2625001c
    ctx->pc = 0x21019cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 28));
    // 0x2101a0: 0x8c460004
    ctx->pc = 0x2101a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2101a4: 0x61840
    ctx->pc = 0x2101a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x2101a8: 0x661821
    ctx->pc = 0x2101a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2101ac: 0x31880
    ctx->pc = 0x2101acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2101b0: 0x661821
    ctx->pc = 0x2101b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2101b4: 0x31900
    ctx->pc = 0x2101b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2101b8: 0x621821
    ctx->pc = 0x2101b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2101bc: 0xc4610090
    ctx->pc = 0x2101bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2101c0: 0x46010001
    ctx->pc = 0x2101c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2101c4: 0xe7a00070
    ctx->pc = 0x2101c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2101c8: 0x8c460004
    ctx->pc = 0x2101c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2101cc: 0xc6200008
    ctx->pc = 0x2101ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2101d0: 0x61840
    ctx->pc = 0x2101d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x2101d4: 0x661821
    ctx->pc = 0x2101d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2101d8: 0x31880
    ctx->pc = 0x2101d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2101dc: 0x661821
    ctx->pc = 0x2101dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2101e0: 0x31900
    ctx->pc = 0x2101e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2101e4: 0x621821
    ctx->pc = 0x2101e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2101e8: 0xc4610094
    ctx->pc = 0x2101e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2101ec: 0x46010001
    ctx->pc = 0x2101ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2101f0: 0xe7a00074
    ctx->pc = 0x2101f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2101f4: 0x8c460004
    ctx->pc = 0x2101f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2101f8: 0xc620000c
    ctx->pc = 0x2101f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2101fc: 0x61840
    ctx->pc = 0x2101fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x210200: 0x661821
    ctx->pc = 0x210200u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x210204: 0x31880
    ctx->pc = 0x210204u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x210208: 0x661821
    ctx->pc = 0x210208u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x21020c: 0x31900
    ctx->pc = 0x21020cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x210210: 0x621021
    ctx->pc = 0x210210u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210214: 0xc4410098
    ctx->pc = 0x210214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210218: 0x46010001
    ctx->pc = 0x210218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21021c: 0xc06be8f
    ctx->pc = 0x21021Cu;
    SET_GPR_U32(ctx, 31, 0x210224u);
    ctx->pc = 0x210220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->pc = 0x1AFA3Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFA3C_0x1afa3c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210224u; }
        else if (ctx->pc != 0x210224u) { ctx->pc = 0x210224u; }
    }
    if (ctx->pc != 0x210224u) { return; }
    ctx->pc = 0x210224u;
    // 0x210224: 0xc620001c
    ctx->pc = 0x210224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210228: 0x3c0341a0
    ctx->pc = 0x210228u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16800 << 16));
    // 0x21022c: 0x44830800
    ctx->pc = 0x21022cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x210230: 0x0
    ctx->pc = 0x210230u;
    // NOP
    // 0x210234: 0x46010002
    ctx->pc = 0x210234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210238: 0xe620001c
    ctx->pc = 0x210238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x21023c: 0xc6200020
    ctx->pc = 0x21023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210240: 0x46010002
    ctx->pc = 0x210240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210244: 0xe6200020
    ctx->pc = 0x210244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x210248: 0xc6200024
    ctx->pc = 0x210248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21024c: 0x46010002
    ctx->pc = 0x21024cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x210250: 0xe6200024
    ctx->pc = 0x210250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x210254: 0xae33002c
    ctx->pc = 0x210254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x210258: 0xae320030
    ctx->pc = 0x210258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
    // 0x21025c: 0x86031cc0
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7360)));
    // 0x210260: 0x24630001
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x210264: 0xa6031cc0
    ctx->pc = 0x210264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7360), (uint16_t)GPR_U32(ctx, 3));
    // 0x210268: 0x31c3c
    ctx->pc = 0x210268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x21026c: 0x31c3f
    ctx->pc = 0x21026cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210270: 0x28630006
    ctx->pc = 0x210270u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 6));
    // 0x210274: 0x14600002
    ctx->pc = 0x210274u;
    {
        const bool branch_taken_0x210274 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x210274) {
            ctx->pc = 0x210280u;
            goto label_210280;
        }
    }
    ctx->pc = 0x21027Cu;
    // 0x21027c: 0xa6001cc0
    ctx->pc = 0x21027cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7360), (uint16_t)GPR_U32(ctx, 0));
label_210280:
    // 0x210280: 0x7bbf0040
    ctx->pc = 0x210280u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210284: 0x7bb30030
    ctx->pc = 0x210284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210288: 0x7bb20020
    ctx->pc = 0x210288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21028c: 0x7bb10010
    ctx->pc = 0x21028cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210290: 0x7bb00000
    ctx->pc = 0x210290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210294: 0x3e00008
    ctx->pc = 0x210294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FF74u: goto label_20ff74;
            case 0x20FFA8u: goto label_20ffa8;
            case 0x20FFACu: goto label_20ffac;
            case 0x20FFB4u: goto label_20ffb4;
            case 0x20FFF0u: goto label_20fff0;
            case 0x20FFF4u: goto label_20fff4;
            case 0x210280u: goto label_210280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21029Cu;
}
