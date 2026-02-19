#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1RelDataF
// Address: 0x2b3740 - 0x2b3778
void pbGetVu1RelDataF_0x2b3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3740u;

    // 0x2b3740: 0x27bdffe0
    ctx->pc = 0x2b3740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3744: 0xffbf0010
    ctx->pc = 0x2b3744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3748: 0xffb00000
    ctx->pc = 0x2b3748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b374c: 0xc0acc8e
    ctx->pc = 0x2B374Cu;
    SET_GPR_U32(ctx, 31, 0x2B3754u);
    ctx->pc = 0x2B3750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3238u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1IReg_0x2b3238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3754u; }
    }
    if (ctx->pc != 0x2B3754u) { return; }
    ctx->pc = 0x2B3754u;
    // 0x2b3754: 0x22100
    ctx->pc = 0x2b3754u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b3758: 0xc0accd2
    ctx->pc = 0x2B3758u;
    SET_GPR_U32(ctx, 31, 0x2B3760u);
    ctx->pc = 0x2B375Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3348u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1MemF_0x2b3348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3760u; }
    }
    if (ctx->pc != 0x2B3760u) { return; }
    ctx->pc = 0x2B3760u;
    // 0x2b3760: 0xc0be822
    ctx->pc = 0x2B3760u;
    SET_GPR_U32(ctx, 31, 0x2B3768u);
    ctx->pc = 0x2B3764u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3768u; }
    }
    if (ctx->pc != 0x2B3768u) { return; }
    ctx->pc = 0x2B3768u;
    // 0x2b3768: 0xdfbf0010
    ctx->pc = 0x2b3768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b376c: 0xdfb00000
    ctx->pc = 0x2b376cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3770: 0x3e00008
    ctx->pc = 0x2B3770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3778u;
}
