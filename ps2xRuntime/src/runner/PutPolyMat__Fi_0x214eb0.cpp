#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutPolyMat__Fi
// Address: 0x214eb0 - 0x214f20
void PutPolyMat__Fi_0x214eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutPolyMat__Fi");


    ctx->pc = 0x214eb0u;

    // 0x214eb0: 0x41c03
    ctx->pc = 0x214eb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x214eb4: 0x3405ffff
    ctx->pc = 0x214eb4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x214eb8: 0x651824
    ctx->pc = 0x214eb8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x214ebc: 0x33100
    ctx->pc = 0x214ebcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x214ec0: 0x3c030050
    ctx->pc = 0x214ec0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x214ec4: 0x27bdfff0
    ctx->pc = 0x214ec4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214ec8: 0x2463ea20
    ctx->pc = 0x214ec8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x214ecc: 0x7fbf0000
    ctx->pc = 0x214eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x214ed0: 0x661821
    ctx->pc = 0x214ed0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x214ed4: 0x8c650000
    ctx->pc = 0x214ed4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214ed8: 0x3c038000
    ctx->pc = 0x214ed8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x214edc: 0xa31824
    ctx->pc = 0x214edcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x214ee0: 0x1060000c
    ctx->pc = 0x214EE0u;
    {
        const bool branch_taken_0x214ee0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x214ee0) {
            ctx->pc = 0x214F14u;
            goto label_214f14;
        }
    }
    ctx->pc = 0x214EE8u;
    // 0x214ee8: 0x3c020050
    ctx->pc = 0x214ee8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214eec: 0x2442ea24
    ctx->pc = 0x214eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x214ef0: 0x461021
    ctx->pc = 0x214ef0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214ef4: 0x8c420000
    ctx->pc = 0x214ef4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214ef8: 0x3084ffff
    ctx->pc = 0x214ef8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x214efc: 0x41840
    ctx->pc = 0x214efcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x214f00: 0x641821
    ctx->pc = 0x214f00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214f04: 0x31880
    ctx->pc = 0x214f04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x214f08: 0x431021
    ctx->pc = 0x214f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214f0c: 0xc06a080
    ctx->pc = 0x214F0Cu;
    SET_GPR_U32(ctx, 31, 0x214F14u);
    ctx->pc = 0x214F10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A8200u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPut_0x1a8200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F14u; }
        else if (ctx->pc != 0x214F14u) { ctx->pc = 0x214F14u; }
    }
    if (ctx->pc != 0x214F14u) { return; }
    ctx->pc = 0x214F14u;
label_214f14:
    // 0x214f14: 0x7bbf0000
    ctx->pc = 0x214f14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f18: 0x3e00008
    ctx->pc = 0x214F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214F14u: goto label_214f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214F20u;
}
