#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufFlush
// Address: 0x2dfcf8 - 0x2dfd48
void viBufFlush_0x2dfcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dfcf8u;

    // 0x2dfcf8: 0x27bdffe0
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dfcfc: 0xffbf0010
    ctx->pc = 0x2dfcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dfd00: 0xffb00000
    ctx->pc = 0x2dfd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfd04: 0x80802d
    ctx->pc = 0x2dfd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd08: 0xc0c0d88
    ctx->pc = 0x2DFD08u;
    SET_GPR_U32(ctx, 31, 0x2DFD10u);
    ctx->pc = 0x2DFD0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD10u; }
    }
    if (ctx->pc != 0x2DFD10u) { return; }
    ctx->pc = 0x2DFD10u;
    // 0x2dfd10: 0x8e040014
    ctx->pc = 0x2dfd10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfd14: 0x248307ff
    ctx->pc = 0x2dfd14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2047));
    // 0x2dfd18: 0x24840ffe
    ctx->pc = 0x2dfd18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4094));
    // 0x2dfd1c: 0x2402ffff
    ctx->pc = 0x2dfd1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dfd20: 0x43102a
    ctx->pc = 0x2dfd20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2dfd24: 0x82180a
    ctx->pc = 0x2dfd24u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x2dfd28: 0x31ac3
    ctx->pc = 0x2dfd28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x2dfd2c: 0x31ac0
    ctx->pc = 0x2dfd2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 11));
    // 0x2dfd30: 0xae030014
    ctx->pc = 0x2dfd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2dfd34: 0x8e040040
    ctx->pc = 0x2dfd34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2dfd38: 0xdfbf0010
    ctx->pc = 0x2dfd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfd3c: 0xdfb00000
    ctx->pc = 0x2dfd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfd40: 0x80c0d80
    ctx->pc = 0x2DFD40u;
    ctx->pc = 0x2DFD44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x303600u;
    SignalSema_0x303600(rdram, ctx, runtime); return;
    ctx->pc = 0x2DFD48u;
}
