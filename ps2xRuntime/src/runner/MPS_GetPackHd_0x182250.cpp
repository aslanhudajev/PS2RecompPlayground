#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_GetPackHd
// Address: 0x182250 - 0x1822b8
void MPS_GetPackHd_0x182250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_GetPackHd");


    ctx->pc = 0x182250u;

    // 0x182250: 0x27bdffd0
    ctx->pc = 0x182250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182254: 0xffb00000
    ctx->pc = 0x182254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182258: 0xffb10010
    ctx->pc = 0x182258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18225c: 0x80802d
    ctx->pc = 0x18225cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182260: 0xffbf0020
    ctx->pc = 0x182260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182264: 0xc0609f0
    ctx->pc = 0x182264u;
    SET_GPR_U32(ctx, 31, 0x18226Cu);
    ctx->pc = 0x182268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18226Cu; }
        else if (ctx->pc != 0x18226Cu) { ctx->pc = 0x18226Cu; }
    }
    if (ctx->pc != 0x18226Cu) { return; }
    ctx->pc = 0x18226Cu;
    // 0x18226c: 0x10400006
    ctx->pc = 0x18226Cu;
    {
        const bool branch_taken_0x18226c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182270u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18226c) {
            ctx->pc = 0x182288u;
            goto label_182288;
        }
    }
    ctx->pc = 0x182274u;
    // 0x182274: 0x3c05ff02
    ctx->pc = 0x182274u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x182278: 0xc060986
    ctx->pc = 0x182278u;
    SET_GPR_U32(ctx, 31, 0x182280u);
    ctx->pc = 0x18227Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 513));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182280u; }
        else if (ctx->pc != 0x182280u) { ctx->pc = 0x182280u; }
    }
    if (ctx->pc != 0x182280u) { return; }
    ctx->pc = 0x182280u;
    // 0x182280: 0x10000009
    ctx->pc = 0x182280u;
    {
        const bool branch_taken_0x182280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182284u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x182280) {
            ctx->pc = 0x1822A8u;
            goto label_1822a8;
        }
    }
    ctx->pc = 0x182288u;
label_182288:
    // 0x182288: 0x6a02001b
    ctx->pc = 0x182288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18228c: 0x6e020014
    ctx->pc = 0x18228cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x182290: 0x8e03001c
    ctx->pc = 0x182290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x182294: 0xb2220007
    ctx->pc = 0x182294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182298: 0xb6220000
    ctx->pc = 0x182298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18229c: 0xae230008
    ctx->pc = 0x18229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1822a0: 0x102d
    ctx->pc = 0x1822a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822a4: 0xdfbf0020
    ctx->pc = 0x1822a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1822a8:
    // 0x1822a8: 0xdfb10010
    ctx->pc = 0x1822a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1822ac: 0xdfb00000
    ctx->pc = 0x1822acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1822b0: 0x3e00008
    ctx->pc = 0x1822B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1822B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182288u: goto label_182288;
            case 0x1822A8u: goto label_1822a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1822B8u;
}
