#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: force_Refire_GC2__Fi
// Address: 0x1ed930 - 0x1ed974
void force_Refire_GC2__Fi_0x1ed930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("force_Refire_GC2__Fi");


    ctx->pc = 0x1ed930u;

    // 0x1ed930: 0x27bdffe0
    ctx->pc = 0x1ed930u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed934: 0x7fbf0010
    ctx->pc = 0x1ed934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ed938: 0xc07b518
    ctx->pc = 0x1ED938u;
    SET_GPR_U32(ctx, 31, 0x1ED940u);
    ctx->pc = 0x1ED93Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED940u; }
        else if (ctx->pc != 0x1ED940u) { ctx->pc = 0x1ED940u; }
    }
    if (ctx->pc != 0x1ED940u) { return; }
    ctx->pc = 0x1ED940u;
    // 0x1ed940: 0x70408628
    ctx->pc = 0x1ed940u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed944: 0x3c020050
    ctx->pc = 0x1ed944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ed948: 0xc07ce18
    ctx->pc = 0x1ED948u;
    SET_GPR_U32(ctx, 31, 0x1ED950u);
    ctx->pc = 0x1ED94Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED950u; }
        else if (ctx->pc != 0x1ED950u) { ctx->pc = 0x1ED950u; }
    }
    if (ctx->pc != 0x1ED950u) { return; }
    ctx->pc = 0x1ED950u;
    // 0x1ed950: 0x1c400004
    ctx->pc = 0x1ED950u;
    {
        const bool branch_taken_0x1ed950 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ed950) {
            ctx->pc = 0x1ED964u;
            goto label_1ed964;
        }
    }
    ctx->pc = 0x1ED958u;
    // 0x1ed958: 0x8f838d2c
    ctx->pc = 0x1ed958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937900)));
    // 0x1ed95c: 0x2463ffff
    ctx->pc = 0x1ed95cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ed960: 0xae030010
    ctx->pc = 0x1ed960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1ed964:
    // 0x1ed964: 0x7bbf0010
    ctx->pc = 0x1ed964u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed968: 0x7bb00000
    ctx->pc = 0x1ed968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed96c: 0x3e00008
    ctx->pc = 0x1ED96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED964u: goto label_1ed964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ED974u;
}
