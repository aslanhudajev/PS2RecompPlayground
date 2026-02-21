#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufCreate
// Address: 0x2df298 - 0x2df310
void viBufCreate_0x2df298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df298u;

    // 0x2df298: 0x27bdffc0
    ctx->pc = 0x2df298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df29c: 0xffbf0030
    ctx->pc = 0x2df29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df2a0: 0xffb00020
    ctx->pc = 0x2df2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2df2a4: 0x80802d
    ctx->pc = 0x2df2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df2a8: 0xae050000
    ctx->pc = 0x2df2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2df2ac: 0x3c020fff
    ctx->pc = 0x2df2acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2df2b0: 0x3442ffff
    ctx->pc = 0x2df2b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2df2b4: 0xc23024
    ctx->pc = 0x2df2b4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2df2b8: 0x3c022000
    ctx->pc = 0x2df2b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2df2bc: 0xc23025
    ctx->pc = 0x2df2bcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2df2c0: 0xae060004
    ctx->pc = 0x2df2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x2df2c4: 0xae070008
    ctx->pc = 0x2df2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x2df2c8: 0x73ac0
    ctx->pc = 0x2df2c8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 11));
    // 0x2df2cc: 0xae070018
    ctx->pc = 0x2df2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    // 0x2df2d0: 0xae080050
    ctx->pc = 0x2df2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x2df2d4: 0xae090054
    ctx->pc = 0x2df2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x2df2d8: 0x24020001
    ctx->pc = 0x2df2d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df2dc: 0xafa20008
    ctx->pc = 0x2df2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2df2e0: 0xafa20004
    ctx->pc = 0x2df2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2df2e4: 0xc0c0d78
    ctx->pc = 0x2DF2E4u;
    SET_GPR_U32(ctx, 31, 0x2DF2ECu);
    ctx->pc = 0x2DF2E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2ECu; }
    }
    if (ctx->pc != 0x2DF2ECu) { return; }
    ctx->pc = 0x2DF2ECu;
    // 0x2df2ec: 0xae020040
    ctx->pc = 0x2df2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2df2f0: 0xc0b7cc4
    ctx->pc = 0x2DF2F0u;
    SET_GPR_U32(ctx, 31, 0x2DF2F8u);
    ctx->pc = 0x2DF2F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x2df310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF2F8u; }
    }
    if (ctx->pc != 0x2DF2F8u) { return; }
    ctx->pc = 0x2DF2F8u;
    // 0x2df2f8: 0xfe000048
    ctx->pc = 0x2df2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x2df2fc: 0x24020001
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df300: 0xdfbf0030
    ctx->pc = 0x2df300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df304: 0xdfb00020
    ctx->pc = 0x2df304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df308: 0x3e00008
    ctx->pc = 0x2DF308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF30Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF310u;
}
