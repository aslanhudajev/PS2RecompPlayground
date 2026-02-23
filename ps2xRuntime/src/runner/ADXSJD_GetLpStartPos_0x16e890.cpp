#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_GetLpStartPos
// Address: 0x16e890 - 0x16e8ac
void ADXSJD_GetLpStartPos_0x16e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_GetLpStartPos");


    ctx->pc = 0x16e890u;

    // 0x16e890: 0x27bdfff0
    ctx->pc = 0x16e890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e894: 0xffbf0000
    ctx->pc = 0x16e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e898: 0xc05a026
    ctx->pc = 0x16E898u;
    SET_GPR_U32(ctx, 31, 0x16E8A0u);
    ctx->pc = 0x16E89Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x168098u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetLpStartPos_0x168098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8A0u; }
        else if (ctx->pc != 0x16E8A0u) { ctx->pc = 0x16E8A0u; }
    }
    if (ctx->pc != 0x16E8A0u) { return; }
    ctx->pc = 0x16E8A0u;
    // 0x16e8a0: 0xdfbf0000
    ctx->pc = 0x16e8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e8a4: 0x3e00008
    ctx->pc = 0x16E8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E8A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E8ACu;
}
