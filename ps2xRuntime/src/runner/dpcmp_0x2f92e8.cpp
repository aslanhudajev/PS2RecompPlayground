#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpcmp
// Address: 0x2f92e8 - 0x2f9334
void dpcmp_0x2f92e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f92e8u;

    // 0x2f92e8: 0x27bdff90
    ctx->pc = 0x2f92e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f92ec: 0xffa40040
    ctx->pc = 0x2f92ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2f92f0: 0xffa50048
    ctx->pc = 0x2f92f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2f92f4: 0x27a40040
    ctx->pc = 0x2f92f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f92f8: 0xffb00050
    ctx->pc = 0x2f92f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2f92fc: 0xffbf0060
    ctx->pc = 0x2f92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f9300: 0xc0be288
    ctx->pc = 0x2F9300u;
    SET_GPR_U32(ctx, 31, 0x2F9308u);
    ctx->pc = 0x2F9304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9308u; }
    }
    if (ctx->pc != 0x2F9308u) { return; }
    ctx->pc = 0x2F9308u;
    // 0x2f9308: 0x27b00020
    ctx->pc = 0x2f9308u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f930c: 0x27a40048
    ctx->pc = 0x2f930cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x2f9310: 0xc0be288
    ctx->pc = 0x2F9310u;
    SET_GPR_U32(ctx, 31, 0x2F9318u);
    ctx->pc = 0x2F9314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9318u; }
    }
    if (ctx->pc != 0x2F9318u) { return; }
    ctx->pc = 0x2F9318u;
    // 0x2f9318: 0x200282d
    ctx->pc = 0x2f9318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f931c: 0xc0be474
    ctx->pc = 0x2F931Cu;
    SET_GPR_U32(ctx, 31, 0x2F9324u);
    ctx->pc = 0x2F9320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F91D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___fpcmp_parts_d_0x2f91d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9324u; }
    }
    if (ctx->pc != 0x2F9324u) { return; }
    ctx->pc = 0x2F9324u;
    // 0x2f9324: 0xdfbf0060
    ctx->pc = 0x2f9324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f9328: 0xdfb00050
    ctx->pc = 0x2f9328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f932c: 0x3e00008
    ctx->pc = 0x2F932Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9330u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9334u;
}
