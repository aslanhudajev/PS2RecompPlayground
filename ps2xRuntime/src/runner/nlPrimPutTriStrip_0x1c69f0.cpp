#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrimPutTriStrip
// Address: 0x1c69f0 - 0x1c6bbc
void nlPrimPutTriStrip_0x1c69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrimPutTriStrip");


    ctx->pc = 0x1c69f0u;

    // 0x1c69f0: 0x27bdffd0
    ctx->pc = 0x1c69f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c69f4: 0x7fbf0020
    ctx->pc = 0x1c69f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1c69f8: 0x7fb10010
    ctx->pc = 0x1c69f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c69fc: 0x7fb00000
    ctx->pc = 0x1c69fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6a00: 0x8c830000
    ctx->pc = 0x1c6a00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c6a04: 0x2402fef8
    ctx->pc = 0x1c6a04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967032));
    // 0x1c6a08: 0x70808e28
    ctx->pc = 0x1c6a08u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c6a0c: 0x621024
    ctx->pc = 0x1c6a0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6a10: 0xc069528
    ctx->pc = 0x1C6A10u;
    SET_GPR_U32(ctx, 31, 0x1C6A18u);
    ctx->pc = 0x1C6A14u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 2), 4));
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A18u; }
        else if (ctx->pc != 0x1C6A18u) { ctx->pc = 0x1C6A18u; }
    }
    if (ctx->pc != 0x1C6A18u) { return; }
    ctx->pc = 0x1C6A18u;
label_1c6a18:
    // 0x1c6a18: 0x3c011001
    ctx->pc = 0x1c6a18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1c6a1c: 0x8c23d000
    ctx->pc = 0x1c6a1cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
    // 0x1c6a20: 0x30630100
    ctx->pc = 0x1c6a20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1c6a24: 0x0
    ctx->pc = 0x1c6a24u;
    // NOP
    // 0x1c6a28: 0x0
    ctx->pc = 0x1c6a28u;
    // NOP
    // 0x1c6a2c: 0x1460fffa
    ctx->pc = 0x1C6A2Cu;
    {
        const bool branch_taken_0x1c6a2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c6a2c) {
            ctx->pc = 0x1C6A18u;
            goto label_1c6a18;
        }
    }
    ctx->pc = 0x1C6A34u;
    // 0x1c6a34: 0x8e250004
    ctx->pc = 0x1c6a34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6a38: 0x70403628
    ctx->pc = 0x1c6a38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6a3c: 0x8e280008
    ctx->pc = 0x1c6a3cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6a40: 0x70003e28
    ctx->pc = 0x1c6a40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6a44: 0x24c60020
    ctx->pc = 0x1c6a44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1c6a48: 0x70a01e28
    ctx->pc = 0x1c6a48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c6a4c: 0x1060003a
    ctx->pc = 0x1C6A4Cu;
    {
        const bool branch_taken_0x1c6a4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C6A50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x1c6a4c) {
            ctx->pc = 0x1C6B38u;
            goto label_1c6b38;
        }
    }
    ctx->pc = 0x1C6A54u;
    // 0x1c6a54: 0x3c033f80
    ctx->pc = 0x1c6a54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1c6a58: 0x3c094180
    ctx->pc = 0x1c6a58u;
    SET_GPR_U32(ctx, 9, ((uint32_t)16768 << 16));
    // 0x1c6a5c: 0x3203c
    ctx->pc = 0x1c6a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6a60: 0x44893800
    ctx->pc = 0x1c6a60u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 9);
    // 0x1c6a64: 0x24030001
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6a68: 0x240d0002
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6a6c: 0x240a0005
    ctx->pc = 0x1c6a6cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 5));
label_1c6a70:
    // 0x1c6a70: 0x9d0b0000
    ctx->pc = 0x1c6a70u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6a74: 0x70a04e28
    ctx->pc = 0x1c6a74u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c6a78: 0x24e70003
    ctx->pc = 0x1c6a78u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 3));
    // 0x1c6a7c: 0x24a5ffff
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c6a80: 0x1645825
    ctx->pc = 0x1c6a80u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1c6a84: 0xfccb0000
    ctx->pc = 0x1c6a84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x1c6a88: 0xfcc30008
    ctx->pc = 0x1c6a88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1c6a8c: 0x8d0b0014
    ctx->pc = 0x1c6a8cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1c6a90: 0x8d0c0010
    ctx->pc = 0x1c6a90u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1c6a94: 0xb583c
    ctx->pc = 0x1c6a94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1c6a98: 0x18b5825
    ctx->pc = 0x1c6a98u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1c6a9c: 0xfccb0010
    ctx->pc = 0x1c6a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 11));
    // 0x1c6aa0: 0xfccd0018
    ctx->pc = 0x1c6aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 13));
    // 0x1c6aa4: 0xc7828a14
    ctx->pc = 0x1c6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6aa8: 0xc501000c
    ctx->pc = 0x1c6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6aac: 0xc7808a18
    ctx->pc = 0x1c6aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6ab0: 0xc5060004
    ctx->pc = 0x1c6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c6ab4: 0xc7858a94
    ctx->pc = 0x1c6ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c6ab8: 0xc5040008
    ctx->pc = 0x1c6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6abc: 0xc7838a98
    ctx->pc = 0x1c6abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6ac0: 0x46011043
    ctx->pc = 0x1c6ac0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1c6ac4: 0x25080018
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 24));
    // 0x1c6ac8: 0x46062940
    ctx->pc = 0x1c6ac8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1c6acc: 0x46053882
    ctx->pc = 0x1c6accu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x1c6ad0: 0x460010a4
    ctx->pc = 0x1c6ad0u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1c6ad4: 0x440b1000
    ctx->pc = 0x1c6ad4u;
    SET_GPR_U32(ctx, 11, *(uint32_t*)&ctx->f[2]);
    // 0x1c6ad8: 0x460418c0
    ctx->pc = 0x1c6ad8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1c6adc: 0xb603c
    ctx->pc = 0x1c6adcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1c6ae0: 0xc603f
    ctx->pc = 0x1c6ae0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1c6ae4: 0x46033882
    ctx->pc = 0x1c6ae4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x1c6ae8: 0x460010a4
    ctx->pc = 0x1c6ae8u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1c6aec: 0x46000007
    ctx->pc = 0x1c6aecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c6af0: 0x46010000
    ctx->pc = 0x1c6af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c6af4: 0x440b1000
    ctx->pc = 0x1c6af4u;
    SET_GPR_U32(ctx, 11, *(uint32_t*)&ctx->f[2]);
    // 0x1c6af8: 0x46000024
    ctx->pc = 0x1c6af8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1c6afc: 0xb583c
    ctx->pc = 0x1c6afcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1c6b00: 0xb583f
    ctx->pc = 0x1c6b00u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1c6b04: 0xb5c38
    ctx->pc = 0x1c6b04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x1c6b08: 0x18b5825
    ctx->pc = 0x1c6b08u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1c6b0c: 0x440c0000
    ctx->pc = 0x1c6b0cu;
    SET_GPR_U32(ctx, 12, *(uint32_t*)&ctx->f[0]);
    // 0x1c6b10: 0x0
    ctx->pc = 0x1c6b10u;
    // NOP
    // 0x1c6b14: 0xc6103
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 4));
    // 0x1c6b18: 0xc603c
    ctx->pc = 0x1c6b18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1c6b1c: 0xc603f
    ctx->pc = 0x1c6b1cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1c6b20: 0xc603c
    ctx->pc = 0x1c6b20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x1c6b24: 0x18b5825
    ctx->pc = 0x1c6b24u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1c6b28: 0xfccb0020
    ctx->pc = 0x1c6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 11));
    // 0x1c6b2c: 0xfcca0028
    ctx->pc = 0x1c6b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 10));
    // 0x1c6b30: 0x1520ffcf
    ctx->pc = 0x1C6B30u;
    {
        const bool branch_taken_0x1c6b30 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C6B34u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 48));
        if (branch_taken_0x1c6b30) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C6B38u;
label_1c6b38:
    // 0x1c6b38: 0x10183c
    ctx->pc = 0x1c6b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1c6b3c: 0x3183f
    ctx->pc = 0x1c6b3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c6b40: 0x32bfc
    ctx->pc = 0x1c6b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1c6b44: 0x24e30001
    ctx->pc = 0x1c6b44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1c6b48: 0x3303c
    ctx->pc = 0x1c6b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c6b4c: 0x6303f
    ctx->pc = 0x1c6b4cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1c6b50: 0x3c041000
    ctx->pc = 0x1c6b50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1c6b54: 0xc41825
    ctx->pc = 0x1c6b54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1c6b58: 0xfc430000
    ctx->pc = 0x1c6b58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1c6b5c: 0x4183c
    ctx->pc = 0x1c6b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c6b60: 0x3c045100
    ctx->pc = 0x1c6b60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20736 << 16));
    // 0x1c6b64: 0xc42025
    ctx->pc = 0x1c6b64u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1c6b68: 0x4203c
    ctx->pc = 0x1c6b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c6b6c: 0xfc440008
    ctx->pc = 0x1c6b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x1c6b70: 0x7403c
    ctx->pc = 0x1c6b70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1c6b74: 0x24e40002
    ctx->pc = 0x1c6b74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 2));
    // 0x1c6b78: 0x24064000
    ctx->pc = 0x1c6b78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1c6b7c: 0x6383c
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c6b80: 0x34068000
    ctx->pc = 0x1c6b80u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1c6b84: 0x8403f
    ctx->pc = 0x1c6b84u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1c6b88: 0xc73025
    ctx->pc = 0x1c6b88u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c6b8c: 0x1063025
    ctx->pc = 0x1c6b8cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c6b90: 0xc52825
    ctx->pc = 0x1c6b90u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c6b94: 0xa31825
    ctx->pc = 0x1c6b94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c6b98: 0xfc430010
    ctx->pc = 0x1c6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1c6b9c: 0x2403000e
    ctx->pc = 0x1c6b9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c6ba0: 0xc06952c
    ctx->pc = 0x1C6BA0u;
    SET_GPR_U32(ctx, 31, 0x1C6BA8u);
    ctx->pc = 0x1C6BA4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BA8u; }
        else if (ctx->pc != 0x1C6BA8u) { ctx->pc = 0x1C6BA8u; }
    }
    if (ctx->pc != 0x1C6BA8u) { return; }
    ctx->pc = 0x1C6BA8u;
    // 0x1c6ba8: 0x7bbf0020
    ctx->pc = 0x1c6ba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6bac: 0x7bb10010
    ctx->pc = 0x1c6bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bb0: 0x7bb00000
    ctx->pc = 0x1c6bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bb4: 0x3e00008
    ctx->pc = 0x1C6BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6A18u: goto label_1c6a18;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6B38u: goto label_1c6b38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6BBCu;
}
