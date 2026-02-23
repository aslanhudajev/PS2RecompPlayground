#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_is_bgn_host
// Address: 0x179250 - 0x1792a8
void htci_is_bgn_host_0x179250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_is_bgn_host");


    ctx->pc = 0x179250u;

    // 0x179250: 0x27bdffd0
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179254: 0x282d
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179258: 0xffb00010
    ctx->pc = 0x179258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17925c: 0x24060006
    ctx->pc = 0x17925cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x179260: 0x80802d
    ctx->pc = 0x179260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179264: 0xffbf0020
    ctx->pc = 0x179264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179268: 0xc050cfe
    ctx->pc = 0x179268u;
    SET_GPR_U32(ctx, 31, 0x179270u);
    ctx->pc = 0x17926Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179270u; }
        else if (ctx->pc != 0x179270u) { ctx->pc = 0x179270u; }
    }
    if (ctx->pc != 0x179270u) { return; }
    ctx->pc = 0x179270u;
    // 0x179270: 0x8a020003
    ctx->pc = 0x179270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word << shift) & mask)); }
    // 0x179274: 0x9a020000
    ctx->pc = 0x179274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_word = READ32(addr & ~3); SET_GPR_U32(ctx, 2, (GPR_U32(ctx, 2) & ~mask) | ((aligned_word >> shift) & mask)); }
    // 0x179278: 0xaba20003
    ctx->pc = 0x179278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t shift = (3 - (addr & 3)) << 3; uint32_t mask = 0xFFFFFFFF >> shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x17927c: 0x3c05002c
    ctx->pc = 0x17927cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x179280: 0xbba20000
    ctx->pc = 0x179280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 3) << 3; uint32_t mask = 0xFFFFFFFF << shift; uint32_t aligned_addr = addr & ~3; uint32_t old_data = READ32(aligned_addr); uint32_t new_data = (old_data & ~mask) | ((GPR_U32(ctx, 2) << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x179284: 0x24a5b890
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294949008));
    // 0x179288: 0xa3a00005
    ctx->pc = 0x179288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x17928c: 0xc0514bc
    ctx->pc = 0x17928Cu;
    SET_GPR_U32(ctx, 31, 0x179294u);
    ctx->pc = 0x179290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179294u; }
        else if (ctx->pc != 0x179294u) { ctx->pc = 0x179294u; }
    }
    if (ctx->pc != 0x179294u) { return; }
    ctx->pc = 0x179294u;
    // 0x179294: 0xdfbf0020
    ctx->pc = 0x179294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179298: 0x2c420001
    ctx->pc = 0x179298u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x17929c: 0xdfb00010
    ctx->pc = 0x17929cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1792a0: 0x3e00008
    ctx->pc = 0x1792A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1792A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1792A8u;
}
