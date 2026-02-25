#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iInvalidDCache
// Address: 0x12f718 - 0x12f72c
void iInvalidDCache_0x12f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iInvalidDCache_0x12f718");
#endif

    ctx->pc = 0x12f718u;

    // 0x12f718: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f71c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x12f71cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65472u)));
    // 0x12f720: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x12f720u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x12f724: 0x804bd7c  j           func_12F5F0
    ctx->pc = 0x12F724u;
    ctx->pc = 0x12F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F724u;
            // 0x12f728: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceIDC_0x12f5f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F72Cu;
}
