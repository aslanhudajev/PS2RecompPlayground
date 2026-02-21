#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: defMain
// Address: 0x1191d0 - 0x1191e8
void defMain_0x1191d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1191d0u;

    // 0x1191d0: 0x27bdfff0
    ctx->pc = 0x1191d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1191d4: 0xffbf0000
    ctx->pc = 0x1191d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1191d8:
    // 0x1191d8: 0xc04638c
    ctx->pc = 0x1191D8u;
    SET_GPR_U32(ctx, 31, 0x1191E0u);
    ctx->pc = 0x118E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x118e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1191E0u; }
    }
    if (ctx->pc != 0x1191E0u) { return; }
    ctx->pc = 0x1191E0u;
    // 0x1191e0: 0x1000fffd
    ctx->pc = 0x1191E0u;
    {
        const bool branch_taken_0x1191e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1191e0) {
            ctx->pc = 0x1191D8u;
            goto label_1191d8;
        }
    }
    ctx->pc = 0x1191E8u;
}
