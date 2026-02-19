#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimDataFree
// Address: 0x211448 - 0x211488
void AnimDataFree_0x211448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x211448u;

    // 0x211448: 0xac800004
    ctx->pc = 0x211448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21144c: 0x3c02003c
    ctx->pc = 0x21144cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x211450: 0x8c42cb70
    ctx->pc = 0x211450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
    // 0x211454: 0x822023
    ctx->pc = 0x211454u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211458: 0x3c02cccc
    ctx->pc = 0x211458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52428 << 16));
    // 0x21145c: 0x3442cccd
    ctx->pc = 0x21145cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 52429));
    // 0x211460: 0x822018
    ctx->pc = 0x211460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x211464: 0x42143
    ctx->pc = 0x211464u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x211468: 0x4800005
    ctx->pc = 0x211468u;
    {
        const bool branch_taken_0x211468 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21146Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x211468) {
            ctx->pc = 0x211480u;
            goto label_211480;
        }
    }
    ctx->pc = 0x211470u;
    // 0x211470: 0x8c62f4c0
    ctx->pc = 0x211470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964416)));
    // 0x211474: 0x82102a
    ctx->pc = 0x211474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x211478: 0x54400001
    ctx->pc = 0x211478u;
    {
        const bool branch_taken_0x211478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211478) {
            ctx->pc = 0x21147Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294964416), GPR_U32(ctx, 4));
            ctx->pc = 0x211480u;
            goto label_211480;
        }
    }
    ctx->pc = 0x211480u;
label_211480:
    // 0x211480: 0x3e00008
    ctx->pc = 0x211480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211480u: goto label_211480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211488u;
}
