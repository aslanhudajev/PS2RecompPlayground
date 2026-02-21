#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamPlayerCalc
// Address: 0x2a0c58 - 0x2a0ff0
void BossCamPlayerCalc_0x2a0c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a0c58u;

    // 0x2a0c58: 0x27bdffa0
    ctx->pc = 0x2a0c58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a0c5c: 0xffbf0030
    ctx->pc = 0x2a0c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a0c60: 0xffb10020
    ctx->pc = 0x2a0c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a0c64: 0xffb00010
    ctx->pc = 0x2a0c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a0c68: 0xe7b60050
    ctx->pc = 0x2a0c68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a0c6c: 0xe7b50048
    ctx->pc = 0x2a0c6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a0c70: 0xe7b40040
    ctx->pc = 0x2a0c70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a0c74: 0x3c020034
    ctx->pc = 0x2a0c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2a0c78: 0xac40f9cc
    ctx->pc = 0x2a0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965708), GPR_U32(ctx, 0));
    // 0x2a0c7c: 0x3c020036
    ctx->pc = 0x2a0c7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0c80: 0x8c42dd80
    ctx->pc = 0x2a0c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0c84: 0xc4410018
    ctx->pc = 0x2a0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0c88: 0x3c013fc0
    ctx->pc = 0x2a0c88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
    // 0x2a0c8c: 0x44810000
    ctx->pc = 0x2a0c8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0c90: 0x46000d42
    ctx->pc = 0x2a0c90u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0c94: 0x3c020036
    ctx->pc = 0x2a0c94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0c98: 0x8c43dbc0
    ctx->pc = 0x2a0c98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0c9c: 0xe47500dc
    ctx->pc = 0x2a0c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
    // 0x2a0ca0: 0x3c020031
    ctx->pc = 0x2a0ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0ca4: 0x8c42f1a0
    ctx->pc = 0x2a0ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963616)));
    // 0x2a0ca8: 0x10400004
    ctx->pc = 0x2A0CA8u;
    {
        const bool branch_taken_0x2a0ca8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0CACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0ca8) {
            ctx->pc = 0x2A0CBCu;
            goto label_2a0cbc;
        }
    }
    ctx->pc = 0x2A0CB0u;
    // 0x2a0cb0: 0xc440db64
    ctx->pc = 0x2a0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0cb4: 0x4600a802
    ctx->pc = 0x2a0cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a0cb8: 0xe46000dc
    ctx->pc = 0x2a0cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_2a0cbc:
    // 0x2a0cbc: 0x3a0202d
    ctx->pc = 0x2a0cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cc0: 0x282d
    ctx->pc = 0x2a0cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cc4: 0x302d
    ctx->pc = 0x2a0cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cc8: 0xc085298
    ctx->pc = 0x2A0CC8u;
    SET_GPR_U32(ctx, 31, 0x2A0CD0u);
    ctx->pc = 0x2A0CCCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x214A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAvgPos_0x214a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CD0u; }
    }
    if (ctx->pc != 0x2A0CD0u) { return; }
    ctx->pc = 0x2A0CD0u;
    // 0x2a0cd0: 0x3c020032
    ctx->pc = 0x2a0cd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2a0cd4: 0x8c42080c
    ctx->pc = 0x2a0cd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2a0cd8: 0x10400003
    ctx->pc = 0x2A0CD8u;
    {
        const bool branch_taken_0x2a0cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0CDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2a0cd8) {
            ctx->pc = 0x2A0CE8u;
            goto label_2a0ce8;
        }
    }
    ctx->pc = 0x2A0CE0u;
    // 0x2a0ce0: 0x10000003
    ctx->pc = 0x2A0CE0u;
    {
        const bool branch_taken_0x2a0ce0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0CE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
        if (branch_taken_0x2a0ce0) {
            ctx->pc = 0x2A0CF0u;
            goto label_2a0cf0;
        }
    }
    ctx->pc = 0x2A0CE8u;
label_2a0ce8:
    // 0x2a0ce8: 0xc08516a
    ctx->pc = 0x2A0CE8u;
    SET_GPR_U32(ctx, 31, 0x2A0CF0u);
    ctx->pc = 0x2A0CECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2145A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetTransmitter_0x2145a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CF0u; }
    }
    if (ctx->pc != 0x2A0CF0u) { return; }
    ctx->pc = 0x2A0CF0u;
label_2a0cf0:
    // 0x2a0cf0: 0x1040001b
    ctx->pc = 0x2A0CF0u;
    {
        const bool branch_taken_0x2a0cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a0cf0) {
            ctx->pc = 0x2A0D60u;
            goto label_2a0d60;
        }
    }
    ctx->pc = 0x2A0CF8u;
    // 0x2a0cf8: 0xc4540024
    ctx->pc = 0x2a0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0cfc: 0x3c014049
    ctx->pc = 0x2a0cfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2a0d00: 0x34210fdb
    ctx->pc = 0x2a0d00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a0d04: 0x44810000
    ctx->pc = 0x2a0d04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0d08: 0x4600a501
    ctx->pc = 0x2a0d08u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2a0d0c: 0x46140034
    ctx->pc = 0x2a0d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0d10: 0x45000006
    ctx->pc = 0x2A0D10u;
    {
        const bool branch_taken_0x2a0d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0d10) {
            ctx->pc = 0x2A0D2Cu;
            goto label_2a0d2c;
        }
    }
    ctx->pc = 0x2A0D18u;
    // 0x2a0d18: 0x3c0140c9
    ctx->pc = 0x2a0d18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a0d1c: 0x34210fdb
    ctx->pc = 0x2a0d1cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a0d20: 0x44810000
    ctx->pc = 0x2a0d20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0d24: 0x1000000c
    ctx->pc = 0x2A0D24u;
    {
        const bool branch_taken_0x2a0d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0D28u;
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2a0d24) {
            ctx->pc = 0x2A0D58u;
            goto label_2a0d58;
        }
    }
    ctx->pc = 0x2A0D2Cu;
label_2a0d2c:
    // 0x2a0d2c: 0x3c01c049
    ctx->pc = 0x2a0d2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2a0d30: 0x34210fdb
    ctx->pc = 0x2a0d30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a0d34: 0x44810000
    ctx->pc = 0x2a0d34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0d38: 0x4600a036
    ctx->pc = 0x2a0d38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0d3c: 0x0
    ctx->pc = 0x2a0d3cu;
    // NOP
    // 0x2a0d40: 0x45000005
    ctx->pc = 0x2A0D40u;
    {
        const bool branch_taken_0x2a0d40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0D44u;
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x2a0d40) {
            ctx->pc = 0x2A0D58u;
            goto label_2a0d58;
        }
    }
    ctx->pc = 0x2A0D48u;
    // 0x2a0d48: 0x3c0140c9
    ctx->pc = 0x2a0d48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2a0d4c: 0x34210fdb
    ctx->pc = 0x2a0d4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2a0d50: 0x44810000
    ctx->pc = 0x2a0d50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0d54: 0x4600a300
    ctx->pc = 0x2a0d54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2a0d58:
    // 0x2a0d58: 0x10000002
    ctx->pc = 0x2A0D58u;
    {
        const bool branch_taken_0x2a0d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0D5Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x2a0d58) {
            ctx->pc = 0x2A0D64u;
            goto label_2a0d64;
        }
    }
    ctx->pc = 0x2A0D60u;
label_2a0d60:
    // 0x2a0d60: 0x4480a000
    ctx->pc = 0x2a0d60u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_2a0d64:
    // 0x2a0d64: 0x10400004
    ctx->pc = 0x2A0D64u;
    {
        const bool branch_taken_0x2a0d64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a0d64) {
            ctx->pc = 0x2A0D78u;
            goto label_2a0d78;
        }
    }
    ctx->pc = 0x2A0D6Cu;
    // 0x2a0d6c: 0xc4400020
    ctx->pc = 0x2a0d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d70: 0x10000002
    ctx->pc = 0x2A0D70u;
    {
        const bool branch_taken_0x2a0d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0D74u;
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        if (branch_taken_0x2a0d70) {
            ctx->pc = 0x2A0D7Cu;
            goto label_2a0d7c;
        }
    }
    ctx->pc = 0x2A0D78u;
label_2a0d78:
    // 0x2a0d78: 0x4480b000
    ctx->pc = 0x2a0d78u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
label_2a0d7c:
    // 0x2a0d7c: 0x3c020036
    ctx->pc = 0x2a0d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0d80: 0x8c42dd80
    ctx->pc = 0x2a0d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0d84: 0x8c430000
    ctx->pc = 0x2a0d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0d88: 0x2402fcff
    ctx->pc = 0x2a0d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x2a0d8c: 0x628824
    ctx->pc = 0x2a0d8cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0d90: 0x3c100036
    ctx->pc = 0x2a0d90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a0d94: 0xc0a7f9e
    ctx->pc = 0x2A0D94u;
    SET_GPR_U32(ctx, 31, 0x2A0D9Cu);
    ctx->pc = 0x2A0D98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    ctx->pc = 0x29FE78u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerViewDist_0x29fe78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D9Cu; }
    }
    if (ctx->pc != 0x2A0D9Cu) { return; }
    ctx->pc = 0x2A0D9Cu;
    // 0x2a0d9c: 0x8e02dbc0
    ctx->pc = 0x2a0d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a0da0: 0xe4400100
    ctx->pc = 0x2a0da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x2a0da4: 0x44800800
    ctx->pc = 0x2a0da4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2a0da8: 0x46010034
    ctx->pc = 0x2a0da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0dac: 0x0
    ctx->pc = 0x2a0dacu;
    // NOP
    // 0x2a0db0: 0x45000006
    ctx->pc = 0x2A0DB0u;
    {
        const bool branch_taken_0x2a0db0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0DB4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        if (branch_taken_0x2a0db0) {
            ctx->pc = 0x2A0DCCu;
            goto label_2a0dcc;
        }
    }
    ctx->pc = 0x2A0DB8u;
    // 0x2a0db8: 0x36310200
    ctx->pc = 0x2a0db8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
    // 0x2a0dbc: 0x3c014120
    ctx->pc = 0x2a0dbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2a0dc0: 0x44810000
    ctx->pc = 0x2a0dc0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0dc4: 0x10000042
    ctx->pc = 0x2A0DC4u;
    {
        const bool branch_taken_0x2a0dc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0DC8u;
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2a0dc4) {
            ctx->pc = 0x2A0ED0u;
            goto label_2a0ed0;
        }
    }
    ctx->pc = 0x2A0DCCu;
label_2a0dcc:
    // 0x2a0dcc: 0x3c020036
    ctx->pc = 0x2a0dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0dd0: 0x8c42dbc0
    ctx->pc = 0x2a0dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0dd4: 0xc4410100
    ctx->pc = 0x2a0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0dd8: 0x3c014000
    ctx->pc = 0x2a0dd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2a0ddc: 0x44810000
    ctx->pc = 0x2a0ddcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0de0: 0x46000834
    ctx->pc = 0x2a0de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0de4: 0x0
    ctx->pc = 0x2a0de4u;
    // NOP
    // 0x2a0de8: 0x45000006
    ctx->pc = 0x2A0DE8u;
    {
        const bool branch_taken_0x2a0de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0DECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0de8) {
            ctx->pc = 0x2A0E04u;
            goto label_2a0e04;
        }
    }
    ctx->pc = 0x2A0DF0u;
    // 0x2a0df0: 0x46156834
    ctx->pc = 0x2a0df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0df4: 0x0
    ctx->pc = 0x2a0df4u;
    // NOP
    // 0x2a0df8: 0x45030014
    ctx->pc = 0x2A0DF8u;
    {
        const bool branch_taken_0x2a0df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0df8) {
            ctx->pc = 0x2A0DFCu;
            SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
            ctx->pc = 0x2A0E4Cu;
            goto label_2a0e4c;
        }
    }
    ctx->pc = 0x2A0E00u;
    // 0x2a0e00: 0x3c020036
    ctx->pc = 0x2a0e00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a0e04:
    // 0x2a0e04: 0x8c42dbc0
    ctx->pc = 0x2a0e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0e08: 0xc4410100
    ctx->pc = 0x2a0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0e0c: 0x3c014010
    ctx->pc = 0x2a0e0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16400 << 16));
    // 0x2a0e10: 0x44810000
    ctx->pc = 0x2a0e10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0e14: 0x46000834
    ctx->pc = 0x2a0e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0e18: 0x0
    ctx->pc = 0x2a0e18u;
    // NOP
    // 0x2a0e1c: 0x45000012
    ctx->pc = 0x2A0E1Cu;
    {
        const bool branch_taken_0x2a0e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0E20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0e1c) {
            ctx->pc = 0x2A0E68u;
            goto label_2a0e68;
        }
    }
    ctx->pc = 0x2A0E24u;
    // 0x2a0e24: 0x46156834
    ctx->pc = 0x2a0e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0e28: 0x0
    ctx->pc = 0x2a0e28u;
    // NOP
    // 0x2a0e2c: 0x4500000d
    ctx->pc = 0x2A0E2Cu;
    {
        const bool branch_taken_0x2a0e2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0E30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0e2c) {
            ctx->pc = 0x2A0E64u;
            goto label_2a0e64;
        }
    }
    ctx->pc = 0x2A0E34u;
    // 0x2a0e34: 0x8c42dd80
    ctx->pc = 0x2a0e34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0e38: 0x8c420000
    ctx->pc = 0x2a0e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0e3c: 0x30420200
    ctx->pc = 0x2a0e3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2a0e40: 0x10400009
    ctx->pc = 0x2A0E40u;
    {
        const bool branch_taken_0x2a0e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0E44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0e40) {
            ctx->pc = 0x2A0E68u;
            goto label_2a0e68;
        }
    }
    ctx->pc = 0x2A0E48u;
    // 0x2a0e48: 0x36310200
    ctx->pc = 0x2a0e48u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 512));
label_2a0e4c:
    // 0x2a0e4c: 0x3c014020
    ctx->pc = 0x2a0e4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x2a0e50: 0x44810000
    ctx->pc = 0x2a0e50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0e54: 0x46010001
    ctx->pc = 0x2a0e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0e58: 0x46000000
    ctx->pc = 0x2a0e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a0e5c: 0x1000001c
    ctx->pc = 0x2A0E5Cu;
    {
        const bool branch_taken_0x2a0e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0E60u;
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2a0e5c) {
            ctx->pc = 0x2A0ED0u;
            goto label_2a0ed0;
        }
    }
    ctx->pc = 0x2A0E64u;
label_2a0e64:
    // 0x2a0e64: 0x3c020036
    ctx->pc = 0x2a0e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a0e68:
    // 0x2a0e68: 0x8c42dbc0
    ctx->pc = 0x2a0e68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0e6c: 0xc4400100
    ctx->pc = 0x2a0e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e70: 0x3c014020
    ctx->pc = 0x2a0e70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x2a0e74: 0x44810800
    ctx->pc = 0x2a0e74u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a0e78: 0x46000834
    ctx->pc = 0x2a0e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0e7c: 0x0
    ctx->pc = 0x2a0e7cu;
    // NOP
    // 0x2a0e80: 0x45030010
    ctx->pc = 0x2A0E80u;
    {
        const bool branch_taken_0x2a0e80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0e80) {
            ctx->pc = 0x2A0E84u;
            SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 256));
            ctx->pc = 0x2A0EC4u;
            goto label_2a0ec4;
        }
    }
    ctx->pc = 0x2A0E88u;
    // 0x2a0e88: 0x3c020036
    ctx->pc = 0x2a0e88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0e8c: 0x8c42dbc0
    ctx->pc = 0x2a0e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0e90: 0xc4400100
    ctx->pc = 0x2a0e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e94: 0x3c014010
    ctx->pc = 0x2a0e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16400 << 16));
    // 0x2a0e98: 0x44810800
    ctx->pc = 0x2a0e98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a0e9c: 0x46000834
    ctx->pc = 0x2a0e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0ea0: 0x0
    ctx->pc = 0x2a0ea0u;
    // NOP
    // 0x2a0ea4: 0x4500000a
    ctx->pc = 0x2A0EA4u;
    {
        const bool branch_taken_0x2a0ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0EA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0ea4) {
            ctx->pc = 0x2A0ED0u;
            goto label_2a0ed0;
        }
    }
    ctx->pc = 0x2A0EACu;
    // 0x2a0eac: 0x8c42dd80
    ctx->pc = 0x2a0eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0eb0: 0x8c420000
    ctx->pc = 0x2a0eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0eb4: 0x30420100
    ctx->pc = 0x2a0eb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2a0eb8: 0x10400006
    ctx->pc = 0x2A0EB8u;
    {
        const bool branch_taken_0x2a0eb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0EBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0eb8) {
            ctx->pc = 0x2A0ED4u;
            goto label_2a0ed4;
        }
    }
    ctx->pc = 0x2A0EC0u;
    // 0x2a0ec0: 0x36310100
    ctx->pc = 0x2a0ec0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 256));
label_2a0ec4:
    // 0x2a0ec4: 0x46010001
    ctx->pc = 0x2a0ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0ec8: 0x46000000
    ctx->pc = 0x2a0ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a0ecc: 0x46006b41
    ctx->pc = 0x2a0eccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_2a0ed0:
    // 0x2a0ed0: 0x3c020036
    ctx->pc = 0x2a0ed0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a0ed4:
    // 0x2a0ed4: 0x8c42dd80
    ctx->pc = 0x2a0ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x2a0ed8: 0xac510000
    ctx->pc = 0x2a0ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2a0edc: 0xc4400010
    ctx->pc = 0x2a0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0ee0: 0x46006834
    ctx->pc = 0x2a0ee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0ee4: 0x0
    ctx->pc = 0x2a0ee4u;
    // NOP
    // 0x2a0ee8: 0x45030007
    ctx->pc = 0x2A0EE8u;
    {
        const bool branch_taken_0x2a0ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0ee8) {
            ctx->pc = 0x2A0EECu;
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2A0F08u;
            goto label_2a0f08;
        }
    }
    ctx->pc = 0x2A0EF0u;
    // 0x2a0ef0: 0x4615a800
    ctx->pc = 0x2a0ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x2a0ef4: 0x460d0034
    ctx->pc = 0x2a0ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0ef8: 0x0
    ctx->pc = 0x2a0ef8u;
    // NOP
    // 0x2a0efc: 0x45000003
    ctx->pc = 0x2A0EFCu;
    {
        const bool branch_taken_0x2a0efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A0F00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0efc) {
            ctx->pc = 0x2A0F0Cu;
            goto label_2a0f0c;
        }
    }
    ctx->pc = 0x2A0F04u;
    // 0x2a0f04: 0x46000346
    ctx->pc = 0x2a0f04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2a0f08:
    // 0x2a0f08: 0x3c020036
    ctx->pc = 0x2a0f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a0f0c:
    // 0x2a0f0c: 0x8c42dbc0
    ctx->pc = 0x2a0f0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0f10: 0xc44000f4
    ctx->pc = 0x2a0f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f14: 0x3c030032
    ctx->pc = 0x2a0f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2a0f18: 0x8c62080c
    ctx->pc = 0x2a0f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2060)));
    // 0x2a0f1c: 0x10400008
    ctx->pc = 0x2A0F1Cu;
    {
        const bool branch_taken_0x2a0f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0F20u;
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        if (branch_taken_0x2a0f1c) {
            ctx->pc = 0x2A0F40u;
            goto label_2a0f40;
        }
    }
    ctx->pc = 0x2A0F24u;
    // 0x2a0f24: 0x46000845
    ctx->pc = 0x2a0f24u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2a0f28: 0x3c0140a0
    ctx->pc = 0x2a0f28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2a0f2c: 0x44810000
    ctx->pc = 0x2a0f2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0f30: 0x46000834
    ctx->pc = 0x2a0f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0f34: 0x0
    ctx->pc = 0x2a0f34u;
    // NOP
    // 0x2a0f38: 0x45030001
    ctx->pc = 0x2A0F38u;
    {
        const bool branch_taken_0x2a0f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0f38) {
            ctx->pc = 0x2A0F3Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 2060), GPR_U32(ctx, 0));
            ctx->pc = 0x2A0F40u;
            goto label_2a0f40;
        }
    }
    ctx->pc = 0x2A0F40u;
label_2a0f40:
    // 0x2a0f40: 0x3c020036
    ctx->pc = 0x2a0f40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0f44: 0x8c42db68
    ctx->pc = 0x2a0f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957928)));
    // 0x2a0f48: 0x14400011
    ctx->pc = 0x2A0F48u;
    {
        const bool branch_taken_0x2a0f48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A0F4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a0f48) {
            ctx->pc = 0x2A0F90u;
            goto label_2a0f90;
        }
    }
    ctx->pc = 0x2A0F50u;
    // 0x2a0f50: 0x8c42dbc0
    ctx->pc = 0x2a0f50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0f54: 0xc7a00000
    ctx->pc = 0x2a0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f58: 0xe44000a4
    ctx->pc = 0x2a0f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0f5c: 0xc7a00004
    ctx->pc = 0x2a0f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f60: 0xe44000a8
    ctx->pc = 0x2a0f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a0f64: 0xc7a00008
    ctx->pc = 0x2a0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f68: 0xe44000ac
    ctx->pc = 0x2a0f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a0f6c: 0xc7a00000
    ctx->pc = 0x2a0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f70: 0xe44000b0
    ctx->pc = 0x2a0f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a0f74: 0xc7a00004
    ctx->pc = 0x2a0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f78: 0xe44000b4
    ctx->pc = 0x2a0f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a0f7c: 0xc7a00008
    ctx->pc = 0x2a0f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f80: 0xc0a8142
    ctx->pc = 0x2A0F80u;
    SET_GPR_U32(ctx, 31, 0x2A0F88u);
    ctx->pc = 0x2A0F84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    ctx->pc = 0x2A0508u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamGetCurrent_0x2a0508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0F88u; }
    }
    if (ctx->pc != 0x2A0F88u) { return; }
    ctx->pc = 0x2A0F88u;
    // 0x2a0f88: 0x10000012
    ctx->pc = 0x2A0F88u;
    {
        const bool branch_taken_0x2a0f88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0F8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2a0f88) {
            ctx->pc = 0x2A0FD4u;
            goto label_2a0fd4;
        }
    }
    ctx->pc = 0x2A0F90u;
label_2a0f90:
    // 0x2a0f90: 0x8c42dbc0
    ctx->pc = 0x2a0f90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x2a0f94: 0xc7a00000
    ctx->pc = 0x2a0f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0f98: 0xe44000a4
    ctx->pc = 0x2a0f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2a0f9c: 0xc7a00004
    ctx->pc = 0x2a0f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0fa0: 0xe44000a8
    ctx->pc = 0x2a0fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2a0fa4: 0xc7a00008
    ctx->pc = 0x2a0fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0fa8: 0xe44000ac
    ctx->pc = 0x2a0fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2a0fac: 0xc7a00000
    ctx->pc = 0x2a0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0fb0: 0xe44000b0
    ctx->pc = 0x2a0fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2a0fb4: 0xc7a00004
    ctx->pc = 0x2a0fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0fb8: 0xe44000b4
    ctx->pc = 0x2a0fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2a0fbc: 0xc7a00008
    ctx->pc = 0x2a0fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0fc0: 0xe44000b8
    ctx->pc = 0x2a0fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2a0fc4: 0x4600a306
    ctx->pc = 0x2a0fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a0fc8: 0xc0a825e
    ctx->pc = 0x2A0FC8u;
    SET_GPR_U32(ctx, 31, 0x2A0FD0u);
    ctx->pc = 0x2A0FCCu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2A0978u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossCamLimit_0x2a0978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0FD0u; }
    }
    if (ctx->pc != 0x2A0FD0u) { return; }
    ctx->pc = 0x2A0FD0u;
    // 0x2a0fd0: 0xdfbf0030
    ctx->pc = 0x2a0fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a0fd4:
    // 0x2a0fd4: 0xdfb10020
    ctx->pc = 0x2a0fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0fd8: 0xdfb00010
    ctx->pc = 0x2a0fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0fdc: 0xc7b60050
    ctx->pc = 0x2a0fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a0fe0: 0xc7b50048
    ctx->pc = 0x2a0fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a0fe4: 0xc7b40040
    ctx->pc = 0x2a0fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0fe8: 0x3e00008
    ctx->pc = 0x2A0FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0FECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0CBCu: goto label_2a0cbc;
            case 0x2A0CE8u: goto label_2a0ce8;
            case 0x2A0CF0u: goto label_2a0cf0;
            case 0x2A0D2Cu: goto label_2a0d2c;
            case 0x2A0D58u: goto label_2a0d58;
            case 0x2A0D60u: goto label_2a0d60;
            case 0x2A0D64u: goto label_2a0d64;
            case 0x2A0D78u: goto label_2a0d78;
            case 0x2A0D7Cu: goto label_2a0d7c;
            case 0x2A0DCCu: goto label_2a0dcc;
            case 0x2A0E04u: goto label_2a0e04;
            case 0x2A0E4Cu: goto label_2a0e4c;
            case 0x2A0E64u: goto label_2a0e64;
            case 0x2A0E68u: goto label_2a0e68;
            case 0x2A0EC4u: goto label_2a0ec4;
            case 0x2A0ED0u: goto label_2a0ed0;
            case 0x2A0ED4u: goto label_2a0ed4;
            case 0x2A0F08u: goto label_2a0f08;
            case 0x2A0F0Cu: goto label_2a0f0c;
            case 0x2A0F40u: goto label_2a0f40;
            case 0x2A0F90u: goto label_2a0f90;
            case 0x2A0FD4u: goto label_2a0fd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0FF0u;
}
