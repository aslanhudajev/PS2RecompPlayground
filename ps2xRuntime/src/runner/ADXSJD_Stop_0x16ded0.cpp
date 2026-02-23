#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_Stop
// Address: 0x16ded0 - 0x16defc
void ADXSJD_Stop_0x16ded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_Stop");


    ctx->pc = 0x16ded0u;

    // 0x16ded0: 0x27bdffe0
    ctx->pc = 0x16ded0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ded4: 0xffb00000
    ctx->pc = 0x16ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ded8: 0xffbf0010
    ctx->pc = 0x16ded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16dedc: 0x80802d
    ctx->pc = 0x16dedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dee0: 0xc05a058
    ctx->pc = 0x16DEE0u;
    SET_GPR_U32(ctx, 31, 0x16DEE8u);
    ctx->pc = 0x16DEE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x168160u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_Stop_0x168160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEE8u; }
        else if (ctx->pc != 0x16DEE8u) { ctx->pc = 0x16DEE8u; }
    }
    if (ctx->pc != 0x16DEE8u) { return; }
    ctx->pc = 0x16DEE8u;
    // 0x16dee8: 0xa2000001
    ctx->pc = 0x16dee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x16deec: 0xdfbf0010
    ctx->pc = 0x16deecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16def0: 0xdfb00000
    ctx->pc = 0x16def0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16def4: 0x3e00008
    ctx->pc = 0x16DEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DEF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DEFCu;
}
