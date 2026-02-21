#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTreeTraverse
// Address: 0x2c11d0 - 0x2c12fc
void pbTreeTraverse_0x2c11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c11d0u;

    // 0x2c11d0: 0x27bdffe0
    ctx->pc = 0x2c11d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c11d4: 0xffbf0010
    ctx->pc = 0x2c11d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c11d8: 0xffb00000
    ctx->pc = 0x2c11d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c11dc: 0x40024800
    ctx->pc = 0x2c11dcu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x2c11e0: 0x3c03003a
    ctx->pc = 0x2c11e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c11e4: 0xc0a9354
    ctx->pc = 0x2C11E4u;
    SET_GPR_U32(ctx, 31, 0x2C11ECu);
    ctx->pc = 0x2C11E8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8376), GPR_U32(ctx, 2));
    ctx->pc = 0x2A4D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDebugTraverse_0x2a4d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C11ECu; }
    }
    if (ctx->pc != 0x2C11ECu) { return; }
    ctx->pc = 0x2C11ECu;
    // 0x2c11ec: 0xc0b1ee6
    ctx->pc = 0x2C11ECu;
    SET_GPR_U32(ctx, 31, 0x2C11F4u);
    ctx->pc = 0x2C7B98u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitSortObjects_0x2c7b98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C11F4u; }
    }
    if (ctx->pc != 0x2C11F4u) { return; }
    ctx->pc = 0x2C11F4u;
    // 0x2c11f4: 0xc0b022c
    ctx->pc = 0x2C11F4u;
    SET_GPR_U32(ctx, 31, 0x2C11FCu);
    ctx->pc = 0x2C08B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_geo_traverse_0x2c08b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C11FCu; }
    }
    if (ctx->pc != 0x2C11FCu) { return; }
    ctx->pc = 0x2C11FCu;
    // 0x2c11fc: 0x202d
    ctx->pc = 0x2c11fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1200: 0x282d
    ctx->pc = 0x2c1200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1204: 0x3c06003b
    ctx->pc = 0x2c1204u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2c1208: 0xc0aa02e
    ctx->pc = 0x2C1208u;
    SET_GPR_U32(ctx, 31, 0x2C1210u);
    ctx->pc = 0x2C120Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 28168));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1210u; }
    }
    if (ctx->pc != 0x2C1210u) { return; }
    ctx->pc = 0x2C1210u;
    // 0x2c1210: 0xc0b00fe
    ctx->pc = 0x2C1210u;
    SET_GPR_U32(ctx, 31, 0x2C1218u);
    ctx->pc = 0x2C03F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaStart_0x2c03f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1218u; }
    }
    if (ctx->pc != 0x2C1218u) { return; }
    ctx->pc = 0x2C1218u;
    // 0x2c1218: 0xc0b0142
    ctx->pc = 0x2C1218u;
    SET_GPR_U32(ctx, 31, 0x2C1220u);
    ctx->pc = 0x2C121Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0508u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexDmaEnd_0x2c0508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1220u; }
    }
    if (ctx->pc != 0x2C1220u) { return; }
    ctx->pc = 0x2C1220u;
    // 0x2c1220: 0xc0b01a6
    ctx->pc = 0x2C1220u;
    SET_GPR_U32(ctx, 31, 0x2C1228u);
    ctx->pc = 0x2C1224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0698u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjDmaEnd_0x2c0698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1228u; }
    }
    if (ctx->pc != 0x2C1228u) { return; }
    ctx->pc = 0x2C1228u;
    // 0x2c1228: 0x3c030001
    ctx->pc = 0x2c1228u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2c122c: 0x0
    ctx->pc = 0x2c122cu;
    // NOP
label_2c1230:
    // 0x2c1230: 0x42000039
    ctx->pc = 0x2c1230u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x2c1234: 0x40f
    ctx->pc = 0x2c1234u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2c1238: 0x40026000
    ctx->pc = 0x2c1238u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2c123c: 0x431024
    ctx->pc = 0x2c123cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1240: 0x0
    ctx->pc = 0x2c1240u;
    // NOP
    // 0x2c1244: 0x1440fffa
    ctx->pc = 0x2C1244u;
    {
        const bool branch_taken_0x2c1244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c1244) {
            ctx->pc = 0x2C1230u;
            goto label_2c1230;
        }
    }
    ctx->pc = 0x2C124Cu;
    // 0x2c124c: 0x3c100037
    ctx->pc = 0x2c124cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2c1250: 0xc0aa064
    ctx->pc = 0x2C1250u;
    SET_GPR_U32(ctx, 31, 0x2C1258u);
    ctx->pc = 0x2C1254u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10560)));
    ctx->pc = 0x2A8190u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbTexDmaSend_0x2a8190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1258u; }
    }
    if (ctx->pc != 0x2C1258u) { return; }
    ctx->pc = 0x2C1258u;
    // 0x2c1258: 0xc0aa0ba
    ctx->pc = 0x2C1258u;
    SET_GPR_U32(ctx, 31, 0x2C1260u);
    ctx->pc = 0x2C125Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10560)));
    ctx->pc = 0x2A82E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbObjDmaSend_0x2a82e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1260u; }
    }
    if (ctx->pc != 0x2C1260u) { return; }
    ctx->pc = 0x2C1260u;
    // 0x2c1260: 0x42000038
    ctx->pc = 0x2c1260u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2c1264: 0x3c030037
    ctx->pc = 0x2c1264u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2c1268:
    // 0x2c1268: 0x8c6283ac
    ctx->pc = 0x2c1268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294935468)));
    // 0x2c126c: 0x0
    ctx->pc = 0x2c126cu;
    // NOP
    // 0x2c1270: 0x0
    ctx->pc = 0x2c1270u;
    // NOP
    // 0x2c1274: 0x0
    ctx->pc = 0x2c1274u;
    // NOP
    // 0x2c1278: 0x0
    ctx->pc = 0x2c1278u;
    // NOP
    // 0x2c127c: 0x1440fffa
    ctx->pc = 0x2C127Cu;
    {
        const bool branch_taken_0x2c127c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c127c) {
            ctx->pc = 0x2C1268u;
            goto label_2c1268;
        }
    }
    ctx->pc = 0x2C1284u;
    // 0x2c1284: 0xc0b00fe
    ctx->pc = 0x2C1284u;
    SET_GPR_U32(ctx, 31, 0x2C128Cu);
    ctx->pc = 0x2C03F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaStart_0x2c03f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C128Cu; }
    }
    if (ctx->pc != 0x2C128Cu) { return; }
    ctx->pc = 0x2C128Cu;
    // 0x2c128c: 0xc0ab86e
    ctx->pc = 0x2C128Cu;
    SET_GPR_U32(ctx, 31, 0x2C1294u);
    ctx->pc = 0x2AE1B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadPalettes_0x2ae1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1294u; }
    }
    if (ctx->pc != 0x2C1294u) { return; }
    ctx->pc = 0x2C1294u;
    // 0x2c1294: 0xc0ab95e
    ctx->pc = 0x2C1294u;
    SET_GPR_U32(ctx, 31, 0x2C129Cu);
    ctx->pc = 0x2AE578u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadLightMaps_0x2ae578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C129Cu; }
    }
    if (ctx->pc != 0x2C129Cu) { return; }
    ctx->pc = 0x2C129Cu;
    // 0x2c129c: 0xc0aa110
    ctx->pc = 0x2C129Cu;
    SET_GPR_U32(ctx, 31, 0x2C12A4u);
    ctx->pc = 0x2C12A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPageEnd_0x2a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12A4u; }
    }
    if (ctx->pc != 0x2C12A4u) { return; }
    ctx->pc = 0x2C12A4u;
    // 0x2c12a4: 0x3c02003a
    ctx->pc = 0x2c12a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c12a8: 0x8c440c94
    ctx->pc = 0x2c12a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 3220)));
    // 0x2c12ac: 0x282d
    ctx->pc = 0x2c12acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c12b0: 0xc0b0412
    ctx->pc = 0x2C12B0u;
    SET_GPR_U32(ctx, 31, 0x2C12B8u);
    ctx->pc = 0x2C12B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C1048u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTraverseDrawObjects_0x2c1048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12B8u; }
    }
    if (ctx->pc != 0x2C12B8u) { return; }
    ctx->pc = 0x2C12B8u;
    // 0x2c12b8: 0xc0aa110
    ctx->pc = 0x2C12B8u;
    SET_GPR_U32(ctx, 31, 0x2C12C0u);
    ctx->pc = 0x2C12BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2A8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPageEnd_0x2a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C12C0u; }
    }
    if (ctx->pc != 0x2C12C0u) { return; }
    ctx->pc = 0x2C12C0u;
    // 0x2c12c0: 0x40044800
    ctx->pc = 0x2c12c0u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x2c12c4: 0x3c03003a
    ctx->pc = 0x2c12c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c12c8: 0x24632050
    ctx->pc = 0x2c12c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8272));
    // 0x2c12cc: 0x8c620068
    ctx->pc = 0x2c12ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2c12d0: 0x822023
    ctx->pc = 0x2c12d0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c12d4: 0x8c620060
    ctx->pc = 0x2c12d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c12d8: 0x822021
    ctx->pc = 0x2c12d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c12dc: 0xac640060
    ctx->pc = 0x2c12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x2c12e0: 0x8c620064
    ctx->pc = 0x2c12e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2c12e4: 0x24420001
    ctx->pc = 0x2c12e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c12e8: 0xac620064
    ctx->pc = 0x2c12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x2c12ec: 0xdfbf0010
    ctx->pc = 0x2c12ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c12f0: 0xdfb00000
    ctx->pc = 0x2c12f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c12f4: 0x3e00008
    ctx->pc = 0x2C12F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C12F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C1230u: goto label_2c1230;
            case 0x2C1268u: goto label_2c1268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C12FCu;
}
