#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl_pos__13NoGameHitTaskFv
// Address: 0x203840 - 0x203898
void ctrl_pos__13NoGameHitTaskFv_0x203840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl_pos__13NoGameHitTaskFv");


    ctx->pc = 0x203840u;

    // 0x203840: 0x27bdffe0
    ctx->pc = 0x203840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203844: 0x7fbf0010
    ctx->pc = 0x203844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x203848: 0x7fb00000
    ctx->pc = 0x203848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20384c: 0x70808628
    ctx->pc = 0x20384cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x203850: 0x3c020050
    ctx->pc = 0x203850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x203854: 0xc07ce18
    ctx->pc = 0x203854u;
    SET_GPR_U32(ctx, 31, 0x20385Cu);
    ctx->pc = 0x203858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20385Cu; }
        else if (ctx->pc != 0x20385Cu) { ctx->pc = 0x20385Cu; }
    }
    if (ctx->pc != 0x20385Cu) { return; }
    ctx->pc = 0x20385Cu;
    // 0x20385c: 0x1c400004
    ctx->pc = 0x20385Cu;
    {
        const bool branch_taken_0x20385c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20385c) {
            ctx->pc = 0x203870u;
            goto label_203870;
        }
    }
    ctx->pc = 0x203864u;
    // 0x203864: 0x8e030004
    ctx->pc = 0x203864u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x203868: 0x24630001
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20386c: 0xae030004
    ctx->pc = 0x20386cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_203870:
    // 0x203870: 0x8e040004
    ctx->pc = 0x203870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x203874: 0x24030009
    ctx->pc = 0x203874u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x203878: 0x14830003
    ctx->pc = 0x203878u;
    {
        const bool branch_taken_0x203878 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x203878) {
            ctx->pc = 0x203888u;
            goto label_203888;
        }
    }
    ctx->pc = 0x203880u;
    // 0x203880: 0xc06898c
    ctx->pc = 0x203880u;
    SET_GPR_U32(ctx, 31, 0x203888u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203888u; }
        else if (ctx->pc != 0x203888u) { ctx->pc = 0x203888u; }
    }
    if (ctx->pc != 0x203888u) { return; }
    ctx->pc = 0x203888u;
label_203888:
    // 0x203888: 0x7bbf0010
    ctx->pc = 0x203888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20388c: 0x7bb00000
    ctx->pc = 0x20388cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203890: 0x3e00008
    ctx->pc = 0x203890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203894u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203870u: goto label_203870;
            case 0x203888u: goto label_203888;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203898u;
}
