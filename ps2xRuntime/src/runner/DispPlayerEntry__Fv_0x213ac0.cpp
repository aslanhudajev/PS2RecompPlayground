#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispPlayerEntry__Fv
// Address: 0x213ac0 - 0x213b70
void DispPlayerEntry__Fv_0x213ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispPlayerEntry__Fv");


    ctx->pc = 0x213ac0u;

    // 0x213ac0: 0x27bdfff0
    ctx->pc = 0x213ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213ac4: 0x7fbf0000
    ctx->pc = 0x213ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213ac8: 0xc0693a0
    ctx->pc = 0x213AC8u;
    SET_GPR_U32(ctx, 31, 0x213AD0u);
    ctx->pc = 0x213ACCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AD0u; }
        else if (ctx->pc != 0x213AD0u) { ctx->pc = 0x213AD0u; }
    }
    if (ctx->pc != 0x213AD0u) { return; }
    ctx->pc = 0x213AD0u;
    // 0x213ad0: 0x3c010050
    ctx->pc = 0x213ad0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213ad4: 0x8423e504
    ctx->pc = 0x213ad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213ad8: 0x2402000a
    ctx->pc = 0x213ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x213adc: 0x1462000d
    ctx->pc = 0x213ADCu;
    {
        const bool branch_taken_0x213adc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x213AE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x213adc) {
            ctx->pc = 0x213B14u;
            goto label_213b14;
        }
    }
    ctx->pc = 0x213AE4u;
    // 0x213ae4: 0xc069ae4
    ctx->pc = 0x213AE4u;
    SET_GPR_U32(ctx, 31, 0x213AECu);
    ctx->pc = 0x213AE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13952));
    ctx->pc = 0x1A6B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightGlobalAmbient_0x1a6b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AECu; }
        else if (ctx->pc != 0x213AECu) { ctx->pc = 0x213AECu; }
    }
    if (ctx->pc != 0x213AECu) { return; }
    ctx->pc = 0x213AECu;
    // 0x213aec: 0x3c020027
    ctx->pc = 0x213aecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x213af0: 0x70002628
    ctx->pc = 0x213af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213af4: 0xc069b08
    ctx->pc = 0x213AF4u;
    SET_GPR_U32(ctx, 31, 0x213AFCu);
    ctx->pc = 0x213AF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 13968));
    ctx->pc = 0x1A6C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightDiffuse_0x1a6c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213AFCu; }
        else if (ctx->pc != 0x213AFCu) { ctx->pc = 0x213AFCu; }
    }
    if (ctx->pc != 0x213AFCu) { return; }
    ctx->pc = 0x213AFCu;
    // 0x213afc: 0x3c020027
    ctx->pc = 0x213afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x213b00: 0x70002628
    ctx->pc = 0x213b00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213b04: 0xc069b1c
    ctx->pc = 0x213B04u;
    SET_GPR_U32(ctx, 31, 0x213B0Cu);
    ctx->pc = 0x213B08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 13968));
    ctx->pc = 0x1A6C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightSpecular_0x1a6c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B0Cu; }
        else if (ctx->pc != 0x213B0Cu) { ctx->pc = 0x213B0Cu; }
    }
    if (ctx->pc != 0x213B0Cu) { return; }
    ctx->pc = 0x213B0Cu;
    // 0x213b0c: 0xc069b48
    ctx->pc = 0x213B0Cu;
    SET_GPR_U32(ctx, 31, 0x213B14u);
    ctx->pc = 0x1A6D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightViewTrans_0x1a6d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B14u; }
        else if (ctx->pc != 0x213B14u) { ctx->pc = 0x213B14u; }
    }
    if (ctx->pc != 0x213B14u) { return; }
    ctx->pc = 0x213B14u;
label_213b14:
    // 0x213b14: 0xc06b26c
    ctx->pc = 0x213B14u;
    SET_GPR_U32(ctx, 31, 0x213B1Cu);
    ctx->pc = 0x1AC9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushPerspective_0x1ac9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B1Cu; }
        else if (ctx->pc != 0x213B1Cu) { ctx->pc = 0x213B1Cu; }
    }
    if (ctx->pc != 0x213B1Cu) { return; }
    ctx->pc = 0x213B1Cu;
    // 0x213b1c: 0x3c02477d
    ctx->pc = 0x213b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)18301 << 16));
    // 0x213b20: 0x3442e800
    ctx->pc = 0x213b20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 59392));
    // 0x213b24: 0x44827000
    ctx->pc = 0x213b24u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x213b28: 0x24042aab
    ctx->pc = 0x213b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10923));
    // 0x213b2c: 0x3c023fb6
    ctx->pc = 0x213b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16310 << 16));
    // 0x213b30: 0x3442db6e
    ctx->pc = 0x213b30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 56174));
    // 0x213b34: 0x44826000
    ctx->pc = 0x213b34u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x213b38: 0x3c023c34
    ctx->pc = 0x213b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15412 << 16));
    // 0x213b3c: 0x34423958
    ctx->pc = 0x213b3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 14680));
    // 0x213b40: 0x44826800
    ctx->pc = 0x213b40u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x213b44: 0xc06b0c8
    ctx->pc = 0x213B44u;
    SET_GPR_U32(ctx, 31, 0x213B4Cu);
    ctx->pc = 0x213B48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AC320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPerspectiveI_0x1ac320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B4Cu; }
        else if (ctx->pc != 0x213B4Cu) { ctx->pc = 0x213B4Cu; }
    }
    if (ctx->pc != 0x213B4Cu) { return; }
    ctx->pc = 0x213B4Cu;
    // 0x213b4c: 0xc06a568
    ctx->pc = 0x213B4Cu;
    SET_GPR_U32(ctx, 31, 0x213B54u);
    ctx->pc = 0x213B50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A95A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPutAllEntry_0x1a95a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B54u; }
        else if (ctx->pc != 0x213B54u) { ctx->pc = 0x213B54u; }
    }
    if (ctx->pc != 0x213B54u) { return; }
    ctx->pc = 0x213B54u;
    // 0x213b54: 0xc06b2d8
    ctx->pc = 0x213B54u;
    SET_GPR_U32(ctx, 31, 0x213B5Cu);
    ctx->pc = 0x1ACB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopPerspective_0x1acb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B5Cu; }
        else if (ctx->pc != 0x213B5Cu) { ctx->pc = 0x213B5Cu; }
    }
    if (ctx->pc != 0x213B5Cu) { return; }
    ctx->pc = 0x213B5Cu;
    // 0x213b5c: 0xc069394
    ctx->pc = 0x213B5Cu;
    SET_GPR_U32(ctx, 31, 0x213B64u);
    ctx->pc = 0x213B60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213B64u; }
        else if (ctx->pc != 0x213B64u) { ctx->pc = 0x213B64u; }
    }
    if (ctx->pc != 0x213B64u) { return; }
    ctx->pc = 0x213B64u;
    // 0x213b64: 0x7bbf0000
    ctx->pc = 0x213b64u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213b68: 0x3e00008
    ctx->pc = 0x213B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213B6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213B14u: goto label_213b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213B70u;
}
