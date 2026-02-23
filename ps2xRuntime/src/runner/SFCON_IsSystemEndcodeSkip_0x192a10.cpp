#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFCON_IsSystemEndcodeSkip
// Address: 0x192a10 - 0x192a58
void SFCON_IsSystemEndcodeSkip_0x192a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFCON_IsSystemEndcodeSkip");


    ctx->pc = 0x192a10u;

    // 0x192a10: 0x27bdffe0
    ctx->pc = 0x192a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192a14: 0x24050031
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 49));
    // 0x192a18: 0xffb00000
    ctx->pc = 0x192a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192a1c: 0xffbf0010
    ctx->pc = 0x192a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192a20: 0xc0674c2
    ctx->pc = 0x192A20u;
    SET_GPR_U32(ctx, 31, 0x192A28u);
    ctx->pc = 0x192A24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A28u; }
        else if (ctx->pc != 0x192A28u) { ctx->pc = 0x192A28u; }
    }
    if (ctx->pc != 0x192A28u) { return; }
    ctx->pc = 0x192A28u;
    // 0x192a28: 0x14400007
    ctx->pc = 0x192A28u;
    {
        const bool branch_taken_0x192a28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192A2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x192a28) {
            ctx->pc = 0x192A48u;
            goto label_192a48;
        }
    }
    ctx->pc = 0x192A30u;
    // 0x192a30: 0x200202d
    ctx->pc = 0x192a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a34: 0xc0674c2
    ctx->pc = 0x192A34u;
    SET_GPR_U32(ctx, 31, 0x192A3Cu);
    ctx->pc = 0x192A38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192A3Cu; }
        else if (ctx->pc != 0x192A3Cu) { ctx->pc = 0x192A3Cu; }
    }
    if (ctx->pc != 0x192A3Cu) { return; }
    ctx->pc = 0x192A3Cu;
    // 0x192a3c: 0x14400002
    ctx->pc = 0x192A3Cu;
    {
        const bool branch_taken_0x192a3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192A40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x192a3c) {
            ctx->pc = 0x192A48u;
            goto label_192a48;
        }
    }
    ctx->pc = 0x192A44u;
    // 0x192a44: 0x102d
    ctx->pc = 0x192a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192a48:
    // 0x192a48: 0xdfbf0010
    ctx->pc = 0x192a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a4c: 0xdfb00000
    ctx->pc = 0x192a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a50: 0x3e00008
    ctx->pc = 0x192A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192A48u: goto label_192a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192A58u;
}
