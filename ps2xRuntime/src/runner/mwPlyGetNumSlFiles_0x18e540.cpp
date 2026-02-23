#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetNumSlFiles
// Address: 0x18e540 - 0x18e55c
void mwPlyGetNumSlFiles_0x18e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetNumSlFiles");


    ctx->pc = 0x18e540u;

    // 0x18e540: 0x27bdfff0
    ctx->pc = 0x18e540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e544: 0xffbf0000
    ctx->pc = 0x18e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e548: 0xc05e8e6
    ctx->pc = 0x18E548u;
    SET_GPR_U32(ctx, 31, 0x18E550u);
    ctx->pc = 0x18E54Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 128)));
    ctx->pc = 0x17A398u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_GetNumStm_0x17a398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E550u; }
        else if (ctx->pc != 0x18E550u) { ctx->pc = 0x18E550u; }
    }
    if (ctx->pc != 0x18E550u) { return; }
    ctx->pc = 0x18E550u;
    // 0x18e550: 0xdfbf0000
    ctx->pc = 0x18e550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e554: 0x3e00008
    ctx->pc = 0x18E554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E558u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E55Cu;
}
