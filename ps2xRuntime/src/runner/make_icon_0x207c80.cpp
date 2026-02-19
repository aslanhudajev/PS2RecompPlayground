#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: make_icon
// Address: 0x207c80 - 0x208124
void make_icon_0x207c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207c80u;

    // 0x207c80: 0x27bdfe60
    ctx->pc = 0x207c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x207c84: 0xffbf0190
    ctx->pc = 0x207c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x207c88: 0xffbe0180
    ctx->pc = 0x207c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x207c8c: 0x3a0f02d
    ctx->pc = 0x207c8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c90: 0xafc40000
    ctx->pc = 0x207c90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x207c94: 0xafc50004
    ctx->pc = 0x207c94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x207c98: 0x27c20010
    ctx->pc = 0x207c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
    // 0x207c9c: 0x3c03003a
    ctx->pc = 0x207c9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x207ca0: 0x24634c98
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19608));
    // 0x207ca4: 0x68640007
    ctx->pc = 0x207ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x207ca8: 0x6c640000
    ctx->pc = 0x207ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x207cac: 0x8c650008
    ctx->pc = 0x207cacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x207cb0: 0xb0440007
    ctx->pc = 0x207cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207cb4: 0xb4440000
    ctx->pc = 0x207cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x207cb8: 0xac450008
    ctx->pc = 0x207cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x207cbc: 0x27c20030
    ctx->pc = 0x207cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x207cc0: 0x40202d
    ctx->pc = 0x207cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cc4: 0x3c05003a
    ctx->pc = 0x207cc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207cc8: 0x24a54ca8
    ctx->pc = 0x207cc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19624));
    // 0x207ccc: 0x3c06003a
    ctx->pc = 0x207cccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x207cd0: 0x24c64cb0
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19632));
    // 0x207cd4: 0x3c07003a
    ctx->pc = 0x207cd4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x207cd8: 0x24e74cc8
    ctx->pc = 0x207cd8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19656));
    // 0x207cdc: 0xc0b6252
    ctx->pc = 0x207CDCu;
    SET_GPR_U32(ctx, 31, 0x207CE4u);
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207CE4u; }
    }
    if (ctx->pc != 0x207CE4u) { return; }
    ctx->pc = 0x207CE4u;
    // 0x207ce4: 0x27c20030
    ctx->pc = 0x207ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x207ce8: 0x8fc40000
    ctx->pc = 0x207ce8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207cec: 0x8fc50004
    ctx->pc = 0x207cecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207cf0: 0x40302d
    ctx->pc = 0x207cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cf4: 0x24070203
    ctx->pc = 0x207cf4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 515));
    // 0x207cf8: 0xc0b98da
    ctx->pc = 0x207CF8u;
    SET_GPR_U32(ctx, 31, 0x207D00u);
    ctx->pc = 0x2E6368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x2e6368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D00u; }
    }
    if (ctx->pc != 0x207D00u) { return; }
    ctx->pc = 0x207D00u;
    // 0x207d00: 0xafc20070
    ctx->pc = 0x207d00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
    // 0x207d04: 0x27c20070
    ctx->pc = 0x207d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
    // 0x207d08: 0x202d
    ctx->pc = 0x207d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d0c: 0x282d
    ctx->pc = 0x207d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d10: 0x40302d
    ctx->pc = 0x207d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d14: 0xc0b9a14
    ctx->pc = 0x207D14u;
    SET_GPR_U32(ctx, 31, 0x207D1Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D1Cu; }
    }
    if (ctx->pc != 0x207D1Cu) { return; }
    ctx->pc = 0x207D1Cu;
    // 0x207d1c: 0x8fc20070
    ctx->pc = 0x207d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x207d20: 0x4410009
    ctx->pc = 0x207D20u;
    {
        const bool branch_taken_0x207d20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x207d20) {
            ctx->pc = 0x207D48u;
            goto label_207d48;
        }
    }
    ctx->pc = 0x207D28u;
    // 0x207d28: 0x3c04003a
    ctx->pc = 0x207d28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x207d2c: 0x24844cd8
    ctx->pc = 0x207d2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19672));
    // 0x207d30: 0xc0b492e
    ctx->pc = 0x207D30u;
    SET_GPR_U32(ctx, 31, 0x207D38u);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D38u; }
    }
    if (ctx->pc != 0x207D38u) { return; }
    ctx->pc = 0x207D38u;
    // 0x207d38: 0x8fc30070
    ctx->pc = 0x207d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x207d3c: 0x60102d
    ctx->pc = 0x207d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d40: 0x100000f2
    ctx->pc = 0x207D40u;
    {
        const bool branch_taken_0x207d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207d40) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x207D48u;
label_207d48:
    // 0x207d48: 0x8fc20070
    ctx->pc = 0x207d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x207d4c: 0xafc20020
    ctx->pc = 0x207d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x207d50: 0x3c04003c
    ctx->pc = 0x207d50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207d54: 0x2484c120
    ctx->pc = 0x207d54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951200));
    // 0x207d58: 0x282d
    ctx->pc = 0x207d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207d5c: 0x240603c4
    ctx->pc = 0x207d5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 964));
    // 0x207d60: 0xc0becc6
    ctx->pc = 0x207D60u;
    SET_GPR_U32(ctx, 31, 0x207D68u);
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D68u; }
    }
    if (ctx->pc != 0x207D68u) { return; }
    ctx->pc = 0x207D68u;
    // 0x207d68: 0x3c04003c
    ctx->pc = 0x207d68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207d6c: 0x2484c120
    ctx->pc = 0x207d6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951200));
    // 0x207d70: 0x3c05003a
    ctx->pc = 0x207d70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207d74: 0x24a54d18
    ctx->pc = 0x207d74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19736));
    // 0x207d78: 0xc0bf2c1
    ctx->pc = 0x207D78u;
    SET_GPR_U32(ctx, 31, 0x207D80u);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D80u; }
    }
    if (ctx->pc != 0x207D80u) { return; }
    ctx->pc = 0x207D80u;
    // 0x207d80: 0x3c04003a
    ctx->pc = 0x207d80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x207d84: 0x24844d20
    ctx->pc = 0x207d84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19744));
    // 0x207d88: 0x3c05003c
    ctx->pc = 0x207d88u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x207d8c: 0x24a5c1e0
    ctx->pc = 0x207d8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294951392));
    // 0x207d90: 0xc081ee4
    ctx->pc = 0x207D90u;
    SET_GPR_U32(ctx, 31, 0x207D98u);
    ctx->pc = 0x207B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        AsciiString2Sjis_0x207b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207D98u; }
    }
    if (ctx->pc != 0x207D98u) { return; }
    ctx->pc = 0x207D98u;
    // 0x207d98: 0x24020018
    ctx->pc = 0x207d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x207d9c: 0x3c01003c
    ctx->pc = 0x207d9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207da0: 0xa422c126
    ctx->pc = 0x207da0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294951206), (uint16_t)GPR_U32(ctx, 2));
    // 0x207da4: 0x24020060
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x207da8: 0x3c01003c
    ctx->pc = 0x207da8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
    // 0x207dac: 0xac22c12c
    ctx->pc = 0x207dacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294951212), GPR_U32(ctx, 2));
    // 0x207db0: 0x3c04003c
    ctx->pc = 0x207db0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207db4: 0x2484c130
    ctx->pc = 0x207db4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951216));
    // 0x207db8: 0x3c050031
    ctx->pc = 0x207db8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x207dbc: 0x24a51da0
    ctx->pc = 0x207dbcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7584));
    // 0x207dc0: 0x24060040
    ctx->pc = 0x207dc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x207dc4: 0xc0bec59
    ctx->pc = 0x207DC4u;
    SET_GPR_U32(ctx, 31, 0x207DCCu);
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DCCu; }
    }
    if (ctx->pc != 0x207DCCu) { return; }
    ctx->pc = 0x207DCCu;
    // 0x207dcc: 0x3c04003c
    ctx->pc = 0x207dccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207dd0: 0x2484c170
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951280));
    // 0x207dd4: 0x3c050031
    ctx->pc = 0x207dd4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x207dd8: 0x24a51de0
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7648));
    // 0x207ddc: 0x24060030
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x207de0: 0xc0bec59
    ctx->pc = 0x207DE0u;
    SET_GPR_U32(ctx, 31, 0x207DE8u);
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207DE8u; }
    }
    if (ctx->pc != 0x207DE8u) { return; }
    ctx->pc = 0x207DE8u;
    // 0x207de8: 0x3c04003c
    ctx->pc = 0x207de8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207dec: 0x2484c1a0
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951328));
    // 0x207df0: 0x3c050031
    ctx->pc = 0x207df0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x207df4: 0x24a51e10
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7696));
    // 0x207df8: 0x24060030
    ctx->pc = 0x207df8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x207dfc: 0xc0bec59
    ctx->pc = 0x207DFCu;
    SET_GPR_U32(ctx, 31, 0x207E04u);
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E04u; }
    }
    if (ctx->pc != 0x207E04u) { return; }
    ctx->pc = 0x207E04u;
    // 0x207e04: 0x3c04003c
    ctx->pc = 0x207e04u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207e08: 0x2484c1d0
    ctx->pc = 0x207e08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951376));
    // 0x207e0c: 0x3c050031
    ctx->pc = 0x207e0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x207e10: 0x24a51e40
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7744));
    // 0x207e14: 0x24060010
    ctx->pc = 0x207e14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x207e18: 0xc0bec59
    ctx->pc = 0x207E18u;
    SET_GPR_U32(ctx, 31, 0x207E20u);
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E20u; }
    }
    if (ctx->pc != 0x207E20u) { return; }
    ctx->pc = 0x207E20u;
    // 0x207e20: 0x3c04003c
    ctx->pc = 0x207e20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207e24: 0x2484c224
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951460));
    // 0x207e28: 0x8fc50010
    ctx->pc = 0x207e28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x207e2c: 0xc0bf2c1
    ctx->pc = 0x207E2Cu;
    SET_GPR_U32(ctx, 31, 0x207E34u);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E34u; }
    }
    if (ctx->pc != 0x207E34u) { return; }
    ctx->pc = 0x207E34u;
    // 0x207e34: 0x3c04003c
    ctx->pc = 0x207e34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207e38: 0x2484c264
    ctx->pc = 0x207e38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951524));
    // 0x207e3c: 0x8fc50014
    ctx->pc = 0x207e3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x207e40: 0xc0bf2c1
    ctx->pc = 0x207E40u;
    SET_GPR_U32(ctx, 31, 0x207E48u);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E48u; }
    }
    if (ctx->pc != 0x207E48u) { return; }
    ctx->pc = 0x207E48u;
    // 0x207e48: 0x3c04003c
    ctx->pc = 0x207e48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x207e4c: 0x2484c2a4
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951588));
    // 0x207e50: 0x8fc50018
    ctx->pc = 0x207e50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x207e54: 0xc0bf2c1
    ctx->pc = 0x207E54u;
    SET_GPR_U32(ctx, 31, 0x207E5Cu);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E5Cu; }
    }
    if (ctx->pc != 0x207E5Cu) { return; }
    ctx->pc = 0x207E5Cu;
    // 0x207e5c: 0x8fc40020
    ctx->pc = 0x207e5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x207e60: 0x3c05003c
    ctx->pc = 0x207e60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x207e64: 0x24a5c120
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294951200));
    // 0x207e68: 0x240603c4
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 964));
    // 0x207e6c: 0xc0b99c4
    ctx->pc = 0x207E6Cu;
    SET_GPR_U32(ctx, 31, 0x207E74u);
    ctx->pc = 0x2E6710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x2e6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E74u; }
    }
    if (ctx->pc != 0x207E74u) { return; }
    ctx->pc = 0x207E74u;
    // 0x207e74: 0xafc20070
    ctx->pc = 0x207e74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
    // 0x207e78: 0x27c20070
    ctx->pc = 0x207e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
    // 0x207e7c: 0x202d
    ctx->pc = 0x207e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e80: 0x282d
    ctx->pc = 0x207e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e84: 0x40302d
    ctx->pc = 0x207e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207e88: 0xc0b9a14
    ctx->pc = 0x207E88u;
    SET_GPR_U32(ctx, 31, 0x207E90u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E90u; }
    }
    if (ctx->pc != 0x207E90u) { return; }
    ctx->pc = 0x207E90u;
    // 0x207e90: 0x8fc40020
    ctx->pc = 0x207e90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x207e94: 0xc0b9922
    ctx->pc = 0x207E94u;
    SET_GPR_U32(ctx, 31, 0x207E9Cu);
    ctx->pc = 0x2E6488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x2e6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207E9Cu; }
    }
    if (ctx->pc != 0x207E9Cu) { return; }
    ctx->pc = 0x207E9Cu;
    // 0x207e9c: 0x27c20070
    ctx->pc = 0x207e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
    // 0x207ea0: 0x202d
    ctx->pc = 0x207ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ea4: 0x282d
    ctx->pc = 0x207ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ea8: 0x40302d
    ctx->pc = 0x207ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207eac: 0xc0b9a14
    ctx->pc = 0x207EACu;
    SET_GPR_U32(ctx, 31, 0x207EB4u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207EB4u; }
    }
    if (ctx->pc != 0x207EB4u) { return; }
    ctx->pc = 0x207EB4u;
    // 0x207eb4: 0xafc00028
    ctx->pc = 0x207eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 0));
label_207eb8:
    // 0x207eb8: 0x8fc20028
    ctx->pc = 0x207eb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x207ebc: 0x28430003
    ctx->pc = 0x207ebcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 3));
    // 0x207ec0: 0x14600003
    ctx->pc = 0x207EC0u;
    {
        const bool branch_taken_0x207ec0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x207ec0) {
            ctx->pc = 0x207ED0u;
            goto label_207ed0;
        }
    }
    ctx->pc = 0x207EC8u;
    // 0x207ec8: 0x1000008d
    ctx->pc = 0x207EC8u;
    {
        const bool branch_taken_0x207ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207ec8) {
            ctx->pc = 0x208100u;
            goto label_208100;
        }
    }
    ctx->pc = 0x207ED0u;
label_207ed0:
    // 0x207ed0: 0x27c20080
    ctx->pc = 0x207ed0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 128));
    // 0x207ed4: 0x8fc30028
    ctx->pc = 0x207ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x207ed8: 0x60202d
    ctx->pc = 0x207ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207edc: 0x41880
    ctx->pc = 0x207edcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x207ee0: 0x27c50010
    ctx->pc = 0x207ee0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 16));
    // 0x207ee4: 0xa0202d
    ctx->pc = 0x207ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ee8: 0x831821
    ctx->pc = 0x207ee8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x207eec: 0x40202d
    ctx->pc = 0x207eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207ef0: 0x3c05003a
    ctx->pc = 0x207ef0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207ef4: 0x24a54d40
    ctx->pc = 0x207ef4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19776));
    // 0x207ef8: 0x8c660000
    ctx->pc = 0x207ef8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207efc: 0xc0b4dce
    ctx->pc = 0x207EFCu;
    SET_GPR_U32(ctx, 31, 0x207F04u);
    ctx->pc = 0x2D3738u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_path_0x2d3738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F04u; }
    }
    if (ctx->pc != 0x207F04u) { return; }
    ctx->pc = 0x207F04u;
    // 0x207f04: 0x27c20080
    ctx->pc = 0x207f04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 128));
    // 0x207f08: 0x40202d
    ctx->pc = 0x207f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f0c: 0x24050001
    ctx->pc = 0x207f0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x207f10: 0xc0c1b06
    ctx->pc = 0x207F10u;
    SET_GPR_U32(ctx, 31, 0x207F18u);
    ctx->pc = 0x306C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x306c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F18u; }
    }
    if (ctx->pc != 0x207F18u) { return; }
    ctx->pc = 0x207F18u;
    // 0x207f18: 0xafc20024
    ctx->pc = 0x207f18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x207f1c: 0x8fc20024
    ctx->pc = 0x207f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x207f20: 0x4410009
    ctx->pc = 0x207F20u;
    {
        const bool branch_taken_0x207f20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x207f20) {
            ctx->pc = 0x207F48u;
            goto label_207f48;
        }
    }
    ctx->pc = 0x207F28u;
    // 0x207f28: 0x3c04003a
    ctx->pc = 0x207f28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x207f2c: 0x24844d48
    ctx->pc = 0x207f2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19784));
    // 0x207f30: 0xc0b492e
    ctx->pc = 0x207F30u;
    SET_GPR_U32(ctx, 31, 0x207F38u);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F38u; }
    }
    if (ctx->pc != 0x207F38u) { return; }
    ctx->pc = 0x207F38u;
    // 0x207f38: 0x8fc30024
    ctx->pc = 0x207f38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x207f3c: 0x60102d
    ctx->pc = 0x207f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f40: 0x10000072
    ctx->pc = 0x207F40u;
    {
        const bool branch_taken_0x207f40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207f40) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x207F48u;
label_207f48:
    // 0x207f48: 0x27c20030
    ctx->pc = 0x207f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x207f4c: 0x8fc30028
    ctx->pc = 0x207f4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x207f50: 0x60202d
    ctx->pc = 0x207f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f54: 0x41880
    ctx->pc = 0x207f54u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x207f58: 0x27c50010
    ctx->pc = 0x207f58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 30), 16));
    // 0x207f5c: 0xa0202d
    ctx->pc = 0x207f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f60: 0x831821
    ctx->pc = 0x207f60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x207f64: 0x40202d
    ctx->pc = 0x207f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f68: 0x3c05003a
    ctx->pc = 0x207f68u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x207f6c: 0x24a54ca8
    ctx->pc = 0x207f6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19624));
    // 0x207f70: 0x3c06003a
    ctx->pc = 0x207f70u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x207f74: 0x24c64cb0
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 19632));
    // 0x207f78: 0x8c670000
    ctx->pc = 0x207f78u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207f7c: 0xc0b6252
    ctx->pc = 0x207F7Cu;
    SET_GPR_U32(ctx, 31, 0x207F84u);
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207F84u; }
    }
    if (ctx->pc != 0x207F84u) { return; }
    ctx->pc = 0x207F84u;
    // 0x207f84: 0x27c20030
    ctx->pc = 0x207f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x207f88: 0x8fc40000
    ctx->pc = 0x207f88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207f8c: 0x8fc50004
    ctx->pc = 0x207f8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x207f90: 0x40302d
    ctx->pc = 0x207f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f94: 0x24070203
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 515));
    // 0x207f98: 0xc0b98da
    ctx->pc = 0x207F98u;
    SET_GPR_U32(ctx, 31, 0x207FA0u);
    ctx->pc = 0x2E6368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x2e6368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FA0u; }
    }
    if (ctx->pc != 0x207FA0u) { return; }
    ctx->pc = 0x207FA0u;
    // 0x207fa0: 0x27c20070
    ctx->pc = 0x207fa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
    // 0x207fa4: 0x202d
    ctx->pc = 0x207fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fa8: 0x282d
    ctx->pc = 0x207fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fac: 0x40302d
    ctx->pc = 0x207facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fb0: 0xc0b9a14
    ctx->pc = 0x207FB0u;
    SET_GPR_U32(ctx, 31, 0x207FB8u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FB8u; }
    }
    if (ctx->pc != 0x207FB8u) { return; }
    ctx->pc = 0x207FB8u;
    // 0x207fb8: 0x8fc20070
    ctx->pc = 0x207fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x207fbc: 0x441000b
    ctx->pc = 0x207FBCu;
    {
        const bool branch_taken_0x207fbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x207fbc) {
            ctx->pc = 0x207FECu;
            goto label_207fec;
        }
    }
    ctx->pc = 0x207FC4u;
    // 0x207fc4: 0x27c20030
    ctx->pc = 0x207fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x207fc8: 0x3c04003a
    ctx->pc = 0x207fc8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x207fcc: 0x24844d68
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19816));
    // 0x207fd0: 0x40282d
    ctx->pc = 0x207fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fd4: 0xc0b492e
    ctx->pc = 0x207FD4u;
    SET_GPR_U32(ctx, 31, 0x207FDCu);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207FDCu; }
    }
    if (ctx->pc != 0x207FDCu) { return; }
    ctx->pc = 0x207FDCu;
    // 0x207fdc: 0x8fc30070
    ctx->pc = 0x207fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x207fe0: 0x60102d
    ctx->pc = 0x207fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207fe4: 0x10000049
    ctx->pc = 0x207FE4u;
    {
        const bool branch_taken_0x207fe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207fe4) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x207FECu;
label_207fec:
    // 0x207fec: 0x8fc20070
    ctx->pc = 0x207fecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x207ff0: 0xafc20020
    ctx->pc = 0x207ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x207ff4: 0x3402a000
    ctx->pc = 0x207ff4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 40960));
    // 0x207ff8: 0xafc20074
    ctx->pc = 0x207ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 2));
    // 0x207ffc: 0x0
    ctx->pc = 0x207ffcu;
    // NOP
label_208000:
    // 0x208000: 0x8fc20074
    ctx->pc = 0x208000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x208004: 0x3403a000
    ctx->pc = 0x208004u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 40960));
    // 0x208008: 0x10430003
    ctx->pc = 0x208008u;
    {
        const bool branch_taken_0x208008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x208008) {
            ctx->pc = 0x208018u;
            goto label_208018;
        }
    }
    ctx->pc = 0x208010u;
    // 0x208010: 0x10000023
    ctx->pc = 0x208010u;
    {
        const bool branch_taken_0x208010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208010) {
            ctx->pc = 0x2080A0u;
            goto label_2080a0;
        }
    }
    ctx->pc = 0x208018u;
label_208018:
    // 0x208018: 0x8fc40024
    ctx->pc = 0x208018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x20801c: 0x3c050031
    ctx->pc = 0x20801cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x208020: 0x24a522e0
    ctx->pc = 0x208020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8928));
    // 0x208024: 0x3406a000
    ctx->pc = 0x208024u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 40960));
    // 0x208028: 0xc0c1c2e
    ctx->pc = 0x208028u;
    SET_GPR_U32(ctx, 31, 0x208030u);
    ctx->pc = 0x3070B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x3070b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208030u; }
    }
    if (ctx->pc != 0x208030u) { return; }
    ctx->pc = 0x208030u;
    // 0x208030: 0xafc20074
    ctx->pc = 0x208030u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 2));
    // 0x208034: 0x8fc40020
    ctx->pc = 0x208034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x208038: 0x3c050031
    ctx->pc = 0x208038u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x20803c: 0x24a522e0
    ctx->pc = 0x20803cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8928));
    // 0x208040: 0x8fc60074
    ctx->pc = 0x208040u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x208044: 0xc0b99c4
    ctx->pc = 0x208044u;
    SET_GPR_U32(ctx, 31, 0x20804Cu);
    ctx->pc = 0x2E6710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x2e6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20804Cu; }
    }
    if (ctx->pc != 0x20804Cu) { return; }
    ctx->pc = 0x20804Cu;
    // 0x20804c: 0x27c20070
    ctx->pc = 0x20804cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
    // 0x208050: 0x202d
    ctx->pc = 0x208050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208054: 0x282d
    ctx->pc = 0x208054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208058: 0x40302d
    ctx->pc = 0x208058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20805c: 0xc0b9a14
    ctx->pc = 0x20805Cu;
    SET_GPR_U32(ctx, 31, 0x208064u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208064u; }
    }
    if (ctx->pc != 0x208064u) { return; }
    ctx->pc = 0x208064u;
    // 0x208064: 0x8fc20070
    ctx->pc = 0x208064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x208068: 0x441000b
    ctx->pc = 0x208068u;
    {
        const bool branch_taken_0x208068 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x208068) {
            ctx->pc = 0x208098u;
            goto label_208098;
        }
    }
    ctx->pc = 0x208070u;
    // 0x208070: 0x27c20030
    ctx->pc = 0x208070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 48));
    // 0x208074: 0x3c04003a
    ctx->pc = 0x208074u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x208078: 0x24844da0
    ctx->pc = 0x208078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19872));
    // 0x20807c: 0x40282d
    ctx->pc = 0x20807cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208080: 0xc0b492e
    ctx->pc = 0x208080u;
    SET_GPR_U32(ctx, 31, 0x208088u);
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208088u; }
    }
    if (ctx->pc != 0x208088u) { return; }
    ctx->pc = 0x208088u;
    // 0x208088: 0x8fc30070
    ctx->pc = 0x208088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x20808c: 0x60102d
    ctx->pc = 0x20808cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208090: 0x1000001e
    ctx->pc = 0x208090u;
    {
        const bool branch_taken_0x208090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208090) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x208098u;
label_208098:
    // 0x208098: 0x1000ffd9
    ctx->pc = 0x208098u;
    {
        const bool branch_taken_0x208098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208098) {
            ctx->pc = 0x208000u;
            goto label_208000;
        }
    }
    ctx->pc = 0x2080A0u;
label_2080a0:
    // 0x2080a0: 0x8fc40024
    ctx->pc = 0x2080a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x2080a4: 0xc0c1b76
    ctx->pc = 0x2080A4u;
    SET_GPR_U32(ctx, 31, 0x2080ACu);
    ctx->pc = 0x306DD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x306dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080ACu; }
    }
    if (ctx->pc != 0x2080ACu) { return; }
    ctx->pc = 0x2080ACu;
    // 0x2080ac: 0x8fc40020
    ctx->pc = 0x2080acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x2080b0: 0xc0b9922
    ctx->pc = 0x2080B0u;
    SET_GPR_U32(ctx, 31, 0x2080B8u);
    ctx->pc = 0x2E6488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x2e6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080B8u; }
    }
    if (ctx->pc != 0x2080B8u) { return; }
    ctx->pc = 0x2080B8u;
    // 0x2080b8: 0x27c20070
    ctx->pc = 0x2080b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 112));
    // 0x2080bc: 0x202d
    ctx->pc = 0x2080bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080c0: 0x282d
    ctx->pc = 0x2080c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080c4: 0x40302d
    ctx->pc = 0x2080c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080c8: 0xc0b9a14
    ctx->pc = 0x2080C8u;
    SET_GPR_U32(ctx, 31, 0x2080D0u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2080D0u; }
    }
    if (ctx->pc != 0x2080D0u) { return; }
    ctx->pc = 0x2080D0u;
    // 0x2080d0: 0x8fc20070
    ctx->pc = 0x2080d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x2080d4: 0x4410005
    ctx->pc = 0x2080D4u;
    {
        const bool branch_taken_0x2080d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2080d4) {
            ctx->pc = 0x2080ECu;
            goto label_2080ec;
        }
    }
    ctx->pc = 0x2080DCu;
    // 0x2080dc: 0x8fc30070
    ctx->pc = 0x2080dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x2080e0: 0x60102d
    ctx->pc = 0x2080e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080e4: 0x10000009
    ctx->pc = 0x2080E4u;
    {
        const bool branch_taken_0x2080e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2080e4) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x2080ECu;
label_2080ec:
    // 0x2080ec: 0x8fc20028
    ctx->pc = 0x2080ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x2080f0: 0x24430001
    ctx->pc = 0x2080f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2080f4: 0xafc30028
    ctx->pc = 0x2080f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 40), GPR_U32(ctx, 3));
    // 0x2080f8: 0x1000ff6f
    ctx->pc = 0x2080F8u;
    {
        const bool branch_taken_0x2080f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2080f8) {
            ctx->pc = 0x207EB8u;
            goto label_207eb8;
        }
    }
    ctx->pc = 0x208100u;
label_208100:
    // 0x208100: 0x24020001
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x208104: 0x10000001
    ctx->pc = 0x208104u;
    {
        const bool branch_taken_0x208104 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208104) {
            ctx->pc = 0x20810Cu;
            goto label_20810c;
        }
    }
    ctx->pc = 0x20810Cu;
label_20810c:
    // 0x20810c: 0x3c0e82d
    ctx->pc = 0x20810cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208110: 0xdfbf0190
    ctx->pc = 0x208110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x208114: 0xdfbe0180
    ctx->pc = 0x208114u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x208118: 0x27bd01a0
    ctx->pc = 0x208118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
    // 0x20811c: 0x3e00008
    ctx->pc = 0x20811Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207D48u: goto label_207d48;
            case 0x207EB8u: goto label_207eb8;
            case 0x207ED0u: goto label_207ed0;
            case 0x207F48u: goto label_207f48;
            case 0x207FECu: goto label_207fec;
            case 0x208000u: goto label_208000;
            case 0x208018u: goto label_208018;
            case 0x208098u: goto label_208098;
            case 0x2080A0u: goto label_2080a0;
            case 0x2080ECu: goto label_2080ec;
            case 0x208100u: goto label_208100;
            case 0x20810Cu: goto label_20810c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208124u;
}
