#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DisableDmac
// Address: 0x1553d8 - 0x155440
void DisableDmac_0x1553d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DisableDmac");


    ctx->pc = 0x1553d8u;

    // 0x1553d8: 0x27bdffd0
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1553dc: 0xffb10010
    ctx->pc = 0x1553dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1553e0: 0xffbf0020
    ctx->pc = 0x1553e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1553e4: 0x80882d
    ctx->pc = 0x1553e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553e8: 0xffb00000
    ctx->pc = 0x1553e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1553ec: 0x40106000
    ctx->pc = 0x1553ecu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x1553f0: 0x3c020001
    ctx->pc = 0x1553f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1553f4: 0x2028024
    ctx->pc = 0x1553f4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1553f8: 0x12000003
    ctx->pc = 0x1553F8u;
    {
        const bool branch_taken_0x1553f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1553f8) {
            ctx->pc = 0x155408u;
            goto label_155408;
        }
    }
    ctx->pc = 0x155400u;
    // 0x155400: 0xc05725c
    ctx->pc = 0x155400u;
    SET_GPR_U32(ctx, 31, 0x155408u);
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155408u; }
        else if (ctx->pc != 0x155408u) { ctx->pc = 0x155408u; }
    }
    if (ctx->pc != 0x155408u) { return; }
    ctx->pc = 0x155408u;
label_155408:
    // 0x155408: 0xc055194
    ctx->pc = 0x155408u;
    SET_GPR_U32(ctx, 31, 0x155410u);
    ctx->pc = 0x15540Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__DisableDmac_0x154650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155410u; }
        else if (ctx->pc != 0x155410u) { ctx->pc = 0x155410u; }
    }
    if (ctx->pc != 0x155410u) { return; }
    ctx->pc = 0x155410u;
    // 0x155410: 0x40882d
    ctx->pc = 0x155410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155414: 0xf
    ctx->pc = 0x155414u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x155418: 0x12000004
    ctx->pc = 0x155418u;
    {
        const bool branch_taken_0x155418 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x15541Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x155418) {
            ctx->pc = 0x15542Cu;
            goto label_15542c;
        }
    }
    ctx->pc = 0x155420u;
    // 0x155420: 0xc05726e
    ctx->pc = 0x155420u;
    SET_GPR_U32(ctx, 31, 0x155428u);
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155428u; }
        else if (ctx->pc != 0x155428u) { ctx->pc = 0x155428u; }
    }
    if (ctx->pc != 0x155428u) { return; }
    ctx->pc = 0x155428u;
    // 0x155428: 0x220102d
    ctx->pc = 0x155428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15542c:
    // 0x15542c: 0xdfbf0020
    ctx->pc = 0x15542cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155430: 0xdfb10010
    ctx->pc = 0x155430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155434: 0xdfb00000
    ctx->pc = 0x155434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155438: 0x3e00008
    ctx->pc = 0x155438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15543Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155408u: goto label_155408;
            case 0x15542Cu: goto label_15542c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155440u;
}
