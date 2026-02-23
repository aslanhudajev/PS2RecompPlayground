#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_IsMpsStream
// Address: 0x19c8f0 - 0x19c910
void sfsee_IsMpsStream_0x19c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_IsMpsStream");


    ctx->pc = 0x19c8f0u;

    // 0x19c8f0: 0x27bdfff0
    ctx->pc = 0x19c8f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c8f4: 0xffbf0000
    ctx->pc = 0x19c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c8f8: 0xc067cf6
    ctx->pc = 0x19C8F8u;
    SET_GPR_U32(ctx, 31, 0x19C900u);
    ctx->pc = 0x19C8FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F3D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_IsSetup_0x19f3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C900u; }
        else if (ctx->pc != 0x19C900u) { ctx->pc = 0x19C900u; }
    }
    if (ctx->pc != 0x19C900u) { return; }
    ctx->pc = 0x19C900u;
    // 0x19c900: 0xdfbf0000
    ctx->pc = 0x19c900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c904: 0x2102b
    ctx->pc = 0x19c904u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19c908: 0x3e00008
    ctx->pc = 0x19C908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C90Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C910u;
}
