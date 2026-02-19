#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: queuePsysRemove
// Address: 0x2c91e0 - 0x2c920c
void queuePsysRemove_0x2c91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c91e0u;

    // 0x2c91e0: 0x27bdffe0
    ctx->pc = 0x2c91e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c91e4: 0xffbf0010
    ctx->pc = 0x2c91e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c91e8: 0xffb00000
    ctx->pc = 0x2c91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c91ec: 0xc0b243c
    ctx->pc = 0x2C91ECu;
    SET_GPR_U32(ctx, 31, 0x2C91F4u);
    ctx->pc = 0x2C91F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C90F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        activeToRmq_0x2c90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91F4u; }
    }
    if (ctx->pc != 0x2C91F4u) { return; }
    ctx->pc = 0x2C91F4u;
    // 0x2c91f4: 0x24020008
    ctx->pc = 0x2c91f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c91f8: 0xa2020037
    ctx->pc = 0x2c91f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c91fc: 0xdfbf0010
    ctx->pc = 0x2c91fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9200: 0xdfb00000
    ctx->pc = 0x2c9200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9204: 0x3e00008
    ctx->pc = 0x2C9204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C920Cu;
}
