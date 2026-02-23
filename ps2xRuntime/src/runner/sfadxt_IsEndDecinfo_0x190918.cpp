#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_IsEndDecinfo
// Address: 0x190918 - 0x19093c
void sfadxt_IsEndDecinfo_0x190918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_IsEndDecinfo");


    ctx->pc = 0x190918u;

    // 0x190918: 0x27bdfff0
    ctx->pc = 0x190918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19091c: 0xffbf0000
    ctx->pc = 0x19091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190920: 0xc05c752
    ctx->pc = 0x190920u;
    SET_GPR_U32(ctx, 31, 0x190928u);
    ctx->pc = 0x171D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetStat_0x171d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190928u; }
        else if (ctx->pc != 0x190928u) { ctx->pc = 0x190928u; }
    }
    if (ctx->pc != 0x190928u) { return; }
    ctx->pc = 0x190928u;
    // 0x190928: 0x24030001
    ctx->pc = 0x190928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19092c: 0xdfbf0000
    ctx->pc = 0x19092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190930: 0x62102b
    ctx->pc = 0x190930u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190934: 0x3e00008
    ctx->pc = 0x190934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19093Cu;
}
