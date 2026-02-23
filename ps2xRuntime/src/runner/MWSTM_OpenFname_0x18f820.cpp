#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_OpenFname
// Address: 0x18f820 - 0x18f83c
void MWSTM_OpenFname_0x18f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_OpenFname");


    ctx->pc = 0x18f820u;

    // 0x18f820: 0x27bdfff0
    ctx->pc = 0x18f820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f824: 0xffbf0000
    ctx->pc = 0x18f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f828: 0xc05c298
    ctx->pc = 0x18F828u;
    SET_GPR_U32(ctx, 31, 0x18F830u);
    ctx->pc = 0x170A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFname_0x170a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F830u; }
        else if (ctx->pc != 0x18F830u) { ctx->pc = 0x18F830u; }
    }
    if (ctx->pc != 0x18F830u) { return; }
    ctx->pc = 0x18F830u;
    // 0x18f830: 0xdfbf0000
    ctx->pc = 0x18f830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f834: 0x3e00008
    ctx->pc = 0x18F834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F83Cu;
}
