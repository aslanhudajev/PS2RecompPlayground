#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reInitialiseDrawDisplay
// Address: 0x102cb8 - 0x1030dc
void reInitialiseDrawDisplay_0x102cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102cb8u;

    // 0x102cb8: 0x27bdff30
    ctx->pc = 0x102cb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x102cbc: 0xaf8082b4
    ctx->pc = 0x102cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 0));
    // 0x102cc0: 0xffbe00b0
    ctx->pc = 0x102cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x102cc4: 0x202d
    ctx->pc = 0x102cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102cc8: 0xffb50080
    ctx->pc = 0x102cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x102ccc: 0x241e0008
    ctx->pc = 0x102cccu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 8));
    // 0x102cd0: 0xffb40070
    ctx->pc = 0x102cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x102cd4: 0x2415fe00
    ctx->pc = 0x102cd4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x102cd8: 0xffb30060
    ctx->pc = 0x102cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x102cdc: 0x27948498
    ctx->pc = 0x102cdcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 28), 4294935704));
    // 0x102ce0: 0xffb20050
    ctx->pc = 0x102ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x102ce4: 0x982d
    ctx->pc = 0x102ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ce8: 0xffbf00c0
    ctx->pc = 0x102ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x102cec: 0xffb700a0
    ctx->pc = 0x102cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x102cf0: 0xffb60090
    ctx->pc = 0x102cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x102cf4: 0xffb10040
    ctx->pc = 0x102cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x102cf8: 0xc043948
    ctx->pc = 0x102CF8u;
    SET_GPR_U32(ctx, 31, 0x102D00u);
    ctx->pc = 0x102CFCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D00u; }
    }
    if (ctx->pc != 0x102D00u) { return; }
    ctx->pc = 0x102D00u;
    // 0x102d00: 0x202d
    ctx->pc = 0x102d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d04: 0xc043322
    ctx->pc = 0x102D04u;
    SET_GPR_U32(ctx, 31, 0x102D0Cu);
    ctx->pc = 0x102D08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D0Cu; }
    }
    if (ctx->pc != 0x102D0Cu) { return; }
    ctx->pc = 0x102D0Cu;
    // 0x102d0c: 0xc043192
    ctx->pc = 0x102D0Cu;
    SET_GPR_U32(ctx, 31, 0x102D14u);
    ctx->pc = 0x10C648u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10c648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D14u; }
    }
    if (ctx->pc != 0x102D14u) { return; }
    ctx->pc = 0x102D14u;
    // 0x102d14: 0xc040ad4
    ctx->pc = 0x102D14u;
    SET_GPR_U32(ctx, 31, 0x102D1Cu);
    ctx->pc = 0x102B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        clearVRAM_0x102b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D1Cu; }
    }
    if (ctx->pc != 0x102D1Cu) { return; }
    ctx->pc = 0x102D1Cu;
    // 0x102d1c: 0x202d
    ctx->pc = 0x102d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d20: 0x24050001
    ctx->pc = 0x102d20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102d24: 0x24060003
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    // 0x102d28: 0xc04314a
    ctx->pc = 0x102D28u;
    SET_GPR_U32(ctx, 31, 0x102D30u);
    ctx->pc = 0x102D2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10C528u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x10c528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D30u; }
    }
    if (ctx->pc != 0x102D30u) { return; }
    ctx->pc = 0x102D30u;
    // 0x102d30: 0x8f838490
    ctx->pc = 0x102d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x102d34: 0x2407ffbf
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x102d38: 0x202d
    ctx->pc = 0x102d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d3c: 0x24050280
    ctx->pc = 0x102d3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 640));
    // 0x102d40: 0x8c620000
    ctx->pc = 0x102d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102d44: 0x24060200
    ctx->pc = 0x102d44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 512));
    // 0x102d48: 0x471024
    ctx->pc = 0x102d48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x102d4c: 0xac620000
    ctx->pc = 0x102d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x102d50: 0xc04222c
    ctx->pc = 0x102D50u;
    SET_GPR_U32(ctx, 31, 0x102D58u);
    ctx->pc = 0x102D54u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935704), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1088B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceNextFBaddr_0x1088b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D58u; }
    }
    if (ctx->pc != 0x102D58u) { return; }
    ctx->pc = 0x102D58u;
    // 0x102d58: 0x3c030014
    ctx->pc = 0x102d58u;
    SET_GPR_S32(ctx, 3, ((uint32_t)20 << 16));
    // 0x102d5c: 0xa782849a
    ctx->pc = 0x102d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935706), (uint16_t)GPR_U32(ctx, 2));
    // 0x102d60: 0x24721600
    ctx->pc = 0x102d60u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 5632));
    // 0x102d64: 0x0
    ctx->pc = 0x102d64u;
    // NOP
label_102d68:
    // 0x102d68: 0x3a0202d
    ctx->pc = 0x102d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d6c: 0x282d
    ctx->pc = 0x102d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d70: 0x24060280
    ctx->pc = 0x102d70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 640));
    // 0x102d74: 0x24070200
    ctx->pc = 0x102d74u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
    // 0x102d78: 0x402d
    ctx->pc = 0x102d78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102d7c: 0xc0431ac
    ctx->pc = 0x102D7Cu;
    SET_GPR_U32(ctx, 31, 0x102D84u);
    ctx->pc = 0x102D80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10C6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x10c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102D84u; }
    }
    if (ctx->pc != 0x102D84u) { return; }
    ctx->pc = 0x102D84u;
    // 0x102d84: 0x24170038
    ctx->pc = 0x102d84u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 56));
    // 0x102d88: 0x2771018
    ctx->pc = 0x102d88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x102d8c: 0x24030090
    ctx->pc = 0x102d8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x102d90: 0x2632018
    ctx->pc = 0x102d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x102d94: 0x26560010
    ctx->pc = 0x102d94u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 18), 16));
    // 0x102d98: 0x26430018
    ctx->pc = 0x102d98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 24));
    // 0x102d9c: 0x26450020
    ctx->pc = 0x102d9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 32));
    // 0x102da0: 0x2407bfff
    ctx->pc = 0x102da0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x102da4: 0x73c38
    ctx->pc = 0x102da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x102da8: 0x34e7ffff
    ctx->pc = 0x102da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)65535);
    // 0x102dac: 0x73c38
    ctx->pc = 0x102dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x102db0: 0x34e7ffff
    ctx->pc = 0x102db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)65535);
    // 0x102db4: 0x3c0bf3ff
    ctx->pc = 0x102db4u;
    SET_GPR_S32(ctx, 11, ((uint32_t)62463 << 16));
    // 0x102db8: 0x356bffff
    ctx->pc = 0x102db8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)65535);
    // 0x102dbc: 0xb5c38
    ctx->pc = 0x102dbcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x102dc0: 0x356bffff
    ctx->pc = 0x102dc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)65535);
    // 0x102dc4: 0xb5c38
    ctx->pc = 0x102dc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x102dc8: 0x356bffff
    ctx->pc = 0x102dc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)65535);
    // 0x102dcc: 0x525021
    ctx->pc = 0x102dccu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x102dd0: 0x431821
    ctx->pc = 0x102dd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102dd4: 0x6ba60007
    ctx->pc = 0x102dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102dd8: 0x6fa60000
    ctx->pc = 0x102dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102ddc: 0xb1460007
    ctx->pc = 0x102ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102de0: 0x452821
    ctx->pc = 0x102de0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102de4: 0xb5460000
    ctx->pc = 0x102de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102de8: 0x240f0002
    ctx->pc = 0x102de8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 2));
    // 0x102dec: 0x6bad000f
    ctx->pc = 0x102decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102df0: 0x6fad0008
    ctx->pc = 0x102df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102df4: 0xb14d000f
    ctx->pc = 0x102df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 13) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102df8: 0xb54d0008
    ctx->pc = 0x102df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 13) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102dfc: 0x563021
    ctx->pc = 0x102dfcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x102e00: 0x6bac0017
    ctx->pc = 0x102e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102e04: 0x6fac0010
    ctx->pc = 0x102e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102e08: 0xb14c001f
    ctx->pc = 0x102e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e0c: 0xb54c0018
    ctx->pc = 0x102e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e10: 0x3c090014
    ctx->pc = 0x102e10u;
    SET_GPR_S32(ctx, 9, ((uint32_t)20 << 16));
    // 0x102e14: 0x6bac001f
    ctx->pc = 0x102e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102e18: 0x6fac0018
    ctx->pc = 0x102e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102e1c: 0xb14c002f
    ctx->pc = 0x102e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e20: 0xb54c0028
    ctx->pc = 0x102e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e24: 0x25291628
    ctx->pc = 0x102e24u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5672));
    // 0x102e28: 0x6bac0027
    ctx->pc = 0x102e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102e2c: 0x6fac0020
    ctx->pc = 0x102e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102e30: 0xb14c0037
    ctx->pc = 0x102e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e34: 0xb54c0030
    ctx->pc = 0x102e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e38: 0x491021
    ctx->pc = 0x102e38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x102e3c: 0x686c0007
    ctx->pc = 0x102e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102e40: 0x6c6c0000
    ctx->pc = 0x102e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102e44: 0xb0cc0007
    ctx->pc = 0x102e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e48: 0x3c090014
    ctx->pc = 0x102e48u;
    SET_GPR_S32(ctx, 9, ((uint32_t)20 << 16));
    // 0x102e4c: 0xb4cc0000
    ctx->pc = 0x102e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e50: 0x252914e0
    ctx->pc = 0x102e50u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5344));
    // 0x102e54: 0x684c0007
    ctx->pc = 0x102e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x102e58: 0x6c4c0000
    ctx->pc = 0x102e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x102e5c: 0xb0ac0007
    ctx->pc = 0x102e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e60: 0x898021
    ctx->pc = 0x102e60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x102e64: 0xb4ac0000
    ctx->pc = 0x102e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 12) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x102e68: 0x24088000
    ctx->pc = 0x102e68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x102e6c: 0xde030000
    ctx->pc = 0x102e6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102e70: 0x24090020
    ctx->pc = 0x102e70u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 32));
    // 0x102e74: 0xdd4d0028
    ctx->pc = 0x102e74u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x102e78: 0x34058000
    ctx->pc = 0x102e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x102e7c: 0x671824
    ctx->pc = 0x102e7cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x102e80: 0xdd460000
    ctx->pc = 0x102e80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x102e84: 0x6b1824
    ctx->pc = 0x102e84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x102e88: 0xd133e
    ctx->pc = 0x102e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) >> (32 + 12));
    // 0x102e8c: 0x681824
    ctx->pc = 0x102e8cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x102e90: 0x868e0000
    ctx->pc = 0x102e90u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x102e94: 0xde0c0008
    ctx->pc = 0x102e94u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x102e98: 0xc93025
    ctx->pc = 0x102e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x102e9c: 0xdd470018
    ctx->pc = 0x102e9cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x102ea0: 0x304207ff
    ctx->pc = 0x102ea0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x102ea4: 0x24080001
    ctx->pc = 0x102ea4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ea8: 0x7e1825
    ctx->pc = 0x102ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x102eac: 0xc83025
    ctx->pc = 0x102eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x102eb0: 0x651825
    ctx->pc = 0x102eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x102eb4: 0x2442ffff
    ctx->pc = 0x102eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102eb8: 0x2409fff0
    ctx->pc = 0x102eb8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x102ebc: 0xdd4b0010
    ctx->pc = 0x102ebcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x102ec0: 0x31ce01ff
    ctx->pc = 0x102ec0u;
    SET_GPR_U32(ctx, 14, AND32(GPR_U32(ctx, 14), 511));
    // 0x102ec4: 0x1896024
    ctx->pc = 0x102ec4u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x102ec8: 0xf53824
    ctx->pc = 0x102ec8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x102ecc: 0xcf3025
    ctx->pc = 0x102eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x102ed0: 0x304207ff
    ctx->pc = 0x102ed0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2047));
    // 0x102ed4: 0x2405ff7f
    ctx->pc = 0x102ed4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x102ed8: 0x3c11ff80
    ctx->pc = 0x102ed8u;
    SET_GPR_S32(ctx, 17, ((uint32_t)65408 << 16));
    // 0x102edc: 0x36310fff
    ctx->pc = 0x102edcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)4095);
    // 0x102ee0: 0x118c38
    ctx->pc = 0x102ee0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x102ee4: 0x3631ffff
    ctx->pc = 0x102ee4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)65535);
    // 0x102ee8: 0x118c38
    ctx->pc = 0x102ee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x102eec: 0x3631ffff
    ctx->pc = 0x102eecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)65535);
    // 0x102ef0: 0xc53024
    ctx->pc = 0x102ef0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x102ef4: 0xee3825
    ctx->pc = 0x102ef4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x102ef8: 0x2133c
    ctx->pc = 0x102ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x102efc: 0x2408ffff
    ctx->pc = 0x102efcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x102f00: 0x8413a
    ctx->pc = 0x102f00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 4);
    // 0x102f04: 0x1b16824
    ctx->pc = 0x102f04u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x102f08: 0x3c09ffc0
    ctx->pc = 0x102f08u;
    SET_GPR_S32(ctx, 9, ((uint32_t)65472 << 16));
    // 0x102f0c: 0x352907ff
    ctx->pc = 0x102f0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)2047);
    // 0x102f10: 0x94c38
    ctx->pc = 0x102f10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x102f14: 0x3529ffff
    ctx->pc = 0x102f14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)65535);
    // 0x102f18: 0x94c38
    ctx->pc = 0x102f18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x102f1c: 0x3529ffff
    ctx->pc = 0x102f1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)65535);
    // 0x102f20: 0x681824
    ctx->pc = 0x102f20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x102f24: 0xe93824
    ctx->pc = 0x102f24u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x102f28: 0x1a26825
    ctx->pc = 0x102f28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x102f2c: 0x1755824
    ctx->pc = 0x102f2cu;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 21)));
    // 0x102f30: 0x34058000
    ctx->pc = 0x102f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x102f34: 0x52f38
    ctx->pc = 0x102f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x102f38: 0xfd460000
    ctx->pc = 0x102f38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x102f3c: 0xe53825
    ctx->pc = 0x102f3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x102f40: 0x16e5825
    ctx->pc = 0x102f40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 14));
    // 0x102f44: 0x34088000
    ctx->pc = 0x102f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x102f48: 0x8437c
    ctx->pc = 0x102f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
    // 0x102f4c: 0x24020080
    ctx->pc = 0x102f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x102f50: 0xfd470018
    ctx->pc = 0x102f50u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 7));
    // 0x102f54: 0x681825
    ctx->pc = 0x102f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x102f58: 0xa1420001
    ctx->pc = 0x102f58u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x102f5c: 0x2409000e
    ctx->pc = 0x102f5cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 14));
    // 0x102f60: 0xfd4b0010
    ctx->pc = 0x102f60u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 11));
    // 0x102f64: 0x3c0e0014
    ctx->pc = 0x102f64u;
    SET_GPR_S32(ctx, 14, ((uint32_t)20 << 16));
    // 0x102f68: 0xfd4d0028
    ctx->pc = 0x102f68u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 13));
    // 0x102f6c: 0x1896025
    ctx->pc = 0x102f6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x102f70: 0x25ce14f0
    ctx->pc = 0x102f70u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 5360));
    // 0x102f74: 0xfe030000
    ctx->pc = 0x102f74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x102f78: 0x8e2021
    ctx->pc = 0x102f78u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x102f7c: 0x282d
    ctx->pc = 0x102f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f80: 0x24060280
    ctx->pc = 0x102f80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 640));
    // 0x102f84: 0x24070200
    ctx->pc = 0x102f84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
    // 0x102f88: 0x402d
    ctx->pc = 0x102f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f8c: 0xfe0c0008
    ctx->pc = 0x102f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x102f90: 0x482d
    ctx->pc = 0x102f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102f94: 0xc043248
    ctx->pc = 0x102F94u;
    SET_GPR_U32(ctx, 31, 0x102F9Cu);
    ctx->pc = 0x102F98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x10C920u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDrawEnv_0x10c920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102F9Cu; }
    }
    if (ctx->pc != 0x102F9Cu) { return; }
    ctx->pc = 0x102F9Cu;
    // 0x102f9c: 0xde030080
    ctx->pc = 0x102f9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x102fa0: 0x24040001
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102fa4: 0x2402fff1
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x102fa8: 0x86850000
    ctx->pc = 0x102fa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x102fac: 0x641825
    ctx->pc = 0x102facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x102fb0: 0x2407f00f
    ctx->pc = 0x102fb0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x102fb4: 0x621824
    ctx->pc = 0x102fb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102fb8: 0xde040010
    ctx->pc = 0x102fb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102fbc: 0x7e1825
    ctx->pc = 0x102fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x102fc0: 0x24060800
    ctx->pc = 0x102fc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x102fc4: 0x671824
    ctx->pc = 0x102fc4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x102fc8: 0x2402cfff
    ctx->pc = 0x102fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x102fcc: 0x30a501ff
    ctx->pc = 0x102fccu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 511));
    // 0x102fd0: 0x952024
    ctx->pc = 0x102fd0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x102fd4: 0x661825
    ctx->pc = 0x102fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x102fd8: 0x852025
    ctx->pc = 0x102fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x102fdc: 0x621824
    ctx->pc = 0x102fdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102fe0: 0x26940002
    ctx->pc = 0x102fe0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 2));
    // 0x102fe4: 0xfe030080
    ctx->pc = 0x102fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 3));
    // 0x102fe8: 0x2a620002
    ctx->pc = 0x102fe8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 2));
    // 0x102fec: 0x1440ff5e
    ctx->pc = 0x102FECu;
    {
        const bool branch_taken_0x102fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102FF0u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
        if (branch_taken_0x102fec) {
            ctx->pc = 0x102D68u;
            goto label_102d68;
        }
    }
    ctx->pc = 0x102FF4u;
    // 0x102ff4: 0x24020001
    ctx->pc = 0x102ff4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102ff8: 0xa7808494
    ctx->pc = 0x102ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935700), (uint16_t)GPR_U32(ctx, 0));
    // 0x102ffc: 0xa7828496
    ctx->pc = 0x102ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 2));
    // 0x103000: 0xf
    ctx->pc = 0x103000u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x103004: 0xc043948
    ctx->pc = 0x103004u;
    SET_GPR_U32(ctx, 31, 0x10300Cu);
    ctx->pc = 0x103008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10300Cu; }
    }
    if (ctx->pc != 0x10300Cu) { return; }
    ctx->pc = 0x10300Cu;
    // 0x10300c: 0xc0432fc
    ctx->pc = 0x10300Cu;
    SET_GPR_U32(ctx, 31, 0x103014u);
    ctx->pc = 0x103010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103014u; }
    }
    if (ctx->pc != 0x103014u) { return; }
    ctx->pc = 0x103014u;
    // 0x103014: 0x97848494
    ctx->pc = 0x103014u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x103018: 0x26c2fff0
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x10301c: 0x3c031200
    ctx->pc = 0x10301cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)4608 << 16));
    // 0x103020: 0x3c081200
    ctx->pc = 0x103020u;
    SET_GPR_S32(ctx, 8, ((uint32_t)4608 << 16));
    // 0x103024: 0x972018
    ctx->pc = 0x103024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x103028: 0x35080020
    ctx->pc = 0x103028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)32);
    // 0x10302c: 0x3c061200
    ctx->pc = 0x10302cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)4608 << 16));
    // 0x103030: 0x3c091200
    ctx->pc = 0x103030u;
    SET_GPR_S32(ctx, 9, ((uint32_t)4608 << 16));
    // 0x103034: 0x34c60070
    ctx->pc = 0x103034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)112);
    // 0x103038: 0x35290090
    ctx->pc = 0x103038u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)144);
    // 0x10303c: 0x3c071200
    ctx->pc = 0x10303cu;
    SET_GPR_S32(ctx, 7, ((uint32_t)4608 << 16));
    // 0x103040: 0x3c0a1200
    ctx->pc = 0x103040u;
    SET_GPR_S32(ctx, 10, ((uint32_t)4608 << 16));
    // 0x103044: 0x822021
    ctx->pc = 0x103044u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x103048: 0x34e70080
    ctx->pc = 0x103048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)128);
    // 0x10304c: 0xdc820000
    ctx->pc = 0x10304cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103050: 0x354a00a0
    ctx->pc = 0x103050u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)160);
    // 0x103054: 0x3c051200
    ctx->pc = 0x103054u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4608 << 16));
    // 0x103058: 0x240d0090
    ctx->pc = 0x103058u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 144));
    // 0x10305c: 0xfc620000
    ctx->pc = 0x10305cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x103060: 0x34a500e0
    ctx->pc = 0x103060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)224);
    // 0x103064: 0x3c0c0014
    ctx->pc = 0x103064u;
    SET_GPR_S32(ctx, 12, ((uint32_t)20 << 16));
    // 0x103068: 0xdc820008
    ctx->pc = 0x103068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10306c: 0x258b14e0
    ctx->pc = 0x10306cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 12), 5344));
    // 0x103070: 0xfd020000
    ctx->pc = 0x103070u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x103074: 0xdc830010
    ctx->pc = 0x103074u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x103078: 0xfcc30000
    ctx->pc = 0x103078u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x10307c: 0xdc820018
    ctx->pc = 0x10307cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x103080: 0xfd220000
    ctx->pc = 0x103080u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x103084: 0xdc830020
    ctx->pc = 0x103084u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x103088: 0xfce30000
    ctx->pc = 0x103088u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x10308c: 0xdc820028
    ctx->pc = 0x10308cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x103090: 0xfd420000
    ctx->pc = 0x103090u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x103094: 0xdc830030
    ctx->pc = 0x103094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x103098: 0xfca30000
    ctx->pc = 0x103098u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x10309c: 0x97848496
    ctx->pc = 0x10309cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935702)));
    // 0x1030a0: 0x8d2018
    ctx->pc = 0x1030a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1030a4: 0xc0432c2
    ctx->pc = 0x1030A4u;
    SET_GPR_U32(ctx, 31, 0x1030ACu);
    ctx->pc = 0x1030A8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    ctx->pc = 0x10CB08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1030ACu; }
    }
    if (ctx->pc != 0x1030ACu) { return; }
    ctx->pc = 0x1030ACu;
    // 0x1030ac: 0xdfbf00c0
    ctx->pc = 0x1030acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1030b0: 0xdfbe00b0
    ctx->pc = 0x1030b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1030b4: 0xdfb700a0
    ctx->pc = 0x1030b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1030b8: 0xdfb60090
    ctx->pc = 0x1030b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1030bc: 0xdfb50080
    ctx->pc = 0x1030bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1030c0: 0xdfb40070
    ctx->pc = 0x1030c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1030c4: 0xdfb30060
    ctx->pc = 0x1030c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1030c8: 0xdfb20050
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1030cc: 0xdfb10040
    ctx->pc = 0x1030ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1030d0: 0xdfb00030
    ctx->pc = 0x1030d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1030d4: 0x3e00008
    ctx->pc = 0x1030D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1030D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102D68u: goto label_102d68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1030DCu;
}
