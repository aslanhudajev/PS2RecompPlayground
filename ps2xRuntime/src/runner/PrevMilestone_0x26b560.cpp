#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevMilestone
// Address: 0x26b560 - 0x26b5c8
void PrevMilestone_0x26b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b560u;

    // 0x26b560: 0x80382d
    ctx->pc = 0x26b560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b564: 0x3c020034
    ctx->pc = 0x26b564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b568: 0x8c44c380
    ctx->pc = 0x26b568u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x26b56c: 0x3c030034
    ctx->pc = 0x26b56cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26b570: 0x2463eb60
    ctx->pc = 0x26b570u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x26b574: 0x240201a0
    ctx->pc = 0x26b574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b578: 0xe21018
    ctx->pc = 0x26b578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b57c: 0x431021
    ctx->pc = 0x26b57cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b580: 0x8c460118
    ctx->pc = 0x26b580u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x26b584: 0x4c20001
    ctx->pc = 0x26B584u;
    {
        const bool branch_taken_0x26b584 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x26b584) {
            ctx->pc = 0x26B588u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->pc = 0x26B58Cu;
            goto label_26b58c;
        }
    }
    ctx->pc = 0x26B58Cu;
label_26b58c:
    // 0x26b58c: 0x1880000c
    ctx->pc = 0x26B58Cu;
    {
        const bool branch_taken_0x26b58c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x26B590u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 112));
        if (branch_taken_0x26b58c) {
            ctx->pc = 0x26B5C0u;
            goto label_26b5c0;
        }
    }
    ctx->pc = 0x26B594u;
    // 0x26b594: 0xc52818
    ctx->pc = 0x26b594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b598: 0x3c020034
    ctx->pc = 0x26b598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b59c: 0x24428b80
    ctx->pc = 0x26b59cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x26b5a0: 0x3c040034
    ctx->pc = 0x26b5a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x26b5a4: 0x2484eb60
    ctx->pc = 0x26b5a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962016));
    // 0x26b5a8: 0x240301a0
    ctx->pc = 0x26b5a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26b5ac: 0xe31818
    ctx->pc = 0x26b5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26b5b0: 0x641821
    ctx->pc = 0x26b5b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b5b4: 0xac660118
    ctx->pc = 0x26b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 6));
    // 0x26b5b8: 0x3e00008
    ctx->pc = 0x26B5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B5BCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B58Cu: goto label_26b58c;
            case 0x26B5C0u: goto label_26b5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B5C0u;
label_26b5c0:
    // 0x26b5c0: 0x3e00008
    ctx->pc = 0x26B5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B5C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B58Cu: goto label_26b58c;
            case 0x26B5C0u: goto label_26b5c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B5C8u;
}
