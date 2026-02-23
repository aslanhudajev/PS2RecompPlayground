#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isnan
// Address: 0x144668 - 0x1446a0
void isnan_0x144668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isnan");


    ctx->pc = 0x144668u;

    // 0x144668: 0x4103c
    ctx->pc = 0x144668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14466c: 0x2103f
    ctx->pc = 0x14466cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144670: 0x4203f
    ctx->pc = 0x144670u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x144674: 0x3c037fff
    ctx->pc = 0x144674u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32767 << 16));
    // 0x144678: 0x22823
    ctx->pc = 0x144678u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14467c: 0x3463ffff
    ctx->pc = 0x14467cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x144680: 0x451025
    ctx->pc = 0x144680u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x144684: 0x832024
    ctx->pc = 0x144684u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144688: 0x217c2
    ctx->pc = 0x144688u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 31));
    // 0x14468c: 0x3c037ff0
    ctx->pc = 0x14468cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
    // 0x144690: 0x822025
    ctx->pc = 0x144690u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144694: 0x642023
    ctx->pc = 0x144694u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144698: 0x3e00008
    ctx->pc = 0x144698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14469Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 31));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1446A0u;
}
