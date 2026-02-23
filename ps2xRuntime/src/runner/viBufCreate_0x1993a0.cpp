#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufCreate
// Address: 0x1993a0 - 0x199418
void viBufCreate_0x1993a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufCreate");


    ctx->pc = 0x1993a0u;

    // 0x1993a0: 0x3c020fff
    ctx->pc = 0x1993a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x1993a4: 0x27bdffc0
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1993a8: 0x3442ffff
    ctx->pc = 0x1993a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1993ac: 0xffb00020
    ctx->pc = 0x1993acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1993b0: 0xc23024
    ctx->pc = 0x1993b0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1993b4: 0x3c032000
    ctx->pc = 0x1993b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x1993b8: 0x80802d
    ctx->pc = 0x1993b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993bc: 0xffbf0030
    ctx->pc = 0x1993bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1993c0: 0xc33025
    ctx->pc = 0x1993c0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1993c4: 0x712c0
    ctx->pc = 0x1993c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 11));
    // 0x1993c8: 0xae050000
    ctx->pc = 0x1993c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1993cc: 0x24030001
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1993d0: 0xae060004
    ctx->pc = 0x1993d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x1993d4: 0x3a0202d
    ctx->pc = 0x1993d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993d8: 0xae020018
    ctx->pc = 0x1993d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1993dc: 0xae080050
    ctx->pc = 0x1993dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x1993e0: 0xae090054
    ctx->pc = 0x1993e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x1993e4: 0xafa30004
    ctx->pc = 0x1993e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1993e8: 0xae070008
    ctx->pc = 0x1993e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1993ec: 0xc055238
    ctx->pc = 0x1993ECu;
    SET_GPR_U32(ctx, 31, 0x1993F4u);
    ctx->pc = 0x1993F0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1548E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1548e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1993F4u; }
        else if (ctx->pc != 0x1993F4u) { ctx->pc = 0x1993F4u; }
    }
    if (ctx->pc != 0x1993F4u) { return; }
    ctx->pc = 0x1993F4u;
    // 0x1993f4: 0xae020040
    ctx->pc = 0x1993f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1993f8: 0xc066506
    ctx->pc = 0x1993F8u;
    SET_GPR_U32(ctx, 31, 0x199400u);
    ctx->pc = 0x1993FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199418u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x199418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199400u; }
        else if (ctx->pc != 0x199400u) { ctx->pc = 0x199400u; }
    }
    if (ctx->pc != 0x199400u) { return; }
    ctx->pc = 0x199400u;
    // 0x199400: 0xfe000048
    ctx->pc = 0x199400u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x199404: 0x24020001
    ctx->pc = 0x199404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x199408: 0xdfbf0030
    ctx->pc = 0x199408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19940c: 0xdfb00020
    ctx->pc = 0x19940cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199410: 0x3e00008
    ctx->pc = 0x199410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199418u;
}
