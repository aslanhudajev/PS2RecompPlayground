#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_ExecServer
// Address: 0x16d758 - 0x16d774
void ADXPS2_ExecServer_0x16d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_ExecServer");


    ctx->pc = 0x16d758u;

    // 0x16d758: 0x27bdfff0
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d75c: 0xffbf0000
    ctx->pc = 0x16d75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d760: 0xc05c958
    ctx->pc = 0x16D760u;
    SET_GPR_U32(ctx, 31, 0x16D768u);
    ctx->pc = 0x172560u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_ExecServer_0x172560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D768u; }
        else if (ctx->pc != 0x16D768u) { ctx->pc = 0x16D768u; }
    }
    if (ctx->pc != 0x16D768u) { return; }
    ctx->pc = 0x16D768u;
    // 0x16d768: 0xdfbf0000
    ctx->pc = 0x16d768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d76c: 0x805b116
    ctx->pc = 0x16D76Cu;
    ctx->pc = 0x16D770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16C458u;
    ADXT_ExecFsSvr_0x16c458(rdram, ctx, runtime); return;
    ctx->pc = 0x16D774u;
}
