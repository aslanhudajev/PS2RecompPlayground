#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: demoInit__10PlayerTaskFv
// Address: 0x20f050 - 0x20f090
void demoInit__10PlayerTaskFv_0x20f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("demoInit__10PlayerTaskFv");


    ctx->pc = 0x20f050u;

    // 0x20f050: 0x27bdffe0
    ctx->pc = 0x20f050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f054: 0x7fbf0010
    ctx->pc = 0x20f054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20f058: 0x7fb00000
    ctx->pc = 0x20f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20f05c: 0x70808628
    ctx->pc = 0x20f05cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20f060: 0xc083c24
    ctx->pc = 0x20F060u;
    SET_GPR_U32(ctx, 31, 0x20F068u);
    ctx->pc = 0x20F064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x20F090u;
    {
        const uint32_t __entryPc = ctx->pc;
        startInit__10PlayerTaskFi_0x20f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F068u; }
        else if (ctx->pc != 0x20F068u) { ctx->pc = 0x20F068u; }
    }
    if (ctx->pc != 0x20F068u) { return; }
    ctx->pc = 0x20F068u;
    // 0x20f068: 0x3c020027
    ctx->pc = 0x20f068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x20f06c: 0x24423378
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13176));
    // 0x20f070: 0x8c450008
    ctx->pc = 0x20f070u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20f074: 0x8e041cb4
    ctx->pc = 0x20f074u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20f078: 0xc068fd8
    ctx->pc = 0x20F078u;
    SET_GPR_U32(ctx, 31, 0x20F080u);
    ctx->pc = 0x20F07Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F080u; }
        else if (ctx->pc != 0x20F080u) { ctx->pc = 0x20F080u; }
    }
    if (ctx->pc != 0x20F080u) { return; }
    ctx->pc = 0x20F080u;
    // 0x20f080: 0x7bbf0010
    ctx->pc = 0x20f080u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f084: 0x7bb00000
    ctx->pc = 0x20f084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f088: 0x3e00008
    ctx->pc = 0x20F088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F08Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F090u;
}
