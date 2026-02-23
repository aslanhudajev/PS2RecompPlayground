#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_InitClip0255
// Address: 0x1835d8 - 0x183660
void mpvcmc_InitClip0255_0x1835d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_InitClip0255");


    ctx->pc = 0x1835d8u;

    // 0x1835d8: 0x3c020024
    ctx->pc = 0x1835d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1835dc: 0x2403017f
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 383));
    // 0x1835e0: 0x244415c8
    ctx->pc = 0x1835e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 5576));
    // 0x1835e4: 0x0
    ctx->pc = 0x1835e4u;
    // NOP
label_1835e8:
    // 0x1835e8: 0xa0800000
    ctx->pc = 0x1835e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1835ec: 0x2463ffff
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1835f0: 0x24840001
    ctx->pc = 0x1835f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1835f4: 0x0
    ctx->pc = 0x1835f4u;
    // NOP
    // 0x1835f8: 0x0
    ctx->pc = 0x1835f8u;
    // NOP
    // 0x1835fc: 0x461fffa
    ctx->pc = 0x1835FCu;
    {
        const bool branch_taken_0x1835fc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1835fc) {
            ctx->pc = 0x1835E8u;
            goto label_1835e8;
        }
    }
    ctx->pc = 0x183604u;
    // 0x183604: 0x182d
    ctx->pc = 0x183604u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183608:
    // 0x183608: 0xa0830000
    ctx->pc = 0x183608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18360c: 0x24630001
    ctx->pc = 0x18360cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x183610: 0x24840001
    ctx->pc = 0x183610u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x183614: 0x28620100
    ctx->pc = 0x183614u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 256));
    // 0x183618: 0x0
    ctx->pc = 0x183618u;
    // NOP
    // 0x18361c: 0x1440fffa
    ctx->pc = 0x18361Cu;
    {
        const bool branch_taken_0x18361c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18361c) {
            ctx->pc = 0x183608u;
            goto label_183608;
        }
    }
    ctx->pc = 0x183624u;
    // 0x183624: 0x240200ff
    ctx->pc = 0x183624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x183628: 0x2403017f
    ctx->pc = 0x183628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 383));
    // 0x18362c: 0x0
    ctx->pc = 0x18362cu;
    // NOP
label_183630:
    // 0x183630: 0xa0820000
    ctx->pc = 0x183630u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x183634: 0x2463ffff
    ctx->pc = 0x183634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x183638: 0x24840001
    ctx->pc = 0x183638u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x18363c: 0x0
    ctx->pc = 0x18363cu;
    // NOP
    // 0x183640: 0x0
    ctx->pc = 0x183640u;
    // NOP
    // 0x183644: 0x461fffa
    ctx->pc = 0x183644u;
    {
        const bool branch_taken_0x183644 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x183644) {
            ctx->pc = 0x183630u;
            goto label_183630;
        }
    }
    ctx->pc = 0x18364Cu;
    // 0x18364c: 0x3c020024
    ctx->pc = 0x18364cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x183650: 0x3c030024
    ctx->pc = 0x183650u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x183654: 0x24421748
    ctx->pc = 0x183654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5960));
    // 0x183658: 0x3e00008
    ctx->pc = 0x183658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18365Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 5568), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1835E8u: goto label_1835e8;
            case 0x183608u: goto label_183608;
            case 0x183630u: goto label_183630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x183660u;
}
