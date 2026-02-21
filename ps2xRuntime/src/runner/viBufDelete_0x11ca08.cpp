#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufDelete
// Address: 0x11ca08 - 0x11ca60
void viBufDelete_0x11ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ca08u;

    // 0x11ca08: 0x27bdffe0
    ctx->pc = 0x11ca08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ca0c: 0xffb00000
    ctx->pc = 0x11ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ca10: 0x80802d
    ctx->pc = 0x11ca10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca14: 0xffbf0010
    ctx->pc = 0x11ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ca18: 0xc04701c
    ctx->pc = 0x11CA18u;
    SET_GPR_U32(ctx, 31, 0x11CA20u);
    ctx->pc = 0x11CA1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x11c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA20u; }
    }
    if (ctx->pc != 0x11CA20u) { return; }
    ctx->pc = 0x11CA20u;
    // 0x11ca20: 0x3c031000
    ctx->pc = 0x11ca20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11ca24: 0x3c041000
    ctx->pc = 0x11ca24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11ca28: 0x3463b420
    ctx->pc = 0x11ca28u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46112));
    // 0x11ca2c: 0x3484b410
    ctx->pc = 0x11ca2cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46096));
    // 0x11ca30: 0xac600000
    ctx->pc = 0x11ca30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ca34: 0x3c021000
    ctx->pc = 0x11ca34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11ca38: 0xac800000
    ctx->pc = 0x11ca38u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ca3c: 0x3442b430
    ctx->pc = 0x11ca3cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46128));
    // 0x11ca40: 0xac400000
    ctx->pc = 0x11ca40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ca44: 0xc0438ac
    ctx->pc = 0x11CA44u;
    SET_GPR_U32(ctx, 31, 0x11CA4Cu);
    ctx->pc = 0x11CA48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x10E2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CA4Cu; }
    }
    if (ctx->pc != 0x11CA4Cu) { return; }
    ctx->pc = 0x11CA4Cu;
    // 0x11ca4c: 0xdfbf0010
    ctx->pc = 0x11ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca50: 0x24020001
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ca54: 0xdfb00000
    ctx->pc = 0x11ca54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ca58: 0x3e00008
    ctx->pc = 0x11CA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CA60u;
}
