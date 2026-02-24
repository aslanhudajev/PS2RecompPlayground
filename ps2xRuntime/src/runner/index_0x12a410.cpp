#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: index
// Address: 0x12a410 - 0x12a42c
void index_0x12a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a410u;

    // 0x12a410: 0x27bdfff0
    ctx->pc = 0x12a410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a414: 0xffbf0000
    ctx->pc = 0x12a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12a418: 0xc04adb2
    ctx->pc = 0x12A418u;
    SET_GPR_U32(ctx, 31, 0x12A420u);
    ctx->pc = 0x12B6C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strchr_0x12b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A420u; }
    }
    if (ctx->pc != 0x12A420u) { return; }
    ctx->pc = 0x12A420u;
    // 0x12a420: 0xdfbf0000
    ctx->pc = 0x12a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a424: 0x3e00008
    ctx->pc = 0x12A424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A42Cu;
}
