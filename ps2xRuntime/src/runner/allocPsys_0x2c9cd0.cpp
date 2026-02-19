#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: allocPsys
// Address: 0x2c9cd0 - 0x2c9f08
void allocPsys_0x2c9cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9cd0u;

    // 0x2c9cd0: 0x27bdffb0
    ctx->pc = 0x2c9cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9cd4: 0xffbf0040
    ctx->pc = 0x2c9cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c9cd8: 0xffb30030
    ctx->pc = 0x2c9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c9cdc: 0xffb20020
    ctx->pc = 0x2c9cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c9ce0: 0xffb10010
    ctx->pc = 0x2c9ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c9ce4: 0xffb00000
    ctx->pc = 0x2c9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9ce8: 0x3c020036
    ctx->pc = 0x2c9ce8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c9cec: 0x8c53dee0
    ctx->pc = 0x2c9cecu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c9cf0: 0x3c02003a
    ctx->pc = 0x2c9cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c9cf4: 0x2452aa38
    ctx->pc = 0x2c9cf4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2c9cf8: 0x8e420010
    ctx->pc = 0x2c9cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2c9cfc: 0x24420001
    ctx->pc = 0x2c9cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c9d00: 0x10800008
    ctx->pc = 0x2C9D00u;
    {
        const bool branch_taken_0x2c9d00 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9D04u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2c9d00) {
            ctx->pc = 0x2C9D24u;
            goto label_2c9d24;
        }
    }
    ctx->pc = 0x2C9D08u;
    // 0x2c9d08: 0xc0b4f52
    ctx->pc = 0x2C9D08u;
    SET_GPR_U32(ctx, 31, 0x2C9D10u);
    ctx->pc = 0x2C9D0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 304));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D10u; }
    }
    if (ctx->pc != 0x2C9D10u) { return; }
    ctx->pc = 0x2C9D10u;
    // 0x2c9d10: 0x40802d
    ctx->pc = 0x2c9d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d14: 0x8e420024
    ctx->pc = 0x2c9d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2c9d18: 0x24420130
    ctx->pc = 0x2c9d18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 304));
    // 0x2c9d1c: 0x10000005
    ctx->pc = 0x2C9D1Cu;
    {
        const bool branch_taken_0x2c9d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9D20u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        if (branch_taken_0x2c9d1c) {
            ctx->pc = 0x2C9D34u;
            goto label_2c9d34;
        }
    }
    ctx->pc = 0x2C9D24u;
label_2c9d24:
    // 0x2c9d24: 0x24040130
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 304));
    // 0x2c9d28: 0xc0b23a4
    ctx->pc = 0x2C9D28u;
    SET_GPR_U32(ctx, 31, 0x2C9D30u);
    ctx->pc = 0x2C9D2Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->pc = 0x2C8E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        allocPsysMem_0x2c8e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D30u; }
    }
    if (ctx->pc != 0x2C9D30u) { return; }
    ctx->pc = 0x2C9D30u;
    // 0x2c9d30: 0x40802d
    ctx->pc = 0x2c9d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9d34:
    // 0x2c9d34: 0x16000003
    ctx->pc = 0x2C9D34u;
    {
        const bool branch_taken_0x2c9d34 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C9D38u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d34) {
            ctx->pc = 0x2C9D44u;
            goto label_2c9d44;
        }
    }
    ctx->pc = 0x2C9D3Cu;
    // 0x2c9d3c: 0x1000006b
    ctx->pc = 0x2C9D3Cu;
    {
        const bool branch_taken_0x2c9d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9D40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d3c) {
            ctx->pc = 0x2C9EECu;
            goto label_2c9eec;
        }
    }
    ctx->pc = 0x2C9D44u;
label_2c9d44:
    // 0x2c9d44: 0x282d
    ctx->pc = 0x2c9d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d48: 0xc0becc6
    ctx->pc = 0x2C9D48u;
    SET_GPR_U32(ctx, 31, 0x2C9D50u);
    ctx->pc = 0x2C9D4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 304));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D50u; }
    }
    if (ctx->pc != 0x2C9D50u) { return; }
    ctx->pc = 0x2C9D50u;
    // 0x2c9d50: 0xc0b242e
    ctx->pc = 0x2C9D50u;
    SET_GPR_U32(ctx, 31, 0x2C9D58u);
    ctx->pc = 0x2C9D54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C90B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        addToActive_0x2c90b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9D58u; }
    }
    if (ctx->pc != 0x2C9D58u) { return; }
    ctx->pc = 0x2C9D58u;
    // 0x2c9d58: 0x8e420010
    ctx->pc = 0x2c9d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2c9d5c: 0xae020000
    ctx->pc = 0x2c9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c9d60: 0x2402012c
    ctx->pc = 0x2c9d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 300));
    // 0x2c9d64: 0xa602003a
    ctx->pc = 0x2c9d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9d68: 0xa602003c
    ctx->pc = 0x2c9d68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c9d6c: 0xae000044
    ctx->pc = 0x2c9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2c9d70: 0x3c013f80
    ctx->pc = 0x2c9d70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c9d74: 0x44810800
    ctx->pc = 0x2c9d74u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c9d78: 0xe6010048
    ctx->pc = 0x2c9d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2c9d7c: 0xae00004c
    ctx->pc = 0x2c9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2c9d80: 0x3c01bf80
    ctx->pc = 0x2c9d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2c9d84: 0x44810000
    ctx->pc = 0x2c9d84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9d88: 0xe6000040
    ctx->pc = 0x2c9d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2c9d8c: 0xae000050
    ctx->pc = 0x2c9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2c9d90: 0xae000054
    ctx->pc = 0x2c9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2c9d94: 0xae000058
    ctx->pc = 0x2c9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2c9d98: 0xae0000cc
    ctx->pc = 0x2c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x2c9d9c: 0xe60100d0
    ctx->pc = 0x2c9d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x2c9da0: 0xe60100d4
    ctx->pc = 0x2c9da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2c9da4: 0xe60100d8
    ctx->pc = 0x2c9da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x2c9da8: 0xe60100dc
    ctx->pc = 0x2c9da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x2c9dac: 0x24020014
    ctx->pc = 0x2c9dacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9db0: 0xa2020060
    ctx->pc = 0x2c9db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c9db4: 0x2402000a
    ctx->pc = 0x2c9db4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c9db8: 0xa2020061
    ctx->pc = 0x2c9db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c9dbc: 0x3c013d75
    ctx->pc = 0x2c9dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15733 << 16));
    // 0x2c9dc0: 0x3421c28f
    ctx->pc = 0x2c9dc0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x2c9dc4: 0x44810000
    ctx->pc = 0x2c9dc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9dc8: 0xe6000084
    ctx->pc = 0x2c9dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2c9dcc: 0x282d
    ctx->pc = 0x2c9dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dd0: 0x260900e0
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 224));
    // 0x2c9dd4: 0x3c02003a
    ctx->pc = 0x2c9dd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c9dd8: 0x244aaae4
    ctx->pc = 0x2c9dd8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294945508));
    // 0x2c9ddc: 0x260800e4
    ctx->pc = 0x2c9ddcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 228));
    // 0x2c9de0: 0x260700e8
    ctx->pc = 0x2c9de0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 232));
    // 0x2c9de4: 0x260600ec
    ctx->pc = 0x2c9de4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 236));
    // 0x2c9de8: 0x51100
    ctx->pc = 0x2c9de8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c9dec: 0x0
    ctx->pc = 0x2c9decu;
    // NOP
label_2c9df0:
    // 0x2c9df0: 0x1221821
    ctx->pc = 0x2c9df0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2c9df4: 0x4a2021
    ctx->pc = 0x2c9df4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c9df8: 0xc4800000
    ctx->pc = 0x2c9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9dfc: 0xe4600000
    ctx->pc = 0x2c9dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c9e00: 0x1021821
    ctx->pc = 0x2c9e00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2c9e04: 0xc4800000
    ctx->pc = 0x2c9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e08: 0xe4600000
    ctx->pc = 0x2c9e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c9e0c: 0xe21821
    ctx->pc = 0x2c9e0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c9e10: 0xc4800000
    ctx->pc = 0x2c9e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e14: 0xe4600000
    ctx->pc = 0x2c9e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c9e18: 0xc21021
    ctx->pc = 0x2c9e18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c9e1c: 0xc4800000
    ctx->pc = 0x2c9e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9e20: 0xe4400000
    ctx->pc = 0x2c9e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c9e24: 0x24a50001
    ctx->pc = 0x2c9e24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c9e28: 0x28a20005
    ctx->pc = 0x2c9e28u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
    // 0x2c9e2c: 0x1440fff0
    ctx->pc = 0x2C9E2Cu;
    {
        const bool branch_taken_0x2c9e2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C9E30u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c9e2c) {
            ctx->pc = 0x2C9DF0u;
            goto label_2c9df0;
        }
    }
    ctx->pc = 0x2C9E34u;
    // 0x2c9e34: 0x8e420020
    ctx->pc = 0x2c9e34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c9e38: 0x50400005
    ctx->pc = 0x2C9E38u;
    {
        const bool branch_taken_0x2c9e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c9e38) {
            ctx->pc = 0x2C9E3Cu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x2C9E50u;
            goto label_2c9e50;
        }
    }
    ctx->pc = 0x2C9E40u;
    // 0x2c9e40: 0x8e42001c
    ctx->pc = 0x2c9e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2c9e44: 0x54400027
    ctx->pc = 0x2C9E44u;
    {
        const bool branch_taken_0x2c9e44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9e44) {
            ctx->pc = 0x2C9E48u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
            ctx->pc = 0x2C9EE4u;
            goto label_2c9ee4;
        }
    }
    ctx->pc = 0x2C9E4Cu;
    // 0x2c9e4c: 0x3c04003b
    ctx->pc = 0x2c9e4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2c9e50:
    // 0x2c9e50: 0x24847488
    ctx->pc = 0x2c9e50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29832));
    // 0x2c9e54: 0xc0b1bb4
    ctx->pc = 0x2C9E54u;
    SET_GPR_U32(ctx, 31, 0x2C9E5Cu);
    ctx->pc = 0x2C9E58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E5Cu; }
    }
    if (ctx->pc != 0x2C9E5Cu) { return; }
    ctx->pc = 0x2C9E5Cu;
    // 0x2c9e5c: 0x40882d
    ctx->pc = 0x2c9e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e60: 0x3c04003b
    ctx->pc = 0x2c9e60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c9e64: 0x24847498
    ctx->pc = 0x2c9e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29848));
    // 0x2c9e68: 0xc0b1bb4
    ctx->pc = 0x2C9E68u;
    SET_GPR_U32(ctx, 31, 0x2C9E70u);
    ctx->pc = 0x2C9E6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E70u; }
    }
    if (ctx->pc != 0x2C9E70u) { return; }
    ctx->pc = 0x2C9E70u;
    // 0x2c9e70: 0x12200016
    ctx->pc = 0x2C9E70u;
    {
        const bool branch_taken_0x2c9e70 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9E74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c9e70) {
            ctx->pc = 0x2C9ECCu;
            goto label_2c9ecc;
        }
    }
    ctx->pc = 0x2C9E78u;
    // 0x2c9e78: 0x8e630038
    ctx->pc = 0x2c9e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c9e7c: 0x111403
    ctx->pc = 0x2c9e7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x2c9e80: 0x21100
    ctx->pc = 0x2c9e80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9e84: 0x621821
    ctx->pc = 0x2c9e84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9e88: 0x8c630004
    ctx->pc = 0x2c9e88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c9e8c: 0x3222ffff
    ctx->pc = 0x2c9e8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 65535));
    // 0x2c9e90: 0x21180
    ctx->pc = 0x2c9e90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2c9e94: 0x8c630058
    ctx->pc = 0x2c9e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2c9e98: 0x431021
    ctx->pc = 0x2c9e98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9e9c: 0xae42001c
    ctx->pc = 0x2c9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x2c9ea0: 0x8e630038
    ctx->pc = 0x2c9ea0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c9ea4: 0x41403
    ctx->pc = 0x2c9ea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c9ea8: 0x21100
    ctx->pc = 0x2c9ea8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c9eac: 0x621821
    ctx->pc = 0x2c9eacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c9eb0: 0x8c630004
    ctx->pc = 0x2c9eb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c9eb4: 0x3082ffff
    ctx->pc = 0x2c9eb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2c9eb8: 0x21180
    ctx->pc = 0x2c9eb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2c9ebc: 0x8c630058
    ctx->pc = 0x2c9ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2c9ec0: 0x431021
    ctx->pc = 0x2c9ec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c9ec4: 0x10000006
    ctx->pc = 0x2C9EC4u;
    {
        const bool branch_taken_0x2c9ec4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9EC8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x2c9ec4) {
            ctx->pc = 0x2C9EE0u;
            goto label_2c9ee0;
        }
    }
    ctx->pc = 0x2C9ECCu;
label_2c9ecc:
    // 0x2c9ecc: 0x8e620038
    ctx->pc = 0x2c9eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c9ed0: 0x8c420004
    ctx->pc = 0x2c9ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c9ed4: 0x8c420058
    ctx->pc = 0x2c9ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c9ed8: 0xae42001c
    ctx->pc = 0x2c9ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x2c9edc: 0xae400020
    ctx->pc = 0x2c9edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_2c9ee0:
    // 0x2c9ee0: 0xae000088
    ctx->pc = 0x2c9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_2c9ee4:
    // 0x2c9ee4: 0xae00008c
    ctx->pc = 0x2c9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x2c9ee8: 0x200102d
    ctx->pc = 0x2c9ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9eec:
    // 0x2c9eec: 0xdfbf0040
    ctx->pc = 0x2c9eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9ef0: 0xdfb30030
    ctx->pc = 0x2c9ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9ef4: 0xdfb20020
    ctx->pc = 0x2c9ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9ef8: 0xdfb10010
    ctx->pc = 0x2c9ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9efc: 0xdfb00000
    ctx->pc = 0x2c9efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9f00: 0x3e00008
    ctx->pc = 0x2C9F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9D24u: goto label_2c9d24;
            case 0x2C9D34u: goto label_2c9d34;
            case 0x2C9D44u: goto label_2c9d44;
            case 0x2C9DF0u: goto label_2c9df0;
            case 0x2C9E50u: goto label_2c9e50;
            case 0x2C9ECCu: goto label_2c9ecc;
            case 0x2C9EE0u: goto label_2c9ee0;
            case 0x2C9EE4u: goto label_2c9ee4;
            case 0x2C9EECu: goto label_2c9eec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9F08u;
}
