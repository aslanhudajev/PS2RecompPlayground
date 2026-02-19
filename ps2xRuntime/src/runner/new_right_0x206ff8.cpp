#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_right
// Address: 0x206ff8 - 0x207018
void new_right_0x206ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206ff8u;

    // 0x206ff8: 0x27bdfff0
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206ffc: 0xffbf0000
    ctx->pc = 0x206ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207000: 0x80282d
    ctx->pc = 0x207000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207004: 0xc081b98
    ctx->pc = 0x207004u;
    SET_GPR_U32(ctx, 31, 0x20700Cu);
    ctx->pc = 0x207008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20700Cu; }
    }
    if (ctx->pc != 0x20700Cu) { return; }
    ctx->pc = 0x20700Cu;
    // 0x20700c: 0xdfbf0000
    ctx->pc = 0x20700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207010: 0x3e00008
    ctx->pc = 0x207010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207014u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207018u;
}
