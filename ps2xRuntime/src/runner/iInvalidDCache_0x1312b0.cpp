#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iInvalidDCache
// Address: 0x1312b0 - 0x1312c4
void iInvalidDCache_0x1312b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1312b0u;

    // 0x1312b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1312b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1312b4: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x1312b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65472u)));
    // 0x1312b8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1312b8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x1312bc: 0x804c462  j           func_131188
    ctx->pc = 0x1312BCu;
    ctx->pc = 0x1312C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1312BCu;
            // 0x1312c0: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131188u;
    if (runtime->hasFunction(0x131188u)) {
        auto targetFn = runtime->lookupFunction(0x131188u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sceIDC_0x131188(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1312C4u;
}
