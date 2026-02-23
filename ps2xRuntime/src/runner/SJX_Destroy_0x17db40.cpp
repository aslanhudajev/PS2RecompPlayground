#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJX_Destroy
// Address: 0x17db40 - 0x17db84
void SJX_Destroy_0x17db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJX_Destroy");


    ctx->pc = 0x17db40u;

    // 0x17db40: 0x27bdffd0
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17db44: 0x24060001
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17db48: 0xffb00010
    ctx->pc = 0x17db48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17db4c: 0x3a0282d
    ctx->pc = 0x17db4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db50: 0xffbf0020
    ctx->pc = 0x17db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17db54: 0x80802d
    ctx->pc = 0x17db54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db58: 0x24040001
    ctx->pc = 0x17db58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17db5c: 0x382d
    ctx->pc = 0x17db5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db60: 0x8e020010
    ctx->pc = 0x17db60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17db64: 0x402d
    ctx->pc = 0x17db64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db68: 0xc05dcd2
    ctx->pc = 0x17DB68u;
    SET_GPR_U32(ctx, 31, 0x17DB70u);
    ctx->pc = 0x17DB6Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x177348u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_CallUrpc_0x177348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DB70u; }
        else if (ctx->pc != 0x17DB70u) { ctx->pc = 0x17DB70u; }
    }
    if (ctx->pc != 0x17DB70u) { return; }
    ctx->pc = 0x17DB70u;
    // 0x17db70: 0xa2000000
    ctx->pc = 0x17db70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17db74: 0xdfbf0020
    ctx->pc = 0x17db74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17db78: 0xdfb00010
    ctx->pc = 0x17db78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17db7c: 0x3e00008
    ctx->pc = 0x17DB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DB80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DB84u;
}
