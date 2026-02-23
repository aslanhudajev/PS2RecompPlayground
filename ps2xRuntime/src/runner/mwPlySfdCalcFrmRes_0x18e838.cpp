#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdCalcFrmRes
// Address: 0x18e838 - 0x18e880
void mwPlySfdCalcFrmRes_0x18e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdCalcFrmRes");


    ctx->pc = 0x18e838u;

    // 0x18e838: 0x417c2
    ctx->pc = 0x18e838u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
    // 0x18e83c: 0x240bffff
    ctx->pc = 0x18e83cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e840: 0x821021
    ctx->pc = 0x18e840u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18e844: 0x51fc2
    ctx->pc = 0x18e844u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 31));
    // 0x18e848: 0x21043
    ctx->pc = 0x18e848u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x18e84c: 0xa31821
    ctx->pc = 0x18e84cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18e850: 0x244a001f
    ctx->pc = 0x18e850u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 31));
    // 0x18e854: 0x31843
    ctx->pc = 0x18e854u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x18e858: 0x2442003e
    ctx->pc = 0x18e858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 62));
    // 0x18e85c: 0x16a582a
    ctx->pc = 0x18e85cu;
    SET_GPR_U32(ctx, 11, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 10)));
    // 0x18e860: 0x14b100b
    ctx->pc = 0x18e860u;
    if (GPR_U32(ctx, 11) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 10));
    // 0x18e864: 0x21143
    ctx->pc = 0x18e864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x18e868: 0x21140
    ctx->pc = 0x18e868u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x18e86c: 0xad020000
    ctx->pc = 0x18e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x18e870: 0xad230000
    ctx->pc = 0x18e870u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x18e874: 0xacc40000
    ctx->pc = 0x18e874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x18e878: 0x3e00008
    ctx->pc = 0x18E878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E87Cu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E880u;
}
