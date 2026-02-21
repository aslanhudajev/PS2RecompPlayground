#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitMarker
// Address: 0x2f46c8 - 0x2f470c
void _sysbitMarker_0x2f46c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f46c8u;

    // 0x2f46c8: 0x27bdffd0
    ctx->pc = 0x2f46c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f46cc: 0x24050001
    ctx->pc = 0x2f46ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f46d0: 0xffb00000
    ctx->pc = 0x2f46d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f46d4: 0xffb10010
    ctx->pc = 0x2f46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f46d8: 0xffbf0020
    ctx->pc = 0x2f46d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f46dc: 0xc0bd170
    ctx->pc = 0x2F46DCu;
    SET_GPR_U32(ctx, 31, 0x2F46E4u);
    ctx->pc = 0x2F46E0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F45C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x2f45c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46E4u; }
    }
    if (ctx->pc != 0x2F46E4u) { return; }
    ctx->pc = 0x2F46E4u;
    // 0x2f46e4: 0x40882d
    ctx->pc = 0x2f46e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46e8: 0x200202d
    ctx->pc = 0x2f46e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46ec: 0xc0bd178
    ctx->pc = 0x2F46ECu;
    SET_GPR_U32(ctx, 31, 0x2F46F4u);
    ctx->pc = 0x2F46F0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F45E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sysbitFlush_0x2f45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F46F4u; }
    }
    if (ctx->pc != 0x2F46F4u) { return; }
    ctx->pc = 0x2F46F4u;
    // 0x2f46f4: 0x220102d
    ctx->pc = 0x2f46f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f46f8: 0xdfbf0020
    ctx->pc = 0x2f46f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f46fc: 0xdfb10010
    ctx->pc = 0x2f46fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4700: 0xdfb00000
    ctx->pc = 0x2f4700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4704: 0x3e00008
    ctx->pc = 0x2F4704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F470Cu;
}
