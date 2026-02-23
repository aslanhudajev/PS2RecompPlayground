#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyEntryDecSkipCb
// Address: 0x18d668 - 0x18d688
void mwPlyEntryDecSkipCb_0x18d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyEntryDecSkipCb");


    ctx->pc = 0x18d668u;

    // 0x18d668: 0x10800005
    ctx->pc = 0x18D668u;
    {
        const bool branch_taken_0x18d668 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D66Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
        if (branch_taken_0x18d668) {
            ctx->pc = 0x18D680u;
            goto label_18d680;
        }
    }
    ctx->pc = 0x18D670u;
    // 0x18d670: 0xa0302d
    ctx->pc = 0x18d670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d674: 0x40202d
    ctx->pc = 0x18d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d678: 0x806741e
    ctx->pc = 0x18D678u;
    ctx->pc = 0x18D67Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18D680u;
label_18d680:
    // 0x18d680: 0x3e00008
    ctx->pc = 0x18D680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D680u: goto label_18d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D688u;
}
