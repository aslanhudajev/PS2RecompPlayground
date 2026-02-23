#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_ExecVint
// Address: 0x16d5f8 - 0x16d614
void ADXM_ExecVint_0x16d5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_ExecVint");


    ctx->pc = 0x16d5f8u;

    // 0x16d5f8: 0x27bdfff0
    ctx->pc = 0x16d5f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d5fc: 0xffbf0000
    ctx->pc = 0x16d5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d600: 0xc05b552
    ctx->pc = 0x16D600u;
    SET_GPR_U32(ctx, 31, 0x16D608u);
    ctx->pc = 0x16D548u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPS2_ExecVint_0x16d548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D608u; }
        else if (ctx->pc != 0x16D608u) { ctx->pc = 0x16D608u; }
    }
    if (ctx->pc != 0x16D608u) { return; }
    ctx->pc = 0x16D608u;
    // 0x16d608: 0xdfbf0000
    ctx->pc = 0x16d608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d60c: 0x3e00008
    ctx->pc = 0x16D60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D614u;
}
