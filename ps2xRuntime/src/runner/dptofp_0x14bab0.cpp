#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dptofp
// Address: 0x14bab0 - 0x14bb04
void dptofp_0x14bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dptofp");


    ctx->pc = 0x14bab0u;

    // 0x14bab0: 0x27bdffc0
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14bab4: 0xffa40020
    ctx->pc = 0x14bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x14bab8: 0x3a0282d
    ctx->pc = 0x14bab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14babc: 0xffbf0030
    ctx->pc = 0x14babcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14bac0: 0xc052bd0
    ctx->pc = 0x14BAC0u;
    SET_GPR_U32(ctx, 31, 0x14BAC8u);
    ctx->pc = 0x14BAC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAC8u; }
        else if (ctx->pc != 0x14BAC8u) { ctx->pc = 0x14BAC8u; }
    }
    if (ctx->pc != 0x14BAC8u) { return; }
    ctx->pc = 0x14BAC8u;
    // 0x14bac8: 0xdfa20010
    ctx->pc = 0x14bac8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bacc: 0x3c033fff
    ctx->pc = 0x14baccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16383 << 16));
    // 0x14bad0: 0x3463ffff
    ctx->pc = 0x14bad0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x14bad4: 0x8fa40000
    ctx->pc = 0x14bad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bad8: 0x240b8
    ctx->pc = 0x14bad8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x14badc: 0x8403f
    ctx->pc = 0x14badcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x14bae0: 0x8fa50004
    ctx->pc = 0x14bae0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14bae4: 0x431024
    ctx->pc = 0x14bae4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bae8: 0x35070001
    ctx->pc = 0x14bae8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 8), 1));
    // 0x14baec: 0x8fa60008
    ctx->pc = 0x14baecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14baf0: 0xc05319e
    ctx->pc = 0x14BAF0u;
    SET_GPR_U32(ctx, 31, 0x14BAF8u);
    ctx->pc = 0x14BAF4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 8));
    ctx->pc = 0x14C678u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___make_fp_0x14c678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF8u; }
        else if (ctx->pc != 0x14BAF8u) { ctx->pc = 0x14BAF8u; }
    }
    if (ctx->pc != 0x14BAF8u) { return; }
    ctx->pc = 0x14BAF8u;
    // 0x14baf8: 0xdfbf0030
    ctx->pc = 0x14baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bafc: 0x3e00008
    ctx->pc = 0x14BAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BB04u;
}
