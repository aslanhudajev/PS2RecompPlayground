#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlySfdTimStmp
// Address: 0x19ff80 - 0x19fff0
void SFH_AnlySfdTimStmp_0x19ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlySfdTimStmp");


    ctx->pc = 0x19ff80u;

    // 0x19ff80: 0x27bdffd0
    ctx->pc = 0x19ff80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ff84: 0xffb00000
    ctx->pc = 0x19ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ff88: 0xffbf0020
    ctx->pc = 0x19ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ff8c: 0xa0802d
    ctx->pc = 0x19ff8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff90: 0xffb10010
    ctx->pc = 0x19ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ff94: 0xc067f18
    ctx->pc = 0x19FF94u;
    SET_GPR_U32(ctx, 31, 0x19FF9Cu);
    ctx->pc = 0x19FF98u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF9Cu; }
        else if (ctx->pc != 0x19FF9Cu) { ctx->pc = 0x19FF9Cu; }
    }
    if (ctx->pc != 0x19FF9Cu) { return; }
    ctx->pc = 0x19FF9Cu;
    // 0x19ff9c: 0x14400003
    ctx->pc = 0x19FF9Cu;
    {
        const bool branch_taken_0x19ff9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FFA0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ff9c) {
            ctx->pc = 0x19FFACu;
            goto label_19ffac;
        }
    }
    ctx->pc = 0x19FFA4u;
    // 0x19ffa4: 0x1000000d
    ctx->pc = 0x19FFA4u;
    {
        const bool branch_taken_0x19ffa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FFA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ffa4) {
            ctx->pc = 0x19FFDCu;
            goto label_19ffdc;
        }
    }
    ctx->pc = 0x19FFACu;
label_19ffac:
    // 0x19ffac: 0x282d
    ctx->pc = 0x19ffacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ffb0: 0xc050cfe
    ctx->pc = 0x19FFB0u;
    SET_GPR_U32(ctx, 31, 0x19FFB8u);
    ctx->pc = 0x19FFB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFB8u; }
        else if (ctx->pc != 0x19FFB8u) { ctx->pc = 0x19FFB8u; }
    }
    if (ctx->pc != 0x19FFB8u) { return; }
    ctx->pc = 0x19FFB8u;
    // 0x19ffb8: 0x6a220053
    ctx->pc = 0x19ffb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 83); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19ffbc: 0x6e22004c
    ctx->pc = 0x19ffbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 76); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19ffc0: 0x8a230057
    ctx->pc = 0x19ffc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x19ffc4: 0x9a230054
    ctx->pc = 0x19ffc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 84); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x19ffc8: 0xb2020007
    ctx->pc = 0x19ffc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ffcc: 0xb6020000
    ctx->pc = 0x19ffccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ffd0: 0xaa03000b
    ctx->pc = 0x19ffd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x19ffd4: 0xba030008
    ctx->pc = 0x19ffd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x19ffd8: 0x24020001
    ctx->pc = 0x19ffd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19ffdc:
    // 0x19ffdc: 0xdfbf0020
    ctx->pc = 0x19ffdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ffe0: 0xdfb10010
    ctx->pc = 0x19ffe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ffe4: 0xdfb00000
    ctx->pc = 0x19ffe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ffe8: 0x3e00008
    ctx->pc = 0x19FFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FFECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FFACu: goto label_19ffac;
            case 0x19FFDCu: goto label_19ffdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FFF0u;
}
