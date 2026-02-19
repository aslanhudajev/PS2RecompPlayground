#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalAddC
// Address: 0x2b5c78 - 0x2b5cc4
void evalAddC_0x2b5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5c78u;

    // 0x2b5c78: 0x27bdffd0
    ctx->pc = 0x2b5c78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5c7c: 0xffbf0020
    ctx->pc = 0x2b5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5c80: 0xffb10010
    ctx->pc = 0x2b5c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b5c84: 0xffb00000
    ctx->pc = 0x2b5c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5c88: 0x80802d
    ctx->pc = 0x2b5c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c8c: 0xc0ad05e
    ctx->pc = 0x2B5C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B5C94u);
    ctx->pc = 0x2B5C90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5C94u; }
    }
    if (ctx->pc != 0x2B5C94u) { return; }
    ctx->pc = 0x2B5C94u;
    // 0x2b5c94: 0x14400007
    ctx->pc = 0x2B5C94u;
    {
        const bool branch_taken_0x2b5c94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B5C98u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2b5c94) {
            ctx->pc = 0x2B5CB4u;
            goto label_2b5cb4;
        }
    }
    ctx->pc = 0x2B5C9Cu;
    // 0x2b5c9c: 0xc0bf306
    ctx->pc = 0x2B5C9Cu;
    SET_GPR_U32(ctx, 31, 0x2B5CA4u);
    ctx->pc = 0x2B5CA0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5CA4u; }
    }
    if (ctx->pc != 0x2B5CA4u) { return; }
    ctx->pc = 0x2B5CA4u;
    // 0x2b5ca4: 0x2021021
    ctx->pc = 0x2b5ca4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b5ca8: 0xa0510000
    ctx->pc = 0x2b5ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x2b5cac: 0xa0400001
    ctx->pc = 0x2b5cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5cb0: 0xdfbf0020
    ctx->pc = 0x2b5cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b5cb4:
    // 0x2b5cb4: 0xdfb10010
    ctx->pc = 0x2b5cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5cb8: 0xdfb00000
    ctx->pc = 0x2b5cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5cbc: 0x3e00008
    ctx->pc = 0x2B5CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5CC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5CB4u: goto label_2b5cb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5CC4u;
}
