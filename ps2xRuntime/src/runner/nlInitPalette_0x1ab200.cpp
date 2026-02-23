#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInitPalette
// Address: 0x1ab200 - 0x1ab240
void nlInitPalette_0x1ab200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInitPalette");


    ctx->pc = 0x1ab200u;

    // 0x1ab200: 0xaf858a54
    ctx->pc = 0x1ab200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937172), GPR_U32(ctx, 5));
    // 0x1ab204: 0x70a01e28
    ctx->pc = 0x1ab204u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ab208: 0xaf848a50
    ctx->pc = 0x1ab208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937168), GPR_U32(ctx, 4));
    // 0x1ab20c: 0x1060000a
    ctx->pc = 0x1AB20Cu;
    {
        const bool branch_taken_0x1ab20c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB210u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x1ab20c) {
            ctx->pc = 0x1AB238u;
            goto label_1ab238;
        }
    }
    ctx->pc = 0x1AB214u;
label_1ab214:
    // 0x1ab214: 0xac800000
    ctx->pc = 0x1ab214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ab218: 0xac800004
    ctx->pc = 0x1ab218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ab21c: 0xa4800008
    ctx->pc = 0x1ab21cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ab220: 0xa480000a
    ctx->pc = 0x1ab220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ab224: 0x70a01e28
    ctx->pc = 0x1ab224u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ab228: 0x2484000c
    ctx->pc = 0x1ab228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12));
    // 0x1ab22c: 0x1460fff9
    ctx->pc = 0x1AB22Cu;
    {
        const bool branch_taken_0x1ab22c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB230u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x1ab22c) {
            ctx->pc = 0x1AB214u;
            goto label_1ab214;
        }
    }
    ctx->pc = 0x1AB234u;
    // 0x1ab234: 0x0
    ctx->pc = 0x1ab234u;
    // NOP
label_1ab238:
    // 0x1ab238: 0x3e00008
    ctx->pc = 0x1AB238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB214u: goto label_1ab214;
            case 0x1AB238u: goto label_1ab238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB240u;
}
