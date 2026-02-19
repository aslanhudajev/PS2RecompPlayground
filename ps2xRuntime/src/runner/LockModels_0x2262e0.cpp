#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LockModels
// Address: 0x2262e0 - 0x226308
void LockModels_0x2262e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2262e0u;

    // 0x2262e0: 0x27bdffe0
    ctx->pc = 0x2262e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2262e4: 0xffbf0010
    ctx->pc = 0x2262e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2262e8: 0xffb00000
    ctx->pc = 0x2262e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2262ec: 0xc0b1c14
    ctx->pc = 0x2262ECu;
    SET_GPR_U32(ctx, 31, 0x2262F4u);
    ctx->pc = 0x2262F0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C7050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_LockModels_0x2c7050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2262F4u; }
    }
    if (ctx->pc != 0x2262F4u) { return; }
    ctx->pc = 0x2262F4u;
    // 0x2262f4: 0x200202d
    ctx->pc = 0x2262f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2262f8: 0xdfbf0010
    ctx->pc = 0x2262f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2262fc: 0xdfb00000
    ctx->pc = 0x2262fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226300: 0x8084b8a
    ctx->pc = 0x226300u;
    ctx->pc = 0x226304u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x212E28u;
    AtreeListLock_0x212e28(rdram, ctx, runtime); return;
    ctx->pc = 0x226308u;
}
