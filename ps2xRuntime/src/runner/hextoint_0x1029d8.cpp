#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: hextoint
// Address: 0x1029d8 - 0x102a48
void hextoint_0x1029d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("hextoint_0x1029d8");
#endif

    ctx->pc = 0x1029d8u;

    // 0x1029d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1029d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1029dc: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1029DCu;
    {
        const bool branch_taken_0x1029dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1029DCu;
            // 0x1029e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029dc) {
            ctx->pc = 0x102A40u;
            goto label_102a40;
        }
    }
    ctx->pc = 0x1029E4u;
    // 0x1029e4: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x1029e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
label_1029e8:
    // 0x1029e8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1029e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1029ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1029ECu;
    {
        const bool branch_taken_0x1029ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1029ECu;
            // 0x1029f0: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029ec) {
            ctx->pc = 0x102A00u;
            goto label_102a00;
        }
    }
    ctx->pc = 0x1029F4u;
    // 0x1029f4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1029f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1029f8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1029F8u;
    {
        const bool branch_taken_0x1029f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1029FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1029F8u;
            // 0x1029fc: 0x24a2ffa9  addiu       $v0, $a1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1029f8) {
            ctx->pc = 0x102A2Cu;
            goto label_102a2c;
        }
    }
    ctx->pc = 0x102A00u;
label_102a00:
    // 0x102a00: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x102a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x102a04: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x102a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x102a08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102A08u;
    {
        const bool branch_taken_0x102a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A08u;
            // 0x102a0c: 0x24a2ffc9  addiu       $v0, $a1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a08) {
            ctx->pc = 0x102A18u;
            goto label_102a18;
        }
    }
    ctx->pc = 0x102A10u;
    // 0x102a10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x102A10u;
    {
        const bool branch_taken_0x102a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A10u;
            // 0x102a14: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a10) {
            ctx->pc = 0x102A2Cu;
            goto label_102a2c;
        }
    }
    ctx->pc = 0x102A18u;
label_102a18:
    // 0x102a18: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x102a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x102a1c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x102a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x102a20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102A20u;
    {
        const bool branch_taken_0x102a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A20u;
            // 0x102a24: 0x24a2ffd0  addiu       $v0, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a20) {
            ctx->pc = 0x102A30u;
            goto label_102a30;
        }
    }
    ctx->pc = 0x102A28u;
    // 0x102a28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x102a28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_102a2c:
    // 0x102a2c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x102a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_102a30:
    // 0x102a30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102a34: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x102a34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102a38: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x102A38u;
    {
        const bool branch_taken_0x102a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A38u;
            // 0x102a3c: 0x2462ff9f  addiu       $v0, $v1, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102a38) {
            ctx->pc = 0x1029E8u;
            goto label_1029e8;
        }
    }
    ctx->pc = 0x102A40u;
label_102a40:
    // 0x102a40: 0x3e00008  jr          $ra
    ctx->pc = 0x102A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A40u;
            // 0x102a44: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1029E8u: goto label_1029e8;
            case 0x102A00u: goto label_102a00;
            case 0x102A18u: goto label_102a18;
            case 0x102A2Cu: goto label_102a2c;
            case 0x102A30u: goto label_102a30;
            case 0x102A40u: goto label_102a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102A48u;
}
