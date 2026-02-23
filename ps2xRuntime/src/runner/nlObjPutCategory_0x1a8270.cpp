#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutCategory
// Address: 0x1a8270 - 0x1a82dc
void nlObjPutCategory_0x1a8270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutCategory");


    ctx->pc = 0x1a8270u;

    // 0x1a8270: 0x27bdfff0
    ctx->pc = 0x1a8270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8274: 0x7fbf0000
    ctx->pc = 0x1a8274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a8278: 0x70a03628
    ctx->pc = 0x1a8278u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a827c: 0x8c850000
    ctx->pc = 0x1a827cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8280: 0x24031000
    ctx->pc = 0x1a8280u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a8284: 0x14a30012
    ctx->pc = 0x1A8284u;
    {
        const bool branch_taken_0x1a8284 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a8284) {
            ctx->pc = 0x1A82D0u;
            goto label_1a82d0;
        }
    }
    ctx->pc = 0x1A828Cu;
    // 0x1a828c: 0x8c83002c
    ctx->pc = 0x1a828cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a8290: 0x3c020020
    ctx->pc = 0x1a8290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x1a8294: 0x31880
    ctx->pc = 0x1a8294u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a8298: 0x2463000c
    ctx->pc = 0x1a8298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x1a829c: 0x31880
    ctx->pc = 0x1a829cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a82a0: 0x831821
    ctx->pc = 0x1a82a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a82a4: 0x8c63011c
    ctx->pc = 0x1a82a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1a82a8: 0x621024
    ctx->pc = 0x1a82a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a82ac: 0x10400006
    ctx->pc = 0x1A82ACu;
    {
        const bool branch_taken_0x1a82ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A82B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
        if (branch_taken_0x1a82ac) {
            ctx->pc = 0x1A82C8u;
            goto label_1a82c8;
        }
    }
    ctx->pc = 0x1A82B4u;
    // 0x1a82b4: 0x44826000
    ctx->pc = 0x1a82b4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1a82b8: 0xc06a1d8
    ctx->pc = 0x1A82B8u;
    SET_GPR_U32(ctx, 31, 0x1A82C0u);
    ctx->pc = 0x1A82BCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A8760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutEntry_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82C0u; }
        else if (ctx->pc != 0x1A82C0u) { ctx->pc = 0x1A82C0u; }
    }
    if (ctx->pc != 0x1A82C0u) { return; }
    ctx->pc = 0x1A82C0u;
    // 0x1a82c0: 0x10000004
    ctx->pc = 0x1A82C0u;
    {
        const bool branch_taken_0x1a82c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A82C4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a82c0) {
            ctx->pc = 0x1A82D4u;
            goto label_1a82d4;
        }
    }
    ctx->pc = 0x1A82C8u;
label_1a82c8:
    // 0x1a82c8: 0xc06a0d4
    ctx->pc = 0x1A82C8u;
    SET_GPR_U32(ctx, 31, 0x1A82D0u);
    ctx->pc = 0x1A8350u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPut_i_0x1a8350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A82D0u; }
        else if (ctx->pc != 0x1A82D0u) { ctx->pc = 0x1A82D0u; }
    }
    if (ctx->pc != 0x1A82D0u) { return; }
    ctx->pc = 0x1A82D0u;
label_1a82d0:
    // 0x1a82d0: 0x7bbf0000
    ctx->pc = 0x1a82d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a82d4:
    // 0x1a82d4: 0x3e00008
    ctx->pc = 0x1A82D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A82D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A82C8u: goto label_1a82c8;
            case 0x1A82D0u: goto label_1a82d0;
            case 0x1A82D4u: goto label_1a82d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A82DCu;
}
