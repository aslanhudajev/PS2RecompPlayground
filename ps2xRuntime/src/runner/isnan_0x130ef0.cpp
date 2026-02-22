#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isnan
// Address: 0x130ef0 - 0x130f28
void isnan_0x130ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130ef0u;

    // 0x130ef0: 0x4103c
    ctx->pc = 0x130ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130ef4: 0x2103f
    ctx->pc = 0x130ef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130ef8: 0x4203f
    ctx->pc = 0x130ef8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x130efc: 0x3c037fff
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x130f00: 0x22823
    ctx->pc = 0x130f00u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x130f04: 0x3463ffff
    ctx->pc = 0x130f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)65535);
    // 0x130f08: 0x451025
    ctx->pc = 0x130f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x130f0c: 0x832024
    ctx->pc = 0x130f0cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x130f10: 0x217c2
    ctx->pc = 0x130f10u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x130f14: 0x3c037ff0
    ctx->pc = 0x130f14u;
    SET_GPR_S32(ctx, 3, ((uint32_t)32752 << 16));
    // 0x130f18: 0x822025
    ctx->pc = 0x130f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x130f1c: 0x642023
    ctx->pc = 0x130f1cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130f20: 0x3e00008
    ctx->pc = 0x130F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F24u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130F28u;
}
