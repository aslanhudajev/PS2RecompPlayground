#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ImmediateExeBackup__13LightCtrlTaskFv
// Address: 0x1f0ee0 - 0x1f0f20
void ImmediateExeBackup__13LightCtrlTaskFv_0x1f0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ImmediateExeBackup__13LightCtrlTaskFv");


    ctx->pc = 0x1f0ee0u;

    // 0x1f0ee0: 0x27bdfff0
    ctx->pc = 0x1f0ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0ee4: 0x7fbf0000
    ctx->pc = 0x1f0ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f0ee8: 0x8c820258
    ctx->pc = 0x1f0ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x1f0eec: 0x24830260
    ctx->pc = 0x1f0eecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 608));
    // 0x1f0ef0: 0x14400002
    ctx->pc = 0x1F0EF0u;
    {
        const bool branch_taken_0x1f0ef0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0EF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 700));
        if (branch_taken_0x1f0ef0) {
            ctx->pc = 0x1F0EFCu;
            goto label_1f0efc;
        }
    }
    ctx->pc = 0x1F0EF8u;
    // 0x1f0ef8: 0x70001e28
    ctx->pc = 0x1f0ef8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0efc:
    // 0x1f0efc: 0x8c82025c
    ctx->pc = 0x1f0efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 604)));
    // 0x1f0f00: 0x14400002
    ctx->pc = 0x1F0F00u;
    {
        const bool branch_taken_0x1f0f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0F04u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f0f00) {
            ctx->pc = 0x1F0F0Cu;
            goto label_1f0f0c;
        }
    }
    ctx->pc = 0x1F0F08u;
    // 0x1f0f08: 0x70002e28
    ctx->pc = 0x1f0f08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0f0c:
    // 0x1f0f0c: 0xc07c154
    ctx->pc = 0x1F0F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F14u);
    ctx->pc = 0x1F0550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0F14u; }
        else if (ctx->pc != 0x1F0F14u) { ctx->pc = 0x1F0F14u; }
    }
    if (ctx->pc != 0x1F0F14u) { return; }
    ctx->pc = 0x1F0F14u;
    // 0x1f0f14: 0x7bbf0000
    ctx->pc = 0x1f0f14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0f18: 0x3e00008
    ctx->pc = 0x1F0F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0EFCu: goto label_1f0efc;
            case 0x1F0F0Cu: goto label_1f0f0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0F20u;
}
