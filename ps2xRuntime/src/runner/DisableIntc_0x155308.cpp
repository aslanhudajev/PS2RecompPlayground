#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DisableIntc
// Address: 0x155308 - 0x155370
void DisableIntc_0x155308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DisableIntc");


    ctx->pc = 0x155308u;

    // 0x155308: 0x27bdffd0
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15530c: 0xffb10010
    ctx->pc = 0x15530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x155310: 0xffbf0020
    ctx->pc = 0x155310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x155314: 0x80882d
    ctx->pc = 0x155314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155318: 0xffb00000
    ctx->pc = 0x155318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15531c: 0x40106000
    ctx->pc = 0x15531cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x155320: 0x3c020001
    ctx->pc = 0x155320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x155324: 0x2028024
    ctx->pc = 0x155324u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x155328: 0x12000003
    ctx->pc = 0x155328u;
    {
        const bool branch_taken_0x155328 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x155328) {
            ctx->pc = 0x155338u;
            goto label_155338;
        }
    }
    ctx->pc = 0x155330u;
    // 0x155330: 0xc05725c
    ctx->pc = 0x155330u;
    SET_GPR_U32(ctx, 31, 0x155338u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155338u; }
        else if (ctx->pc != 0x155338u) { ctx->pc = 0x155338u; }
    }
    if (ctx->pc != 0x155338u) { return; }
    ctx->pc = 0x155338u;
label_155338:
    // 0x155338: 0xc05518c
    ctx->pc = 0x155338u;
    SET_GPR_U32(ctx, 31, 0x155340u);
    ctx->pc = 0x15533Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154630u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableIntc_0x154630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155340u; }
        else if (ctx->pc != 0x155340u) { ctx->pc = 0x155340u; }
    }
    if (ctx->pc != 0x155340u) { return; }
    ctx->pc = 0x155340u;
    // 0x155340: 0x40882d
    ctx->pc = 0x155340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155344: 0xf
    ctx->pc = 0x155344u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x155348: 0x12000004
    ctx->pc = 0x155348u;
    {
        const bool branch_taken_0x155348 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15534Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x155348) {
            ctx->pc = 0x15535Cu;
            goto label_15535c;
        }
    }
    ctx->pc = 0x155350u;
    // 0x155350: 0xc05726e
    ctx->pc = 0x155350u;
    SET_GPR_U32(ctx, 31, 0x155358u);
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155358u; }
        else if (ctx->pc != 0x155358u) { ctx->pc = 0x155358u; }
    }
    if (ctx->pc != 0x155358u) { return; }
    ctx->pc = 0x155358u;
    // 0x155358: 0x220102d
    ctx->pc = 0x155358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15535c:
    // 0x15535c: 0xdfbf0020
    ctx->pc = 0x15535cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155360: 0xdfb10010
    ctx->pc = 0x155360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155364: 0xdfb00000
    ctx->pc = 0x155364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155368: 0x3e00008
    ctx->pc = 0x155368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15536Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155338u: goto label_155338;
            case 0x15535Cu: goto label_15535c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155370u;
}
