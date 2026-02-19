#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_GetObjectName
// Address: 0x2c6780 - 0x2c679c
void MBOX_GetObjectName_0x2c6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6780u;

    // 0x2c6780: 0x27bdfff0
    ctx->pc = 0x2c6780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6784: 0xffbf0000
    ctx->pc = 0x2c6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6788: 0xc0b19c8
    ctx->pc = 0x2C6788u;
    SET_GPR_U32(ctx, 31, 0x2C6790u);
    ctx->pc = 0x2C6720u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_GetObjectDef_0x2c6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6790u; }
    }
    if (ctx->pc != 0x2C6790u) { return; }
    ctx->pc = 0x2C6790u;
    // 0x2c6790: 0xdfbf0000
    ctx->pc = 0x2c6790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6794: 0x3e00008
    ctx->pc = 0x2C6794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C679Cu;
}
