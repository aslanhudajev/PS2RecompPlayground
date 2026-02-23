#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsPtypeSkip
// Address: 0x197ad0 - 0x197b24
void sfmpv_IsPtypeSkip_0x197ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsPtypeSkip");


    ctx->pc = 0x197ad0u;

    // 0x197ad0: 0x24020002
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x197ad4: 0x10a2000d
    ctx->pc = 0x197AD4u;
    {
        const bool branch_taken_0x197ad4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x197AD8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2452));
        if (branch_taken_0x197ad4) {
            ctx->pc = 0x197B0Cu;
            goto label_197b0c;
        }
    }
    ctx->pc = 0x197ADCu;
    // 0x197adc: 0x2ca20003
    ctx->pc = 0x197adcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 3));
    // 0x197ae0: 0x10400005
    ctx->pc = 0x197AE0u;
    {
        const bool branch_taken_0x197ae0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197AE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x197ae0) {
            ctx->pc = 0x197AF8u;
            goto label_197af8;
        }
    }
    ctx->pc = 0x197AE8u;
    // 0x197ae8: 0x50a2000b
    ctx->pc = 0x197AE8u;
    {
        const bool branch_taken_0x197ae8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        if (branch_taken_0x197ae8) {
            ctx->pc = 0x197AECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197AF0u;
    // 0x197af0: 0x1000000a
    ctx->pc = 0x197AF0u;
    {
        const bool branch_taken_0x197af0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x197af0) {
            ctx->pc = 0x197B1Cu;
            goto label_197b1c;
        }
    }
    ctx->pc = 0x197AF8u;
label_197af8:
    // 0x197af8: 0x24020003
    ctx->pc = 0x197af8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x197afc: 0x10a20005
    ctx->pc = 0x197AFCu;
    {
        const bool branch_taken_0x197afc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x197B00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x197afc) {
            ctx->pc = 0x197B14u;
            goto label_197b14;
        }
    }
    ctx->pc = 0x197B04u;
    // 0x197b04: 0x10000005
    ctx->pc = 0x197B04u;
    {
        const bool branch_taken_0x197b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x197b04) {
            ctx->pc = 0x197B1Cu;
            goto label_197b1c;
        }
    }
    ctx->pc = 0x197B0Cu;
label_197b0c:
    // 0x197b0c: 0x10000002
    ctx->pc = 0x197B0Cu;
    {
        const bool branch_taken_0x197b0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197B10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
        if (branch_taken_0x197b0c) {
            ctx->pc = 0x197B18u;
            goto label_197b18;
        }
    }
    ctx->pc = 0x197B14u;
label_197b14:
    // 0x197b14: 0x8c820010
    ctx->pc = 0x197b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_197b18:
    // 0x197b18: 0x2c420001
    ctx->pc = 0x197b18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_197b1c:
    // 0x197b1c: 0x3e00008
    ctx->pc = 0x197B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197AF8u: goto label_197af8;
            case 0x197B0Cu: goto label_197b0c;
            case 0x197B14u: goto label_197b14;
            case 0x197B18u: goto label_197b18;
            case 0x197B1Cu: goto label_197b1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197B24u;
}
