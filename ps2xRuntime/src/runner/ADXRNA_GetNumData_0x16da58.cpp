#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetNumData
// Address: 0x16da58 - 0x16da74
void ADXRNA_GetNumData_0x16da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetNumData");


    ctx->pc = 0x16da58u;

    // 0x16da58: 0x27bdfff0
    ctx->pc = 0x16da58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16da5c: 0xffbf0000
    ctx->pc = 0x16da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16da60: 0xc05ee72
    ctx->pc = 0x16DA60u;
    SET_GPR_U32(ctx, 31, 0x16DA68u);
    ctx->pc = 0x17B9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetNumData_0x17b9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA68u; }
        else if (ctx->pc != 0x16DA68u) { ctx->pc = 0x16DA68u; }
    }
    if (ctx->pc != 0x16DA68u) { return; }
    ctx->pc = 0x16DA68u;
    // 0x16da68: 0xdfbf0000
    ctx->pc = 0x16da68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16da6c: 0x3e00008
    ctx->pc = 0x16DA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DA70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DA74u;
}
