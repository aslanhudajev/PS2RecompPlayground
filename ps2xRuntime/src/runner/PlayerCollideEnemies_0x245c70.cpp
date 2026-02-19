#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerCollideEnemies
// Address: 0x245c70 - 0x2460a4
void PlayerCollideEnemies_0x245c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x245c70u;

    // 0x245c70: 0x27bdff10
    ctx->pc = 0x245c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x245c74: 0xffbf00c0
    ctx->pc = 0x245c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x245c78: 0xffb700b0
    ctx->pc = 0x245c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x245c7c: 0xffb600a0
    ctx->pc = 0x245c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x245c80: 0xffb50090
    ctx->pc = 0x245c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x245c84: 0xffb40080
    ctx->pc = 0x245c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x245c88: 0xffb30070
    ctx->pc = 0x245c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x245c8c: 0xffb20060
    ctx->pc = 0x245c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x245c90: 0xffb10050
    ctx->pc = 0x245c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x245c94: 0xffb00040
    ctx->pc = 0x245c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x245c98: 0xe7b600e0
    ctx->pc = 0x245c98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x245c9c: 0xe7b500d8
    ctx->pc = 0x245c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x245ca0: 0xe7b400d0
    ctx->pc = 0x245ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x245ca4: 0x80b02d
    ctx->pc = 0x245ca4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ca8: 0xa0982d
    ctx->pc = 0x245ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cac: 0xc0802d
    ctx->pc = 0x245cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cb0: 0xe0882d
    ctx->pc = 0x245cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cb4: 0x46006546
    ctx->pc = 0x245cb4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x245cb8: 0x46006d06
    ctx->pc = 0x245cb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x245cbc: 0x2414ffff
    ctx->pc = 0x245cbcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245cc0: 0xa82d
    ctx->pc = 0x245cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cc4: 0x4480b000
    ctx->pc = 0x245cc4u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x245cc8: 0xc0a00b0
    ctx->pc = 0x245CC8u;
    SET_GPR_U32(ctx, 31, 0x245CD0u);
    ctx->pc = 0x245CCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245CD0u; }
    }
    if (ctx->pc != 0x245CD0u) { return; }
    ctx->pc = 0x245CD0u;
    // 0x245cd0: 0x3c020033
    ctx->pc = 0x245cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x245cd4: 0x10000052
    ctx->pc = 0x245CD4u;
    {
        const bool branch_taken_0x245cd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245CD8u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 4294959056));
        if (branch_taken_0x245cd4) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245CDCu;
    // 0x245cdc: 0x0
    ctx->pc = 0x245cdcu;
    // NOP
label_245ce0:
    // 0x245ce0: 0x2421818
    ctx->pc = 0x245ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x245ce4: 0x772021
    ctx->pc = 0x245ce4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x245ce8: 0x8c8300c8
    ctx->pc = 0x245ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x245cec: 0x24020001
    ctx->pc = 0x245cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x245cf0: 0x10620008
    ctx->pc = 0x245CF0u;
    {
        const bool branch_taken_0x245cf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x245CF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x245cf0) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245CF8u;
    // 0x245cf8: 0x10620006
    ctx->pc = 0x245CF8u;
    {
        const bool branch_taken_0x245cf8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x245CFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x245cf8) {
            ctx->pc = 0x245D14u;
            goto label_245d14;
        }
    }
    ctx->pc = 0x245D00u;
    // 0x245d00: 0x14620047
    ctx->pc = 0x245D00u;
    {
        const bool branch_taken_0x245d00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x245D04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x245d00) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D08u;
    // 0x245d08: 0x8c4207f8
    ctx->pc = 0x245d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x245d0c: 0x10400044
    ctx->pc = 0x245D0Cu;
    {
        const bool branch_taken_0x245d0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x245d0c) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D14u;
label_245d14:
    // 0x245d14: 0x8c830000
    ctx->pc = 0x245d14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x245d18: 0x2402001f
    ctx->pc = 0x245d18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x245d1c: 0x10620040
    ctx->pc = 0x245D1Cu;
    {
        const bool branch_taken_0x245d1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x245d1c) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D24u;
    // 0x245d24: 0xc480024c
    ctx->pc = 0x245d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d28: 0x4600ab00
    ctx->pc = 0x245d28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x245d2c: 0xc4800250
    ctx->pc = 0x245d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d30: 0x4600a340
    ctx->pc = 0x245d30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x245d34: 0xc4820060
    ctx->pc = 0x245d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x245d38: 0xc6000000
    ctx->pc = 0x245d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d3c: 0x46001081
    ctx->pc = 0x245d3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x245d40: 0xe7a20010
    ctx->pc = 0x245d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x245d44: 0xc4810064
    ctx->pc = 0x245d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245d48: 0xc6000004
    ctx->pc = 0x245d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d4c: 0x460008c1
    ctx->pc = 0x245d4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245d50: 0xe7a30014
    ctx->pc = 0x245d50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x245d54: 0xc4800068
    ctx->pc = 0x245d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d58: 0xc6010008
    ctx->pc = 0x245d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245d5c: 0x46010001
    ctx->pc = 0x245d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245d60: 0xe7a00018
    ctx->pc = 0x245d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x245d64: 0x46021082
    ctx->pc = 0x245d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x245d68: 0x46000002
    ctx->pc = 0x245d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x245d6c: 0x46001080
    ctx->pc = 0x245d6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x245d70: 0x460c6002
    ctx->pc = 0x245d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x245d74: 0x46001034
    ctx->pc = 0x245d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245d78: 0x45000029
    ctx->pc = 0x245D78u;
    {
        const bool branch_taken_0x245d78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245d78) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D80u;
    // 0x245d80: 0x46001845
    ctx->pc = 0x245d80u;
    ctx->f[1] = FPU_ABS_S(ctx->f[3]);
    // 0x245d84: 0xc4800250
    ctx->pc = 0x245d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245d88: 0x46000834
    ctx->pc = 0x245d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245d8c: 0x0
    ctx->pc = 0x245d8cu;
    // NOP
    // 0x245d90: 0x45000023
    ctx->pc = 0x245D90u;
    {
        const bool branch_taken_0x245d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245D94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 96));
        if (branch_taken_0x245d90) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245D98u;
    // 0x245d98: 0x260282d
    ctx->pc = 0x245d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245d9c: 0x200302d
    ctx->pc = 0x245d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245da0: 0x27a70030
    ctx->pc = 0x245da0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x245da4: 0xc0a4202
    ctx->pc = 0x245DA4u;
    SET_GPR_U32(ctx, 31, 0x245DACu);
    ctx->pc = 0x245DA8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245DACu; }
    }
    if (ctx->pc != 0x245DACu) { return; }
    ctx->pc = 0x245DACu;
    // 0x245dac: 0x1040001c
    ctx->pc = 0x245DACu;
    {
        const bool branch_taken_0x245dac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245DB0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x245dac) {
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245DB4u;
    // 0x245db4: 0xc6000000
    ctx->pc = 0x245db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245db8: 0x46006301
    ctx->pc = 0x245db8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x245dbc: 0xe7ac0000
    ctx->pc = 0x245dbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x245dc0: 0xc7a00034
    ctx->pc = 0x245dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245dc4: 0xc6010004
    ctx->pc = 0x245dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245dc8: 0x46010001
    ctx->pc = 0x245dc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245dcc: 0xe7a00004
    ctx->pc = 0x245dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x245dd0: 0xc7ad0038
    ctx->pc = 0x245dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x245dd4: 0xc6000008
    ctx->pc = 0x245dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245dd8: 0x46006b41
    ctx->pc = 0x245dd8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x245ddc: 0xc0b5c34
    ctx->pc = 0x245DDCu;
    SET_GPR_U32(ctx, 31, 0x245DE4u);
    ctx->pc = 0x245DE0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245DE4u; }
    }
    if (ctx->pc != 0x245DE4u) { return; }
    ctx->pc = 0x245DE4u;
    // 0x245de4: 0x6800005
    ctx->pc = 0x245DE4u;
    {
        const bool branch_taken_0x245de4 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x245DE8u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x245de4) {
            ctx->pc = 0x245DFCu;
            goto label_245dfc;
        }
    }
    ctx->pc = 0x245DECu;
    // 0x245dec: 0x46161034
    ctx->pc = 0x245decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245df0: 0x0
    ctx->pc = 0x245df0u;
    // NOP
    // 0x245df4: 0x4502000a
    ctx->pc = 0x245DF4u;
    {
        const bool branch_taken_0x245df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245df4) {
            ctx->pc = 0x245DF8u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x245E20u;
            goto label_245e20;
        }
    }
    ctx->pc = 0x245DFCu;
label_245dfc:
    // 0x245dfc: 0x240a02d
    ctx->pc = 0x245dfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e00: 0x46001586
    ctx->pc = 0x245e00u;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
    // 0x245e04: 0xc7a00030
    ctx->pc = 0x245e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245e08: 0xe6200000
    ctx->pc = 0x245e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x245e0c: 0xc7a00034
    ctx->pc = 0x245e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245e10: 0xe6200004
    ctx->pc = 0x245e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x245e14: 0xc7a00038
    ctx->pc = 0x245e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245e18: 0xe6200008
    ctx->pc = 0x245e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x245e1c: 0x26b50001
    ctx->pc = 0x245e1cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_245e20:
    // 0x245e20: 0xc0a00ea
    ctx->pc = 0x245E20u;
    SET_GPR_U32(ctx, 31, 0x245E28u);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E28u; }
    }
    if (ctx->pc != 0x245E28u) { return; }
    ctx->pc = 0x245E28u;
    // 0x245e28: 0x40902d
    ctx->pc = 0x245e28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e2c: 0x641ffac
    ctx->pc = 0x245E2Cu;
    {
        const bool branch_taken_0x245e2c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x245E30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x245e2c) {
            ctx->pc = 0x245CE0u;
            goto label_245ce0;
        }
    }
    ctx->pc = 0x245E34u;
    // 0x245e34: 0x680000c
    ctx->pc = 0x245E34u;
    {
        const bool branch_taken_0x245e34 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x245E38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x245e34) {
            ctx->pc = 0x245E68u;
            goto label_245e68;
        }
    }
    ctx->pc = 0x245E3Cu;
    // 0x245e3c: 0x2852818
    ctx->pc = 0x245e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x245e40: 0x3c020033
    ctx->pc = 0x245e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x245e44: 0x2442dfe0
    ctx->pc = 0x245e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x245e48: 0xa22821
    ctx->pc = 0x245e48u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245e4c: 0x260202d
    ctx->pc = 0x245e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e50: 0x24a50050
    ctx->pc = 0x245e50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
    // 0x245e54: 0x302d
    ctx->pc = 0x245e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e58: 0xc087b72
    ctx->pc = 0x245E58u;
    SET_GPR_U32(ctx, 31, 0x245E60u);
    ctx->pc = 0x245E5Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21EDC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FastWallCollide_0x21edc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E60u; }
    }
    if (ctx->pc != 0x245E60u) { return; }
    ctx->pc = 0x245E60u;
    // 0x245e60: 0x2403ffff
    ctx->pc = 0x245e60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245e64: 0x62a00b
    ctx->pc = 0x245e64u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_245e68:
    // 0x245e68: 0x2c0202d
    ctx->pc = 0x245e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e6c: 0x260282d
    ctx->pc = 0x245e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e70: 0x200302d
    ctx->pc = 0x245e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e74: 0x27a70030
    ctx->pc = 0x245e74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    // 0x245e78: 0x4600ab06
    ctx->pc = 0x245e78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x245e7c: 0xc0916ee
    ctx->pc = 0x245E7Cu;
    SET_GPR_U32(ctx, 31, 0x245E84u);
    ctx->pc = 0x245E80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x245BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCollideCritters_0x245bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245E84u; }
    }
    if (ctx->pc != 0x245E84u) { return; }
    ctx->pc = 0x245E84u;
    // 0x245e84: 0x40902d
    ctx->pc = 0x245e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245e88: 0x1240001d
    ctx->pc = 0x245E88u;
    {
        const bool branch_taken_0x245e88 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x245E8Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x245e88) {
            ctx->pc = 0x245F00u;
            goto label_245f00;
        }
    }
    ctx->pc = 0x245E90u;
    // 0x245e90: 0xc6000000
    ctx->pc = 0x245e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245e94: 0x46006301
    ctx->pc = 0x245e94u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x245e98: 0xe7ac0000
    ctx->pc = 0x245e98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x245e9c: 0xc7a00034
    ctx->pc = 0x245e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245ea0: 0xc6010004
    ctx->pc = 0x245ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245ea4: 0x46010001
    ctx->pc = 0x245ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245ea8: 0xe7a00004
    ctx->pc = 0x245ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x245eac: 0xc7ad0038
    ctx->pc = 0x245eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x245eb0: 0xc6000008
    ctx->pc = 0x245eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245eb4: 0x46006b41
    ctx->pc = 0x245eb4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x245eb8: 0xc0b5c34
    ctx->pc = 0x245EB8u;
    SET_GPR_U32(ctx, 31, 0x245EC0u);
    ctx->pc = 0x245EBCu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245EC0u; }
    }
    if (ctx->pc != 0x245EC0u) { return; }
    ctx->pc = 0x245EC0u;
    // 0x245ec0: 0x6800005
    ctx->pc = 0x245EC0u;
    {
        const bool branch_taken_0x245ec0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x245EC4u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x245ec0) {
            ctx->pc = 0x245ED8u;
            goto label_245ed8;
        }
    }
    ctx->pc = 0x245EC8u;
    // 0x245ec8: 0x46161034
    ctx->pc = 0x245ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245ecc: 0x0
    ctx->pc = 0x245eccu;
    // NOP
    // 0x245ed0: 0x4502000b
    ctx->pc = 0x245ED0u;
    {
        const bool branch_taken_0x245ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245ed0) {
            ctx->pc = 0x245ED4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x245F00u;
            goto label_245f00;
        }
    }
    ctx->pc = 0x245ED8u;
label_245ed8:
    // 0x245ed8: 0x86540000
    ctx->pc = 0x245ed8u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x245edc: 0x3c020001
    ctx->pc = 0x245edcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x245ee0: 0x282a025
    ctx->pc = 0x245ee0u;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x245ee4: 0xc7a00030
    ctx->pc = 0x245ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245ee8: 0xe6200000
    ctx->pc = 0x245ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x245eec: 0xc7a00034
    ctx->pc = 0x245eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245ef0: 0xe6200004
    ctx->pc = 0x245ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x245ef4: 0xc7a00038
    ctx->pc = 0x245ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245ef8: 0xe6200008
    ctx->pc = 0x245ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x245efc: 0x26b50001
    ctx->pc = 0x245efcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_245f00:
    // 0x245f00: 0x6800053
    ctx->pc = 0x245F00u;
    {
        const bool branch_taken_0x245f00 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x245F04u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x245f00) {
            ctx->pc = 0x246050u;
            goto label_246050;
        }
    }
    ctx->pc = 0x245F08u;
    // 0x245f08: 0x24631b90
    ctx->pc = 0x245f08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x245f0c: 0x8ec20000
    ctx->pc = 0x245f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x245f10: 0x2404003c
    ctx->pc = 0x245f10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x245f14: 0x441018
    ctx->pc = 0x245f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x245f18: 0x621821
    ctx->pc = 0x245f18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245f1c: 0x8c620038
    ctx->pc = 0x245f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x245f20: 0x14400052
    ctx->pc = 0x245F20u;
    {
        const bool branch_taken_0x245f20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x245F24u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x245f20) {
            ctx->pc = 0x24606Cu;
            goto label_24606c;
        }
    }
    ctx->pc = 0x245F28u;
    // 0x245f28: 0x24020001
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x245f2c: 0x56a20049
    ctx->pc = 0x245F2Cu;
    {
        const bool branch_taken_0x245f2c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        if (branch_taken_0x245f2c) {
            ctx->pc = 0x245F30u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x246054u;
            goto label_246054;
        }
    }
    ctx->pc = 0x245F34u;
    // 0x245f34: 0x3402ffff
    ctx->pc = 0x245f34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x245f38: 0x54102a
    ctx->pc = 0x245f38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x245f3c: 0x10400012
    ctx->pc = 0x245F3Cu;
    {
        const bool branch_taken_0x245f3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x245F40u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x245f3c) {
            ctx->pc = 0x245F88u;
            goto label_245f88;
        }
    }
    ctx->pc = 0x245F44u;
    // 0x245f44: 0x24841dc0
    ctx->pc = 0x245f44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7616));
    // 0x245f48: 0x3283ffff
    ctx->pc = 0x245f48u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 20), 65535));
    // 0x245f4c: 0x24020b70
    ctx->pc = 0x245f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x245f50: 0x621818
    ctx->pc = 0x245f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x245f54: 0x641821
    ctx->pc = 0x245f54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x245f58: 0xc6000000
    ctx->pc = 0x245f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f5c: 0xc4610060
    ctx->pc = 0x245f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245f60: 0x46010001
    ctx->pc = 0x245f60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245f64: 0xe7a00020
    ctx->pc = 0x245f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x245f68: 0xafa00024
    ctx->pc = 0x245f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x245f6c: 0xc6000008
    ctx->pc = 0x245f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245f70: 0xc4610068
    ctx->pc = 0x245f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245f74: 0x46010001
    ctx->pc = 0x245f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245f78: 0xe7a00028
    ctx->pc = 0x245f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x245f7c: 0x8c620004
    ctx->pc = 0x245f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x245f80: 0x10000010
    ctx->pc = 0x245F80u;
    {
        const bool branch_taken_0x245f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x245F84u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x245f80) {
            ctx->pc = 0x245FC4u;
            goto label_245fc4;
        }
    }
    ctx->pc = 0x245F88u;
label_245f88:
    // 0x245f88: 0x3c020033
    ctx->pc = 0x245f88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x245f8c: 0x2442dfd0
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x245f90: 0x240303b0
    ctx->pc = 0x245f90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x245f94: 0x2831818
    ctx->pc = 0x245f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x245f98: 0x621821
    ctx->pc = 0x245f98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245f9c: 0xc6000000
    ctx->pc = 0x245f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245fa0: 0xc4610060
    ctx->pc = 0x245fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245fa4: 0x46010001
    ctx->pc = 0x245fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245fa8: 0xe7a00020
    ctx->pc = 0x245fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x245fac: 0xafa00024
    ctx->pc = 0x245facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x245fb0: 0xc6000008
    ctx->pc = 0x245fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245fb4: 0xc4610068
    ctx->pc = 0x245fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245fb8: 0x46010001
    ctx->pc = 0x245fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245fbc: 0xe7a00028
    ctx->pc = 0x245fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x245fc0: 0xc460024c
    ctx->pc = 0x245fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_245fc4:
    // 0x245fc4: 0x46000064
    ctx->pc = 0x245fc4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x245fc8: 0x44120800
    ctx->pc = 0x245fc8u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[1]);
    // 0x245fcc: 0xc7ac0020
    ctx->pc = 0x245fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245fd0: 0xc0b5c34
    ctx->pc = 0x245FD0u;
    SET_GPR_U32(ctx, 31, 0x245FD8u);
    ctx->pc = 0x245FD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245FD8u; }
    }
    if (ctx->pc != 0x245FD8u) { return; }
    ctx->pc = 0x245FD8u;
    // 0x245fd8: 0x46000086
    ctx->pc = 0x245fd8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x245fdc: 0x3c013a83
    ctx->pc = 0x245fdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x245fe0: 0x3421126f
    ctx->pc = 0x245fe0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x245fe4: 0x44810000
    ctx->pc = 0x245fe4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x245fe8: 0x46020034
    ctx->pc = 0x245fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245fec: 0x0
    ctx->pc = 0x245fecu;
    // NOP
    // 0x245ff0: 0x45000017
    ctx->pc = 0x245FF0u;
    {
        const bool branch_taken_0x245ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245FF4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x245ff0) {
            ctx->pc = 0x246050u;
            goto label_246050;
        }
    }
    ctx->pc = 0x245FF8u;
    // 0x245ff8: 0x44920800
    ctx->pc = 0x245ff8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 18);
    // 0x245ffc: 0x46800860
    ctx->pc = 0x245ffcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x246000: 0x4601a840
    ctx->pc = 0x246000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x246004: 0x46020841
    ctx->pc = 0x246004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x246008: 0x0
    ctx->pc = 0x246008u;
    // NOP
    // 0x24600c: 0x0
    ctx->pc = 0x24600cu;
    // NOP
    // 0x246010: 0x46020843
    ctx->pc = 0x246010u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x246014: 0x46000802
    ctx->pc = 0x246014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x246018: 0xc6020000
    ctx->pc = 0x246018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24601c: 0x46020000
    ctx->pc = 0x24601cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x246020: 0xe6200000
    ctx->pc = 0x246020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246024: 0xc7a00024
    ctx->pc = 0x246024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246028: 0x46000802
    ctx->pc = 0x246028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24602c: 0xc6020004
    ctx->pc = 0x24602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246030: 0x46020000
    ctx->pc = 0x246030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x246034: 0xe6200004
    ctx->pc = 0x246034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246038: 0xc7a00028
    ctx->pc = 0x246038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24603c: 0x46000842
    ctx->pc = 0x24603cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x246040: 0xc6000008
    ctx->pc = 0x246040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246044: 0x46000840
    ctx->pc = 0x246044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x246048: 0x10000007
    ctx->pc = 0x246048u;
    {
        const bool branch_taken_0x246048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24604Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        if (branch_taken_0x246048) {
            ctx->pc = 0x246068u;
            goto label_246068;
        }
    }
    ctx->pc = 0x246050u;
label_246050:
    // 0x246050: 0xc6600000
    ctx->pc = 0x246050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246054:
    // 0x246054: 0xe6200000
    ctx->pc = 0x246054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246058: 0xc6600004
    ctx->pc = 0x246058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24605c: 0xe6200004
    ctx->pc = 0x24605cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246060: 0xc6600008
    ctx->pc = 0x246060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246064: 0xe6200008
    ctx->pc = 0x246064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_246068:
    // 0x246068: 0x280102d
    ctx->pc = 0x246068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24606c:
    // 0x24606c: 0xdfbf00c0
    ctx->pc = 0x24606cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x246070: 0xdfb700b0
    ctx->pc = 0x246070u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x246074: 0xdfb600a0
    ctx->pc = 0x246074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x246078: 0xdfb50090
    ctx->pc = 0x246078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24607c: 0xdfb40080
    ctx->pc = 0x24607cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x246080: 0xdfb30070
    ctx->pc = 0x246080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x246084: 0xdfb20060
    ctx->pc = 0x246084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x246088: 0xdfb10050
    ctx->pc = 0x246088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24608c: 0xdfb00040
    ctx->pc = 0x24608cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246090: 0xc7b600e0
    ctx->pc = 0x246090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x246094: 0xc7b500d8
    ctx->pc = 0x246094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x246098: 0xc7b400d0
    ctx->pc = 0x246098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24609c: 0x3e00008
    ctx->pc = 0x24609Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2460A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245CE0u: goto label_245ce0;
            case 0x245D14u: goto label_245d14;
            case 0x245DFCu: goto label_245dfc;
            case 0x245E20u: goto label_245e20;
            case 0x245E68u: goto label_245e68;
            case 0x245ED8u: goto label_245ed8;
            case 0x245F00u: goto label_245f00;
            case 0x245F88u: goto label_245f88;
            case 0x245FC4u: goto label_245fc4;
            case 0x246050u: goto label_246050;
            case 0x246054u: goto label_246054;
            case 0x246068u: goto label_246068;
            case 0x24606Cu: goto label_24606c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2460A4u;
}
