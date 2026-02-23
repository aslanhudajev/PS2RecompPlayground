#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetNumRoom
// Address: 0x16da78 - 0x16da94
void ADXRNA_GetNumRoom_0x16da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetNumRoom");


    ctx->pc = 0x16da78u;

    // 0x16da78: 0x27bdfff0
    ctx->pc = 0x16da78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16da7c: 0xffbf0000
    ctx->pc = 0x16da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16da80: 0xc05ee80
    ctx->pc = 0x16DA80u;
    SET_GPR_U32(ctx, 31, 0x16DA88u);
    ctx->pc = 0x17BA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetNumRoom_0x17ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DA88u; }
        else if (ctx->pc != 0x16DA88u) { ctx->pc = 0x16DA88u; }
    }
    if (ctx->pc != 0x16DA88u) { return; }
    ctx->pc = 0x16DA88u;
    // 0x16da88: 0xdfbf0000
    ctx->pc = 0x16da88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16da8c: 0x3e00008
    ctx->pc = 0x16DA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DA90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DA94u;
}
