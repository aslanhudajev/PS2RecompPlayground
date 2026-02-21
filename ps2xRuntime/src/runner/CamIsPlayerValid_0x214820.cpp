#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamIsPlayerValid
// Address: 0x214820 - 0x214854
void CamIsPlayerValid_0x214820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214820u;

    // 0x214820: 0x9482093c
    ctx->pc = 0x214820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x214824: 0x30420020
    ctx->pc = 0x214824u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x214828: 0x14400008
    ctx->pc = 0x214828u;
    {
        const bool branch_taken_0x214828 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21482Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214828) {
            ctx->pc = 0x21484Cu;
            goto label_21484c;
        }
    }
    ctx->pc = 0x214830u;
    // 0x214830: 0x8c8400fc
    ctx->pc = 0x214830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x214834: 0x24020001
    ctx->pc = 0x214834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214838: 0x10820003
    ctx->pc = 0x214838u;
    {
        const bool branch_taken_0x214838 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x21483Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x214838) {
            ctx->pc = 0x214848u;
            goto label_214848;
        }
    }
    ctx->pc = 0x214840u;
    // 0x214840: 0x14820002
    ctx->pc = 0x214840u;
    {
        const bool branch_taken_0x214840 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x214840) {
            ctx->pc = 0x21484Cu;
            goto label_21484c;
        }
    }
    ctx->pc = 0x214848u;
label_214848:
    // 0x214848: 0x24030001
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_21484c:
    // 0x21484c: 0x3e00008
    ctx->pc = 0x21484Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214850u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214848u: goto label_214848;
            case 0x21484Cu: goto label_21484c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214854u;
}
