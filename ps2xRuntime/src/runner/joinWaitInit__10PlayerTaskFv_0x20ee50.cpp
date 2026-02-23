#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: joinWaitInit__10PlayerTaskFv
// Address: 0x20ee50 - 0x20eeb4
void joinWaitInit__10PlayerTaskFv_0x20ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("joinWaitInit__10PlayerTaskFv");


    ctx->pc = 0x20ee50u;

    // 0x20ee50: 0x27bdffe0
    ctx->pc = 0x20ee50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ee54: 0x7fbf0010
    ctx->pc = 0x20ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20ee58: 0x7fb00000
    ctx->pc = 0x20ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ee5c: 0x3c010050
    ctx->pc = 0x20ee5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20ee60: 0x8423e504
    ctx->pc = 0x20ee60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20ee64: 0x24020009
    ctx->pc = 0x20ee64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20ee68: 0x10620003
    ctx->pc = 0x20EE68u;
    {
        const bool branch_taken_0x20ee68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20EE6Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ee68) {
            ctx->pc = 0x20EE78u;
            goto label_20ee78;
        }
    }
    ctx->pc = 0x20EE70u;
    // 0x20ee70: 0x10000005
    ctx->pc = 0x20EE70u;
    {
        const bool branch_taken_0x20ee70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EE74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x20ee70) {
            ctx->pc = 0x20EE88u;
            goto label_20ee88;
        }
    }
    ctx->pc = 0x20EE78u;
label_20ee78:
    // 0x20ee78: 0xc083c14
    ctx->pc = 0x20EE78u;
    SET_GPR_U32(ctx, 31, 0x20EE80u);
    ctx->pc = 0x20F050u;
    {
        const uint32_t __entryPc = ctx->pc;
        demoInit__10PlayerTaskFv_0x20f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE80u; }
        else if (ctx->pc != 0x20EE80u) { ctx->pc = 0x20EE80u; }
    }
    if (ctx->pc != 0x20EE80u) { return; }
    ctx->pc = 0x20EE80u;
    // 0x20ee80: 0x10000009
    ctx->pc = 0x20EE80u;
    {
        const bool branch_taken_0x20ee80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EE84u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20ee80) {
            ctx->pc = 0x20EEA8u;
            goto label_20eea8;
        }
    }
    ctx->pc = 0x20EE88u;
label_20ee88:
    // 0x20ee88: 0x24423358
    ctx->pc = 0x20ee88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13144));
    // 0x20ee8c: 0x8c450008
    ctx->pc = 0x20ee8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20ee90: 0x8e041cb4
    ctx->pc = 0x20ee90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7348)));
    // 0x20ee94: 0xc068fd8
    ctx->pc = 0x20EE94u;
    SET_GPR_U32(ctx, 31, 0x20EE9Cu);
    ctx->pc = 0x20EE98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeExec__11SystemTask2FPFv_vPv_0x1a3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE9Cu; }
        else if (ctx->pc != 0x20EE9Cu) { ctx->pc = 0x20EE9Cu; }
    }
    if (ctx->pc != 0x20EE9Cu) { return; }
    ctx->pc = 0x20EE9Cu;
    // 0x20ee9c: 0xc083bb0
    ctx->pc = 0x20EE9Cu;
    SET_GPR_U32(ctx, 31, 0x20EEA4u);
    ctx->pc = 0x20EEA0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20EEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        joinWaitLoop__10PlayerTaskFv_0x20eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EEA4u; }
        else if (ctx->pc != 0x20EEA4u) { ctx->pc = 0x20EEA4u; }
    }
    if (ctx->pc != 0x20EEA4u) { return; }
    ctx->pc = 0x20EEA4u;
    // 0x20eea4: 0x7bbf0010
    ctx->pc = 0x20eea4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20eea8:
    // 0x20eea8: 0x7bb00000
    ctx->pc = 0x20eea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20eeac: 0x3e00008
    ctx->pc = 0x20EEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EEB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EE78u: goto label_20ee78;
            case 0x20EE88u: goto label_20ee88;
            case 0x20EEA8u: goto label_20eea8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EEB4u;
}
