#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYSPR__13EventCtrlTaskFv
// Address: 0x1e4030 - 0x1e4070
void ENTRYSPR__13EventCtrlTaskFv_0x1e4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYSPR__13EventCtrlTaskFv");


    ctx->pc = 0x1e4030u;

    // 0x1e4030: 0x27bdffe0
    ctx->pc = 0x1e4030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4034: 0x7fbf0010
    ctx->pc = 0x1e4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4038: 0x7fb00000
    ctx->pc = 0x1e4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e403c: 0x8c83000c
    ctx->pc = 0x1e403cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4040: 0x70808628
    ctx->pc = 0x1e4040u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4044: 0x3c020051
    ctx->pc = 0x1e4044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4048: 0x8c650004
    ctx->pc = 0x1e4048u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e404c: 0xc086578
    ctx->pc = 0x1E404Cu;
    SET_GPR_U32(ctx, 31, 0x1E4054u);
    ctx->pc = 0x1E4050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4054u; }
        else if (ctx->pc != 0x1E4054u) { ctx->pc = 0x1E4054u; }
    }
    if (ctx->pc != 0x1E4054u) { return; }
    ctx->pc = 0x1E4054u;
    // 0x1e4054: 0x8e03000c
    ctx->pc = 0x1e4054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4058: 0x24630008
    ctx->pc = 0x1e4058u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e405c: 0xae03000c
    ctx->pc = 0x1e405cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4060: 0x7bbf0010
    ctx->pc = 0x1e4060u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4064: 0x7bb00000
    ctx->pc = 0x1e4064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4068: 0x3e00008
    ctx->pc = 0x1E4068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E406Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4070u;
}
