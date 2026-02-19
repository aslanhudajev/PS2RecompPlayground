#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitJump
// Address: 0x2f4710 - 0x2f4764
void _sysbitJump_0x2f4710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4710u;

    // 0x2f4710: 0x80382d
    ctx->pc = 0x2f4710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4714: 0x528c0
    ctx->pc = 0x2f4714u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2f4718: 0xdce20018
    ctx->pc = 0x2f4718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2f471c: 0x8ce60008
    ctx->pc = 0x2f471cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2f4720: 0xa2102d
    ctx->pc = 0x2f4720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2f4724: 0x8ce30024
    ctx->pc = 0x2f4724u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2f4728: 0x22778
    ctx->pc = 0x2f4728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x2f472c: 0x4203f
    ctx->pc = 0x2f472cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2f4730: 0xfce00000
    ctx->pc = 0x2f4730u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x2f4734: 0xc43021
    ctx->pc = 0x2f4734u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f4738: 0xace00010
    ctx->pc = 0x2f4738u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x2f473c: 0xc3182b
    ctx->pc = 0x2f473cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f4740: 0xfce20018
    ctx->pc = 0x2f4740u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x2f4744: 0x14600004
    ctx->pc = 0x2F4744u;
    {
        const bool branch_taken_0x2f4744 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F4748u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        if (branch_taken_0x2f4744) {
            ctx->pc = 0x2F4758u;
            goto label_2f4758;
        }
    }
    ctx->pc = 0x2F474Cu;
    // 0x2f474c: 0x8ce20028
    ctx->pc = 0x2f474cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x2f4750: 0xc21023
    ctx->pc = 0x2f4750u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2f4754: 0xace2000c
    ctx->pc = 0x2f4754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_2f4758:
    // 0x2f4758: 0xe0202d
    ctx->pc = 0x2f4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f475c: 0x80bd178
    ctx->pc = 0x2F475Cu;
    ctx->pc = 0x2F4760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F45E0u;
    _sysbitFlush_0x2f45e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F4764u;
}
