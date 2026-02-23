#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrlPre__25TrnKomonoTumiageColliTaskFv
// Address: 0x21ba10 - 0x21ba78
void ctrlPre__25TrnKomonoTumiageColliTaskFv_0x21ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrlPre__25TrnKomonoTumiageColliTaskFv");


    ctx->pc = 0x21ba10u;

    // 0x21ba10: 0x27bdffe0
    ctx->pc = 0x21ba10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ba14: 0x7fbf0010
    ctx->pc = 0x21ba14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x21ba18: 0x7fb00000
    ctx->pc = 0x21ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ba1c: 0x8c820144
    ctx->pc = 0x21ba1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x21ba20: 0x10400003
    ctx->pc = 0x21BA20u;
    {
        const bool branch_taken_0x21ba20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BA24u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21ba20) {
            ctx->pc = 0x21BA30u;
            goto label_21ba30;
        }
    }
    ctx->pc = 0x21BA28u;
    // 0x21ba28: 0xc06898c
    ctx->pc = 0x21BA28u;
    SET_GPR_U32(ctx, 31, 0x21BA30u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA30u; }
        else if (ctx->pc != 0x21BA30u) { ctx->pc = 0x21BA30u; }
    }
    if (ctx->pc != 0x21BA30u) { return; }
    ctx->pc = 0x21BA30u;
label_21ba30:
    // 0x21ba30: 0x8e02014c
    ctx->pc = 0x21ba30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x21ba34: 0x10400008
    ctx->pc = 0x21BA34u;
    {
        const bool branch_taken_0x21ba34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BA38u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 44));
        if (branch_taken_0x21ba34) {
            ctx->pc = 0x21BA58u;
            goto label_21ba58;
        }
    }
    ctx->pc = 0x21BA3Cu;
    // 0x21ba3c: 0x2604002c
    ctx->pc = 0x21ba3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 44));
    // 0x21ba40: 0xc06bf00
    ctx->pc = 0x21BA40u;
    SET_GPR_U32(ctx, 31, 0x21BA48u);
    ctx->pc = 0x21BA44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 92));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA48u; }
        else if (ctx->pc != 0x21BA48u) { ctx->pc = 0x21BA48u; }
    }
    if (ctx->pc != 0x21BA48u) { return; }
    ctx->pc = 0x21BA48u;
    // 0x21ba48: 0xc24a964
    ctx->pc = 0x21BA48u;
    SET_GPR_U32(ctx, 31, 0x21BA50u);
    ctx->pc = 0x21BA4Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Enemy_Set_ColliBuff__FP9EnemyTask_0x92a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA50u; }
        else if (ctx->pc != 0x21BA50u) { ctx->pc = 0x21BA50u; }
    }
    if (ctx->pc != 0x21BA50u) { return; }
    ctx->pc = 0x21BA50u;
    // 0x21ba50: 0x10000006
    ctx->pc = 0x21BA50u;
    {
        const bool branch_taken_0x21ba50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BA54u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x21ba50) {
            ctx->pc = 0x21BA6Cu;
            goto label_21ba6c;
        }
    }
    ctx->pc = 0x21BA58u;
label_21ba58:
    // 0x21ba58: 0xc06bf00
    ctx->pc = 0x21BA58u;
    SET_GPR_U32(ctx, 31, 0x21BA60u);
    ctx->pc = 0x21BA5Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 92));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA60u; }
        else if (ctx->pc != 0x21BA60u) { ctx->pc = 0x21BA60u; }
    }
    if (ctx->pc != 0x21BA60u) { return; }
    ctx->pc = 0x21BA60u;
    // 0x21ba60: 0xc24a964
    ctx->pc = 0x21BA60u;
    SET_GPR_U32(ctx, 31, 0x21BA68u);
    ctx->pc = 0x21BA64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Enemy_Set_ColliBuff__FP9EnemyTask_0x92a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BA68u; }
        else if (ctx->pc != 0x21BA68u) { ctx->pc = 0x21BA68u; }
    }
    if (ctx->pc != 0x21BA68u) { return; }
    ctx->pc = 0x21BA68u;
    // 0x21ba68: 0x7bbf0010
    ctx->pc = 0x21ba68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21ba6c:
    // 0x21ba6c: 0x7bb00000
    ctx->pc = 0x21ba6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ba70: 0x3e00008
    ctx->pc = 0x21BA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BA74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BA30u: goto label_21ba30;
            case 0x21BA58u: goto label_21ba58;
            case 0x21BA6Cu: goto label_21ba6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BA78u;
}
