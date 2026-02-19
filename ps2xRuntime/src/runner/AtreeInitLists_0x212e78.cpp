#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeInitLists
// Address: 0x212e78 - 0x212ed4
void AtreeInitLists_0x212e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212e78u;

    // 0x212e78: 0x80282d
    ctx->pc = 0x212e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e7c: 0x3c040032
    ctx->pc = 0x212e7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x212e80: 0x3c030032
    ctx->pc = 0x212e80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x212e84: 0x2463f4d8
    ctx->pc = 0x212e84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964440));
    // 0x212e88: 0x51080
    ctx->pc = 0x212e88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x212e8c: 0x431021
    ctx->pc = 0x212e8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x212e90: 0x8c420000
    ctx->pc = 0x212e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212e94: 0xac82f4d0
    ctx->pc = 0x212e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964432), GPR_U32(ctx, 2));
    // 0x212e98: 0x40182d
    ctx->pc = 0x212e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e9c: 0x28620018
    ctx->pc = 0x212e9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 24));
    // 0x212ea0: 0x1040000a
    ctx->pc = 0x212EA0u;
    {
        const bool branch_taken_0x212ea0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212EA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x212ea0) {
            ctx->pc = 0x212ECCu;
            goto label_212ecc;
        }
    }
    ctx->pc = 0x212EA8u;
    // 0x212ea8: 0x2444f538
    ctx->pc = 0x212ea8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964536));
    // 0x212eac: 0x0
    ctx->pc = 0x212eacu;
    // NOP
label_212eb0:
    // 0x212eb0: 0x31080
    ctx->pc = 0x212eb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x212eb4: 0x441021
    ctx->pc = 0x212eb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x212eb8: 0xac400000
    ctx->pc = 0x212eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x212ebc: 0x24630001
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x212ec0: 0x28620018
    ctx->pc = 0x212ec0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 24));
    // 0x212ec4: 0x1440fffa
    ctx->pc = 0x212EC4u;
    {
        const bool branch_taken_0x212ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212ec4) {
            ctx->pc = 0x212EB0u;
            goto label_212eb0;
        }
    }
    ctx->pc = 0x212ECCu;
label_212ecc:
    // 0x212ecc: 0x8084b74
    ctx->pc = 0x212ECCu;
    ctx->pc = 0x212ED0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212DD0u;
    AtreeTreeInit_0x212dd0(rdram, ctx, runtime); return;
    ctx->pc = 0x212ED4u;
}
