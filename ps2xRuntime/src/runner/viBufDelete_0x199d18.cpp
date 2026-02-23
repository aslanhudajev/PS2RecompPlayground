#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufDelete
// Address: 0x199d18 - 0x199d70
void viBufDelete_0x199d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufDelete");


    ctx->pc = 0x199d18u;

    // 0x199d18: 0x27bdffe0
    ctx->pc = 0x199d18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199d1c: 0xffb00000
    ctx->pc = 0x199d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199d20: 0x80802d
    ctx->pc = 0x199d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d24: 0xffbf0010
    ctx->pc = 0x199d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199d28: 0xc0664c4
    ctx->pc = 0x199D28u;
    SET_GPR_U32(ctx, 31, 0x199D30u);
    ctx->pc = 0x199D2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x199310u;
    {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x199310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D30u; }
        else if (ctx->pc != 0x199D30u) { ctx->pc = 0x199D30u; }
    }
    if (ctx->pc != 0x199D30u) { return; }
    ctx->pc = 0x199D30u;
    // 0x199d30: 0x3c031000
    ctx->pc = 0x199d30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x199d34: 0x3c041000
    ctx->pc = 0x199d34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x199d38: 0x3463b420
    ctx->pc = 0x199d38u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 46112));
    // 0x199d3c: 0x3484b410
    ctx->pc = 0x199d3cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46096));
    // 0x199d40: 0xac600000
    ctx->pc = 0x199d40u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x199d44: 0x3c021000
    ctx->pc = 0x199d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x199d48: 0xac800000
    ctx->pc = 0x199d48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x199d4c: 0x3442b430
    ctx->pc = 0x199d4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46128));
    // 0x199d50: 0xac400000
    ctx->pc = 0x199d50u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x199d54: 0xc05523c
    ctx->pc = 0x199D54u;
    SET_GPR_U32(ctx, 31, 0x199D5Cu);
    ctx->pc = 0x199D58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x1548F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1548f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D5Cu; }
        else if (ctx->pc != 0x199D5Cu) { ctx->pc = 0x199D5Cu; }
    }
    if (ctx->pc != 0x199D5Cu) { return; }
    ctx->pc = 0x199D5Cu;
    // 0x199d5c: 0xdfbf0010
    ctx->pc = 0x199d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199d60: 0x24020001
    ctx->pc = 0x199d60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199d64: 0xdfb00000
    ctx->pc = 0x199d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199d68: 0x3e00008
    ctx->pc = 0x199D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199D6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199D70u;
}
