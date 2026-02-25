#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Camera_SetClipData
// Address: 0x1612e0 - 0x1612f4
void Camera_SetClipData_0x1612e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Camera_SetClipData_0x1612e0");
#endif

    ctx->pc = 0x1612e0u;

    // 0x1612e0: 0xe48c0210  swc1        $f12, 0x210($a0)
    ctx->pc = 0x1612e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 528), bits); }
    // 0x1612e4: 0xe48d0214  swc1        $f13, 0x214($a0)
    ctx->pc = 0x1612e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 532), bits); }
    // 0x1612e8: 0xe48e0218  swc1        $f14, 0x218($a0)
    ctx->pc = 0x1612e8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 536), bits); }
    // 0x1612ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1612ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1612F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1612ECu;
            // 0x1612f0: 0xe48f021c  swc1        $f15, 0x21C($a0) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 540), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1612F4u;
}
