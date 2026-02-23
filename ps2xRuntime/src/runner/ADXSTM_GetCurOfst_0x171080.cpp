#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_GetCurOfst
// Address: 0x171080 - 0x1710c0
void ADXSTM_GetCurOfst_0x171080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_GetCurOfst");


    ctx->pc = 0x171080u;

    // 0x171080: 0x27bdffd0
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171084: 0xffb00000
    ctx->pc = 0x171084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171088: 0x80802d
    ctx->pc = 0x171088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17108c: 0xffb10010
    ctx->pc = 0x17108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x171090: 0xffbf0020
    ctx->pc = 0x171090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171094: 0xc05c2f4
    ctx->pc = 0x171094u;
    SET_GPR_U32(ctx, 31, 0x17109Cu);
    ctx->pc = 0x171098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17109Cu; }
        else if (ctx->pc != 0x17109Cu) { ctx->pc = 0x17109Cu; }
    }
    if (ctx->pc != 0x17109Cu) { return; }
    ctx->pc = 0x17109Cu;
    // 0x17109c: 0x8e03000c
    ctx->pc = 0x17109cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1710a0: 0xdfbf0020
    ctx->pc = 0x1710a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1710a4: 0x431023
    ctx->pc = 0x1710a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1710a8: 0xdfb00000
    ctx->pc = 0x1710a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1710ac: 0xae220000
    ctx->pc = 0x1710acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1710b0: 0xdfb10010
    ctx->pc = 0x1710b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1710b4: 0x24020001
    ctx->pc = 0x1710b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1710b8: 0x3e00008
    ctx->pc = 0x1710B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1710C0u;
}
