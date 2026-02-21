#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetDebug
// Address: 0x2a3030 - 0x2a30c0
void pbResetDebug_0x2a3030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3030u;

    // 0x2a3030: 0x3c020036
    ctx->pc = 0x2a3030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3034: 0x8c44dee0
    ctx->pc = 0x2a3034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a3038: 0x8c82002c
    ctx->pc = 0x2a3038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a303c: 0x54400005
    ctx->pc = 0x2A303Cu;
    {
        const bool branch_taken_0x2a303c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a303c) {
            ctx->pc = 0x2A3040u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->pc = 0x2A3054u;
            goto label_2a3054;
        }
    }
    ctx->pc = 0x2A3044u;
    // 0x2a3044: 0x3c020036
    ctx->pc = 0x2a3044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3048: 0x24427d90
    ctx->pc = 0x2a3048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32144));
    // 0x2a304c: 0xac82002c
    ctx->pc = 0x2a304cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x2a3050: 0x8c83002c
    ctx->pc = 0x2a3050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2a3054:
    // 0x2a3054: 0x3c020036
    ctx->pc = 0x2a3054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3058: 0x2442e150
    ctx->pc = 0x2a3058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959440));
    // 0x2a305c: 0xac620008
    ctx->pc = 0x2a305cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2a3060: 0x8c82002c
    ctx->pc = 0x2a3060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3064: 0x8c45000c
    ctx->pc = 0x2a3064u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3068: 0x8c430008
    ctx->pc = 0x2a3068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a306c: 0xa3102b
    ctx->pc = 0x2a306cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a3070: 0x54400006
    ctx->pc = 0x2A3070u;
    {
        const bool branch_taken_0x2a3070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a3070) {
            ctx->pc = 0x2A3074u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->pc = 0x2A308Cu;
            goto label_2a308c;
        }
    }
    ctx->pc = 0x2A3078u;
    // 0x2a3078: 0x24624e20
    ctx->pc = 0x2a3078u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 20000));
    // 0x2a307c: 0x45102b
    ctx->pc = 0x2a307cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a3080: 0x1040000d
    ctx->pc = 0x2A3080u;
    {
        const bool branch_taken_0x2a3080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a3080) {
            ctx->pc = 0x2A30B8u;
            goto label_2a30b8;
        }
    }
    ctx->pc = 0x2A3088u;
    // 0x2a3088: 0x8c83002c
    ctx->pc = 0x2a3088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2a308c:
    // 0x2a308c: 0x8c620008
    ctx->pc = 0x2a308cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a3090: 0xac62000c
    ctx->pc = 0x2a3090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2a3094: 0x8c83002c
    ctx->pc = 0x2a3094u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a3098: 0x8c620014
    ctx->pc = 0x2a3098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a309c: 0x24420001
    ctx->pc = 0x2a309cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a30a0: 0x14400005
    ctx->pc = 0x2A30A0u;
    {
        const bool branch_taken_0x2a30a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A30A4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2a30a0) {
            ctx->pc = 0x2A30B8u;
            goto label_2a30b8;
        }
    }
    ctx->pc = 0x2A30A8u;
    // 0x2a30a8: 0x8c83002c
    ctx->pc = 0x2a30a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2a30ac: 0x3c02ffff
    ctx->pc = 0x2a30acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a30b0: 0x3442ffff
    ctx->pc = 0x2a30b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2a30b4: 0xac620014
    ctx->pc = 0x2a30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2a30b8:
    // 0x2a30b8: 0x3e00008
    ctx->pc = 0x2A30B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3054u: goto label_2a3054;
            case 0x2A308Cu: goto label_2a308c;
            case 0x2A30B8u: goto label_2a30b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A30C0u;
}
