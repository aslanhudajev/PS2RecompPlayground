#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setMaxLife__10PlayerTaskFv
// Address: 0x20f510 - 0x20f58c
void setMaxLife__10PlayerTaskFv_0x20f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setMaxLife__10PlayerTaskFv");


    ctx->pc = 0x20f510u;

    // 0x20f510: 0x3c010050
    ctx->pc = 0x20f510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f514: 0x8425e504
    ctx->pc = 0x20f514u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20f518: 0x2403000a
    ctx->pc = 0x20f518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20f51c: 0x14a30015
    ctx->pc = 0x20F51Cu;
    {
        const bool branch_taken_0x20f51c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x20f51c) {
            ctx->pc = 0x20F574u;
            goto label_20f574;
        }
    }
    ctx->pc = 0x20F524u;
    // 0x20f524: 0x8f858bcc
    ctx->pc = 0x20f524u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x20f528: 0x24030002
    ctx->pc = 0x20f528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f52c: 0x10a3000d
    ctx->pc = 0x20F52Cu;
    {
        const bool branch_taken_0x20f52c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x20f52c) {
            ctx->pc = 0x20F564u;
            goto label_20f564;
        }
    }
    ctx->pc = 0x20F534u;
    // 0x20f534: 0x24030001
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f538: 0x10a30006
    ctx->pc = 0x20F538u;
    {
        const bool branch_taken_0x20f538 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x20f538) {
            ctx->pc = 0x20F554u;
            goto label_20f554;
        }
    }
    ctx->pc = 0x20F540u;
    // 0x20f540: 0x8c831cbc
    ctx->pc = 0x20f540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f544: 0x3c010050
    ctx->pc = 0x20f544u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f548: 0x8024fec2
    ctx->pc = 0x20f548u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966978)));
    // 0x20f54c: 0x1000000d
    ctx->pc = 0x20F54Cu;
    {
        const bool branch_taken_0x20f54c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F550u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        if (branch_taken_0x20f54c) {
            ctx->pc = 0x20F584u;
            goto label_20f584;
        }
    }
    ctx->pc = 0x20F554u;
label_20f554:
    // 0x20f554: 0x8c831cbc
    ctx->pc = 0x20f554u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f558: 0x24040009
    ctx->pc = 0x20f558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f55c: 0x10000009
    ctx->pc = 0x20F55Cu;
    {
        const bool branch_taken_0x20f55c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F560u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        if (branch_taken_0x20f55c) {
            ctx->pc = 0x20F584u;
            goto label_20f584;
        }
    }
    ctx->pc = 0x20F564u;
label_20f564:
    // 0x20f564: 0x8c831cbc
    ctx->pc = 0x20f564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f568: 0x24040009
    ctx->pc = 0x20f568u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f56c: 0x10000005
    ctx->pc = 0x20F56Cu;
    {
        const bool branch_taken_0x20f56c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20F570u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
        if (branch_taken_0x20f56c) {
            ctx->pc = 0x20F584u;
            goto label_20f584;
        }
    }
    ctx->pc = 0x20F574u;
label_20f574:
    // 0x20f574: 0x8c831cbc
    ctx->pc = 0x20f574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7356)));
    // 0x20f578: 0x3c010050
    ctx->pc = 0x20f578u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20f57c: 0x8024fec2
    ctx->pc = 0x20f57cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966978)));
    // 0x20f580: 0xac640040
    ctx->pc = 0x20f580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
label_20f584:
    // 0x20f584: 0x3e00008
    ctx->pc = 0x20F584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20F554u: goto label_20f554;
            case 0x20F564u: goto label_20f564;
            case 0x20F574u: goto label_20f574;
            case 0x20F584u: goto label_20f584;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20F58Cu;
}
