#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill
// Address: 0x10e9d0 - 0x10e9f8
void kill_0x10e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e9d0u;

    // 0x10e9d0: 0x27bdfff0
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e9d4: 0x24020001
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e9d8: 0x14820003
    ctx->pc = 0x10E9D8u;
    {
        const bool branch_taken_0x10e9d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x10E9DCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x10e9d8) {
            ctx->pc = 0x10E9E8u;
            goto label_10e9e8;
        }
    }
    ctx->pc = 0x10E9E0u;
    // 0x10e9e0: 0xc0437b0
    ctx->pc = 0x10E9E0u;
    SET_GPR_U32(ctx, 31, 0x10E9E8u);
    ctx->pc = 0x10E9E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x10dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E9E8u; }
    }
    if (ctx->pc != 0x10E9E8u) { return; }
    ctx->pc = 0x10E9E8u;
label_10e9e8:
    // 0x10e9e8: 0xdfbf0000
    ctx->pc = 0x10e9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e9ec: 0x102d
    ctx->pc = 0x10e9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e9f0: 0x3e00008
    ctx->pc = 0x10E9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10E9E8u: goto label_10e9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10E9F8u;
}
