#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetAlphaPoly__Fif
// Address: 0x215070 - 0x2150e0
void SetAlphaPoly__Fif_0x215070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetAlphaPoly__Fif");


    ctx->pc = 0x215070u;

    // 0x215070: 0x41c03
    ctx->pc = 0x215070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x215074: 0x3405ffff
    ctx->pc = 0x215074u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x215078: 0x651824
    ctx->pc = 0x215078u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21507c: 0x33100
    ctx->pc = 0x21507cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x215080: 0x3c030050
    ctx->pc = 0x215080u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x215084: 0x27bdfff0
    ctx->pc = 0x215084u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215088: 0x2463ea20
    ctx->pc = 0x215088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x21508c: 0x7fbf0000
    ctx->pc = 0x21508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x215090: 0x661821
    ctx->pc = 0x215090u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x215094: 0x8c650000
    ctx->pc = 0x215094u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215098: 0x3c038000
    ctx->pc = 0x215098u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x21509c: 0xa31824
    ctx->pc = 0x21509cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2150a0: 0x1060000c
    ctx->pc = 0x2150A0u;
    {
        const bool branch_taken_0x2150a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2150a0) {
            ctx->pc = 0x2150D4u;
            goto label_2150d4;
        }
    }
    ctx->pc = 0x2150A8u;
    // 0x2150a8: 0x3c020050
    ctx->pc = 0x2150a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2150ac: 0x2442ea24
    ctx->pc = 0x2150acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x2150b0: 0x461021
    ctx->pc = 0x2150b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2150b4: 0x8c420000
    ctx->pc = 0x2150b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2150b8: 0x3084ffff
    ctx->pc = 0x2150b8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x2150bc: 0x41840
    ctx->pc = 0x2150bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2150c0: 0x641821
    ctx->pc = 0x2150c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2150c4: 0x31880
    ctx->pc = 0x2150c4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2150c8: 0x431021
    ctx->pc = 0x2150c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2150cc: 0xc06a450
    ctx->pc = 0x2150CCu;
    SET_GPR_U32(ctx, 31, 0x2150D4u);
    ctx->pc = 0x2150D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A9140u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSetAlphaForce_0x1a9140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2150D4u; }
        else if (ctx->pc != 0x2150D4u) { ctx->pc = 0x2150D4u; }
    }
    if (ctx->pc != 0x2150D4u) { return; }
    ctx->pc = 0x2150D4u;
label_2150d4:
    // 0x2150d4: 0x7bbf0000
    ctx->pc = 0x2150d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2150d8: 0x3e00008
    ctx->pc = 0x2150D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2150DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2150D4u: goto label_2150d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2150E0u;
}
