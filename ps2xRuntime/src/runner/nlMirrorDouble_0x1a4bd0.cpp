#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlMirrorDouble
// Address: 0x1a4bd0 - 0x1a4cdc
void nlMirrorDouble_0x1a4bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlMirrorDouble");


    ctx->pc = 0x1a4bd0u;

    // 0x1a4bd0: 0x27bdffa0
    ctx->pc = 0x1a4bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a4bd4: 0x7fbf0010
    ctx->pc = 0x1a4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a4bd8: 0x7fb00000
    ctx->pc = 0x1a4bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4bdc: 0xc481000c
    ctx->pc = 0x1a4bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4be0: 0x3c024000
    ctx->pc = 0x1a4be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1a4be4: 0x44821000
    ctx->pc = 0x1a4be4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1a4be8: 0x70808628
    ctx->pc = 0x1a4be8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a4bec: 0x3c023f80
    ctx->pc = 0x1a4becu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a4bf0: 0x44821800
    ctx->pc = 0x1a4bf0u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1a4bf4: 0x0
    ctx->pc = 0x1a4bf4u;
    // NOP
    // 0x1a4bf8: 0x46011002
    ctx->pc = 0x1a4bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a4bfc: 0x3c02c000
    ctx->pc = 0x1a4bfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x1a4c00: 0x2605000c
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1a4c04: 0x46010002
    ctx->pc = 0x1a4c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4c08: 0x46001801
    ctx->pc = 0x1a4c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1a4c0c: 0xe7a00020
    ctx->pc = 0x1a4c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a4c10: 0xc4810010
    ctx->pc = 0x1a4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c14: 0x44822000
    ctx->pc = 0x1a4c14u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x1a4c18: 0x46011002
    ctx->pc = 0x1a4c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a4c1c: 0x46010002
    ctx->pc = 0x1a4c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4c20: 0x46001801
    ctx->pc = 0x1a4c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1a4c24: 0xe7a00034
    ctx->pc = 0x1a4c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a4c28: 0xc4810014
    ctx->pc = 0x1a4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c2c: 0x46011002
    ctx->pc = 0x1a4c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a4c30: 0x46010002
    ctx->pc = 0x1a4c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4c34: 0x46001801
    ctx->pc = 0x1a4c34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1a4c38: 0xe7a00048
    ctx->pc = 0x1a4c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a4c3c: 0xc481000c
    ctx->pc = 0x1a4c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c40: 0xc4800010
    ctx->pc = 0x1a4c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c44: 0x46012042
    ctx->pc = 0x1a4c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a4c48: 0x46000802
    ctx->pc = 0x1a4c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c4c: 0xe7a00030
    ctx->pc = 0x1a4c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a4c50: 0xe7a00024
    ctx->pc = 0x1a4c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a4c54: 0xc481000c
    ctx->pc = 0x1a4c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c58: 0xc4800014
    ctx->pc = 0x1a4c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c5c: 0x46012042
    ctx->pc = 0x1a4c5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a4c60: 0x46000802
    ctx->pc = 0x1a4c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c64: 0xe7a00040
    ctx->pc = 0x1a4c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a4c68: 0xe7a00028
    ctx->pc = 0x1a4c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1a4c6c: 0xc4810010
    ctx->pc = 0x1a4c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c70: 0xc4800014
    ctx->pc = 0x1a4c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c74: 0x46012042
    ctx->pc = 0x1a4c74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1a4c78: 0x46000802
    ctx->pc = 0x1a4c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c7c: 0xe7a00044
    ctx->pc = 0x1a4c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1a4c80: 0xc06be50
    ctx->pc = 0x1A4C80u;
    SET_GPR_U32(ctx, 31, 0x1A4C88u);
    ctx->pc = 0x1A4C84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->pc = 0x1AF940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF940_0x1af940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C88u; }
        else if (ctx->pc != 0x1A4C88u) { ctx->pc = 0x1A4C88u; }
    }
    if (ctx->pc != 0x1A4C88u) { return; }
    ctx->pc = 0x1A4C88u;
    // 0x1a4c88: 0xc601000c
    ctx->pc = 0x1a4c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c8c: 0x46000000
    ctx->pc = 0x1a4c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1a4c90: 0x3c023f80
    ctx->pc = 0x1a4c90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a4c94: 0x27a40020
    ctx->pc = 0x1a4c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a4c98: 0x46010042
    ctx->pc = 0x1a4c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4c9c: 0xe7a10050
    ctx->pc = 0x1a4c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a4ca0: 0xc6010010
    ctx->pc = 0x1a4ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4ca4: 0x46010042
    ctx->pc = 0x1a4ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4ca8: 0xe7a10054
    ctx->pc = 0x1a4ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a4cac: 0xc6010014
    ctx->pc = 0x1a4cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4cb0: 0x46010002
    ctx->pc = 0x1a4cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4cb4: 0xe7a00058
    ctx->pc = 0x1a4cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a4cb8: 0xafa0002c
    ctx->pc = 0x1a4cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1a4cbc: 0xafa0003c
    ctx->pc = 0x1a4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1a4cc0: 0xafa0004c
    ctx->pc = 0x1a4cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1a4cc4: 0xc06c04e
    ctx->pc = 0x1A4CC4u;
    SET_GPR_U32(ctx, 31, 0x1A4CCCu);
    ctx->pc = 0x1A4CC8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CCCu; }
        else if (ctx->pc != 0x1A4CCCu) { ctx->pc = 0x1A4CCCu; }
    }
    if (ctx->pc != 0x1A4CCCu) { return; }
    ctx->pc = 0x1A4CCCu;
    // 0x1a4ccc: 0x7bbf0010
    ctx->pc = 0x1a4cccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4cd0: 0x7bb00000
    ctx->pc = 0x1a4cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4cd4: 0x3e00008
    ctx->pc = 0x1A4CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4CD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4CDCu;
}
