#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYCPBK__13EventCtrlTaskFv
// Address: 0x1e3280 - 0x1e32c0
void ENTRYCPBK__13EventCtrlTaskFv_0x1e3280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYCPBK__13EventCtrlTaskFv");


    ctx->pc = 0x1e3280u;

    // 0x1e3280: 0x27bdffe0
    ctx->pc = 0x1e3280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3284: 0x7fbf0010
    ctx->pc = 0x1e3284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3288: 0x7fb00000
    ctx->pc = 0x1e3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e328c: 0x8c83000c
    ctx->pc = 0x1e328cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3290: 0x70808628
    ctx->pc = 0x1e3290u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3294: 0x3c020051
    ctx->pc = 0x1e3294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3298: 0x8c650004
    ctx->pc = 0x1e3298u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e329c: 0xc0865b0
    ctx->pc = 0x1E329Cu;
    SET_GPR_U32(ctx, 31, 0x1E32A4u);
    ctx->pc = 0x1E32A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2196C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankCamPath__13EntryDatClassFi_0x2196c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32A4u; }
        else if (ctx->pc != 0x1E32A4u) { ctx->pc = 0x1E32A4u; }
    }
    if (ctx->pc != 0x1E32A4u) { return; }
    ctx->pc = 0x1E32A4u;
    // 0x1e32a4: 0x8e03000c
    ctx->pc = 0x1e32a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e32a8: 0x24630008
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e32ac: 0xae03000c
    ctx->pc = 0x1e32acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e32b0: 0x7bbf0010
    ctx->pc = 0x1e32b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e32b4: 0x7bb00000
    ctx->pc = 0x1e32b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32b8: 0x3e00008
    ctx->pc = 0x1E32B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E32C0u;
}
