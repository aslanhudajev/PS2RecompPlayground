#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetSkipTtu
// Address: 0x197de0 - 0x197e4c
void sfmpv_SetSkipTtu_0x197de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetSkipTtu");


    ctx->pc = 0x197de0u;

    // 0x197de0: 0x8c820b44
    ctx->pc = 0x197de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2884)));
    // 0x197de4: 0x8c830b94
    ctx->pc = 0x197de4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2964)));
    // 0x197de8: 0x43102a
    ctx->pc = 0x197de8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x197dec: 0x10400015
    ctx->pc = 0x197DECu;
    {
        const bool branch_taken_0x197dec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x197dec) {
            ctx->pc = 0x197E44u;
            goto label_197e44;
        }
    }
    ctx->pc = 0x197DF4u;
    // 0x197df4: 0x68820b2b
    ctx->pc = 0x197df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2859); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197df8: 0x6c820b24
    ctx->pc = 0x197df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2852); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197dfc: 0x68830b33
    ctx->pc = 0x197dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2867); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197e00: 0x6c830b2c
    ctx->pc = 0x197e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2860); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197e04: 0x68850b3b
    ctx->pc = 0x197e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2875); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197e08: 0x6c850b34
    ctx->pc = 0x197e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2868); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197e0c: 0x68860b43
    ctx->pc = 0x197e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2883); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197e10: 0x6c860b3c
    ctx->pc = 0x197e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2876); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197e14: 0xb0820b53
    ctx->pc = 0x197e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2899); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e18: 0xb4820b4c
    ctx->pc = 0x197e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2892); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e1c: 0xb0830b5b
    ctx->pc = 0x197e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2907); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e20: 0xb4830b54
    ctx->pc = 0x197e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2900); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e24: 0xb0850b63
    ctx->pc = 0x197e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2915); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e28: 0xb4850b5c
    ctx->pc = 0x197e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2908); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e2c: 0xb0860b6b
    ctx->pc = 0x197e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2923); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e30: 0xb4860b64
    ctx->pc = 0x197e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2916); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e34: 0x68820b4b
    ctx->pc = 0x197e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2891); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x197e38: 0x6c820b44
    ctx->pc = 0x197e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2884); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x197e3c: 0xb0820b73
    ctx->pc = 0x197e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2931); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x197e40: 0xb4820b6c
    ctx->pc = 0x197e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2924); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_197e44:
    // 0x197e44: 0x3e00008
    ctx->pc = 0x197E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197E44u: goto label_197e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197E4Cu;
}
