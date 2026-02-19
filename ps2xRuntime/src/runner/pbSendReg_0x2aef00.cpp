#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSendReg
// Address: 0x2aef00 - 0x2aef90
void pbSendReg_0x2aef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aef00u;

    // 0x2aef00: 0x27bdffe0
    ctx->pc = 0x2aef00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aef04: 0xffbf0010
    ctx->pc = 0x2aef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aef08: 0xffb00000
    ctx->pc = 0x2aef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aef0c: 0x3c030037
    ctx->pc = 0x2aef0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2aef10: 0x24709240
    ctx->pc = 0x2aef10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x2aef14: 0x3c027000
    ctx->pc = 0x2aef14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2aef18: 0x34420002
    ctx->pc = 0x2aef18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2aef1c: 0xac629240
    ctx->pc = 0x2aef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939200), GPR_U32(ctx, 2));
    // 0x2aef20: 0xae000004
    ctx->pc = 0x2aef20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2aef24: 0x3c021000
    ctx->pc = 0x2aef24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aef28: 0xae020008
    ctx->pc = 0x2aef28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2aef2c: 0x3c025000
    ctx->pc = 0x2aef2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2aef30: 0x34420002
    ctx->pc = 0x2aef30u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2aef34: 0xae02000c
    ctx->pc = 0x2aef34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2aef38: 0x3c021000
    ctx->pc = 0x2aef38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aef3c: 0x2103c
    ctx->pc = 0x2aef3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2aef40: 0x34428001
    ctx->pc = 0x2aef40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32769));
    // 0x2aef44: 0xfe020010
    ctx->pc = 0x2aef44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2aef48: 0xde020018
    ctx->pc = 0x2aef48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2aef4c: 0x2403fff0
    ctx->pc = 0x2aef4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2aef50: 0x431024
    ctx->pc = 0x2aef50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aef54: 0x2403000e
    ctx->pc = 0x2aef54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2aef58: 0x431025
    ctx->pc = 0x2aef58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aef5c: 0xfe020018
    ctx->pc = 0x2aef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2aef60: 0xfe050020
    ctx->pc = 0x2aef60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
    // 0x2aef64: 0xfe040028
    ctx->pc = 0x2aef64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x2aef68: 0xc0c0e18
    ctx->pc = 0x2AEF68u;
    SET_GPR_U32(ctx, 31, 0x2AEF70u);
    ctx->pc = 0x2AEF6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEF70u; }
    }
    if (ctx->pc != 0x2AEF70u) { return; }
    ctx->pc = 0x2AEF70u;
    // 0x2aef70: 0x24041145
    ctx->pc = 0x2aef70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
    // 0x2aef74: 0x200282d
    ctx->pc = 0x2aef74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef78: 0x302d
    ctx->pc = 0x2aef78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef7c: 0x382d
    ctx->pc = 0x2aef7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef80: 0xdfbf0010
    ctx->pc = 0x2aef80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aef84: 0xdfb00000
    ctx->pc = 0x2aef84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aef88: 0x80a99a8
    ctx->pc = 0x2AEF88u;
    ctx->pc = 0x2AEF8Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2A66A0u;
    pbDmaSchedule_0x2a66a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2AEF90u;
}
