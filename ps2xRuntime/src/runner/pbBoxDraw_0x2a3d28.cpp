#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBoxDraw
// Address: 0x2a3d28 - 0x2a3f64
void pbBoxDraw_0x2a3d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3d28u;

    // 0x2a3d28: 0x27bdfea0
    ctx->pc = 0x2a3d28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2a3d2c: 0xffbf0120
    ctx->pc = 0x2a3d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2a3d30: 0xffb40110
    ctx->pc = 0x2a3d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x2a3d34: 0xffb30100
    ctx->pc = 0x2a3d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 19));
    // 0x2a3d38: 0xffb200f0
    ctx->pc = 0x2a3d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x2a3d3c: 0xffb100e0
    ctx->pc = 0x2a3d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 17));
    // 0x2a3d40: 0xffb000d0
    ctx->pc = 0x2a3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2a3d44: 0xe7b80150
    ctx->pc = 0x2a3d44u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2a3d48: 0xe7b70148
    ctx->pc = 0x2a3d48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2a3d4c: 0xe7b60140
    ctx->pc = 0x2a3d4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2a3d50: 0xe7b50138
    ctx->pc = 0x2a3d50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a3d54: 0xe7b40130
    ctx->pc = 0x2a3d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a3d58: 0x46006dc6
    ctx->pc = 0x2a3d58u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2a3d5c: 0x46007546
    ctx->pc = 0x2a3d5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2a3d60: 0x46007e06
    ctx->pc = 0x2a3d60u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2a3d64: 0x46008586
    ctx->pc = 0x2a3d64u;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x2a3d68: 0x3c020036
    ctx->pc = 0x2a3d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3d6c: 0x8c43dee0
    ctx->pc = 0x2a3d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3d70: 0x3c027000
    ctx->pc = 0x2a3d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2a3d74: 0x3442000c
    ctx->pc = 0x2a3d74u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12));
    // 0x2a3d78: 0xafa20000
    ctx->pc = 0x2a3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a3d7c: 0xafa00004
    ctx->pc = 0x2a3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a3d80: 0xafa00008
    ctx->pc = 0x2a3d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a3d84: 0x3c025000
    ctx->pc = 0x2a3d84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2a3d88: 0x3442000c
    ctx->pc = 0x2a3d88u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 12));
    // 0x2a3d8c: 0xafa2000c
    ctx->pc = 0x2a3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2a3d90: 0x3402800b
    ctx->pc = 0x2a3d90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32779));
    // 0x2a3d94: 0xafa20010
    ctx->pc = 0x2a3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2a3d98: 0x3c021000
    ctx->pc = 0x2a3d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a3d9c: 0xafa20014
    ctx->pc = 0x2a3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2a3da0: 0x2402000e
    ctx->pc = 0x2a3da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a3da4: 0xafa20018
    ctx->pc = 0x2a3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2a3da8: 0xafa0001c
    ctx->pc = 0x2a3da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2a3dac: 0xffa00020
    ctx->pc = 0x2a3dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x2a3db0: 0xffa00030
    ctx->pc = 0x2a3db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
    // 0x2a3db4: 0x8c630010
    ctx->pc = 0x2a3db4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a3db8: 0x8c620020
    ctx->pc = 0x2a3db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2a3dbc: 0x8c630024
    ctx->pc = 0x2a3dbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2a3dc0: 0x21400
    ctx->pc = 0x2a3dc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a3dc4: 0xafa20040
    ctx->pc = 0x2a3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2a3dc8: 0x31c00
    ctx->pc = 0x2a3dc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x2a3dcc: 0xafa30044
    ctx->pc = 0x2a3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x2a3dd0: 0xffa00050
    ctx->pc = 0x2a3dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x2a3dd4: 0x24020002
    ctx->pc = 0x2a3dd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3dd8: 0xffa20060
    ctx->pc = 0x2a3dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x2a3ddc: 0x41402
    ctx->pc = 0x2a3ddcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 16));
    // 0x2a3de0: 0x304200ff
    ctx->pc = 0x2a3de0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x2a3de4: 0x3083ff00
    ctx->pc = 0x2a3de4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65280));
    // 0x2a3de8: 0x431025
    ctx->pc = 0x2a3de8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3dec: 0x308400ff
    ctx->pc = 0x2a3decu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x2a3df0: 0x42400
    ctx->pc = 0x2a3df0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x2a3df4: 0x441025
    ctx->pc = 0x2a3df4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a3df8: 0xffa20070
    ctx->pc = 0x2a3df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x2a3dfc: 0x3c014180
    ctx->pc = 0x2a3dfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2a3e00: 0x4481a000
    ctx->pc = 0x2a3e00u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2a3e04: 0xc0bdefe
    ctx->pc = 0x2A3E04u;
    SET_GPR_U32(ctx, 31, 0x2A3E0Cu);
    ctx->pc = 0x2A3E08u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E0Cu; }
    }
    if (ctx->pc != 0x2A3E0Cu) { return; }
    ctx->pc = 0x2A3E0Cu;
    // 0x2a3e0c: 0x3053ffff
    ctx->pc = 0x2a3e0cu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3e10: 0xc0bdefe
    ctx->pc = 0x2A3E10u;
    SET_GPR_U32(ctx, 31, 0x2A3E18u);
    ctx->pc = 0x2A3E14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E18u; }
    }
    if (ctx->pc != 0x2A3E18u) { return; }
    ctx->pc = 0x2A3E18u;
    // 0x2a3e18: 0x3050ffff
    ctx->pc = 0x2a3e18u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3e1c: 0x108438
    ctx->pc = 0x2a3e1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x2a3e20: 0x270a025
    ctx->pc = 0x2a3e20u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2a3e24: 0xc0bdefe
    ctx->pc = 0x2A3E24u;
    SET_GPR_U32(ctx, 31, 0x2A3E2Cu);
    ctx->pc = 0x2A3E28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E2Cu; }
    }
    if (ctx->pc != 0x2A3E2Cu) { return; }
    ctx->pc = 0x2A3E2Cu;
    // 0x2a3e2c: 0x2903c
    ctx->pc = 0x2a3e2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3e30: 0x292a025
    ctx->pc = 0x2a3e30u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2a3e34: 0xffb40080
    ctx->pc = 0x2a3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2a3e38: 0xc0bdefe
    ctx->pc = 0x2A3E38u;
    SET_GPR_U32(ctx, 31, 0x2A3E40u);
    ctx->pc = 0x2A3E3Cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E40u; }
    }
    if (ctx->pc != 0x2A3E40u) { return; }
    ctx->pc = 0x2A3E40u;
    // 0x2a3e40: 0x3051ffff
    ctx->pc = 0x2a3e40u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3e44: 0x2308025
    ctx->pc = 0x2a3e44u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a3e48: 0x2128025
    ctx->pc = 0x2a3e48u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2a3e4c: 0xffb00090
    ctx->pc = 0x2a3e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2a3e50: 0xc0bdefe
    ctx->pc = 0x2A3E50u;
    SET_GPR_U32(ctx, 31, 0x2A3E58u);
    ctx->pc = 0x2A3E54u;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    ctx->pc = 0x2F7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixunssfdi_0x2f7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3E58u; }
    }
    if (ctx->pc != 0x2A3E58u) { return; }
    ctx->pc = 0x2A3E58u;
    // 0x2a3e58: 0x3042ffff
    ctx->pc = 0x2a3e58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2a3e5c: 0x21438
    ctx->pc = 0x2a3e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3e60: 0x2228825
    ctx->pc = 0x2a3e60u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a3e64: 0x2328825
    ctx->pc = 0x2a3e64u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2a3e68: 0xffb100a0
    ctx->pc = 0x2a3e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
    // 0x2a3e6c: 0x2629825
    ctx->pc = 0x2a3e6cu;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a3e70: 0x2729825
    ctx->pc = 0x2a3e70u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2a3e74: 0xffb300b0
    ctx->pc = 0x2a3e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2a3e78: 0xffb400c0
    ctx->pc = 0x2a3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2a3e7c: 0x24020018
    ctx->pc = 0x2a3e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a3e80: 0xffa20028
    ctx->pc = 0x2a3e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x2a3e84: 0x24020047
    ctx->pc = 0x2a3e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x2a3e88: 0xffa20038
    ctx->pc = 0x2a3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x2a3e8c: 0x24020040
    ctx->pc = 0x2a3e8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a3e90: 0xffa20048
    ctx->pc = 0x2a3e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    // 0x2a3e94: 0x24020042
    ctx->pc = 0x2a3e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 66));
    // 0x2a3e98: 0xffa20058
    ctx->pc = 0x2a3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
    // 0x2a3e9c: 0xffa00068
    ctx->pc = 0x2a3e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 0));
    // 0x2a3ea0: 0x24020001
    ctx->pc = 0x2a3ea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3ea4: 0xffa20078
    ctx->pc = 0x2a3ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
    // 0x2a3ea8: 0x24020005
    ctx->pc = 0x2a3ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a3eac: 0xffa20088
    ctx->pc = 0x2a3eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
    // 0x2a3eb0: 0xffa20098
    ctx->pc = 0x2a3eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
    // 0x2a3eb4: 0xffa200a8
    ctx->pc = 0x2a3eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 2));
    // 0x2a3eb8: 0xffa200b8
    ctx->pc = 0x2a3eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 2));
    // 0x2a3ebc: 0xffa200c8
    ctx->pc = 0x2a3ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 2));
    // 0x2a3ec0: 0xc0c0e18
    ctx->pc = 0x2A3EC0u;
    SET_GPR_U32(ctx, 31, 0x2A3EC8u);
    ctx->pc = 0x2A3EC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EC8u; }
    }
    if (ctx->pc != 0x2A3EC8u) { return; }
    ctx->pc = 0x2A3EC8u;
    // 0x2a3ec8: 0x240401c0
    ctx->pc = 0x2a3ec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x2a3ecc: 0x3c10003b
    ctx->pc = 0x2a3eccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    // 0x2a3ed0: 0xc0a9fe2
    ctx->pc = 0x2A3ED0u;
    SET_GPR_U32(ctx, 31, 0x2A3ED8u);
    ctx->pc = 0x2A3ED4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3ED8u; }
    }
    if (ctx->pc != 0x2A3ED8u) { return; }
    ctx->pc = 0x2A3ED8u;
    // 0x2a3ed8: 0x202d
    ctx->pc = 0x2a3ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3edc: 0x282d
    ctx->pc = 0x2a3edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ee0: 0xc0aa02e
    ctx->pc = 0x2A3EE0u;
    SET_GPR_U32(ctx, 31, 0x2A3EE8u);
    ctx->pc = 0x2A3EE4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3EE8u; }
    }
    if (ctx->pc != 0x2A3EE8u) { return; }
    ctx->pc = 0x2A3EE8u;
    // 0x2a3ee8: 0x3c031000
    ctx->pc = 0x2a3ee8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2a3eec: 0x3463e010
    ctx->pc = 0x2a3eecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57360));
    // 0x2a3ef0: 0x24020001
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3ef4: 0xac620000
    ctx->pc = 0x2a3ef4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2a3ef8: 0x3c021000
    ctx->pc = 0x2a3ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a3efc: 0x34429020
    ctx->pc = 0x2a3efcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36896));
    // 0x2a3f00: 0xac400000
    ctx->pc = 0x2a3f00u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2a3f04: 0x3c021000
    ctx->pc = 0x2a3f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2a3f08: 0x34429030
    ctx->pc = 0x2a3f08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36912));
    // 0x2a3f0c: 0xac5d0000
    ctx->pc = 0x2a3f0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 29)); // MMIO: 0x10000000
    // 0x2a3f10: 0x3c031000
    ctx->pc = 0x2a3f10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2a3f14: 0x34639000
    ctx->pc = 0x2a3f14u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 36864));
    // 0x2a3f18: 0x24020145
    ctx->pc = 0x2a3f18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 325));
    // 0x2a3f1c: 0xac620000
    ctx->pc = 0x2a3f1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2a3f20: 0x202d
    ctx->pc = 0x2a3f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f24: 0x282d
    ctx->pc = 0x2a3f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f28: 0xc0aa02e
    ctx->pc = 0x2A3F28u;
    SET_GPR_U32(ctx, 31, 0x2A3F30u);
    ctx->pc = 0x2A3F2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294961264));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3F30u; }
    }
    if (ctx->pc != 0x2A3F30u) { return; }
    ctx->pc = 0x2A3F30u;
    // 0x2a3f30: 0xdfbf0120
    ctx->pc = 0x2a3f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a3f34: 0xdfb40110
    ctx->pc = 0x2a3f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a3f38: 0xdfb30100
    ctx->pc = 0x2a3f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a3f3c: 0xdfb200f0
    ctx->pc = 0x2a3f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a3f40: 0xdfb100e0
    ctx->pc = 0x2a3f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a3f44: 0xdfb000d0
    ctx->pc = 0x2a3f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a3f48: 0xc7b80150
    ctx->pc = 0x2a3f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a3f4c: 0xc7b70148
    ctx->pc = 0x2a3f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a3f50: 0xc7b60140
    ctx->pc = 0x2a3f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a3f54: 0xc7b50138
    ctx->pc = 0x2a3f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a3f58: 0xc7b40130
    ctx->pc = 0x2a3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a3f5c: 0x3e00008
    ctx->pc = 0x2A3F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3F64u;
}
