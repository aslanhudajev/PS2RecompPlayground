#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fabsf
// Address: 0x1403a8 - 0x1403c4
void fabsf_0x1403a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fabsf_0x1403a8");
#endif

    ctx->pc = 0x1403a8u;

    // 0x1403a8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1403a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1403ac: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1403acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1403b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1403b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1403b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1403b4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1403b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1403b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1403bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1403BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1403C4u;
}
