#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setBGCtrlTbl__11BGCtrlClassFs
// Address: 0x1c8860 - 0x1c8898
void setBGCtrlTbl__11BGCtrlClassFs_0x1c8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setBGCtrlTbl__11BGCtrlClassFs");


    ctx->pc = 0x1c8860u;

    // 0x1c8860: 0x51c3c
    ctx->pc = 0x1c8860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1c8864: 0x31c3f
    ctx->pc = 0x1c8864u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c8868: 0x33080
    ctx->pc = 0x1c8868u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c886c: 0x3c030026
    ctx->pc = 0x1c886cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1c8870: 0x24634c20
    ctx->pc = 0x1c8870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19488));
    // 0x1c8874: 0x661821
    ctx->pc = 0x1c8874u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c8878: 0x8c650000
    ctx->pc = 0x1c8878u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c887c: 0x3c030026
    ctx->pc = 0x1c887cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1c8880: 0x24634c50
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19536));
    // 0x1c8884: 0x661821
    ctx->pc = 0x1c8884u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c8888: 0xac85000c
    ctx->pc = 0x1c8888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1c888c: 0x8c630000
    ctx->pc = 0x1c888cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8890: 0x3e00008
    ctx->pc = 0x1C8890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8894u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C8898u;
}
