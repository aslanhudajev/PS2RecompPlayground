#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitPtr
// Address: 0x126088 - 0x1260b4
void _sysbitPtr_0x126088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x126088u;

    // 0x126088: 0x8c830008
    ctx->pc = 0x126088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12608c: 0x528c3
    ctx->pc = 0x12608cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x126090: 0x8c820024
    ctx->pc = 0x126090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x126094: 0x651821
    ctx->pc = 0x126094u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x126098: 0x62102b
    ctx->pc = 0x126098u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12609c: 0x14400003
    ctx->pc = 0x12609Cu;
    {
        const bool branch_taken_0x12609c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12609c) {
            ctx->pc = 0x1260ACu;
            goto label_1260ac;
        }
    }
    ctx->pc = 0x1260A4u;
    // 0x1260a4: 0x8c820028
    ctx->pc = 0x1260a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1260a8: 0x621823
    ctx->pc = 0x1260a8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1260ac:
    // 0x1260ac: 0x3e00008
    ctx->pc = 0x1260ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260B0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1260ACu: goto label_1260ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1260B4u;
}
