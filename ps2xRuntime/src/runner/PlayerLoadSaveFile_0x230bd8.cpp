#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerLoadSaveFile
// Address: 0x230bd8 - 0x230d78
void PlayerLoadSaveFile_0x230bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230bd8u;

    // 0x230bd8: 0x27bdffc0
    ctx->pc = 0x230bd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x230bdc: 0xffbf0030
    ctx->pc = 0x230bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x230be0: 0xffb10020
    ctx->pc = 0x230be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x230be4: 0xffb00010
    ctx->pc = 0x230be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x230be8: 0xa0302d
    ctx->pc = 0x230be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230bec: 0x24022b00
    ctx->pc = 0x230becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x230bf0: 0x822018
    ctx->pc = 0x230bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230bf4: 0x3c020032
    ctx->pc = 0x230bf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230bf8: 0x24421bc0
    ctx->pc = 0x230bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x230bfc: 0x828021
    ctx->pc = 0x230bfcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x230c00: 0x24021074
    ctx->pc = 0x230c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4212));
    // 0x230c04: 0xafa20000
    ctx->pc = 0x230c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x230c08: 0xae062af4
    ctx->pc = 0x230c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 6));
    // 0x230c0c: 0x8e042ae8
    ctx->pc = 0x230c0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10984)));
    // 0x230c10: 0x8e052aec
    ctx->pc = 0x230c10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 10988)));
    // 0x230c14: 0x2607099c
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x230c18: 0xc08258e
    ctx->pc = 0x230C18u;
    SET_GPR_U32(ctx, 31, 0x230C20u);
    ctx->pc = 0x230C1Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x209638u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveLoad_0x209638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230C20u; }
    }
    if (ctx->pc != 0x230C20u) { return; }
    ctx->pc = 0x230C20u;
    // 0x230c20: 0x40882d
    ctx->pc = 0x230c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230c24: 0x12200009
    ctx->pc = 0x230C24u;
    {
        const bool branch_taken_0x230c24 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x230C28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x230c24) {
            ctx->pc = 0x230C4Cu;
            goto label_230c4c;
        }
    }
    ctx->pc = 0x230C2Cu;
    // 0x230c2c: 0x8e042ae8
    ctx->pc = 0x230c2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10984)));
    // 0x230c30: 0xc08204a
    ctx->pc = 0x230C30u;
    SET_GPR_U32(ctx, 31, 0x230C38u);
    ctx->pc = 0x230C34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 10988)));
    ctx->pc = 0x208128u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_prefs_loaded_0x208128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230C38u; }
    }
    if (ctx->pc != 0x230C38u) { return; }
    ctx->pc = 0x230C38u;
    // 0x230c38: 0x10400004
    ctx->pc = 0x230C38u;
    {
        const bool branch_taken_0x230c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x230C3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x230c38) {
            ctx->pc = 0x230C4Cu;
            goto label_230c4c;
        }
    }
    ctx->pc = 0x230C40u;
    // 0x230c40: 0xc082978
    ctx->pc = 0x230C40u;
    SET_GPR_U32(ctx, 31, 0x230C48u);
    ctx->pc = 0x20A5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OptionsSetup_0x20a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230C48u; }
    }
    if (ctx->pc != 0x230C48u) { return; }
    ctx->pc = 0x230C48u;
    // 0x230c48: 0x200202d
    ctx->pc = 0x230c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230c4c:
    // 0x230c4c: 0xc08c144
    ctx->pc = 0x230C4Cu;
    SET_GPR_U32(ctx, 31, 0x230C54u);
    ctx->pc = 0x230C50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x230510u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_get_from_save_0x230510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230C54u; }
    }
    if (ctx->pc != 0x230C54u) { return; }
    ctx->pc = 0x230C54u;
    // 0x230c54: 0x24020001
    ctx->pc = 0x230c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x230c58: 0xa20209a7
    ctx->pc = 0x230c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2471), (uint8_t)GPR_U32(ctx, 2));
    // 0x230c5c: 0x26041a28
    ctx->pc = 0x230c5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6696));
    // 0x230c60: 0x2603099c
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x230c64: 0x641025
    ctx->pc = 0x230c64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230c68: 0x30420007
    ctx->pc = 0x230c68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x230c6c: 0x10400019
    ctx->pc = 0x230C6Cu;
    {
        const bool branch_taken_0x230c6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x230C70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 6652));
        if (branch_taken_0x230c6c) {
            ctx->pc = 0x230CD4u;
            goto label_230cd4;
        }
    }
    ctx->pc = 0x230C74u;
label_230c74:
    // 0x230c74: 0x68650007
    ctx->pc = 0x230c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230c78: 0x6c650000
    ctx->pc = 0x230c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230c7c: 0x6866000f
    ctx->pc = 0x230c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230c80: 0x6c660008
    ctx->pc = 0x230c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230c84: 0x68670017
    ctx->pc = 0x230c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230c88: 0x6c670010
    ctx->pc = 0x230c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230c8c: 0x6868001f
    ctx->pc = 0x230c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230c90: 0x6c680018
    ctx->pc = 0x230c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230c94: 0xb0850007
    ctx->pc = 0x230c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230c98: 0xb4850000
    ctx->pc = 0x230c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230c9c: 0xb086000f
    ctx->pc = 0x230c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230ca0: 0xb4860008
    ctx->pc = 0x230ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230ca4: 0xb0870017
    ctx->pc = 0x230ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230ca8: 0xb4870010
    ctx->pc = 0x230ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230cac: 0xb088001f
    ctx->pc = 0x230cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230cb0: 0xb4880018
    ctx->pc = 0x230cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230cb4: 0x24630020
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230cb8: 0x24840020
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230cbc: 0x0
    ctx->pc = 0x230cbcu;
    // NOP
    // 0x230cc0: 0x0
    ctx->pc = 0x230cc0u;
    // NOP
    // 0x230cc4: 0x1462ffeb
    ctx->pc = 0x230CC4u;
    {
        const bool branch_taken_0x230cc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230cc4) {
            ctx->pc = 0x230C74u;
            goto label_230c74;
        }
    }
    ctx->pc = 0x230CCCu;
    // 0x230ccc: 0x10000010
    ctx->pc = 0x230CCCu;
    {
        const bool branch_taken_0x230ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x230ccc) {
            ctx->pc = 0x230D10u;
            goto label_230d10;
        }
    }
    ctx->pc = 0x230CD4u;
label_230cd4:
    // 0x230cd4: 0x24621060
    ctx->pc = 0x230cd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_230cd8:
    // 0x230cd8: 0xdc650000
    ctx->pc = 0x230cd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230cdc: 0xdc660008
    ctx->pc = 0x230cdcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230ce0: 0xdc670010
    ctx->pc = 0x230ce0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230ce4: 0xdc680018
    ctx->pc = 0x230ce4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x230ce8: 0xfc850000
    ctx->pc = 0x230ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x230cec: 0xfc860008
    ctx->pc = 0x230cecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x230cf0: 0xfc870010
    ctx->pc = 0x230cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x230cf4: 0xfc880018
    ctx->pc = 0x230cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x230cf8: 0x24630020
    ctx->pc = 0x230cf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230cfc: 0x24840020
    ctx->pc = 0x230cfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230d00: 0x0
    ctx->pc = 0x230d00u;
    // NOP
    // 0x230d04: 0x0
    ctx->pc = 0x230d04u;
    // NOP
    // 0x230d08: 0x1462fff3
    ctx->pc = 0x230D08u;
    {
        const bool branch_taken_0x230d08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230d08) {
            ctx->pc = 0x230CD8u;
            goto label_230cd8;
        }
    }
    ctx->pc = 0x230D10u;
label_230d10:
    // 0x230d10: 0x68620007
    ctx->pc = 0x230d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230d14: 0x6c620000
    ctx->pc = 0x230d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230d18: 0x6865000f
    ctx->pc = 0x230d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230d1c: 0x6c650008
    ctx->pc = 0x230d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230d20: 0x8c660010
    ctx->pc = 0x230d20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230d24: 0xb0820007
    ctx->pc = 0x230d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230d28: 0xb4820000
    ctx->pc = 0x230d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230d2c: 0xb085000f
    ctx->pc = 0x230d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230d30: 0xb4850008
    ctx->pc = 0x230d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230d34: 0xac860010
    ctx->pc = 0x230d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x230d38: 0x282d
    ctx->pc = 0x230d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d3c: 0x26041910
    ctx->pc = 0x230d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6416));
label_230d40:
    // 0x230d40: 0x851021
    ctx->pc = 0x230d40u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x230d44: 0x90430000
    ctx->pc = 0x230d44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230d48: 0x306300f0
    ctx->pc = 0x230d48u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 240));
    // 0x230d4c: 0xa0430000
    ctx->pc = 0x230d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x230d50: 0x24a50001
    ctx->pc = 0x230d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x230d54: 0x28a20100
    ctx->pc = 0x230d54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 256));
    // 0x230d58: 0x1440fff9
    ctx->pc = 0x230D58u;
    {
        const bool branch_taken_0x230d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x230d58) {
            ctx->pc = 0x230D40u;
            goto label_230d40;
        }
    }
    ctx->pc = 0x230D60u;
    // 0x230d60: 0x220102d
    ctx->pc = 0x230d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d64: 0xdfbf0030
    ctx->pc = 0x230d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230d68: 0xdfb10020
    ctx->pc = 0x230d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230d6c: 0xdfb00010
    ctx->pc = 0x230d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230d70: 0x3e00008
    ctx->pc = 0x230D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230D74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230C4Cu: goto label_230c4c;
            case 0x230C74u: goto label_230c74;
            case 0x230CD4u: goto label_230cd4;
            case 0x230CD8u: goto label_230cd8;
            case 0x230D10u: goto label_230d10;
            case 0x230D40u: goto label_230d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230D78u;
}
