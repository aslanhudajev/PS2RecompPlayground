#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispLifePtclInit__10PlayerTaskFv
// Address: 0x212100 - 0x212148
void dispLifePtclInit__10PlayerTaskFv_0x212100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispLifePtclInit__10PlayerTaskFv");


    ctx->pc = 0x212100u;

    // 0x212100: 0x24851cc4
    ctx->pc = 0x212100u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 7364));
    // 0x212104: 0x248624c4
    ctx->pc = 0x212104u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 9412));
    // 0x212108: 0x70002628
    ctx->pc = 0x212108u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21210c: 0x44800000
    ctx->pc = 0x21210cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_212110:
    // 0x212110: 0xaca00000
    ctx->pc = 0x212110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x212114: 0xaca00004
    ctx->pc = 0x212114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x212118: 0xaca00008
    ctx->pc = 0x212118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x21211c: 0xaca00018
    ctx->pc = 0x21211cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x212120: 0xaca0001c
    ctx->pc = 0x212120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x212124: 0xaca00020
    ctx->pc = 0x212124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x212128: 0xaca00024
    ctx->pc = 0x212128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x21212c: 0x24840001
    ctx->pc = 0x21212cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x212130: 0xaca00028
    ctx->pc = 0x212130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x212134: 0x28830020
    ctx->pc = 0x212134u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 32));
    // 0x212138: 0x1460fff5
    ctx->pc = 0x212138u;
    {
        const bool branch_taken_0x212138 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21213Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
        if (branch_taken_0x212138) {
            ctx->pc = 0x212110u;
            goto label_212110;
        }
    }
    ctx->pc = 0x212140u;
    // 0x212140: 0x3e00008
    ctx->pc = 0x212140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212144u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212110u: goto label_212110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212148u;
}
