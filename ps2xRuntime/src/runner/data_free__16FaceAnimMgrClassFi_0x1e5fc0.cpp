#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: data_free__16FaceAnimMgrClassFi
// Address: 0x1e5fc0 - 0x1e601c
void data_free__16FaceAnimMgrClassFi_0x1e5fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("data_free__16FaceAnimMgrClassFi");


    ctx->pc = 0x1e5fc0u;

    // 0x1e5fc0: 0x27bdfff0
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5fc4: 0x28a10072
    ctx->pc = 0x1e5fc4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 114));
    // 0x1e5fc8: 0x10200011
    ctx->pc = 0x1E5FC8u;
    {
        const bool branch_taken_0x1e5fc8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5FCCu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1e5fc8) {
            ctx->pc = 0x1E6010u;
            goto label_1e6010;
        }
    }
    ctx->pc = 0x1E5FD0u;
    // 0x1e5fd0: 0x3c030050
    ctx->pc = 0x1e5fd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e5fd4: 0x52080
    ctx->pc = 0x1e5fd4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5fd8: 0x246308b0
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2224));
    // 0x1e5fdc: 0x642821
    ctx->pc = 0x1e5fdcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5fe0: 0x8ca40000
    ctx->pc = 0x1e5fe0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5fe4: 0x2403ffff
    ctx->pc = 0x1e5fe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5fe8: 0x14830003
    ctx->pc = 0x1E5FE8u;
    {
        const bool branch_taken_0x1e5fe8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E5FECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1e5fe8) {
            ctx->pc = 0x1E5FF8u;
            goto label_1e5ff8;
        }
    }
    ctx->pc = 0x1E5FF0u;
    // 0x1e5ff0: 0x10000007
    ctx->pc = 0x1E5FF0u;
    {
        const bool branch_taken_0x1e5ff0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5FF4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1e5ff0) {
            ctx->pc = 0x1E6010u;
            goto label_1e6010;
        }
    }
    ctx->pc = 0x1E5FF8u;
label_1e5ff8:
    // 0x1e5ff8: 0x10800005
    ctx->pc = 0x1E5FF8u;
    {
        const bool branch_taken_0x1e5ff8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5FFCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1e5ff8) {
            ctx->pc = 0x1E6010u;
            goto label_1e6010;
        }
    }
    ctx->pc = 0x1E6000u;
    // 0x1e6000: 0x10830003
    ctx->pc = 0x1E6000u;
    {
        const bool branch_taken_0x1e6000 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e6000) {
            ctx->pc = 0x1E6010u;
            goto label_1e6010;
        }
    }
    ctx->pc = 0x1E6008u;
    // 0x1e6008: 0xc0687c0
    ctx->pc = 0x1E6008u;
    SET_GPR_U32(ctx, 31, 0x1E6010u);
    ctx->pc = 0x1E600Cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6010u; }
        else if (ctx->pc != 0x1E6010u) { ctx->pc = 0x1E6010u; }
    }
    if (ctx->pc != 0x1E6010u) { return; }
    ctx->pc = 0x1E6010u;
label_1e6010:
    // 0x1e6010: 0x7bbf0000
    ctx->pc = 0x1e6010u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6014: 0x3e00008
    ctx->pc = 0x1E6014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6018u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5FF8u: goto label_1e5ff8;
            case 0x1E6010u: goto label_1e6010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E601Cu;
}
