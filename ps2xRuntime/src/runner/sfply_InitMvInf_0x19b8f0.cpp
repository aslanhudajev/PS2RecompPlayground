#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_InitMvInf
// Address: 0x19b8f0 - 0x19b944
void sfply_InitMvInf_0x19b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_InitMvInf");


    ctx->pc = 0x19b8f0u;

    // 0x19b8f0: 0x27bdffe0
    ctx->pc = 0x19b8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b8f4: 0x282d
    ctx->pc = 0x19b8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8f8: 0xffb00000
    ctx->pc = 0x19b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b8fc: 0x24060010
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19b900: 0xffbf0010
    ctx->pc = 0x19b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b904: 0xc0601e6
    ctx->pc = 0x19B904u;
    SET_GPR_U32(ctx, 31, 0x19B90Cu);
    ctx->pc = 0x19B908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B90Cu; }
        else if (ctx->pc != 0x19B90Cu) { ctx->pc = 0x19B90Cu; }
    }
    if (ctx->pc != 0x19B90Cu) { return; }
    ctx->pc = 0x19B90Cu;
    // 0x19b90c: 0x24020001
    ctx->pc = 0x19b90cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b910: 0xae000020
    ctx->pc = 0x19b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19b914: 0xae02001c
    ctx->pc = 0x19b914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x19b918: 0xae000000
    ctx->pc = 0x19b918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19b91c: 0xae000004
    ctx->pc = 0x19b91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19b920: 0xae000008
    ctx->pc = 0x19b920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19b924: 0xae00000c
    ctx->pc = 0x19b924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x19b928: 0xae000010
    ctx->pc = 0x19b928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x19b92c: 0xae000014
    ctx->pc = 0x19b92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x19b930: 0xae000018
    ctx->pc = 0x19b930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x19b934: 0xdfbf0010
    ctx->pc = 0x19b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b938: 0xdfb00000
    ctx->pc = 0x19b938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b93c: 0x3e00008
    ctx->pc = 0x19B93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B940u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B944u;
}
