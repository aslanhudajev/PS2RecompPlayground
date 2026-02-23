#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ShapeAnimSurvive__10PeopleTaskFv
// Address: 0x208c80 - 0x208cf4
void ShapeAnimSurvive__10PeopleTaskFv_0x208c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ShapeAnimSurvive__10PeopleTaskFv");


    ctx->pc = 0x208c80u;

    // 0x208c80: 0x27bdffe0
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208c84: 0x7fbf0010
    ctx->pc = 0x208c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x208c88: 0x7fb00000
    ctx->pc = 0x208c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x208c8c: 0xc4811d78
    ctx->pc = 0x208c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208c90: 0x3c033f80
    ctx->pc = 0x208c90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x208c94: 0x44830000
    ctx->pc = 0x208c94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x208c98: 0x0
    ctx->pc = 0x208c98u;
    // NOP
    // 0x208c9c: 0x46010032
    ctx->pc = 0x208c9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208ca0: 0x0
    ctx->pc = 0x208ca0u;
    // NOP
    // 0x208ca4: 0x4500000f
    ctx->pc = 0x208CA4u;
    {
        const bool branch_taken_0x208ca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x208CA8u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x208ca4) {
            ctx->pc = 0x208CE4u;
            goto label_208ce4;
        }
    }
    ctx->pc = 0x208CACu;
    // 0x208cac: 0x8e021de8
    ctx->pc = 0x208cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x208cb0: 0x84450000
    ctx->pc = 0x208cb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208cb4: 0xc082f98
    ctx->pc = 0x208CB4u;
    SET_GPR_U32(ctx, 31, 0x208CBCu);
    ctx->pc = 0x208CB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 7724));
    ctx->pc = 0x20BE60u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimNormalFace__10PeopleTaskFiP13PPL_FANI_DATA_0x20be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CBCu; }
        else if (ctx->pc != 0x208CBCu) { ctx->pc = 0x208CBCu; }
    }
    if (ctx->pc != 0x208CBCu) { return; }
    ctx->pc = 0x208CBCu;
    // 0x208cbc: 0x8e021de8
    ctx->pc = 0x208cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x208cc0: 0x72002628
    ctx->pc = 0x208cc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x208cc4: 0x84450002
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x208cc8: 0xc082ff4
    ctx->pc = 0x208CC8u;
    SET_GPR_U32(ctx, 31, 0x208CD0u);
    ctx->pc = 0x208CCCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 7740));
    ctx->pc = 0x20BFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimNormalHand__10PeopleTaskFiP13PPL_FANI_DATA_0x20bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CD0u; }
        else if (ctx->pc != 0x208CD0u) { ctx->pc = 0x208CD0u; }
    }
    if (ctx->pc != 0x208CD0u) { return; }
    ctx->pc = 0x208CD0u;
    // 0x208cd0: 0x8e021de8
    ctx->pc = 0x208cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7656)));
    // 0x208cd4: 0x72002628
    ctx->pc = 0x208cd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x208cd8: 0x84450004
    ctx->pc = 0x208cd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x208cdc: 0xc082ff4
    ctx->pc = 0x208CDCu;
    SET_GPR_U32(ctx, 31, 0x208CE4u);
    ctx->pc = 0x208CE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 7756));
    ctx->pc = 0x20BFD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimNormalHand__10PeopleTaskFiP13PPL_FANI_DATA_0x20bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208CE4u; }
        else if (ctx->pc != 0x208CE4u) { ctx->pc = 0x208CE4u; }
    }
    if (ctx->pc != 0x208CE4u) { return; }
    ctx->pc = 0x208CE4u;
label_208ce4:
    // 0x208ce4: 0x7bbf0010
    ctx->pc = 0x208ce4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208ce8: 0x7bb00000
    ctx->pc = 0x208ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208cec: 0x3e00008
    ctx->pc = 0x208CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208CE4u: goto label_208ce4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208CF4u;
}
