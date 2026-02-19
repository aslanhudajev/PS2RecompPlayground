#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddDistObject
// Address: 0x2c7d00 - 0x2c7e18
void AddDistObject_0x2c7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7d00u;

    // 0x2c7d00: 0x27bdffc0
    ctx->pc = 0x2c7d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c7d04: 0xffbf0020
    ctx->pc = 0x2c7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7d08: 0xffb10010
    ctx->pc = 0x2c7d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7d0c: 0xffb00000
    ctx->pc = 0x2c7d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7d10: 0xe7b40030
    ctx->pc = 0x2c7d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7d14: 0x80302d
    ctx->pc = 0x2c7d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d18: 0xa0882d
    ctx->pc = 0x2c7d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d1c: 0x3c020039
    ctx->pc = 0x2c7d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c7d20: 0x8c4559d0
    ctx->pc = 0x2c7d20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 22992)));
    // 0x2c7d24: 0x28a200ff
    ctx->pc = 0x2c7d24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 255));
    // 0x2c7d28: 0x14400006
    ctx->pc = 0x2C7D28u;
    {
        const bool branch_taken_0x2c7d28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C7D2Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x2c7d28) {
            ctx->pc = 0x2C7D44u;
            goto label_2c7d44;
        }
    }
    ctx->pc = 0x2C7D30u;
    // 0x2c7d30: 0x3c04003b
    ctx->pc = 0x2c7d30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7d34: 0xc0b492e
    ctx->pc = 0x2C7D34u;
    SET_GPR_U32(ctx, 31, 0x2C7D3Cu);
    ctx->pc = 0x2C7D38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29384));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7D3Cu; }
    }
    if (ctx->pc != 0x2C7D3Cu) { return; }
    ctx->pc = 0x2C7D3Cu;
    // 0x2c7d3c: 0x10000030
    ctx->pc = 0x2C7D3Cu;
    {
        const bool branch_taken_0x2c7d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7D40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d3c) {
            ctx->pc = 0x2C7E00u;
            goto label_2c7e00;
        }
    }
    ctx->pc = 0x2C7D44u;
label_2c7d44:
    // 0x2c7d44: 0x3c014e00
    ctx->pc = 0x2c7d44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)19968 << 16));
    // 0x2c7d48: 0x44810000
    ctx->pc = 0x2c7d48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c7d4c: 0x46140034
    ctx->pc = 0x2c7d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7d50: 0x0
    ctx->pc = 0x2c7d50u;
    // NOP
    // 0x2c7d54: 0x45030001
    ctx->pc = 0x2C7D54u;
    {
        const bool branch_taken_0x2c7d54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7d54) {
            ctx->pc = 0x2C7D58u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2C7D5Cu;
            goto label_2c7d5c;
        }
    }
    ctx->pc = 0x2C7D5Cu;
label_2c7d5c:
    // 0x2c7d5c: 0x3c050039
    ctx->pc = 0x2c7d5cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)57 << 16));
    // 0x2c7d60: 0x8ca459d0
    ctx->pc = 0x2c7d60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 22992)));
    // 0x2c7d64: 0x24030050
    ctx->pc = 0x2c7d64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7d68: 0x831818
    ctx->pc = 0x2c7d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7d6c: 0x3c020039
    ctx->pc = 0x2c7d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c7d70: 0x244209d0
    ctx->pc = 0x2c7d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2512));
    // 0x2c7d74: 0x628021
    ctx->pc = 0x2c7d74u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7d78: 0x24840001
    ctx->pc = 0x2c7d78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c7d7c: 0xaca459d0
    ctx->pc = 0x2c7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22992), GPR_U32(ctx, 4));
    // 0x2c7d80: 0xc0202d
    ctx->pc = 0x2c7d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7d84: 0xc0b5494
    ctx->pc = 0x2C7D84u;
    SET_GPR_U32(ctx, 31, 0x2C7D8Cu);
    ctx->pc = 0x2C7D88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7D8Cu; }
    }
    if (ctx->pc != 0x2C7D8Cu) { return; }
    ctx->pc = 0x2C7D8Cu;
    // 0x2c7d8c: 0xc6200054
    ctx->pc = 0x2c7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7d90: 0x4600a300
    ctx->pc = 0x2c7d90u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2c7d94: 0xe60c0040
    ctx->pc = 0x2c7d94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2c7d98: 0xae110044
    ctx->pc = 0x2c7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x2c7d9c: 0x3c020038
    ctx->pc = 0x2c7d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7da0: 0x8c42b1ac
    ctx->pc = 0x2c7da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947244)));
    // 0x2c7da4: 0xae020048
    ctx->pc = 0x2c7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2c7da8: 0x8e220060
    ctx->pc = 0x2c7da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2c7dac: 0x3c030040
    ctx->pc = 0x2c7dacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x2c7db0: 0x431024
    ctx->pc = 0x2c7db0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7db4: 0x50400006
    ctx->pc = 0x2C7DB4u;
    {
        const bool branch_taken_0x2c7db4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c7db4) {
            ctx->pc = 0x2C7DB8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x2C7DD0u;
            goto label_2c7dd0;
        }
    }
    ctx->pc = 0x2C7DBCu;
    // 0x2c7dbc: 0x3c013727
    ctx->pc = 0x2c7dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14119 << 16));
    // 0x2c7dc0: 0x3421c5ac
    ctx->pc = 0x2c7dc0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 50604));
    // 0x2c7dc4: 0x44810000
    ctx->pc = 0x2c7dc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c7dc8: 0x1000000b
    ctx->pc = 0x2C7DC8u;
    {
        const bool branch_taken_0x2c7dc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7DCCu;
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2c7dc8) {
            ctx->pc = 0x2C7DF8u;
            goto label_2c7df8;
        }
    }
    ctx->pc = 0x2C7DD0u;
label_2c7dd0:
    // 0x2c7dd0: 0x8c420060
    ctx->pc = 0x2c7dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c7dd4: 0x3c030008
    ctx->pc = 0x2c7dd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x2c7dd8: 0x431024
    ctx->pc = 0x2c7dd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7ddc: 0x10400008
    ctx->pc = 0x2C7DDCu;
    {
        const bool branch_taken_0x2c7ddc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7DE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c7ddc) {
            ctx->pc = 0x2C7E00u;
            goto label_2c7e00;
        }
    }
    ctx->pc = 0x2C7DE4u;
    // 0x2c7de4: 0xc6000040
    ctx->pc = 0x2c7de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7de8: 0x3c013a83
    ctx->pc = 0x2c7de8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x2c7dec: 0x3421126f
    ctx->pc = 0x2c7decu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2c7df0: 0x44810800
    ctx->pc = 0x2c7df0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2c7df4: 0x46010002
    ctx->pc = 0x2c7df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c7df8:
    // 0x2c7df8: 0xe6000040
    ctx->pc = 0x2c7df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2c7dfc: 0x24020001
    ctx->pc = 0x2c7dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c7e00:
    // 0x2c7e00: 0xdfbf0020
    ctx->pc = 0x2c7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7e04: 0xdfb10010
    ctx->pc = 0x2c7e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7e08: 0xdfb00000
    ctx->pc = 0x2c7e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7e0c: 0xc7b40030
    ctx->pc = 0x2c7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7e10: 0x3e00008
    ctx->pc = 0x2C7E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7D44u: goto label_2c7d44;
            case 0x2C7D5Cu: goto label_2c7d5c;
            case 0x2C7DD0u: goto label_2c7dd0;
            case 0x2C7DF8u: goto label_2c7df8;
            case 0x2C7E00u: goto label_2c7e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7E18u;
}
