#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsGetUVinfo
// Address: 0x170030 - 0x170060
void wrsGetUVinfo_0x170030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsGetUVinfo_0x170030");
#endif

    ctx->pc = 0x170030u;

    // 0x170030: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x170030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x170034: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x170034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x170038: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x170038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17003c: 0x2463d500  addiu       $v1, $v1, -0x2B00
    ctx->pc = 0x17003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956288));
    // 0x170040: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x170040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x170044: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x170044u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x170048: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x170048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17004c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17004cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170058: 0x3e00008  jr          $ra
    ctx->pc = 0x170058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170058u;
            // 0x17005c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170060u;
}
