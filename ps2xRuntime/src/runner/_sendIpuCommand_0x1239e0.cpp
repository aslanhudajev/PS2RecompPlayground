#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sendIpuCommand
// Address: 0x1239e0 - 0x123a10
void _sendIpuCommand_0x1239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1239e0u;

    // 0x1239e0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1239e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1239e4: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x1239e8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1239e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x1239ec: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x1239f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1239f0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x1239f4: 0x24632108  addiu       $v1, $v1, 0x2108
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8456));
    // 0x1239f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1239f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1239fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1239fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x123a00: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x123a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x123a04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x123a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x123a08: 0x3e00008  jr          $ra
    ctx->pc = 0x123A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123A08u;
            // 0x123a0c: 0xac821824  sw          $v0, 0x1824($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123A10u;
}
