#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sendIpuCommand
// Address: 0x127da0 - 0x127dcc
void _sendIpuCommand_0x127da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sendIpuCommand_0x127da0");
#endif

    ctx->pc = 0x127da0u;

    // 0x127da0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x127da4: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x127da4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x127da8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x127da8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x127dac: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x127db0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x127db0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x127db4: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x127db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x127db8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x127db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x127dbc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x127dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x127dc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x127dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x127dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x127DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127DC4u;
            // 0x127dc8: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127DCCu;
}
