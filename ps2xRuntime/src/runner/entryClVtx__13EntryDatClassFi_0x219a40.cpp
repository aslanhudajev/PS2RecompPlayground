#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryClVtx__13EntryDatClassFi
// Address: 0x219a40 - 0x219a74
void entryClVtx__13EntryDatClassFi_0x219a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryClVtx__13EntryDatClassFi");


    ctx->pc = 0x219a40u;

    // 0x219a40: 0x27bdfff0
    ctx->pc = 0x219a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219a44: 0x7fbf0000
    ctx->pc = 0x219a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219a48: 0x84831002
    ctx->pc = 0x219a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x219a4c: 0x24020013
    ctx->pc = 0x219a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
    // 0x219a50: 0x31900
    ctx->pc = 0x219a50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219a54: 0x831821
    ctx->pc = 0x219a54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219a58: 0xac620000
    ctx->pc = 0x219a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x219a5c: 0xac650008
    ctx->pc = 0x219a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219a60: 0xc0864f0
    ctx->pc = 0x219A60u;
    SET_GPR_U32(ctx, 31, 0x219A68u);
    ctx->pc = 0x219A64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219A68u; }
        else if (ctx->pc != 0x219A68u) { ctx->pc = 0x219A68u; }
    }
    if (ctx->pc != 0x219A68u) { return; }
    ctx->pc = 0x219A68u;
    // 0x219a68: 0x7bbf0000
    ctx->pc = 0x219a68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a6c: 0x3e00008
    ctx->pc = 0x219A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219A74u;
}
