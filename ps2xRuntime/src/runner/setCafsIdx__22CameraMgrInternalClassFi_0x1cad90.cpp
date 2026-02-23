#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setCafsIdx__22CameraMgrInternalClassFi
// Address: 0x1cad90 - 0x1cadd0
void setCafsIdx__22CameraMgrInternalClassFi_0x1cad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setCafsIdx__22CameraMgrInternalClassFi");


    ctx->pc = 0x1cad90u;

    // 0x1cad90: 0x510c0
    ctx->pc = 0x1cad90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cad94: 0x451021
    ctx->pc = 0x1cad94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cad98: 0x27bdfff0
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cad9c: 0x21180
    ctx->pc = 0x1cad9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cada0: 0x7fbf0000
    ctx->pc = 0x1cada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1cada4: 0x441821
    ctx->pc = 0x1cada4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cada8: 0x8c620010
    ctx->pc = 0x1cada8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1cadac: 0x210c0
    ctx->pc = 0x1cadacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cadb0: 0x441021
    ctx->pc = 0x1cadb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cadb4: 0x8c420904
    ctx->pc = 0x1cadb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2308)));
    // 0x1cadb8: 0x8042000c
    ctx->pc = 0x1cadb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cadbc: 0xc072cd8
    ctx->pc = 0x1CADBCu;
    SET_GPR_U32(ctx, 31, 0x1CADC4u);
    ctx->pc = 0x1CADC0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1CB360u;
    {
        const uint32_t __entryPc = ctx->pc;
        finishJob__22CameraMgrInternalClassFi_0x1cb360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CADC4u; }
        else if (ctx->pc != 0x1CADC4u) { ctx->pc = 0x1CADC4u; }
    }
    if (ctx->pc != 0x1CADC4u) { return; }
    ctx->pc = 0x1CADC4u;
    // 0x1cadc4: 0x7bbf0000
    ctx->pc = 0x1cadc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadc8: 0x3e00008
    ctx->pc = 0x1CADC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CADD0u;
}
