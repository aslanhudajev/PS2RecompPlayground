#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetBlockSizeLog2
// Address: 0x1a9c40 - 0x1a9cd8
void GetBlockSizeLog2_0x1a9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetBlockSizeLog2");


    ctx->pc = 0x1a9c40u;

    // 0x1a9c40: 0x27bdfff0
    ctx->pc = 0x1a9c40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9c44: 0x24030014
    ctx->pc = 0x1a9c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a9c48: 0x10c3001c
    ctx->pc = 0x1A9C48u;
    {
        const bool branch_taken_0x1a9c48 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A9C4Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a9c48) {
            ctx->pc = 0x1A9CBCu;
            goto label_1a9cbc;
        }
    }
    ctx->pc = 0x1A9C50u;
    // 0x1a9c50: 0x24030013
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a9c54: 0x10c30016
    ctx->pc = 0x1A9C54u;
    {
        const bool branch_taken_0x1a9c54 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A9C58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a9c54) {
            ctx->pc = 0x1A9CB0u;
            goto label_1a9cb0;
        }
    }
    ctx->pc = 0x1A9C5Cu;
    // 0x1a9c5c: 0x24030002
    ctx->pc = 0x1a9c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9c60: 0x10c3000e
    ctx->pc = 0x1A9C60u;
    {
        const bool branch_taken_0x1a9c60 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A9C64u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1a9c60) {
            ctx->pc = 0x1A9C9Cu;
            goto label_1a9c9c;
        }
    }
    ctx->pc = 0x1A9C68u;
    // 0x1a9c68: 0x10c00008
    ctx->pc = 0x1A9C68u;
    {
        const bool branch_taken_0x1a9c68 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9C6Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1a9c68) {
            ctx->pc = 0x1A9C8Cu;
            goto label_1a9c8c;
        }
    }
    ctx->pc = 0x1A9C70u;
    // 0x1a9c70: 0x3c020026
    ctx->pc = 0x1a9c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a9c74: 0x70c02e28
    ctx->pc = 0x1a9c74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a9c78: 0xc05114a
    ctx->pc = 0x1A9C78u;
    SET_GPR_U32(ctx, 31, 0x1A9C80u);
    ctx->pc = 0x1A9C7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964480));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C80u; }
        else if (ctx->pc != 0x1A9C80u) { ctx->pc = 0x1A9C80u; }
    }
    if (ctx->pc != 0x1A9C80u) { return; }
    ctx->pc = 0x1A9C80u;
label_1a9c80:
    // 0x1a9c80: 0x1000ffff
    ctx->pc = 0x1A9C80u;
    {
        const bool branch_taken_0x1a9c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9c80) {
            ctx->pc = 0x1A9C80u;
            goto label_1a9c80;
        }
    }
    ctx->pc = 0x1A9C88u;
    // 0x1a9c88: 0x24030003
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1a9c8c:
    // 0x1a9c8c: 0xaca30000
    ctx->pc = 0x1a9c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a9c90: 0x1000000e
    ctx->pc = 0x1A9C90u;
    {
        const bool branch_taken_0x1a9c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9C94u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a9c90) {
            ctx->pc = 0x1A9CCCu;
            goto label_1a9ccc;
        }
    }
    ctx->pc = 0x1A9C98u;
    // 0x1a9c98: 0x24030004
    ctx->pc = 0x1a9c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1a9c9c:
    // 0x1a9c9c: 0xac830000
    ctx->pc = 0x1a9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a9ca0: 0x24030003
    ctx->pc = 0x1a9ca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9ca4: 0x10000009
    ctx->pc = 0x1A9CA4u;
    {
        const bool branch_taken_0x1a9ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9CA8u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a9ca4) {
            ctx->pc = 0x1A9CCCu;
            goto label_1a9ccc;
        }
    }
    ctx->pc = 0x1A9CACu;
    // 0x1a9cac: 0x24030004
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_1a9cb0:
    // 0x1a9cb0: 0xaca30000
    ctx->pc = 0x1a9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a9cb4: 0x10000005
    ctx->pc = 0x1A9CB4u;
    {
        const bool branch_taken_0x1a9cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9CB8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1a9cb4) {
            ctx->pc = 0x1A9CCCu;
            goto label_1a9ccc;
        }
    }
    ctx->pc = 0x1A9CBCu;
label_1a9cbc:
    // 0x1a9cbc: 0x24030005
    ctx->pc = 0x1a9cbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a9cc0: 0xac830000
    ctx->pc = 0x1a9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a9cc4: 0x24030004
    ctx->pc = 0x1a9cc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9cc8: 0xaca30000
    ctx->pc = 0x1a9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1a9ccc:
    // 0x1a9ccc: 0x7bbf0000
    ctx->pc = 0x1a9cccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9cd0: 0x3e00008
    ctx->pc = 0x1A9CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9CD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9C80u: goto label_1a9c80;
            case 0x1A9C8Cu: goto label_1a9c8c;
            case 0x1A9C9Cu: goto label_1a9c9c;
            case 0x1A9CB0u: goto label_1a9cb0;
            case 0x1A9CBCu: goto label_1a9cbc;
            case 0x1A9CCCu: goto label_1a9ccc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9CD8u;
}
