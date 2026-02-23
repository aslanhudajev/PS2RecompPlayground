#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_Lock
// Address: 0x176578 - 0x176594
void SRD_Lock_0x176578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_Lock");


    ctx->pc = 0x176578u;

    // 0x176578: 0x27bdfff0
    ctx->pc = 0x176578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17657c: 0xffbf0000
    ctx->pc = 0x17657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176580: 0xc05d940
    ctx->pc = 0x176580u;
    SET_GPR_U32(ctx, 31, 0x176588u);
    ctx->pc = 0x176500u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitForExecServer_0x176500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176588u; }
        else if (ctx->pc != 0x176588u) { ctx->pc = 0x176588u; }
    }
    if (ctx->pc != 0x176588u) { return; }
    ctx->pc = 0x176588u;
    // 0x176588: 0xdfbf0000
    ctx->pc = 0x176588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17658c: 0x805f6f6
    ctx->pc = 0x17658Cu;
    ctx->pc = 0x176590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17DBD8u;
    SVM_Lock_0x17dbd8(rdram, ctx, runtime); return;
    ctx->pc = 0x176594u;
}
