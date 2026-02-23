#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_Finish
// Address: 0x17e508 - 0x17e518
void SVM_Finish_0x17e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_Finish");


    ctx->pc = 0x17e508u;

    // 0x17e508: 0x8f82832c
    ctx->pc = 0x17e508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935340)));
    // 0x17e50c: 0x2442ffff
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17e510: 0x3e00008
    ctx->pc = 0x17E510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E514u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935340), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E518u;
}
