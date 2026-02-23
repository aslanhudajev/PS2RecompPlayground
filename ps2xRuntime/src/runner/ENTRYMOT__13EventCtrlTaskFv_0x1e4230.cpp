#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYMOT__13EventCtrlTaskFv
// Address: 0x1e4230 - 0x1e4270
void ENTRYMOT__13EventCtrlTaskFv_0x1e4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYMOT__13EventCtrlTaskFv");


    ctx->pc = 0x1e4230u;

    // 0x1e4230: 0x27bdffe0
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4234: 0x7fbf0010
    ctx->pc = 0x1e4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4238: 0x7fb00000
    ctx->pc = 0x1e4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e423c: 0x8c83000c
    ctx->pc = 0x1e423cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4240: 0x70808628
    ctx->pc = 0x1e4240u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4244: 0x3c020051
    ctx->pc = 0x1e4244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e4248: 0x8c650004
    ctx->pc = 0x1e4248u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e424c: 0xc086558
    ctx->pc = 0x1E424Cu;
    SET_GPR_U32(ctx, 31, 0x1E4254u);
    ctx->pc = 0x1E4250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219560u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankMot__13EntryDatClassFi_0x219560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4254u; }
        else if (ctx->pc != 0x1E4254u) { ctx->pc = 0x1E4254u; }
    }
    if (ctx->pc != 0x1E4254u) { return; }
    ctx->pc = 0x1E4254u;
    // 0x1e4254: 0x8e03000c
    ctx->pc = 0x1e4254u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4258: 0x24630008
    ctx->pc = 0x1e4258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e425c: 0xae03000c
    ctx->pc = 0x1e425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4260: 0x7bbf0010
    ctx->pc = 0x1e4260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4264: 0x7bb00000
    ctx->pc = 0x1e4264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4268: 0x3e00008
    ctx->pc = 0x1E4268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E426Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4270u;
}
