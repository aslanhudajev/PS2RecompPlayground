#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii
// Address: 0x1e6930 - 0x1e6be0
void VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii_0x1e6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VertexMove__FP13FACEANIM_BASEP13FACEANIM_ANIMP11tagNLpoint3fPii");


    ctx->pc = 0x1e6930u;

    // 0x1e6930: 0x110000a5
    ctx->pc = 0x1E6930u;
    {
        const bool branch_taken_0x1e6930 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6930) {
            ctx->pc = 0x1E6BC8u;
            goto label_1e6bc8;
        }
    }
    ctx->pc = 0x1E6938u;
    // 0x1e6938: 0x1000006a
    ctx->pc = 0x1E6938u;
    {
        const bool branch_taken_0x1e6938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E693Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x1e6938) {
            ctx->pc = 0x1E6AE4u;
            goto label_1e6ae4;
        }
    }
    ctx->pc = 0x1E6940u;
label_1e6940:
    // 0x1e6940: 0x684021
    ctx->pc = 0x1e6940u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1e6944: 0x818c0
    ctx->pc = 0x1e6944u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 3));
    // 0x1e6948: 0x835021
    ctx->pc = 0x1e6948u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e694c: 0x81880
    ctx->pc = 0x1e694cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e6950: 0xc35821
    ctx->pc = 0x1e6950u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1e6954: 0x8d490000
    ctx->pc = 0x1e6954u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e6958: 0x8d480010
    ctx->pc = 0x1e6958u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1e695c: 0x8d430014
    ctx->pc = 0x1e695cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1e6960: 0x94880
    ctx->pc = 0x1e6960u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e6964: 0x84080
    ctx->pc = 0x1e6964u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e6968: 0xe94821
    ctx->pc = 0x1e6968u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1e696c: 0x14600004
    ctx->pc = 0x1E696Cu;
    {
        const bool branch_taken_0x1e696c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6970u;
        SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        if (branch_taken_0x1e696c) {
            ctx->pc = 0x1E6980u;
            goto label_1e6980;
        }
    }
    ctx->pc = 0x1E6974u;
    // 0x1e6974: 0x24037f00
    ctx->pc = 0x1e6974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32512));
    // 0x1e6978: 0xad430014
    ctx->pc = 0x1e6978u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    // 0x1e697c: 0xad030000
    ctx->pc = 0x1e697cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1e6980:
    // 0x1e6980: 0x8d030000
    ctx->pc = 0x1e6980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6984: 0x10600036
    ctx->pc = 0x1E6984u;
    {
        const bool branch_taken_0x1e6984 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6984) {
            ctx->pc = 0x1E6A60u;
            goto label_1e6a60;
        }
    }
    ctx->pc = 0x1E698Cu;
    // 0x1e698c: 0xad000000
    ctx->pc = 0x1e698cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1e6990: 0xc4a00004
    ctx->pc = 0x1e6990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6994: 0x3c0342fe
    ctx->pc = 0x1e6994u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17150 << 16));
    // 0x1e6998: 0xc5410004
    ctx->pc = 0x1e6998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e699c: 0x44831000
    ctx->pc = 0x1e699cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1e69a0: 0x460c0002
    ctx->pc = 0x1e69a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e69a4: 0x46000800
    ctx->pc = 0x1e69a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e69a8: 0xe5200000
    ctx->pc = 0x1e69a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1e69ac: 0xc4a00008
    ctx->pc = 0x1e69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e69b0: 0xc5410008
    ctx->pc = 0x1e69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e69b4: 0x460c0002
    ctx->pc = 0x1e69b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e69b8: 0x46000800
    ctx->pc = 0x1e69b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e69bc: 0xe5200004
    ctx->pc = 0x1e69bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1e69c0: 0xc4a0000c
    ctx->pc = 0x1e69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e69c4: 0xc541000c
    ctx->pc = 0x1e69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e69c8: 0x460c0002
    ctx->pc = 0x1e69c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e69cc: 0x46000800
    ctx->pc = 0x1e69ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e69d0: 0xe5200008
    ctx->pc = 0x1e69d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1e69d4: 0x81430014
    ctx->pc = 0x1e69d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1e69d8: 0xc4a00010
    ctx->pc = 0x1e69d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e69dc: 0x44830800
    ctx->pc = 0x1e69dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1e69e0: 0x0
    ctx->pc = 0x1e69e0u;
    // NOP
    // 0x1e69e4: 0x460c0002
    ctx->pc = 0x1e69e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e69e8: 0x46800860
    ctx->pc = 0x1e69e8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e69ec: 0x46020843
    ctx->pc = 0x1e69ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1e69f0: 0x46000800
    ctx->pc = 0x1e69f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e69f4: 0xe5600000
    ctx->pc = 0x1e69f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1e69f8: 0x8d430014
    ctx->pc = 0x1e69f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1e69fc: 0xc4a00014
    ctx->pc = 0x1e69fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a00: 0x31a03
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e6a04: 0x31e3c
    ctx->pc = 0x1e6a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1e6a08: 0x31e3f
    ctx->pc = 0x1e6a08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1e6a0c: 0x44830800
    ctx->pc = 0x1e6a0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1e6a10: 0x0
    ctx->pc = 0x1e6a10u;
    // NOP
    // 0x1e6a14: 0x460c0002
    ctx->pc = 0x1e6a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e6a18: 0x46800860
    ctx->pc = 0x1e6a18u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e6a1c: 0x46020843
    ctx->pc = 0x1e6a1cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1e6a20: 0x46000800
    ctx->pc = 0x1e6a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e6a24: 0xe5600004
    ctx->pc = 0x1e6a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x1e6a28: 0x8d430014
    ctx->pc = 0x1e6a28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1e6a2c: 0xc4a00018
    ctx->pc = 0x1e6a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a30: 0x31c03
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1e6a34: 0x31e3c
    ctx->pc = 0x1e6a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1e6a38: 0x31e3f
    ctx->pc = 0x1e6a38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1e6a3c: 0x44830800
    ctx->pc = 0x1e6a3cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1e6a40: 0x0
    ctx->pc = 0x1e6a40u;
    // NOP
    // 0x1e6a44: 0x460c0002
    ctx->pc = 0x1e6a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e6a48: 0x46800860
    ctx->pc = 0x1e6a48u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e6a4c: 0x46020843
    ctx->pc = 0x1e6a4cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1e6a50: 0x0
    ctx->pc = 0x1e6a50u;
    // NOP
    // 0x1e6a54: 0x46000800
    ctx->pc = 0x1e6a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e6a58: 0x1000001f
    ctx->pc = 0x1E6A58u;
    {
        const bool branch_taken_0x1e6a58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6A5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
        if (branch_taken_0x1e6a58) {
            ctx->pc = 0x1E6AD8u;
            goto label_1e6ad8;
        }
    }
    ctx->pc = 0x1E6A60u;
label_1e6a60:
    // 0x1e6a60: 0xc4a10004
    ctx->pc = 0x1e6a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a64: 0xc5200000
    ctx->pc = 0x1e6a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a68: 0x460c0842
    ctx->pc = 0x1e6a68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6a6c: 0x46010000
    ctx->pc = 0x1e6a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6a70: 0xe5200000
    ctx->pc = 0x1e6a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1e6a74: 0xc4a10008
    ctx->pc = 0x1e6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a78: 0xc5200004
    ctx->pc = 0x1e6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a7c: 0x460c0842
    ctx->pc = 0x1e6a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6a80: 0x46010000
    ctx->pc = 0x1e6a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6a84: 0xe5200004
    ctx->pc = 0x1e6a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1e6a88: 0xc4a1000c
    ctx->pc = 0x1e6a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6a8c: 0xc5200008
    ctx->pc = 0x1e6a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6a90: 0x460c0842
    ctx->pc = 0x1e6a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6a94: 0x46010000
    ctx->pc = 0x1e6a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6a98: 0xe5200008
    ctx->pc = 0x1e6a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1e6a9c: 0xc4a10010
    ctx->pc = 0x1e6a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6aa0: 0xc5600000
    ctx->pc = 0x1e6aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6aa4: 0x460c0842
    ctx->pc = 0x1e6aa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6aa8: 0x46010000
    ctx->pc = 0x1e6aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6aac: 0xe5600000
    ctx->pc = 0x1e6aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1e6ab0: 0xc4a10014
    ctx->pc = 0x1e6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6ab4: 0xc5600004
    ctx->pc = 0x1e6ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6ab8: 0x460c0842
    ctx->pc = 0x1e6ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6abc: 0x46010000
    ctx->pc = 0x1e6abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6ac0: 0xe5600004
    ctx->pc = 0x1e6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x1e6ac4: 0xc4a10018
    ctx->pc = 0x1e6ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6ac8: 0xc5600008
    ctx->pc = 0x1e6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6acc: 0x460c0842
    ctx->pc = 0x1e6accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6ad0: 0x46010000
    ctx->pc = 0x1e6ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6ad4: 0xe5600008
    ctx->pc = 0x1e6ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_1e6ad8:
    // 0x1e6ad8: 0x24a5001c
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28));
    // 0x1e6adc: 0x0
    ctx->pc = 0x1e6adcu;
    // NOP
    // 0x1e6ae0: 0x8ca80000
    ctx->pc = 0x1e6ae0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e6ae4:
    // 0x1e6ae4: 0x2403ffff
    ctx->pc = 0x1e6ae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6ae8: 0x1503ff95
    ctx->pc = 0x1E6AE8u;
    {
        const bool branch_taken_0x1e6ae8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E6AECu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1e6ae8) {
            ctx->pc = 0x1E6940u;
            goto label_1e6940;
        }
    }
    ctx->pc = 0x1E6AF0u;
    // 0x1e6af0: 0x10000039
    ctx->pc = 0x1E6AF0u;
    {
        const bool branch_taken_0x1e6af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6af0) {
            ctx->pc = 0x1E6BD8u;
            goto label_1e6bd8;
        }
    }
    ctx->pc = 0x1E6AF8u;
label_1e6af8:
    // 0x1e6af8: 0x661821
    ctx->pc = 0x1e6af8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e6afc: 0x318c0
    ctx->pc = 0x1e6afcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e6b00: 0x834821
    ctx->pc = 0x1e6b00u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e6b04: 0x8d280000
    ctx->pc = 0x1e6b04u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e6b08: 0x8d260010
    ctx->pc = 0x1e6b08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1e6b0c: 0x8d230014
    ctx->pc = 0x1e6b0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1e6b10: 0x84080
    ctx->pc = 0x1e6b10u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 2));
    // 0x1e6b14: 0x63080
    ctx->pc = 0x1e6b14u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e6b18: 0xe84021
    ctx->pc = 0x1e6b18u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1e6b1c: 0x14600004
    ctx->pc = 0x1E6B1Cu;
    {
        const bool branch_taken_0x1e6b1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E6B20u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        if (branch_taken_0x1e6b1c) {
            ctx->pc = 0x1E6B30u;
            goto label_1e6b30;
        }
    }
    ctx->pc = 0x1E6B24u;
    // 0x1e6b24: 0x24037f00
    ctx->pc = 0x1e6b24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32512));
    // 0x1e6b28: 0xad230014
    ctx->pc = 0x1e6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x1e6b2c: 0xacc30000
    ctx->pc = 0x1e6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1e6b30:
    // 0x1e6b30: 0x8cc30000
    ctx->pc = 0x1e6b30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e6b34: 0x10600012
    ctx->pc = 0x1E6B34u;
    {
        const bool branch_taken_0x1e6b34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e6b34) {
            ctx->pc = 0x1E6B80u;
            goto label_1e6b80;
        }
    }
    ctx->pc = 0x1E6B3Cu;
    // 0x1e6b3c: 0xacc00000
    ctx->pc = 0x1e6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1e6b40: 0xc4a00004
    ctx->pc = 0x1e6b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6b44: 0xc5210004
    ctx->pc = 0x1e6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6b48: 0x460c0002
    ctx->pc = 0x1e6b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e6b4c: 0x46000800
    ctx->pc = 0x1e6b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e6b50: 0xe5000000
    ctx->pc = 0x1e6b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1e6b54: 0xc4a00008
    ctx->pc = 0x1e6b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6b58: 0xc5210008
    ctx->pc = 0x1e6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6b5c: 0x460c0002
    ctx->pc = 0x1e6b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e6b60: 0x46000800
    ctx->pc = 0x1e6b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e6b64: 0xe5000004
    ctx->pc = 0x1e6b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1e6b68: 0xc4a0000c
    ctx->pc = 0x1e6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6b6c: 0xc521000c
    ctx->pc = 0x1e6b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6b70: 0x460c0002
    ctx->pc = 0x1e6b70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1e6b74: 0x46000800
    ctx->pc = 0x1e6b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e6b78: 0x10000011
    ctx->pc = 0x1E6B78u;
    {
        const bool branch_taken_0x1e6b78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6B7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        if (branch_taken_0x1e6b78) {
            ctx->pc = 0x1E6BC0u;
            goto label_1e6bc0;
        }
    }
    ctx->pc = 0x1E6B80u;
label_1e6b80:
    // 0x1e6b80: 0xc4a10004
    ctx->pc = 0x1e6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6b84: 0xc5000000
    ctx->pc = 0x1e6b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6b88: 0x460c0842
    ctx->pc = 0x1e6b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6b8c: 0x46010000
    ctx->pc = 0x1e6b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6b90: 0xe5000000
    ctx->pc = 0x1e6b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1e6b94: 0xc4a10008
    ctx->pc = 0x1e6b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6b98: 0xc5000004
    ctx->pc = 0x1e6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6b9c: 0x460c0842
    ctx->pc = 0x1e6b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6ba0: 0x46010000
    ctx->pc = 0x1e6ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6ba4: 0xe5000004
    ctx->pc = 0x1e6ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1e6ba8: 0xc4a1000c
    ctx->pc = 0x1e6ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6bac: 0xc5000008
    ctx->pc = 0x1e6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6bb0: 0x460c0842
    ctx->pc = 0x1e6bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1e6bb4: 0x46010000
    ctx->pc = 0x1e6bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e6bb8: 0xe5000008
    ctx->pc = 0x1e6bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1e6bbc: 0x0
    ctx->pc = 0x1e6bbcu;
    // NOP
label_1e6bc0:
    // 0x1e6bc0: 0x24a5001c
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28));
    // 0x1e6bc4: 0x0
    ctx->pc = 0x1e6bc4u;
    // NOP
label_1e6bc8:
    // 0x1e6bc8: 0x8ca60000
    ctx->pc = 0x1e6bc8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e6bcc: 0x2403ffff
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6bd0: 0x14c3ffc9
    ctx->pc = 0x1E6BD0u;
    {
        const bool branch_taken_0x1e6bd0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E6BD4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1e6bd0) {
            ctx->pc = 0x1E6AF8u;
            goto label_1e6af8;
        }
    }
    ctx->pc = 0x1E6BD8u;
label_1e6bd8:
    // 0x1e6bd8: 0x3e00008
    ctx->pc = 0x1E6BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6940u: goto label_1e6940;
            case 0x1E6980u: goto label_1e6980;
            case 0x1E6A60u: goto label_1e6a60;
            case 0x1E6AD8u: goto label_1e6ad8;
            case 0x1E6AE4u: goto label_1e6ae4;
            case 0x1E6AF8u: goto label_1e6af8;
            case 0x1E6B30u: goto label_1e6b30;
            case 0x1E6B80u: goto label_1e6b80;
            case 0x1E6BC0u: goto label_1e6bc0;
            case 0x1E6BC8u: goto label_1e6bc8;
            case 0x1E6BD8u: goto label_1e6bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6BE0u;
}
