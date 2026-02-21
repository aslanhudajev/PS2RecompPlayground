#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ProcessCritter
// Address: 0x298d88 - 0x2991b4
void ProcessCritter_0x298d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x298d88u;

label_298d88:
    // 0x298d88: 0x27bdffd0
    ctx->pc = 0x298d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_298d8c:
    // 0x298d8c: 0xffbf0020
    ctx->pc = 0x298d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_298d90:
    // 0x298d90: 0xffb10010
    ctx->pc = 0x298d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_298d94:
    // 0x298d94: 0xffb00000
    ctx->pc = 0x298d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_298d98:
    // 0x298d98: 0x80882d
    ctx->pc = 0x298d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_298d9c:
    // 0x298d9c: 0x8e220b64
    ctx->pc = 0x298d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2916)));
label_298da0:
    // 0x298da0: 0x144000ff
label_298da4:
    if (ctx->pc == 0x298DA4u) {
        ctx->pc = 0x298DA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298DA8u;
        goto label_298da8;
    }
    ctx->pc = 0x298DA0u;
    {
        const bool branch_taken_0x298da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x298DA4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x298da0) {
            ctx->pc = 0x2991A0u;
            goto label_2991a0;
        }
    }
    ctx->pc = 0x298DA8u;
label_298da8:
    // 0x298da8: 0x8e300b60
    ctx->pc = 0x298da8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
label_298dac:
    // 0x298dac: 0x5200000c
label_298db0:
    if (ctx->pc == 0x298DB0u) {
        ctx->pc = 0x298DB0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1159), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x298DB4u;
        goto label_298db4;
    }
    ctx->pc = 0x298DACu;
    {
        const bool branch_taken_0x298dac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x298dac) {
            ctx->pc = 0x298DB0u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 1159), (uint8_t)GPR_U32(ctx, 2));
            ctx->pc = 0x298DE0u;
            goto label_298de0;
        }
    }
    ctx->pc = 0x298DB4u;
label_298db4:
    // 0x298db4: 0x44800800
    ctx->pc = 0x298db4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_298db8:
    // 0x298db8: 0xc60004f4
    ctx->pc = 0x298db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298dbc:
    // 0x298dbc: 0x0
    ctx->pc = 0x298dbcu;
    // NOP
label_298dc0:
    // 0x298dc0: 0x46000834
    ctx->pc = 0x298dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_298dc4:
    // 0x298dc4: 0x0
    ctx->pc = 0x298dc4u;
    // NOP
label_298dc8:
    // 0x298dc8: 0x45030001
label_298dcc:
    if (ctx->pc == 0x298DCCu) {
        ctx->pc = 0x298DCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x298DD0u;
        goto label_298dd0;
    }
    ctx->pc = 0x298DC8u;
    {
        const bool branch_taken_0x298dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298dc8) {
            ctx->pc = 0x298DCCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
            ctx->pc = 0x298DD0u;
            goto label_298dd0;
        }
    }
    ctx->pc = 0x298DD0u;
label_298dd0:
    // 0x298dd0: 0x8e100b60
    ctx->pc = 0x298dd0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_298dd4:
    // 0x298dd4: 0x5600fffa
label_298dd8:
    if (ctx->pc == 0x298DD8u) {
        ctx->pc = 0x298DD8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x298DDCu;
        goto label_298ddc;
    }
    ctx->pc = 0x298DD4u;
    {
        const bool branch_taken_0x298dd4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x298dd4) {
            ctx->pc = 0x298DD8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x298DC0u;
            goto label_298dc0;
        }
    }
    ctx->pc = 0x298DDCu;
label_298ddc:
    // 0x298ddc: 0xa2220487
    ctx->pc = 0x298ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1159), (uint8_t)GPR_U32(ctx, 2));
label_298de0:
    // 0x298de0: 0x26300010
    ctx->pc = 0x298de0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
label_298de4:
    // 0x298de4: 0x8e240070
    ctx->pc = 0x298de4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_298de8:
    // 0x298de8: 0x200282d
    ctx->pc = 0x298de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_298dec:
    // 0x298dec: 0xc0b4302
label_298df0:
    if (ctx->pc == 0x298DF0u) {
        ctx->pc = 0x298DF0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298DF4u;
        goto label_298df4;
    }
    ctx->pc = 0x298DECu;
    SET_GPR_U32(ctx, 31, 0x298DF4u);
    ctx->pc = 0x298DF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298DF4u; }
    }
    if (ctx->pc != 0x298DF4u) { return; }
    ctx->pc = 0x298DF4u;
label_298df4:
    // 0x298df4: 0xc6200040
    ctx->pc = 0x298df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298df8:
    // 0x298df8: 0xe6200050
    ctx->pc = 0x298df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_298dfc:
    // 0x298dfc: 0x8e240004
    ctx->pc = 0x298dfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_298e00:
    // 0x298e00: 0xc6200044
    ctx->pc = 0x298e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298e04:
    // 0x298e04: 0xc48100b4
    ctx->pc = 0x298e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298e08:
    // 0x298e08: 0x46010000
    ctx->pc = 0x298e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_298e0c:
    // 0x298e0c: 0xe6200054
    ctx->pc = 0x298e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_298e10:
    // 0x298e10: 0xc6200048
    ctx->pc = 0x298e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298e14:
    // 0x298e14: 0xe6200058
    ctx->pc = 0x298e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_298e18:
    // 0x298e18: 0x248400c0
    ctx->pc = 0x298e18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 192));
label_298e1c:
    // 0x298e1c: 0x26250060
    ctx->pc = 0x298e1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 96));
label_298e20:
    // 0x298e20: 0xc0b5874
label_298e24:
    if (ctx->pc == 0x298E24u) {
        ctx->pc = 0x298E24u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E28u;
        goto label_298e28;
    }
    ctx->pc = 0x298E20u;
    SET_GPR_U32(ctx, 31, 0x298E28u);
    ctx->pc = 0x298E24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat3_0x2d61d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E28u; }
    }
    if (ctx->pc != 0x298E28u) { return; }
    ctx->pc = 0x298E28u;
label_298e28:
    // 0x298e28: 0xc6200040
    ctx->pc = 0x298e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298e2c:
    // 0x298e2c: 0xc6210060
    ctx->pc = 0x298e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298e30:
    // 0x298e30: 0x46010000
    ctx->pc = 0x298e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_298e34:
    // 0x298e34: 0xe6200060
    ctx->pc = 0x298e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_298e38:
    // 0x298e38: 0xc6200044
    ctx->pc = 0x298e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298e3c:
    // 0x298e3c: 0xc6210064
    ctx->pc = 0x298e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298e40:
    // 0x298e40: 0x46010000
    ctx->pc = 0x298e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_298e44:
    // 0x298e44: 0xe6200064
    ctx->pc = 0x298e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_298e48:
    // 0x298e48: 0xc6200048
    ctx->pc = 0x298e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298e4c:
    // 0x298e4c: 0xc6210068
    ctx->pc = 0x298e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298e50:
    // 0x298e50: 0x46010000
    ctx->pc = 0x298e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_298e54:
    // 0x298e54: 0xe6200068
    ctx->pc = 0x298e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_298e58:
    // 0x298e58: 0xc0a4b8e
label_298e5c:
    if (ctx->pc == 0x298E5Cu) {
        ctx->pc = 0x298E5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E60u;
        goto label_298e60;
    }
    ctx->pc = 0x298E58u;
    SET_GPR_U32(ctx, 31, 0x298E60u);
    ctx->pc = 0x298E5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateColnodes_0x292e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E60u; }
    }
    if (ctx->pc != 0x298E60u) { return; }
    ctx->pc = 0x298E60u;
label_298e60:
    // 0x298e60: 0xc0a62d2
label_298e64:
    if (ctx->pc == 0x298E64u) {
        ctx->pc = 0x298E64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E68u;
        goto label_298e68;
    }
    ctx->pc = 0x298E60u;
    SET_GPR_U32(ctx, 31, 0x298E68u);
    ctx->pc = 0x298E64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x298B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDoKnockback_0x298b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E68u; }
    }
    if (ctx->pc != 0x298E68u) { return; }
    ctx->pc = 0x298E68u;
label_298e68:
    // 0x298e68: 0xc0a6284
label_298e6c:
    if (ctx->pc == 0x298E6Cu) {
        ctx->pc = 0x298E6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E70u;
        goto label_298e70;
    }
    ctx->pc = 0x298E68u;
    SET_GPR_U32(ctx, 31, 0x298E70u);
    ctx->pc = 0x298E6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x298A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateCounters_0x298a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E70u; }
    }
    if (ctx->pc != 0x298E70u) { return; }
    ctx->pc = 0x298E70u;
label_298e70:
    // 0x298e70: 0xc0a5ea0
label_298e74:
    if (ctx->pc == 0x298E74u) {
        ctx->pc = 0x298E74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E78u;
        goto label_298e78;
    }
    ctx->pc = 0x298E70u;
    SET_GPR_U32(ctx, 31, 0x298E78u);
    ctx->pc = 0x298E74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateHealthMeter_0x297a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E78u; }
    }
    if (ctx->pc != 0x298E78u) { return; }
    ctx->pc = 0x298E78u;
label_298e78:
    // 0x298e78: 0x8e300b60
    ctx->pc = 0x298e78u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
label_298e7c:
    // 0x298e7c: 0x5200000e
label_298e80:
    if (ctx->pc == 0x298E80u) {
        ctx->pc = 0x298E80u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x298E84u;
        goto label_298e84;
    }
    ctx->pc = 0x298E7Cu;
    {
        const bool branch_taken_0x298e7c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x298e7c) {
            ctx->pc = 0x298E80u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x298EB8u;
            goto label_298eb8;
        }
    }
    ctx->pc = 0x298E84u;
label_298e84:
    // 0x298e84: 0x220202d
    ctx->pc = 0x298e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_298e88:
    // 0x298e88: 0xc0a6336
label_298e8c:
    if (ctx->pc == 0x298E8Cu) {
        ctx->pc = 0x298E8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E90u;
        goto label_298e90;
    }
    ctx->pc = 0x298E88u;
    SET_GPR_U32(ctx, 31, 0x298E90u);
    ctx->pc = 0x298E8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x298CD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateChild_0x298cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E90u; }
    }
    if (ctx->pc != 0x298E90u) { return; }
    ctx->pc = 0x298E90u;
label_298e90:
    // 0x298e90: 0xc0a4b8e
label_298e94:
    if (ctx->pc == 0x298E94u) {
        ctx->pc = 0x298E94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298E98u;
        goto label_298e98;
    }
    ctx->pc = 0x298E90u;
    SET_GPR_U32(ctx, 31, 0x298E98u);
    ctx->pc = 0x298E94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateColnodes_0x292e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298E98u; }
    }
    if (ctx->pc != 0x298E98u) { return; }
    ctx->pc = 0x298E98u;
label_298e98:
    // 0x298e98: 0xc0a6284
label_298e9c:
    if (ctx->pc == 0x298E9Cu) {
        ctx->pc = 0x298E9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298EA0u;
        goto label_298ea0;
    }
    ctx->pc = 0x298E98u;
    SET_GPR_U32(ctx, 31, 0x298EA0u);
    ctx->pc = 0x298E9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x298A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateCounters_0x298a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EA0u; }
    }
    if (ctx->pc != 0x298EA0u) { return; }
    ctx->pc = 0x298EA0u;
label_298ea0:
    // 0x298ea0: 0xc0a5ea0
label_298ea4:
    if (ctx->pc == 0x298EA4u) {
        ctx->pc = 0x298EA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298EA8u;
        goto label_298ea8;
    }
    ctx->pc = 0x298EA0u;
    SET_GPR_U32(ctx, 31, 0x298EA8u);
    ctx->pc = 0x298EA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateHealthMeter_0x297a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298EA8u; }
    }
    if (ctx->pc != 0x298EA8u) { return; }
    ctx->pc = 0x298EA8u;
label_298ea8:
    // 0x298ea8: 0x8e100b60
    ctx->pc = 0x298ea8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_298eac:
    // 0x298eac: 0x5600fff6
label_298eb0:
    if (ctx->pc == 0x298EB0u) {
        ctx->pc = 0x298EB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298EB4u;
        goto label_298eb4;
    }
    ctx->pc = 0x298EACu;
    {
        const bool branch_taken_0x298eac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x298eac) {
            ctx->pc = 0x298EB0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x298E88u;
            goto label_298e88;
        }
    }
    ctx->pc = 0x298EB4u;
label_298eb4:
    // 0x298eb4: 0x8e230008
    ctx->pc = 0x298eb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_298eb8:
    // 0x298eb8: 0x24020003
    ctx->pc = 0x298eb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_298ebc:
    // 0x298ebc: 0x54620020
label_298ec0:
    if (ctx->pc == 0x298EC0u) {
        ctx->pc = 0x298EC0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x298EC4u;
        goto label_298ec4;
    }
    ctx->pc = 0x298EBCu;
    {
        const bool branch_taken_0x298ebc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x298ebc) {
            ctx->pc = 0x298EC0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x298F40u;
            goto label_298f40;
        }
    }
    ctx->pc = 0x298EC4u;
label_298ec4:
    // 0x298ec4: 0x8e300b60
    ctx->pc = 0x298ec4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
label_298ec8:
    // 0x298ec8: 0x1200000e
label_298ecc:
    if (ctx->pc == 0x298ECCu) {
        ctx->pc = 0x298ECCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x298ED0u;
        goto label_298ed0;
    }
    ctx->pc = 0x298EC8u;
    {
        const bool branch_taken_0x298ec8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x298ECCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x298ec8) {
            ctx->pc = 0x298F04u;
            goto label_298f04;
        }
    }
    ctx->pc = 0x298ED0u;
label_298ed0:
    // 0x298ed0: 0x44800800
    ctx->pc = 0x298ed0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_298ed4:
    // 0x298ed4: 0x0
    ctx->pc = 0x298ed4u;
    // NOP
label_298ed8:
    // 0x298ed8: 0x58400007
label_298edc:
    if (ctx->pc == 0x298EDCu) {
        ctx->pc = 0x298EDCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298EE0u;
        goto label_298ee0;
    }
    ctx->pc = 0x298ED8u;
    {
        const bool branch_taken_0x298ed8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x298ed8) {
            ctx->pc = 0x298EDCu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x298EF8u;
            goto label_298ef8;
        }
    }
    ctx->pc = 0x298EE0u;
label_298ee0:
    // 0x298ee0: 0xc60004f4
    ctx->pc = 0x298ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298ee4:
    // 0x298ee4: 0x46010036
    ctx->pc = 0x298ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_298ee8:
    // 0x298ee8: 0x0
    ctx->pc = 0x298ee8u;
    // NOP
label_298eec:
    // 0x298eec: 0x45010002
label_298ef0:
    if (ctx->pc == 0x298EF0u) {
        ctx->pc = 0x298EF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x298EF4u;
        goto label_298ef4;
    }
    ctx->pc = 0x298EECu;
    {
        const bool branch_taken_0x298eec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x298EF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x298eec) {
            ctx->pc = 0x298EF8u;
            goto label_298ef8;
        }
    }
    ctx->pc = 0x298EF4u;
label_298ef4:
    // 0x298ef4: 0x102d
    ctx->pc = 0x298ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298ef8:
    // 0x298ef8: 0x8e100b60
    ctx->pc = 0x298ef8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_298efc:
    // 0x298efc: 0x1600fff6
label_298f00:
    if (ctx->pc == 0x298F00u) {
        ctx->pc = 0x298F04u;
        goto label_298f04;
    }
    ctx->pc = 0x298EFCu;
    {
        const bool branch_taken_0x298efc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x298efc) {
            ctx->pc = 0x298ED8u;
            goto label_298ed8;
        }
    }
    ctx->pc = 0x298F04u;
label_298f04:
    // 0x298f04: 0x28420002
    ctx->pc = 0x298f04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_298f08:
    // 0x298f08: 0x54400005
label_298f0c:
    if (ctx->pc == 0x298F0Cu) {
        ctx->pc = 0x298F0Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x298F10u;
        goto label_298f10;
    }
    ctx->pc = 0x298F08u;
    {
        const bool branch_taken_0x298f08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x298f08) {
            ctx->pc = 0x298F0Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x298F20u;
            goto label_298f20;
        }
    }
    ctx->pc = 0x298F10u;
label_298f10:
    // 0x298f10: 0x3c01bf80
    ctx->pc = 0x298f10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
label_298f14:
    // 0x298f14: 0x44810000
    ctx->pc = 0x298f14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_298f18:
    // 0x298f18: 0xe62004f4
    ctx->pc = 0x298f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1268), bits); }
label_298f1c:
    // 0x298f1c: 0xc62104f4
    ctx->pc = 0x298f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298f20:
    // 0x298f20: 0x44800000
    ctx->pc = 0x298f20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_298f24:
    // 0x298f24: 0x46000836
    ctx->pc = 0x298f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_298f28:
    // 0x298f28: 0x0
    ctx->pc = 0x298f28u;
    // NOP
label_298f2c:
    // 0x298f2c: 0x45020004
label_298f30:
    if (ctx->pc == 0x298F30u) {
        ctx->pc = 0x298F30u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x298F34u;
        goto label_298f34;
    }
    ctx->pc = 0x298F2Cu;
    {
        const bool branch_taken_0x298f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298f2c) {
            ctx->pc = 0x298F30u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x298F40u;
            goto label_298f40;
        }
    }
    ctx->pc = 0x298F34u;
label_298f34:
    // 0x298f34: 0xc0a5e08
label_298f38:
    if (ctx->pc == 0x298F38u) {
        ctx->pc = 0x298F38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298F3Cu;
        goto label_298f3c;
    }
    ctx->pc = 0x298F34u;
    SET_GPR_U32(ctx, 31, 0x298F3Cu);
    ctx->pc = 0x298F38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterKill_0x297820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F3Cu; }
    }
    if (ctx->pc != 0x298F3Cu) { return; }
    ctx->pc = 0x298F3Cu;
label_298f3c:
    // 0x298f3c: 0x8e220004
    ctx->pc = 0x298f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_298f40:
    // 0x298f40: 0x8c420120
    ctx->pc = 0x298f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_298f44:
    // 0x298f44: 0x84430020
    ctx->pc = 0x298f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_298f48:
    // 0x298f48: 0x2c620009
    ctx->pc = 0x298f48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
label_298f4c:
    // 0x298f4c: 0x1040003f
label_298f50:
    if (ctx->pc == 0x298F50u) {
        ctx->pc = 0x298F50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x298F54u;
        goto label_298f54;
    }
    ctx->pc = 0x298F4Cu;
    {
        const bool branch_taken_0x298f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298F50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x298f4c) {
            ctx->pc = 0x29904Cu;
            goto label_29904c;
        }
    }
    ctx->pc = 0x298F54u;
label_298f54:
    // 0x298f54: 0x2442e400
    ctx->pc = 0x298f54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960128));
label_298f58:
    // 0x298f58: 0x31880
    ctx->pc = 0x298f58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_298f5c:
    // 0x298f5c: 0x621821
    ctx->pc = 0x298f5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_298f60:
    // 0x298f60: 0x8c620000
    ctx->pc = 0x298f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_298f64:
    // 0x298f64: 0x400008
label_298f68:
    if (ctx->pc == 0x298F68u) {
        ctx->pc = 0x298F6Cu;
        goto label_298f6c;
    }
    ctx->pc = 0x298F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298D88u: goto label_298d88;
            case 0x298D8Cu: goto label_298d8c;
            case 0x298D90u: goto label_298d90;
            case 0x298D94u: goto label_298d94;
            case 0x298D98u: goto label_298d98;
            case 0x298D9Cu: goto label_298d9c;
            case 0x298DA0u: goto label_298da0;
            case 0x298DA4u: goto label_298da4;
            case 0x298DA8u: goto label_298da8;
            case 0x298DACu: goto label_298dac;
            case 0x298DB0u: goto label_298db0;
            case 0x298DB4u: goto label_298db4;
            case 0x298DB8u: goto label_298db8;
            case 0x298DBCu: goto label_298dbc;
            case 0x298DC0u: goto label_298dc0;
            case 0x298DC4u: goto label_298dc4;
            case 0x298DC8u: goto label_298dc8;
            case 0x298DCCu: goto label_298dcc;
            case 0x298DD0u: goto label_298dd0;
            case 0x298DD4u: goto label_298dd4;
            case 0x298DD8u: goto label_298dd8;
            case 0x298DDCu: goto label_298ddc;
            case 0x298DE0u: goto label_298de0;
            case 0x298DE4u: goto label_298de4;
            case 0x298DE8u: goto label_298de8;
            case 0x298DECu: goto label_298dec;
            case 0x298DF0u: goto label_298df0;
            case 0x298DF4u: goto label_298df4;
            case 0x298DF8u: goto label_298df8;
            case 0x298DFCu: goto label_298dfc;
            case 0x298E00u: goto label_298e00;
            case 0x298E04u: goto label_298e04;
            case 0x298E08u: goto label_298e08;
            case 0x298E0Cu: goto label_298e0c;
            case 0x298E10u: goto label_298e10;
            case 0x298E14u: goto label_298e14;
            case 0x298E18u: goto label_298e18;
            case 0x298E1Cu: goto label_298e1c;
            case 0x298E20u: goto label_298e20;
            case 0x298E24u: goto label_298e24;
            case 0x298E28u: goto label_298e28;
            case 0x298E2Cu: goto label_298e2c;
            case 0x298E30u: goto label_298e30;
            case 0x298E34u: goto label_298e34;
            case 0x298E38u: goto label_298e38;
            case 0x298E3Cu: goto label_298e3c;
            case 0x298E40u: goto label_298e40;
            case 0x298E44u: goto label_298e44;
            case 0x298E48u: goto label_298e48;
            case 0x298E4Cu: goto label_298e4c;
            case 0x298E50u: goto label_298e50;
            case 0x298E54u: goto label_298e54;
            case 0x298E58u: goto label_298e58;
            case 0x298E5Cu: goto label_298e5c;
            case 0x298E60u: goto label_298e60;
            case 0x298E64u: goto label_298e64;
            case 0x298E68u: goto label_298e68;
            case 0x298E6Cu: goto label_298e6c;
            case 0x298E70u: goto label_298e70;
            case 0x298E74u: goto label_298e74;
            case 0x298E78u: goto label_298e78;
            case 0x298E7Cu: goto label_298e7c;
            case 0x298E80u: goto label_298e80;
            case 0x298E84u: goto label_298e84;
            case 0x298E88u: goto label_298e88;
            case 0x298E8Cu: goto label_298e8c;
            case 0x298E90u: goto label_298e90;
            case 0x298E94u: goto label_298e94;
            case 0x298E98u: goto label_298e98;
            case 0x298E9Cu: goto label_298e9c;
            case 0x298EA0u: goto label_298ea0;
            case 0x298EA4u: goto label_298ea4;
            case 0x298EA8u: goto label_298ea8;
            case 0x298EACu: goto label_298eac;
            case 0x298EB0u: goto label_298eb0;
            case 0x298EB4u: goto label_298eb4;
            case 0x298EB8u: goto label_298eb8;
            case 0x298EBCu: goto label_298ebc;
            case 0x298EC0u: goto label_298ec0;
            case 0x298EC4u: goto label_298ec4;
            case 0x298EC8u: goto label_298ec8;
            case 0x298ECCu: goto label_298ecc;
            case 0x298ED0u: goto label_298ed0;
            case 0x298ED4u: goto label_298ed4;
            case 0x298ED8u: goto label_298ed8;
            case 0x298EDCu: goto label_298edc;
            case 0x298EE0u: goto label_298ee0;
            case 0x298EE4u: goto label_298ee4;
            case 0x298EE8u: goto label_298ee8;
            case 0x298EECu: goto label_298eec;
            case 0x298EF0u: goto label_298ef0;
            case 0x298EF4u: goto label_298ef4;
            case 0x298EF8u: goto label_298ef8;
            case 0x298EFCu: goto label_298efc;
            case 0x298F00u: goto label_298f00;
            case 0x298F04u: goto label_298f04;
            case 0x298F08u: goto label_298f08;
            case 0x298F0Cu: goto label_298f0c;
            case 0x298F10u: goto label_298f10;
            case 0x298F14u: goto label_298f14;
            case 0x298F18u: goto label_298f18;
            case 0x298F1Cu: goto label_298f1c;
            case 0x298F20u: goto label_298f20;
            case 0x298F24u: goto label_298f24;
            case 0x298F28u: goto label_298f28;
            case 0x298F2Cu: goto label_298f2c;
            case 0x298F30u: goto label_298f30;
            case 0x298F34u: goto label_298f34;
            case 0x298F38u: goto label_298f38;
            case 0x298F3Cu: goto label_298f3c;
            case 0x298F40u: goto label_298f40;
            case 0x298F44u: goto label_298f44;
            case 0x298F48u: goto label_298f48;
            case 0x298F4Cu: goto label_298f4c;
            case 0x298F50u: goto label_298f50;
            case 0x298F54u: goto label_298f54;
            case 0x298F58u: goto label_298f58;
            case 0x298F5Cu: goto label_298f5c;
            case 0x298F60u: goto label_298f60;
            case 0x298F64u: goto label_298f64;
            case 0x298F68u: goto label_298f68;
            case 0x298F6Cu: goto label_298f6c;
            case 0x298F70u: goto label_298f70;
            case 0x298F74u: goto label_298f74;
            case 0x298F78u: goto label_298f78;
            case 0x298F7Cu: goto label_298f7c;
            case 0x298F80u: goto label_298f80;
            case 0x298F84u: goto label_298f84;
            case 0x298F88u: goto label_298f88;
            case 0x298F8Cu: goto label_298f8c;
            case 0x298F90u: goto label_298f90;
            case 0x298F94u: goto label_298f94;
            case 0x298F98u: goto label_298f98;
            case 0x298F9Cu: goto label_298f9c;
            case 0x298FA0u: goto label_298fa0;
            case 0x298FA4u: goto label_298fa4;
            case 0x298FA8u: goto label_298fa8;
            case 0x298FACu: goto label_298fac;
            case 0x298FB0u: goto label_298fb0;
            case 0x298FB4u: goto label_298fb4;
            case 0x298FB8u: goto label_298fb8;
            case 0x298FBCu: goto label_298fbc;
            case 0x298FC0u: goto label_298fc0;
            case 0x298FC4u: goto label_298fc4;
            case 0x298FC8u: goto label_298fc8;
            case 0x298FCCu: goto label_298fcc;
            case 0x298FD0u: goto label_298fd0;
            case 0x298FD4u: goto label_298fd4;
            case 0x298FD8u: goto label_298fd8;
            case 0x298FDCu: goto label_298fdc;
            case 0x298FE0u: goto label_298fe0;
            case 0x298FE4u: goto label_298fe4;
            case 0x298FE8u: goto label_298fe8;
            case 0x298FECu: goto label_298fec;
            case 0x298FF0u: goto label_298ff0;
            case 0x298FF4u: goto label_298ff4;
            case 0x298FF8u: goto label_298ff8;
            case 0x298FFCu: goto label_298ffc;
            case 0x299000u: goto label_299000;
            case 0x299004u: goto label_299004;
            case 0x299008u: goto label_299008;
            case 0x29900Cu: goto label_29900c;
            case 0x299010u: goto label_299010;
            case 0x299014u: goto label_299014;
            case 0x299018u: goto label_299018;
            case 0x29901Cu: goto label_29901c;
            case 0x299020u: goto label_299020;
            case 0x299024u: goto label_299024;
            case 0x299028u: goto label_299028;
            case 0x29902Cu: goto label_29902c;
            case 0x299030u: goto label_299030;
            case 0x299034u: goto label_299034;
            case 0x299038u: goto label_299038;
            case 0x29903Cu: goto label_29903c;
            case 0x299040u: goto label_299040;
            case 0x299044u: goto label_299044;
            case 0x299048u: goto label_299048;
            case 0x29904Cu: goto label_29904c;
            case 0x299050u: goto label_299050;
            case 0x299054u: goto label_299054;
            case 0x299058u: goto label_299058;
            case 0x29905Cu: goto label_29905c;
            case 0x299060u: goto label_299060;
            case 0x299064u: goto label_299064;
            case 0x299068u: goto label_299068;
            case 0x29906Cu: goto label_29906c;
            case 0x299070u: goto label_299070;
            case 0x299074u: goto label_299074;
            case 0x299078u: goto label_299078;
            case 0x29907Cu: goto label_29907c;
            case 0x299080u: goto label_299080;
            case 0x299084u: goto label_299084;
            case 0x299088u: goto label_299088;
            case 0x29908Cu: goto label_29908c;
            case 0x299090u: goto label_299090;
            case 0x299094u: goto label_299094;
            case 0x299098u: goto label_299098;
            case 0x29909Cu: goto label_29909c;
            case 0x2990A0u: goto label_2990a0;
            case 0x2990A4u: goto label_2990a4;
            case 0x2990A8u: goto label_2990a8;
            case 0x2990ACu: goto label_2990ac;
            case 0x2990B0u: goto label_2990b0;
            case 0x2990B4u: goto label_2990b4;
            case 0x2990B8u: goto label_2990b8;
            case 0x2990BCu: goto label_2990bc;
            case 0x2990C0u: goto label_2990c0;
            case 0x2990C4u: goto label_2990c4;
            case 0x2990C8u: goto label_2990c8;
            case 0x2990CCu: goto label_2990cc;
            case 0x2990D0u: goto label_2990d0;
            case 0x2990D4u: goto label_2990d4;
            case 0x2990D8u: goto label_2990d8;
            case 0x2990DCu: goto label_2990dc;
            case 0x2990E0u: goto label_2990e0;
            case 0x2990E4u: goto label_2990e4;
            case 0x2990E8u: goto label_2990e8;
            case 0x2990ECu: goto label_2990ec;
            case 0x2990F0u: goto label_2990f0;
            case 0x2990F4u: goto label_2990f4;
            case 0x2990F8u: goto label_2990f8;
            case 0x2990FCu: goto label_2990fc;
            case 0x299100u: goto label_299100;
            case 0x299104u: goto label_299104;
            case 0x299108u: goto label_299108;
            case 0x29910Cu: goto label_29910c;
            case 0x299110u: goto label_299110;
            case 0x299114u: goto label_299114;
            case 0x299118u: goto label_299118;
            case 0x29911Cu: goto label_29911c;
            case 0x299120u: goto label_299120;
            case 0x299124u: goto label_299124;
            case 0x299128u: goto label_299128;
            case 0x29912Cu: goto label_29912c;
            case 0x299130u: goto label_299130;
            case 0x299134u: goto label_299134;
            case 0x299138u: goto label_299138;
            case 0x29913Cu: goto label_29913c;
            case 0x299140u: goto label_299140;
            case 0x299144u: goto label_299144;
            case 0x299148u: goto label_299148;
            case 0x29914Cu: goto label_29914c;
            case 0x299150u: goto label_299150;
            case 0x299154u: goto label_299154;
            case 0x299158u: goto label_299158;
            case 0x29915Cu: goto label_29915c;
            case 0x299160u: goto label_299160;
            case 0x299164u: goto label_299164;
            case 0x299168u: goto label_299168;
            case 0x29916Cu: goto label_29916c;
            case 0x299170u: goto label_299170;
            case 0x299174u: goto label_299174;
            case 0x299178u: goto label_299178;
            case 0x29917Cu: goto label_29917c;
            case 0x299180u: goto label_299180;
            case 0x299184u: goto label_299184;
            case 0x299188u: goto label_299188;
            case 0x29918Cu: goto label_29918c;
            case 0x299190u: goto label_299190;
            case 0x299194u: goto label_299194;
            case 0x299198u: goto label_299198;
            case 0x29919Cu: goto label_29919c;
            case 0x2991A0u: goto label_2991a0;
            case 0x2991A4u: goto label_2991a4;
            case 0x2991A8u: goto label_2991a8;
            case 0x2991ACu: goto label_2991ac;
            case 0x2991B0u: goto label_2991b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298F6Cu;
label_298f6c:
    // 0x298f6c: 0xc0a61be
label_298f70:
    if (ctx->pc == 0x298F70u) {
        ctx->pc = 0x298F70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298F74u;
        goto label_298f74;
    }
    ctx->pc = 0x298F6Cu;
    SET_GPR_U32(ctx, 31, 0x298F74u);
    ctx->pc = 0x298F70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2986F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGolemAI_0x2986f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F74u; }
    }
    if (ctx->pc != 0x298F74u) { return; }
    ctx->pc = 0x298F74u;
label_298f74:
    // 0x298f74: 0x10000007
label_298f78:
    if (ctx->pc == 0x298F78u) {
        ctx->pc = 0x298F7Cu;
        goto label_298f7c;
    }
    ctx->pc = 0x298F74u;
    {
        const bool branch_taken_0x298f74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x298f74) {
            ctx->pc = 0x298F94u;
            goto label_298f94;
        }
    }
    ctx->pc = 0x298F7Cu;
label_298f7c:
    // 0x298f7c: 0xc0a61be
label_298f80:
    if (ctx->pc == 0x298F80u) {
        ctx->pc = 0x298F80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298F84u;
        goto label_298f84;
    }
    ctx->pc = 0x298F7Cu;
    SET_GPR_U32(ctx, 31, 0x298F84u);
    ctx->pc = 0x298F80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2986F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGolemAI_0x2986f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F84u; }
    }
    if (ctx->pc != 0x298F84u) { return; }
    ctx->pc = 0x298F84u;
label_298f84:
    // 0x298f84: 0x10000003
label_298f88:
    if (ctx->pc == 0x298F88u) {
        ctx->pc = 0x298F8Cu;
        goto label_298f8c;
    }
    ctx->pc = 0x298F84u;
    {
        const bool branch_taken_0x298f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x298f84) {
            ctx->pc = 0x298F94u;
            goto label_298f94;
        }
    }
    ctx->pc = 0x298F8Cu;
label_298f8c:
    // 0x298f8c: 0xc0a5f6c
label_298f90:
    if (ctx->pc == 0x298F90u) {
        ctx->pc = 0x298F90u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298F94u;
        goto label_298f94;
    }
    ctx->pc = 0x298F8Cu;
    SET_GPR_U32(ctx, 31, 0x298F94u);
    ctx->pc = 0x298F90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x297DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterBossAI_0x297db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F94u; }
    }
    if (ctx->pc != 0x298F94u) { return; }
    ctx->pc = 0x298F94u;
label_298f94:
    // 0x298f94: 0x5440002e
label_298f98:
    if (ctx->pc == 0x298F98u) {
        ctx->pc = 0x298F98u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x298F9Cu;
        goto label_298f9c;
    }
    ctx->pc = 0x298F94u;
    {
        const bool branch_taken_0x298f94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x298f94) {
            ctx->pc = 0x298F98u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x299050u;
            goto label_299050;
        }
    }
    ctx->pc = 0x298F9Cu;
label_298f9c:
    // 0x298f9c: 0x10000080
label_298fa0:
    if (ctx->pc == 0x298FA0u) {
        ctx->pc = 0x298FA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298FA4u;
        goto label_298fa4;
    }
    ctx->pc = 0x298F9Cu;
    {
        const bool branch_taken_0x298f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298FA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x298f9c) {
            ctx->pc = 0x2991A0u;
            goto label_2991a0;
        }
    }
    ctx->pc = 0x298FA4u;
label_298fa4:
    // 0x298fa4: 0xc0a5636
label_298fa8:
    if (ctx->pc == 0x298FA8u) {
        ctx->pc = 0x298FA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x298FACu;
        goto label_298fac;
    }
    ctx->pc = 0x298FA4u;
    SET_GPR_U32(ctx, 31, 0x298FACu);
    ctx->pc = 0x298FA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2958D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAnimate_0x2958d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FACu; }
    }
    if (ctx->pc != 0x298FACu) { return; }
    ctx->pc = 0x298FACu;
label_298fac:
    // 0x298fac: 0x26240040
    ctx->pc = 0x298facu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 64));
label_298fb0:
    // 0x298fb0: 0x282d
    ctx->pc = 0x298fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298fb4:
    // 0x298fb4: 0x3c0140a0
    ctx->pc = 0x298fb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_298fb8:
    // 0x298fb8: 0x44816000
    ctx->pc = 0x298fb8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_298fbc:
    // 0x298fbc: 0x3c014080
    ctx->pc = 0x298fbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
label_298fc0:
    // 0x298fc0: 0x44816800
    ctx->pc = 0x298fc0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_298fc4:
    // 0x298fc4: 0x3c01c47a
    ctx->pc = 0x298fc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50298 << 16));
label_298fc8:
    // 0x298fc8: 0x44817000
    ctx->pc = 0x298fc8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
label_298fcc:
    // 0x298fcc: 0x302d
    ctx->pc = 0x298fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298fd0:
    // 0x298fd0: 0xc087b24
label_298fd4:
    if (ctx->pc == 0x298FD4u) {
        ctx->pc = 0x298FD4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x298FD8u;
        goto label_298fd8;
    }
    ctx->pc = 0x298FD0u;
    SET_GPR_U32(ctx, 31, 0x298FD8u);
    ctx->pc = 0x298FD4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298FD8u; }
    }
    if (ctx->pc != 0x298FD8u) { return; }
    ctx->pc = 0x298FD8u;
label_298fd8:
    // 0x298fd8: 0x1040001c
label_298fdc:
    if (ctx->pc == 0x298FDCu) {
        ctx->pc = 0x298FDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x298FE0u;
        goto label_298fe0;
    }
    ctx->pc = 0x298FD8u;
    {
        const bool branch_taken_0x298fd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x298FDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x298fd8) {
            ctx->pc = 0x29904Cu;
            goto label_29904c;
        }
    }
    ctx->pc = 0x298FE0u;
label_298fe0:
    // 0x298fe0: 0x2450fbb0
    ctx->pc = 0x298fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294966192));
label_298fe4:
    // 0x298fe4: 0x8e220004
    ctx->pc = 0x298fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_298fe8:
    // 0x298fe8: 0xc6000034
    ctx->pc = 0x298fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_298fec:
    // 0x298fec: 0xc44100b0
    ctx->pc = 0x298fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_298ff0:
    // 0x298ff0: 0x46010000
    ctx->pc = 0x298ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_298ff4:
    // 0x298ff4: 0xe6200044
    ctx->pc = 0x298ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_298ff8:
    // 0x298ff8: 0x8e2500d0
    ctx->pc = 0x298ff8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_298ffc:
    // 0x298ffc: 0x50a00014
label_299000:
    if (ctx->pc == 0x299000u) {
        ctx->pc = 0x299000u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x299004u;
        goto label_299004;
    }
    ctx->pc = 0x298FFCu;
    {
        const bool branch_taken_0x298ffc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x298ffc) {
            ctx->pc = 0x299000u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x299050u;
            goto label_299050;
        }
    }
    ctx->pc = 0x299004u;
label_299004:
    // 0x299004: 0xc0b549e
label_299008:
    if (ctx->pc == 0x299008u) {
        ctx->pc = 0x299008u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29900Cu;
        goto label_29900c;
    }
    ctx->pc = 0x299004u;
    SET_GPR_U32(ctx, 31, 0x29900Cu);
    ctx->pc = 0x299008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29900Cu; }
    }
    if (ctx->pc != 0x29900Cu) { return; }
    ctx->pc = 0x29900Cu;
label_29900c:
    // 0x29900c: 0x8e2200d0
    ctx->pc = 0x29900cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_299010:
    // 0x299010: 0xc6200040
    ctx->pc = 0x299010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299014:
    // 0x299014: 0xe4400030
    ctx->pc = 0x299014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_299018:
    // 0x299018: 0x8e2200d0
    ctx->pc = 0x299018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_29901c:
    // 0x29901c: 0xc6200044
    ctx->pc = 0x29901cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299020:
    // 0x299020: 0xe4400034
    ctx->pc = 0x299020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_299024:
    // 0x299024: 0x8e2200d0
    ctx->pc = 0x299024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_299028:
    // 0x299028: 0xc6200048
    ctx->pc = 0x299028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29902c:
    // 0x29902c: 0xe4400038
    ctx->pc = 0x29902cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_299030:
    // 0x299030: 0x8e2200d0
    ctx->pc = 0x299030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_299034:
    // 0x299034: 0xc6000034
    ctx->pc = 0x299034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299038:
    // 0x299038: 0x3c013dcc
    ctx->pc = 0x299038u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
label_29903c:
    // 0x29903c: 0x3421cccd
    ctx->pc = 0x29903cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_299040:
    // 0x299040: 0x44810800
    ctx->pc = 0x299040u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_299044:
    // 0x299044: 0x46010000
    ctx->pc = 0x299044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_299048:
    // 0x299048: 0xe4400034
    ctx->pc = 0x299048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_29904c:
    // 0x29904c: 0x8e230004
    ctx->pc = 0x29904cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_299050:
    // 0x299050: 0x86220124
    ctx->pc = 0x299050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 292)));
label_299054:
    // 0x299054: 0x8c640124
    ctx->pc = 0x299054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 292)));
label_299058:
    // 0x299058: 0x24030090
    ctx->pc = 0x299058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
label_29905c:
    // 0x29905c: 0x431018
    ctx->pc = 0x29905cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_299060:
    // 0x299060: 0x441021
    ctx->pc = 0x299060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_299064:
    // 0x299064: 0x8c420004
    ctx->pc = 0x299064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_299068:
    // 0x299068: 0x30420008
    ctx->pc = 0x299068u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_29906c:
    // 0x29906c: 0x10400009
label_299070:
    if (ctx->pc == 0x299070u) {
        ctx->pc = 0x299070u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x299074u;
        goto label_299074;
    }
    ctx->pc = 0x29906Cu;
    {
        const bool branch_taken_0x29906c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x299070u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 204)));
        if (branch_taken_0x29906c) {
            ctx->pc = 0x299094u;
            goto label_299094;
        }
    }
    ctx->pc = 0x299074u;
label_299074:
    // 0x299074: 0x8c820060
    ctx->pc = 0x299074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_299078:
    // 0x299078: 0x30420040
    ctx->pc = 0x299078u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_29907c:
    // 0x29907c: 0x1440000b
label_299080:
    if (ctx->pc == 0x299080u) {
        ctx->pc = 0x299080u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x299084u;
        goto label_299084;
    }
    ctx->pc = 0x29907Cu;
    {
        const bool branch_taken_0x29907c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x299080u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x29907c) {
            ctx->pc = 0x2990ACu;
            goto label_2990ac;
        }
    }
    ctx->pc = 0x299084u;
label_299084:
    // 0x299084: 0xc0b41b8
label_299088:
    if (ctx->pc == 0x299088u) {
        ctx->pc = 0x299088u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29908Cu;
        goto label_29908c;
    }
    ctx->pc = 0x299084u;
    SET_GPR_U32(ctx, 31, 0x29908Cu);
    ctx->pc = 0x299088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29908Cu; }
    }
    if (ctx->pc != 0x29908Cu) { return; }
    ctx->pc = 0x29908Cu;
label_29908c:
    // 0x29908c: 0x10000007
label_299090:
    if (ctx->pc == 0x299090u) {
        ctx->pc = 0x299094u;
        goto label_299094;
    }
    ctx->pc = 0x29908Cu;
    {
        const bool branch_taken_0x29908c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29908c) {
            ctx->pc = 0x2990ACu;
            goto label_2990ac;
        }
    }
    ctx->pc = 0x299094u;
label_299094:
    // 0x299094: 0x8c820060
    ctx->pc = 0x299094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_299098:
    // 0x299098: 0x30420040
    ctx->pc = 0x299098u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
label_29909c:
    // 0x29909c: 0x10400003
label_2990a0:
    if (ctx->pc == 0x2990A0u) {
        ctx->pc = 0x2990A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2990A4u;
        goto label_2990a4;
    }
    ctx->pc = 0x29909Cu;
    {
        const bool branch_taken_0x29909c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2990A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x29909c) {
            ctx->pc = 0x2990ACu;
            goto label_2990ac;
        }
    }
    ctx->pc = 0x2990A4u;
label_2990a4:
    // 0x2990a4: 0xc0b41e4
label_2990a8:
    if (ctx->pc == 0x2990A8u) {
        ctx->pc = 0x2990A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2990ACu;
        goto label_2990ac;
    }
    ctx->pc = 0x2990A4u;
    SET_GPR_U32(ctx, 31, 0x2990ACu);
    ctx->pc = 0x2990A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990ACu; }
    }
    if (ctx->pc != 0x2990ACu) { return; }
    ctx->pc = 0x2990ACu;
label_2990ac:
    // 0x2990ac: 0xc0a4c1e
label_2990b0:
    if (ctx->pc == 0x2990B0u) {
        ctx->pc = 0x2990B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2990B4u;
        goto label_2990b4;
    }
    ctx->pc = 0x2990ACu;
    SET_GPR_U32(ctx, 31, 0x2990B4u);
    ctx->pc = 0x2990B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293078u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateSkinfx_0x293078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990B4u; }
    }
    if (ctx->pc != 0x2990B4u) { return; }
    ctx->pc = 0x2990B4u;
label_2990b4:
    // 0x2990b4: 0x8e300b60
    ctx->pc = 0x2990b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 2912)));
label_2990b8:
    // 0x2990b8: 0x52000007
label_2990bc:
    if (ctx->pc == 0x2990BCu) {
        ctx->pc = 0x2990BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2990C0u;
        goto label_2990c0;
    }
    ctx->pc = 0x2990B8u;
    {
        const bool branch_taken_0x2990b8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2990b8) {
            ctx->pc = 0x2990BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2990D8u;
            goto label_2990d8;
        }
    }
    ctx->pc = 0x2990C0u;
label_2990c0:
    // 0x2990c0: 0xc0a4c1e
label_2990c4:
    if (ctx->pc == 0x2990C4u) {
        ctx->pc = 0x2990C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2990C8u;
        goto label_2990c8;
    }
    ctx->pc = 0x2990C0u;
    SET_GPR_U32(ctx, 31, 0x2990C8u);
    ctx->pc = 0x2990C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293078u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterUpdateSkinfx_0x293078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2990C8u; }
    }
    if (ctx->pc != 0x2990C8u) { return; }
    ctx->pc = 0x2990C8u;
label_2990c8:
    // 0x2990c8: 0x8e100b60
    ctx->pc = 0x2990c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_2990cc:
    // 0x2990cc: 0x1600fffc
label_2990d0:
    if (ctx->pc == 0x2990D0u) {
        ctx->pc = 0x2990D4u;
        goto label_2990d4;
    }
    ctx->pc = 0x2990CCu;
    {
        const bool branch_taken_0x2990cc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2990cc) {
            ctx->pc = 0x2990C0u;
            goto label_2990c0;
        }
    }
    ctx->pc = 0x2990D4u;
label_2990d4:
    // 0x2990d4: 0x8e220004
    ctx->pc = 0x2990d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2990d8:
    // 0x2990d8: 0x8c440120
    ctx->pc = 0x2990d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_2990dc:
    // 0x2990dc: 0x3c020036
    ctx->pc = 0x2990dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2990e0:
    // 0x2990e0: 0x84830026
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
label_2990e4:
    // 0x2990e4: 0x8442d5f8
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956536)));
label_2990e8:
    // 0x2990e8: 0x1062000c
label_2990ec:
    if (ctx->pc == 0x2990ECu) {
        ctx->pc = 0x2990ECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2990F0u;
        goto label_2990f0;
    }
    ctx->pc = 0x2990E8u;
    {
        const bool branch_taken_0x2990e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2990ECu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x2990e8) {
            ctx->pc = 0x29911Cu;
            goto label_29911c;
        }
    }
    ctx->pc = 0x2990F0u;
label_2990f0:
    // 0x2990f0: 0x8c840028
    ctx->pc = 0x2990f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2990f4:
    // 0x2990f4: 0x50800004
label_2990f8:
    if (ctx->pc == 0x2990F8u) {
        ctx->pc = 0x2990F8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2990FCu;
        goto label_2990fc;
    }
    ctx->pc = 0x2990F4u;
    {
        const bool branch_taken_0x2990f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2990f4) {
            ctx->pc = 0x2990F8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x299108u;
            goto label_299108;
        }
    }
    ctx->pc = 0x2990FCu;
label_2990fc:
    // 0x2990fc: 0xc084cc4
label_299100:
    if (ctx->pc == 0x299100u) {
        ctx->pc = 0x299104u;
        goto label_299104;
    }
    ctx->pc = 0x2990FCu;
    SET_GPR_U32(ctx, 31, 0x299104u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299104u; }
    }
    if (ctx->pc != 0x299104u) { return; }
    ctx->pc = 0x299104u;
label_299104:
    // 0x299104: 0x8e220004
    ctx->pc = 0x299104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_299108:
    // 0x299108: 0x8c430120
    ctx->pc = 0x299108u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_29910c:
    // 0x29910c: 0x3c020036
    ctx->pc = 0x29910cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_299110:
    // 0x299110: 0x9442d5f8
    ctx->pc = 0x299110u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956536)));
label_299114:
    // 0x299114: 0xa4620026
    ctx->pc = 0x299114u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 2));
label_299118:
    // 0x299118: 0x26300010
    ctx->pc = 0x299118u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 16));
label_29911c:
    // 0x29911c: 0x200202d
    ctx->pc = 0x29911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299120:
    // 0x299120: 0xc0b5494
label_299124:
    if (ctx->pc == 0x299124u) {
        ctx->pc = 0x299124u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x299128u;
        goto label_299128;
    }
    ctx->pc = 0x299120u;
    SET_GPR_U32(ctx, 31, 0x299128u);
    ctx->pc = 0x299124u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299128u; }
    }
    if (ctx->pc != 0x299128u) { return; }
    ctx->pc = 0x299128u;
label_299128:
    // 0x299128: 0x8e220070
    ctx->pc = 0x299128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_29912c:
    // 0x29912c: 0x40202d
    ctx->pc = 0x29912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_299130:
    // 0x299130: 0xc0b42dc
label_299134:
    if (ctx->pc == 0x299134u) {
        ctx->pc = 0x299134u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->pc = 0x299138u;
        goto label_299138;
    }
    ctx->pc = 0x299130u;
    SET_GPR_U32(ctx, 31, 0x299138u);
    ctx->pc = 0x299134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->pc = 0x2D0B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        UnparentMatrix_0x2d0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299138u; }
    }
    if (ctx->pc != 0x299138u) { return; }
    ctx->pc = 0x299138u;
label_299138:
    // 0x299138: 0xc6200040
    ctx->pc = 0x299138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29913c:
    // 0x29913c: 0xe6200050
    ctx->pc = 0x29913cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_299140:
    // 0x299140: 0x8e240004
    ctx->pc = 0x299140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_299144:
    // 0x299144: 0xc6200044
    ctx->pc = 0x299144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299148:
    // 0x299148: 0xc48100b4
    ctx->pc = 0x299148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29914c:
    // 0x29914c: 0x46010000
    ctx->pc = 0x29914cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_299150:
    // 0x299150: 0xe6200054
    ctx->pc = 0x299150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_299154:
    // 0x299154: 0xc6200048
    ctx->pc = 0x299154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299158:
    // 0x299158: 0xe6200058
    ctx->pc = 0x299158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_29915c:
    // 0x29915c: 0x248400c0
    ctx->pc = 0x29915cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 192));
label_299160:
    // 0x299160: 0x26250060
    ctx->pc = 0x299160u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 96));
label_299164:
    // 0x299164: 0xc0b5874
label_299168:
    if (ctx->pc == 0x299168u) {
        ctx->pc = 0x299168u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29916Cu;
        goto label_29916c;
    }
    ctx->pc = 0x299164u;
    SET_GPR_U32(ctx, 31, 0x29916Cu);
    ctx->pc = 0x299168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D61D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulVec4Mat3_0x2d61d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29916Cu; }
    }
    if (ctx->pc != 0x29916Cu) { return; }
    ctx->pc = 0x29916Cu;
label_29916c:
    // 0x29916c: 0xc6200040
    ctx->pc = 0x29916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299170:
    // 0x299170: 0xc6210060
    ctx->pc = 0x299170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299174:
    // 0x299174: 0x46010000
    ctx->pc = 0x299174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_299178:
    // 0x299178: 0xe6200060
    ctx->pc = 0x299178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_29917c:
    // 0x29917c: 0xc6200044
    ctx->pc = 0x29917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299180:
    // 0x299180: 0xc6210064
    ctx->pc = 0x299180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299184:
    // 0x299184: 0x46010000
    ctx->pc = 0x299184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_299188:
    // 0x299188: 0xe6200064
    ctx->pc = 0x299188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_29918c:
    // 0x29918c: 0xc6200048
    ctx->pc = 0x29918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299190:
    // 0x299190: 0xc6210068
    ctx->pc = 0x299190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299194:
    // 0x299194: 0x46010000
    ctx->pc = 0x299194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_299198:
    // 0x299198: 0xe6200068
    ctx->pc = 0x299198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_29919c:
    // 0x29919c: 0x24020001
    ctx->pc = 0x29919cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2991a0:
    // 0x2991a0: 0xdfbf0020
    ctx->pc = 0x2991a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2991a4:
    // 0x2991a4: 0xdfb10010
    ctx->pc = 0x2991a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2991a8:
    // 0x2991a8: 0xdfb00000
    ctx->pc = 0x2991a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2991ac:
    // 0x2991ac: 0x3e00008
label_2991b0:
    if (ctx->pc == 0x2991B0u) {
        ctx->pc = 0x2991B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2991B4u;
        goto label_fallthrough_0x2991ac;
    }
    ctx->pc = 0x2991ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2991B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298D88u: goto label_298d88;
            case 0x298D8Cu: goto label_298d8c;
            case 0x298D90u: goto label_298d90;
            case 0x298D94u: goto label_298d94;
            case 0x298D98u: goto label_298d98;
            case 0x298D9Cu: goto label_298d9c;
            case 0x298DA0u: goto label_298da0;
            case 0x298DA4u: goto label_298da4;
            case 0x298DA8u: goto label_298da8;
            case 0x298DACu: goto label_298dac;
            case 0x298DB0u: goto label_298db0;
            case 0x298DB4u: goto label_298db4;
            case 0x298DB8u: goto label_298db8;
            case 0x298DBCu: goto label_298dbc;
            case 0x298DC0u: goto label_298dc0;
            case 0x298DC4u: goto label_298dc4;
            case 0x298DC8u: goto label_298dc8;
            case 0x298DCCu: goto label_298dcc;
            case 0x298DD0u: goto label_298dd0;
            case 0x298DD4u: goto label_298dd4;
            case 0x298DD8u: goto label_298dd8;
            case 0x298DDCu: goto label_298ddc;
            case 0x298DE0u: goto label_298de0;
            case 0x298DE4u: goto label_298de4;
            case 0x298DE8u: goto label_298de8;
            case 0x298DECu: goto label_298dec;
            case 0x298DF0u: goto label_298df0;
            case 0x298DF4u: goto label_298df4;
            case 0x298DF8u: goto label_298df8;
            case 0x298DFCu: goto label_298dfc;
            case 0x298E00u: goto label_298e00;
            case 0x298E04u: goto label_298e04;
            case 0x298E08u: goto label_298e08;
            case 0x298E0Cu: goto label_298e0c;
            case 0x298E10u: goto label_298e10;
            case 0x298E14u: goto label_298e14;
            case 0x298E18u: goto label_298e18;
            case 0x298E1Cu: goto label_298e1c;
            case 0x298E20u: goto label_298e20;
            case 0x298E24u: goto label_298e24;
            case 0x298E28u: goto label_298e28;
            case 0x298E2Cu: goto label_298e2c;
            case 0x298E30u: goto label_298e30;
            case 0x298E34u: goto label_298e34;
            case 0x298E38u: goto label_298e38;
            case 0x298E3Cu: goto label_298e3c;
            case 0x298E40u: goto label_298e40;
            case 0x298E44u: goto label_298e44;
            case 0x298E48u: goto label_298e48;
            case 0x298E4Cu: goto label_298e4c;
            case 0x298E50u: goto label_298e50;
            case 0x298E54u: goto label_298e54;
            case 0x298E58u: goto label_298e58;
            case 0x298E5Cu: goto label_298e5c;
            case 0x298E60u: goto label_298e60;
            case 0x298E64u: goto label_298e64;
            case 0x298E68u: goto label_298e68;
            case 0x298E6Cu: goto label_298e6c;
            case 0x298E70u: goto label_298e70;
            case 0x298E74u: goto label_298e74;
            case 0x298E78u: goto label_298e78;
            case 0x298E7Cu: goto label_298e7c;
            case 0x298E80u: goto label_298e80;
            case 0x298E84u: goto label_298e84;
            case 0x298E88u: goto label_298e88;
            case 0x298E8Cu: goto label_298e8c;
            case 0x298E90u: goto label_298e90;
            case 0x298E94u: goto label_298e94;
            case 0x298E98u: goto label_298e98;
            case 0x298E9Cu: goto label_298e9c;
            case 0x298EA0u: goto label_298ea0;
            case 0x298EA4u: goto label_298ea4;
            case 0x298EA8u: goto label_298ea8;
            case 0x298EACu: goto label_298eac;
            case 0x298EB0u: goto label_298eb0;
            case 0x298EB4u: goto label_298eb4;
            case 0x298EB8u: goto label_298eb8;
            case 0x298EBCu: goto label_298ebc;
            case 0x298EC0u: goto label_298ec0;
            case 0x298EC4u: goto label_298ec4;
            case 0x298EC8u: goto label_298ec8;
            case 0x298ECCu: goto label_298ecc;
            case 0x298ED0u: goto label_298ed0;
            case 0x298ED4u: goto label_298ed4;
            case 0x298ED8u: goto label_298ed8;
            case 0x298EDCu: goto label_298edc;
            case 0x298EE0u: goto label_298ee0;
            case 0x298EE4u: goto label_298ee4;
            case 0x298EE8u: goto label_298ee8;
            case 0x298EECu: goto label_298eec;
            case 0x298EF0u: goto label_298ef0;
            case 0x298EF4u: goto label_298ef4;
            case 0x298EF8u: goto label_298ef8;
            case 0x298EFCu: goto label_298efc;
            case 0x298F00u: goto label_298f00;
            case 0x298F04u: goto label_298f04;
            case 0x298F08u: goto label_298f08;
            case 0x298F0Cu: goto label_298f0c;
            case 0x298F10u: goto label_298f10;
            case 0x298F14u: goto label_298f14;
            case 0x298F18u: goto label_298f18;
            case 0x298F1Cu: goto label_298f1c;
            case 0x298F20u: goto label_298f20;
            case 0x298F24u: goto label_298f24;
            case 0x298F28u: goto label_298f28;
            case 0x298F2Cu: goto label_298f2c;
            case 0x298F30u: goto label_298f30;
            case 0x298F34u: goto label_298f34;
            case 0x298F38u: goto label_298f38;
            case 0x298F3Cu: goto label_298f3c;
            case 0x298F40u: goto label_298f40;
            case 0x298F44u: goto label_298f44;
            case 0x298F48u: goto label_298f48;
            case 0x298F4Cu: goto label_298f4c;
            case 0x298F50u: goto label_298f50;
            case 0x298F54u: goto label_298f54;
            case 0x298F58u: goto label_298f58;
            case 0x298F5Cu: goto label_298f5c;
            case 0x298F60u: goto label_298f60;
            case 0x298F64u: goto label_298f64;
            case 0x298F68u: goto label_298f68;
            case 0x298F6Cu: goto label_298f6c;
            case 0x298F70u: goto label_298f70;
            case 0x298F74u: goto label_298f74;
            case 0x298F78u: goto label_298f78;
            case 0x298F7Cu: goto label_298f7c;
            case 0x298F80u: goto label_298f80;
            case 0x298F84u: goto label_298f84;
            case 0x298F88u: goto label_298f88;
            case 0x298F8Cu: goto label_298f8c;
            case 0x298F90u: goto label_298f90;
            case 0x298F94u: goto label_298f94;
            case 0x298F98u: goto label_298f98;
            case 0x298F9Cu: goto label_298f9c;
            case 0x298FA0u: goto label_298fa0;
            case 0x298FA4u: goto label_298fa4;
            case 0x298FA8u: goto label_298fa8;
            case 0x298FACu: goto label_298fac;
            case 0x298FB0u: goto label_298fb0;
            case 0x298FB4u: goto label_298fb4;
            case 0x298FB8u: goto label_298fb8;
            case 0x298FBCu: goto label_298fbc;
            case 0x298FC0u: goto label_298fc0;
            case 0x298FC4u: goto label_298fc4;
            case 0x298FC8u: goto label_298fc8;
            case 0x298FCCu: goto label_298fcc;
            case 0x298FD0u: goto label_298fd0;
            case 0x298FD4u: goto label_298fd4;
            case 0x298FD8u: goto label_298fd8;
            case 0x298FDCu: goto label_298fdc;
            case 0x298FE0u: goto label_298fe0;
            case 0x298FE4u: goto label_298fe4;
            case 0x298FE8u: goto label_298fe8;
            case 0x298FECu: goto label_298fec;
            case 0x298FF0u: goto label_298ff0;
            case 0x298FF4u: goto label_298ff4;
            case 0x298FF8u: goto label_298ff8;
            case 0x298FFCu: goto label_298ffc;
            case 0x299000u: goto label_299000;
            case 0x299004u: goto label_299004;
            case 0x299008u: goto label_299008;
            case 0x29900Cu: goto label_29900c;
            case 0x299010u: goto label_299010;
            case 0x299014u: goto label_299014;
            case 0x299018u: goto label_299018;
            case 0x29901Cu: goto label_29901c;
            case 0x299020u: goto label_299020;
            case 0x299024u: goto label_299024;
            case 0x299028u: goto label_299028;
            case 0x29902Cu: goto label_29902c;
            case 0x299030u: goto label_299030;
            case 0x299034u: goto label_299034;
            case 0x299038u: goto label_299038;
            case 0x29903Cu: goto label_29903c;
            case 0x299040u: goto label_299040;
            case 0x299044u: goto label_299044;
            case 0x299048u: goto label_299048;
            case 0x29904Cu: goto label_29904c;
            case 0x299050u: goto label_299050;
            case 0x299054u: goto label_299054;
            case 0x299058u: goto label_299058;
            case 0x29905Cu: goto label_29905c;
            case 0x299060u: goto label_299060;
            case 0x299064u: goto label_299064;
            case 0x299068u: goto label_299068;
            case 0x29906Cu: goto label_29906c;
            case 0x299070u: goto label_299070;
            case 0x299074u: goto label_299074;
            case 0x299078u: goto label_299078;
            case 0x29907Cu: goto label_29907c;
            case 0x299080u: goto label_299080;
            case 0x299084u: goto label_299084;
            case 0x299088u: goto label_299088;
            case 0x29908Cu: goto label_29908c;
            case 0x299090u: goto label_299090;
            case 0x299094u: goto label_299094;
            case 0x299098u: goto label_299098;
            case 0x29909Cu: goto label_29909c;
            case 0x2990A0u: goto label_2990a0;
            case 0x2990A4u: goto label_2990a4;
            case 0x2990A8u: goto label_2990a8;
            case 0x2990ACu: goto label_2990ac;
            case 0x2990B0u: goto label_2990b0;
            case 0x2990B4u: goto label_2990b4;
            case 0x2990B8u: goto label_2990b8;
            case 0x2990BCu: goto label_2990bc;
            case 0x2990C0u: goto label_2990c0;
            case 0x2990C4u: goto label_2990c4;
            case 0x2990C8u: goto label_2990c8;
            case 0x2990CCu: goto label_2990cc;
            case 0x2990D0u: goto label_2990d0;
            case 0x2990D4u: goto label_2990d4;
            case 0x2990D8u: goto label_2990d8;
            case 0x2990DCu: goto label_2990dc;
            case 0x2990E0u: goto label_2990e0;
            case 0x2990E4u: goto label_2990e4;
            case 0x2990E8u: goto label_2990e8;
            case 0x2990ECu: goto label_2990ec;
            case 0x2990F0u: goto label_2990f0;
            case 0x2990F4u: goto label_2990f4;
            case 0x2990F8u: goto label_2990f8;
            case 0x2990FCu: goto label_2990fc;
            case 0x299100u: goto label_299100;
            case 0x299104u: goto label_299104;
            case 0x299108u: goto label_299108;
            case 0x29910Cu: goto label_29910c;
            case 0x299110u: goto label_299110;
            case 0x299114u: goto label_299114;
            case 0x299118u: goto label_299118;
            case 0x29911Cu: goto label_29911c;
            case 0x299120u: goto label_299120;
            case 0x299124u: goto label_299124;
            case 0x299128u: goto label_299128;
            case 0x29912Cu: goto label_29912c;
            case 0x299130u: goto label_299130;
            case 0x299134u: goto label_299134;
            case 0x299138u: goto label_299138;
            case 0x29913Cu: goto label_29913c;
            case 0x299140u: goto label_299140;
            case 0x299144u: goto label_299144;
            case 0x299148u: goto label_299148;
            case 0x29914Cu: goto label_29914c;
            case 0x299150u: goto label_299150;
            case 0x299154u: goto label_299154;
            case 0x299158u: goto label_299158;
            case 0x29915Cu: goto label_29915c;
            case 0x299160u: goto label_299160;
            case 0x299164u: goto label_299164;
            case 0x299168u: goto label_299168;
            case 0x29916Cu: goto label_29916c;
            case 0x299170u: goto label_299170;
            case 0x299174u: goto label_299174;
            case 0x299178u: goto label_299178;
            case 0x29917Cu: goto label_29917c;
            case 0x299180u: goto label_299180;
            case 0x299184u: goto label_299184;
            case 0x299188u: goto label_299188;
            case 0x29918Cu: goto label_29918c;
            case 0x299190u: goto label_299190;
            case 0x299194u: goto label_299194;
            case 0x299198u: goto label_299198;
            case 0x29919Cu: goto label_29919c;
            case 0x2991A0u: goto label_2991a0;
            case 0x2991A4u: goto label_2991a4;
            case 0x2991A8u: goto label_2991a8;
            case 0x2991ACu: goto label_2991ac;
            case 0x2991B0u: goto label_2991b0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2991ac:
    ctx->pc = 0x2991B4u;
}
