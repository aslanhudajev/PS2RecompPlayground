#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptofp
// Address: 0x2f9590 - 0x2f95e4
void dptofp_0x2f9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9590u;

    // 0x2f9590: 0x27bdffc0
    ctx->pc = 0x2f9590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f9594: 0xffa40020
    ctx->pc = 0x2f9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x2f9598: 0x3a0282d
    ctx->pc = 0x2f9598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f959c: 0xffbf0030
    ctx->pc = 0x2f959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f95a0: 0xc0be288
    ctx->pc = 0x2F95A0u;
    SET_GPR_U32(ctx, 31, 0x2F95A8u);
    ctx->pc = 0x2F95A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95A8u; }
    }
    if (ctx->pc != 0x2F95A8u) { return; }
    ctx->pc = 0x2F95A8u;
    // 0x2f95a8: 0xdfa20010
    ctx->pc = 0x2f95a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f95ac: 0x3c033fff
    ctx->pc = 0x2f95acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16383 << 16));
    // 0x2f95b0: 0x3463ffff
    ctx->pc = 0x2f95b0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2f95b4: 0x8fa40000
    ctx->pc = 0x2f95b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f95b8: 0x240b8
    ctx->pc = 0x2f95b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x2f95bc: 0x8403f
    ctx->pc = 0x2f95bcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2f95c0: 0x8fa50004
    ctx->pc = 0x2f95c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f95c4: 0x431024
    ctx->pc = 0x2f95c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f95c8: 0x35070001
    ctx->pc = 0x2f95c8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), 1));
    // 0x2f95cc: 0x8fa60008
    ctx->pc = 0x2f95ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f95d0: 0xc0be856
    ctx->pc = 0x2F95D0u;
    SET_GPR_U32(ctx, 31, 0x2F95D8u);
    ctx->pc = 0x2F95D4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 8));
    ctx->pc = 0x2FA158u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_fp_0x2fa158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F95D8u; }
    }
    if (ctx->pc != 0x2F95D8u) { return; }
    ctx->pc = 0x2F95D8u;
    // 0x2f95d8: 0xdfbf0030
    ctx->pc = 0x2f95d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f95dc: 0x3e00008
    ctx->pc = 0x2F95DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F95E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F95E4u;
}
