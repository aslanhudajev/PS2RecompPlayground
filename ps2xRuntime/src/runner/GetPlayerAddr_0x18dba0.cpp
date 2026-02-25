#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetPlayerAddr
// Address: 0x18dba0 - 0x18dbbc
void GetPlayerAddr_0x18dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetPlayerAddr_0x18dba0");
#endif

    ctx->pc = 0x18dba0u;

    // 0x18dba0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18dba4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dba8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18dbac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18dbb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x18DBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DBB4u;
            // 0x18dbb8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DBBCu;
}
