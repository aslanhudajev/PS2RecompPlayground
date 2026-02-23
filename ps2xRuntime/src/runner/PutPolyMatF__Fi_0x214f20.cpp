#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutPolyMatF__Fi
// Address: 0x214f20 - 0x214f90
void PutPolyMatF__Fi_0x214f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutPolyMatF__Fi");


    ctx->pc = 0x214f20u;

    // 0x214f20: 0x41c03
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x214f24: 0x3405ffff
    ctx->pc = 0x214f24u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x214f28: 0x651824
    ctx->pc = 0x214f28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x214f2c: 0x33100
    ctx->pc = 0x214f2cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x214f30: 0x3c030050
    ctx->pc = 0x214f30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x214f34: 0x27bdfff0
    ctx->pc = 0x214f34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214f38: 0x2463ea20
    ctx->pc = 0x214f38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x214f3c: 0x7fbf0000
    ctx->pc = 0x214f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x214f40: 0x661821
    ctx->pc = 0x214f40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x214f44: 0x8c650000
    ctx->pc = 0x214f44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214f48: 0x3c038000
    ctx->pc = 0x214f48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x214f4c: 0xa31824
    ctx->pc = 0x214f4cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x214f50: 0x1060000c
    ctx->pc = 0x214F50u;
    {
        const bool branch_taken_0x214f50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x214f50) {
            ctx->pc = 0x214F84u;
            goto label_214f84;
        }
    }
    ctx->pc = 0x214F58u;
    // 0x214f58: 0x3c020050
    ctx->pc = 0x214f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214f5c: 0x2442ea24
    ctx->pc = 0x214f5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x214f60: 0x461021
    ctx->pc = 0x214f60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214f64: 0x8c420000
    ctx->pc = 0x214f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214f68: 0x3084ffff
    ctx->pc = 0x214f68u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x214f6c: 0x41840
    ctx->pc = 0x214f6cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x214f70: 0x641821
    ctx->pc = 0x214f70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214f74: 0x31880
    ctx->pc = 0x214f74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x214f78: 0x431021
    ctx->pc = 0x214f78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214f7c: 0xc06a0c8
    ctx->pc = 0x214F7Cu;
    SET_GPR_U32(ctx, 31, 0x214F84u);
    ctx->pc = 0x214F80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A8320u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutForce_0x1a8320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F84u; }
        else if (ctx->pc != 0x214F84u) { ctx->pc = 0x214F84u; }
    }
    if (ctx->pc != 0x214F84u) { return; }
    ctx->pc = 0x214F84u;
label_214f84:
    // 0x214f84: 0x7bbf0000
    ctx->pc = 0x214f84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f88: 0x3e00008
    ctx->pc = 0x214F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214F84u: goto label_214f84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214F90u;
}
