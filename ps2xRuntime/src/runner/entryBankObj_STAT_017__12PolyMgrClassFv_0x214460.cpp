#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_017__12PolyMgrClassFv
// Address: 0x214460 - 0x2144c8
void entryBankObj_STAT_017__12PolyMgrClassFv_0x214460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_017__12PolyMgrClassFv");


    ctx->pc = 0x214460u;

    // 0x214460: 0x3c010091
    ctx->pc = 0x214460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214464: 0x8c2219a4
    ctx->pc = 0x214464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 6564)));
    // 0x214468: 0x24420008
    ctx->pc = 0x214468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x21446c: 0x3c010091
    ctx->pc = 0x21446cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214470: 0xac2219a4
    ctx->pc = 0x214470u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6564), GPR_U32(ctx, 2));
    // 0x214474: 0x3c010091
    ctx->pc = 0x214474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214478: 0x842219a8
    ctx->pc = 0x214478u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 6568)));
    // 0x21447c: 0x24420001
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x214480: 0x3c010091
    ctx->pc = 0x214480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x214484: 0xa42219a8
    ctx->pc = 0x214484u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6568), (uint16_t)GPR_U32(ctx, 2));
    // 0x214488: 0x3c010091
    ctx->pc = 0x214488u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x21448c: 0x8c2219a4
    ctx->pc = 0x21448cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 6564)));
    // 0x214490: 0x8c420004
    ctx->pc = 0x214490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214494: 0x4400006
    ctx->pc = 0x214494u;
    {
        const bool branch_taken_0x214494 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x214494) {
            ctx->pc = 0x2144B0u;
            goto label_2144b0;
        }
    }
    ctx->pc = 0x21449Cu;
    // 0x21449c: 0x8c830000
    ctx->pc = 0x21449cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2144a0: 0x24020001
    ctx->pc = 0x2144a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2144a4: 0x24040005
    ctx->pc = 0x2144a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2144a8: 0x10000005
    ctx->pc = 0x2144A8u;
    {
        const bool branch_taken_0x2144a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2144ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x2144a8) {
            ctx->pc = 0x2144C0u;
            goto label_2144c0;
        }
    }
    ctx->pc = 0x2144B0u;
label_2144b0:
    // 0x2144b0: 0x8c830000
    ctx->pc = 0x2144b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2144b4: 0x24020001
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2144b8: 0x24040007
    ctx->pc = 0x2144b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2144bc: 0xac64000c
    ctx->pc = 0x2144bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_2144c0:
    // 0x2144c0: 0x3e00008
    ctx->pc = 0x2144C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2144B0u: goto label_2144b0;
            case 0x2144C0u: goto label_2144c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2144C8u;
}
