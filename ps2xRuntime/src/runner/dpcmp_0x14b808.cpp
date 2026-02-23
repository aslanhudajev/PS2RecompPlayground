#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dpcmp
// Address: 0x14b808 - 0x14b854
void dpcmp_0x14b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dpcmp");


    ctx->pc = 0x14b808u;

    // 0x14b808: 0x27bdff90
    ctx->pc = 0x14b808u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14b80c: 0xffa40040
    ctx->pc = 0x14b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x14b810: 0xffa50048
    ctx->pc = 0x14b810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x14b814: 0x27a40040
    ctx->pc = 0x14b814u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b818: 0xffb00050
    ctx->pc = 0x14b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x14b81c: 0xffbf0060
    ctx->pc = 0x14b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14b820: 0xc052bd0
    ctx->pc = 0x14B820u;
    SET_GPR_U32(ctx, 31, 0x14B828u);
    ctx->pc = 0x14B824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B828u; }
        else if (ctx->pc != 0x14B828u) { ctx->pc = 0x14B828u; }
    }
    if (ctx->pc != 0x14B828u) { return; }
    ctx->pc = 0x14B828u;
    // 0x14b828: 0x27b00020
    ctx->pc = 0x14b828u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b82c: 0x27a40048
    ctx->pc = 0x14b82cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x14b830: 0xc052bd0
    ctx->pc = 0x14B830u;
    SET_GPR_U32(ctx, 31, 0x14B838u);
    ctx->pc = 0x14B834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B838u; }
        else if (ctx->pc != 0x14B838u) { ctx->pc = 0x14B838u; }
    }
    if (ctx->pc != 0x14B838u) { return; }
    ctx->pc = 0x14B838u;
    // 0x14b838: 0x200282d
    ctx->pc = 0x14b838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b83c: 0xc052dbc
    ctx->pc = 0x14B83Cu;
    SET_GPR_U32(ctx, 31, 0x14B844u);
    ctx->pc = 0x14B840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_d_0x14b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B844u; }
        else if (ctx->pc != 0x14B844u) { ctx->pc = 0x14B844u; }
    }
    if (ctx->pc != 0x14B844u) { return; }
    ctx->pc = 0x14B844u;
    // 0x14b844: 0xdfbf0060
    ctx->pc = 0x14b844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14b848: 0xdfb00050
    ctx->pc = 0x14b848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14b84c: 0x3e00008
    ctx->pc = 0x14B84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B850u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B854u;
}
