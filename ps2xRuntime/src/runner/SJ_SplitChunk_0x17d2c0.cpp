#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJ_SplitChunk
// Address: 0x17d2c0 - 0x17d31c
void SJ_SplitChunk_0x17d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJ_SplitChunk");


    ctx->pc = 0x17d2c0u;

    // 0x17d2c0: 0x68820007
    ctx->pc = 0x17d2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x17d2c4: 0x6c820000
    ctx->pc = 0x17d2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x17d2c8: 0xb0c20007
    ctx->pc = 0x17d2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17d2cc: 0xb4c20000
    ctx->pc = 0x17d2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17d2d0: 0x8cc20004
    ctx->pc = 0x17d2d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17d2d4: 0xace20004
    ctx->pc = 0x17d2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x17d2d8: 0x8cc30004
    ctx->pc = 0x17d2d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17d2dc: 0xa3102a
    ctx->pc = 0x17d2dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x17d2e0: 0x50400004
    ctx->pc = 0x17D2E0u;
    {
        const bool branch_taken_0x17d2e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d2e0) {
            ctx->pc = 0x17D2E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->pc = 0x17D2F4u;
            goto label_17d2f4;
        }
    }
    ctx->pc = 0x17D2E8u;
    // 0x17d2e8: 0xacc50004
    ctx->pc = 0x17d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x17d2ec: 0xa0182d
    ctx->pc = 0x17d2ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2f0: 0x8ce20004
    ctx->pc = 0x17d2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_17d2f4:
    // 0x17d2f4: 0x431023
    ctx->pc = 0x17d2f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d2f8: 0x14400003
    ctx->pc = 0x17D2F8u;
    {
        const bool branch_taken_0x17d2f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D2FCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x17d2f8) {
            ctx->pc = 0x17D308u;
            goto label_17d308;
        }
    }
    ctx->pc = 0x17D300u;
    // 0x17d300: 0x3e00008
    ctx->pc = 0x17D300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D304u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D2F4u: goto label_17d2f4;
            case 0x17D308u: goto label_17d308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D308u;
label_17d308:
    // 0x17d308: 0x8cc20000
    ctx->pc = 0x17d308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d30c: 0x8cc30004
    ctx->pc = 0x17d30cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17d310: 0x431021
    ctx->pc = 0x17d310u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d314: 0x3e00008
    ctx->pc = 0x17D314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D318u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D2F4u: goto label_17d2f4;
            case 0x17D308u: goto label_17d308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D31Cu;
}
