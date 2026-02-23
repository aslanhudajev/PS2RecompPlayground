#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCalcYccPlane
// Address: 0x18db18 - 0x18db4c
void mwPlyCalcYccPlane_0x18db18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCalcYccPlane");


    ctx->pc = 0x18db18u;

    // 0x18db18: 0x27bdffd0
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18db1c: 0xffb00010
    ctx->pc = 0x18db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18db20: 0xe0802d
    ctx->pc = 0x18db20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db24: 0xffbf0020
    ctx->pc = 0x18db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18db28: 0xc0655e0
    ctx->pc = 0x18DB28u;
    SET_GPR_U32(ctx, 31, 0x18DB30u);
    ctx->pc = 0x18DB2Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195780u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_CalcYccPlane_0x195780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB30u; }
        else if (ctx->pc != 0x18DB30u) { ctx->pc = 0x18DB30u; }
    }
    if (ctx->pc != 0x18DB30u) { return; }
    ctx->pc = 0x18DB30u;
    // 0x18db30: 0x200282d
    ctx->pc = 0x18db30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db34: 0xc063736
    ctx->pc = 0x18DB34u;
    SET_GPR_U32(ctx, 31, 0x18DB3Cu);
    ctx->pc = 0x18DB38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18DCD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_convYccPlaneFromSFD_0x18dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DB3Cu; }
        else if (ctx->pc != 0x18DB3Cu) { ctx->pc = 0x18DB3Cu; }
    }
    if (ctx->pc != 0x18DB3Cu) { return; }
    ctx->pc = 0x18DB3Cu;
    // 0x18db3c: 0xdfbf0020
    ctx->pc = 0x18db3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18db40: 0xdfb00010
    ctx->pc = 0x18db40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18db44: 0x3e00008
    ctx->pc = 0x18DB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DB48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DB4Cu;
}
