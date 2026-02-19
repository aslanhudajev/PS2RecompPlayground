#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaPageHandler
// Address: 0x2a8820 - 0x2a8898
void pbDmaPageHandler_0x2a8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8820u;

    // 0x2a8820: 0x27bdffd0
    ctx->pc = 0x2a8820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8824: 0xffbf0020
    ctx->pc = 0x2a8824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8828: 0xffbe0010
    ctx->pc = 0x2a8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a882c: 0x3a0f02d
    ctx->pc = 0x2a882cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8830: 0xafc40000
    ctx->pc = 0x2a8830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a8834: 0x0
    ctx->pc = 0x2a8834u;
    // NOP
label_2a8838:
    // 0x2a8838: 0x42000039
    ctx->pc = 0x2a8838u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2a883c: 0x40f
    ctx->pc = 0x2a883cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2a8840: 0x40026000
    ctx->pc = 0x2a8840u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2a8844: 0x40182d
    ctx->pc = 0x2a8844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8848: 0xafc30004
    ctx->pc = 0x2a8848u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x2a884c: 0x8fc20004
    ctx->pc = 0x2a884cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8850: 0x3c030001
    ctx->pc = 0x2a8850u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2a8854: 0x431024
    ctx->pc = 0x2a8854u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8858: 0x14400003
    ctx->pc = 0x2A8858u;
    {
        const bool branch_taken_0x2a8858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8858) {
            ctx->pc = 0x2A8868u;
            goto label_2a8868;
        }
    }
    ctx->pc = 0x2A8860u;
    // 0x2a8860: 0x10000003
    ctx->pc = 0x2A8860u;
    {
        const bool branch_taken_0x2a8860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8860) {
            ctx->pc = 0x2A8870u;
            goto label_2a8870;
        }
    }
    ctx->pc = 0x2A8868u;
label_2a8868:
    // 0x2a8868: 0x1000fff3
    ctx->pc = 0x2A8868u;
    {
        const bool branch_taken_0x2a8868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8868) {
            ctx->pc = 0x2A8838u;
            goto label_2a8838;
        }
    }
    ctx->pc = 0x2A8870u;
label_2a8870:
    // 0x2a8870: 0x8fc40000
    ctx->pc = 0x2a8870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a8874: 0xc0aa172
    ctx->pc = 0x2A8874u;
    SET_GPR_U32(ctx, 31, 0x2A887Cu);
    ctx->pc = 0x2A85C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbDmaPageHandler_0x2a85c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A887Cu; }
    }
    if (ctx->pc != 0x2A887Cu) { return; }
    ctx->pc = 0x2A887Cu;
    // 0x2a887c: 0x42000038
    ctx->pc = 0x2a887cu;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2a8880: 0x3c0e82d
    ctx->pc = 0x2a8880u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8884: 0xdfbf0020
    ctx->pc = 0x2a8884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8888: 0xdfbe0010
    ctx->pc = 0x2a8888u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a888c: 0x27bd0030
    ctx->pc = 0x2a888cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8890: 0x3e00008
    ctx->pc = 0x2A8890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8838u: goto label_2a8838;
            case 0x2A8868u: goto label_2a8868;
            case 0x2A8870u: goto label_2a8870;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8898u;
}
