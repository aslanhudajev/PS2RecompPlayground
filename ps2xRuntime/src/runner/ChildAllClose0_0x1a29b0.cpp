#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChildAllClose0
// Address: 0x1a29b0 - 0x1a2a04
void ChildAllClose0_0x1a29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChildAllClose0");


    ctx->pc = 0x1a29b0u;

    // 0x1a29b0: 0x27bdffd0
    ctx->pc = 0x1a29b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a29b4: 0x7fbf0020
    ctx->pc = 0x1a29b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a29b8: 0x7fb10010
    ctx->pc = 0x1a29b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a29bc: 0x7fb00000
    ctx->pc = 0x1a29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a29c0: 0x9491002c
    ctx->pc = 0x1a29c0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a29c4: 0x1220000a
    ctx->pc = 0x1A29C4u;
    {
        const bool branch_taken_0x1a29c4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a29c4) {
            ctx->pc = 0x1A29F0u;
            goto label_1a29f0;
        }
    }
    ctx->pc = 0x1A29CCu;
    // 0x1a29cc: 0x8c840020
    ctx->pc = 0x1a29ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1a29d0: 0x0
    ctx->pc = 0x1a29d0u;
    // NOP
label_1a29d4:
    // 0x1a29d4: 0xc068a48
    ctx->pc = 0x1A29D4u;
    SET_GPR_U32(ctx, 31, 0x1A29DCu);
    ctx->pc = 0x1A29D8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->pc = 0x1A2920u;
    {
        const uint32_t __entryPc = ctx->pc;
        FamilyClose0_0x1a2920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29DCu; }
        else if (ctx->pc != 0x1A29DCu) { ctx->pc = 0x1A29DCu; }
    }
    if (ctx->pc != 0x1A29DCu) { return; }
    ctx->pc = 0x1A29DCu;
    // 0x1a29dc: 0x2631ffff
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a29e0: 0x72002628
    ctx->pc = 0x1a29e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a29e4: 0x0
    ctx->pc = 0x1a29e4u;
    // NOP
    // 0x1a29e8: 0x1620fffa
    ctx->pc = 0x1A29E8u;
    {
        const bool branch_taken_0x1a29e8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a29e8) {
            ctx->pc = 0x1A29D4u;
            goto label_1a29d4;
        }
    }
    ctx->pc = 0x1A29F0u;
label_1a29f0:
    // 0x1a29f0: 0x7bbf0020
    ctx->pc = 0x1a29f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a29f4: 0x7bb10010
    ctx->pc = 0x1a29f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a29f8: 0x7bb00000
    ctx->pc = 0x1a29f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a29fc: 0x3e00008
    ctx->pc = 0x1A29FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A29D4u: goto label_1a29d4;
            case 0x1A29F0u: goto label_1a29f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2A04u;
}
