#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill
// Address: 0x303cf8 - 0x303d20
void kill_0x303cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303cf8u;

    // 0x303cf8: 0x27bdfff0
    ctx->pc = 0x303cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303cfc: 0x24020001
    ctx->pc = 0x303cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x303d00: 0x14820003
    ctx->pc = 0x303D00u;
    {
        const bool branch_taken_0x303d00 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x303D04u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x303d00) {
            ctx->pc = 0x303D10u;
            goto label_303d10;
        }
    }
    ctx->pc = 0x303D08u;
    // 0x303d08: 0xc0c0c80
    ctx->pc = 0x303D08u;
    SET_GPR_U32(ctx, 31, 0x303D10u);
    ctx->pc = 0x303D0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303200u;
    {
        const uint32_t __entryPc = ctx->pc;
        Exit_0x303200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303D10u; }
    }
    if (ctx->pc != 0x303D10u) { return; }
    ctx->pc = 0x303D10u;
label_303d10:
    // 0x303d10: 0xdfbf0000
    ctx->pc = 0x303d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303d14: 0x102d
    ctx->pc = 0x303d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303d18: 0x3e00008
    ctx->pc = 0x303D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303D10u: goto label_303d10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x303D20u;
}
