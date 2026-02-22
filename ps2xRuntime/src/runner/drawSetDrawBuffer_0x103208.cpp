#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawSetDrawBuffer
// Address: 0x103208 - 0x10322c
void drawSetDrawBuffer_0x103208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103208u;

    // 0x103208: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x103208u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x10320c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x10320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x103210: 0xa7848496  sh          $a0, -0x7B6A($gp)
    ctx->pc = 0x103210u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 4));
    // 0x103214: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x103214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x103218: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x103218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x10321c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x10321cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x103220: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x103220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x103224: 0x80432c2  j           func_10CB08
    ctx->pc = 0x103224u;
    ctx->pc = 0x103228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103224u;
            // 0x103228: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB08u;
    if (runtime->hasFunction(0x10CB08u)) {
        auto targetFn = runtime->lookupFunction(0x10CB08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10322Cu;
}
