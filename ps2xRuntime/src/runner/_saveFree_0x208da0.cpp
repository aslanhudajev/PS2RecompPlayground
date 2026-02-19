#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _saveFree
// Address: 0x208da0 - 0x208dd0
void _saveFree_0x208da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208da0u;

    // 0x208da0: 0x27bdffe0
    ctx->pc = 0x208da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208da4: 0xffbf0010
    ctx->pc = 0x208da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208da8: 0xffbe0000
    ctx->pc = 0x208da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x208dac: 0x3a0f02d
    ctx->pc = 0x208dacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208db0: 0xc081e52
    ctx->pc = 0x208DB0u;
    SET_GPR_U32(ctx, 31, 0x208DB8u);
    ctx->pc = 0x207948u;
    {
        const uint32_t __entryPc = ctx->pc;
        backpollWait_0x207948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208DB8u; }
    }
    if (ctx->pc != 0x208DB8u) { return; }
    ctx->pc = 0x208DB8u;
    // 0x208db8: 0x3c0e82d
    ctx->pc = 0x208db8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208dbc: 0xdfbf0010
    ctx->pc = 0x208dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208dc0: 0xdfbe0000
    ctx->pc = 0x208dc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208dc4: 0x27bd0020
    ctx->pc = 0x208dc4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x208dc8: 0x3e00008
    ctx->pc = 0x208DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x208DD0u;
}
