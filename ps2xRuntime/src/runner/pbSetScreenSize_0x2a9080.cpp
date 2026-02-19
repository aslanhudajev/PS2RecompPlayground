#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetScreenSize
// Address: 0x2a9080 - 0x2a9100
void pbSetScreenSize_0x2a9080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a9080u;

    // 0x2a9080: 0x27bdfff0
    ctx->pc = 0x2a9080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9084: 0xffbf0000
    ctx->pc = 0x2a9084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9088: 0x3c020036
    ctx->pc = 0x2a9088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a908c: 0x8c43dee0
    ctx->pc = 0x2a908cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a9090: 0x8c620010
    ctx->pc = 0x2a9090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a9094: 0x46006024
    ctx->pc = 0x2a9094u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2a9098: 0xe4400020
    ctx->pc = 0x2a9098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2a909c: 0x8c620010
    ctx->pc = 0x2a909cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a90a0: 0x46006824
    ctx->pc = 0x2a90a0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x2a90a4: 0xe4400024
    ctx->pc = 0x2a90a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2a90a8: 0x8c640010
    ctx->pc = 0x2a90a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a90ac: 0x24020001
    ctx->pc = 0x2a90acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a90b0: 0xac820030
    ctx->pc = 0x2a90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x2a90b4: 0x8c620010
    ctx->pc = 0x2a90b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a90b8: 0x46007024
    ctx->pc = 0x2a90b8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[14]);
    // 0x2a90bc: 0xe4400034
    ctx->pc = 0x2a90bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2a90c0: 0x8c630010
    ctx->pc = 0x2a90c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a90c4: 0x8c620028
    ctx->pc = 0x2a90c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2a90c8: 0x10400004
    ctx->pc = 0x2A90C8u;
    {
        const bool branch_taken_0x2a90c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a90c8) {
            ctx->pc = 0x2A90DCu;
            goto label_2a90dc;
        }
    }
    ctx->pc = 0x2A90D0u;
    // 0x2a90d0: 0x8c62002c
    ctx->pc = 0x2a90d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a90d4: 0x14400008
    ctx->pc = 0x2A90D4u;
    {
        const bool branch_taken_0x2a90d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A90D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2a90d4) {
            ctx->pc = 0x2A90F8u;
            goto label_2a90f8;
        }
    }
    ctx->pc = 0x2A90DCu;
label_2a90dc:
    // 0x2a90dc: 0x3c014400
    ctx->pc = 0x2a90dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17408 << 16));
    // 0x2a90e0: 0x44816000
    ctx->pc = 0x2a90e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2a90e4: 0x3c0143c0
    ctx->pc = 0x2a90e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17344 << 16));
    // 0x2a90e8: 0x44816800
    ctx->pc = 0x2a90e8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2a90ec: 0xc0aa416
    ctx->pc = 0x2A90ECu;
    SET_GPR_U32(ctx, 31, 0x2A90F4u);
    ctx->pc = 0x2A9058u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetVirtualScreenSize_0x2a9058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A90F4u; }
    }
    if (ctx->pc != 0x2A90F4u) { return; }
    ctx->pc = 0x2A90F4u;
    // 0x2a90f4: 0xdfbf0000
    ctx->pc = 0x2a90f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a90f8:
    // 0x2a90f8: 0x80aa3a2
    ctx->pc = 0x2A90F8u;
    ctx->pc = 0x2A90FCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2A8E88u;
    pbSetupFrameSize_0x2a8e88(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9100u;
}
