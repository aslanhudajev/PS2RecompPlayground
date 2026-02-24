#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: displayStart
// Address: 0x101cf8 - 0x101f80
void displayStart_0x101cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101cf8u;

    // 0x101cf8: 0x27bdffa0
    ctx->pc = 0x101cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x101cfc: 0xaf8080a0
    ctx->pc = 0x101cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934688), GPR_U32(ctx, 0));
    // 0x101d00: 0xffb30030
    ctx->pc = 0x101d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x101d04: 0xffb00000
    ctx->pc = 0x101d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101d08: 0x3c130014
    ctx->pc = 0x101d08u;
    SET_GPR_S32(ctx, 19, ((uint32_t)20 << 16));
    // 0x101d0c: 0xffbf0050
    ctx->pc = 0x101d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x101d10: 0x802d
    ctx->pc = 0x101d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d14: 0xffb40040
    ctx->pc = 0x101d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x101d18: 0xffb20020
    ctx->pc = 0x101d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x101d1c: 0xc04292e
    ctx->pc = 0x101D1Cu;
    SET_GPR_U32(ctx, 31, 0x101D24u);
    ctx->pc = 0x101D20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x10A4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memInit_0x10a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D24u; }
    }
    if (ctx->pc != 0x101D24u) { return; }
    ctx->pc = 0x101D24u;
    // 0x101d24: 0x3c013f80
    ctx->pc = 0x101d24u;
    SET_GPR_S32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x101d28: 0x44816000
    ctx->pc = 0x101d28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x101d2c: 0x3c057f7f
    ctx->pc = 0x101d2cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)32639 << 16));
    // 0x101d30: 0x202d
    ctx->pc = 0x101d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d34: 0x34a57f7f
    ctx->pc = 0x101d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)32639);
    // 0x101d38: 0xc04003a
    ctx->pc = 0x101D38u;
    SET_GPR_U32(ctx, 31, 0x101D40u);
    ctx->pc = 0x101D3Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1000E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D40u; }
    }
    if (ctx->pc != 0x101D40u) { return; }
    ctx->pc = 0x101D40u;
    // 0x101d40: 0x2402007f
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x101d44: 0x8663dfc0
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
    // 0x101d48: 0x10600085
    ctx->pc = 0x101D48u;
    {
        const bool branch_taken_0x101d48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x101D4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
        if (branch_taken_0x101d48) {
            ctx->pc = 0x101F60u;
            goto label_101f60;
        }
    }
    ctx->pc = 0x101D50u;
    // 0x101d50: 0x3c140014
    ctx->pc = 0x101d50u;
    SET_GPR_S32(ctx, 20, ((uint32_t)20 << 16));
    // 0x101d54: 0x3c110017
    ctx->pc = 0x101d54u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x101d58: 0x3c120013
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 18, ((uint32_t)19 << 16));
    // 0x101d5c: 0x202d
    ctx->pc = 0x101d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101d60:
    // 0x101d60: 0x282d
    ctx->pc = 0x101d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d64: 0xc0458fe
    ctx->pc = 0x101D64u;
    SET_GPR_U32(ctx, 31, 0x101D6Cu);
    ctx->pc = 0x101D68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 4294959360));
    ctx->pc = 0x1163F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D6Cu; }
    }
    if (ctx->pc != 0x101D6Cu) { return; }
    ctx->pc = 0x101D6Cu;
    // 0x101d6c: 0x202d
    ctx->pc = 0x101d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d70: 0xc04591e
    ctx->pc = 0x101D70u;
    SET_GPR_U32(ctx, 31, 0x101D78u);
    ctx->pc = 0x101D74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116478u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D78u; }
    }
    if (ctx->pc != 0x101D78u) { return; }
    ctx->pc = 0x101D78u;
    // 0x101d78: 0x40182d
    ctx->pc = 0x101d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d7c: 0x24020006
    ctx->pc = 0x101d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x101d80: 0x10620006
    ctx->pc = 0x101D80u;
    {
        const bool branch_taken_0x101d80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x101D84u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        if (branch_taken_0x101d80) {
            ctx->pc = 0x101D9Cu;
            goto label_101d9c;
        }
    }
    ctx->pc = 0x101D88u;
    // 0x101d88: 0x24020002
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x101d8c: 0x10620004
    ctx->pc = 0x101D8Cu;
    {
        const bool branch_taken_0x101d8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x101D90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294959360));
        if (branch_taken_0x101d8c) {
            ctx->pc = 0x101DA0u;
            goto label_101da0;
        }
    }
    ctx->pc = 0x101D94u;
    // 0x101d94: 0x10000007
    ctx->pc = 0x101D94u;
    {
        const bool branch_taken_0x101d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101D98u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x101d94) {
            ctx->pc = 0x101DB4u;
            goto label_101db4;
        }
    }
    ctx->pc = 0x101D9Cu;
label_101d9c:
    // 0x101d9c: 0x2682e100
    ctx->pc = 0x101d9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294959360));
label_101da0:
    // 0x101da0: 0x90430002
    ctx->pc = 0x101da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x101da4: 0x90440003
    ctx->pc = 0x101da4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x101da8: 0x31a00
    ctx->pc = 0x101da8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x101dac: 0x641827
    ctx->pc = 0x101dacu;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x101db0: 0xa7838112
    ctx->pc = 0x101db0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_101db4:
    // 0x101db4: 0xc040c38
    ctx->pc = 0x101DB4u;
    SET_GPR_U32(ctx, 31, 0x101DBCu);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DBCu; }
    }
    if (ctx->pc != 0x101DBCu) { return; }
    ctx->pc = 0x101DBCu;
    // 0x101dbc: 0xc04297c
    ctx->pc = 0x101DBCu;
    SET_GPR_U32(ctx, 31, 0x101DC4u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DC4u; }
    }
    if (ctx->pc != 0x101DC4u) { return; }
    ctx->pc = 0x101DC4u;
    // 0x101dc4: 0x40202d
    ctx->pc = 0x101dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dc8: 0x282d
    ctx->pc = 0x101dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dcc: 0x24060100
    ctx->pc = 0x101dccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x101dd0: 0x24070280
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101dd4: 0x24080200
    ctx->pc = 0x101dd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101dd8: 0x24090043
    ctx->pc = 0x101dd8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101ddc: 0xc0426c4
    ctx->pc = 0x101DDCu;
    SET_GPR_U32(ctx, 31, 0x101DE4u);
    ctx->pc = 0x101DE0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 11120));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DE4u; }
    }
    if (ctx->pc != 0x101DE4u) { return; }
    ctx->pc = 0x101DE4u;
    // 0x101de4: 0xc04295e
    ctx->pc = 0x101DE4u;
    SET_GPR_U32(ctx, 31, 0x101DECu);
    ctx->pc = 0x101DE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DECu; }
    }
    if (ctx->pc != 0x101DECu) { return; }
    ctx->pc = 0x101DECu;
    // 0x101dec: 0xc042970
    ctx->pc = 0x101DECu;
    SET_GPR_U32(ctx, 31, 0x101DF4u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DF4u; }
    }
    if (ctx->pc != 0x101DF4u) { return; }
    ctx->pc = 0x101DF4u;
    // 0x101df4: 0x8f8480a0
    ctx->pc = 0x101df4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x101df8: 0x2402007f
    ctx->pc = 0x101df8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x101dfc: 0x10820006
    ctx->pc = 0x101DFCu;
    {
        const bool branch_taken_0x101dfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x101dfc) {
            ctx->pc = 0x101E18u;
            goto label_101e18;
        }
    }
    ctx->pc = 0x101E04u;
    // 0x101e04: 0xc041fd8
    ctx->pc = 0x101E04u;
    SET_GPR_U32(ctx, 31, 0x101E0Cu);
    ctx->pc = 0x107F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        screenFade_0x107f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E0Cu; }
    }
    if (ctx->pc != 0x101E0Cu) { return; }
    ctx->pc = 0x101E0Cu;
    // 0x101e0c: 0x8f8280a0
    ctx->pc = 0x101e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x101e10: 0x24420001
    ctx->pc = 0x101e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x101e14: 0xaf8280a0
    ctx->pc = 0x101e14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934688), GPR_U32(ctx, 2));
label_101e18:
    // 0x101e18: 0xc0414e2
    ctx->pc = 0x101E18u;
    SET_GPR_U32(ctx, 31, 0x101E20u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E20u; }
    }
    if (ctx->pc != 0x101E20u) { return; }
    ctx->pc = 0x101E20u;
    // 0x101e20: 0x97848112
    ctx->pc = 0x101e20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x101e24: 0x30820800
    ctx->pc = 0x101e24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2048));
    // 0x101e28: 0x10400026
    ctx->pc = 0x101E28u;
    {
        const bool branch_taken_0x101e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101E2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4864));
        if (branch_taken_0x101e28) {
            ctx->pc = 0x101EC4u;
            goto label_101ec4;
        }
    }
    ctx->pc = 0x101E30u;
    // 0x101e30: 0x8443001a
    ctx->pc = 0x101e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x101e34: 0x1460001e
    ctx->pc = 0x101E34u;
    {
        const bool branch_taken_0x101e34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x101E38u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x101e34) {
            ctx->pc = 0x101EB0u;
            goto label_101eb0;
        }
    }
    ctx->pc = 0x101E3Cu;
    // 0x101e3c: 0x0
    ctx->pc = 0x101e3cu;
    // NOP
label_101e40:
    // 0x101e40: 0xc040c38
    ctx->pc = 0x101E40u;
    SET_GPR_U32(ctx, 31, 0x101E48u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E48u; }
    }
    if (ctx->pc != 0x101E48u) { return; }
    ctx->pc = 0x101E48u;
    // 0x101e48: 0xc04297c
    ctx->pc = 0x101E48u;
    SET_GPR_U32(ctx, 31, 0x101E50u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E50u; }
    }
    if (ctx->pc != 0x101E50u) { return; }
    ctx->pc = 0x101E50u;
    // 0x101e50: 0x40202d
    ctx->pc = 0x101e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e54: 0x282d
    ctx->pc = 0x101e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e58: 0x24060100
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x101e5c: 0x24070280
    ctx->pc = 0x101e5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101e60: 0x24080200
    ctx->pc = 0x101e60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101e64: 0x24090043
    ctx->pc = 0x101e64u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101e68: 0xc0426c4
    ctx->pc = 0x101E68u;
    SET_GPR_U32(ctx, 31, 0x101E70u);
    ctx->pc = 0x101E6Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 11120));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E70u; }
    }
    if (ctx->pc != 0x101E70u) { return; }
    ctx->pc = 0x101E70u;
    // 0x101e70: 0xc04295e
    ctx->pc = 0x101E70u;
    SET_GPR_U32(ctx, 31, 0x101E78u);
    ctx->pc = 0x101E74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E78u; }
    }
    if (ctx->pc != 0x101E78u) { return; }
    ctx->pc = 0x101E78u;
    // 0x101e78: 0xc042970
    ctx->pc = 0x101E78u;
    SET_GPR_U32(ctx, 31, 0x101E80u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E80u; }
    }
    if (ctx->pc != 0x101E80u) { return; }
    ctx->pc = 0x101E80u;
    // 0x101e80: 0xc04238e
    ctx->pc = 0x101E80u;
    SET_GPR_U32(ctx, 31, 0x101E88u);
    ctx->pc = 0x101E84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E88u; }
    }
    if (ctx->pc != 0x101E88u) { return; }
    ctx->pc = 0x101E88u;
    // 0x101e88: 0xc0414e2
    ctx->pc = 0x101E88u;
    SET_GPR_U32(ctx, 31, 0x101E90u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E90u; }
    }
    if (ctx->pc != 0x101E90u) { return; }
    ctx->pc = 0x101E90u;
    // 0x101e90: 0x8f82814c
    ctx->pc = 0x101e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101e94: 0x28420004
    ctx->pc = 0x101e94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x101e98: 0x1040ffe9
    ctx->pc = 0x101E98u;
    {
        const bool branch_taken_0x101e98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x101E9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4864));
        if (branch_taken_0x101e98) {
            ctx->pc = 0x101E40u;
            goto label_101e40;
        }
    }
    ctx->pc = 0x101EA0u;
    // 0x101ea0: 0x24020001
    ctx->pc = 0x101ea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ea4: 0xa462001a
    ctx->pc = 0x101ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x101ea8: 0xa660dfc0
    ctx->pc = 0x101ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294959040), (uint16_t)GPR_U32(ctx, 0));
    // 0x101eac: 0x97848112
    ctx->pc = 0x101eacu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_101eb0:
    // 0x101eb0: 0x30820800
    ctx->pc = 0x101eb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 2048));
    // 0x101eb4: 0x1440000a
    ctx->pc = 0x101EB4u;
    {
        const bool branch_taken_0x101eb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101EB8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
        if (branch_taken_0x101eb4) {
            ctx->pc = 0x101EE0u;
            goto label_101ee0;
        }
    }
    ctx->pc = 0x101EBCu;
    // 0x101ebc: 0x10000003
    ctx->pc = 0x101EBCu;
    {
        const bool branch_taken_0x101ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101EC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4864));
        if (branch_taken_0x101ebc) {
            ctx->pc = 0x101ECCu;
            goto label_101ecc;
        }
    }
    ctx->pc = 0x101EC4u;
label_101ec4:
    // 0x101ec4: 0x26100001
    ctx->pc = 0x101ec4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x101ec8: 0x26441300
    ctx->pc = 0x101ec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4864));
label_101ecc:
    // 0x101ecc: 0x24030001
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x101ed0: 0x8482001a
    ctx->pc = 0x101ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x101ed4: 0x50430001
    ctx->pc = 0x101ED4u;
    {
        const bool branch_taken_0x101ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x101ed4) {
            ctx->pc = 0x101ED8u;
            WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x101EDCu;
            goto label_101edc;
        }
    }
    ctx->pc = 0x101EDCu;
label_101edc:
    // 0x101edc: 0x2a020100
    ctx->pc = 0x101edcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 256));
label_101ee0:
    // 0x101ee0: 0x1440001d
    ctx->pc = 0x101EE0u;
    {
        const bool branch_taken_0x101ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101EE4u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
        if (branch_taken_0x101ee0) {
            ctx->pc = 0x101F58u;
            goto label_101f58;
        }
    }
    ctx->pc = 0x101EE8u;
    // 0x101ee8: 0x10000016
    ctx->pc = 0x101EE8u;
    {
        const bool branch_taken_0x101ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101EECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
        if (branch_taken_0x101ee8) {
            ctx->pc = 0x101F44u;
            goto label_101f44;
        }
    }
    ctx->pc = 0x101EF0u;
label_101ef0:
    // 0x101ef0: 0xc040c38
    ctx->pc = 0x101EF0u;
    SET_GPR_U32(ctx, 31, 0x101EF8u);
    ctx->pc = 0x101EF4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EF8u; }
    }
    if (ctx->pc != 0x101EF8u) { return; }
    ctx->pc = 0x101EF8u;
    // 0x101ef8: 0xc04297c
    ctx->pc = 0x101EF8u;
    SET_GPR_U32(ctx, 31, 0x101F00u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F00u; }
    }
    if (ctx->pc != 0x101F00u) { return; }
    ctx->pc = 0x101F00u;
    // 0x101f00: 0x40202d
    ctx->pc = 0x101f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f04: 0x282d
    ctx->pc = 0x101f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f08: 0x24060100
    ctx->pc = 0x101f08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x101f0c: 0x24070280
    ctx->pc = 0x101f0cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 640));
    // 0x101f10: 0x24080200
    ctx->pc = 0x101f10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x101f14: 0x24090043
    ctx->pc = 0x101f14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 67));
    // 0x101f18: 0xc0426c4
    ctx->pc = 0x101F18u;
    SET_GPR_U32(ctx, 31, 0x101F20u);
    ctx->pc = 0x101F1Cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 11120));
    ctx->pc = 0x109B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F20u; }
    }
    if (ctx->pc != 0x101F20u) { return; }
    ctx->pc = 0x101F20u;
    // 0x101f20: 0xc04295e
    ctx->pc = 0x101F20u;
    SET_GPR_U32(ctx, 31, 0x101F28u);
    ctx->pc = 0x101F24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F28u; }
    }
    if (ctx->pc != 0x101F28u) { return; }
    ctx->pc = 0x101F28u;
    // 0x101f28: 0xc042970
    ctx->pc = 0x101F28u;
    SET_GPR_U32(ctx, 31, 0x101F30u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F30u; }
    }
    if (ctx->pc != 0x101F30u) { return; }
    ctx->pc = 0x101F30u;
    // 0x101f30: 0xc04238e
    ctx->pc = 0x101F30u;
    SET_GPR_U32(ctx, 31, 0x101F38u);
    ctx->pc = 0x101F34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F38u; }
    }
    if (ctx->pc != 0x101F38u) { return; }
    ctx->pc = 0x101F38u;
    // 0x101f38: 0xc0414e2
    ctx->pc = 0x101F38u;
    SET_GPR_U32(ctx, 31, 0x101F40u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F40u; }
    }
    if (ctx->pc != 0x101F40u) { return; }
    ctx->pc = 0x101F40u;
    // 0x101f40: 0x8f82814c
    ctx->pc = 0x101f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
label_101f44:
    // 0x101f44: 0x28420004
    ctx->pc = 0x101f44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x101f48: 0x1040ffe9
    ctx->pc = 0x101F48u;
    {
        const bool branch_taken_0x101f48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x101f48) {
            ctx->pc = 0x101EF0u;
            goto label_101ef0;
        }
    }
    ctx->pc = 0x101F50u;
    // 0x101f50: 0xa660dfc0
    ctx->pc = 0x101f50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4294959040), (uint16_t)GPR_U32(ctx, 0));
    // 0x101f54: 0x8662dfc0
    ctx->pc = 0x101f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
label_101f58:
    // 0x101f58: 0x1440ff81
    ctx->pc = 0x101F58u;
    {
        const bool branch_taken_0x101f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x101F5Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101f58) {
            ctx->pc = 0x101D60u;
            goto label_101d60;
        }
    }
    ctx->pc = 0x101F60u;
label_101f60:
    // 0x101f60: 0xdfbf0050
    ctx->pc = 0x101f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101f64: 0xdfb40040
    ctx->pc = 0x101f64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101f68: 0xdfb30030
    ctx->pc = 0x101f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101f6c: 0xdfb20020
    ctx->pc = 0x101f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101f70: 0xdfb10010
    ctx->pc = 0x101f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101f74: 0xdfb00000
    ctx->pc = 0x101f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101f78: 0x8042376
    ctx->pc = 0x101F78u;
    ctx->pc = 0x101F7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x108DD8u;
    initFadeIn_0x108dd8(rdram, ctx, runtime); return;
    ctx->pc = 0x101F80u;
}
