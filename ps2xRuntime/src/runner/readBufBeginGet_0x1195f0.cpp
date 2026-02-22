#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufBeginGet
// Address: 0x1195f0 - 0x119638
void readBufBeginGet_0x1195f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1195f0u;

    // 0x1195f0: 0x80382d
    ctx->pc = 0x1195f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195f4: 0x3c020005
    ctx->pc = 0x1195f4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)5 << 16));
    // 0x1195f8: 0xe21021
    ctx->pc = 0x1195f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1195fc: 0x8c460004
    ctx->pc = 0x1195fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119600: 0x10c0000b
    ctx->pc = 0x119600u;
    {
        const bool branch_taken_0x119600 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x119600) {
            ctx->pc = 0x119630u;
            goto label_119630;
        }
    }
    ctx->pc = 0x119608u;
    // 0x119608: 0x8c430000
    ctx->pc = 0x119608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11960c: 0x8c440008
    ctx->pc = 0x11960cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x119610: 0x661823
    ctx->pc = 0x119610u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x119614: 0x641821
    ctx->pc = 0x119614u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119618: 0x50800001
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x119618) {
            ctx->pc = 0x11961Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x119620u;
            goto label_119620;
        }
    }
    ctx->pc = 0x119620u;
label_119620:
    // 0x119620: 0x64001a
    ctx->pc = 0x119620u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x119624: 0x1010
    ctx->pc = 0x119624u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x119628: 0xe21021
    ctx->pc = 0x119628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11962c: 0xaca20000
    ctx->pc = 0x11962cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_119630:
    // 0x119630: 0x3e00008
    ctx->pc = 0x119630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119634u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119620u: goto label_119620;
            case 0x119630u: goto label_119630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119638u;
}
