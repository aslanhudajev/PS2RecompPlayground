#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREEMOT__13EventCtrlTaskFv
// Address: 0x1e4270 - 0x1e42b0
void FREEMOT__13EventCtrlTaskFv_0x1e4270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREEMOT__13EventCtrlTaskFv");


    ctx->pc = 0x1e4270u;

    // 0x1e4270: 0x27bdffe0
    ctx->pc = 0x1e4270u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4274: 0x7fbf0010
    ctx->pc = 0x1e4274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4278: 0x7fb00000
    ctx->pc = 0x1e4278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e427c: 0x8c83000c
    ctx->pc = 0x1e427cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4280: 0x70808628
    ctx->pc = 0x1e4280u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4284: 0x3c020051
    ctx->pc = 0x1e4284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4288: 0x8c650004
    ctx->pc = 0x1e4288u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e428c: 0xc086568
    ctx->pc = 0x1E428Cu;
    SET_GPR_U32(ctx, 31, 0x1E4294u);
    ctx->pc = 0x1E4290u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2195A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankMot__13EntryDatClassFi_0x2195a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4294u; }
        else if (ctx->pc != 0x1E4294u) { ctx->pc = 0x1E4294u; }
    }
    if (ctx->pc != 0x1E4294u) { return; }
    ctx->pc = 0x1E4294u;
    // 0x1e4294: 0x8e03000c
    ctx->pc = 0x1e4294u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4298: 0x24630008
    ctx->pc = 0x1e4298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e429c: 0xae03000c
    ctx->pc = 0x1e429cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e42a0: 0x7bbf0010
    ctx->pc = 0x1e42a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e42a4: 0x7bb00000
    ctx->pc = 0x1e42a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e42a8: 0x3e00008
    ctx->pc = 0x1E42A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E42ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E42B0u;
}
