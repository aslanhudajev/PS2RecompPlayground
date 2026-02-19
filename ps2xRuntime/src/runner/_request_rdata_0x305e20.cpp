#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _request_rdata
// Address: 0x305e20 - 0x305e80
void _request_rdata_0x305e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x305e20u;

    // 0x305e20: 0x27bdffe0
    ctx->pc = 0x305e20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305e24: 0xffb00000
    ctx->pc = 0x305e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305e28: 0x80802d
    ctx->pc = 0x305e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e2c: 0xffbf0010
    ctx->pc = 0x305e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x305e30: 0xc0c173e
    ctx->pc = 0x305E30u;
    SET_GPR_U32(ctx, 31, 0x305E38u);
    ctx->pc = 0x305E34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceRpcGetFPacket_0x305cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305E38u; }
    }
    if (ctx->pc != 0x305E38u) { return; }
    ctx->pc = 0x305E38u;
    // 0x305e38: 0x8e050014
    ctx->pc = 0x305e38u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x305e3c: 0x3c038000
    ctx->pc = 0x305e3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x305e40: 0x8e04001c
    ctx->pc = 0x305e40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x305e44: 0x3463000c
    ctx->pc = 0x305e44u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 12));
    // 0x305e48: 0xac450014
    ctx->pc = 0x305e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x305e4c: 0x24060040
    ctx->pc = 0x305e4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 64));
    // 0x305e50: 0xac44001c
    ctx->pc = 0x305e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x305e54: 0x40282d
    ctx->pc = 0x305e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305e58: 0xac430020
    ctx->pc = 0x305e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x305e5c: 0x3c048000
    ctx->pc = 0x305e5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x305e60: 0xdfbf0010
    ctx->pc = 0x305e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305e64: 0x34840008
    ctx->pc = 0x305e64u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8));
    // 0x305e68: 0x8e090028
    ctx->pc = 0x305e68u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x305e6c: 0x8e070020
    ctx->pc = 0x305e6cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x305e70: 0x8e080024
    ctx->pc = 0x305e70u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x305e74: 0xdfb00000
    ctx->pc = 0x305e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305e78: 0x80c160e
    ctx->pc = 0x305E78u;
    ctx->pc = 0x305E7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x305838u;
    isceSifSendCmd_0x305838(rdram, ctx, runtime); return;
    ctx->pc = 0x305E80u;
}
