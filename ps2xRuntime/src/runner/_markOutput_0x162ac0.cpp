#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _markOutput
// Address: 0x162ac0 - 0x162af8
void _markOutput_0x162ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_markOutput");


    ctx->pc = 0x162ac0u;

    // 0x162ac0: 0x3c020023
    ctx->pc = 0x162ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162ac4: 0x24050002
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162ac8: 0x8c43a21c
    ctx->pc = 0x162ac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x162acc: 0x8c640040
    ctx->pc = 0x162accu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x162ad0: 0x8c820008
    ctx->pc = 0x162ad0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x162ad4: 0x10450004
    ctx->pc = 0x162AD4u;
    {
        const bool branch_taken_0x162ad4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x162AD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x162ad4) {
            ctx->pc = 0x162AE8u;
            goto label_162ae8;
        }
    }
    ctx->pc = 0x162ADCu;
    // 0x162adc: 0x8c43a344
    ctx->pc = 0x162adcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943556)));
    // 0x162ae0: 0xac850008
    ctx->pc = 0x162ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x162ae4: 0xac8300ac
    ctx->pc = 0x162ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
label_162ae8:
    // 0x162ae8: 0x3c030023
    ctx->pc = 0x162ae8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x162aec: 0x24020001
    ctx->pc = 0x162aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x162af0: 0x3e00008
    ctx->pc = 0x162AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162AF4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945472), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162AE8u: goto label_162ae8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162AF8u;
}
