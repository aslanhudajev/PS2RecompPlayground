#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Init
// Address: 0x18fbe0 - 0x18fc1c
void SFADXT_Init_0x18fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Init");


    ctx->pc = 0x18fbe0u;

    // 0x18fbe0: 0x27bdfff0
    ctx->pc = 0x18fbe0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18fbe4: 0xffbf0000
    ctx->pc = 0x18fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fbe8: 0xc05b128
    ctx->pc = 0x18FBE8u;
    SET_GPR_U32(ctx, 31, 0x18FBF0u);
    ctx->pc = 0x16C4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Init_0x16c4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBF0u; }
        else if (ctx->pc != 0x18FBF0u) { ctx->pc = 0x18FBF0u; }
    }
    if (ctx->pc != 0x18FBF0u) { return; }
    ctx->pc = 0x18FBF0u;
    // 0x18fbf0: 0xc05b6fa
    ctx->pc = 0x18FBF0u;
    SET_GPR_U32(ctx, 31, 0x18FBF8u);
    ctx->pc = 0x16DBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFA_Init_0x16dbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FBF8u; }
        else if (ctx->pc != 0x18FBF8u) { ctx->pc = 0x18FBF8u; }
    }
    if (ctx->pc != 0x18FBF8u) { return; }
    ctx->pc = 0x18FBF8u;
    // 0x18fbf8: 0x3c04002f
    ctx->pc = 0x18fbf8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)47 << 16));
    // 0x18fbfc: 0x282d
    ctx->pc = 0x18fbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc00: 0x2484c658
    ctx->pc = 0x18fc00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952536));
    // 0x18fc04: 0xc0601e6
    ctx->pc = 0x18FC04u;
    SET_GPR_U32(ctx, 31, 0x18FC0Cu);
    ctx->pc = 0x18FC08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC0Cu; }
        else if (ctx->pc != 0x18FC0Cu) { ctx->pc = 0x18FC0Cu; }
    }
    if (ctx->pc != 0x18FC0Cu) { return; }
    ctx->pc = 0x18FC0Cu;
    // 0x18fc0c: 0xdfbf0000
    ctx->pc = 0x18fc0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fc10: 0x102d
    ctx->pc = 0x18fc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc14: 0x3e00008
    ctx->pc = 0x18FC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FC18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FC1Cu;
}
