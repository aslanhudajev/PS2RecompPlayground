#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpegError
// Address: 0x19a0a0 - 0x19a100
void mpegError_0x19a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpegError");


    ctx->pc = 0x19a0a0u;

    // 0x19a0a0: 0x3c030030
    ctx->pc = 0x19a0a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x19a0a4: 0x27bdfff0
    ctx->pc = 0x19a0a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a0a8: 0x24020001
    ctx->pc = 0x19a0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a0ac: 0xffbf0000
    ctx->pc = 0x19a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a0b0: 0xac6220c0
    ctx->pc = 0x19a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8384), GPR_U32(ctx, 2));
    // 0x19a0b4: 0xa0382d
    ctx->pc = 0x19a0b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0b8: 0x3c020030
    ctx->pc = 0x19a0b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x19a0bc: 0x3c05ff00
    ctx->pc = 0x19a0bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19a0c0: 0x244920c8
    ctx->pc = 0x19a0c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 8392));
    // 0x19a0c4: 0x68e30007
    ctx->pc = 0x19a0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19a0c8: 0x6ce30000
    ctx->pc = 0x19a0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19a0cc: 0xb1230007
    ctx->pc = 0x19a0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19a0d0: 0xb5230000
    ctx->pc = 0x19a0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19a0d4: 0x34a50f40
    ctx->pc = 0x19a0d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3904));
    // 0x19a0d8: 0x68e20007
    ctx->pc = 0x19a0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19a0dc: 0x6ce20000
    ctx->pc = 0x19a0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19a0e0: 0xb0c23ddf
    ctx->pc = 0x19a0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15839); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19a0e4: 0xb4c23dd8
    ctx->pc = 0x19a0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15832); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19a0e8: 0xc064ea0
    ctx->pc = 0x19A0E8u;
    SET_GPR_U32(ctx, 31, 0x19A0F0u);
    ctx->pc = 0x19A0ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A0F0u; }
        else if (ctx->pc != 0x19A0F0u) { ctx->pc = 0x19A0F0u; }
    }
    if (ctx->pc != 0x19A0F0u) { return; }
    ctx->pc = 0x19A0F0u;
    // 0x19a0f0: 0xdfbf0000
    ctx->pc = 0x19a0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a0f4: 0x24020001
    ctx->pc = 0x19a0f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a0f8: 0x3e00008
    ctx->pc = 0x19A0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A0FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A100u;
}
