#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_Backward
// Address: 0x183a88 - 0x183ad4
void MPVCMC_Backward_0x183a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_Backward");


    ctx->pc = 0x183a88u;

    // 0x183a88: 0x27bdffc0
    ctx->pc = 0x183a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183a8c: 0xffb00010
    ctx->pc = 0x183a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x183a90: 0x3a0302d
    ctx->pc = 0x183a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a94: 0x80802d
    ctx->pc = 0x183a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183a98: 0xffb10020
    ctx->pc = 0x183a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x183a9c: 0xffbf0030
    ctx->pc = 0x183a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x183aa0: 0x261100e8
    ctx->pc = 0x183aa0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 232));
    // 0x183aa4: 0x260701e0
    ctx->pc = 0x183aa4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 480));
    // 0x183aa8: 0x26080278
    ctx->pc = 0x183aa8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 632));
    // 0x183aac: 0xc060ed0
    ctx->pc = 0x183AACu;
    SET_GPR_U32(ctx, 31, 0x183AB4u);
    ctx->pc = 0x183AB0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x183B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneReadMb_0x183b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AB4u; }
        else if (ctx->pc != 0x183AB4u) { ctx->pc = 0x183AB4u; }
    }
    if (ctx->pc != 0x183AB4u) { return; }
    ctx->pc = 0x183AB4u;
    // 0x183ab4: 0x200202d
    ctx->pc = 0x183ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ab8: 0xc060f6e
    ctx->pc = 0x183AB8u;
    SET_GPR_U32(ctx, 31, 0x183AC0u);
    ctx->pc = 0x183ABCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183DB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OneMakeMbTa_0x183db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AC0u; }
        else if (ctx->pc != 0x183AC0u) { ctx->pc = 0x183AC0u; }
    }
    if (ctx->pc != 0x183AC0u) { return; }
    ctx->pc = 0x183AC0u;
    // 0x183ac0: 0xdfbf0030
    ctx->pc = 0x183ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183ac4: 0xdfb10020
    ctx->pc = 0x183ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183ac8: 0xdfb00010
    ctx->pc = 0x183ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183acc: 0x3e00008
    ctx->pc = 0x183ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183AD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183AD4u;
}
