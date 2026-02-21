#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLineDraw
// Address: 0x2a3b10 - 0x2a3d28
void pbLineDraw_0x2a3b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3b10u;

    // 0x2a3b10: 0x27bdff00
    ctx->pc = 0x2a3b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2a3b14: 0xffbf00e0
    ctx->pc = 0x2a3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2a3b18: 0xffb200d0
    ctx->pc = 0x2a3b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2a3b1c: 0xffb100c0
    ctx->pc = 0x2a3b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
    // 0x2a3b20: 0xffb000b0
    ctx->pc = 0x2a3b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2a3b24: 0xe7b400f0
    ctx->pc = 0x2a3b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a3b28: 0x80882d
    ctx->pc = 0x2a3b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b2c: 0xa0902d
    ctx->pc = 0x2a3b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b30: 0x3c020036
    ctx->pc = 0x2a3b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3b34: 0x8c43dee0
    ctx->pc = 0x2a3b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3b38: 0x3c027000
    ctx->pc = 0x2a3b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2a3b3c: 0x3442000a
    ctx->pc = 0x2a3b3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
    // 0x2a3b40: 0xafa20000
    ctx->pc = 0x2a3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a3b44: 0xafa00004
    ctx->pc = 0x2a3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a3b48: 0xafa00008
    ctx->pc = 0x2a3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a3b4c: 0x3c025000
    ctx->pc = 0x2a3b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2a3b50: 0x34420009
    ctx->pc = 0x2a3b50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x2a3b54: 0xafa2000c
    ctx->pc = 0x2a3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2a3b58: 0x34028008
    ctx->pc = 0x2a3b58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x2a3b5c: 0xafa20010
    ctx->pc = 0x2a3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2a3b60: 0x3c021000
    ctx->pc = 0x2a3b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a3b64: 0xafa20014
    ctx->pc = 0x2a3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2a3b68: 0x2402000e
    ctx->pc = 0x2a3b68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a3b6c: 0xafa20018
    ctx->pc = 0x2a3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2a3b70: 0xafa0001c
    ctx->pc = 0x2a3b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2a3b74: 0x8c620004
    ctx->pc = 0x2a3b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a3b78: 0xdc420010
    ctx->pc = 0x2a3b78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a3b7c: 0xffa20040
    ctx->pc = 0x2a3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x2a3b80: 0x8c620008
    ctx->pc = 0x2a3b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a3b84: 0xdc420040
    ctx->pc = 0x2a3b84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a3b88: 0xffa20020
    ctx->pc = 0x2a3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x2a3b8c: 0xffa00030
    ctx->pc = 0x2a3b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
    // 0x2a3b90: 0xffa00050
    ctx->pc = 0x2a3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x2a3b94: 0x2402000a
    ctx->pc = 0x2a3b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a3b98: 0xffa20060
    ctx->pc = 0x2a3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x2a3b9c: 0x3c0300ff
    ctx->pc = 0x2a3b9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x2a3ba0: 0xc31024
    ctx->pc = 0x2a3ba0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a3ba4: 0x21402
    ctx->pc = 0x2a3ba4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 16));
    // 0x2a3ba8: 0x30c4ff00
    ctx->pc = 0x2a3ba8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), 65280));
    // 0x2a3bac: 0x441025
    ctx->pc = 0x2a3bacu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a3bb0: 0x30c600ff
    ctx->pc = 0x2a3bb0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
    // 0x2a3bb4: 0x63400
    ctx->pc = 0x2a3bb4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a3bb8: 0x461025
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a3bbc: 0xffa20070
    ctx->pc = 0x2a3bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x2a3bc0: 0xe31824
    ctx->pc = 0x2a3bc0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2a3bc4: 0x31c02
    ctx->pc = 0x2a3bc4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x2a3bc8: 0x30e2ff00
    ctx->pc = 0x2a3bc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 65280));
    // 0x2a3bcc: 0x621825
    ctx->pc = 0x2a3bccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3bd0: 0x30e700ff
    ctx->pc = 0x2a3bd0u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
    // 0x2a3bd4: 0x73c00
    ctx->pc = 0x2a3bd4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a3bd8: 0x671825
    ctx->pc = 0x2a3bd8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a3bdc: 0xffa30090
    ctx->pc = 0x2a3bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
    // 0x2a3be0: 0xc62c0000
    ctx->pc = 0x2a3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3be4: 0x3c014180
    ctx->pc = 0x2a3be4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2a3be8: 0x4481a000
    ctx->pc = 0x2a3be8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2a3bec: 0xc0bdefe
    ctx->pc = 0x2A3BECu;
    SET_GPR_U32(ctx, 31, 0x2A3BF4u);
    ctx->pc = 0x2A3BF0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3BF4u; }
    }
    if (ctx->pc != 0x2A3BF4u) { return; }
    ctx->pc = 0x2A3BF4u;
    // 0x2a3bf4: 0x3050ffff
    ctx->pc = 0x2a3bf4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3bf8: 0xc62c0004
    ctx->pc = 0x2a3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3bfc: 0xc0bdefe
    ctx->pc = 0x2A3BFCu;
    SET_GPR_U32(ctx, 31, 0x2A3C04u);
    ctx->pc = 0x2A3C00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C04u; }
    }
    if (ctx->pc != 0x2A3C04u) { return; }
    ctx->pc = 0x2A3C04u;
    // 0x2a3c04: 0x3042ffff
    ctx->pc = 0x2a3c04u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3c08: 0x21438
    ctx->pc = 0x2a3c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3c0c: 0x2028025
    ctx->pc = 0x2a3c0cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3c10: 0xc0bdefe
    ctx->pc = 0x2A3C10u;
    SET_GPR_U32(ctx, 31, 0x2A3C18u);
    ctx->pc = 0x2A3C14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C18u; }
    }
    if (ctx->pc != 0x2A3C18u) { return; }
    ctx->pc = 0x2A3C18u;
    // 0x2a3c18: 0x2103c
    ctx->pc = 0x2a3c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3c1c: 0x2028025
    ctx->pc = 0x2a3c1cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3c20: 0xffb00080
    ctx->pc = 0x2a3c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2a3c24: 0xc64c0000
    ctx->pc = 0x2a3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3c28: 0xc0bdefe
    ctx->pc = 0x2A3C28u;
    SET_GPR_U32(ctx, 31, 0x2A3C30u);
    ctx->pc = 0x2A3C2Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C30u; }
    }
    if (ctx->pc != 0x2A3C30u) { return; }
    ctx->pc = 0x2A3C30u;
    // 0x2a3c30: 0x3050ffff
    ctx->pc = 0x2a3c30u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3c34: 0xc64c0004
    ctx->pc = 0x2a3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3c38: 0xc0bdefe
    ctx->pc = 0x2A3C38u;
    SET_GPR_U32(ctx, 31, 0x2A3C40u);
    ctx->pc = 0x2A3C3Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C40u; }
    }
    if (ctx->pc != 0x2A3C40u) { return; }
    ctx->pc = 0x2A3C40u;
    // 0x2a3c40: 0x3042ffff
    ctx->pc = 0x2a3c40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3c44: 0x21438
    ctx->pc = 0x2a3c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3c48: 0x2028025
    ctx->pc = 0x2a3c48u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3c4c: 0xc0bdefe
    ctx->pc = 0x2A3C4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3C54u);
    ctx->pc = 0x2A3C50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C54u; }
    }
    if (ctx->pc != 0x2A3C54u) { return; }
    ctx->pc = 0x2A3C54u;
    // 0x2a3c54: 0x2103c
    ctx->pc = 0x2a3c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3c58: 0x2028025
    ctx->pc = 0x2a3c58u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3c5c: 0xffb00080
    ctx->pc = 0x2a3c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x2a3c60: 0x24020040
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a3c64: 0xffa20048
    ctx->pc = 0x2a3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    // 0x2a3c68: 0x24020018
    ctx->pc = 0x2a3c68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a3c6c: 0xffa20028
    ctx->pc = 0x2a3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x2a3c70: 0x24020047
    ctx->pc = 0x2a3c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x2a3c74: 0xffa20038
    ctx->pc = 0x2a3c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x2a3c78: 0x24020042
    ctx->pc = 0x2a3c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 66));
    // 0x2a3c7c: 0xffa20058
    ctx->pc = 0x2a3c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x2a3c80: 0xffa00068
    ctx->pc = 0x2a3c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x2a3c84: 0x24030001
    ctx->pc = 0x2a3c84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3c88: 0xffa30078
    ctx->pc = 0x2a3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 3));
    // 0x2a3c8c: 0x24020005
    ctx->pc = 0x2a3c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a3c90: 0xffa20088
    ctx->pc = 0x2a3c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
    // 0x2a3c94: 0xffa30098
    ctx->pc = 0x2a3c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
    // 0x2a3c98: 0xffa200a8
    ctx->pc = 0x2a3c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
    // 0x2a3c9c: 0xc0c0e18
    ctx->pc = 0x2A3C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A3CA4u);
    ctx->pc = 0x2A3CA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CA4u; }
    }
    if (ctx->pc != 0x2A3CA4u) { return; }
    ctx->pc = 0x2A3CA4u;
    // 0x2a3ca4: 0x240401c0
    ctx->pc = 0x2a3ca4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x2a3ca8: 0x3c10003b
    ctx->pc = 0x2a3ca8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    // 0x2a3cac: 0xc0a9fe2
    ctx->pc = 0x2A3CACu;
    SET_GPR_U32(ctx, 31, 0x2A3CB4u);
    ctx->pc = 0x2A3CB0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CB4u; }
    }
    if (ctx->pc != 0x2A3CB4u) { return; }
    ctx->pc = 0x2A3CB4u;
    // 0x2a3cb4: 0x202d
    ctx->pc = 0x2a3cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cb8: 0x282d
    ctx->pc = 0x2a3cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cbc: 0xc0aa02e
    ctx->pc = 0x2A3CBCu;
    SET_GPR_U32(ctx, 31, 0x2A3CC4u);
    ctx->pc = 0x2A3CC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3CC4u; }
    }
    if (ctx->pc != 0x2A3CC4u) { return; }
    ctx->pc = 0x2A3CC4u;
    // 0x2a3cc4: 0x3c031000
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2a3cc8: 0x3463e010
    ctx->pc = 0x2a3cc8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57360));
    // 0x2a3ccc: 0x24020001
    ctx->pc = 0x2a3cccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3cd0: 0xac620000
    ctx->pc = 0x2a3cd0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2a3cd4: 0x3c021000
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a3cd8: 0x34429020
    ctx->pc = 0x2a3cd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36896));
    // 0x2a3cdc: 0xac400000
    ctx->pc = 0x2a3cdcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2a3ce0: 0x3c021000
    ctx->pc = 0x2a3ce0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a3ce4: 0x34429030
    ctx->pc = 0x2a3ce4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36912));
    // 0x2a3ce8: 0xac5d0000
    ctx->pc = 0x2a3ce8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 29)); // MMIO: 0x10000000
    // 0x2a3cec: 0x3c031000
    ctx->pc = 0x2a3cecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2a3cf0: 0x34639000
    ctx->pc = 0x2a3cf0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36864));
    // 0x2a3cf4: 0x24020145
    ctx->pc = 0x2a3cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 325));
    // 0x2a3cf8: 0xac620000
    ctx->pc = 0x2a3cf8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2a3cfc: 0x202d
    ctx->pc = 0x2a3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d00: 0x282d
    ctx->pc = 0x2a3d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d04: 0xc0aa02e
    ctx->pc = 0x2A3D04u;
    SET_GPR_U32(ctx, 31, 0x2A3D0Cu);
    ctx->pc = 0x2A3D08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3D0Cu; }
    }
    if (ctx->pc != 0x2A3D0Cu) { return; }
    ctx->pc = 0x2A3D0Cu;
    // 0x2a3d0c: 0xdfbf00e0
    ctx->pc = 0x2a3d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a3d10: 0xdfb200d0
    ctx->pc = 0x2a3d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a3d14: 0xdfb100c0
    ctx->pc = 0x2a3d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a3d18: 0xdfb000b0
    ctx->pc = 0x2a3d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a3d1c: 0xc7b400f0
    ctx->pc = 0x2a3d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a3d20: 0x3e00008
    ctx->pc = 0x2A3D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3D24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3D28u;
}
