#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_down
// Address: 0x206fb8 - 0x206fd8
void new_down_0x206fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206fb8u;

    // 0x206fb8: 0x27bdfff0
    ctx->pc = 0x206fb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206fbc: 0xffbf0000
    ctx->pc = 0x206fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206fc0: 0x80282d
    ctx->pc = 0x206fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fc4: 0xc081b98
    ctx->pc = 0x206FC4u;
    SET_GPR_U32(ctx, 31, 0x206FCCu);
    ctx->pc = 0x206FC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FCCu; }
    }
    if (ctx->pc != 0x206FCCu) { return; }
    ctx->pc = 0x206FCCu;
    // 0x206fcc: 0xdfbf0000
    ctx->pc = 0x206fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206fd0: 0x3e00008
    ctx->pc = 0x206FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206FD8u;
}
