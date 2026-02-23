#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_safe_proc
// Address: 0x16c9e8 - 0x16ca2c
void adxm_safe_proc_0x16c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_safe_proc");


    ctx->pc = 0x16c9e8u;

    // 0x16c9e8: 0x27bdfff0
    ctx->pc = 0x16c9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c9ec: 0xdf828188
    ctx->pc = 0x16c9ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934920)));
    // 0x16c9f0: 0x14400009
    ctx->pc = 0x16C9F0u;
    {
        const bool branch_taken_0x16c9f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C9F4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16c9f0) {
            ctx->pc = 0x16CA18u;
            goto label_16ca18;
        }
    }
    ctx->pc = 0x16C9F8u;
label_16c9f8:
    // 0x16c9f8: 0xdf828140
    ctx->pc = 0x16c9f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934848)));
    // 0x16c9fc: 0x64420001
    ctx->pc = 0x16c9fcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
    // 0x16ca00: 0xff828140
    ctx->pc = 0x16ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934848), GPR_U64(ctx, 2));
    // 0x16ca04: 0xc05b278
    ctx->pc = 0x16CA04u;
    SET_GPR_U32(ctx, 31, 0x16CA0Cu);
    ctx->pc = 0x16C9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_safe_trap_0x16c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CA0Cu; }
        else if (ctx->pc != 0x16CA0Cu) { ctx->pc = 0x16CA0Cu; }
    }
    if (ctx->pc != 0x16CA0Cu) { return; }
    ctx->pc = 0x16CA0Cu;
    // 0x16ca0c: 0xdf828188
    ctx->pc = 0x16ca0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934920)));
    // 0x16ca10: 0x1040fff9
    ctx->pc = 0x16CA10u;
    {
        const bool branch_taken_0x16ca10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16ca10) {
            ctx->pc = 0x16C9F8u;
            goto label_16c9f8;
        }
    }
    ctx->pc = 0x16CA18u;
label_16ca18:
    // 0x16ca18: 0x24020001
    ctx->pc = 0x16ca18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ca1c: 0xdfbf0000
    ctx->pc = 0x16ca1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ca20: 0xff828190
    ctx->pc = 0x16ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934928), GPR_U64(ctx, 2));
    // 0x16ca24: 0x80551c8
    ctx->pc = 0x16CA24u;
    ctx->pc = 0x16CA28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x154720u;
    ExitDeleteThread_0x154720(rdram, ctx, runtime); return;
    ctx->pc = 0x16CA2Cu;
}
