#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_up
// Address: 0x206f98 - 0x206fb8
void new_up_0x206f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206f98u;

    // 0x206f98: 0x27bdfff0
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206f9c: 0xffbf0000
    ctx->pc = 0x206f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206fa0: 0x80282d
    ctx->pc = 0x206fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa4: 0xc081b98
    ctx->pc = 0x206FA4u;
    SET_GPR_U32(ctx, 31, 0x206FACu);
    ctx->pc = 0x206FA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206FACu; }
    }
    if (ctx->pc != 0x206FACu) { return; }
    ctx->pc = 0x206FACu;
    // 0x206fac: 0xdfbf0000
    ctx->pc = 0x206facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206fb0: 0x3e00008
    ctx->pc = 0x206FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206FB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206FB8u;
}
