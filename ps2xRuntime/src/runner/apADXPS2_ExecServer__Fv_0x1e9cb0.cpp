#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: apADXPS2_ExecServer__Fv
// Address: 0x1e9cb0 - 0x1e9cd8
void apADXPS2_ExecServer__Fv_0x1e9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("apADXPS2_ExecServer__Fv");


    ctx->pc = 0x1e9cb0u;

    // 0x1e9cb0: 0x27bdfff0
    ctx->pc = 0x1e9cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e9cb4: 0x7fbf0000
    ctx->pc = 0x1e9cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e9cb8: 0x8f838d08
    ctx->pc = 0x1e9cb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937864)));
    // 0x1e9cbc: 0x10600003
    ctx->pc = 0x1E9CBCu;
    {
        const bool branch_taken_0x1e9cbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9cbc) {
            ctx->pc = 0x1E9CCCu;
            goto label_1e9ccc;
        }
    }
    ctx->pc = 0x1E9CC4u;
    // 0x1e9cc4: 0xc05b5d6
    ctx->pc = 0x1E9CC4u;
    SET_GPR_U32(ctx, 31, 0x1E9CCCu);
    ctx->pc = 0x16D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPS2_ExecServer_0x16d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9CCCu; }
        else if (ctx->pc != 0x1E9CCCu) { ctx->pc = 0x1E9CCCu; }
    }
    if (ctx->pc != 0x1E9CCCu) { return; }
    ctx->pc = 0x1E9CCCu;
label_1e9ccc:
    // 0x1e9ccc: 0x7bbf0000
    ctx->pc = 0x1e9cccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9cd0: 0x3e00008
    ctx->pc = 0x1E9CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9CD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9CCCu: goto label_1e9ccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9CD8u;
}
