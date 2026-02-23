#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetNumDecPool
// Address: 0x18d000 - 0x18d01c
void mwPlyGetNumDecPool_0x18d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetNumDecPool");


    ctx->pc = 0x18d000u;

    // 0x18d000: 0x27bdfff0
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18d004: 0xffbf0000
    ctx->pc = 0x18d004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18d008: 0xc06639a
    ctx->pc = 0x18D008u;
    SET_GPR_U32(ctx, 31, 0x18D010u);
    ctx->pc = 0x18D00Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x198E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_GetNumFrm_0x198e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D010u; }
        else if (ctx->pc != 0x18D010u) { ctx->pc = 0x18D010u; }
    }
    if (ctx->pc != 0x18D010u) { return; }
    ctx->pc = 0x18D010u;
    // 0x18d010: 0xdfbf0000
    ctx->pc = 0x18d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d014: 0x3e00008
    ctx->pc = 0x18D014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D018u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D01Cu;
}
