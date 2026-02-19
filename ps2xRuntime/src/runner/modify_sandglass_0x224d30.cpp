#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: modify_sandglass
// Address: 0x224d30 - 0x224e54
void modify_sandglass_0x224d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224d30u;

    // 0x224d30: 0x27bdffc0
    ctx->pc = 0x224d30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x224d34: 0xffbf0010
    ctx->pc = 0x224d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224d38: 0xffb00000
    ctx->pc = 0x224d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224d3c: 0xe7b60030
    ctx->pc = 0x224d3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x224d40: 0xe7b50028
    ctx->pc = 0x224d40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x224d44: 0xe7b40020
    ctx->pc = 0x224d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x224d48: 0x460d6541
    ctx->pc = 0x224d48u;
    ctx->f[21] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x224d4c: 0x0
    ctx->pc = 0x224d4cu;
    // NOP
    // 0x224d50: 0x0
    ctx->pc = 0x224d50u;
    // NOP
    // 0x224d54: 0x460cad43
    ctx->pc = 0x224d54u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[12];
    // 0x224d58: 0x3c100032
    ctx->pc = 0x224d58u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x224d5c: 0x26100898
    ctx->pc = 0x224d5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2200));
    // 0x224d60: 0x3c014224
    ctx->pc = 0x224d60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16932 << 16));
    // 0x224d64: 0x44817000
    ctx->pc = 0x224d64u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x224d68: 0x460eab82
    ctx->pc = 0x224d68u;
    ctx->f[14] = FPU_MUL_S(ctx->f[21], ctx->f[14]);
    // 0x224d6c: 0x3c0141b8
    ctx->pc = 0x224d6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16824 << 16));
    // 0x224d70: 0x44810000
    ctx->pc = 0x224d70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224d74: 0x46007380
    ctx->pc = 0x224d74u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x224d78: 0x3c013c00
    ctx->pc = 0x224d78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15360 << 16));
    // 0x224d7c: 0x4481b000
    ctx->pc = 0x224d7cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x224d80: 0x8e040004
    ctx->pc = 0x224d80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224d84: 0x3c01bf80
    ctx->pc = 0x224d84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x224d88: 0x44816000
    ctx->pc = 0x224d88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224d8c: 0x46006346
    ctx->pc = 0x224d8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x224d90: 0x46167382
    ctx->pc = 0x224d90u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    // 0x224d94: 0xc0b0e6a
    ctx->pc = 0x224D94u;
    SET_GPR_U32(ctx, 31, 0x224D9Cu);
    ctx->pc = 0x224D98u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224D9Cu; }
    }
    if (ctx->pc != 0x224D9Cu) { return; }
    ctx->pc = 0x224D9Cu;
    // 0x224d9c: 0x3c01421c
    ctx->pc = 0x224d9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16924 << 16));
    // 0x224da0: 0x4481a000
    ctx->pc = 0x224da0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x224da4: 0x4614ad02
    ctx->pc = 0x224da4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x224da8: 0xc0b5486
    ctx->pc = 0x224DA8u;
    SET_GPR_U32(ctx, 31, 0x224DB0u);
    ctx->pc = 0x224DACu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DB0u; }
    }
    if (ctx->pc != 0x224DB0u) { return; }
    ctx->pc = 0x224DB0u;
    // 0x224db0: 0x24060029
    ctx->pc = 0x224db0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 41));
    // 0x224db4: 0x8e040004
    ctx->pc = 0x224db4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224db8: 0x282d
    ctx->pc = 0x224db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224dbc: 0xc0b0cf6
    ctx->pc = 0x224DBCu;
    SET_GPR_U32(ctx, 31, 0x224DC4u);
    ctx->pc = 0x224DC0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DC4u; }
    }
    if (ctx->pc != 0x224DC4u) { return; }
    ctx->pc = 0x224DC4u;
    // 0x224dc4: 0xc0b5486
    ctx->pc = 0x224DC4u;
    SET_GPR_U32(ctx, 31, 0x224DCCu);
    ctx->pc = 0x224DC8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DCCu; }
    }
    if (ctx->pc != 0x224DCCu) { return; }
    ctx->pc = 0x224DCCu;
    // 0x224dcc: 0x8e040004
    ctx->pc = 0x224dccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224dd0: 0xc0b0dc6
    ctx->pc = 0x224DD0u;
    SET_GPR_U32(ctx, 31, 0x224DD8u);
    ctx->pc = 0x224DD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 24));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224DD8u; }
    }
    if (ctx->pc != 0x224DD8u) { return; }
    ctx->pc = 0x224DD8u;
    // 0x224dd8: 0x3c014218
    ctx->pc = 0x224dd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16920 << 16));
    // 0x224ddc: 0x44810000
    ctx->pc = 0x224ddcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x224de0: 0x4600ad42
    ctx->pc = 0x224de0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x224de4: 0x3c0142d2
    ctx->pc = 0x224de4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17106 << 16));
    // 0x224de8: 0x44817000
    ctx->pc = 0x224de8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x224dec: 0x46157381
    ctx->pc = 0x224decu;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[21]);
    // 0x224df0: 0x8e040008
    ctx->pc = 0x224df0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224df4: 0x3c01bf80
    ctx->pc = 0x224df4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x224df8: 0x44816000
    ctx->pc = 0x224df8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x224dfc: 0x46006346
    ctx->pc = 0x224dfcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x224e00: 0x46167382
    ctx->pc = 0x224e00u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[22]);
    // 0x224e04: 0xc0b0e6a
    ctx->pc = 0x224E04u;
    SET_GPR_U32(ctx, 31, 0x224E0Cu);
    ctx->pc = 0x224E08u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E0Cu; }
    }
    if (ctx->pc != 0x224E0Cu) { return; }
    ctx->pc = 0x224E0Cu;
    // 0x224e0c: 0xc0b5486
    ctx->pc = 0x224E0Cu;
    SET_GPR_U32(ctx, 31, 0x224E14u);
    ctx->pc = 0x224E10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E14u; }
    }
    if (ctx->pc != 0x224E14u) { return; }
    ctx->pc = 0x224E14u;
    // 0x224e14: 0x8e040008
    ctx->pc = 0x224e14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224e18: 0x282d
    ctx->pc = 0x224e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e1c: 0xc0b0cf6
    ctx->pc = 0x224E1Cu;
    SET_GPR_U32(ctx, 31, 0x224E24u);
    ctx->pc = 0x224E20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 23));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E24u; }
    }
    if (ctx->pc != 0x224E24u) { return; }
    ctx->pc = 0x224E24u;
    // 0x224e24: 0xc0b5486
    ctx->pc = 0x224E24u;
    SET_GPR_U32(ctx, 31, 0x224E2Cu);
    ctx->pc = 0x224E28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D5218u;
    {
        const uint32_t __entryPc = ctx->pc;
        Round_0x2d5218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224E2Cu; }
    }
    if (ctx->pc != 0x224E2Cu) { return; }
    ctx->pc = 0x224E2Cu;
    // 0x224e2c: 0x2405006a
    ctx->pc = 0x224e2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 106));
    // 0x224e30: 0x8e040008
    ctx->pc = 0x224e30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224e34: 0xa22823
    ctx->pc = 0x224e34u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x224e38: 0xdfbf0010
    ctx->pc = 0x224e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224e3c: 0xdfb00000
    ctx->pc = 0x224e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224e40: 0xc7b60030
    ctx->pc = 0x224e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x224e44: 0xc7b50028
    ctx->pc = 0x224e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x224e48: 0xc7b40020
    ctx->pc = 0x224e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224e4c: 0x80b0dc6
    ctx->pc = 0x224E4Cu;
    ctx->pc = 0x224E50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2C3718u;
    MBBlitSetY_0x2c3718(rdram, ctx, runtime); return;
    ctx->pc = 0x224E54u;
}
