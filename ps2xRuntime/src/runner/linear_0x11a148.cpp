#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: linear
// Address: 0x11a148 - 0x11a164
void linear_0x11a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("linear_0x11a148");
#endif

    ctx->pc = 0x11a148u;

    // 0x11a148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11a14c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11a14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11a150: 0x460e6382  mul.s       $f14, $f12, $f14
    ctx->pc = 0x11a150u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x11a154: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11a154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11a158: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x11a158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x11a15c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A15Cu;
            // 0x11a160: 0x460e0000  add.s       $f0, $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A164u;
}
