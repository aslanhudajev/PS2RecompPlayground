#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetGunDevice0__Fi
// Address: 0x1efde0 - 0x1efe70
void GetGunDevice0__Fi_0x1efde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetGunDevice0__Fi");


    ctx->pc = 0x1efde0u;

    // 0x1efde0: 0x27bdffe0
    ctx->pc = 0x1efde0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1efde4: 0x7fbf0010
    ctx->pc = 0x1efde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1efde8: 0x7fb00000
    ctx->pc = 0x1efde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efdec: 0xc07b518
    ctx->pc = 0x1EFDECu;
    SET_GPR_U32(ctx, 31, 0x1EFDF4u);
    ctx->pc = 0x1EFDF0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDF4u; }
        else if (ctx->pc != 0x1EFDF4u) { ctx->pc = 0x1EFDF4u; }
    }
    if (ctx->pc != 0x1EFDF4u) { return; }
    ctx->pc = 0x1EFDF4u;
    // 0x1efdf4: 0x8c420038
    ctx->pc = 0x1efdf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1efdf8: 0x10400003
    ctx->pc = 0x1EFDF8u;
    {
        const bool branch_taken_0x1efdf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFDFCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1efdf8) {
            ctx->pc = 0x1EFE08u;
            goto label_1efe08;
        }
    }
    ctx->pc = 0x1EFE00u;
    // 0x1efe00: 0x10000017
    ctx->pc = 0x1EFE00u;
    {
        const bool branch_taken_0x1efe00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFE04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1efe00) {
            ctx->pc = 0x1EFE60u;
            goto label_1efe60;
        }
    }
    ctx->pc = 0x1EFE08u;
label_1efe08:
    // 0x1efe08: 0x501021
    ctx->pc = 0x1efe08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1efe0c: 0x21080
    ctx->pc = 0x1efe0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1efe10: 0x501021
    ctx->pc = 0x1efe10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1efe14: 0x21840
    ctx->pc = 0x1efe14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1efe18: 0x3c020050
    ctx->pc = 0x1efe18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1efe1c: 0x2442dcb0
    ctx->pc = 0x1efe1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1efe20: 0x431021
    ctx->pc = 0x1efe20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1efe24: 0x90430000
    ctx->pc = 0x1efe24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efe28: 0x24020006
    ctx->pc = 0x1efe28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1efe2c: 0x1062000c
    ctx->pc = 0x1EFE2Cu;
    {
        const bool branch_taken_0x1efe2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EFE30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1efe2c) {
            ctx->pc = 0x1EFE60u;
            goto label_1efe60;
        }
    }
    ctx->pc = 0x1EFE34u;
    // 0x1efe34: 0x24020004
    ctx->pc = 0x1efe34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efe38: 0x10620007
    ctx->pc = 0x1EFE38u;
    {
        const bool branch_taken_0x1efe38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EFE3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1efe38) {
            ctx->pc = 0x1EFE58u;
            goto label_1efe58;
        }
    }
    ctx->pc = 0x1EFE40u;
    // 0x1efe40: 0x24020007
    ctx->pc = 0x1efe40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1efe44: 0x10620003
    ctx->pc = 0x1EFE44u;
    {
        const bool branch_taken_0x1efe44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1efe44) {
            ctx->pc = 0x1EFE54u;
            goto label_1efe54;
        }
    }
    ctx->pc = 0x1EFE4Cu;
    // 0x1efe4c: 0x10000004
    ctx->pc = 0x1EFE4Cu;
    {
        const bool branch_taken_0x1efe4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFE50u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1efe4c) {
            ctx->pc = 0x1EFE60u;
            goto label_1efe60;
        }
    }
    ctx->pc = 0x1EFE54u;
label_1efe54:
    // 0x1efe54: 0x24020001
    ctx->pc = 0x1efe54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1efe58:
    // 0x1efe58: 0x10000002
    ctx->pc = 0x1EFE58u;
    {
        const bool branch_taken_0x1efe58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFE5Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1efe58) {
            ctx->pc = 0x1EFE64u;
            goto label_1efe64;
        }
    }
    ctx->pc = 0x1EFE60u;
label_1efe60:
    // 0x1efe60: 0x7bbf0010
    ctx->pc = 0x1efe60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1efe64:
    // 0x1efe64: 0x7bb00000
    ctx->pc = 0x1efe64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efe68: 0x3e00008
    ctx->pc = 0x1EFE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFE70u;
}
