#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CheckAddress
// Address: 0x106588 - 0x1065b0
void CheckAddress_0x106588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CheckAddress_0x106588");
#endif

    ctx->pc = 0x106588u;

    // 0x106588: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x106588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10658c: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x10658cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x106590: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x106590u;
    {
        const bool branch_taken_0x106590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x106594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106590u;
            // 0x106594: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106590) {
            ctx->pc = 0x1065A8u;
            goto label_1065a8;
        }
    }
    ctx->pc = 0x106598u;
    // 0x106598: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x106598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x10659c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10659cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1065a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1065a0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1065a4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1065a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_1065a8:
    // 0x1065a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1065A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1065ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1065A8u;
            // 0x1065ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1065A8u: goto label_1065a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1065B0u;
}
