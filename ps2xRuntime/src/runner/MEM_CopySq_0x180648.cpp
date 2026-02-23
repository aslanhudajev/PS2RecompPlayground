#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MEM_CopySq
// Address: 0x180648 - 0x180664
void MEM_CopySq_0x180648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MEM_CopySq");


    ctx->pc = 0x180648u;

    // 0x180648: 0x27bdfff0
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18064c: 0xffbf0000
    ctx->pc = 0x18064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180650: 0xc060172
    ctx->pc = 0x180650u;
    SET_GPR_U32(ctx, 31, 0x180658u);
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180658u; }
        else if (ctx->pc != 0x180658u) { ctx->pc = 0x180658u; }
    }
    if (ctx->pc != 0x180658u) { return; }
    ctx->pc = 0x180658u;
    // 0x180658: 0xdfbf0000
    ctx->pc = 0x180658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18065c: 0x3e00008
    ctx->pc = 0x18065Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180664u;
}
