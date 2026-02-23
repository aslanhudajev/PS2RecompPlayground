#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlySfdFname
// Address: 0x19ff10 - 0x19ff80
void SFH_AnlySfdFname_0x19ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlySfdFname");


    ctx->pc = 0x19ff10u;

    // 0x19ff10: 0x27bdffd0
    ctx->pc = 0x19ff10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ff14: 0xffb00000
    ctx->pc = 0x19ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ff18: 0xffbf0020
    ctx->pc = 0x19ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ff1c: 0xa0802d
    ctx->pc = 0x19ff1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff20: 0xffb10010
    ctx->pc = 0x19ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ff24: 0xc067f18
    ctx->pc = 0x19FF24u;
    SET_GPR_U32(ctx, 31, 0x19FF2Cu);
    ctx->pc = 0x19FF28u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF2Cu; }
        else if (ctx->pc != 0x19FF2Cu) { ctx->pc = 0x19FF2Cu; }
    }
    if (ctx->pc != 0x19FF2Cu) { return; }
    ctx->pc = 0x19FF2Cu;
    // 0x19ff2c: 0x14400003
    ctx->pc = 0x19FF2Cu;
    {
        const bool branch_taken_0x19ff2c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19FF30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ff2c) {
            ctx->pc = 0x19FF3Cu;
            goto label_19ff3c;
        }
    }
    ctx->pc = 0x19FF34u;
    // 0x19ff34: 0x1000000d
    ctx->pc = 0x19FF34u;
    {
        const bool branch_taken_0x19ff34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19FF38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ff34) {
            ctx->pc = 0x19FF6Cu;
            goto label_19ff6c;
        }
    }
    ctx->pc = 0x19FF3Cu;
label_19ff3c:
    // 0x19ff3c: 0x282d
    ctx->pc = 0x19ff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff40: 0xc050cfe
    ctx->pc = 0x19FF40u;
    SET_GPR_U32(ctx, 31, 0x19FF48u);
    ctx->pc = 0x19FF44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FF48u; }
        else if (ctx->pc != 0x19FF48u) { ctx->pc = 0x19FF48u; }
    }
    if (ctx->pc != 0x19FF48u) { return; }
    ctx->pc = 0x19FF48u;
    // 0x19ff48: 0x6a220047
    ctx->pc = 0x19ff48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19ff4c: 0x6e220040
    ctx->pc = 0x19ff4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19ff50: 0x8a23004b
    ctx->pc = 0x19ff50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 75); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x19ff54: 0x9a230048
    ctx->pc = 0x19ff54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x19ff58: 0xb2020007
    ctx->pc = 0x19ff58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ff5c: 0xb6020000
    ctx->pc = 0x19ff5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19ff60: 0xaa03000b
    ctx->pc = 0x19ff60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x19ff64: 0xba030008
    ctx->pc = 0x19ff64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x19ff68: 0x24020001
    ctx->pc = 0x19ff68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19ff6c:
    // 0x19ff6c: 0xdfbf0020
    ctx->pc = 0x19ff6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ff70: 0xdfb10010
    ctx->pc = 0x19ff70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ff74: 0xdfb00000
    ctx->pc = 0x19ff74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ff78: 0x3e00008
    ctx->pc = 0x19FF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FF3Cu: goto label_19ff3c;
            case 0x19FF6Cu: goto label_19ff6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FF80u;
}
