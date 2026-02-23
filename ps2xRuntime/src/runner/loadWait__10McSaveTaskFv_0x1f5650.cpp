#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loadWait__10McSaveTaskFv
// Address: 0x1f5650 - 0x1f56a8
void loadWait__10McSaveTaskFv_0x1f5650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loadWait__10McSaveTaskFv");


    ctx->pc = 0x1f5650u;

    // 0x1f5650: 0x27bdffe0
    ctx->pc = 0x1f5650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5654: 0x7fbf0010
    ctx->pc = 0x1f5654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f5658: 0x7fb00000
    ctx->pc = 0x1f5658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f565c: 0x70808628
    ctx->pc = 0x1f565cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f5660: 0x3c020051
    ctx->pc = 0x1f5660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f5664: 0xc086370
    ctx->pc = 0x1F5664u;
    SET_GPR_U32(ctx, 31, 0x1F566Cu);
    ctx->pc = 0x1F5668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        chkRemain__13EntryDatClassFv_0x218dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F566Cu; }
        else if (ctx->pc != 0x1F566Cu) { ctx->pc = 0x1F566Cu; }
    }
    if (ctx->pc != 0x1F566Cu) { return; }
    ctx->pc = 0x1F566Cu;
    // 0x1f566c: 0x1440000a
    ctx->pc = 0x1F566Cu;
    {
        const bool branch_taken_0x1f566c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f566c) {
            ctx->pc = 0x1F5698u;
            goto label_1f5698;
        }
    }
    ctx->pc = 0x1F5674u;
    // 0x1f5674: 0x3c020027
    ctx->pc = 0x1f5674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f5678: 0x2442cd50
    ctx->pc = 0x1f5678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x1f567c: 0x8c450008
    ctx->pc = 0x1f567cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f5680: 0x8e040000
    ctx->pc = 0x1f5680u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5684: 0x72004628
    ctx->pc = 0x1f5684u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f5688: 0x70003628
    ctx->pc = 0x1f5688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f568c: 0x3c020027
    ctx->pc = 0x1f568cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f5690: 0xc068f70
    ctx->pc = 0x1F5690u;
    SET_GPR_U32(ctx, 31, 0x1F5698u);
    ctx->pc = 0x1F5694u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294954176));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5698u; }
        else if (ctx->pc != 0x1F5698u) { ctx->pc = 0x1F5698u; }
    }
    if (ctx->pc != 0x1F5698u) { return; }
    ctx->pc = 0x1F5698u;
label_1f5698:
    // 0x1f5698: 0x7bbf0010
    ctx->pc = 0x1f5698u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f569c: 0x7bb00000
    ctx->pc = 0x1f569cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f56a0: 0x3e00008
    ctx->pc = 0x1F56A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F56A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F5698u: goto label_1f5698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F56A8u;
}
