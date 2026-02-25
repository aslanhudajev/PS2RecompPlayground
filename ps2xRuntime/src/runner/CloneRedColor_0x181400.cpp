#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CloneRedColor
// Address: 0x181400 - 0x18143c
void CloneRedColor_0x181400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CloneRedColor_0x181400");
#endif

    ctx->pc = 0x181400u;

    // 0x181400: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x181400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x181404: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x181404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x181408: 0xac8500c0  sw          $a1, 0xC0($a0)
    ctx->pc = 0x181408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 5));
    // 0x18140c: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x18140cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x181410: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x181410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x181414: 0xac8300cc  sw          $v1, 0xCC($a0)
    ctx->pc = 0x181414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
    // 0x181418: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x181418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
    // 0x18141c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x18141cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x181420: 0xac8000d8  sw          $zero, 0xD8($a0)
    ctx->pc = 0x181420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x181424: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x181424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x181428: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x181428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x18142c: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x18142cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x181430: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x181430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x181434: 0x3e00008  jr          $ra
    ctx->pc = 0x181434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181434u;
            // 0x181438: 0xac8300ec  sw          $v1, 0xEC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18143Cu;
}
