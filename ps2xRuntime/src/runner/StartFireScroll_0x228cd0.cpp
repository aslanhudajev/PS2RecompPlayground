#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartFireScroll
// Address: 0x228cd0 - 0x2290b0
void StartFireScroll_0x228cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x228cd0u;

    // 0x228cd0: 0x27bdff30
    ctx->pc = 0x228cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x228cd4: 0xffbf00a0
    ctx->pc = 0x228cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x228cd8: 0xffbe0090
    ctx->pc = 0x228cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x228cdc: 0xffb70080
    ctx->pc = 0x228cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x228ce0: 0xffb60070
    ctx->pc = 0x228ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x228ce4: 0xffb50060
    ctx->pc = 0x228ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x228ce8: 0xffb40050
    ctx->pc = 0x228ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x228cec: 0xffb30040
    ctx->pc = 0x228cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x228cf0: 0xffb20030
    ctx->pc = 0x228cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x228cf4: 0xffb10020
    ctx->pc = 0x228cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x228cf8: 0xffb00010
    ctx->pc = 0x228cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x228cfc: 0xe7b600c0
    ctx->pc = 0x228cfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x228d00: 0xe7b500b8
    ctx->pc = 0x228d00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x228d04: 0xe7b400b0
    ctx->pc = 0x228d04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x228d08: 0xafa40000
    ctx->pc = 0x228d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x228d0c: 0xa0f02d
    ctx->pc = 0x228d0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d10: 0xc0b82d
    ctx->pc = 0x228d10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d14: 0xafa70004
    ctx->pc = 0x228d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x228d18: 0x100b02d
    ctx->pc = 0x228d18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d1c: 0xafa90008
    ctx->pc = 0x228d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x228d20: 0x46006506
    ctx->pc = 0x228d20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x228d24: 0xc0981ae
    ctx->pc = 0x228D24u;
    SET_GPR_U32(ctx, 31, 0x228D2Cu);
    ctx->pc = 0x228D28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    ctx->pc = 0x2606B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioMenuBurn_0x2606b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D2Cu; }
    }
    if (ctx->pc != 0x228D2Cu) { return; }
    ctx->pc = 0x228D2Cu;
    // 0x228d2c: 0x3c020032
    ctx->pc = 0x228d2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228d30: 0x24430ab8
    ctx->pc = 0x228d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2744));
    // 0x228d34: 0x8c420ab8
    ctx->pc = 0x228d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2744)));
    // 0x228d38: 0x10400006
    ctx->pc = 0x228D38u;
    {
        const bool branch_taken_0x228d38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228D3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x228d38) {
            ctx->pc = 0x228D54u;
            goto label_228d54;
        }
    }
    ctx->pc = 0x228D40u;
    // 0x228d40: 0x8fa4000c
    ctx->pc = 0x228d40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x228d44: 0x148200ca
    ctx->pc = 0x228D44u;
    {
        const bool branch_taken_0x228d44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x228D48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x228d44) {
            ctx->pc = 0x229070u;
            goto label_229070;
        }
    }
    ctx->pc = 0x228D4Cu;
    // 0x228d4c: 0x100000c9
    ctx->pc = 0x228D4Cu;
    {
        const bool branch_taken_0x228d4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x228D50u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        if (branch_taken_0x228d4c) {
            ctx->pc = 0x229074u;
            goto label_229074;
        }
    }
    ctx->pc = 0x228D54u;
label_228d54:
    // 0x228d54: 0x7c10009
    ctx->pc = 0x228D54u;
    {
        const bool branch_taken_0x228d54 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x228D58u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x228d54) {
            ctx->pc = 0x228D7Cu;
            goto label_228d7c;
        }
    }
    ctx->pc = 0x228D5Cu;
    // 0x228d5c: 0x8c620ae8
    ctx->pc = 0x228d5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2792)));
    // 0x228d60: 0x24420001
    ctx->pc = 0x228d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x228d64: 0xac620ae8
    ctx->pc = 0x228d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2792), GPR_U32(ctx, 2));
    // 0x228d68: 0x28420004
    ctx->pc = 0x228d68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x228d6c: 0x50400001
    ctx->pc = 0x228D6Cu;
    {
        const bool branch_taken_0x228d6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x228d6c) {
            ctx->pc = 0x228D70u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 2792), GPR_U32(ctx, 0));
            ctx->pc = 0x228D74u;
            goto label_228d74;
        }
    }
    ctx->pc = 0x228D74u;
label_228d74:
    // 0x228d74: 0x3c020032
    ctx->pc = 0x228d74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228d78: 0x8c5e0ae8
    ctx->pc = 0x228d78u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 2792)));
label_228d7c:
    // 0x228d7c: 0xc0be862
    ctx->pc = 0x228D7Cu;
    SET_GPR_U32(ctx, 31, 0x228D84u);
    ctx->pc = 0x228D80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D84u; }
    }
    if (ctx->pc != 0x228D84u) { return; }
    ctx->pc = 0x228D84u;
    // 0x228d84: 0x3405ffc0
    ctx->pc = 0x228d84u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x228d88: 0x52bbc
    ctx->pc = 0x228d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228d8c: 0xc0be4ba
    ctx->pc = 0x228D8Cu;
    SET_GPR_U32(ctx, 31, 0x228D94u);
    ctx->pc = 0x228D90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D94u; }
    }
    if (ctx->pc != 0x228D94u) { return; }
    ctx->pc = 0x228D94u;
    // 0x228d94: 0x4410003
    ctx->pc = 0x228D94u;
    {
        const bool branch_taken_0x228d94 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x228d94) {
            ctx->pc = 0x228DA4u;
            goto label_228da4;
        }
    }
    ctx->pc = 0x228D9Cu;
    // 0x228d9c: 0x3c013f80
    ctx->pc = 0x228d9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x228da0: 0x4481a000
    ctx->pc = 0x228da0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_228da4:
    // 0x228da4: 0xc0be862
    ctx->pc = 0x228DA4u;
    SET_GPR_U32(ctx, 31, 0x228DACu);
    ctx->pc = 0x228DA8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DACu; }
    }
    if (ctx->pc != 0x228DACu) { return; }
    ctx->pc = 0x228DACu;
    // 0x228dac: 0x3405ffc0
    ctx->pc = 0x228dacu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x228db0: 0x52bbc
    ctx->pc = 0x228db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228db4: 0xc0be356
    ctx->pc = 0x228DB4u;
    SET_GPR_U32(ctx, 31, 0x228DBCu);
    ctx->pc = 0x228DB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DBCu; }
    }
    if (ctx->pc != 0x228DBCu) { return; }
    ctx->pc = 0x228DBCu;
    // 0x228dbc: 0x3405ff20
    ctx->pc = 0x228dbcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65312));
    // 0x228dc0: 0x52bbc
    ctx->pc = 0x228dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228dc4: 0xc0be340
    ctx->pc = 0x228DC4u;
    SET_GPR_U32(ctx, 31, 0x228DCCu);
    ctx->pc = 0x228DC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DCCu; }
    }
    if (ctx->pc != 0x228DCCu) { return; }
    ctx->pc = 0x228DCCu;
    // 0x228dcc: 0xc0be564
    ctx->pc = 0x228DCCu;
    SET_GPR_U32(ctx, 31, 0x228DD4u);
    ctx->pc = 0x228DD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DD4u; }
    }
    if (ctx->pc != 0x228DD4u) { return; }
    ctx->pc = 0x228DD4u;
    // 0x228dd4: 0x46000546
    ctx->pc = 0x228dd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x228dd8: 0xc0be862
    ctx->pc = 0x228DD8u;
    SET_GPR_U32(ctx, 31, 0x228DE0u);
    ctx->pc = 0x228DDCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DE0u; }
    }
    if (ctx->pc != 0x228DE0u) { return; }
    ctx->pc = 0x228DE0u;
    // 0x228de0: 0x3405ffc0
    ctx->pc = 0x228de0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x228de4: 0x52bbc
    ctx->pc = 0x228de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228de8: 0xc0be356
    ctx->pc = 0x228DE8u;
    SET_GPR_U32(ctx, 31, 0x228DF0u);
    ctx->pc = 0x228DECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DF0u; }
    }
    if (ctx->pc != 0x228DF0u) { return; }
    ctx->pc = 0x228DF0u;
    // 0x228df0: 0x3405ff00
    ctx->pc = 0x228df0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65280));
    // 0x228df4: 0x52bbc
    ctx->pc = 0x228df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228df8: 0xc0be340
    ctx->pc = 0x228DF8u;
    SET_GPR_U32(ctx, 31, 0x228E00u);
    ctx->pc = 0x228DFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E00u; }
    }
    if (ctx->pc != 0x228E00u) { return; }
    ctx->pc = 0x228E00u;
    // 0x228e00: 0xc0be564
    ctx->pc = 0x228E00u;
    SET_GPR_U32(ctx, 31, 0x228E08u);
    ctx->pc = 0x228E04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E08u; }
    }
    if (ctx->pc != 0x228E08u) { return; }
    ctx->pc = 0x228E08u;
    // 0x228e08: 0x46000586
    ctx->pc = 0x228e08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x228e0c: 0xc0be862
    ctx->pc = 0x228E0Cu;
    SET_GPR_U32(ctx, 31, 0x228E14u);
    ctx->pc = 0x228E10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E14u; }
    }
    if (ctx->pc != 0x228E14u) { return; }
    ctx->pc = 0x228E14u;
    // 0x228e14: 0x3405ffc0
    ctx->pc = 0x228e14u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
    // 0x228e18: 0x52bbc
    ctx->pc = 0x228e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228e1c: 0xc0be356
    ctx->pc = 0x228E1Cu;
    SET_GPR_U32(ctx, 31, 0x228E24u);
    ctx->pc = 0x228E20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E24u; }
    }
    if (ctx->pc != 0x228E24u) { return; }
    ctx->pc = 0x228E24u;
    // 0x228e24: 0x3405fec0
    ctx->pc = 0x228e24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65216));
    // 0x228e28: 0x52bbc
    ctx->pc = 0x228e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x228e2c: 0xc0be340
    ctx->pc = 0x228E2Cu;
    SET_GPR_U32(ctx, 31, 0x228E34u);
    ctx->pc = 0x228E30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E34u; }
    }
    if (ctx->pc != 0x228E34u) { return; }
    ctx->pc = 0x228E34u;
    // 0x228e34: 0xc0be564
    ctx->pc = 0x228E34u;
    SET_GPR_U32(ctx, 31, 0x228E3Cu);
    ctx->pc = 0x228E38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E3Cu; }
    }
    if (ctx->pc != 0x228E3Cu) { return; }
    ctx->pc = 0x228E3Cu;
    // 0x228e3c: 0x46000506
    ctx->pc = 0x228e3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x228e40: 0x8fb30004
    ctx->pc = 0x228e40u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228e44: 0x6610003
    ctx->pc = 0x228E44u;
    {
        const bool branch_taken_0x228e44 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x228E48u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x228e44) {
            ctx->pc = 0x228E54u;
            goto label_228e54;
        }
    }
    ctx->pc = 0x228E4Cu;
    // 0x228e4c: 0x26690020
    ctx->pc = 0x228e4cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 19), 32));
    // 0x228e50: 0x982d
    ctx->pc = 0x228e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228e54:
    // 0x228e54: 0x8fa20008
    ctx->pc = 0x228e54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228e58: 0x49a821
    ctx->pc = 0x228e58u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x228e5c: 0x24020001
    ctx->pc = 0x228e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x228e60: 0x8fa3000c
    ctx->pc = 0x228e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x228e64: 0x14620004
    ctx->pc = 0x228E64u;
    {
        const bool branch_taken_0x228e64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x228E68u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x228e64) {
            ctx->pc = 0x228E78u;
            goto label_228e78;
        }
    }
    ctx->pc = 0x228E6Cu;
    // 0x228e6c: 0x1617c2
    ctx->pc = 0x228e6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 22), 31));
    // 0x228e70: 0x2c21021
    ctx->pc = 0x228e70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x228e74: 0x29043
    ctx->pc = 0x228e74u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
label_228e78:
    // 0x228e78: 0x3c020032
    ctx->pc = 0x228e78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x228e7c: 0x24420ac8
    ctx->pc = 0x228e7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2760));
    // 0x228e80: 0x1e18c0
    ctx->pc = 0x228e80u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 30), 3));
    // 0x228e84: 0x431021
    ctx->pc = 0x228e84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228e88: 0x8c440004
    ctx->pc = 0x228e88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228e8c: 0xc0b1bb4
    ctx->pc = 0x228E8Cu;
    SET_GPR_U32(ctx, 31, 0x228E94u);
    ctx->pc = 0x228E90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228E94u; }
    }
    if (ctx->pc != 0x228E94u) { return; }
    ctx->pc = 0x228E94u;
    // 0x228e94: 0x24510001
    ctx->pc = 0x228e94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 1));
    // 0x228e98: 0x202d
    ctx->pc = 0x228e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e9c: 0x220282d
    ctx->pc = 0x228e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea0: 0x2e0302d
    ctx->pc = 0x228ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea4: 0x260382d
    ctx->pc = 0x228ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea8: 0x240402d
    ctx->pc = 0x228ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228eac: 0xc0b0b54
    ctx->pc = 0x228EACu;
    SET_GPR_U32(ctx, 31, 0x228EB4u);
    ctx->pc = 0x228EB0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EB4u; }
    }
    if (ctx->pc != 0x228EB4u) { return; }
    ctx->pc = 0x228EB4u;
    // 0x228eb4: 0x3c100032
    ctx->pc = 0x228eb4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x228eb8: 0x26140ab8
    ctx->pc = 0x228eb8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 2744));
    // 0x228ebc: 0xae020ab8
    ctx->pc = 0x228ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
    // 0x228ec0: 0x40202d
    ctx->pc = 0x228ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ec4: 0xc0b0dd6
    ctx->pc = 0x228EC4u;
    SET_GPR_U32(ctx, 31, 0x228ECCu);
    ctx->pc = 0x228EC8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228ECCu; }
    }
    if (ctx->pc != 0x228ECCu) { return; }
    ctx->pc = 0x228ECCu;
    // 0x228ecc: 0x8e040ab8
    ctx->pc = 0x228eccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2744)));
    // 0x228ed0: 0x3c05ffff
    ctx->pc = 0x228ed0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x228ed4: 0x34a5ffff
    ctx->pc = 0x228ed4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x228ed8: 0xc0b0caa
    ctx->pc = 0x228ED8u;
    SET_GPR_U32(ctx, 31, 0x228EE0u);
    ctx->pc = 0x228EDCu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228EE0u; }
    }
    if (ctx->pc != 0x228EE0u) { return; }
    ctx->pc = 0x228EE0u;
    // 0x228ee0: 0x24020001
    ctx->pc = 0x228ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x228ee4: 0x8fa4000c
    ctx->pc = 0x228ee4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x228ee8: 0x14820013
    ctx->pc = 0x228EE8u;
    {
        const bool branch_taken_0x228ee8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x228EECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x228ee8) {
            ctx->pc = 0x228F38u;
            goto label_228f38;
        }
    }
    ctx->pc = 0x228EF0u;
    // 0x228ef0: 0x202d
    ctx->pc = 0x228ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ef4: 0x220282d
    ctx->pc = 0x228ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ef8: 0x2f23021
    ctx->pc = 0x228ef8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x228efc: 0x260382d
    ctx->pc = 0x228efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f00: 0x240402d
    ctx->pc = 0x228f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f04: 0xc0b0b54
    ctx->pc = 0x228F04u;
    SET_GPR_U32(ctx, 31, 0x228F0Cu);
    ctx->pc = 0x228F08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F0Cu; }
    }
    if (ctx->pc != 0x228F0Cu) { return; }
    ctx->pc = 0x228F0Cu;
    // 0x228f0c: 0xae820004
    ctx->pc = 0x228f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x228f10: 0x40202d
    ctx->pc = 0x228f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f14: 0xc0b0dd6
    ctx->pc = 0x228F14u;
    SET_GPR_U32(ctx, 31, 0x228F1Cu);
    ctx->pc = 0x228F18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F1Cu; }
    }
    if (ctx->pc != 0x228F1Cu) { return; }
    ctx->pc = 0x228F1Cu;
    // 0x228f1c: 0x8e840004
    ctx->pc = 0x228f1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x228f20: 0x3c05ffff
    ctx->pc = 0x228f20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x228f24: 0x34a5ffff
    ctx->pc = 0x228f24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x228f28: 0x3c060001
    ctx->pc = 0x228f28u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x228f2c: 0xc0b0caa
    ctx->pc = 0x228F2Cu;
    SET_GPR_U32(ctx, 31, 0x228F34u);
    ctx->pc = 0x228F30u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 32));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F34u; }
    }
    if (ctx->pc != 0x228F34u) { return; }
    ctx->pc = 0x228F34u;
    // 0x228f34: 0x3c02003c
    ctx->pc = 0x228f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_228f38:
    // 0x228f38: 0xac511894
    ctx->pc = 0x228f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6292), GPR_U32(ctx, 17));
    // 0x228f3c: 0x3c020037
    ctx->pc = 0x228f3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x228f40: 0x8c543198
    ctx->pc = 0x228f40u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 12696)));
    // 0x228f44: 0x8fa30000
    ctx->pc = 0x228f44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228f48: 0x80620000
    ctx->pc = 0x228f48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228f4c: 0x10400014
    ctx->pc = 0x228F4Cu;
    {
        const bool branch_taken_0x228f4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x228F50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x228f4c) {
            ctx->pc = 0x228FA0u;
            goto label_228fa0;
        }
    }
    ctx->pc = 0x228F54u;
    // 0x228f54: 0xc0b1bb4
    ctx->pc = 0x228F54u;
    SET_GPR_U32(ctx, 31, 0x228F5Cu);
    ctx->pc = 0x228F58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F5Cu; }
    }
    if (ctx->pc != 0x228F5Cu) { return; }
    ctx->pc = 0x228F5Cu;
    // 0x228f5c: 0x280202d
    ctx->pc = 0x228f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f60: 0x40282d
    ctx->pc = 0x228f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f64: 0x2e0302d
    ctx->pc = 0x228f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f68: 0x8fa70004
    ctx->pc = 0x228f68u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x228f6c: 0x2c0402d
    ctx->pc = 0x228f6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f70: 0xc0b0b54
    ctx->pc = 0x228F70u;
    SET_GPR_U32(ctx, 31, 0x228F78u);
    ctx->pc = 0x228F74u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F78u; }
    }
    if (ctx->pc != 0x228F78u) { return; }
    ctx->pc = 0x228F78u;
    // 0x228f78: 0x3c100032
    ctx->pc = 0x228f78u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x228f7c: 0xae020ab4
    ctx->pc = 0x228f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2740), GPR_U32(ctx, 2));
    // 0x228f80: 0x40202d
    ctx->pc = 0x228f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f84: 0xc0b0dd6
    ctx->pc = 0x228F84u;
    SET_GPR_U32(ctx, 31, 0x228F8Cu);
    ctx->pc = 0x228F88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228F8Cu; }
    }
    if (ctx->pc != 0x228F8Cu) { return; }
    ctx->pc = 0x228F8Cu;
    // 0x228f8c: 0x8e040ab4
    ctx->pc = 0x228f8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2740)));
    // 0x228f90: 0x3c05ffff
    ctx->pc = 0x228f90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x228f94: 0x34a5ffff
    ctx->pc = 0x228f94u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x228f98: 0xc0b0caa
    ctx->pc = 0x228F98u;
    SET_GPR_U32(ctx, 31, 0x228FA0u);
    ctx->pc = 0x228F9Cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FA0u; }
    }
    if (ctx->pc != 0x228FA0u) { return; }
    ctx->pc = 0x228FA0u;
label_228fa0:
    // 0x228fa0: 0x3c030032
    ctx->pc = 0x228fa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x228fa4: 0x24630ac8
    ctx->pc = 0x228fa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2760));
    // 0x228fa8: 0x1e10c0
    ctx->pc = 0x228fa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 30), 3));
    // 0x228fac: 0x431021
    ctx->pc = 0x228facu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228fb0: 0x8c440000
    ctx->pc = 0x228fb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228fb4: 0xc0b1bb4
    ctx->pc = 0x228FB4u;
    SET_GPR_U32(ctx, 31, 0x228FBCu);
    ctx->pc = 0x228FB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FBCu; }
    }
    if (ctx->pc != 0x228FBCu) { return; }
    ctx->pc = 0x228FBCu;
    // 0x228fbc: 0x24510001
    ctx->pc = 0x228fbcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 1));
    // 0x228fc0: 0x280202d
    ctx->pc = 0x228fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fc4: 0x220282d
    ctx->pc = 0x228fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fc8: 0x2e0302d
    ctx->pc = 0x228fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fcc: 0x260382d
    ctx->pc = 0x228fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fd0: 0x240402d
    ctx->pc = 0x228fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fd4: 0xc0b0b54
    ctx->pc = 0x228FD4u;
    SET_GPR_U32(ctx, 31, 0x228FDCu);
    ctx->pc = 0x228FD8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FDCu; }
    }
    if (ctx->pc != 0x228FDCu) { return; }
    ctx->pc = 0x228FDCu;
    // 0x228fdc: 0x3c030032
    ctx->pc = 0x228fdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x228fe0: 0x24700ac0
    ctx->pc = 0x228fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 2752));
    // 0x228fe4: 0xac620ac0
    ctx->pc = 0x228fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2752), GPR_U32(ctx, 2));
    // 0x228fe8: 0x40202d
    ctx->pc = 0x228fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fec: 0xc0b0dd6
    ctx->pc = 0x228FECu;
    SET_GPR_U32(ctx, 31, 0x228FF4u);
    ctx->pc = 0x228FF0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228FF4u; }
    }
    if (ctx->pc != 0x228FF4u) { return; }
    ctx->pc = 0x228FF4u;
    // 0x228ff4: 0x24020001
    ctx->pc = 0x228ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x228ff8: 0x8fa4000c
    ctx->pc = 0x228ff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x228ffc: 0x14820012
    ctx->pc = 0x228FFCu;
    {
        const bool branch_taken_0x228ffc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x229000u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x228ffc) {
            ctx->pc = 0x229048u;
            goto label_229048;
        }
    }
    ctx->pc = 0x229004u;
    // 0x229004: 0x280202d
    ctx->pc = 0x229004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229008: 0x220282d
    ctx->pc = 0x229008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22900c: 0x2f23021
    ctx->pc = 0x22900cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x229010: 0x260382d
    ctx->pc = 0x229010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229014: 0x240402d
    ctx->pc = 0x229014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229018: 0xc0b0b54
    ctx->pc = 0x229018u;
    SET_GPR_U32(ctx, 31, 0x229020u);
    ctx->pc = 0x22901Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229020u; }
    }
    if (ctx->pc != 0x229020u) { return; }
    ctx->pc = 0x229020u;
    // 0x229020: 0xae020004
    ctx->pc = 0x229020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x229024: 0x40202d
    ctx->pc = 0x229024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229028: 0xc0b0dd6
    ctx->pc = 0x229028u;
    SET_GPR_U32(ctx, 31, 0x229030u);
    ctx->pc = 0x22902Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229030u; }
    }
    if (ctx->pc != 0x229030u) { return; }
    ctx->pc = 0x229030u;
    // 0x229030: 0x8e040004
    ctx->pc = 0x229030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229034: 0x3c05ffff
    ctx->pc = 0x229034u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x229038: 0x34a5ffff
    ctx->pc = 0x229038u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x22903c: 0xc0b0caa
    ctx->pc = 0x22903Cu;
    SET_GPR_U32(ctx, 31, 0x229044u);
    ctx->pc = 0x229040u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229044u; }
    }
    if (ctx->pc != 0x229044u) { return; }
    ctx->pc = 0x229044u;
    // 0x229044: 0x3c02003c
    ctx->pc = 0x229044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_229048:
    // 0x229048: 0xac511890
    ctx->pc = 0x229048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6288), GPR_U32(ctx, 17));
    // 0x22904c: 0x3c02003c
    ctx->pc = 0x22904cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229050: 0xac401898
    ctx->pc = 0x229050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6296), GPR_U32(ctx, 0));
    // 0x229054: 0x24020001
    ctx->pc = 0x229054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229058: 0x8fa3000c
    ctx->pc = 0x229058u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x22905c: 0x54620004
    ctx->pc = 0x22905Cu;
    {
        const bool branch_taken_0x22905c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22905c) {
            ctx->pc = 0x229060u;
            SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
            ctx->pc = 0x229070u;
            goto label_229070;
        }
    }
    ctx->pc = 0x229064u;
    // 0x229064: 0x3c020032
    ctx->pc = 0x229064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229068: 0x10000002
    ctx->pc = 0x229068u;
    {
        const bool branch_taken_0x229068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22906Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2748)));
        if (branch_taken_0x229068) {
            ctx->pc = 0x229074u;
            goto label_229074;
        }
    }
    ctx->pc = 0x229070u;
label_229070:
    // 0x229070: 0x8c420ab8
    ctx->pc = 0x229070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2744)));
label_229074:
    // 0x229074: 0xdfbf00a0
    ctx->pc = 0x229074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229078: 0xdfbe0090
    ctx->pc = 0x229078u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22907c: 0xdfb70080
    ctx->pc = 0x22907cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x229080: 0xdfb60070
    ctx->pc = 0x229080u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x229084: 0xdfb50060
    ctx->pc = 0x229084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229088: 0xdfb40050
    ctx->pc = 0x229088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22908c: 0xdfb30040
    ctx->pc = 0x22908cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229090: 0xdfb20030
    ctx->pc = 0x229090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229094: 0xdfb10020
    ctx->pc = 0x229094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229098: 0xdfb00010
    ctx->pc = 0x229098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22909c: 0xc7b600c0
    ctx->pc = 0x22909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2290a0: 0xc7b500b8
    ctx->pc = 0x2290a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2290a4: 0xc7b400b0
    ctx->pc = 0x2290a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2290a8: 0x3e00008
    ctx->pc = 0x2290A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2290ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228D54u: goto label_228d54;
            case 0x228D74u: goto label_228d74;
            case 0x228D7Cu: goto label_228d7c;
            case 0x228DA4u: goto label_228da4;
            case 0x228E54u: goto label_228e54;
            case 0x228E78u: goto label_228e78;
            case 0x228F38u: goto label_228f38;
            case 0x228FA0u: goto label_228fa0;
            case 0x229048u: goto label_229048;
            case 0x229070u: goto label_229070;
            case 0x229074u: goto label_229074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2290B0u;
}
