#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_GetObjectRadius
// Address: 0x2c67a0 - 0x2c67c8
void MBOX_GetObjectRadius_0x2c67a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c67a0u;

    // 0x2c67a0: 0x27bdfff0
    ctx->pc = 0x2c67a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c67a4: 0xffbf0000
    ctx->pc = 0x2c67a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c67a8: 0xc0b19c8
    ctx->pc = 0x2C67A8u;
    SET_GPR_U32(ctx, 31, 0x2C67B0u);
    ctx->pc = 0x2C6720u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_GetObjectDef_0x2c6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C67B0u; }
    }
    if (ctx->pc != 0x2C67B0u) { return; }
    ctx->pc = 0x2C67B0u;
    // 0x2c67b0: 0x44800000
    ctx->pc = 0x2c67b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c67b4: 0x54400001
    ctx->pc = 0x2C67B4u;
    {
        const bool branch_taken_0x2c67b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c67b4) {
            ctx->pc = 0x2C67B8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2C67BCu;
            goto label_2c67bc;
        }
    }
    ctx->pc = 0x2C67BCu;
label_2c67bc:
    // 0x2c67bc: 0xdfbf0000
    ctx->pc = 0x2c67bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c67c0: 0x3e00008
    ctx->pc = 0x2C67C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C67C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C67BCu: goto label_2c67bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C67C8u;
}
