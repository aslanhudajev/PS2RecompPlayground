#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RuneCamActivate
// Address: 0x2505d8 - 0x250680
void RuneCamActivate_0x2505d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2505d8u;

    // 0x2505d8: 0x27bdffe0
    ctx->pc = 0x2505d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2505dc: 0xffbf0010
    ctx->pc = 0x2505dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2505e0: 0x3c020034
    ctx->pc = 0x2505e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2505e4: 0x2442d210
    ctx->pc = 0x2505e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955536));
    // 0x2505e8: 0x41880
    ctx->pc = 0x2505e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2505ec: 0x621821
    ctx->pc = 0x2505ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2505f0: 0x8c630000
    ctx->pc = 0x2505f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2505f4: 0x3c02003b
    ctx->pc = 0x2505f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2505f8: 0x24488568
    ctx->pc = 0x2505f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294935912));
    // 0x2505fc: 0x69050007
    ctx->pc = 0x2505fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x250600: 0x6d050000
    ctx->pc = 0x250600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x250604: 0x8d060008
    ctx->pc = 0x250604u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x250608: 0xb3a50007
    ctx->pc = 0x250608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25060c: 0xb7a50000
    ctx->pc = 0x25060cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x250610: 0xafa60008
    ctx->pc = 0x250610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x250614: 0x1460000f
    ctx->pc = 0x250614u;
    {
        const bool branch_taken_0x250614 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x250618u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x250614) {
            ctx->pc = 0x250654u;
            goto label_250654;
        }
    }
    ctx->pc = 0x25061Cu;
    // 0x25061c: 0x1880000b
    ctx->pc = 0x25061Cu;
    {
        const bool branch_taken_0x25061c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x250620u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25061c) {
            ctx->pc = 0x25064Cu;
            goto label_25064c;
        }
    }
    ctx->pc = 0x250624u;
    // 0x250624: 0x2445d210
    ctx->pc = 0x250624u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294955536));
    // 0x250628: 0x2484ffff
    ctx->pc = 0x250628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25062c: 0x0
    ctx->pc = 0x25062cu;
    // NOP
label_250630:
    // 0x250630: 0x41080
    ctx->pc = 0x250630u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x250634: 0x451021
    ctx->pc = 0x250634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x250638: 0x8c430000
    ctx->pc = 0x250638u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25063c: 0x54600005
    ctx->pc = 0x25063Cu;
    {
        const bool branch_taken_0x25063c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x25063c) {
            ctx->pc = 0x250640u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
            ctx->pc = 0x250654u;
            goto label_250654;
        }
    }
    ctx->pc = 0x250644u;
    // 0x250644: 0x5c80fffa
    ctx->pc = 0x250644u;
    {
        const bool branch_taken_0x250644 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x250644) {
            ctx->pc = 0x250648u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->pc = 0x250630u;
            goto label_250630;
        }
    }
    ctx->pc = 0x25064Cu;
label_25064c:
    // 0x25064c: 0x10600009
    ctx->pc = 0x25064Cu;
    {
        const bool branch_taken_0x25064c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x250650u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x25064c) {
            ctx->pc = 0x250674u;
            goto label_250674;
        }
    }
    ctx->pc = 0x250654u;
label_250654:
    // 0x250654: 0x3a21021
    ctx->pc = 0x250654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x250658: 0x202d
    ctx->pc = 0x250658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25065c: 0x24650010
    ctx->pc = 0x25065cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 16));
    // 0x250660: 0x24660020
    ctx->pc = 0x250660u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 32));
    // 0x250664: 0x382d
    ctx->pc = 0x250664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250668: 0x402d
    ctx->pc = 0x250668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25066c: 0xc0a89ac
    ctx->pc = 0x25066Cu;
    SET_GPR_U32(ctx, 31, 0x250674u);
    ctx->pc = 0x250670u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2A26B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriggerCameraActivate_0x2a26b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250674u; }
    }
    if (ctx->pc != 0x250674u) { return; }
    ctx->pc = 0x250674u;
label_250674:
    // 0x250674: 0xdfbf0010
    ctx->pc = 0x250674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250678: 0x3e00008
    ctx->pc = 0x250678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25067Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250630u: goto label_250630;
            case 0x25064Cu: goto label_25064c;
            case 0x250654u: goto label_250654;
            case 0x250674u: goto label_250674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250680u;
}
