#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: KeyAssignChanged1p
// Address: 0x1975b0 - 0x197750
void KeyAssignChanged1p_0x1975b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("KeyAssignChanged1p_0x1975b0");
#endif

    ctx->pc = 0x1975b0u;

    // 0x1975b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1975b4: 0x8c261624  lw          $a2, 0x1624($at)
    ctx->pc = 0x1975b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5668)));
    // 0x1975b8: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1975B8u;
    {
        const bool branch_taken_0x1975b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1975BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975B8u;
            // 0x1975bc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975b8) {
            ctx->pc = 0x1975C8u;
            goto label_1975c8;
        }
    }
    ctx->pc = 0x1975C0u;
    // 0x1975c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1975C0u;
    {
        const bool branch_taken_0x1975c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975C0u;
            // 0x1975c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975c0) {
            ctx->pc = 0x197628u;
            goto label_197628;
        }
    }
    ctx->pc = 0x1975C8u;
label_1975c8:
    // 0x1975c8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1975c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1975cc: 0x8c231628  lw          $v1, 0x1628($at)
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5672)));
    // 0x1975d0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1975D0u;
    {
        const bool branch_taken_0x1975d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1975d0) {
            ctx->pc = 0x1975E0u;
            goto label_1975e0;
        }
    }
    ctx->pc = 0x1975D8u;
    // 0x1975d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1975D8u;
    {
        const bool branch_taken_0x1975d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975D8u;
            // 0x1975dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975d8) {
            ctx->pc = 0x197628u;
            goto label_197628;
        }
    }
    ctx->pc = 0x1975E0u;
label_1975e0:
    // 0x1975e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1975e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1975e4: 0x8c23162c  lw          $v1, 0x162C($at)
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5676)));
    // 0x1975e8: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1975E8u;
    {
        const bool branch_taken_0x1975e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1975e8) {
            ctx->pc = 0x1975F8u;
            goto label_1975f8;
        }
    }
    ctx->pc = 0x1975F0u;
    // 0x1975f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1975F0u;
    {
        const bool branch_taken_0x1975f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1975F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1975F0u;
            // 0x1975f4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975f0) {
            ctx->pc = 0x197628u;
            goto label_197628;
        }
    }
    ctx->pc = 0x1975F8u;
label_1975f8:
    // 0x1975f8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1975f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1975fc: 0x8c231630  lw          $v1, 0x1630($at)
    ctx->pc = 0x1975fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5680)));
    // 0x197600: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197600u;
    {
        const bool branch_taken_0x197600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x197600) {
            ctx->pc = 0x197610u;
            goto label_197610;
        }
    }
    ctx->pc = 0x197608u;
    // 0x197608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x197608u;
    {
        const bool branch_taken_0x197608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19760Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197608u;
            // 0x19760c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197608) {
            ctx->pc = 0x197628u;
            goto label_197628;
        }
    }
    ctx->pc = 0x197610u;
label_197610:
    // 0x197610: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197614: 0x8c231634  lw          $v1, 0x1634($at)
    ctx->pc = 0x197614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5684)));
    // 0x197618: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197618u;
    {
        const bool branch_taken_0x197618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x197618) {
            ctx->pc = 0x197628u;
            goto label_197628;
        }
    }
    ctx->pc = 0x197620u;
    // 0x197620: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197624: 0x0  nop
    ctx->pc = 0x197624u;
    // NOP
label_197628:
    // 0x197628: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x197628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19762c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19762Cu;
    {
        const bool branch_taken_0x19762c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19762Cu;
            // 0x197630: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19762c) {
            ctx->pc = 0x1976B8u;
            goto label_1976b8;
        }
    }
    ctx->pc = 0x197634u;
    // 0x197634: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x197634u;
    {
        const bool branch_taken_0x197634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197634) {
            ctx->pc = 0x1976A0u;
            goto label_1976a0;
        }
    }
    ctx->pc = 0x19763Cu;
    // 0x19763c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197640: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x197640u;
    {
        const bool branch_taken_0x197640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197640u;
            // 0x197644: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197640) {
            ctx->pc = 0x197688u;
            goto label_197688;
        }
    }
    ctx->pc = 0x197648u;
    // 0x197648: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197648u;
    {
        const bool branch_taken_0x197648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197648) {
            ctx->pc = 0x197670u;
            goto label_197670;
        }
    }
    ctx->pc = 0x197650u;
    // 0x197650: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197650u;
    {
        const bool branch_taken_0x197650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197650) {
            ctx->pc = 0x197660u;
            goto label_197660;
        }
    }
    ctx->pc = 0x197658u;
    // 0x197658: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x197658u;
    {
        const bool branch_taken_0x197658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197658) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x197660u;
label_197660:
    // 0x197660: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197664: 0xac251624  sw          $a1, 0x1624($at)
    ctx->pc = 0x197664u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5668), GPR_U32(ctx, 5));
    // 0x197668: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x197668u;
    {
        const bool branch_taken_0x197668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197668u;
            // 0x19766c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197668) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x197670u;
label_197670:
    // 0x197670: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197674: 0x8c241628  lw          $a0, 0x1628($at)
    ctx->pc = 0x197674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5672)));
    // 0x197678: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19767c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19767Cu;
    {
        const bool branch_taken_0x19767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19767Cu;
            // 0x197680: 0xac251628  sw          $a1, 0x1628($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5672), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19767c) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x197684u;
    // 0x197684: 0x0  nop
    ctx->pc = 0x197684u;
    // NOP
label_197688:
    // 0x197688: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19768c: 0x8c24162c  lw          $a0, 0x162C($at)
    ctx->pc = 0x19768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5676)));
    // 0x197690: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197694: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197694u;
    {
        const bool branch_taken_0x197694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197694u;
            // 0x197698: 0xac25162c  sw          $a1, 0x162C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5676), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197694) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x19769Cu;
    // 0x19769c: 0x0  nop
    ctx->pc = 0x19769cu;
    // NOP
label_1976a0:
    // 0x1976a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1976a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1976a4: 0x8c241630  lw          $a0, 0x1630($at)
    ctx->pc = 0x1976a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5680)));
    // 0x1976a8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1976a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1976ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1976ACu;
    {
        const bool branch_taken_0x1976ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976ACu;
            // 0x1976b0: 0xac251630  sw          $a1, 0x1630($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5680), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976ac) {
            ctx->pc = 0x1976C8u;
            goto label_1976c8;
        }
    }
    ctx->pc = 0x1976B4u;
    // 0x1976b4: 0x0  nop
    ctx->pc = 0x1976b4u;
    // NOP
label_1976b8:
    // 0x1976b8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1976b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1976bc: 0x8c241634  lw          $a0, 0x1634($at)
    ctx->pc = 0x1976bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5684)));
    // 0x1976c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1976c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1976c4: 0xac251634  sw          $a1, 0x1634($at)
    ctx->pc = 0x1976c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5684), GPR_U32(ctx, 5));
label_1976c8:
    // 0x1976c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1976cc: 0x10e3001c  beq         $a3, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1976CCu;
    {
        const bool branch_taken_0x1976cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1976D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976CCu;
            // 0x1976d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976cc) {
            ctx->pc = 0x197740u;
            goto label_197740;
        }
    }
    ctx->pc = 0x1976D4u;
    // 0x1976d4: 0x10e30016  beq         $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1976D4u;
    {
        const bool branch_taken_0x1976d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1976d4) {
            ctx->pc = 0x197730u;
            goto label_197730;
        }
    }
    ctx->pc = 0x1976DCu;
    // 0x1976dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1976dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976e0: 0x10e3000f  beq         $a3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1976E0u;
    {
        const bool branch_taken_0x1976e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1976E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976E0u;
            // 0x1976e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976e0) {
            ctx->pc = 0x197720u;
            goto label_197720;
        }
    }
    ctx->pc = 0x1976E8u;
    // 0x1976e8: 0x10e30009  beq         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1976E8u;
    {
        const bool branch_taken_0x1976e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1976e8) {
            ctx->pc = 0x197710u;
            goto label_197710;
        }
    }
    ctx->pc = 0x1976F0u;
    // 0x1976f0: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1976F0u;
    {
        const bool branch_taken_0x1976f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1976f0) {
            ctx->pc = 0x197700u;
            goto label_197700;
        }
    }
    ctx->pc = 0x1976F8u;
    // 0x1976f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1976F8u;
    {
        const bool branch_taken_0x1976f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1976f8) {
            ctx->pc = 0x197748u;
            goto label_197748;
        }
    }
    ctx->pc = 0x197700u;
label_197700:
    // 0x197700: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197704: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x197704u;
    {
        const bool branch_taken_0x197704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197704u;
            // 0x197708: 0xac241624  sw          $a0, 0x1624($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5668), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197704) {
            ctx->pc = 0x197748u;
            goto label_197748;
        }
    }
    ctx->pc = 0x19770Cu;
    // 0x19770c: 0x0  nop
    ctx->pc = 0x19770cu;
    // NOP
label_197710:
    // 0x197710: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197714: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197714u;
    {
        const bool branch_taken_0x197714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197714u;
            // 0x197718: 0xac241628  sw          $a0, 0x1628($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5672), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197714) {
            ctx->pc = 0x197748u;
            goto label_197748;
        }
    }
    ctx->pc = 0x19771Cu;
    // 0x19771c: 0x0  nop
    ctx->pc = 0x19771cu;
    // NOP
label_197720:
    // 0x197720: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197724u;
    {
        const bool branch_taken_0x197724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197724u;
            // 0x197728: 0xac24162c  sw          $a0, 0x162C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5676), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197724) {
            ctx->pc = 0x197748u;
            goto label_197748;
        }
    }
    ctx->pc = 0x19772Cu;
    // 0x19772c: 0x0  nop
    ctx->pc = 0x19772cu;
    // NOP
label_197730:
    // 0x197730: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197734: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197734u;
    {
        const bool branch_taken_0x197734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197734u;
            // 0x197738: 0xac241630  sw          $a0, 0x1630($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5680), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197734) {
            ctx->pc = 0x197748u;
            goto label_197748;
        }
    }
    ctx->pc = 0x19773Cu;
    // 0x19773c: 0x0  nop
    ctx->pc = 0x19773cu;
    // NOP
label_197740:
    // 0x197740: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197744: 0xac241634  sw          $a0, 0x1634($at)
    ctx->pc = 0x197744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5684), GPR_U32(ctx, 4));
label_197748:
    // 0x197748: 0x3e00008  jr          $ra
    ctx->pc = 0x197748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1975C8u: goto label_1975c8;
            case 0x1975E0u: goto label_1975e0;
            case 0x1975F8u: goto label_1975f8;
            case 0x197610u: goto label_197610;
            case 0x197628u: goto label_197628;
            case 0x197660u: goto label_197660;
            case 0x197670u: goto label_197670;
            case 0x197688u: goto label_197688;
            case 0x1976A0u: goto label_1976a0;
            case 0x1976B8u: goto label_1976b8;
            case 0x1976C8u: goto label_1976c8;
            case 0x197700u: goto label_197700;
            case 0x197710u: goto label_197710;
            case 0x197720u: goto label_197720;
            case 0x197730u: goto label_197730;
            case 0x197740u: goto label_197740;
            case 0x197748u: goto label_197748;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197750u;
}
