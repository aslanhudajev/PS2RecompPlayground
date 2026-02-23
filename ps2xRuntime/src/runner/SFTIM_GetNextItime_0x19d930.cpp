#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetNextItime
// Address: 0x19d930 - 0x19d970
void SFTIM_GetNextItime_0x19d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetNextItime");


    ctx->pc = 0x19d930u;

    // 0x19d930: 0xa0302d
    ctx->pc = 0x19d930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d934: 0x8c820244
    ctx->pc = 0x19d934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x19d938: 0x8c850240
    ctx->pc = 0x19d938u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 576)));
    // 0x19d93c: 0x8c830248
    ctx->pc = 0x19d93cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 584)));
    // 0x19d940: 0xa22021
    ctx->pc = 0x19d940u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19d944: 0xc4102a
    ctx->pc = 0x19d944u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x19d948: 0x10400003
    ctx->pc = 0x19D948u;
    {
        const bool branch_taken_0x19d948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D94Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        if (branch_taken_0x19d948) {
            ctx->pc = 0x19D958u;
            goto label_19d958;
        }
    }
    ctx->pc = 0x19D950u;
    // 0x19d950: 0x10000005
    ctx->pc = 0x19D950u;
    {
        const bool branch_taken_0x19d950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D954u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d950) {
            ctx->pc = 0x19D968u;
            goto label_19d968;
        }
    }
    ctx->pc = 0x19D958u;
label_19d958:
    // 0x19d958: 0x3c057fff
    ctx->pc = 0x19d958u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
    // 0x19d95c: 0xc3102a
    ctx->pc = 0x19d95cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 3)));
    // 0x19d960: 0x34a5ffff
    ctx->pc = 0x19d960u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x19d964: 0x62280b
    ctx->pc = 0x19d964u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 3));
label_19d968:
    // 0x19d968: 0x3e00008
    ctx->pc = 0x19D968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D96Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D958u: goto label_19d958;
            case 0x19D968u: goto label_19d968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D970u;
}
