#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mot_free__16FaceAnimMgrClassFi
// Address: 0x1e63b0 - 0x1e640c
void mot_free__16FaceAnimMgrClassFi_0x1e63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mot_free__16FaceAnimMgrClassFi");


    ctx->pc = 0x1e63b0u;

    // 0x1e63b0: 0x27bdfff0
    ctx->pc = 0x1e63b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e63b4: 0x28a1002e
    ctx->pc = 0x1e63b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 46));
    // 0x1e63b8: 0x10200011
    ctx->pc = 0x1E63B8u;
    {
        const bool branch_taken_0x1e63b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E63BCu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1e63b8) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63C0u;
    // 0x1e63c0: 0x3c030050
    ctx->pc = 0x1e63c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e63c4: 0x52080
    ctx->pc = 0x1e63c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e63c8: 0x24630a80
    ctx->pc = 0x1e63c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2688));
    // 0x1e63cc: 0x642821
    ctx->pc = 0x1e63ccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e63d0: 0x8ca40000
    ctx->pc = 0x1e63d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e63d4: 0x2403ffff
    ctx->pc = 0x1e63d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e63d8: 0x14830003
    ctx->pc = 0x1E63D8u;
    {
        const bool branch_taken_0x1e63d8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E63DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1e63d8) {
            ctx->pc = 0x1E63E8u;
            goto label_1e63e8;
        }
    }
    ctx->pc = 0x1E63E0u;
    // 0x1e63e0: 0x10000007
    ctx->pc = 0x1E63E0u;
    {
        const bool branch_taken_0x1e63e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E63E4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1e63e0) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63E8u;
label_1e63e8:
    // 0x1e63e8: 0x10800005
    ctx->pc = 0x1E63E8u;
    {
        const bool branch_taken_0x1e63e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E63ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x1e63e8) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63F0u;
    // 0x1e63f0: 0x10830003
    ctx->pc = 0x1E63F0u;
    {
        const bool branch_taken_0x1e63f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e63f0) {
            ctx->pc = 0x1E6400u;
            goto label_1e6400;
        }
    }
    ctx->pc = 0x1E63F8u;
    // 0x1e63f8: 0xc0687c0
    ctx->pc = 0x1E63F8u;
    SET_GPR_U32(ctx, 31, 0x1E6400u);
    ctx->pc = 0x1E63FCu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6400u; }
        else if (ctx->pc != 0x1E6400u) { ctx->pc = 0x1E6400u; }
    }
    if (ctx->pc != 0x1E6400u) { return; }
    ctx->pc = 0x1E6400u;
label_1e6400:
    // 0x1e6400: 0x7bbf0000
    ctx->pc = 0x1e6400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6404: 0x3e00008
    ctx->pc = 0x1E6404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6408u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E63E8u: goto label_1e63e8;
            case 0x1E6400u: goto label_1e6400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E640Cu;
}
