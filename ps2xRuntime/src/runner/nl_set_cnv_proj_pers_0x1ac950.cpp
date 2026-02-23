#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nl_set_cnv_proj_pers
// Address: 0x1ac950 - 0x1ac9ac
void nl_set_cnv_proj_pers_0x1ac950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nl_set_cnv_proj_pers");


    ctx->pc = 0x1ac950u;

    // 0x1ac950: 0x27bdfff0
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac954: 0x3c020030
    ctx->pc = 0x1ac954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac958: 0x7fbf0000
    ctx->pc = 0x1ac958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ac95c: 0xc06bf55
    ctx->pc = 0x1AC95Cu;
    SET_GPR_U32(ctx, 31, 0x1AC964u);
    ctx->pc = 0x1AC960u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21744));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC964u; }
        else if (ctx->pc != 0x1AC964u) { ctx->pc = 0x1AC964u; }
    }
    if (ctx->pc != 0x1AC964u) { return; }
    ctx->pc = 0x1AC964u;
    // 0x1ac964: 0x3c020030
    ctx->pc = 0x1ac964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac968: 0xc06b250
    ctx->pc = 0x1AC968u;
    SET_GPR_U32(ctx, 31, 0x1AC970u);
    ctx->pc = 0x1AC96Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21808));
    ctx->pc = 0x1AC940u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLoadRechangeMatrix_0x1ac940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC970u; }
        else if (ctx->pc != 0x1AC970u) { ctx->pc = 0x1AC970u; }
    }
    if (ctx->pc != 0x1AC970u) { return; }
    ctx->pc = 0x1AC970u;
    // 0x1ac970: 0x3c020030
    ctx->pc = 0x1ac970u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac974: 0xc06c04e
    ctx->pc = 0x1AC974u;
    SET_GPR_U32(ctx, 31, 0x1AC97Cu);
    ctx->pc = 0x1AC978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21744));
    ctx->pc = 0x1B0138u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0138_0x1b0138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC97Cu; }
        else if (ctx->pc != 0x1AC97Cu) { ctx->pc = 0x1AC97Cu; }
    }
    if (ctx->pc != 0x1AC97Cu) { return; }
    ctx->pc = 0x1AC97Cu;
    // 0x1ac97c: 0x3c020030
    ctx->pc = 0x1ac97cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac980: 0xc06bf55
    ctx->pc = 0x1AC980u;
    SET_GPR_U32(ctx, 31, 0x1AC988u);
    ctx->pc = 0x1AC984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22000));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC988u; }
        else if (ctx->pc != 0x1AC988u) { ctx->pc = 0x1AC988u; }
    }
    if (ctx->pc != 0x1AC988u) { return; }
    ctx->pc = 0x1AC988u;
    // 0x1ac988: 0x3c020030
    ctx->pc = 0x1ac988u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac98c: 0xc06bf55
    ctx->pc = 0x1AC98Cu;
    SET_GPR_U32(ctx, 31, 0x1AC994u);
    ctx->pc = 0x1AC990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21936));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC994u; }
        else if (ctx->pc != 0x1AC994u) { ctx->pc = 0x1AC994u; }
    }
    if (ctx->pc != 0x1AC994u) { return; }
    ctx->pc = 0x1AC994u;
    // 0x1ac994: 0x3c020030
    ctx->pc = 0x1ac994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac998: 0xc06c038
    ctx->pc = 0x1AC998u;
    SET_GPR_U32(ctx, 31, 0x1AC9A0u);
    ctx->pc = 0x1AC99Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21744));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC9A0u; }
        else if (ctx->pc != 0x1AC9A0u) { ctx->pc = 0x1AC9A0u; }
    }
    if (ctx->pc != 0x1AC9A0u) { return; }
    ctx->pc = 0x1AC9A0u;
    // 0x1ac9a0: 0x7bbf0000
    ctx->pc = 0x1ac9a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac9a4: 0x3e00008
    ctx->pc = 0x1AC9A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC9A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC9ACu;
}
