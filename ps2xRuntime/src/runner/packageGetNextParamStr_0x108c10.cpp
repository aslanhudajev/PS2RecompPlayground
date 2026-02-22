#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: packageGetNextParamStr
// Address: 0x108c10 - 0x108cb4
void packageGetNextParamStr_0x108c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108c10u;

    // 0x108c10: 0x27bdfef0
    ctx->pc = 0x108c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x108c14: 0x8f8382bc
    ctx->pc = 0x108c14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x108c18: 0xffbf0100
    ctx->pc = 0x108c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x108c1c: 0x282d
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c20: 0x3a0302d
    ctx->pc = 0x108c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c24: 0x240400ff
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
    // 0x108c28: 0x27a200ff
    ctx->pc = 0x108c28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 255));
    // 0x108c2c: 0x0
    ctx->pc = 0x108c2cu;
    // NOP
label_108c30:
    // 0x108c30: 0xa0400000
    ctx->pc = 0x108c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x108c34: 0x2484ffff
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x108c38: 0x2442ffff
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108c3c: 0x0
    ctx->pc = 0x108c3cu;
    // NOP
    // 0x108c40: 0x0
    ctx->pc = 0x108c40u;
    // NOP
    // 0x108c44: 0x481fffa
    ctx->pc = 0x108C44u;
    {
        const bool branch_taken_0x108c44 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x108c44) {
            ctx->pc = 0x108C30u;
            goto label_108c30;
        }
    }
    ctx->pc = 0x108C4Cu;
    // 0x108c4c: 0x90620000
    ctx->pc = 0x108c4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108c50: 0x1040000d
    ctx->pc = 0x108C50u;
    {
        const bool branch_taken_0x108c50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x108C54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108c50) {
            ctx->pc = 0x108C88u;
            goto label_108c88;
        }
    }
    ctx->pc = 0x108C58u;
    // 0x108c58: 0x10000003
    ctx->pc = 0x108C58u;
    {
        const bool branch_taken_0x108c58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x108C5Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x108c58) {
            ctx->pc = 0x108C68u;
            goto label_108c68;
        }
    }
    ctx->pc = 0x108C60u;
label_108c60:
    // 0x108c60: 0x3a53021
    ctx->pc = 0x108c60u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x108c64: 0x90820000
    ctx->pc = 0x108c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_108c68:
    // 0x108c68: 0x24830001
    ctx->pc = 0x108c68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x108c6c: 0x24a50001
    ctx->pc = 0x108c6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x108c70: 0xa0c20000
    ctx->pc = 0x108c70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x108c74: 0xaf8382bc
    ctx->pc = 0x108c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108c78: 0x90620000
    ctx->pc = 0x108c78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108c7c: 0x1440fff8
    ctx->pc = 0x108C7Cu;
    {
        const bool branch_taken_0x108c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x108C80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x108c7c) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108C84u;
    // 0x108c84: 0x3a53021
    ctx->pc = 0x108c84u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_108c88:
    // 0x108c88: 0x24630001
    ctx->pc = 0x108c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x108c8c: 0x3c040017
    ctx->pc = 0x108c8cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x108c90: 0xaf8382bc
    ctx->pc = 0x108c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108c94: 0x24845c70
    ctx->pc = 0x108c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23664));
    // 0x108c98: 0x3a0282d
    ctx->pc = 0x108c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c9c: 0xc04ace4
    ctx->pc = 0x108C9Cu;
    SET_GPR_U32(ctx, 31, 0x108CA4u);
    ctx->pc = 0x108CA0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CA4u; }
    }
    if (ctx->pc != 0x108CA4u) { return; }
    ctx->pc = 0x108CA4u;
    // 0x108ca4: 0xdfbf0100
    ctx->pc = 0x108ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x108ca8: 0x3a0102d
    ctx->pc = 0x108ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cac: 0x3e00008
    ctx->pc = 0x108CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108CB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108C30u: goto label_108c30;
            case 0x108C60u: goto label_108c60;
            case 0x108C68u: goto label_108c68;
            case 0x108C88u: goto label_108c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108CB4u;
}
