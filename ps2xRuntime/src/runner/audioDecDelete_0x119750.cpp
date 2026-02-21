#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecDelete
// Address: 0x119750 - 0x11978c
void audioDecDelete_0x119750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119750u;

    // 0x119750: 0x27bdffe0
    ctx->pc = 0x119750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119754: 0xffb00000
    ctx->pc = 0x119754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119758: 0xffbf0010
    ctx->pc = 0x119758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11975c: 0x80802d
    ctx->pc = 0x11975cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119760: 0xc045082
    ctx->pc = 0x119760u;
    SET_GPR_U32(ctx, 31, 0x119768u);
    ctx->pc = 0x119764u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x114208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119768u; }
    }
    if (ctx->pc != 0x119768u) { return; }
    ctx->pc = 0x119768u;
    // 0x119768: 0xc045082
    ctx->pc = 0x119768u;
    SET_GPR_U32(ctx, 31, 0x119770u);
    ctx->pc = 0x11976Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->pc = 0x114208u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x114208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119770u; }
    }
    if (ctx->pc != 0x119770u) { return; }
    ctx->pc = 0x119770u;
    // 0x119770: 0xc0467c0
    ctx->pc = 0x119770u;
    SET_GPR_U32(ctx, 31, 0x119778u);
    ctx->pc = 0x119774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeMasterVolume_0x119f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119778u; }
    }
    if (ctx->pc != 0x119778u) { return; }
    ctx->pc = 0x119778u;
    // 0x119778: 0xdfbf0010
    ctx->pc = 0x119778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11977c: 0x24020001
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x119780: 0xdfb00000
    ctx->pc = 0x119780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119784: 0x3e00008
    ctx->pc = 0x119784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11978Cu;
}
