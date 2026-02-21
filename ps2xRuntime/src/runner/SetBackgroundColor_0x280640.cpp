#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetBackgroundColor
// Address: 0x280640 - 0x280690
void SetBackgroundColor_0x280640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280640u;

    // 0x280640: 0x27bdffe0
    ctx->pc = 0x280640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280644: 0xffbf0010
    ctx->pc = 0x280644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x280648: 0x80302d
    ctx->pc = 0x280648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28064c: 0x3c02003b
    ctx->pc = 0x28064cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x280650: 0x2447bf58
    ctx->pc = 0x280650u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294950744));
    // 0x280654: 0x68e30007
    ctx->pc = 0x280654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x280658: 0x6ce30000
    ctx->pc = 0x280658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28065c: 0x8ce40008
    ctx->pc = 0x28065cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x280660: 0xb3a30007
    ctx->pc = 0x280660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280664: 0xb7a30000
    ctx->pc = 0x280664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280668: 0xafa40008
    ctx->pc = 0x280668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x28066c: 0x62402
    ctx->pc = 0x28066cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 6), 16));
    // 0x280670: 0x62a02
    ctx->pc = 0x280670u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 6), 8));
    // 0x280674: 0x308400ff
    ctx->pc = 0x280674u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x280678: 0x30a500ff
    ctx->pc = 0x280678u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x28067c: 0xc0b1734
    ctx->pc = 0x28067Cu;
    SET_GPR_U32(ctx, 31, 0x280684u);
    ctx->pc = 0x280680u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
    ctx->pc = 0x2C5CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetBGColor_0x2c5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280684u; }
    }
    if (ctx->pc != 0x280684u) { return; }
    ctx->pc = 0x280684u;
    // 0x280684: 0xdfbf0010
    ctx->pc = 0x280684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280688: 0x3e00008
    ctx->pc = 0x280688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28068Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280690u;
}
