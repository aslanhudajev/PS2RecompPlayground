#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: apADXF_WaitReadFinish__FP7_adx_fs
// Address: 0x1e9aa0 - 0x1e9af8
void apADXF_WaitReadFinish__FP7_adx_fs_0x1e9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("apADXF_WaitReadFinish__FP7_adx_fs");


    ctx->pc = 0x1e9aa0u;

    // 0x1e9aa0: 0x27bdffe0
    ctx->pc = 0x1e9aa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9aa4: 0x7fbf0010
    ctx->pc = 0x1e9aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e9aa8: 0x7fb00000
    ctx->pc = 0x1e9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9aac: 0xc05b018
    ctx->pc = 0x1E9AACu;
    SET_GPR_U32(ctx, 31, 0x1E9AB4u);
    ctx->pc = 0x1E9AB0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AB4u; }
        else if (ctx->pc != 0x1E9AB4u) { ctx->pc = 0x1E9AB4u; }
    }
    if (ctx->pc != 0x1E9AB4u) { return; }
    ctx->pc = 0x1E9AB4u;
    // 0x1e9ab4: 0x10000007
    ctx->pc = 0x1E9AB4u;
    {
        const bool branch_taken_0x1e9ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9AB8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e9ab4) {
            ctx->pc = 0x1E9AD4u;
            goto label_1e9ad4;
        }
    }
    ctx->pc = 0x1E9ABCu;
label_1e9abc:
    // 0x1e9abc: 0xc07a720
    ctx->pc = 0x1E9ABCu;
    SET_GPR_U32(ctx, 31, 0x1E9AC4u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AC4u; }
        else if (ctx->pc != 0x1E9AC4u) { ctx->pc = 0x1E9AC4u; }
    }
    if (ctx->pc != 0x1E9AC4u) { return; }
    ctx->pc = 0x1E9AC4u;
    // 0x1e9ac4: 0xc05b018
    ctx->pc = 0x1E9AC4u;
    SET_GPR_U32(ctx, 31, 0x1E9ACCu);
    ctx->pc = 0x1E9AC8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9ACCu; }
        else if (ctx->pc != 0x1E9ACCu) { ctx->pc = 0x1E9ACCu; }
    }
    if (ctx->pc != 0x1E9ACCu) { return; }
    ctx->pc = 0x1E9ACCu;
    // 0x1e9acc: 0x0
    ctx->pc = 0x1e9accu;
    // NOP
    // 0x1e9ad0: 0x24030001
    ctx->pc = 0x1e9ad0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e9ad4:
    // 0x1e9ad4: 0x10430004
    ctx->pc = 0x1E9AD4u;
    {
        const bool branch_taken_0x1e9ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E9AD8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e9ad4) {
            ctx->pc = 0x1E9AE8u;
            goto label_1e9ae8;
        }
    }
    ctx->pc = 0x1E9ADCu;
    // 0x1e9adc: 0x1443fff7
    ctx->pc = 0x1E9ADCu;
    {
        const bool branch_taken_0x1e9adc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e9adc) {
            ctx->pc = 0x1E9ABCu;
            goto label_1e9abc;
        }
    }
    ctx->pc = 0x1E9AE4u;
    // 0x1e9ae4: 0x0
    ctx->pc = 0x1e9ae4u;
    // NOP
label_1e9ae8:
    // 0x1e9ae8: 0x7bbf0010
    ctx->pc = 0x1e9ae8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9aec: 0x7bb00000
    ctx->pc = 0x1e9aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9af0: 0x3e00008
    ctx->pc = 0x1E9AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9AF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9ABCu: goto label_1e9abc;
            case 0x1E9AD4u: goto label_1e9ad4;
            case 0x1E9AE8u: goto label_1e9ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9AF8u;
}
