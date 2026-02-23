#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_Create
// Address: 0x16d9d8 - 0x16d9f4
void ADXRNA_Create_0x16d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_Create");


    ctx->pc = 0x16d9d8u;

    // 0x16d9d8: 0x27bdfff0
    ctx->pc = 0x16d9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d9dc: 0xffbf0000
    ctx->pc = 0x16d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d9e0: 0xc05ecf8
    ctx->pc = 0x16D9E0u;
    SET_GPR_U32(ctx, 31, 0x16D9E8u);
    ctx->pc = 0x17B3E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_Create_0x17b3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D9E8u; }
        else if (ctx->pc != 0x16D9E8u) { ctx->pc = 0x16D9E8u; }
    }
    if (ctx->pc != 0x16D9E8u) { return; }
    ctx->pc = 0x16D9E8u;
    // 0x16d9e8: 0xdfbf0000
    ctx->pc = 0x16d9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d9ec: 0x3e00008
    ctx->pc = 0x16D9ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D9F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D9F4u;
}
