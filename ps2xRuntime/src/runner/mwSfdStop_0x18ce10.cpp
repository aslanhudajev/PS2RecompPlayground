#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdStop
// Address: 0x18ce10 - 0x18ce48
void mwSfdStop_0x18ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdStop");


    ctx->pc = 0x18ce10u;

    // 0x18ce10: 0x27bdffe0
    ctx->pc = 0x18ce10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ce14: 0xffb00000
    ctx->pc = 0x18ce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18ce18: 0xffbf0010
    ctx->pc = 0x18ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ce1c: 0xc06335a
    ctx->pc = 0x18CE1Cu;
    SET_GPR_U32(ctx, 31, 0x18CE24u);
    ctx->pc = 0x18CE20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdStopDec_0x18cd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE24u; }
        else if (ctx->pc != 0x18CE24u) { ctx->pc = 0x18CE24u; }
    }
    if (ctx->pc != 0x18CE24u) { return; }
    ctx->pc = 0x18CE24u;
    // 0x18ce24: 0x200202d
    ctx->pc = 0x18ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce28: 0xc0633de
    ctx->pc = 0x18CE28u;
    SET_GPR_U32(ctx, 31, 0x18CE30u);
    ctx->pc = 0x18CE2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CF78u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLinkStm_0x18cf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE30u; }
        else if (ctx->pc != 0x18CE30u) { ctx->pc = 0x18CE30u; }
    }
    if (ctx->pc != 0x18CE30u) { return; }
    ctx->pc = 0x18CE30u;
    // 0x18ce30: 0x8e040080
    ctx->pc = 0x18ce30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18ce34: 0xae000084
    ctx->pc = 0x18ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x18ce38: 0xdfbf0010
    ctx->pc = 0x18ce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ce3c: 0xdfb00000
    ctx->pc = 0x18ce3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce40: 0x805e88e
    ctx->pc = 0x18CE40u;
    ctx->pc = 0x18CE44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x17A238u;
    LSC_Stop_0x17a238(rdram, ctx, runtime); return;
    ctx->pc = 0x18CE48u;
}
