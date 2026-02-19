#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyBite
// Address: 0x25f9b0 - 0x25fa18
void AudioEnemyBite_0x25f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25f9b0u;

    // 0x25f9b0: 0x80282d
    ctx->pc = 0x25f9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9b4: 0x8ca30000
    ctx->pc = 0x25f9b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f9b8: 0x3c02003c
    ctx->pc = 0x25f9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25f9bc: 0x24422f88
    ctx->pc = 0x25f9bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12168));
    // 0x25f9c0: 0x31880
    ctx->pc = 0x25f9c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25f9c4: 0x621821
    ctx->pc = 0x25f9c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f9c8: 0x8c640000
    ctx->pc = 0x25f9c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f9cc: 0x4800010
    ctx->pc = 0x25F9CCu;
    {
        const bool branch_taken_0x25f9cc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x25f9cc) {
            ctx->pc = 0x25FA10u;
            goto label_25fa10;
        }
    }
    ctx->pc = 0x25F9D4u;
    // 0x25f9d4: 0x84a2021a
    ctx->pc = 0x25f9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 538)));
    // 0x25f9d8: 0x28420002
    ctx->pc = 0x25f9d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25f9dc: 0x54400004
    ctx->pc = 0x25F9DCu;
    {
        const bool branch_taken_0x25f9dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25f9dc) {
            ctx->pc = 0x25F9E0u;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x25F9F0u;
            goto label_25f9f0;
        }
    }
    ctx->pc = 0x25F9E4u;
    // 0x25f9e4: 0x3c03003c
    ctx->pc = 0x25f9e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25f9e8: 0x10000002
    ctx->pc = 0x25F9E8u;
    {
        const bool branch_taken_0x25f9e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25F9ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12704));
        if (branch_taken_0x25f9e8) {
            ctx->pc = 0x25F9F4u;
            goto label_25f9f4;
        }
    }
    ctx->pc = 0x25F9F0u;
label_25f9f0:
    // 0x25f9f0: 0x24633180
    ctx->pc = 0x25f9f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12672));
label_25f9f4:
    // 0x25f9f4: 0x41080
    ctx->pc = 0x25f9f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f9f8: 0x431021
    ctx->pc = 0x25f9f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25f9fc: 0x8c440000
    ctx->pc = 0x25f9fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fa00: 0x24a50040
    ctx->pc = 0x25fa00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25fa04: 0x240600b4
    ctx->pc = 0x25fa04u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    // 0x25fa08: 0x8088a62
    ctx->pc = 0x25FA08u;
    ctx->pc = 0x25FA0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 75));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FA10u;
label_25fa10:
    // 0x25fa10: 0x3e00008
    ctx->pc = 0x25FA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F9F0u: goto label_25f9f0;
            case 0x25F9F4u: goto label_25f9f4;
            case 0x25FA10u: goto label_25fa10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FA18u;
}
