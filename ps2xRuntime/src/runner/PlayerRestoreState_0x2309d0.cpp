#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerRestoreState
// Address: 0x2309d0 - 0x230b24
void PlayerRestoreState_0x2309d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2309d0u;

    // 0x2309d0: 0x27bdffe0
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2309d4: 0xffbf0010
    ctx->pc = 0x2309d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2309d8: 0xffb00000
    ctx->pc = 0x2309d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2309dc: 0x24022b00
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2309e0: 0x822018
    ctx->pc = 0x2309e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2309e4: 0x3c020032
    ctx->pc = 0x2309e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2309e8: 0x24421bc0
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2309ec: 0x828021
    ctx->pc = 0x2309ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2309f0: 0x8e03000c
    ctx->pc = 0x2309f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2309f4: 0x24020002
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2309f8: 0x1462000a
    ctx->pc = 0x2309F8u;
    {
        const bool branch_taken_0x2309f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2309FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2460));
        if (branch_taken_0x2309f8) {
            ctx->pc = 0x230A24u;
            goto label_230a24;
        }
    }
    ctx->pc = 0x230A00u;
    // 0x230a00: 0x3c020032
    ctx->pc = 0x230a00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230a04: 0x8e030104
    ctx->pc = 0x230a04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x230a08: 0x8c421540
    ctx->pc = 0x230a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x230a0c: 0x14620006
    ctx->pc = 0x230A0Cu;
    {
        const bool branch_taken_0x230a0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x230A10u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 6696));
        if (branch_taken_0x230a0c) {
            ctx->pc = 0x230A28u;
            goto label_230a28;
        }
    }
    ctx->pc = 0x230A14u;
    // 0x230a14: 0xc08c96a
    ctx->pc = 0x230A14u;
    SET_GPR_U32(ctx, 31, 0x230A1Cu);
    ctx->pc = 0x230A18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2325A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_max_health_0x2325a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230A1Cu; }
    }
    if (ctx->pc != 0x230A1Cu) { return; }
    ctx->pc = 0x230A1Cu;
    // 0x230a1c: 0x1000003d
    ctx->pc = 0x230A1Cu;
    {
        const bool branch_taken_0x230a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x230A20u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
        if (branch_taken_0x230a1c) {
            ctx->pc = 0x230B14u;
            goto label_230b14;
        }
    }
    ctx->pc = 0x230A24u;
label_230a24:
    // 0x230a24: 0x26031a28
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 6696));
label_230a28:
    // 0x230a28: 0x641025
    ctx->pc = 0x230a28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230a2c: 0x30420007
    ctx->pc = 0x230a2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x230a30: 0x10400019
    ctx->pc = 0x230A30u;
    {
        const bool branch_taken_0x230a30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x230A34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 10888));
        if (branch_taken_0x230a30) {
            ctx->pc = 0x230A98u;
            goto label_230a98;
        }
    }
    ctx->pc = 0x230A38u;
label_230a38:
    // 0x230a38: 0x68650007
    ctx->pc = 0x230a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230a3c: 0x6c650000
    ctx->pc = 0x230a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230a40: 0x6866000f
    ctx->pc = 0x230a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230a44: 0x6c660008
    ctx->pc = 0x230a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230a48: 0x68670017
    ctx->pc = 0x230a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230a4c: 0x6c670010
    ctx->pc = 0x230a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230a50: 0x6868001f
    ctx->pc = 0x230a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230a54: 0x6c680018
    ctx->pc = 0x230a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230a58: 0xb0850007
    ctx->pc = 0x230a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a5c: 0xb4850000
    ctx->pc = 0x230a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a60: 0xb086000f
    ctx->pc = 0x230a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a64: 0xb4860008
    ctx->pc = 0x230a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a68: 0xb0870017
    ctx->pc = 0x230a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a6c: 0xb4870010
    ctx->pc = 0x230a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a70: 0xb088001f
    ctx->pc = 0x230a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a74: 0xb4880018
    ctx->pc = 0x230a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230a78: 0x24630020
    ctx->pc = 0x230a78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230a7c: 0x24840020
    ctx->pc = 0x230a7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230a80: 0x0
    ctx->pc = 0x230a80u;
    // NOP
    // 0x230a84: 0x0
    ctx->pc = 0x230a84u;
    // NOP
    // 0x230a88: 0x1462ffeb
    ctx->pc = 0x230A88u;
    {
        const bool branch_taken_0x230a88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230a88) {
            ctx->pc = 0x230A38u;
            goto label_230a38;
        }
    }
    ctx->pc = 0x230A90u;
    // 0x230a90: 0x10000010
    ctx->pc = 0x230A90u;
    {
        const bool branch_taken_0x230a90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x230a90) {
            ctx->pc = 0x230AD4u;
            goto label_230ad4;
        }
    }
    ctx->pc = 0x230A98u;
label_230a98:
    // 0x230a98: 0x24621060
    ctx->pc = 0x230a98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_230a9c:
    // 0x230a9c: 0xdc650000
    ctx->pc = 0x230a9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230aa0: 0xdc660008
    ctx->pc = 0x230aa0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230aa4: 0xdc670010
    ctx->pc = 0x230aa4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230aa8: 0xdc680018
    ctx->pc = 0x230aa8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x230aac: 0xfc850000
    ctx->pc = 0x230aacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x230ab0: 0xfc860008
    ctx->pc = 0x230ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x230ab4: 0xfc870010
    ctx->pc = 0x230ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x230ab8: 0xfc880018
    ctx->pc = 0x230ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x230abc: 0x24630020
    ctx->pc = 0x230abcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230ac0: 0x24840020
    ctx->pc = 0x230ac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230ac4: 0x0
    ctx->pc = 0x230ac4u;
    // NOP
    // 0x230ac8: 0x0
    ctx->pc = 0x230ac8u;
    // NOP
    // 0x230acc: 0x1462fff3
    ctx->pc = 0x230ACCu;
    {
        const bool branch_taken_0x230acc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230acc) {
            ctx->pc = 0x230A9Cu;
            goto label_230a9c;
        }
    }
    ctx->pc = 0x230AD4u;
label_230ad4:
    // 0x230ad4: 0x68620007
    ctx->pc = 0x230ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230ad8: 0x6c620000
    ctx->pc = 0x230ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230adc: 0x6865000f
    ctx->pc = 0x230adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230ae0: 0x6c650008
    ctx->pc = 0x230ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230ae4: 0x8c660010
    ctx->pc = 0x230ae4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230ae8: 0xb0820007
    ctx->pc = 0x230ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230aec: 0xb4820000
    ctx->pc = 0x230aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230af0: 0xb085000f
    ctx->pc = 0x230af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230af4: 0xb4850008
    ctx->pc = 0x230af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230af8: 0xac860010
    ctx->pc = 0x230af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x230afc: 0x200202d
    ctx->pc = 0x230afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b00: 0x2405ffff
    ctx->pc = 0x230b00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230b04: 0xdfbf0010
    ctx->pc = 0x230b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230b08: 0xdfb00000
    ctx->pc = 0x230b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230b0c: 0x808c144
    ctx->pc = 0x230B0Cu;
    ctx->pc = 0x230B10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x230510u;
    player_get_from_save_0x230510(rdram, ctx, runtime); return;
    ctx->pc = 0x230B14u;
label_230b14:
    // 0x230b14: 0xdfbf0010
    ctx->pc = 0x230b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230b18: 0xdfb00000
    ctx->pc = 0x230b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230b1c: 0x3e00008
    ctx->pc = 0x230B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230B20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230A24u: goto label_230a24;
            case 0x230A28u: goto label_230a28;
            case 0x230A38u: goto label_230a38;
            case 0x230A98u: goto label_230a98;
            case 0x230A9Cu: goto label_230a9c;
            case 0x230AD4u: goto label_230ad4;
            case 0x230B14u: goto label_230b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230B24u;
}
