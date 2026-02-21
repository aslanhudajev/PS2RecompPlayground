#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: call_sceGsSyncPath
// Address: 0x2a8138 - 0x2a818c
void call_sceGsSyncPath_0x2a8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8138u;

    // 0x2a8138: 0x27bdffd0
    ctx->pc = 0x2a8138u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a813c: 0xffbf0020
    ctx->pc = 0x2a813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8140: 0xffbe0010
    ctx->pc = 0x2a8140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a8144: 0x3a0f02d
    ctx->pc = 0x2a8144u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8148: 0xafc40000
    ctx->pc = 0x2a8148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a814c: 0xafc50004
    ctx->pc = 0x2a814cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a8150: 0x97c20004
    ctx->pc = 0x2a8150u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8154: 0x8fc40000
    ctx->pc = 0x2a8154u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a8158: 0x40282d
    ctx->pc = 0x2a8158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a815c: 0xc0b8338
    ctx->pc = 0x2A815Cu;
    SET_GPR_U32(ctx, 31, 0x2A8164u);
    ctx->pc = 0x2E0CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x2e0ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8164u; }
    }
    if (ctx->pc != 0x2A8164u) { return; }
    ctx->pc = 0x2A8164u;
    // 0x2a8164: 0x40182d
    ctx->pc = 0x2a8164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8168: 0x60102d
    ctx->pc = 0x2a8168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a816c: 0x10000001
    ctx->pc = 0x2A816Cu;
    {
        const bool branch_taken_0x2a816c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a816c) {
            ctx->pc = 0x2A8174u;
            goto label_2a8174;
        }
    }
    ctx->pc = 0x2A8174u;
label_2a8174:
    // 0x2a8174: 0x3c0e82d
    ctx->pc = 0x2a8174u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8178: 0xdfbf0020
    ctx->pc = 0x2a8178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a817c: 0xdfbe0010
    ctx->pc = 0x2a817cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8180: 0x27bd0030
    ctx->pc = 0x2a8180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8184: 0x3e00008
    ctx->pc = 0x2A8184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8174u: goto label_2a8174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A818Cu;
}
