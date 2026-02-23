#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJRBF_Init
// Address: 0x17c430 - 0x17c46c
void SJRBF_Init_0x17c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJRBF_Init");
    ctx->pc = 0x17c430u;

    // 0x17c430: 0x27bdfff0
    ctx->pc = 0x17c430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17c434: 0x8f828300
    ctx->pc = 0x17c434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x17c438: 0x14400007
    ctx->pc = 0x17C438u;
    {
        const bool branch_taken_0x17c438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17C43Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x17c438) {
            ctx->pc = 0x17C458u;
            goto label_17c458;
        }
    }
    ctx->pc = 0x17C440u;
    // 0x17c440: 0x3c040024
    ctx->pc = 0x17c440u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17c444: 0x282d
    ctx->pc = 0x17c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c448: 0x2484f130
    ctx->pc = 0x17c448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294963504));
    // 0x17c44c: 0xc050cfe
    ctx->pc = 0x17C44Cu;
    SET_GPR_U32(ctx, 31, 0x17C454u);
    ctx->pc = 0x17C450u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3072));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C454u; }
        else if (ctx->pc != 0x17C454u) { ctx->pc = 0x17C454u; }
    }
    if (ctx->pc != 0x17C454u) { return; }
    ctx->pc = 0x17C454u;
    // 0x17c454: 0x8f828300
    ctx->pc = 0x17c454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
label_17c458:
    // 0x17c458: 0x24420001
    ctx->pc = 0x17c458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c45c: 0xdfbf0000
    ctx->pc = 0x17c45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c460: 0xaf828300
    ctx->pc = 0x17c460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 2));
    // 0x17c464: 0x3e00008
    ctx->pc = 0x17C464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17C458u: goto label_17c458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17C46Cu;
}
