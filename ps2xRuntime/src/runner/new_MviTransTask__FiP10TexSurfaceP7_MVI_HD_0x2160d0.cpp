#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_MviTransTask__FiP10TexSurfaceP7_MVI_HD
// Address: 0x2160d0 - 0x216150
void new_MviTransTask__FiP10TexSurfaceP7_MVI_HD_0x2160d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_MviTransTask__FiP10TexSurfaceP7_MVI_HD");


    ctx->pc = 0x2160d0u;

    // 0x2160d0: 0x27bdffb0
    ctx->pc = 0x2160d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2160d4: 0x7fbf0040
    ctx->pc = 0x2160d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2160d8: 0x7fb30030
    ctx->pc = 0x2160d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2160dc: 0x7fb20020
    ctx->pc = 0x2160dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2160e0: 0x7fb10010
    ctx->pc = 0x2160e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2160e4: 0x7fb00000
    ctx->pc = 0x2160e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2160e8: 0x3c010051
    ctx->pc = 0x2160e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x2160ec: 0x8c3034dc
    ctx->pc = 0x2160ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 1), 13532)));
    // 0x2160f0: 0x70809e28
    ctx->pc = 0x2160f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2160f4: 0x70a09628
    ctx->pc = 0x2160f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2160f8: 0xc06903c
    ctx->pc = 0x2160F8u;
    SET_GPR_U32(ctx, 31, 0x216100u);
    ctx->pc = 0x2160FCu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216100u; }
        else if (ctx->pc != 0x216100u) { ctx->pc = 0x216100u; }
    }
    if (ctx->pc != 0x216100u) { return; }
    ctx->pc = 0x216100u;
    // 0x216100: 0x8e070014
    ctx->pc = 0x216100u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x216104: 0x24040054
    ctx->pc = 0x216104u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    // 0x216108: 0x70002e28
    ctx->pc = 0x216108u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21610c: 0x72003628
    ctx->pc = 0x21610cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x216110: 0xc069040
    ctx->pc = 0x216110u;
    SET_GPR_U32(ctx, 31, 0x216118u);
    ctx->pc = 0x216114u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216118u; }
        else if (ctx->pc != 0x216118u) { ctx->pc = 0x216118u; }
    }
    if (ctx->pc != 0x216118u) { return; }
    ctx->pc = 0x216118u;
    // 0x216118: 0x70402628
    ctx->pc = 0x216118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21611c: 0x10800005
    ctx->pc = 0x21611Cu;
    {
        const bool branch_taken_0x21611c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x216120u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21611c) {
            ctx->pc = 0x216134u;
            goto label_216134;
        }
    }
    ctx->pc = 0x216124u;
    // 0x216124: 0x72403e28
    ctx->pc = 0x216124u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x216128: 0x72204628
    ctx->pc = 0x216128u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21612c: 0xc0857e0
    ctx->pc = 0x21612Cu;
    SET_GPR_U32(ctx, 31, 0x216134u);
    ctx->pc = 0x216130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x215F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12MviTransTaskFiP10TexSurfaceP7_MVI_HD_0x215f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216134u; }
        else if (ctx->pc != 0x216134u) { ctx->pc = 0x216134u; }
    }
    if (ctx->pc != 0x216134u) { return; }
    ctx->pc = 0x216134u;
label_216134:
    // 0x216134: 0x7bbf0040
    ctx->pc = 0x216134u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216138: 0x7bb30030
    ctx->pc = 0x216138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21613c: 0x7bb20020
    ctx->pc = 0x21613cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216140: 0x7bb10010
    ctx->pc = 0x216140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216144: 0x7bb00000
    ctx->pc = 0x216144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216148: 0x3e00008
    ctx->pc = 0x216148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21614Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216134u: goto label_216134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216150u;
}
