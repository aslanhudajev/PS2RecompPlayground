#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: st2KangeiDoor__14TrnKomono2TaskFv
// Address: 0x2219a0 - 0x221dc4
void st2KangeiDoor__14TrnKomono2TaskFv_0x2219a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("st2KangeiDoor__14TrnKomono2TaskFv");


    ctx->pc = 0x2219a0u;

    // 0x2219a0: 0x27bdffe0
    ctx->pc = 0x2219a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2219a4: 0x7fbf0010
    ctx->pc = 0x2219a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2219a8: 0x7fb00000
    ctx->pc = 0x2219a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2219ac: 0x8f868c48
    ctx->pc = 0x2219acu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2219b0: 0x70808628
    ctx->pc = 0x2219b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2219b4: 0x24030198
    ctx->pc = 0x2219b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 408));
    // 0x2219b8: 0x8cc50004
    ctx->pc = 0x2219b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2219bc: 0x52040
    ctx->pc = 0x2219bcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2219c0: 0x852021
    ctx->pc = 0x2219c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2219c4: 0x42080
    ctx->pc = 0x2219c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2219c8: 0x852021
    ctx->pc = 0x2219c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2219cc: 0x42100
    ctx->pc = 0x2219ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2219d0: 0x862821
    ctx->pc = 0x2219d0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2219d4: 0x84a400d0
    ctx->pc = 0x2219d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2219d8: 0x1483001a
    ctx->pc = 0x2219D8u;
    {
        const bool branch_taken_0x2219d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2219d8) {
            ctx->pc = 0x221A44u;
            goto label_221a44;
        }
    }
    ctx->pc = 0x2219E0u;
    // 0x2219e0: 0xc4a100c0
    ctx->pc = 0x2219e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2219e4: 0x3c034407
    ctx->pc = 0x2219e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17415 << 16));
    // 0x2219e8: 0x44830000
    ctx->pc = 0x2219e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2219ec: 0x0
    ctx->pc = 0x2219ecu;
    // NOP
    // 0x2219f0: 0x46010036
    ctx->pc = 0x2219f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2219f4: 0x0
    ctx->pc = 0x2219f4u;
    // NOP
    // 0x2219f8: 0x4502000e
    ctx->pc = 0x2219F8u;
    {
        const bool branch_taken_0x2219f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2219f8) {
            ctx->pc = 0x2219FCu;
            SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x221A34u;
            goto label_221a34;
        }
    }
    ctx->pc = 0x221A00u;
    // 0x221a00: 0x34634ccd
    ctx->pc = 0x221a00u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 19661));
    // 0x221a04: 0x44830000
    ctx->pc = 0x221a04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x221a08: 0x0
    ctx->pc = 0x221a08u;
    // NOP
    // 0x221a0c: 0x46000834
    ctx->pc = 0x221a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221a10: 0x0
    ctx->pc = 0x221a10u;
    // NOP
    // 0x221a14: 0x45010004
    ctx->pc = 0x221A14u;
    {
        const bool branch_taken_0x221a14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221A18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221a14) {
            ctx->pc = 0x221A28u;
            goto label_221a28;
        }
    }
    ctx->pc = 0x221A1Cu;
    // 0x221a1c: 0x10000004
    ctx->pc = 0x221A1Cu;
    {
        const bool branch_taken_0x221a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221a1c) {
            ctx->pc = 0x221A30u;
            goto label_221a30;
        }
    }
    ctx->pc = 0x221A24u;
    // 0x221a24: 0x24030001
    ctx->pc = 0x221a24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_221a28:
    // 0x221a28: 0x10000002
    ctx->pc = 0x221A28u;
    {
        const bool branch_taken_0x221a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221a28) {
            ctx->pc = 0x221A34u;
            goto label_221a34;
        }
    }
    ctx->pc = 0x221A30u;
label_221a30:
    // 0x221a30: 0x70001e28
    ctx->pc = 0x221a30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221a34:
    // 0x221a34: 0x10600003
    ctx->pc = 0x221A34u;
    {
        const bool branch_taken_0x221a34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x221a34) {
            ctx->pc = 0x221A44u;
            goto label_221a44;
        }
    }
    ctx->pc = 0x221A3Cu;
    // 0x221a3c: 0xc06898c
    ctx->pc = 0x221A3Cu;
    SET_GPR_U32(ctx, 31, 0x221A44u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221A44u; }
        else if (ctx->pc != 0x221A44u) { ctx->pc = 0x221A44u; }
    }
    if (ctx->pc != 0x221A44u) { return; }
    ctx->pc = 0x221A44u;
label_221a44:
    // 0x221a44: 0x8e030068
    ctx->pc = 0x221a44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x221a48: 0x24060001
    ctx->pc = 0x221a48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221a4c: 0x10660097
    ctx->pc = 0x221A4Cu;
    {
        const bool branch_taken_0x221a4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x221a4c) {
            ctx->pc = 0x221CACu;
            goto label_221cac;
        }
    }
    ctx->pc = 0x221A54u;
    // 0x221a54: 0x10600003
    ctx->pc = 0x221A54u;
    {
        const bool branch_taken_0x221a54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x221a54) {
            ctx->pc = 0x221A64u;
            goto label_221a64;
        }
    }
    ctx->pc = 0x221A5Cu;
    // 0x221a5c: 0x100000d6
    ctx->pc = 0x221A5Cu;
    {
        const bool branch_taken_0x221a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221A60u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x221a5c) {
            ctx->pc = 0x221DB8u;
            goto label_221db8;
        }
    }
    ctx->pc = 0x221A64u;
label_221a64:
    // 0x221a64: 0x8f878c48
    ctx->pc = 0x221a64u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x221a68: 0x2403018f
    ctx->pc = 0x221a68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 399));
    // 0x221a6c: 0x8ce50004
    ctx->pc = 0x221a6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x221a70: 0x52040
    ctx->pc = 0x221a70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x221a74: 0x852021
    ctx->pc = 0x221a74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x221a78: 0x42080
    ctx->pc = 0x221a78u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x221a7c: 0x852021
    ctx->pc = 0x221a7cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x221a80: 0x42100
    ctx->pc = 0x221a80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x221a84: 0x872821
    ctx->pc = 0x221a84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x221a88: 0x84a400d0
    ctx->pc = 0x221a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x221a8c: 0x14830037
    ctx->pc = 0x221A8Cu;
    {
        const bool branch_taken_0x221a8c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x221A90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 294));
        if (branch_taken_0x221a8c) {
            ctx->pc = 0x221B6Cu;
            goto label_221b6c;
        }
    }
    ctx->pc = 0x221A94u;
    // 0x221a94: 0xc4a100c0
    ctx->pc = 0x221a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221a98: 0x3c024541
    ctx->pc = 0x221a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17729 << 16));
    // 0x221a9c: 0x34432000
    ctx->pc = 0x221a9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 8192));
    // 0x221aa0: 0x44830000
    ctx->pc = 0x221aa0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x221aa4: 0x0
    ctx->pc = 0x221aa4u;
    // NOP
    // 0x221aa8: 0x46010036
    ctx->pc = 0x221aa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221aac: 0x0
    ctx->pc = 0x221aacu;
    // NOP
    // 0x221ab0: 0x45020009
    ctx->pc = 0x221AB0u;
    {
        const bool branch_taken_0x221ab0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221ab0) {
            ctx->pc = 0x221AB4u;
            SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x221AD8u;
            goto label_221ad8;
        }
    }
    ctx->pc = 0x221AB8u;
    // 0x221ab8: 0x34423333
    ctx->pc = 0x221ab8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221abc: 0x44820000
    ctx->pc = 0x221abcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221ac0: 0x0
    ctx->pc = 0x221ac0u;
    // NOP
    // 0x221ac4: 0x46000834
    ctx->pc = 0x221ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221ac8: 0x0
    ctx->pc = 0x221ac8u;
    // NOP
    // 0x221acc: 0x45010002
    ctx->pc = 0x221ACCu;
    {
        const bool branch_taken_0x221acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x221acc) {
            ctx->pc = 0x221AD8u;
            goto label_221ad8;
        }
    }
    ctx->pc = 0x221AD4u;
    // 0x221ad4: 0x70003628
    ctx->pc = 0x221ad4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221ad8:
    // 0x221ad8: 0x10c00003
    ctx->pc = 0x221AD8u;
    {
        const bool branch_taken_0x221ad8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x221ad8) {
            ctx->pc = 0x221AE8u;
            goto label_221ae8;
        }
    }
    ctx->pc = 0x221AE0u;
    // 0x221ae0: 0x24020001
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x221ae4: 0xae02005c
    ctx->pc = 0x221ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_221ae8:
    // 0x221ae8: 0x8f858c48
    ctx->pc = 0x221ae8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x221aec: 0x3c024543
    ctx->pc = 0x221aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17731 << 16));
    // 0x221af0: 0x44820000
    ctx->pc = 0x221af0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221af4: 0x8ca40004
    ctx->pc = 0x221af4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x221af8: 0x41840
    ctx->pc = 0x221af8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x221afc: 0x641821
    ctx->pc = 0x221afcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221b00: 0x31880
    ctx->pc = 0x221b00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x221b04: 0x641821
    ctx->pc = 0x221b04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x221b08: 0x31900
    ctx->pc = 0x221b08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x221b0c: 0x651821
    ctx->pc = 0x221b0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x221b10: 0xc46100c0
    ctx->pc = 0x221b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221b14: 0x46010036
    ctx->pc = 0x221b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221b18: 0x0
    ctx->pc = 0x221b18u;
    // NOP
    // 0x221b1c: 0x4502000e
    ctx->pc = 0x221B1Cu;
    {
        const bool branch_taken_0x221b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221b1c) {
            ctx->pc = 0x221B20u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x221B58u;
            goto label_221b58;
        }
    }
    ctx->pc = 0x221B24u;
    // 0x221b24: 0x34421333
    ctx->pc = 0x221b24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4915));
    // 0x221b28: 0x44820000
    ctx->pc = 0x221b28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221b2c: 0x0
    ctx->pc = 0x221b2cu;
    // NOP
    // 0x221b30: 0x46000834
    ctx->pc = 0x221b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221b34: 0x0
    ctx->pc = 0x221b34u;
    // NOP
    // 0x221b38: 0x45010004
    ctx->pc = 0x221B38u;
    {
        const bool branch_taken_0x221b38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221B3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x221b38) {
            ctx->pc = 0x221B4Cu;
            goto label_221b4c;
        }
    }
    ctx->pc = 0x221B40u;
    // 0x221b40: 0x10000004
    ctx->pc = 0x221B40u;
    {
        const bool branch_taken_0x221b40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221b40) {
            ctx->pc = 0x221B54u;
            goto label_221b54;
        }
    }
    ctx->pc = 0x221B48u;
    // 0x221b48: 0x24020001
    ctx->pc = 0x221b48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_221b4c:
    // 0x221b4c: 0x10000002
    ctx->pc = 0x221B4Cu;
    {
        const bool branch_taken_0x221b4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x221b4c) {
            ctx->pc = 0x221B58u;
            goto label_221b58;
        }
    }
    ctx->pc = 0x221B54u;
label_221b54:
    // 0x221b54: 0x70001628
    ctx->pc = 0x221b54u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_221b58:
    // 0x221b58: 0x1040000d
    ctx->pc = 0x221B58u;
    {
        const bool branch_taken_0x221b58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x221b58) {
            ctx->pc = 0x221B90u;
            goto label_221b90;
        }
    }
    ctx->pc = 0x221B60u;
    // 0x221b60: 0x1000000b
    ctx->pc = 0x221B60u;
    {
        const bool branch_taken_0x221b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221B64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x221b60) {
            ctx->pc = 0x221B90u;
            goto label_221b90;
        }
    }
    ctx->pc = 0x221B68u;
    // 0x221b68: 0x24030126
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 294));
label_221b6c:
    // 0x221b6c: 0x14830004
    ctx->pc = 0x221B6Cu;
    {
        const bool branch_taken_0x221b6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x221B70u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 401));
        if (branch_taken_0x221b6c) {
            ctx->pc = 0x221B80u;
            goto label_221b80;
        }
    }
    ctx->pc = 0x221B74u;
    // 0x221b74: 0x10000006
    ctx->pc = 0x221B74u;
    {
        const bool branch_taken_0x221b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221B78u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        if (branch_taken_0x221b74) {
            ctx->pc = 0x221B90u;
            goto label_221b90;
        }
    }
    ctx->pc = 0x221B7Cu;
    // 0x221b7c: 0x24030191
    ctx->pc = 0x221b7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 401));
label_221b80:
    // 0x221b80: 0x14830003
    ctx->pc = 0x221B80u;
    {
        const bool branch_taken_0x221b80 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x221b80) {
            ctx->pc = 0x221B90u;
            goto label_221b90;
        }
    }
    ctx->pc = 0x221B88u;
    // 0x221b88: 0x1000008a
    ctx->pc = 0x221B88u;
    {
        const bool branch_taken_0x221b88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221B8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
        if (branch_taken_0x221b88) {
            ctx->pc = 0x221DB4u;
            goto label_221db4;
        }
    }
    ctx->pc = 0x221B90u;
label_221b90:
    // 0x221b90: 0x4bede37d
    ctx->pc = 0x221b90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x221b94: 0x4bedeb7d
    ctx->pc = 0x221b94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x221b98: 0x4bedf37d
    ctx->pc = 0x221b98u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x221b9c: 0x4bedfb7d
    ctx->pc = 0x221b9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x221ba0: 0x3c02c12d
    ctx->pc = 0x221ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49453 << 16));
    // 0x221ba4: 0x344254ca
    ctx->pc = 0x221ba4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 21706));
    // 0x221ba8: 0x44826000
    ctx->pc = 0x221ba8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221bac: 0x44806800
    ctx->pc = 0x221bacu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x221bb0: 0x3c02c58b
    ctx->pc = 0x221bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50571 << 16));
    // 0x221bb4: 0x3442803d
    ctx->pc = 0x221bb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32829));
    // 0x221bb8: 0x44827000
    ctx->pc = 0x221bb8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x221bbc: 0xc06c202
    ctx->pc = 0x221BBCu;
    SET_GPR_U32(ctx, 31, 0x221BC4u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BC4u; }
        else if (ctx->pc != 0x221BC4u) { ctx->pc = 0x221BC4u; }
    }
    if (ctx->pc != 0x221BC4u) { return; }
    ctx->pc = 0x221BC4u;
    // 0x221bc4: 0xc06c0fb
    ctx->pc = 0x221BC4u;
    SET_GPR_U32(ctx, 31, 0x221BCCu);
    ctx->pc = 0x221BC8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BCCu; }
        else if (ctx->pc != 0x221BCCu) { ctx->pc = 0x221BCCu; }
    }
    if (ctx->pc != 0x221BCCu) { return; }
    ctx->pc = 0x221BCCu;
    // 0x221bcc: 0x3c0200c1
    ctx->pc = 0x221bccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)193 << 16));
    // 0x221bd0: 0xc0853ac
    ctx->pc = 0x221BD0u;
    SET_GPR_U32(ctx, 31, 0x221BD8u);
    ctx->pc = 0x221BD4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 10));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BD8u; }
        else if (ctx->pc != 0x221BD8u) { ctx->pc = 0x221BD8u; }
    }
    if (ctx->pc != 0x221BD8u) { return; }
    ctx->pc = 0x221BD8u;
    // 0x221bd8: 0x4bff6b7e
    ctx->pc = 0x221bd8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x221bdc: 0x4bfe6b7e
    ctx->pc = 0x221bdcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x221be0: 0x4bfd6b7e
    ctx->pc = 0x221be0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x221be4: 0x4bfc6b7e
    ctx->pc = 0x221be4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x221be8: 0x4bede37d
    ctx->pc = 0x221be8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x221bec: 0x4bedeb7d
    ctx->pc = 0x221becu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x221bf0: 0x4bedf37d
    ctx->pc = 0x221bf0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x221bf4: 0x4bedfb7d
    ctx->pc = 0x221bf4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x221bf8: 0x3c02412d
    ctx->pc = 0x221bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16685 << 16));
    // 0x221bfc: 0x344254ca
    ctx->pc = 0x221bfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 21706));
    // 0x221c00: 0x44826000
    ctx->pc = 0x221c00u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221c04: 0x44806800
    ctx->pc = 0x221c04u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x221c08: 0x3c02c58b
    ctx->pc = 0x221c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50571 << 16));
    // 0x221c0c: 0x3442803d
    ctx->pc = 0x221c0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32829));
    // 0x221c10: 0x44827000
    ctx->pc = 0x221c10u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x221c14: 0xc06c202
    ctx->pc = 0x221C14u;
    SET_GPR_U32(ctx, 31, 0x221C1Cu);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C1Cu; }
        else if (ctx->pc != 0x221C1Cu) { ctx->pc = 0x221C1Cu; }
    }
    if (ctx->pc != 0x221C1Cu) { return; }
    ctx->pc = 0x221C1Cu;
    // 0x221c1c: 0xc06c0fb
    ctx->pc = 0x221C1Cu;
    SET_GPR_U32(ctx, 31, 0x221C24u);
    ctx->pc = 0x221C20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C24u; }
        else if (ctx->pc != 0x221C24u) { ctx->pc = 0x221C24u; }
    }
    if (ctx->pc != 0x221C24u) { return; }
    ctx->pc = 0x221C24u;
    // 0x221c24: 0x3c0200c1
    ctx->pc = 0x221c24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)193 << 16));
    // 0x221c28: 0xc0853ac
    ctx->pc = 0x221C28u;
    SET_GPR_U32(ctx, 31, 0x221C30u);
    ctx->pc = 0x221C2Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C30u; }
        else if (ctx->pc != 0x221C30u) { ctx->pc = 0x221C30u; }
    }
    if (ctx->pc != 0x221C30u) { return; }
    ctx->pc = 0x221C30u;
    // 0x221c30: 0x4bff6b7e
    ctx->pc = 0x221c30u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x221c34: 0x4bfe6b7e
    ctx->pc = 0x221c34u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x221c38: 0x4bfd6b7e
    ctx->pc = 0x221c38u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x221c3c: 0x4bfc6b7e
    ctx->pc = 0x221c3cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x221c40: 0x8e03005c
    ctx->pc = 0x221c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x221c44: 0x1060005b
    ctx->pc = 0x221C44u;
    {
        const bool branch_taken_0x221c44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x221c44) {
            ctx->pc = 0x221DB4u;
            goto label_221db4;
        }
    }
    ctx->pc = 0x221C4Cu;
    // 0x221c4c: 0x3c020050
    ctx->pc = 0x221c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x221c50: 0xc07ce18
    ctx->pc = 0x221C50u;
    SET_GPR_U32(ctx, 31, 0x221C58u);
    ctx->pc = 0x221C54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C58u; }
        else if (ctx->pc != 0x221C58u) { ctx->pc = 0x221C58u; }
    }
    if (ctx->pc != 0x221C58u) { return; }
    ctx->pc = 0x221C58u;
    // 0x221c58: 0x1c400056
    ctx->pc = 0x221C58u;
    {
        const bool branch_taken_0x221c58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x221c58) {
            ctx->pc = 0x221DB4u;
            goto label_221db4;
        }
    }
    ctx->pc = 0x221C60u;
    // 0x221c60: 0xc6000060
    ctx->pc = 0x221c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221c64: 0x3c024423
    ctx->pc = 0x221c64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17443 << 16));
    // 0x221c68: 0x3442cccd
    ctx->pc = 0x221c68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x221c6c: 0x44820800
    ctx->pc = 0x221c6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x221c70: 0x0
    ctx->pc = 0x221c70u;
    // NOP
    // 0x221c74: 0x46800020
    ctx->pc = 0x221c74u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x221c78: 0xc053146
    ctx->pc = 0x221C78u;
    SET_GPR_U32(ctx, 31, 0x221C80u);
    ctx->pc = 0x221C7Cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221C80u; }
        else if (ctx->pc != 0x221C80u) { ctx->pc = 0x221C80u; }
    }
    if (ctx->pc != 0x221C80u) { return; }
    ctx->pc = 0x221C80u;
    // 0x221c80: 0xae020060
    ctx->pc = 0x221c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x221c84: 0xc6010064
    ctx->pc = 0x221c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221c88: 0x3c024423
    ctx->pc = 0x221c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17443 << 16));
    // 0x221c8c: 0x3442cccd
    ctx->pc = 0x221c8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x221c90: 0x44820000
    ctx->pc = 0x221c90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x221c94: 0x0
    ctx->pc = 0x221c94u;
    // NOP
    // 0x221c98: 0x46800860
    ctx->pc = 0x221c98u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x221c9c: 0xc053146
    ctx->pc = 0x221C9Cu;
    SET_GPR_U32(ctx, 31, 0x221CA4u);
    ctx->pc = 0x221CA0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CA4u; }
        else if (ctx->pc != 0x221CA4u) { ctx->pc = 0x221CA4u; }
    }
    if (ctx->pc != 0x221CA4u) { return; }
    ctx->pc = 0x221CA4u;
    // 0x221ca4: 0x10000043
    ctx->pc = 0x221CA4u;
    {
        const bool branch_taken_0x221ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221CA8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x221ca4) {
            ctx->pc = 0x221DB4u;
            goto label_221db4;
        }
    }
    ctx->pc = 0x221CACu;
label_221cac:
    // 0x221cac: 0x4bede37d
    ctx->pc = 0x221cacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x221cb0: 0x4bedeb7d
    ctx->pc = 0x221cb0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x221cb4: 0x4bedf37d
    ctx->pc = 0x221cb4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x221cb8: 0x4bedfb7d
    ctx->pc = 0x221cb8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x221cbc: 0x3c02c190
    ctx->pc = 0x221cbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49552 << 16));
    // 0x221cc0: 0x44826000
    ctx->pc = 0x221cc0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221cc4: 0x44806800
    ctx->pc = 0x221cc4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x221cc8: 0x3c024378
    ctx->pc = 0x221cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17272 << 16));
    // 0x221ccc: 0x3442ecc6
    ctx->pc = 0x221cccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 60614));
    // 0x221cd0: 0x44827000
    ctx->pc = 0x221cd0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x221cd4: 0xc06c202
    ctx->pc = 0x221CD4u;
    SET_GPR_U32(ctx, 31, 0x221CDCu);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CDCu; }
        else if (ctx->pc != 0x221CDCu) { ctx->pc = 0x221CDCu; }
    }
    if (ctx->pc != 0x221CDCu) { return; }
    ctx->pc = 0x221CDCu;
    // 0x221cdc: 0xc06c0fb
    ctx->pc = 0x221CDCu;
    SET_GPR_U32(ctx, 31, 0x221CE4u);
    ctx->pc = 0x221CE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221CE4u; }
        else if (ctx->pc != 0x221CE4u) { ctx->pc = 0x221CE4u; }
    }
    if (ctx->pc != 0x221CE4u) { return; }
    ctx->pc = 0x221CE4u;
    // 0x221ce4: 0x3c023fd3
    ctx->pc = 0x221ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16339 << 16));
    // 0x221ce8: 0x34423333
    ctx->pc = 0x221ce8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221cec: 0x44826000
    ctx->pc = 0x221cecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221cf0: 0x0
    ctx->pc = 0x221cf0u;
    // NOP
    // 0x221cf4: 0x46006346
    ctx->pc = 0x221cf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x221cf8: 0xc06c1b3
    ctx->pc = 0x221CF8u;
    SET_GPR_U32(ctx, 31, 0x221D00u);
    ctx->pc = 0x221CFCu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D00u; }
        else if (ctx->pc != 0x221D00u) { ctx->pc = 0x221D00u; }
    }
    if (ctx->pc != 0x221D00u) { return; }
    ctx->pc = 0x221D00u;
    // 0x221d00: 0x3c023fd3
    ctx->pc = 0x221d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16339 << 16));
    // 0x221d04: 0x34423333
    ctx->pc = 0x221d04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221d08: 0x44826000
    ctx->pc = 0x221d08u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221d0c: 0xc06b218
    ctx->pc = 0x221D0Cu;
    SET_GPR_U32(ctx, 31, 0x221D14u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D14u; }
        else if (ctx->pc != 0x221D14u) { ctx->pc = 0x221D14u; }
    }
    if (ctx->pc != 0x221D14u) { return; }
    ctx->pc = 0x221D14u;
    // 0x221d14: 0x3c0200c1
    ctx->pc = 0x221d14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)193 << 16));
    // 0x221d18: 0xc0853ac
    ctx->pc = 0x221D18u;
    SET_GPR_U32(ctx, 31, 0x221D20u);
    ctx->pc = 0x221D1Cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 10));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D20u; }
        else if (ctx->pc != 0x221D20u) { ctx->pc = 0x221D20u; }
    }
    if (ctx->pc != 0x221D20u) { return; }
    ctx->pc = 0x221D20u;
    // 0x221d20: 0x4bff6b7e
    ctx->pc = 0x221d20u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x221d24: 0x4bfe6b7e
    ctx->pc = 0x221d24u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x221d28: 0x4bfd6b7e
    ctx->pc = 0x221d28u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x221d2c: 0x4bfc6b7e
    ctx->pc = 0x221d2cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x221d30: 0x4bede37d
    ctx->pc = 0x221d30u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x221d34: 0x4bedeb7d
    ctx->pc = 0x221d34u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x221d38: 0x4bedf37d
    ctx->pc = 0x221d38u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x221d3c: 0x4bedfb7d
    ctx->pc = 0x221d3cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x221d40: 0x3c024190
    ctx->pc = 0x221d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16784 << 16));
    // 0x221d44: 0x44826000
    ctx->pc = 0x221d44u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221d48: 0x44806800
    ctx->pc = 0x221d48u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x221d4c: 0x3c024378
    ctx->pc = 0x221d4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)17272 << 16));
    // 0x221d50: 0x3442ecc6
    ctx->pc = 0x221d50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 60614));
    // 0x221d54: 0x44827000
    ctx->pc = 0x221d54u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x221d58: 0xc06c202
    ctx->pc = 0x221D58u;
    SET_GPR_U32(ctx, 31, 0x221D60u);
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D60u; }
        else if (ctx->pc != 0x221D60u) { ctx->pc = 0x221D60u; }
    }
    if (ctx->pc != 0x221D60u) { return; }
    ctx->pc = 0x221D60u;
    // 0x221d60: 0xc06c0fb
    ctx->pc = 0x221D60u;
    SET_GPR_U32(ctx, 31, 0x221D68u);
    ctx->pc = 0x221D64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D68u; }
        else if (ctx->pc != 0x221D68u) { ctx->pc = 0x221D68u; }
    }
    if (ctx->pc != 0x221D68u) { return; }
    ctx->pc = 0x221D68u;
    // 0x221d68: 0x3c023fd3
    ctx->pc = 0x221d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16339 << 16));
    // 0x221d6c: 0x34423333
    ctx->pc = 0x221d6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221d70: 0x44826000
    ctx->pc = 0x221d70u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221d74: 0x0
    ctx->pc = 0x221d74u;
    // NOP
    // 0x221d78: 0x46006346
    ctx->pc = 0x221d78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x221d7c: 0xc06c1b3
    ctx->pc = 0x221D7Cu;
    SET_GPR_U32(ctx, 31, 0x221D84u);
    ctx->pc = 0x221D80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D84u; }
        else if (ctx->pc != 0x221D84u) { ctx->pc = 0x221D84u; }
    }
    if (ctx->pc != 0x221D84u) { return; }
    ctx->pc = 0x221D84u;
    // 0x221d84: 0x3c023fd3
    ctx->pc = 0x221d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16339 << 16));
    // 0x221d88: 0x34423333
    ctx->pc = 0x221d88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 13107));
    // 0x221d8c: 0x44826000
    ctx->pc = 0x221d8cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x221d90: 0xc06b218
    ctx->pc = 0x221D90u;
    SET_GPR_U32(ctx, 31, 0x221D98u);
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221D98u; }
        else if (ctx->pc != 0x221D98u) { ctx->pc = 0x221D98u; }
    }
    if (ctx->pc != 0x221D98u) { return; }
    ctx->pc = 0x221D98u;
    // 0x221d98: 0x3c0200c1
    ctx->pc = 0x221d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)193 << 16));
    // 0x221d9c: 0xc0853ac
    ctx->pc = 0x221D9Cu;
    SET_GPR_U32(ctx, 31, 0x221DA4u);
    ctx->pc = 0x221DA0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221DA4u; }
        else if (ctx->pc != 0x221DA4u) { ctx->pc = 0x221DA4u; }
    }
    if (ctx->pc != 0x221DA4u) { return; }
    ctx->pc = 0x221DA4u;
    // 0x221da4: 0x4bff6b7e
    ctx->pc = 0x221da4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x221da8: 0x4bfe6b7e
    ctx->pc = 0x221da8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x221dac: 0x4bfd6b7e
    ctx->pc = 0x221dacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x221db0: 0x4bfc6b7e
    ctx->pc = 0x221db0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_221db4:
    // 0x221db4: 0x7bbf0010
    ctx->pc = 0x221db4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_221db8:
    // 0x221db8: 0x7bb00000
    ctx->pc = 0x221db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221dbc: 0x3e00008
    ctx->pc = 0x221DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221A28u: goto label_221a28;
            case 0x221A30u: goto label_221a30;
            case 0x221A34u: goto label_221a34;
            case 0x221A44u: goto label_221a44;
            case 0x221A64u: goto label_221a64;
            case 0x221AD8u: goto label_221ad8;
            case 0x221AE8u: goto label_221ae8;
            case 0x221B4Cu: goto label_221b4c;
            case 0x221B54u: goto label_221b54;
            case 0x221B58u: goto label_221b58;
            case 0x221B6Cu: goto label_221b6c;
            case 0x221B80u: goto label_221b80;
            case 0x221B90u: goto label_221b90;
            case 0x221CACu: goto label_221cac;
            case 0x221DB4u: goto label_221db4;
            case 0x221DB8u: goto label_221db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x221DC4u;
}
