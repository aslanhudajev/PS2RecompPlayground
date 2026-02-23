#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eSETDOF__11DofCtrlTaskFPUiii
// Address: 0x1d4fb0 - 0x1d5024
void eSETDOF__11DofCtrlTaskFPUiii_0x1d4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eSETDOF__11DofCtrlTaskFPUiii");


    ctx->pc = 0x1d4fb0u;

    // 0x1d4fb0: 0x27bdffb0
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d4fb4: 0x7fbf0040
    ctx->pc = 0x1d4fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d4fb8: 0x7fb30030
    ctx->pc = 0x1d4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4fbc: 0x7fb20020
    ctx->pc = 0x1d4fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4fc0: 0x7fb10010
    ctx->pc = 0x1d4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4fc4: 0x7fb00000
    ctx->pc = 0x1d4fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4fc8: 0x8cb10008
    ctx->pc = 0x1d4fc8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d4fcc: 0x70e09628
    ctx->pc = 0x1d4fccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1d4fd0: 0x70809e28
    ctx->pc = 0x1d4fd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d4fd4: 0x10c00005
    ctx->pc = 0x1D4FD4u;
    {
        const bool branch_taken_0x1d4fd4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4FD8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 12));
        if (branch_taken_0x1d4fd4) {
            ctx->pc = 0x1D4FECu;
            goto label_1d4fec;
        }
    }
    ctx->pc = 0x1D4FDCu;
    // 0x1d4fdc: 0xc62d0004
    ctx->pc = 0x1d4fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4fe0: 0xc075324
    ctx->pc = 0x1D4FE0u;
    SET_GPR_U32(ctx, 31, 0x1D4FE8u);
    ctx->pc = 0x1D4FE4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1D4C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeNear__11DofCtrlTaskFff_0x1d4c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4FE8u; }
        else if (ctx->pc != 0x1D4FE8u) { ctx->pc = 0x1D4FE8u; }
    }
    if (ctx->pc != 0x1D4FE8u) { return; }
    ctx->pc = 0x1D4FE8u;
    // 0x1d4fe8: 0x26310008
    ctx->pc = 0x1d4fe8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_1d4fec:
    // 0x1d4fec: 0x12400006
    ctx->pc = 0x1D4FECu;
    {
        const bool branch_taken_0x1d4fec = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4FF0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d4fec) {
            ctx->pc = 0x1D5008u;
            goto label_1d5008;
        }
    }
    ctx->pc = 0x1D4FF4u;
    // 0x1d4ff4: 0xc62c0000
    ctx->pc = 0x1d4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d4ff8: 0xc62d0004
    ctx->pc = 0x1d4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d4ffc: 0xc075330
    ctx->pc = 0x1D4FFCu;
    SET_GPR_U32(ctx, 31, 0x1D5004u);
    ctx->pc = 0x1D5000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D4CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeFar__11DofCtrlTaskFff_0x1d4cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5004u; }
        else if (ctx->pc != 0x1D5004u) { ctx->pc = 0x1D5004u; }
    }
    if (ctx->pc != 0x1D5004u) { return; }
    ctx->pc = 0x1D5004u;
    // 0x1d5004: 0x72001628
    ctx->pc = 0x1d5004u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1d5008:
    // 0x1d5008: 0x7bbf0040
    ctx->pc = 0x1d5008u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d500c: 0x7bb30030
    ctx->pc = 0x1d500cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5010: 0x7bb20020
    ctx->pc = 0x1d5010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5014: 0x7bb10010
    ctx->pc = 0x1d5014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5018: 0x7bb00000
    ctx->pc = 0x1d5018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d501c: 0x3e00008
    ctx->pc = 0x1D501Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4FECu: goto label_1d4fec;
            case 0x1D5008u: goto label_1d5008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D5024u;
}
