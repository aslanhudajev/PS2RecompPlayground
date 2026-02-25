#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: defMain
// Address: 0x188130 - 0x188148
void defMain_0x188130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("defMain_0x188130");
#endif

    ctx->pc = 0x188130u;

    // 0x188130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188138:
    // 0x188138: 0xc062138  jal         func_1884E0
    ctx->pc = 0x188138u;
    SET_GPR_U32(ctx, 31, 0x188140u);
    ctx->pc = 0x1884E0u;
    if (runtime->hasFunction(0x1884E0u)) {
        auto targetFn = runtime->lookupFunction(0x1884E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188140u; }
        if (ctx->pc != 0x188140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x1884e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188140u; }
        if (ctx->pc != 0x188140u) { return; }
    }
    ctx->pc = 0x188140u;
    // 0x188140: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x188140u;
    {
        const bool branch_taken_0x188140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188140) {
            ctx->pc = 0x188138u;
            goto label_188138;
        }
    }
    ctx->pc = 0x188148u;
}
