#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: motSupplementMove__12BodyMgrClassFP10MotObjTaskiii
// Address: 0x1fada0 - 0x1fadd0
void motSupplementMove__12BodyMgrClassFP10MotObjTaskiii_0x1fada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("motSupplementMove__12BodyMgrClassFP10MotObjTaskiii");


    ctx->pc = 0x1fada0u;

    // 0x1fada0: 0x27bdffe0
    ctx->pc = 0x1fada0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fada4: 0x7fbf0010
    ctx->pc = 0x1fada4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fada8: 0x7fb00000
    ctx->pc = 0x1fada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fadac: 0xc07eabc
    ctx->pc = 0x1FADACu;
    SET_GPR_U32(ctx, 31, 0x1FADB4u);
    ctx->pc = 0x1FADB0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADB4u; }
        else if (ctx->pc != 0x1FADB4u) { ctx->pc = 0x1FADB4u; }
    }
    if (ctx->pc != 0x1FADB4u) { return; }
    ctx->pc = 0x1FADB4u;
    // 0x1fadb4: 0x8203003a
    ctx->pc = 0x1fadb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1fadb8: 0x34630008
    ctx->pc = 0x1fadb8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8));
    // 0x1fadbc: 0xa203003a
    ctx->pc = 0x1fadbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fadc0: 0x7bbf0010
    ctx->pc = 0x1fadc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fadc4: 0x7bb00000
    ctx->pc = 0x1fadc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fadc8: 0x3e00008
    ctx->pc = 0x1FADC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FADCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FADD0u;
}
