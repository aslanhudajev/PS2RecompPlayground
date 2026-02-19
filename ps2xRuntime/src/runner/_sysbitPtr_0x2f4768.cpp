#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitPtr
// Address: 0x2f4768 - 0x2f4794
void _sysbitPtr_0x2f4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4768u;

    // 0x2f4768: 0x8c830008
    ctx->pc = 0x2f4768u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f476c: 0x528c3
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x2f4770: 0x8c820024
    ctx->pc = 0x2f4770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2f4774: 0x651821
    ctx->pc = 0x2f4774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f4778: 0x62102b
    ctx->pc = 0x2f4778u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f477c: 0x14400003
    ctx->pc = 0x2F477Cu;
    {
        const bool branch_taken_0x2f477c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f477c) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F4784u;
    // 0x2f4784: 0x8c820028
    ctx->pc = 0x2f4784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2f4788: 0x621823
    ctx->pc = 0x2f4788u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f478c:
    // 0x2f478c: 0x3e00008
    ctx->pc = 0x2F478Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4790u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F478Cu: goto label_2f478c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4794u;
}
