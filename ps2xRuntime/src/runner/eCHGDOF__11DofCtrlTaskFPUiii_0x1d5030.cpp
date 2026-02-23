#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eCHGDOF__11DofCtrlTaskFPUiii
// Address: 0x1d5030 - 0x1d50bc
void eCHGDOF__11DofCtrlTaskFPUiii_0x1d5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eCHGDOF__11DofCtrlTaskFPUiii");


    ctx->pc = 0x1d5030u;

    // 0x1d5030: 0x27bdffa0
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d5034: 0x7fbf0050
    ctx->pc = 0x1d5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1d5038: 0x7fb40040
    ctx->pc = 0x1d5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d503c: 0x7fb30030
    ctx->pc = 0x1d503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d5040: 0x7fb20020
    ctx->pc = 0x1d5040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5044: 0x7fb10010
    ctx->pc = 0x1d5044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5048: 0x7fb00000
    ctx->pc = 0x1d5048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d504c: 0x8cb20008
    ctx->pc = 0x1d504cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d5050: 0x70e09e28
    ctx->pc = 0x1d5050u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1d5054: 0x7080a628
    ctx->pc = 0x1d5054u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d5058: 0x24b0000c
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 12));
    // 0x1d505c: 0x8e510000
    ctx->pc = 0x1d505cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d5060: 0x10c00006
    ctx->pc = 0x1D5060u;
    {
        const bool branch_taken_0x1d5060 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5064u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x1d5060) {
            ctx->pc = 0x1D507Cu;
            goto label_1d507c;
        }
    }
    ctx->pc = 0x1D5068u;
    // 0x1d5068: 0xc64c0000
    ctx->pc = 0x1d5068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d506c: 0xc64d0004
    ctx->pc = 0x1d506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d5070: 0xc07533c
    ctx->pc = 0x1D5070u;
    SET_GPR_U32(ctx, 31, 0x1D5078u);
    ctx->pc = 0x1D5074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D4CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        gradNear__11DofCtrlTaskFffi_0x1d4cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5078u; }
        else if (ctx->pc != 0x1D5078u) { ctx->pc = 0x1D5078u; }
    }
    if (ctx->pc != 0x1D5078u) { return; }
    ctx->pc = 0x1D5078u;
    // 0x1d5078: 0x26520008
    ctx->pc = 0x1d5078u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
label_1d507c:
    // 0x1d507c: 0x12600007
    ctx->pc = 0x1D507Cu;
    {
        const bool branch_taken_0x1d507c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D5080u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d507c) {
            ctx->pc = 0x1D509Cu;
            goto label_1d509c;
        }
    }
    ctx->pc = 0x1D5084u;
    // 0x1d5084: 0xc64c0000
    ctx->pc = 0x1d5084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d5088: 0xc64d0004
    ctx->pc = 0x1d5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d508c: 0x72802628
    ctx->pc = 0x1d508cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d5090: 0xc07534c
    ctx->pc = 0x1D5090u;
    SET_GPR_U32(ctx, 31, 0x1D5098u);
    ctx->pc = 0x1D5094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D4D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        gradFar__11DofCtrlTaskFffi_0x1d4d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5098u; }
        else if (ctx->pc != 0x1D5098u) { ctx->pc = 0x1D5098u; }
    }
    if (ctx->pc != 0x1D5098u) { return; }
    ctx->pc = 0x1D5098u;
    // 0x1d5098: 0x72001628
    ctx->pc = 0x1d5098u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d509c:
    // 0x1d509c: 0x7bbf0050
    ctx->pc = 0x1d509cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d50a0: 0x7bb40040
    ctx->pc = 0x1d50a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d50a4: 0x7bb30030
    ctx->pc = 0x1d50a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d50a8: 0x7bb20020
    ctx->pc = 0x1d50a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d50ac: 0x7bb10010
    ctx->pc = 0x1d50acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d50b0: 0x7bb00000
    ctx->pc = 0x1d50b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d50b4: 0x3e00008
    ctx->pc = 0x1D50B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D50B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D507Cu: goto label_1d507c;
            case 0x1D509Cu: goto label_1d509c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D50BCu;
}
