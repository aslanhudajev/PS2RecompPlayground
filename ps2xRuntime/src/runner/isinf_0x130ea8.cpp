#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isinf
// Address: 0x130ea8 - 0x130ef0
void isinf_0x130ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130ea8u;

    // 0x130ea8: 0x4103c
    ctx->pc = 0x130ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130eac: 0x2103f
    ctx->pc = 0x130eacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130eb0: 0x4203f
    ctx->pc = 0x130eb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x130eb4: 0x3c037fff
    ctx->pc = 0x130eb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x130eb8: 0x22823
    ctx->pc = 0x130eb8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x130ebc: 0x3463ffff
    ctx->pc = 0x130ebcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x130ec0: 0x451025
    ctx->pc = 0x130ec0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x130ec4: 0x832024
    ctx->pc = 0x130ec4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130ec8: 0x217c2
    ctx->pc = 0x130ec8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x130ecc: 0x3c057ff0
    ctx->pc = 0x130eccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32752 << 16));
    // 0x130ed0: 0x822025
    ctx->pc = 0x130ed0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x130ed4: 0xa42023
    ctx->pc = 0x130ed4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x130ed8: 0x24020001
    ctx->pc = 0x130ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130edc: 0x41823
    ctx->pc = 0x130edcu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x130ee0: 0x832025
    ctx->pc = 0x130ee0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130ee4: 0x427c2
    ctx->pc = 0x130ee4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 31));
    // 0x130ee8: 0x3e00008
    ctx->pc = 0x130EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130EECu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130EF0u;
}
