#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitNext
// Address: 0x2f45c0 - 0x2f45dc
void _sysbitNext_0x2f45c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f45c0u;

    // 0x2f45c0: 0xdc820000
    ctx->pc = 0x2f45c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f45c4: 0x24030040
    ctx->pc = 0x2f45c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f45c8: 0x651823
    ctx->pc = 0x2f45c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f45cc: 0x621016
    ctx->pc = 0x2f45ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x2f45d0: 0x2103c
    ctx->pc = 0x2f45d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f45d4: 0x3e00008
    ctx->pc = 0x2F45D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F45D8u;
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F45DCu;
}
