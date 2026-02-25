#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: KeyAssignChanged2p
// Address: 0x197410 - 0x1975b0
void KeyAssignChanged2p_0x197410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("KeyAssignChanged2p_0x197410");
#endif

    ctx->pc = 0x197410u;

    // 0x197410: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197414: 0x8c261638  lw          $a2, 0x1638($at)
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5688)));
    // 0x197418: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197418u;
    {
        const bool branch_taken_0x197418 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x19741Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197418u;
            // 0x19741c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197418) {
            ctx->pc = 0x197428u;
            goto label_197428;
        }
    }
    ctx->pc = 0x197420u;
    // 0x197420: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x197420u;
    {
        const bool branch_taken_0x197420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197420u;
            // 0x197424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197420) {
            ctx->pc = 0x197488u;
            goto label_197488;
        }
    }
    ctx->pc = 0x197428u;
label_197428:
    // 0x197428: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19742c: 0x8c23163c  lw          $v1, 0x163C($at)
    ctx->pc = 0x19742cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5692)));
    // 0x197430: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197430u;
    {
        const bool branch_taken_0x197430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x197430) {
            ctx->pc = 0x197440u;
            goto label_197440;
        }
    }
    ctx->pc = 0x197438u;
    // 0x197438: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x197438u;
    {
        const bool branch_taken_0x197438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197438u;
            // 0x19743c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197438) {
            ctx->pc = 0x197488u;
            goto label_197488;
        }
    }
    ctx->pc = 0x197440u;
label_197440:
    // 0x197440: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197444: 0x8c231640  lw          $v1, 0x1640($at)
    ctx->pc = 0x197444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5696)));
    // 0x197448: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197448u;
    {
        const bool branch_taken_0x197448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x197448) {
            ctx->pc = 0x197458u;
            goto label_197458;
        }
    }
    ctx->pc = 0x197450u;
    // 0x197450: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x197450u;
    {
        const bool branch_taken_0x197450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197450u;
            // 0x197454: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197450) {
            ctx->pc = 0x197488u;
            goto label_197488;
        }
    }
    ctx->pc = 0x197458u;
label_197458:
    // 0x197458: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19745c: 0x8c231644  lw          $v1, 0x1644($at)
    ctx->pc = 0x19745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5700)));
    // 0x197460: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197460u;
    {
        const bool branch_taken_0x197460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x197460) {
            ctx->pc = 0x197470u;
            goto label_197470;
        }
    }
    ctx->pc = 0x197468u;
    // 0x197468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x197468u;
    {
        const bool branch_taken_0x197468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19746Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197468u;
            // 0x19746c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197468) {
            ctx->pc = 0x197488u;
            goto label_197488;
        }
    }
    ctx->pc = 0x197470u;
label_197470:
    // 0x197470: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197474: 0x8c231648  lw          $v1, 0x1648($at)
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5704)));
    // 0x197478: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197478u;
    {
        const bool branch_taken_0x197478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x197478) {
            ctx->pc = 0x197488u;
            goto label_197488;
        }
    }
    ctx->pc = 0x197480u;
    // 0x197480: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x197480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197484: 0x0  nop
    ctx->pc = 0x197484u;
    // NOP
label_197488:
    // 0x197488: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x197488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19748c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19748Cu;
    {
        const bool branch_taken_0x19748c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19748Cu;
            // 0x197490: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19748c) {
            ctx->pc = 0x197518u;
            goto label_197518;
        }
    }
    ctx->pc = 0x197494u;
    // 0x197494: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x197494u;
    {
        const bool branch_taken_0x197494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x197494) {
            ctx->pc = 0x197500u;
            goto label_197500;
        }
    }
    ctx->pc = 0x19749Cu;
    // 0x19749c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1974a0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1974A0u;
    {
        const bool branch_taken_0x1974a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1974A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974A0u;
            // 0x1974a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974a0) {
            ctx->pc = 0x1974E8u;
            goto label_1974e8;
        }
    }
    ctx->pc = 0x1974A8u;
    // 0x1974a8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1974A8u;
    {
        const bool branch_taken_0x1974a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1974a8) {
            ctx->pc = 0x1974D0u;
            goto label_1974d0;
        }
    }
    ctx->pc = 0x1974B0u;
    // 0x1974b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1974B0u;
    {
        const bool branch_taken_0x1974b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1974b0) {
            ctx->pc = 0x1974C0u;
            goto label_1974c0;
        }
    }
    ctx->pc = 0x1974B8u;
    // 0x1974b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1974B8u;
    {
        const bool branch_taken_0x1974b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1974b8) {
            ctx->pc = 0x197528u;
            goto label_197528;
        }
    }
    ctx->pc = 0x1974C0u;
label_1974c0:
    // 0x1974c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1974c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1974c4: 0xac251638  sw          $a1, 0x1638($at)
    ctx->pc = 0x1974c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5688), GPR_U32(ctx, 5));
    // 0x1974c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1974C8u;
    {
        const bool branch_taken_0x1974c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974C8u;
            // 0x1974cc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974c8) {
            ctx->pc = 0x197528u;
            goto label_197528;
        }
    }
    ctx->pc = 0x1974D0u;
label_1974d0:
    // 0x1974d0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1974d4: 0x8c24163c  lw          $a0, 0x163C($at)
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5692)));
    // 0x1974d8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1974dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1974DCu;
    {
        const bool branch_taken_0x1974dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974DCu;
            // 0x1974e0: 0xac25163c  sw          $a1, 0x163C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5692), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974dc) {
            ctx->pc = 0x197528u;
            goto label_197528;
        }
    }
    ctx->pc = 0x1974E4u;
    // 0x1974e4: 0x0  nop
    ctx->pc = 0x1974e4u;
    // NOP
label_1974e8:
    // 0x1974e8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1974ec: 0x8c241640  lw          $a0, 0x1640($at)
    ctx->pc = 0x1974ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5696)));
    // 0x1974f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1974f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1974f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1974F4u;
    {
        const bool branch_taken_0x1974f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1974F4u;
            // 0x1974f8: 0xac251640  sw          $a1, 0x1640($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5696), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974f4) {
            ctx->pc = 0x197528u;
            goto label_197528;
        }
    }
    ctx->pc = 0x1974FCu;
    // 0x1974fc: 0x0  nop
    ctx->pc = 0x1974fcu;
    // NOP
label_197500:
    // 0x197500: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197504: 0x8c241644  lw          $a0, 0x1644($at)
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5700)));
    // 0x197508: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19750c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19750Cu;
    {
        const bool branch_taken_0x19750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19750Cu;
            // 0x197510: 0xac251644  sw          $a1, 0x1644($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5700), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19750c) {
            ctx->pc = 0x197528u;
            goto label_197528;
        }
    }
    ctx->pc = 0x197514u;
    // 0x197514: 0x0  nop
    ctx->pc = 0x197514u;
    // NOP
label_197518:
    // 0x197518: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19751c: 0x8c241648  lw          $a0, 0x1648($at)
    ctx->pc = 0x19751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5704)));
    // 0x197520: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197524: 0xac251648  sw          $a1, 0x1648($at)
    ctx->pc = 0x197524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5704), GPR_U32(ctx, 5));
label_197528:
    // 0x197528: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x197528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19752c: 0x10e3001c  beq         $a3, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19752Cu;
    {
        const bool branch_taken_0x19752c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x197530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19752Cu;
            // 0x197530: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19752c) {
            ctx->pc = 0x1975A0u;
            goto label_1975a0;
        }
    }
    ctx->pc = 0x197534u;
    // 0x197534: 0x10e30016  beq         $a3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x197534u;
    {
        const bool branch_taken_0x197534 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x197534) {
            ctx->pc = 0x197590u;
            goto label_197590;
        }
    }
    ctx->pc = 0x19753Cu;
    // 0x19753c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19753cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197540: 0x10e3000f  beq         $a3, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x197540u;
    {
        const bool branch_taken_0x197540 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x197544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197540u;
            // 0x197544: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197540) {
            ctx->pc = 0x197580u;
            goto label_197580;
        }
    }
    ctx->pc = 0x197548u;
    // 0x197548: 0x10e30009  beq         $a3, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197548u;
    {
        const bool branch_taken_0x197548 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x197548) {
            ctx->pc = 0x197570u;
            goto label_197570;
        }
    }
    ctx->pc = 0x197550u;
    // 0x197550: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x197550u;
    {
        const bool branch_taken_0x197550 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x197550) {
            ctx->pc = 0x197560u;
            goto label_197560;
        }
    }
    ctx->pc = 0x197558u;
    // 0x197558: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x197558u;
    {
        const bool branch_taken_0x197558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197558) {
            ctx->pc = 0x1975A8u;
            goto label_1975a8;
        }
    }
    ctx->pc = 0x197560u;
label_197560:
    // 0x197560: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197564: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x197564u;
    {
        const bool branch_taken_0x197564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197564u;
            // 0x197568: 0xac241638  sw          $a0, 0x1638($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197564) {
            ctx->pc = 0x1975A8u;
            goto label_1975a8;
        }
    }
    ctx->pc = 0x19756Cu;
    // 0x19756c: 0x0  nop
    ctx->pc = 0x19756cu;
    // NOP
label_197570:
    // 0x197570: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197574: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197574u;
    {
        const bool branch_taken_0x197574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197574u;
            // 0x197578: 0xac24163c  sw          $a0, 0x163C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197574) {
            ctx->pc = 0x1975A8u;
            goto label_1975a8;
        }
    }
    ctx->pc = 0x19757Cu;
    // 0x19757c: 0x0  nop
    ctx->pc = 0x19757cu;
    // NOP
label_197580:
    // 0x197580: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197584u;
    {
        const bool branch_taken_0x197584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197584u;
            // 0x197588: 0xac241640  sw          $a0, 0x1640($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197584) {
            ctx->pc = 0x1975A8u;
            goto label_1975a8;
        }
    }
    ctx->pc = 0x19758Cu;
    // 0x19758c: 0x0  nop
    ctx->pc = 0x19758cu;
    // NOP
label_197590:
    // 0x197590: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197594u;
    {
        const bool branch_taken_0x197594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197594u;
            // 0x197598: 0xac241644  sw          $a0, 0x1644($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5700), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197594) {
            ctx->pc = 0x1975A8u;
            goto label_1975a8;
        }
    }
    ctx->pc = 0x19759Cu;
    // 0x19759c: 0x0  nop
    ctx->pc = 0x19759cu;
    // NOP
label_1975a0:
    // 0x1975a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1975a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1975a4: 0xac241648  sw          $a0, 0x1648($at)
    ctx->pc = 0x1975a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5704), GPR_U32(ctx, 4));
label_1975a8:
    // 0x1975a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1975A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197428u: goto label_197428;
            case 0x197440u: goto label_197440;
            case 0x197458u: goto label_197458;
            case 0x197470u: goto label_197470;
            case 0x197488u: goto label_197488;
            case 0x1974C0u: goto label_1974c0;
            case 0x1974D0u: goto label_1974d0;
            case 0x1974E8u: goto label_1974e8;
            case 0x197500u: goto label_197500;
            case 0x197518u: goto label_197518;
            case 0x197528u: goto label_197528;
            case 0x197560u: goto label_197560;
            case 0x197570u: goto label_197570;
            case 0x197580u: goto label_197580;
            case 0x197590u: goto label_197590;
            case 0x1975A0u: goto label_1975a0;
            case 0x1975A8u: goto label_1975a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1975B0u;
}
