#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dmVector
// Address: 0x160178 - 0x160194
void _dmVector_0x160178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dmVector");


    ctx->pc = 0x160178u;

    // 0x160178: 0x27bdfff0
    ctx->pc = 0x160178u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16017c: 0xffbf0000
    ctx->pc = 0x16017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160180: 0xc0584d2
    ctx->pc = 0x160180u;
    SET_GPR_U32(ctx, 31, 0x160188u);
    ctx->pc = 0x160184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x161348u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x161348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160188u; }
        else if (ctx->pc != 0x160188u) { ctx->pc = 0x160188u; }
    }
    if (ctx->pc != 0x160188u) { return; }
    ctx->pc = 0x160188u;
    // 0x160188: 0xdfbf0000
    ctx->pc = 0x160188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16018c: 0x3e00008
    ctx->pc = 0x16018Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160194u;
}
