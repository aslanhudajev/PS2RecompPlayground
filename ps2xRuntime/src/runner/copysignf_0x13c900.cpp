#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: copysignf
// Address: 0x13c900 - 0x13c930
void copysignf_0x13c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("copysignf_0x13c900");
#endif

    ctx->pc = 0x13c900u;

    // 0x13c900: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x13c900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13c904: 0x44046800  mfc1        $a0, $f13
    ctx->pc = 0x13c904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13c908: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13c908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c90c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x13c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x13c910: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c910u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c914: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13c914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13c918: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x13c918u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x13c91c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13c91cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13c920: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x13c920u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x13c924: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x13c924u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13c928: 0x3e00008  jr          $ra
    ctx->pc = 0x13C928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C930u;
}
