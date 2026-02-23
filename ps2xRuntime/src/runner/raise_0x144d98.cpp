#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: raise
// Address: 0x144d98 - 0x144dc0
void raise_0x144d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("raise");


    ctx->pc = 0x144d98u;

    // 0x144d98: 0x80282d
    ctx->pc = 0x144d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d9c: 0x3c020022
    ctx->pc = 0x144d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x144da0: 0x27bdfff0
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144da4: 0x8c4471ec
    ctx->pc = 0x144da4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29164)));
    // 0x144da8: 0xffbf0000
    ctx->pc = 0x144da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144dac: 0xc0512fc
    ctx->pc = 0x144DACu;
    SET_GPR_U32(ctx, 31, 0x144DB4u);
    ctx->pc = 0x144BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _raise_r_0x144bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144DB4u; }
        else if (ctx->pc != 0x144DB4u) { ctx->pc = 0x144DB4u; }
    }
    if (ctx->pc != 0x144DB4u) { return; }
    ctx->pc = 0x144DB4u;
    // 0x144db4: 0xdfbf0000
    ctx->pc = 0x144db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144db8: 0x3e00008
    ctx->pc = 0x144DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144DBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144DC0u;
}
