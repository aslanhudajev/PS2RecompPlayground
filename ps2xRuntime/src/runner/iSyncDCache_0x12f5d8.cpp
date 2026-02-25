#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iSyncDCache
// Address: 0x12f5d8 - 0x12f5ec
void iSyncDCache_0x12f5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iSyncDCache_0x12f5d8");
#endif

    ctx->pc = 0x12f5d8u;

    // 0x12f5d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f5dc: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x12f5dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65472u)));
    // 0x12f5e0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x12f5e0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x12f5e4: 0x804bd2c  j           func_12F4B0
    ctx->pc = 0x12F5E4u;
    ctx->pc = 0x12F5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F5E4u;
            // 0x12f5e8: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceSDC_0x12f4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F5ECu;
}
