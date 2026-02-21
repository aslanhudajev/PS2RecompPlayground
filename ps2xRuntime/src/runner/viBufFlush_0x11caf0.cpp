#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufFlush
// Address: 0x11caf0 - 0x11cb40
void viBufFlush_0x11caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11caf0u;

    // 0x11caf0: 0x27bdffe0
    ctx->pc = 0x11caf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11caf4: 0xffb00000
    ctx->pc = 0x11caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11caf8: 0xffbf0010
    ctx->pc = 0x11caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11cafc: 0x80802d
    ctx->pc = 0x11cafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb00: 0xc0438b8
    ctx->pc = 0x11CB00u;
    SET_GPR_U32(ctx, 31, 0x11CB08u);
    ctx->pc = 0x11CB04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CB08u; }
    }
    if (ctx->pc != 0x11CB08u) { return; }
    ctx->pc = 0x11CB08u;
    // 0x11cb08: 0x8e030014
    ctx->pc = 0x11cb08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11cb0c: 0x2402ffff
    ctx->pc = 0x11cb0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cb10: 0x8e040040
    ctx->pc = 0x11cb10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11cb14: 0x246507ff
    ctx->pc = 0x11cb14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x11cb18: 0xdfbf0010
    ctx->pc = 0x11cb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cb1c: 0x45102a
    ctx->pc = 0x11cb1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x11cb20: 0x24630ffe
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4094));
    // 0x11cb24: 0xa2180b
    ctx->pc = 0x11cb24u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x11cb28: 0x31ac3
    ctx->pc = 0x11cb28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x11cb2c: 0x31ac0
    ctx->pc = 0x11cb2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x11cb30: 0xae030014
    ctx->pc = 0x11cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x11cb34: 0xdfb00000
    ctx->pc = 0x11cb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cb38: 0x80438b0
    ctx->pc = 0x11CB38u;
    ctx->pc = 0x11CB3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10E2C0u;
    SignalSema_0x10e2c0(rdram, ctx, runtime); return;
    ctx->pc = 0x11CB40u;
}
