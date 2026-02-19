#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: defMain
// Address: 0x2dd730 - 0x2dd748
void defMain_0x2dd730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd730u;

    // 0x2dd730: 0x27bdfff0
    ctx->pc = 0x2dd730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd734: 0xffbf0000
    ctx->pc = 0x2dd734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dd738:
    // 0x2dd738: 0xc0b74d4
    ctx->pc = 0x2DD738u;
    SET_GPR_U32(ctx, 31, 0x2DD740u);
    ctx->pc = 0x2DD350u;
    {
        const uint32_t __entryPc = ctx->pc;
        switchThread_0x2dd350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD740u; }
    }
    if (ctx->pc != 0x2DD740u) { return; }
    ctx->pc = 0x2DD740u;
    // 0x2dd740: 0x1000fffd
    ctx->pc = 0x2DD740u;
    {
        const bool branch_taken_0x2dd740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dd740) {
            ctx->pc = 0x2DD738u;
            goto label_2dd738;
        }
    }
    ctx->pc = 0x2DD748u;
}
