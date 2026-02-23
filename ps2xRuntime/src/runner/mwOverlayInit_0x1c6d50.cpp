#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwOverlayInit
// Address: 0x1c6d50 - 0x1c6dcc
void mwOverlayInit_0x1c6d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwOverlayInit");


    ctx->pc = 0x1c6d50u;

    // 0x1c6d50: 0x27bdffb0
    ctx->pc = 0x1c6d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c6d54: 0x7fbf0040
    ctx->pc = 0x1c6d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1c6d58: 0x7fb30030
    ctx->pc = 0x1c6d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c6d5c: 0x7fb20020
    ctx->pc = 0x1c6d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c6d60: 0x7fb10010
    ctx->pc = 0x1c6d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6d64: 0x7fb00000
    ctx->pc = 0x1c6d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6d68: 0x8c920014
    ctx->pc = 0x1c6d68u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c6d6c: 0x70808628
    ctx->pc = 0x1c6d6cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c6d70: 0x70808e28
    ctx->pc = 0x1c6d70u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1c6d74: 0x70a09e28
    ctx->pc = 0x1c6d74u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c6d78: 0xc0552d8
    ctx->pc = 0x1C6D78u;
    SET_GPR_U32(ctx, 31, 0x1C6D80u);
    ctx->pc = 0x1C6D7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D80u; }
        else if (ctx->pc != 0x1C6D80u) { ctx->pc = 0x1C6D80u; }
    }
    if (ctx->pc != 0x1C6D80u) { return; }
    ctx->pc = 0x1C6D80u;
    // 0x1c6d80: 0x12400006
    ctx->pc = 0x1C6D80u;
    {
        const bool branch_taken_0x1c6d80 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c6d80) {
            ctx->pc = 0x1C6D9Cu;
            goto label_1c6d9c;
        }
    }
    ctx->pc = 0x1C6D88u;
    // 0x1c6d88: 0x2138021
    ctx->pc = 0x1c6d88u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1c6d8c: 0x72002628
    ctx->pc = 0x1c6d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c6d90: 0x72403628
    ctx->pc = 0x1c6d90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1c6d94: 0xc050cfe
    ctx->pc = 0x1C6D94u;
    SET_GPR_U32(ctx, 31, 0x1C6D9Cu);
    ctx->pc = 0x1C6D98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D9Cu; }
        else if (ctx->pc != 0x1C6D9Cu) { ctx->pc = 0x1C6D9Cu; }
    }
    if (ctx->pc != 0x1C6D9Cu) { return; }
    ctx->pc = 0x1C6D9Cu;
label_1c6d9c:
    // 0x1c6d9c: 0x8e240018
    ctx->pc = 0x1c6d9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c6da0: 0x8e25001c
    ctx->pc = 0x1c6da0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c6da4: 0x70003628
    ctx->pc = 0x1c6da4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6da8: 0xc071e44
    ctx->pc = 0x1C6DA8u;
    SET_GPR_U32(ctx, 31, 0x1C6DB0u);
    ctx->pc = 0x1C6DACu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C7910u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___initialize_cpp_rts_0x1c7910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DB0u; }
        else if (ctx->pc != 0x1C6DB0u) { ctx->pc = 0x1C6DB0u; }
    }
    if (ctx->pc != 0x1C6DB0u) { return; }
    ctx->pc = 0x1C6DB0u;
    // 0x1c6db0: 0x7bbf0040
    ctx->pc = 0x1c6db0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6db4: 0x7bb30030
    ctx->pc = 0x1c6db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6db8: 0x7bb20020
    ctx->pc = 0x1c6db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6dbc: 0x7bb10010
    ctx->pc = 0x1c6dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6dc0: 0x7bb00000
    ctx->pc = 0x1c6dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6dc4: 0x3e00008
    ctx->pc = 0x1C6DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6DC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6D9Cu: goto label_1c6d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6DCCu;
}
