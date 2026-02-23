#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREETEX__13EventCtrlTaskFv
// Address: 0x1e3ff0 - 0x1e4030
void FREETEX__13EventCtrlTaskFv_0x1e3ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREETEX__13EventCtrlTaskFv");


    ctx->pc = 0x1e3ff0u;

    // 0x1e3ff0: 0x27bdffe0
    ctx->pc = 0x1e3ff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3ff4: 0x7fbf0010
    ctx->pc = 0x1e3ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3ff8: 0x7fb00000
    ctx->pc = 0x1e3ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3ffc: 0x8c83000c
    ctx->pc = 0x1e3ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4000: 0x70808628
    ctx->pc = 0x1e4000u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4004: 0x3c020051
    ctx->pc = 0x1e4004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4008: 0x8c650004
    ctx->pc = 0x1e4008u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e400c: 0xc086548
    ctx->pc = 0x1E400Cu;
    SET_GPR_U32(ctx, 31, 0x1E4014u);
    ctx->pc = 0x1E4010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219520u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankTex__13EntryDatClassFi_0x219520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4014u; }
        else if (ctx->pc != 0x1E4014u) { ctx->pc = 0x1E4014u; }
    }
    if (ctx->pc != 0x1E4014u) { return; }
    ctx->pc = 0x1E4014u;
    // 0x1e4014: 0x8e03000c
    ctx->pc = 0x1e4014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4018: 0x24630008
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e401c: 0xae03000c
    ctx->pc = 0x1e401cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4020: 0x7bbf0010
    ctx->pc = 0x1e4020u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4024: 0x7bb00000
    ctx->pc = 0x1e4024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4028: 0x3e00008
    ctx->pc = 0x1E4028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E402Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4030u;
}
