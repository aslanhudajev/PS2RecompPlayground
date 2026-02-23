#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_Destroy
// Address: 0x19fb80 - 0x19fbb0
void SFH_Destroy_0x19fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_Destroy");


    ctx->pc = 0x19fb80u;

    // 0x19fb80: 0x27bdfff0
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19fb84: 0xffbf0000
    ctx->pc = 0x19fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19fb88: 0xc067ef4
    ctx->pc = 0x19FB88u;
    SET_GPR_U32(ctx, 31, 0x19FB90u);
    ctx->pc = 0x19FBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initSfhObj_0x19fbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB90u; }
        else if (ctx->pc != 0x19FB90u) { ctx->pc = 0x19FB90u; }
    }
    if (ctx->pc != 0x19FB90u) { return; }
    ctx->pc = 0x19FB90u;
    // 0x19fb90: 0x3c030030
    ctx->pc = 0x19fb90u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x19fb94: 0xdfbf0000
    ctx->pc = 0x19fb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fb98: 0x246320d8
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8408));
    // 0x19fb9c: 0x8c620004
    ctx->pc = 0x19fb9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fba0: 0x2442ffff
    ctx->pc = 0x19fba0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19fba4: 0xac620004
    ctx->pc = 0x19fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x19fba8: 0x3e00008
    ctx->pc = 0x19FBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FBACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FBB0u;
}
