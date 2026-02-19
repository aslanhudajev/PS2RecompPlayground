#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufDelete
// Address: 0x2dfc10 - 0x2dfc68
void viBufDelete_0x2dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dfc10u;

    // 0x2dfc10: 0x27bdffe0
    ctx->pc = 0x2dfc10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dfc14: 0xffbf0010
    ctx->pc = 0x2dfc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dfc18: 0xffb00000
    ctx->pc = 0x2dfc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfc1c: 0x80802d
    ctx->pc = 0x2dfc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc20: 0xc0b7c80
    ctx->pc = 0x2DFC20u;
    SET_GPR_U32(ctx, 31, 0x2DFC28u);
    ctx->pc = 0x2DFC24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2DF200u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x2df200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC28u; }
    }
    if (ctx->pc != 0x2DFC28u) { return; }
    ctx->pc = 0x2DFC28u;
    // 0x2dfc28: 0x3c021000
    ctx->pc = 0x2dfc28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfc2c: 0x3442b420
    ctx->pc = 0x2dfc2cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46112));
    // 0x2dfc30: 0xac400000
    ctx->pc = 0x2dfc30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2dfc34: 0x3c021000
    ctx->pc = 0x2dfc34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfc38: 0x3442b410
    ctx->pc = 0x2dfc38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46096));
    // 0x2dfc3c: 0xac400000
    ctx->pc = 0x2dfc3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2dfc40: 0x3c021000
    ctx->pc = 0x2dfc40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2dfc44: 0x3442b430
    ctx->pc = 0x2dfc44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46128));
    // 0x2dfc48: 0xac400000
    ctx->pc = 0x2dfc48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2dfc4c: 0xc0c0d7c
    ctx->pc = 0x2DFC4Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC54u);
    ctx->pc = 0x2DFC50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x3035F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x3035f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC54u; }
    }
    if (ctx->pc != 0x2DFC54u) { return; }
    ctx->pc = 0x2DFC54u;
    // 0x2dfc54: 0x24020001
    ctx->pc = 0x2dfc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfc58: 0xdfbf0010
    ctx->pc = 0x2dfc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfc5c: 0xdfb00000
    ctx->pc = 0x2dfc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc60: 0x3e00008
    ctx->pc = 0x2DFC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFC64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFC68u;
}
