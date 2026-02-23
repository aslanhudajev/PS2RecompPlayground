#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ENTRYSNDPK__13EventCtrlTaskFv
// Address: 0x1e32c0 - 0x1e3310
void ENTRYSNDPK__13EventCtrlTaskFv_0x1e32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ENTRYSNDPK__13EventCtrlTaskFv");


    ctx->pc = 0x1e32c0u;

    // 0x1e32c0: 0x27bdffe0
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e32c4: 0x7fbf0010
    ctx->pc = 0x1e32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e32c8: 0x7fb00000
    ctx->pc = 0x1e32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e32cc: 0x70808628
    ctx->pc = 0x1e32ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1e32d0:
    // 0x1e32d0: 0x8e03000c
    ctx->pc = 0x1e32d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e32d4: 0x3c020051
    ctx->pc = 0x1e32d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e32d8: 0x8c650004
    ctx->pc = 0x1e32d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e32dc: 0x8c660008
    ctx->pc = 0x1e32dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e32e0: 0x8c67000c
    ctx->pc = 0x1e32e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e32e4: 0xc085f2c
    ctx->pc = 0x1E32E4u;
    SET_GPR_U32(ctx, 31, 0x1E32ECu);
    ctx->pc = 0x1E32E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x217CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        packLoad__13SoundMgrClassFiiii_0x217cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32ECu; }
        else if (ctx->pc != 0x1E32ECu) { ctx->pc = 0x1E32ECu; }
    }
    if (ctx->pc != 0x1E32ECu) { return; }
    ctx->pc = 0x1E32ECu;
    // 0x1e32ec: 0x1440fff8
    ctx->pc = 0x1E32ECu;
    {
        const bool branch_taken_0x1e32ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E32F0u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e32ec) {
            ctx->pc = 0x1E32D0u;
            goto label_1e32d0;
        }
    }
    ctx->pc = 0x1E32F4u;
    // 0x1e32f4: 0x8e03000c
    ctx->pc = 0x1e32f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e32f8: 0x24630010
    ctx->pc = 0x1e32f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e32fc: 0xae03000c
    ctx->pc = 0x1e32fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3300: 0x7bbf0010
    ctx->pc = 0x1e3300u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3304: 0x7bb00000
    ctx->pc = 0x1e3304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3308: 0x3e00008
    ctx->pc = 0x1E3308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E330Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E32D0u: goto label_1e32d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3310u;
}
