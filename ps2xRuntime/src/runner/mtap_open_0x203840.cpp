#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mtap_open
// Address: 0x203840 - 0x203890
void mtap_open_0x203840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203840u;

    // 0x203840: 0x27bdffe0
    ctx->pc = 0x203840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203844: 0xffbf0010
    ctx->pc = 0x203844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x203848: 0xffb00000
    ctx->pc = 0x203848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20384c: 0x3c020031
    ctx->pc = 0x20384cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x203850: 0x24420ee0
    ctx->pc = 0x203850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3808));
    // 0x203854: 0x41880
    ctx->pc = 0x203854u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x203858: 0x628021
    ctx->pc = 0x203858u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20385c: 0x8e020000
    ctx->pc = 0x20385cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x203860: 0x14400006
    ctx->pc = 0x203860u;
    {
        const bool branch_taken_0x203860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203864u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x203860) {
            ctx->pc = 0x20387Cu;
            goto label_20387c;
        }
    }
    ctx->pc = 0x203868u;
    // 0x203868: 0xc0b945a
    ctx->pc = 0x203868u;
    SET_GPR_U32(ctx, 31, 0x203870u);
    ctx->pc = 0x2E5168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapPortOpen_0x2e5168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203870u; }
    }
    if (ctx->pc != 0x203870u) { return; }
    ctx->pc = 0x203870u;
    // 0x203870: 0x40182d
    ctx->pc = 0x203870u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203874: 0x24020001
    ctx->pc = 0x203874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x203878: 0xae020000
    ctx->pc = 0x203878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20387c:
    // 0x20387c: 0x60102d
    ctx->pc = 0x20387cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203880: 0xdfbf0010
    ctx->pc = 0x203880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203884: 0xdfb00000
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203888: 0x3e00008
    ctx->pc = 0x203888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20388Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20387Cu: goto label_20387c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203890u;
}
