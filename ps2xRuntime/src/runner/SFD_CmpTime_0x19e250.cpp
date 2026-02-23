#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_CmpTime
// Address: 0x19e250 - 0x19e26c
void SFD_CmpTime_0x19e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_CmpTime");


    ctx->pc = 0x19e250u;

    // 0x19e250: 0x27bdfff0
    ctx->pc = 0x19e250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e254: 0xffbf0000
    ctx->pc = 0x19e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e258: 0xc05f946
    ctx->pc = 0x19E258u;
    SET_GPR_U32(ctx, 31, 0x19E260u);
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E260u; }
        else if (ctx->pc != 0x19E260u) { ctx->pc = 0x19E260u; }
    }
    if (ctx->pc != 0x19E260u) { return; }
    ctx->pc = 0x19E260u;
    // 0x19e260: 0xdfbf0000
    ctx->pc = 0x19e260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e264: 0x3e00008
    ctx->pc = 0x19E264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E268u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E26Cu;
}
