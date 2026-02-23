#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetStmHdInfo
// Address: 0x16dbc8 - 0x16dbe8
void ADXRNA_SetStmHdInfo_0x16dbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetStmHdInfo");


    ctx->pc = 0x16dbc8u;

    // 0x16dbc8: 0x27bdfff0
    ctx->pc = 0x16dbc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16dbcc: 0xffbf0000
    ctx->pc = 0x16dbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16dbd0: 0xc05ef92
    ctx->pc = 0x16DBD0u;
    SET_GPR_U32(ctx, 31, 0x16DBD8u);
    ctx->pc = 0x17BE48u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_SetStmHdInfo_0x17be48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBD8u; }
        else if (ctx->pc != 0x16DBD8u) { ctx->pc = 0x16DBD8u; }
    }
    if (ctx->pc != 0x16DBD8u) { return; }
    ctx->pc = 0x16DBD8u;
    // 0x16dbd8: 0xdfbf0000
    ctx->pc = 0x16dbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dbdc: 0x102d
    ctx->pc = 0x16dbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbe0: 0x3e00008
    ctx->pc = 0x16DBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DBE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DBE8u;
}
