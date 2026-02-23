#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setDivNum__12BodyMgrClassFii
// Address: 0x1fb030 - 0x1fb064
void setDivNum__12BodyMgrClassFii_0x1fb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setDivNum__12BodyMgrClassFii");


    ctx->pc = 0x1fb030u;

    // 0x1fb030: 0x27bdfff0
    ctx->pc = 0x1fb030u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb034: 0x7fbf0000
    ctx->pc = 0x1fb034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fb038: 0x8c820004
    ctx->pc = 0x1fb038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fb03c: 0x3c0101f3
    ctx->pc = 0x1fb03cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)499 << 16));
    // 0x1fb040: 0x8442002c
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1fb044: 0x21080
    ctx->pc = 0x1fb044u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb048: 0x410821
    ctx->pc = 0x1fb048u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fb04c: 0x8c279730
    ctx->pc = 0x1fb04cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294940464)));
    // 0x1fb050: 0xc07ec1c
    ctx->pc = 0x1FB050u;
    SET_GPR_U32(ctx, 31, 0x1FB058u);
    ctx->pc = 0x1FB054u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FB070u;
    {
        const uint32_t __entryPc = ctx->pc;
        setDivNumSub__12BodyMgrClassFiiP7_BODYPTi_0x1fb070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB058u; }
        else if (ctx->pc != 0x1FB058u) { ctx->pc = 0x1FB058u; }
    }
    if (ctx->pc != 0x1FB058u) { return; }
    ctx->pc = 0x1FB058u;
    // 0x1fb058: 0x7bbf0000
    ctx->pc = 0x1fb058u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb05c: 0x3e00008
    ctx->pc = 0x1FB05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB060u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB064u;
}
