#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DRAW_setDrawBuffer
// Address: 0x105558 - 0x10557c
void DRAW_setDrawBuffer_0x105558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DRAW_setDrawBuffer_0x105558");
#endif

    ctx->pc = 0x105558u;

    // 0x105558: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x105558u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x10555c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x105560: 0xa7848496  sh          $a0, -0x7B6A($gp)
    ctx->pc = 0x105560u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 4));
    // 0x105564: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x105564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x105568: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x105568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x10556c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x10556cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65535u)));
    // 0x105570: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x105570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x105574: 0x80432c2  j           func_10CB08
    ctx->pc = 0x105574u;
    ctx->pc = 0x105578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105574u;
            // 0x105578: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB08u;
    if (runtime->hasFunction(0x10CB08u)) {
        auto targetFn = runtime->lookupFunction(0x10CB08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10557Cu;
}
