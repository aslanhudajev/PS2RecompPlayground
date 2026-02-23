#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_AnlyHead
// Address: 0x193378 - 0x193400
void sfhds_AnlyHead_0x193378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_AnlyHead");


    ctx->pc = 0x193378u;

    // 0x193378: 0x27bdffd0
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19337c: 0xffb00000
    ctx->pc = 0x19337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193380: 0xa0802d
    ctx->pc = 0x193380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193384: 0xffb10010
    ctx->pc = 0x193384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x193388: 0x80882d
    ctx->pc = 0x193388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19338c: 0x3c05001a
    ctx->pc = 0x19338cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x193390: 0xffbf0020
    ctx->pc = 0x193390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193394: 0xc064dd0
    ctx->pc = 0x193394u;
    SET_GPR_U32(ctx, 31, 0x19339Cu);
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 424));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19339Cu; }
        else if (ctx->pc != 0x19339Cu) { ctx->pc = 0x19339Cu; }
    }
    if (ctx->pc != 0x19339Cu) { return; }
    ctx->pc = 0x19339Cu;
    // 0x19339c: 0x3c05001a
    ctx->pc = 0x19339cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x1933a0: 0xae020010
    ctx->pc = 0x1933a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1933a4: 0x24a501f0
    ctx->pc = 0x1933a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 496));
    // 0x1933a8: 0xc064dd0
    ctx->pc = 0x1933A8u;
    SET_GPR_U32(ctx, 31, 0x1933B0u);
    ctx->pc = 0x1933ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1933B0u; }
        else if (ctx->pc != 0x1933B0u) { ctx->pc = 0x1933B0u; }
    }
    if (ctx->pc != 0x1933B0u) { return; }
    ctx->pc = 0x1933B0u;
    // 0x1933b0: 0x3c05001a
    ctx->pc = 0x1933b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x1933b4: 0xae020014
    ctx->pc = 0x1933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1933b8: 0x24a50240
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 576));
    // 0x1933bc: 0xc064dd0
    ctx->pc = 0x1933BCu;
    SET_GPR_U32(ctx, 31, 0x1933C4u);
    ctx->pc = 0x1933C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1933C4u; }
        else if (ctx->pc != 0x1933C4u) { ctx->pc = 0x1933C4u; }
    }
    if (ctx->pc != 0x1933C4u) { return; }
    ctx->pc = 0x1933C4u;
    // 0x1933c4: 0x2403ffff
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1933c8: 0x14430003
    ctx->pc = 0x1933C8u;
    {
        const bool branch_taken_0x1933c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1933CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x1933c8) {
            ctx->pc = 0x1933D8u;
            goto label_1933d8;
        }
    }
    ctx->pc = 0x1933D0u;
    // 0x1933d0: 0x24020002
    ctx->pc = 0x1933d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1933d4: 0xae020018
    ctx->pc = 0x1933d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1933d8:
    // 0x1933d8: 0x3c05001a
    ctx->pc = 0x1933d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)26 << 16));
    // 0x1933dc: 0x220202d
    ctx->pc = 0x1933dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1933e0: 0xc064dd0
    ctx->pc = 0x1933E0u;
    SET_GPR_U32(ctx, 31, 0x1933E8u);
    ctx->pc = 0x1933E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 656));
    ctx->pc = 0x193740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_CallN_0x193740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1933E8u; }
        else if (ctx->pc != 0x1933E8u) { ctx->pc = 0x1933E8u; }
    }
    if (ctx->pc != 0x1933E8u) { return; }
    ctx->pc = 0x1933E8u;
    // 0x1933e8: 0xae02001c
    ctx->pc = 0x1933e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1933ec: 0xdfbf0020
    ctx->pc = 0x1933ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1933f0: 0xdfb10010
    ctx->pc = 0x1933f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1933f4: 0xdfb00000
    ctx->pc = 0x1933f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1933f8: 0x3e00008
    ctx->pc = 0x1933F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1933FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1933D8u: goto label_1933d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193400u;
}
