#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setBgmVolume__13SoundMgrClassFi
// Address: 0x218160 - 0x21817c
void setBgmVolume__13SoundMgrClassFi_0x218160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setBgmVolume__13SoundMgrClassFi");


    ctx->pc = 0x218160u;

    // 0x218160: 0x27bdfff0
    ctx->pc = 0x218160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218164: 0x7fbf0000
    ctx->pc = 0x218164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x218168: 0xc07a6c0
    ctx->pc = 0x218168u;
    SET_GPR_U32(ctx, 31, 0x218170u);
    ctx->pc = 0x21816Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    ctx->pc = 0x1E9B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXT_SetOutVol__FP9_adx_talki_0x1e9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218170u; }
        else if (ctx->pc != 0x218170u) { ctx->pc = 0x218170u; }
    }
    if (ctx->pc != 0x218170u) { return; }
    ctx->pc = 0x218170u;
    // 0x218170: 0x7bbf0000
    ctx->pc = 0x218170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218174: 0x3e00008
    ctx->pc = 0x218174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21817Cu;
}
