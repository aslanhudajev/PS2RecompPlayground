#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExpToLevel
// Address: 0x234830 - 0x234880
void ExpToLevel_0x234830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234830u;

    // 0x234830: 0x27bdffd0
    ctx->pc = 0x234830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234834: 0xffbf0020
    ctx->pc = 0x234834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234838: 0xffb10010
    ctx->pc = 0x234838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23483c: 0xffb00000
    ctx->pc = 0x23483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234840: 0x80882d
    ctx->pc = 0x234840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234844: 0x24100063
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 99));
label_234848:
    // 0x234848: 0xc08d1fc
    ctx->pc = 0x234848u;
    SET_GPR_U32(ctx, 31, 0x234850u);
    ctx->pc = 0x23484Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234850u; }
    }
    if (ctx->pc != 0x234850u) { return; }
    ctx->pc = 0x234850u;
    // 0x234850: 0x222102a
    ctx->pc = 0x234850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x234854: 0x54400003
    ctx->pc = 0x234854u;
    {
        const bool branch_taken_0x234854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x234854) {
            ctx->pc = 0x234858u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->pc = 0x234864u;
            goto label_234864;
        }
    }
    ctx->pc = 0x23485Cu;
    // 0x23485c: 0x10000003
    ctx->pc = 0x23485Cu;
    {
        const bool branch_taken_0x23485c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234860u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23485c) {
            ctx->pc = 0x23486Cu;
            goto label_23486c;
        }
    }
    ctx->pc = 0x234864u;
label_234864:
    // 0x234864: 0x1e00fff8
    ctx->pc = 0x234864u;
    {
        const bool branch_taken_0x234864 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x234868u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x234864) {
            ctx->pc = 0x234848u;
            goto label_234848;
        }
    }
    ctx->pc = 0x23486Cu;
label_23486c:
    // 0x23486c: 0xdfbf0020
    ctx->pc = 0x23486cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234870: 0xdfb10010
    ctx->pc = 0x234870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234874: 0xdfb00000
    ctx->pc = 0x234874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234878: 0x3e00008
    ctx->pc = 0x234878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23487Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234848u: goto label_234848;
            case 0x234864u: goto label_234864;
            case 0x23486Cu: goto label_23486c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234880u;
}
