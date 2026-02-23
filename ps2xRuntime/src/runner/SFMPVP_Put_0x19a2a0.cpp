#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_Put
// Address: 0x19a2a0 - 0x19a2f8
void SFMPVP_Put_0x19a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_Put");


    ctx->pc = 0x19a2a0u;

    // 0x19a2a0: 0x27bdffc0
    ctx->pc = 0x19a2a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a2a4: 0xffb00000
    ctx->pc = 0x19a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a2a8: 0xffb20020
    ctx->pc = 0x19a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19a2ac: 0x80802d
    ctx->pc = 0x19a2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2b0: 0xffb10010
    ctx->pc = 0x19a2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a2b4: 0xa0902d
    ctx->pc = 0x19a2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2b8: 0xffbf0030
    ctx->pc = 0x19a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19a2bc: 0xc066774
    ctx->pc = 0x19A2BCu;
    SET_GPR_U32(ctx, 31, 0x19A2C4u);
    ctx->pc = 0x19A2C0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsSceMpegUsed_0x199dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2C4u; }
        else if (ctx->pc != 0x19A2C4u) { ctx->pc = 0x19A2C4u; }
    }
    if (ctx->pc != 0x19A2C4u) { return; }
    ctx->pc = 0x19A2C4u;
    // 0x19a2c4: 0x14400003
    ctx->pc = 0x19A2C4u;
    {
        const bool branch_taken_0x19a2c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19A2C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 15736));
        if (branch_taken_0x19a2c4) {
            ctx->pc = 0x19A2D4u;
            goto label_19a2d4;
        }
    }
    ctx->pc = 0x19A2CCu;
    // 0x19a2cc: 0x10000004
    ctx->pc = 0x19A2CCu;
    {
        const bool branch_taken_0x19a2cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A2D0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a2cc) {
            ctx->pc = 0x19A2E0u;
            goto label_19a2e0;
        }
    }
    ctx->pc = 0x19A2D4u;
label_19a2d4:
    // 0x19a2d4: 0x240282d
    ctx->pc = 0x19a2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a2d8: 0xc066840
    ctx->pc = 0x19A2D8u;
    SET_GPR_U32(ctx, 31, 0x19A2E0u);
    ctx->pc = 0x19A2DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvp_PutVibuf_0x19a100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A2E0u; }
        else if (ctx->pc != 0x19A2E0u) { ctx->pc = 0x19A2E0u; }
    }
    if (ctx->pc != 0x19A2E0u) { return; }
    ctx->pc = 0x19A2E0u;
label_19a2e0:
    // 0x19a2e0: 0xdfbf0030
    ctx->pc = 0x19a2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a2e4: 0xdfb20020
    ctx->pc = 0x19a2e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a2e8: 0xdfb10010
    ctx->pc = 0x19a2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a2ec: 0xdfb00000
    ctx->pc = 0x19a2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a2f0: 0x3e00008
    ctx->pc = 0x19A2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A2F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A2D4u: goto label_19a2d4;
            case 0x19A2E0u: goto label_19a2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19A2F8u;
}
