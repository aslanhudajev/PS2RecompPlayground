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
// Address: 0x11e450 - 0x11e480
void copysignf_0x11e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("copysignf_0x11e450");
#endif

    ctx->pc = 0x11e450u;

    // 0x11e450: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x11e450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e454: 0x44046800  mfc1        $a0, $f13
    ctx->pc = 0x11e454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x11e458: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11e458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e45c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e460u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e464: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x11e464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x11e468: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x11e468u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x11e46c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11e46cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11e470: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x11e470u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x11e474: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e474u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e478: 0x3e00008  jr          $ra
    ctx->pc = 0x11E478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E480u;
}
