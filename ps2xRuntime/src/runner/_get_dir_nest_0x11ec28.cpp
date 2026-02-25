#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _get_dir_nest
// Address: 0x11ec28 - 0x11ec6c
void _get_dir_nest_0x11ec28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_get_dir_nest_0x11ec28");
#endif

    ctx->pc = 0x11ec28u;

    // 0x11ec28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11ec28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ec2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec30: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11ec30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ec34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11EC34u;
    {
        const bool branch_taken_0x11ec34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC34u;
            // 0x11ec38: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec34) {
            ctx->pc = 0x11EC64u;
            goto label_11ec64;
        }
    }
    ctx->pc = 0x11EC3Cu;
    // 0x11ec3c: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x11ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_11ec40:
    // 0x11ec40: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x11ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11ec44: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x11ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ec48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11ec4c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x11ec4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x11ec50: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x11ec50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ec54: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x11ec54u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x11ec58: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x11ec58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11ec5c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11EC5Cu;
    {
        const bool branch_taken_0x11ec5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC5Cu;
            // 0x11ec60: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec5c) {
            ctx->pc = 0x11EC40u;
            goto label_11ec40;
        }
    }
    ctx->pc = 0x11EC64u;
label_11ec64:
    // 0x11ec64: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC64u;
            // 0x11ec68: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EC40u: goto label_11ec40;
            case 0x11EC64u: goto label_11ec64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EC6Cu;
}
