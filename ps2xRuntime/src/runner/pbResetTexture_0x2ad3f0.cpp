#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetTexture
// Address: 0x2ad3f0 - 0x2ad424
void pbResetTexture_0x2ad3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad3f0u;

    // 0x2ad3f0: 0x3c020036
    ctx->pc = 0x2ad3f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad3f4: 0x8c43dee0
    ctx->pc = 0x2ad3f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad3f8: 0x8c620048
    ctx->pc = 0x2ad3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2ad3fc: 0x54400005
    ctx->pc = 0x2AD3FCu;
    {
        const bool branch_taken_0x2ad3fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ad3fc) {
            ctx->pc = 0x2AD400u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 72)));
            ctx->pc = 0x2AD414u;
            goto label_2ad414;
        }
    }
    ctx->pc = 0x2AD404u;
    // 0x2ad404: 0x3c020037
    ctx->pc = 0x2ad404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad408: 0x244286e0
    ctx->pc = 0x2ad408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936288));
    // 0x2ad40c: 0xac620048
    ctx->pc = 0x2ad40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2ad410: 0x8c630048
    ctx->pc = 0x2ad410u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2ad414:
    // 0x2ad414: 0x3c02ffff
    ctx->pc = 0x2ad414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2ad418: 0x3442ffff
    ctx->pc = 0x2ad418u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ad41c: 0x3e00008
    ctx->pc = 0x2AD41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD420u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD414u: goto label_2ad414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD424u;
}
