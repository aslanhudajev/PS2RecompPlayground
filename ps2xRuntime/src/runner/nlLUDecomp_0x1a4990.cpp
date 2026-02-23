#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLUDecomp
// Address: 0x1a4990 - 0x1a4bd0
void nlLUDecomp_0x1a4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLUDecomp");


    ctx->pc = 0x1a4990u;

    // 0x1a4990: 0x27bdff70
    ctx->pc = 0x1a4990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a4994: 0x7fbf0030
    ctx->pc = 0x1a4994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1a4998: 0x7fb10020
    ctx->pc = 0x1a4998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a499c: 0x7fb00010
    ctx->pc = 0x1a499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a49a0: 0xe7b40000
    ctx->pc = 0x1a49a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a49a4: 0x70a08628
    ctx->pc = 0x1a49a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a49a8: 0x14800004
    ctx->pc = 0x1A49A8u;
    {
        const bool branch_taken_0x1a49a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A49ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a49a8) {
            ctx->pc = 0x1A49BCu;
            goto label_1a49bc;
        }
    }
    ctx->pc = 0x1A49B0u;
    // 0x1a49b0: 0xc06bf55
    ctx->pc = 0x1A49B0u;
    SET_GPR_U32(ctx, 31, 0x1A49B8u);
    ctx->pc = 0x1A49B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49B8u; }
        else if (ctx->pc != 0x1A49B8u) { ctx->pc = 0x1A49B8u; }
    }
    if (ctx->pc != 0x1A49B8u) { return; }
    ctx->pc = 0x1A49B8u;
    // 0x1a49b8: 0x70402628
    ctx->pc = 0x1a49b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a49bc:
    // 0x1a49bc: 0x4480a000
    ctx->pc = 0x1a49bcu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x1a49c0: 0x70002e28
    ctx->pc = 0x1a49c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a49c4: 0x70803e28
    ctx->pc = 0x1a49c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a49c8: 0x27a80040
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a49cc: 0x3c023f80
    ctx->pc = 0x1a49ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a49d0: 0x44821000
    ctx->pc = 0x1a49d0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1a49d4:
    // 0x1a49d4: 0x2051021
    ctx->pc = 0x1a49d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1a49d8: 0x44800000
    ctx->pc = 0x1a49d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a49dc: 0xa0450000
    ctx->pc = 0x1a49dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a49e0: 0x70001e28
    ctx->pc = 0x1a49e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a49e4: 0x70e03628
    ctx->pc = 0x1a49e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_1a49e8:
    // 0x1a49e8: 0xc4c10000
    ctx->pc = 0x1a49e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a49ec: 0x46000845
    ctx->pc = 0x1a49ecu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1a49f0: 0x46000836
    ctx->pc = 0x1a49f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a49f4: 0x0
    ctx->pc = 0x1a49f4u;
    // NOP
    // 0x1a49f8: 0x45030004
    ctx->pc = 0x1A49F8u;
    {
        const bool branch_taken_0x1a49f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a49f8) {
            ctx->pc = 0x1A49FCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1A4A0Cu;
            goto label_1a4a0c;
        }
    }
    ctx->pc = 0x1A4A00u;
    // 0x1a4a00: 0x46000806
    ctx->pc = 0x1a4a00u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x1a4a04: 0x0
    ctx->pc = 0x1a4a04u;
    // NOP
    // 0x1a4a08: 0x24630001
    ctx->pc = 0x1a4a08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1a4a0c:
    // 0x1a4a0c: 0x28620004
    ctx->pc = 0x1a4a0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x1a4a10: 0x1440fff5
    ctx->pc = 0x1A4A10u;
    {
        const bool branch_taken_0x1a4a10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4A14u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1a4a10) {
            ctx->pc = 0x1A49E8u;
            goto label_1a49e8;
        }
    }
    ctx->pc = 0x1A4A18u;
    // 0x1a4a18: 0x4600a032
    ctx->pc = 0x1a4a18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4a1c: 0x0
    ctx->pc = 0x1a4a1cu;
    // NOP
    // 0x1a4a20: 0x45030065
    ctx->pc = 0x1A4A20u;
    {
        const bool branch_taken_0x1a4a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4a20) {
            ctx->pc = 0x1A4A24u;
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x1A4BB8u;
            goto label_1a4bb8;
        }
    }
    ctx->pc = 0x1A4A28u;
    // 0x1a4a28: 0x0
    ctx->pc = 0x1a4a28u;
    // NOP
    // 0x1a4a2c: 0x0
    ctx->pc = 0x1a4a2cu;
    // NOP
    // 0x1a4a30: 0x46001003
    ctx->pc = 0x1a4a30u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x1a4a34: 0x24a50001
    ctx->pc = 0x1a4a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a4a38: 0x28a20004
    ctx->pc = 0x1a4a38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x1a4a3c: 0x24e70010
    ctx->pc = 0x1a4a3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a4a40: 0xe5000000
    ctx->pc = 0x1a4a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1a4a44: 0x1440ffe3
    ctx->pc = 0x1A4A44u;
    {
        const bool branch_taken_0x1a4a44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4A48u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x1a4a44) {
            ctx->pc = 0x1A49D4u;
            goto label_1a49d4;
        }
    }
    ctx->pc = 0x1A4A4Cu;
    // 0x1a4a4c: 0x46001506
    ctx->pc = 0x1a4a4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x1a4a50: 0x70003e28
    ctx->pc = 0x1a4a50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a4a54: 0x70802e28
    ctx->pc = 0x1a4a54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a4a58: 0x70003628
    ctx->pc = 0x1a4a58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a4a5c: 0x44801000
    ctx->pc = 0x1a4a5cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1a4a60: 0x3c02bf80
    ctx->pc = 0x1a4a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
label_1a4a64:
    // 0x1a4a64: 0x44821800
    ctx->pc = 0x1a4a64u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1a4a68: 0x28e10004
    ctx->pc = 0x1a4a68u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 4));
    // 0x1a4a6c: 0x10200016
    ctx->pc = 0x1A4A6Cu;
    {
        const bool branch_taken_0x1a4a6c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4A70u;
        SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a4a6c) {
            ctx->pc = 0x1A4AC8u;
            goto label_1a4ac8;
        }
    }
    ctx->pc = 0x1A4A74u;
    // 0x1a4a74: 0x0
    ctx->pc = 0x1a4a74u;
    // NOP
    // 0x1a4a78: 0x20a4021
    ctx->pc = 0x1a4a78u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
label_1a4a7c:
    // 0x1a4a7c: 0x81090000
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a4a80: 0x94100
    ctx->pc = 0x1a4a80u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 4));
    // 0x1a4a84: 0xa84021
    ctx->pc = 0x1a4a84u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a4a88: 0xc5010000
    ctx->pc = 0x1a4a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4a8c: 0x94080
    ctx->pc = 0x1a4a8cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a4a90: 0x11d4021
    ctx->pc = 0x1a4a90u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1a4a94: 0xc5000040
    ctx->pc = 0x1a4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4a98: 0x46000845
    ctx->pc = 0x1a4a98u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1a4a9c: 0x46010002
    ctx->pc = 0x1a4a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4aa0: 0x46030036
    ctx->pc = 0x1a4aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4aa4: 0x0
    ctx->pc = 0x1a4aa4u;
    // NOP
    // 0x1a4aa8: 0x45030004
    ctx->pc = 0x1A4AA8u;
    {
        const bool branch_taken_0x1a4aa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4aa8) {
            ctx->pc = 0x1A4AACu;
            SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x1A4ABCu;
            goto label_1a4abc;
        }
    }
    ctx->pc = 0x1A4AB0u;
    // 0x1a4ab0: 0x460000c6
    ctx->pc = 0x1a4ab0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1a4ab4: 0x71401e28
    ctx->pc = 0x1a4ab4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1a4ab8: 0x254a0001
    ctx->pc = 0x1a4ab8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_1a4abc:
    // 0x1a4abc: 0x29480004
    ctx->pc = 0x1a4abcu;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 10), 4));
    // 0x1a4ac0: 0x1500ffee
    ctx->pc = 0x1A4AC0u;
    {
        const bool branch_taken_0x1a4ac0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4AC4u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
        if (branch_taken_0x1a4ac0) {
            ctx->pc = 0x1A4A7Cu;
            goto label_1a4a7c;
        }
    }
    ctx->pc = 0x1A4AC8u;
label_1a4ac8:
    // 0x1a4ac8: 0x2035021
    ctx->pc = 0x1a4ac8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a4acc: 0x10670006
    ctx->pc = 0x1A4ACCu;
    {
        const bool branch_taken_0x1a4acc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 7));
        ctx->pc = 0x1A4AD0u;
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
        if (branch_taken_0x1a4acc) {
            ctx->pc = 0x1A4AE8u;
            goto label_1a4ae8;
        }
    }
    ctx->pc = 0x1A4AD4u;
    // 0x1a4ad4: 0x2075821
    ctx->pc = 0x1a4ad4u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a4ad8: 0x81680000
    ctx->pc = 0x1a4ad8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1a4adc: 0x4600a507
    ctx->pc = 0x1a4adcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x1a4ae0: 0xa1480000
    ctx->pc = 0x1a4ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1a4ae4: 0xa1690000
    ctx->pc = 0x1a4ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 9));
label_1a4ae8:
    // 0x1a4ae8: 0x94100
    ctx->pc = 0x1a4ae8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 4));
    // 0x1a4aec: 0x885821
    ctx->pc = 0x1a4aecu;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1a4af0: 0x1664021
    ctx->pc = 0x1a4af0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1a4af4: 0xc5030000
    ctx->pc = 0x1a4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4af8: 0x46031032
    ctx->pc = 0x1a4af8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4afc: 0x0
    ctx->pc = 0x1a4afcu;
    // NOP
    // 0x1a4b00: 0x4501002c
    ctx->pc = 0x1A4B00u;
    {
        const bool branch_taken_0x1a4b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B04u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
        if (branch_taken_0x1a4b00) {
            ctx->pc = 0x1A4BB4u;
            goto label_1a4bb4;
        }
    }
    ctx->pc = 0x1A4B08u;
    // 0x1a4b08: 0x24ec0001
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a4b0c: 0x29810004
    ctx->pc = 0x1a4b0cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 12), 4));
    // 0x1a4b10: 0x50200020
    ctx->pc = 0x1A4B10u;
    {
        const bool branch_taken_0x1a4b10 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a4b10) {
            ctx->pc = 0x1A4B14u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x1A4B94u;
            goto label_1a4b94;
        }
    }
    ctx->pc = 0x1A4B18u;
    // 0x1a4b18: 0x20c1821
    ctx->pc = 0x1a4b18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
label_1a4b1c:
    // 0x1a4b1c: 0x80680000
    ctx->pc = 0x1a4b1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4b20: 0x84900
    ctx->pc = 0x1a4b20u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a4b24: 0xa94021
    ctx->pc = 0x1a4b24u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1a4b28: 0xc5000000
    ctx->pc = 0x1a4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4b2c: 0x24e30001
    ctx->pc = 0x1a4b2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a4b30: 0x46030103
    ctx->pc = 0x1a4b30u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[3];
    // 0x1a4b34: 0x0
    ctx->pc = 0x1a4b34u;
    // NOP
    // 0x1a4b38: 0x28610004
    ctx->pc = 0x1a4b38u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 4));
    // 0x1a4b3c: 0x10200010
    ctx->pc = 0x1A4B3Cu;
    {
        const bool branch_taken_0x1a4b3c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4B40u;
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        if (branch_taken_0x1a4b3c) {
            ctx->pc = 0x1A4B80u;
            goto label_1a4b80;
        }
    }
    ctx->pc = 0x1A4B44u;
    // 0x1a4b44: 0x894021
    ctx->pc = 0x1a4b44u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1a4b48: 0x34880
    ctx->pc = 0x1a4b48u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4b4c: 0x1095021
    ctx->pc = 0x1a4b4cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1a4b50: 0x1694821
    ctx->pc = 0x1a4b50u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1a4b54: 0x0
    ctx->pc = 0x1a4b54u;
    // NOP
label_1a4b58:
    // 0x1a4b58: 0xc5210000
    ctx->pc = 0x1a4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4b5c: 0x24630001
    ctx->pc = 0x1a4b5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4b60: 0xc5400000
    ctx->pc = 0x1a4b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4b64: 0x28680004
    ctx->pc = 0x1a4b64u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 3), 4));
    // 0x1a4b68: 0x46012042
    ctx->pc = 0x1a4b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a4b6c: 0x25290004
    ctx->pc = 0x1a4b6cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x1a4b70: 0x46010001
    ctx->pc = 0x1a4b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a4b74: 0xe5400000
    ctx->pc = 0x1a4b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x1a4b78: 0x1500fff7
    ctx->pc = 0x1A4B78u;
    {
        const bool branch_taken_0x1a4b78 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4B7Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
        if (branch_taken_0x1a4b78) {
            ctx->pc = 0x1A4B58u;
            goto label_1a4b58;
        }
    }
    ctx->pc = 0x1A4B80u;
label_1a4b80:
    // 0x1a4b80: 0x258c0001
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
    // 0x1a4b84: 0x29880004
    ctx->pc = 0x1a4b84u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 12), 4));
    // 0x1a4b88: 0x5500ffe4
    ctx->pc = 0x1A4B88u;
    {
        const bool branch_taken_0x1a4b88 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a4b88) {
            ctx->pc = 0x1A4B8Cu;
            SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
            ctx->pc = 0x1A4B1Cu;
            goto label_1a4b1c;
        }
    }
    ctx->pc = 0x1A4B90u;
    // 0x1a4b90: 0x24e70001
    ctx->pc = 0x1a4b90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_1a4b94:
    // 0x1a4b94: 0x28e80004
    ctx->pc = 0x1a4b94u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 7), 4));
    // 0x1a4b98: 0x24a50004
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a4b9c: 0x1500ffb1
    ctx->pc = 0x1A4B9Cu;
    {
        const bool branch_taken_0x1a4b9c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A4BA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1a4b9c) {
            ctx->pc = 0x1A4A64u;
            goto label_1a4a64;
        }
    }
    ctx->pc = 0x1A4BA4u;
    // 0x1a4ba4: 0x16200003
    ctx->pc = 0x1A4BA4u;
    {
        const bool branch_taken_0x1a4ba4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a4ba4) {
            ctx->pc = 0x1A4BB4u;
            goto label_1a4bb4;
        }
    }
    ctx->pc = 0x1A4BACu;
    // 0x1a4bac: 0xc06c038
    ctx->pc = 0x1A4BACu;
    SET_GPR_U32(ctx, 31, 0x1A4BB4u);
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BB4u; }
        else if (ctx->pc != 0x1A4BB4u) { ctx->pc = 0x1A4BB4u; }
    }
    if (ctx->pc != 0x1A4BB4u) { return; }
    ctx->pc = 0x1A4BB4u;
label_1a4bb4:
    // 0x1a4bb4: 0x4600a006
    ctx->pc = 0x1a4bb4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a4bb8:
    // 0x1a4bb8: 0x7bbf0030
    ctx->pc = 0x1a4bb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4bbc: 0x7bb10020
    ctx->pc = 0x1a4bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4bc0: 0x7bb00010
    ctx->pc = 0x1a4bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4bc4: 0xc7b40000
    ctx->pc = 0x1a4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a4bc8: 0x3e00008
    ctx->pc = 0x1A4BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4BCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A49BCu: goto label_1a49bc;
            case 0x1A49D4u: goto label_1a49d4;
            case 0x1A49E8u: goto label_1a49e8;
            case 0x1A4A0Cu: goto label_1a4a0c;
            case 0x1A4A64u: goto label_1a4a64;
            case 0x1A4A7Cu: goto label_1a4a7c;
            case 0x1A4ABCu: goto label_1a4abc;
            case 0x1A4AC8u: goto label_1a4ac8;
            case 0x1A4AE8u: goto label_1a4ae8;
            case 0x1A4B1Cu: goto label_1a4b1c;
            case 0x1A4B58u: goto label_1a4b58;
            case 0x1A4B80u: goto label_1a4b80;
            case 0x1A4B94u: goto label_1a4b94;
            case 0x1A4BB4u: goto label_1a4bb4;
            case 0x1A4BB8u: goto label_1a4bb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4BD0u;
}
