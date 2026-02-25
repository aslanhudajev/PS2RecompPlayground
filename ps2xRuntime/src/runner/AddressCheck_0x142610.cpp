#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: AddressCheck
// Address: 0x142610 - 0x142650
void AddressCheck_0x142610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("AddressCheck_0x142610");
#endif

    ctx->pc = 0x142610u;

    // 0x142610: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142614: 0x8c237a18  lw          $v1, 0x7A18($at)
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31256)));
    // 0x142618: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x142618u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14261c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x14261Cu;
    {
        const bool branch_taken_0x14261c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14261Cu;
            // 0x142620: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14261c) {
            ctx->pc = 0x142630u;
            goto label_142630;
        }
    }
    ctx->pc = 0x142624u;
    // 0x142624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x142624u;
    {
        const bool branch_taken_0x142624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142624) {
            ctx->pc = 0x142648u;
            goto label_142648;
        }
    }
    ctx->pc = 0x14262Cu;
    // 0x14262c: 0x0  nop
    ctx->pc = 0x14262cu;
    // NOP
label_142630:
    // 0x142630: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142634: 0x8c227a10  lw          $v0, 0x7A10($at)
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31248)));
    // 0x142638: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x142638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14263c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x14263cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x142640: 0x21023  negu        $v0, $v0
    ctx->pc = 0x142640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x142644: 0x0  nop
    ctx->pc = 0x142644u;
    // NOP
label_142648:
    // 0x142648: 0x3e00008  jr          $ra
    ctx->pc = 0x142648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142630u: goto label_142630;
            case 0x142648u: goto label_142648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142650u;
}
