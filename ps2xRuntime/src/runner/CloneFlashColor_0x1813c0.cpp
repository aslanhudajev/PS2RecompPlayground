#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneFlashColor
// Address: 0x1813c0 - 0x1813fc
void CloneFlashColor_0x1813c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneFlashColor_0x1813c0");
#endif

    ctx->pc = 0x1813c0u;

    // 0x1813c0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1813c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1813c4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1813c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1813c8: 0xac8500c0  sw          $a1, 0xC0($a0)
    ctx->pc = 0x1813c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
    // 0x1813cc: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x1813ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x1813d0: 0xac8500c8  sw          $a1, 0xC8($a0)
    ctx->pc = 0x1813d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 5));
    // 0x1813d4: 0xac8300cc  sw          $v1, 0xCC($a0)
    ctx->pc = 0x1813d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
    // 0x1813d8: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x1813d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
    // 0x1813dc: 0xac8500d4  sw          $a1, 0xD4($a0)
    ctx->pc = 0x1813dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
    // 0x1813e0: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x1813e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x1813e4: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x1813e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x1813e8: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x1813e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x1813ec: 0xac8500e4  sw          $a1, 0xE4($a0)
    ctx->pc = 0x1813ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 5));
    // 0x1813f0: 0xac8500e8  sw          $a1, 0xE8($a0)
    ctx->pc = 0x1813f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 5));
    // 0x1813f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1813F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1813F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1813F4u;
            // 0x1813f8: 0xac8300ec  sw          $v1, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1813FCu;
}
