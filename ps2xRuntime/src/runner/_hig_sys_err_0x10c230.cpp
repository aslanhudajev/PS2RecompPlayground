#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _hig_sys_err
// Address: 0x10c230 - 0x10c260
void _hig_sys_err_0x10c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_hig_sys_err_0x10c230");
#endif

    ctx->pc = 0x10c230u;

    // 0x10c230: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x10c234: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10c234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10c238: 0x2442f7e0  addiu       $v0, $v0, -0x820
    ctx->pc = 0x10c238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965216));
    // 0x10c23c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x10c23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x10c240: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c244: 0x2463d2f8  addiu       $v1, $v1, -0x2D08
    ctx->pc = 0x10c244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955768));
    // 0x10c248: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10c248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c24c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x10c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c250: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x10c250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x10c254: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c258: 0x3e00008  jr          $ra
    ctx->pc = 0x10C258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C258u;
            // 0x10c25c: 0xaca6f840  sw          $a2, -0x7C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294965312), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C260u;
}
