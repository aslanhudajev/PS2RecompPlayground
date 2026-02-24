#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecPause
// Address: 0x119790 - 0x119818
void audioDecPause_0x119790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119790u;

    // 0x119790: 0x27bdffe0
    ctx->pc = 0x119790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119794: 0x24020003
    ctx->pc = 0x119794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x119798: 0xffb00000
    ctx->pc = 0x119798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11979c: 0x80802d
    ctx->pc = 0x11979cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197a0: 0xffbf0010
    ctx->pc = 0x1197a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1197a4: 0xae020000
    ctx->pc = 0x1197a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1197a8: 0xc0467da
    ctx->pc = 0x1197A8u;
    SET_GPR_U32(ctx, 31, 0x1197B0u);
    ctx->pc = 0x1197ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeInputVolume_0x119f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197B0u; }
    }
    if (ctx->pc != 0x1197B0u) { return; }
    ctx->pc = 0x1197B0u;
    // 0x1197b0: 0x24040001
    ctx->pc = 0x1197b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1197b4: 0x340580e0
    ctx->pc = 0x1197b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32992);
    // 0x1197b8: 0x302d
    ctx->pc = 0x1197b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197bc: 0x24070002
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1197c0: 0x402d
    ctx->pc = 0x1197c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197c4: 0xc045c80
    ctx->pc = 0x1197C4u;
    SET_GPR_U32(ctx, 31, 0x1197CCu);
    ctx->pc = 0x1197C8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197CCu; }
    }
    if (ctx->pc != 0x1197CCu) { return; }
    ctx->pc = 0x1197CCu;
    // 0x1197cc: 0x3c0300ff
    ctx->pc = 0x1197ccu;
    SET_GPR_S32(ctx, 3, ((uint32_t)255 << 16));
    // 0x1197d0: 0x8e050044
    ctx->pc = 0x1197d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1197d4: 0x3463ffff
    ctx->pc = 0x1197d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)65535);
    // 0x1197d8: 0x8e080058
    ctx->pc = 0x1197d8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1197dc: 0x431024
    ctx->pc = 0x1197dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1197e0: 0x24040001
    ctx->pc = 0x1197e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1197e4: 0x451023
    ctx->pc = 0x1197e4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1197e8: 0x302d
    ctx->pc = 0x1197e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197ec: 0xae020050
    ctx->pc = 0x1197ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1197f0: 0x340580d0
    ctx->pc = 0x1197f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32976);
    // 0x1197f4: 0x382d
    ctx->pc = 0x1197f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1197f8: 0x24094000
    ctx->pc = 0x1197f8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1197fc: 0xc045c80
    ctx->pc = 0x1197FCu;
    SET_GPR_U32(ctx, 31, 0x119804u);
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2048));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119804u; }
    }
    if (ctx->pc != 0x119804u) { return; }
    ctx->pc = 0x119804u;
    // 0x119804: 0xdfbf0010
    ctx->pc = 0x119804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119808: 0x24020001
    ctx->pc = 0x119808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11980c: 0xdfb00000
    ctx->pc = 0x11980cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119810: 0x3e00008
    ctx->pc = 0x119810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119818u;
}
