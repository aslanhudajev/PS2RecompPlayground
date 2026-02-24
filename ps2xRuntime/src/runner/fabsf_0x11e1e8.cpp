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
// Address: 0x11e1e8 - 0x11e204
void fabsf_0x11e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fabsf_0x11e1e8");
#endif

    ctx->pc = 0x11e1e8u;

    // 0x11e1e8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x11e1e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11e1ec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e1f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e1f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e1f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11e1f4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11e1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11e1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E204u;
}
