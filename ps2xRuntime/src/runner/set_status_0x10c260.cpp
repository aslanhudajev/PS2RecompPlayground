#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: set_status
// Address: 0x10c260 - 0x10c278
void set_status_0x10c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("set_status_0x10c260");
#endif

    ctx->pc = 0x10c260u;

    // 0x10c260: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x10c260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x10c264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c268: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x10c268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x10c26c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10c26cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10c270: 0x3e00008  jr          $ra
    ctx->pc = 0x10C270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C270u;
            // 0x10c274: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C278u;
}
