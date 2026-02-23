#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_GetErrInf
// Address: 0x1860a0 - 0x186118
void MPV_GetErrInf_0x1860a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_GetErrInf");


    ctx->pc = 0x1860a0u;

    // 0x1860a0: 0x27bdffd0
    ctx->pc = 0x1860a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1860a4: 0xffb00000
    ctx->pc = 0x1860a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1860a8: 0xffb10010
    ctx->pc = 0x1860a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1860ac: 0x80802d
    ctx->pc = 0x1860acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1860b0: 0xffbf0020
    ctx->pc = 0x1860b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1860b4: 0xc062142
    ctx->pc = 0x1860B4u;
    SET_GPR_U32(ctx, 31, 0x1860BCu);
    ctx->pc = 0x1860B8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1860BCu; }
        else if (ctx->pc != 0x1860BCu) { ctx->pc = 0x1860BCu; }
    }
    if (ctx->pc != 0x1860BCu) { return; }
    ctx->pc = 0x1860BCu;
    // 0x1860bc: 0x10400006
    ctx->pc = 0x1860BCu;
    {
        const bool branch_taken_0x1860bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1860C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1860bc) {
            ctx->pc = 0x1860D8u;
            goto label_1860d8;
        }
    }
    ctx->pc = 0x1860C4u;
    // 0x1860c4: 0x3c05ff03
    ctx->pc = 0x1860c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1860c8: 0xc061846
    ctx->pc = 0x1860C8u;
    SET_GPR_U32(ctx, 31, 0x1860D0u);
    ctx->pc = 0x1860CCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 516));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1860D0u; }
        else if (ctx->pc != 0x1860D0u) { ctx->pc = 0x1860D0u; }
    }
    if (ctx->pc != 0x1860D0u) { return; }
    ctx->pc = 0x1860D0u;
    // 0x1860d0: 0x1000000d
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1860D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x186108u;
            goto label_186108;
        }
    }
    ctx->pc = 0x1860D8u;
label_1860d8:
    // 0x1860d8: 0x6a0201c3
    ctx->pc = 0x1860d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 451); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1860dc: 0x6e0201bc
    ctx->pc = 0x1860dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 444); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1860e0: 0x6a0301cb
    ctx->pc = 0x1860e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 459); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1860e4: 0x6e0301c4
    ctx->pc = 0x1860e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 452); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1860e8: 0x8e0401cc
    ctx->pc = 0x1860e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1860ec: 0xb2220007
    ctx->pc = 0x1860ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1860f0: 0xb6220000
    ctx->pc = 0x1860f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1860f4: 0xb223000f
    ctx->pc = 0x1860f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1860f8: 0xb6230008
    ctx->pc = 0x1860f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1860fc: 0xae240010
    ctx->pc = 0x1860fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x186100: 0x102d
    ctx->pc = 0x186100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186104: 0xdfbf0020
    ctx->pc = 0x186104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_186108:
    // 0x186108: 0xdfb10010
    ctx->pc = 0x186108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18610c: 0xdfb00000
    ctx->pc = 0x18610cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186110: 0x3e00008
    ctx->pc = 0x186110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1860D8u: goto label_1860d8;
            case 0x186108u: goto label_186108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186118u;
}
