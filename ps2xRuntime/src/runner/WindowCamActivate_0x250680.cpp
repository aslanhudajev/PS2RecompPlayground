#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WindowCamActivate
// Address: 0x250680 - 0x2506f4
void WindowCamActivate_0x250680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x250680u;

    // 0x250680: 0x27bdffe0
    ctx->pc = 0x250680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250684: 0xffbf0010
    ctx->pc = 0x250684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x250688: 0x3c050034
    ctx->pc = 0x250688u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x25068c: 0x24a2d220
    ctx->pc = 0x25068cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294955552));
    // 0x250690: 0x41880
    ctx->pc = 0x250690u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x250694: 0x621821
    ctx->pc = 0x250694u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250698: 0x8c630000
    ctx->pc = 0x250698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25069c: 0x3c02003b
    ctx->pc = 0x25069cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2506a0: 0x24498578
    ctx->pc = 0x2506a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294935928));
    // 0x2506a4: 0x69260007
    ctx->pc = 0x2506a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2506a8: 0x6d260000
    ctx->pc = 0x2506a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2506ac: 0xb3a60007
    ctx->pc = 0x2506acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2506b0: 0xb7a60000
    ctx->pc = 0x2506b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2506b4: 0x14600004
    ctx->pc = 0x2506B4u;
    {
        const bool branch_taken_0x2506b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2506B8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2506b4) {
            ctx->pc = 0x2506C8u;
            goto label_2506c8;
        }
    }
    ctx->pc = 0x2506BCu;
    // 0x2506bc: 0x8ca3d220
    ctx->pc = 0x2506bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294955552)));
    // 0x2506c0: 0x1060000a
    ctx->pc = 0x2506C0u;
    {
        const bool branch_taken_0x2506c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2506C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2506c0) {
            ctx->pc = 0x2506ECu;
            goto label_2506ec;
        }
    }
    ctx->pc = 0x2506C8u;
label_2506c8:
    // 0x2506c8: 0x3a21021
    ctx->pc = 0x2506c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2506cc: 0x202d
    ctx->pc = 0x2506ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2506d0: 0x24650010
    ctx->pc = 0x2506d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 16));
    // 0x2506d4: 0x24660020
    ctx->pc = 0x2506d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2506d8: 0x382d
    ctx->pc = 0x2506d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2506dc: 0x402d
    ctx->pc = 0x2506dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2506e0: 0xc0a89ac
    ctx->pc = 0x2506E0u;
    SET_GPR_U32(ctx, 31, 0x2506E8u);
    ctx->pc = 0x2506E4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2A26B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriggerCameraActivate_0x2a26b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2506E8u; }
    }
    if (ctx->pc != 0x2506E8u) { return; }
    ctx->pc = 0x2506E8u;
    // 0x2506e8: 0xdfbf0010
    ctx->pc = 0x2506e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2506ec:
    // 0x2506ec: 0x3e00008
    ctx->pc = 0x2506ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2506F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2506C8u: goto label_2506c8;
            case 0x2506ECu: goto label_2506ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2506F4u;
}
