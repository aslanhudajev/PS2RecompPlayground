#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EmptyTempTrack
// Address: 0x222448 - 0x22248c
void EmptyTempTrack_0x222448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222448u;

    // 0x222448: 0x182d
    ctx->pc = 0x222448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22244c: 0x3c020032
    ctx->pc = 0x22244cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222450: 0x2446ff28
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294967080));
    // 0x222454: 0x24040038
    ctx->pc = 0x222454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 56));
    // 0x222458: 0x642818
    ctx->pc = 0x222458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22245c: 0x0
    ctx->pc = 0x22245cu;
    // NOP
label_222460:
    // 0x222460: 0xa61021
    ctx->pc = 0x222460u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x222464: 0x8c420004
    ctx->pc = 0x222464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x222468: 0x54400003
    ctx->pc = 0x222468u;
    {
        const bool branch_taken_0x222468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x222468) {
            ctx->pc = 0x22246Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x222478u;
            goto label_222478;
        }
    }
    ctx->pc = 0x222470u;
    // 0x222470: 0x3e00008
    ctx->pc = 0x222470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222474u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222460u: goto label_222460;
            case 0x222478u: goto label_222478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222478u;
label_222478:
    // 0x222478: 0x28620020
    ctx->pc = 0x222478u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x22247c: 0x1440fff8
    ctx->pc = 0x22247Cu;
    {
        const bool branch_taken_0x22247c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222480u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x22247c) {
            ctx->pc = 0x222460u;
            goto label_222460;
        }
    }
    ctx->pc = 0x222484u;
    // 0x222484: 0x3e00008
    ctx->pc = 0x222484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222488u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222460u: goto label_222460;
            case 0x222478u: goto label_222478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22248Cu;
}
