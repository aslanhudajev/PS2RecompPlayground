#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_GetStreamInfo
// Address: 0x1722a0 - 0x172450
void SOUND_GetStreamInfo_0x1722a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_GetStreamInfo_0x1722a0");
#endif

    ctx->pc = 0x1722a0u;

    // 0x1722a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1722a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1722a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1722a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1722ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1722acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1722b0: 0x8c220a58  lw          $v0, 0xA58($at)
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2648)));
    // 0x1722b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1722b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722b8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1722b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1722bc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722c0: 0x8c220a08  lw          $v0, 0xA08($at)
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2568)));
    // 0x1722c4: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x1722c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x1722c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722cc: 0x8c220a00  lw          $v0, 0xA00($at)
    ctx->pc = 0x1722ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2560)));
    // 0x1722d0: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x1722d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1722d4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722d8: 0x8c2209e0  lw          $v0, 0x9E0($at)
    ctx->pc = 0x1722d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2528)));
    // 0x1722dc: 0xa0a20008  sb          $v0, 0x8($a1)
    ctx->pc = 0x1722dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1722e0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722e4: 0x90220a28  lbu         $v0, 0xA28($at)
    ctx->pc = 0x1722e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2600)));
    // 0x1722e8: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x1722e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1722ec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722f0: 0x90220a38  lbu         $v0, 0xA38($at)
    ctx->pc = 0x1722f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2616)));
    // 0x1722f4: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x1722f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1722f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1722f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1722fc: 0x90220a30  lbu         $v0, 0xA30($at)
    ctx->pc = 0x1722fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 2608)));
    // 0x172300: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x172300u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x172304: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172308: 0x8c220a68  lw          $v0, 0xA68($at)
    ctx->pc = 0x172308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2664)));
    // 0x17230c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17230cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x172310: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x172310u;
    {
        const bool branch_taken_0x172310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172310) {
            ctx->pc = 0x172360u;
            goto label_172360;
        }
    }
    ctx->pc = 0x172318u;
    // 0x172318: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x17231c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17231Cu;
    SET_GPR_U32(ctx, 31, 0x172324u);
    ctx->pc = 0x172320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17231Cu;
            // 0x172320: 0x24841450  addiu       $a0, $a0, 0x1450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172324u; }
        if (ctx->pc != 0x172324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172324u; }
        if (ctx->pc != 0x172324u) { return; }
    }
    ctx->pc = 0x172324u;
    // 0x172324: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172328: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17232c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x17232Cu;
    SET_GPR_U32(ctx, 31, 0x172334u);
    ctx->pc = 0x172330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17232Cu;
            // 0x172330: 0x24841480  addiu       $a0, $a0, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172334u; }
        if (ctx->pc != 0x172334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172334u; }
        if (ctx->pc != 0x172334u) { return; }
    }
    ctx->pc = 0x172334u;
    // 0x172334: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172338: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172338u;
    SET_GPR_U32(ctx, 31, 0x172340u);
    ctx->pc = 0x17233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172338u;
            // 0x17233c: 0x248414a0  addiu       $a0, $a0, 0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172340u; }
        if (ctx->pc != 0x172340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172340u; }
        if (ctx->pc != 0x172340u) { return; }
    }
    ctx->pc = 0x172340u;
    // 0x172340: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172344: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172344u;
    SET_GPR_U32(ctx, 31, 0x17234Cu);
    ctx->pc = 0x172348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172344u;
            // 0x172348: 0x248414d0  addiu       $a0, $a0, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17234Cu; }
        if (ctx->pc != 0x17234Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17234Cu; }
        if (ctx->pc != 0x17234Cu) { return; }
    }
    ctx->pc = 0x17234Cu;
    // 0x17234c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x17234cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172350: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x172350u;
    SET_GPR_U32(ctx, 31, 0x172358u);
    ctx->pc = 0x172354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172350u;
            // 0x172354: 0x24841500  addiu       $a0, $a0, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172358u; }
        if (ctx->pc != 0x172358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172358u; }
        if (ctx->pc != 0x172358u) { return; }
    }
    ctx->pc = 0x172358u;
    // 0x172358: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x172358u;
    {
        const bool branch_taken_0x172358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172358u;
            // 0x17235c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172358) {
            ctx->pc = 0x172440u;
            goto label_172440;
        }
    }
    ctx->pc = 0x172360u;
label_172360:
    // 0x172360: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x172360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x172364: 0x24420e90  addiu       $v0, $v0, 0xE90
    ctx->pc = 0x172364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3728));
    // 0x172368: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x172368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17236c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x17236cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172370: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172370u;
    {
        const bool branch_taken_0x172370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172370u;
            // 0x172374: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172370) {
            ctx->pc = 0x172380u;
            goto label_172380;
        }
    }
    ctx->pc = 0x172378u;
    // 0x172378: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172378u;
    {
        const bool branch_taken_0x172378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172378) {
            ctx->pc = 0x172388u;
            goto label_172388;
        }
    }
    ctx->pc = 0x172380u;
label_172380:
    // 0x172380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172380u;
    {
        const bool branch_taken_0x172380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172380u;
            // 0x172384: 0xa0a00011  sb          $zero, 0x11($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172380) {
            ctx->pc = 0x172390u;
            goto label_172390;
        }
    }
    ctx->pc = 0x172388u;
label_172388:
    // 0x172388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17238c: 0xa0a20011  sb          $v0, 0x11($a1)
    ctx->pc = 0x17238cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17), (uint8_t)GPR_U32(ctx, 2));
label_172390:
    // 0x172390: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172394: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x172394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x172398: 0x24630b10  addiu       $v1, $v1, 0xB10
    ctx->pc = 0x172398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x17239c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1723a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1723a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1723a4: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x1723a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1723a8: 0x24420e60  addiu       $v0, $v0, 0xE60
    ctx->pc = 0x1723a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3680));
    // 0x1723ac: 0x505021  addu        $t2, $v0, $s0
    ctx->pc = 0x1723acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1723b0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1723b4: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x1723b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
    // 0x1723b8: 0x504821  addu        $t1, $v0, $s0
    ctx->pc = 0x1723b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1723bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1723bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1723c0: 0xacab000c  sw          $t3, 0xC($a1)
    ctx->pc = 0x1723c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 11));
    // 0x1723c4: 0x24420e30  addiu       $v0, $v0, 0xE30
    ctx->pc = 0x1723c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3632));
    // 0x1723c8: 0x814a0000  lb          $t2, 0x0($t2)
    ctx->pc = 0x1723c8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1723cc: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x1723ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1723d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1723d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1723d4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1723d8: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x1723dc: 0x443821  addu        $a3, $v0, $a0
    ctx->pc = 0x1723dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1723e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1723e4: 0x24420cb0  addiu       $v0, $v0, 0xCB0
    ctx->pc = 0x1723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x1723e8: 0xa0aa0010  sb          $t2, 0x10($a1)
    ctx->pc = 0x1723e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 10));
    // 0x1723ec: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1723ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1723f0: 0x81290000  lb          $t1, 0x0($t1)
    ctx->pc = 0x1723f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1723f4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1723f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1723f8: 0x24420dd0  addiu       $v0, $v0, 0xDD0
    ctx->pc = 0x1723f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3536));
    // 0x1723fc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1723fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x172400: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x172404: 0x24420d70  addiu       $v0, $v0, 0xD70
    ctx->pc = 0x172404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
    // 0x172408: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x172408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17240c: 0xa0a90012  sb          $t1, 0x12($a1)
    ctx->pc = 0x17240cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 18), (uint8_t)GPR_U32(ctx, 9));
    // 0x172410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172414: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172418: 0xa0a80013  sb          $t0, 0x13($a1)
    ctx->pc = 0x172418u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 8));
    // 0x17241c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x17241cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172420: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x172420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x172424: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x172424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x172428: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x172428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
    // 0x17242c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x17242cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172430: 0xa0a40014  sb          $a0, 0x14($a1)
    ctx->pc = 0x172430u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x172434: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x172434u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172438: 0xa4a30016  sh          $v1, 0x16($a1)
    ctx->pc = 0x172438u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x17243c: 0x0  nop
    ctx->pc = 0x17243cu;
    // NOP
label_172440:
    // 0x172440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172448: 0x3e00008  jr          $ra
    ctx->pc = 0x172448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17244Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172448u;
            // 0x17244c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172360u: goto label_172360;
            case 0x172380u: goto label_172380;
            case 0x172388u: goto label_172388;
            case 0x172390u: goto label_172390;
            case 0x172440u: goto label_172440;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172450u;
}
