#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_AdjustPrepEnd
// Address: 0x19afb8 - 0x19afe8
void sfply_AdjustPrepEnd_0x19afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_AdjustPrepEnd");


    ctx->pc = 0x19afb8u;

    // 0x19afb8: 0x27bdffe0
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19afbc: 0xffb00000
    ctx->pc = 0x19afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19afc0: 0xffbf0010
    ctx->pc = 0x19afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19afc4: 0xc066bfa
    ctx->pc = 0x19AFC4u;
    SET_GPR_U32(ctx, 31, 0x19AFCCu);
    ctx->pc = 0x19AFC8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_FixAvPlay_0x19afe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AFCCu; }
        else if (ctx->pc != 0x19AFCCu) { ctx->pc = 0x19AFCCu; }
    }
    if (ctx->pc != 0x19AFCCu) { return; }
    ctx->pc = 0x19AFCCu;
    // 0x19afcc: 0xc066c24
    ctx->pc = 0x19AFCCu;
    SET_GPR_U32(ctx, 31, 0x19AFD4u);
    ctx->pc = 0x19AFD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B090u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_AdjustSyncMode_0x19b090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AFD4u; }
        else if (ctx->pc != 0x19AFD4u) { ctx->pc = 0x19AFD4u; }
    }
    if (ctx->pc != 0x19AFD4u) { return; }
    ctx->pc = 0x19AFD4u;
    // 0x19afd4: 0x200202d
    ctx->pc = 0x19afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afd8: 0xdfbf0010
    ctx->pc = 0x19afd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19afdc: 0xdfb00000
    ctx->pc = 0x19afdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19afe0: 0x8066c48
    ctx->pc = 0x19AFE0u;
    ctx->pc = 0x19AFE4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19B120u;
    sfply_AdjustEtrg_0x19b120(rdram, ctx, runtime); return;
    ctx->pc = 0x19AFE8u;
}
