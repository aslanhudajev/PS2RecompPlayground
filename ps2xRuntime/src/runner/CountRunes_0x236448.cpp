#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CountRunes
// Address: 0x236448 - 0x23648c
void CountRunes_0x236448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236448u;

    // 0x236448: 0x24022b00
    ctx->pc = 0x236448u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x23644c: 0x822018
    ctx->pc = 0x23644cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236450: 0x3c020032
    ctx->pc = 0x236450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x236454: 0x24421bc0
    ctx->pc = 0x236454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x236458: 0x822021
    ctx->pc = 0x236458u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23645c: 0x282d
    ctx->pc = 0x23645cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236460: 0x182d
    ctx->pc = 0x236460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236464: 0x94841a26
    ctx->pc = 0x236464u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6694)));
label_236468:
    // 0x236468: 0x641007
    ctx->pc = 0x236468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x23646c: 0x30420001
    ctx->pc = 0x23646cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x236470: 0xa22821
    ctx->pc = 0x236470u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x236474: 0x24630001
    ctx->pc = 0x236474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x236478: 0x2862000d
    ctx->pc = 0x236478u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 13));
    // 0x23647c: 0x1440fffa
    ctx->pc = 0x23647Cu;
    {
        const bool branch_taken_0x23647c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23647c) {
            ctx->pc = 0x236468u;
            goto label_236468;
        }
    }
    ctx->pc = 0x236484u;
    // 0x236484: 0x3e00008
    ctx->pc = 0x236484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236488u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236468u: goto label_236468;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23648Cu;
}
