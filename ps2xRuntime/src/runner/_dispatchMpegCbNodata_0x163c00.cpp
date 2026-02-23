#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dispatchMpegCbNodata
// Address: 0x163c00 - 0x163c24
void _dispatchMpegCbNodata_0x163c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dispatchMpegCbNodata");


    ctx->pc = 0x163c00u;

    // 0x163c00: 0x27bdffd0
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163c04: 0x24020001
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x163c08: 0xffbf0020
    ctx->pc = 0x163c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163c0c: 0x3a0282d
    ctx->pc = 0x163c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c10: 0xc058eec
    ctx->pc = 0x163C10u;
    SET_GPR_U32(ctx, 31, 0x163C18u);
    ctx->pc = 0x163C14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C18u; }
        else if (ctx->pc != 0x163C18u) { ctx->pc = 0x163C18u; }
    }
    if (ctx->pc != 0x163C18u) { return; }
    ctx->pc = 0x163C18u;
    // 0x163c18: 0xdfbf0020
    ctx->pc = 0x163c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163c1c: 0x3e00008
    ctx->pc = 0x163C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163C24u;
}
