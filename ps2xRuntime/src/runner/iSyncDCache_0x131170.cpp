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
// Address: 0x131170 - 0x131184
void iSyncDCache_0x131170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iSyncDCache_0x131170");
#endif

    ctx->pc = 0x131170u;

    // 0x131170: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x131174: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x131174u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65472u)));
    // 0x131178: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x131178u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x13117c: 0x804c412  j           func_131048
    ctx->pc = 0x13117Cu;
    ctx->pc = 0x131180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13117Cu;
            // 0x131180: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131048u;
    if (runtime->hasFunction(0x131048u)) {
        auto targetFn = runtime->lookupFunction(0x131048u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceSDC_0x131048(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131184u;
}
