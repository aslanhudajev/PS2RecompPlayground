#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_VbIn
// Address: 0x19ab28 - 0x19ab64
void SFD_VbIn_0x19ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_VbIn");


    ctx->pc = 0x19ab28u;

    // 0x19ab28: 0x27bdffe0
    ctx->pc = 0x19ab28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ab2c: 0xffb00000
    ctx->pc = 0x19ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ab30: 0x3c100026
    ctx->pc = 0x19ab30u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x19ab34: 0xffbf0010
    ctx->pc = 0x19ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ab38: 0x8e02df58
    ctx->pc = 0x19ab38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958936)));
    // 0x19ab3c: 0x24420001
    ctx->pc = 0x19ab3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x19ab40: 0xc06765c
    ctx->pc = 0x19AB40u;
    SET_GPR_U32(ctx, 31, 0x19AB48u);
    ctx->pc = 0x19AB44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958936), GPR_U32(ctx, 2));
    ctx->pc = 0x19D970u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_VbIn_0x19d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB48u; }
        else if (ctx->pc != 0x19AB48u) { ctx->pc = 0x19AB48u; }
    }
    if (ctx->pc != 0x19AB48u) { return; }
    ctx->pc = 0x19AB48u;
    // 0x19ab48: 0x8e02df58
    ctx->pc = 0x19ab48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958936)));
    // 0x19ab4c: 0xdfbf0010
    ctx->pc = 0x19ab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ab50: 0x2442ffff
    ctx->pc = 0x19ab50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19ab54: 0xae02df58
    ctx->pc = 0x19ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958936), GPR_U32(ctx, 2));
    // 0x19ab58: 0xdfb00000
    ctx->pc = 0x19ab58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab5c: 0x3e00008
    ctx->pc = 0x19AB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AB64u;
}
