#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdStartSj
// Address: 0x18cd18 - 0x18cd64
void mwSfdStartSj_0x18cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdStartSj");


    ctx->pc = 0x18cd18u;

    // 0x18cd18: 0x27bdffd0
    ctx->pc = 0x18cd18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18cd1c: 0xffb00000
    ctx->pc = 0x18cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18cd20: 0x80802d
    ctx->pc = 0x18cd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd24: 0xffb10010
    ctx->pc = 0x18cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18cd28: 0xffbf0020
    ctx->pc = 0x18cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18cd2c: 0xc06335a
    ctx->pc = 0x18CD2Cu;
    SET_GPR_U32(ctx, 31, 0x18CD34u);
    ctx->pc = 0x18CD30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdStopDec_0x18cd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CD34u; }
        else if (ctx->pc != 0x18CD34u) { ctx->pc = 0x18CD34u; }
    }
    if (ctx->pc != 0x18CD34u) { return; }
    ctx->pc = 0x18CD34u;
    // 0x18cd34: 0x24020002
    ctx->pc = 0x18cd34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cd38: 0xae110038
    ctx->pc = 0x18cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x18cd3c: 0xae00005c
    ctx->pc = 0x18cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x18cd40: 0x200202d
    ctx->pc = 0x18cd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd44: 0xae000060
    ctx->pc = 0x18cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x18cd48: 0xae000064
    ctx->pc = 0x18cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x18cd4c: 0xae020058
    ctx->pc = 0x18cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x18cd50: 0xdfbf0020
    ctx->pc = 0x18cd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cd54: 0xdfb10010
    ctx->pc = 0x18cd54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cd58: 0xdfb00000
    ctx->pc = 0x18cd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cd5c: 0x8063284
    ctx->pc = 0x18CD5Cu;
    ctx->pc = 0x18CD60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x18CA10u;
    mw_sfd_start_ex_0x18ca10(rdram, ctx, runtime); return;
    ctx->pc = 0x18CD64u;
}
