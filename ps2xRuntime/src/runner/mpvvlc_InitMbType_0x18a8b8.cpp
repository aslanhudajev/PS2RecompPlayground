#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbType
// Address: 0x18a8b8 - 0x18a8d4
void mpvvlc_InitMbType_0x18a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbType");


    ctx->pc = 0x18a8b8u;

    // 0x18a8b8: 0x27bdfff0
    ctx->pc = 0x18a8b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a8bc: 0xffbf0000
    ctx->pc = 0x18a8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a8c0: 0xc062a36
    ctx->pc = 0x18A8C0u;
    SET_GPR_U32(ctx, 31, 0x18A8C8u);
    ctx->pc = 0x18A8D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvvlc_InitMbTypePpic_0x18a8d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A8C8u; }
        else if (ctx->pc != 0x18A8C8u) { ctx->pc = 0x18A8C8u; }
    }
    if (ctx->pc != 0x18A8C8u) { return; }
    ctx->pc = 0x18A8C8u;
    // 0x18a8c8: 0xdfbf0000
    ctx->pc = 0x18a8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a8cc: 0x8062a80
    ctx->pc = 0x18A8CCu;
    ctx->pc = 0x18A8D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18AA00u;
    mpvvlc_InitMbTypeBpic_0x18aa00(rdram, ctx, runtime); return;
    ctx->pc = 0x18A8D4u;
}
