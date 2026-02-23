#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ExpandEntry
// Address: 0x1e5810 - 0x1e5868
void ExpandEntry_0x1e5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ExpandEntry");


    ctx->pc = 0x1e5810u;

    // 0x1e5810: 0x3c010046
    ctx->pc = 0x1e5810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x1e5814: 0x90277cf3
    ctx->pc = 0x1e5814u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 31987)));
    // 0x1e5818: 0x3c020046
    ctx->pc = 0x1e5818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)70 << 16));
    // 0x1e581c: 0x24487cf0
    ctx->pc = 0x1e581cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 31984));
    // 0x1e5820: 0x3c020046
    ctx->pc = 0x1e5820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)70 << 16));
    // 0x1e5824: 0x24437cf0
    ctx->pc = 0x1e5824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 31984));
    // 0x1e5828: 0x3c010046
    ctx->pc = 0x1e5828u;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x1e582c: 0x90227cf2
    ctx->pc = 0x1e582cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 31986)));
    // 0x1e5830: 0x730c0
    ctx->pc = 0x1e5830u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 3));
    // 0x1e5834: 0x661821
    ctx->pc = 0x1e5834u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e5838: 0x2466001c
    ctx->pc = 0x1e5838u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 28));
    // 0x1e583c: 0x24e30001
    ctx->pc = 0x1e583cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1e5840: 0x306300ff
    ctx->pc = 0x1e5840u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1e5844: 0x10620006
    ctx->pc = 0x1E5844u;
    {
        const bool branch_taken_0x1e5844 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1E5848u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e5844) {
            ctx->pc = 0x1E5860u;
            goto label_1e5860;
        }
    }
    ctx->pc = 0x1E584Cu;
    // 0x1e584c: 0xacc40000
    ctx->pc = 0x1e584cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1e5850: 0xacc50004
    ctx->pc = 0x1e5850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1e5854: 0xa1030003
    ctx->pc = 0x1e5854u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5858: 0x24020001
    ctx->pc = 0x1e5858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e585c: 0xa1020000
    ctx->pc = 0x1e585cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e5860:
    // 0x1e5860: 0x3e00008
    ctx->pc = 0x1E5860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5860u: goto label_1e5860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5868u;
}
