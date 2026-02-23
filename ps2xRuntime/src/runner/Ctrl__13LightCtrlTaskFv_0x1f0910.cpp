#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Ctrl__13LightCtrlTaskFv
// Address: 0x1f0910 - 0x1f096c
void Ctrl__13LightCtrlTaskFv_0x1f0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ctrl__13LightCtrlTaskFv");


    ctx->pc = 0x1f0910u;

    // 0x1f0910: 0x27bdfff0
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0914: 0x7fbf0000
    ctx->pc = 0x1f0914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f0918: 0x8c86000c
    ctx->pc = 0x1f0918u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f091c: 0x8c820004
    ctx->pc = 0x1f091cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f0920: 0x24850180
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 384));
    // 0x1f0924: 0x61840
    ctx->pc = 0x1f0924u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1f0928: 0x661821
    ctx->pc = 0x1f0928u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f092c: 0x318c0
    ctx->pc = 0x1f092cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0930: 0x661823
    ctx->pc = 0x1f0930u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f0934: 0x31880
    ctx->pc = 0x1f0934u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0938: 0x831821
    ctx->pc = 0x1f0938u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f093c: 0x14400002
    ctx->pc = 0x1F093Cu;
    {
        const bool branch_taken_0x1f093c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0940u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1f093c) {
            ctx->pc = 0x1F0948u;
            goto label_1f0948;
        }
    }
    ctx->pc = 0x1F0944u;
    // 0x1f0944: 0x70001e28
    ctx->pc = 0x1f0944u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0948:
    // 0x1f0948: 0x8c820008
    ctx->pc = 0x1f0948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f094c: 0x14400002
    ctx->pc = 0x1F094Cu;
    {
        const bool branch_taken_0x1f094c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0950u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f094c) {
            ctx->pc = 0x1F0958u;
            goto label_1f0958;
        }
    }
    ctx->pc = 0x1F0954u;
    // 0x1f0954: 0x70002e28
    ctx->pc = 0x1f0954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0958:
    // 0x1f0958: 0xc07c154
    ctx->pc = 0x1F0958u;
    SET_GPR_U32(ctx, 31, 0x1F0960u);
    ctx->pc = 0x1F0550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0960u; }
        else if (ctx->pc != 0x1F0960u) { ctx->pc = 0x1F0960u; }
    }
    if (ctx->pc != 0x1F0960u) { return; }
    ctx->pc = 0x1F0960u;
    // 0x1f0960: 0x7bbf0000
    ctx->pc = 0x1f0960u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0964: 0x3e00008
    ctx->pc = 0x1F0964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0968u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0948u: goto label_1f0948;
            case 0x1F0958u: goto label_1f0958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F096Cu;
}
