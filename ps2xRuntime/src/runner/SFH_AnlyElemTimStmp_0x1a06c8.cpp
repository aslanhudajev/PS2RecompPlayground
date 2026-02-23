#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyElemTimStmp
// Address: 0x1a06c8 - 0x1a073c
void SFH_AnlyElemTimStmp_0x1a06c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyElemTimStmp");


    ctx->pc = 0x1a06c8u;

    // 0x1a06c8: 0x27bdffd0
    ctx->pc = 0x1a06c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a06cc: 0x30a500ff
    ctx->pc = 0x1a06ccu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a06d0: 0xffb10010
    ctx->pc = 0x1a06d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a06d4: 0xffb00000
    ctx->pc = 0x1a06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a06d8: 0xffbf0020
    ctx->pc = 0x1a06d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a06dc: 0xc0681d0
    ctx->pc = 0x1A06DCu;
    SET_GPR_U32(ctx, 31, 0x1A06E4u);
    ctx->pc = 0x1A06E0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E4u; }
        else if (ctx->pc != 0x1A06E4u) { ctx->pc = 0x1A06E4u; }
    }
    if (ctx->pc != 0x1A06E4u) { return; }
    ctx->pc = 0x1A06E4u;
    // 0x1a06e4: 0x40802d
    ctx->pc = 0x1a06e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06e8: 0x16000003
    ctx->pc = 0x1A06E8u;
    {
        const bool branch_taken_0x1a06e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A06ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a06e8) {
            ctx->pc = 0x1A06F8u;
            goto label_1a06f8;
        }
    }
    ctx->pc = 0x1A06F0u;
    // 0x1a06f0: 0x1000000d
    ctx->pc = 0x1A06F0u;
    {
        const bool branch_taken_0x1a06f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A06F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a06f0) {
            ctx->pc = 0x1A0728u;
            goto label_1a0728;
        }
    }
    ctx->pc = 0x1A06F8u;
label_1a06f8:
    // 0x1a06f8: 0x282d
    ctx->pc = 0x1a06f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06fc: 0xc050cfe
    ctx->pc = 0x1A06FCu;
    SET_GPR_U32(ctx, 31, 0x1A0704u);
    ctx->pc = 0x1A0700u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0704u; }
        else if (ctx->pc != 0x1A0704u) { ctx->pc = 0x1A0704u; }
    }
    if (ctx->pc != 0x1A0704u) { return; }
    ctx->pc = 0x1A0704u;
    // 0x1a0704: 0x6a020013
    ctx->pc = 0x1a0704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1a0708: 0x6e02000c
    ctx->pc = 0x1a0708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1a070c: 0x8a030017
    ctx->pc = 0x1a070cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x1a0710: 0x9a030014
    ctx->pc = 0x1a0710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 3, (GPR_U32(ctx, 3) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x1a0714: 0xb2220007
    ctx->pc = 0x1a0714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a0718: 0xb6220000
    ctx->pc = 0x1a0718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a071c: 0xaa23000b
    ctx->pc = 0x1a071cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a0720: 0xba230008
    ctx->pc = 0x1a0720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 3) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1a0724: 0x24020001
    ctx->pc = 0x1a0724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a0728:
    // 0x1a0728: 0xdfbf0020
    ctx->pc = 0x1a0728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a072c: 0xdfb10010
    ctx->pc = 0x1a072cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0730: 0xdfb00000
    ctx->pc = 0x1a0730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0734: 0x3e00008
    ctx->pc = 0x1A0734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A06F8u: goto label_1a06f8;
            case 0x1A0728u: goto label_1a0728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A073Cu;
}
