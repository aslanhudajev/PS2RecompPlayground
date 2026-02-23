#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInitMatrixSub
// Address: 0x1a45f0 - 0x1a4658
void nlInitMatrixSub_0x1a45f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInitMatrixSub");


    ctx->pc = 0x1a45f0u;

    // 0x1a45f0: 0x27bdffe0
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a45f4: 0x7fbf0010
    ctx->pc = 0x1a45f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a45f8: 0x7fb00000
    ctx->pc = 0x1a45f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a45fc: 0x3c021100
    ctx->pc = 0x1a45fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x1a4600: 0xa4860002
    ctx->pc = 0x1a4600u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a4604: 0x51980
    ctx->pc = 0x1a4604u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x1a4608: 0x34424000
    ctx->pc = 0x1a4608u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16384));
    // 0x1a460c: 0xa4800000
    ctx->pc = 0x1a460cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a4610: 0x621021
    ctx->pc = 0x1a4610u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a4614: 0xac820008
    ctx->pc = 0x1a4614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1a4618: 0xac820004
    ctx->pc = 0x1a4618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1a461c: 0x70808628
    ctx->pc = 0x1a461cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a4620: 0x4610003
    ctx->pc = 0x1A4620u;
    {
        const bool branch_taken_0x1a4620 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A4624u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        if (branch_taken_0x1a4620) {
            ctx->pc = 0x1A4630u;
            goto label_1a4630;
        }
    }
    ctx->pc = 0x1A4628u;
    // 0x1a4628: 0x2462000f
    ctx->pc = 0x1a4628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 15));
    // 0x1a462c: 0x21103
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a4630:
    // 0x1a4630: 0xa602000e
    ctx->pc = 0x1a4630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4634: 0xc06c20d
    ctx->pc = 0x1A4634u;
    SET_GPR_U32(ctx, 31, 0x1A463Cu);
    ctx->pc = 0x1A4638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A463Cu; }
        else if (ctx->pc != 0x1A463Cu) { ctx->pc = 0x1A463Cu; }
    }
    if (ctx->pc != 0x1A463Cu) { return; }
    ctx->pc = 0x1A463Cu;
    // 0x1a463c: 0xc06bf55
    ctx->pc = 0x1A463Cu;
    SET_GPR_U32(ctx, 31, 0x1A4644u);
    ctx->pc = 0x1A4640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4644u; }
        else if (ctx->pc != 0x1A4644u) { ctx->pc = 0x1A4644u; }
    }
    if (ctx->pc != 0x1A4644u) { return; }
    ctx->pc = 0x1A4644u;
    // 0x1a4644: 0x8e020004
    ctx->pc = 0x1a4644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4648: 0x7bbf0010
    ctx->pc = 0x1a4648u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a464c: 0x7bb00000
    ctx->pc = 0x1a464cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4650: 0x3e00008
    ctx->pc = 0x1A4650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4654u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4630u: goto label_1a4630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4658u;
}
