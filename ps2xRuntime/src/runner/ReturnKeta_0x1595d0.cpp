#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ReturnKeta
// Address: 0x1595d0 - 0x15960c
void ReturnKeta_0x1595d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ReturnKeta_0x1595d0");
#endif

    ctx->pc = 0x1595d0u;

    // 0x1595d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1595d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595d4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1595d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x1595d8: 0x34666667  ori         $a2, $v1, 0x6667
    ctx->pc = 0x1595d8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26215u)));
    // 0x1595dc: 0x0  nop
    ctx->pc = 0x1595dcu;
    // NOP
label_1595e0:
    // 0x1595e0: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1595e4: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x1595e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1595e8: 0x0  nop
    ctx->pc = 0x1595e8u;
    // NOP
    // 0x1595ec: 0x0  nop
    ctx->pc = 0x1595ecu;
    // NOP
    // 0x1595f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1595f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1595f4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1595f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1595f8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1595f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1595fc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1595FCu;
    {
        const bool branch_taken_0x1595fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x159600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1595FCu;
            // 0x159600: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595fc) {
            ctx->pc = 0x1595E0u;
            goto label_1595e0;
        }
    }
    ctx->pc = 0x159604u;
    // 0x159604: 0x3e00008  jr          $ra
    ctx->pc = 0x159604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1595E0u: goto label_1595e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15960Cu;
}
