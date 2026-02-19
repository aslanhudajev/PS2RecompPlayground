#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: serve_mtap
// Address: 0x203d48 - 0x203f34
void serve_mtap_0x203d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203d48u;

    // 0x203d48: 0x27bdff60
    ctx->pc = 0x203d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x203d4c: 0xffbf0090
    ctx->pc = 0x203d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x203d50: 0xffbe0080
    ctx->pc = 0x203d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x203d54: 0xffb70070
    ctx->pc = 0x203d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x203d58: 0xffb60060
    ctx->pc = 0x203d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x203d5c: 0xffb50050
    ctx->pc = 0x203d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x203d60: 0xffb40040
    ctx->pc = 0x203d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x203d64: 0xffb30030
    ctx->pc = 0x203d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x203d68: 0xffb20020
    ctx->pc = 0x203d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x203d6c: 0xffb10010
    ctx->pc = 0x203d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203d70: 0xffb00000
    ctx->pc = 0x203d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203d74: 0x3c030031
    ctx->pc = 0x203d74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x203d78: 0x24020064
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
    // 0x203d7c: 0xac620f0c
    ctx->pc = 0x203d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    // 0x203d80: 0x882d
    ctx->pc = 0x203d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203d84: 0x3c150031
    ctx->pc = 0x203d84u;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x203d88: 0x24170001
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203d8c: 0x3c020031
    ctx->pc = 0x203d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203d90: 0x24561c80
    ctx->pc = 0x203d90u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7296));
    // 0x203d94: 0x3c140031
    ctx->pc = 0x203d94u;
    SET_GPR_U32(ctx, 20, ((uint32_t)49 << 16));
    // 0x203d98: 0x3c020031
    ctx->pc = 0x203d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203d9c: 0x245e1c88
    ctx->pc = 0x203d9cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 7304));
label_203da0:
    // 0x203da0: 0x8ea20f08
    ctx->pc = 0x203da0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 3848)));
    // 0x203da4: 0x0
    ctx->pc = 0x203da4u;
    // NOP
    // 0x203da8: 0x0
    ctx->pc = 0x203da8u;
    // NOP
    // 0x203dac: 0x0
    ctx->pc = 0x203dacu;
    // NOP
    // 0x203db0: 0x0
    ctx->pc = 0x203db0u;
    // NOP
    // 0x203db4: 0x1440fffa
    ctx->pc = 0x203DB4u;
    {
        const bool branch_taken_0x203db4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x203db4) {
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203DBCu;
    // 0x203dbc: 0xaeb70f08
    ctx->pc = 0x203dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3848), GPR_U32(ctx, 23));
    // 0x203dc0: 0xc0b9492
    ctx->pc = 0x203DC0u;
    SET_GPR_U32(ctx, 31, 0x203DC8u);
    ctx->pc = 0x203DC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapGetConnection_0x2e5248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DC8u; }
    }
    if (ctx->pc != 0x203DC8u) { return; }
    ctx->pc = 0x203DC8u;
    // 0x203dc8: 0x1040001a
    ctx->pc = 0x203DC8u;
    {
        const bool branch_taken_0x203dc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203DCCu;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x203dc8) {
            ctx->pc = 0x203E34u;
            goto label_203e34;
        }
    }
    ctx->pc = 0x203DD0u;
    // 0x203dd0: 0x2761821
    ctx->pc = 0x203dd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x203dd4: 0x8c620000
    ctx->pc = 0x203dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203dd8: 0x24120002
    ctx->pc = 0x203dd8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x203ddc: 0x10520042
    ctx->pc = 0x203DDCu;
    {
        const bool branch_taken_0x203ddc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x203ddc) {
            ctx->pc = 0x203EE8u;
            goto label_203ee8;
        }
    }
    ctx->pc = 0x203DE4u;
    // 0x203de4: 0xac720000
    ctx->pc = 0x203de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x203de8: 0x8e820e4c
    ctx->pc = 0x203de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 3660)));
    // 0x203dec: 0x2403f0ff
    ctx->pc = 0x203decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294963455));
    // 0x203df0: 0x431024
    ctx->pc = 0x203df0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203df4: 0xae820e4c
    ctx->pc = 0x203df4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3660), GPR_U32(ctx, 2));
    // 0x203df8: 0x3c04003a
    ctx->pc = 0x203df8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x203dfc: 0x24844948
    ctx->pc = 0x203dfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18760));
    // 0x203e00: 0xc0b4a34
    ctx->pc = 0x203E00u;
    SET_GPR_U32(ctx, 31, 0x203E08u);
    ctx->pc = 0x203E04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E08u; }
    }
    if (ctx->pc != 0x203E08u) { return; }
    ctx->pc = 0x203E08u;
    // 0x203e08: 0x26300002
    ctx->pc = 0x203e08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2));
    // 0x203e0c: 0xc0b945a
    ctx->pc = 0x203E0Cu;
    SET_GPR_U32(ctx, 31, 0x203E14u);
    ctx->pc = 0x203E10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapPortOpen_0x2e5168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E14u; }
    }
    if (ctx->pc != 0x203E14u) { return; }
    ctx->pc = 0x203E14u;
    // 0x203e14: 0x10400034
    ctx->pc = 0x203E14u;
    {
        const bool branch_taken_0x203e14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x203e14) {
            ctx->pc = 0x203EE8u;
            goto label_203ee8;
        }
    }
    ctx->pc = 0x203E1Cu;
    // 0x203e1c: 0xc0b9492
    ctx->pc = 0x203E1Cu;
    SET_GPR_U32(ctx, 31, 0x203E24u);
    ctx->pc = 0x203E20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5248u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapGetConnection_0x2e5248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E24u; }
    }
    if (ctx->pc != 0x203E24u) { return; }
    ctx->pc = 0x203E24u;
    // 0x203e24: 0x10400030
    ctx->pc = 0x203E24u;
    {
        const bool branch_taken_0x203e24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203E28u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
        if (branch_taken_0x203e24) {
            ctx->pc = 0x203EE8u;
            goto label_203ee8;
        }
    }
    ctx->pc = 0x203E2Cu;
    // 0x203e2c: 0x1000002e
    ctx->pc = 0x203E2Cu;
    {
        const bool branch_taken_0x203e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203E30u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x203e2c) {
            ctx->pc = 0x203EE8u;
            goto label_203ee8;
        }
    }
    ctx->pc = 0x203E34u;
label_203e34:
    // 0x203e34: 0x111080
    ctx->pc = 0x203e34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x203e38: 0x562021
    ctx->pc = 0x203e38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x203e3c: 0x8c830000
    ctx->pc = 0x203e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203e40: 0x24020002
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x203e44: 0x14620028
    ctx->pc = 0x203E44u;
    {
        const bool branch_taken_0x203e44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x203E48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x203e44) {
            ctx->pc = 0x203EE8u;
            goto label_203ee8;
        }
    }
    ctx->pc = 0x203E4Cu;
    // 0x203e4c: 0xac820000
    ctx->pc = 0x203e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x203e50: 0x26220008
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 8));
    // 0x203e54: 0x571004
    ctx->pc = 0x203e54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 2) & 0x1F));
    // 0x203e58: 0x8e830e4c
    ctx->pc = 0x203e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 3660)));
    // 0x203e5c: 0x431025
    ctx->pc = 0x203e5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203e60: 0xae820e4c
    ctx->pc = 0x203e60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3660), GPR_U32(ctx, 2));
    // 0x203e64: 0x302d
    ctx->pc = 0x203e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e68: 0x114880
    ctx->pc = 0x203e68u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 17), 2));
    // 0x203e6c: 0x3c020031
    ctx->pc = 0x203e6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203e70: 0x244c0ea0
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 3744));
    // 0x203e74: 0x3c080031
    ctx->pc = 0x203e74u;
    SET_GPR_U32(ctx, 8, ((uint32_t)49 << 16));
    // 0x203e78: 0x240b0001
    ctx->pc = 0x203e78u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203e7c: 0x3c020031
    ctx->pc = 0x203e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203e80: 0x244a0e90
    ctx->pc = 0x203e80u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 3728));
    // 0x203e84: 0x2407ffff
    ctx->pc = 0x203e84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203e88: 0x1261021
    ctx->pc = 0x203e88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x203e8c: 0x0
    ctx->pc = 0x203e8cu;
    // NOP
label_203e90:
    // 0x203e90: 0x21080
    ctx->pc = 0x203e90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x203e94: 0x4c2821
    ctx->pc = 0x203e94u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x203e98: 0x8ca40000
    ctx->pc = 0x203e98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203e9c: 0x4800008
    ctx->pc = 0x203E9Cu;
    {
        const bool branch_taken_0x203e9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x203EA0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
        if (branch_taken_0x203e9c) {
            ctx->pc = 0x203EC0u;
            goto label_203ec0;
        }
    }
    ctx->pc = 0x203EA4u;
    // 0x203ea4: 0x8d030e4c
    ctx->pc = 0x203ea4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 3660)));
    // 0x203ea8: 0x431025
    ctx->pc = 0x203ea8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203eac: 0xad020e4c
    ctx->pc = 0x203eacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3660), GPR_U32(ctx, 2));
    // 0x203eb0: 0x41080
    ctx->pc = 0x203eb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x203eb4: 0x4a1021
    ctx->pc = 0x203eb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x203eb8: 0xac470000
    ctx->pc = 0x203eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x203ebc: 0xaca70000
    ctx->pc = 0x203ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_203ec0:
    // 0x203ec0: 0x24c60001
    ctx->pc = 0x203ec0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x203ec4: 0x28c20004
    ctx->pc = 0x203ec4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4));
    // 0x203ec8: 0x1440fff1
    ctx->pc = 0x203EC8u;
    {
        const bool branch_taken_0x203ec8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203ECCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        if (branch_taken_0x203ec8) {
            ctx->pc = 0x203E90u;
            goto label_203e90;
        }
    }
    ctx->pc = 0x203ED0u;
    // 0x203ed0: 0x3c04003a
    ctx->pc = 0x203ed0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x203ed4: 0x24844960
    ctx->pc = 0x203ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18784));
    // 0x203ed8: 0xc0b4a34
    ctx->pc = 0x203ED8u;
    SET_GPR_U32(ctx, 31, 0x203EE0u);
    ctx->pc = 0x203EDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EE0u; }
    }
    if (ctx->pc != 0x203EE0u) { return; }
    ctx->pc = 0x203EE0u;
    // 0x203ee0: 0xc0b9476
    ctx->pc = 0x203EE0u;
    SET_GPR_U32(ctx, 31, 0x203EE8u);
    ctx->pc = 0x203EE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x2E51D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapPortClose_0x2e51d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EE8u; }
    }
    if (ctx->pc != 0x203EE8u) { return; }
    ctx->pc = 0x203EE8u;
label_203ee8:
    // 0x203ee8: 0xaea00f08
    ctx->pc = 0x203ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3848), GPR_U32(ctx, 0));
    // 0x203eec: 0x26310001
    ctx->pc = 0x203eecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x203ef0: 0x2a220002
    ctx->pc = 0x203ef0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x203ef4: 0x1440ffaa
    ctx->pc = 0x203EF4u;
    {
        const bool branch_taken_0x203ef4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203EF8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x203ef4) {
            ctx->pc = 0x203DA0u;
            goto label_203da0;
        }
    }
    ctx->pc = 0x203EFCu;
    // 0x203efc: 0x240200c7
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 199));
    // 0x203f00: 0xac620f0c
    ctx->pc = 0x203f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3852), GPR_U32(ctx, 2));
    // 0x203f04: 0xdfbf0090
    ctx->pc = 0x203f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203f08: 0xdfbe0080
    ctx->pc = 0x203f08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x203f0c: 0xdfb70070
    ctx->pc = 0x203f0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203f10: 0xdfb60060
    ctx->pc = 0x203f10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203f14: 0xdfb50050
    ctx->pc = 0x203f14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203f18: 0xdfb40040
    ctx->pc = 0x203f18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x203f1c: 0xdfb30030
    ctx->pc = 0x203f1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203f20: 0xdfb20020
    ctx->pc = 0x203f20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203f24: 0xdfb10010
    ctx->pc = 0x203f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203f28: 0xdfb00000
    ctx->pc = 0x203f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203f2c: 0x3e00008
    ctx->pc = 0x203F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203DA0u: goto label_203da0;
            case 0x203E34u: goto label_203e34;
            case 0x203E90u: goto label_203e90;
            case 0x203EC0u: goto label_203ec0;
            case 0x203EE8u: goto label_203ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203F34u;
}
