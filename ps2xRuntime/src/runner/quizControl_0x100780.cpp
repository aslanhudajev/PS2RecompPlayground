#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: quizControl
// Address: 0x100780 - 0x10097c
void quizControl_0x100780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x100780u;

    // 0x100780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10078c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10078cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100790: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x100790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x100794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100798: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10079c: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x10079Cu;
    SET_GPR_U32(ctx, 31, 0x1007A4u);
    ctx->pc = 0x1007A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10079Cu;
            // 0x1007a0: 0x2606e100  addiu       $a2, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1007A4u; }
        if (ctx->pc != 0x1007A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1007A4u; }
        if (ctx->pc != 0x1007A4u) { return; }
    }
    ctx->pc = 0x1007A4u;
    // 0x1007a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1007a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007a8: 0xc04591e  jal         func_116478
    ctx->pc = 0x1007A8u;
    SET_GPR_U32(ctx, 31, 0x1007B0u);
    ctx->pc = 0x1007ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1007A8u;
            // 0x1007ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1007B0u; }
        if (ctx->pc != 0x1007B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1007B0u; }
        if (ctx->pc != 0x1007B0u) { return; }
    }
    ctx->pc = 0x1007B0u;
    // 0x1007b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1007b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1007b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1007b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1007b8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1007B8u;
    {
        const bool branch_taken_0x1007b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1007BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007B8u;
            // 0x1007bc: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007b8) {
            ctx->pc = 0x1007D4u;
            goto label_1007d4;
        }
    }
    ctx->pc = 0x1007C0u;
    // 0x1007c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1007c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1007c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1007C4u;
    {
        const bool branch_taken_0x1007c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1007C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007C4u;
            // 0x1007c8: 0x2602e100  addiu       $v0, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007c4) {
            ctx->pc = 0x1007D8u;
            goto label_1007d8;
        }
    }
    ctx->pc = 0x1007CCu;
    // 0x1007cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1007CCu;
    {
        const bool branch_taken_0x1007cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007CCu;
            // 0x1007d0: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007cc) {
            ctx->pc = 0x1007ECu;
            goto label_1007ec;
        }
    }
    ctx->pc = 0x1007D4u;
label_1007d4:
    // 0x1007d4: 0x2602e100  addiu       $v0, $s0, -0x1F00
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
label_1007d8:
    // 0x1007d8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1007d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1007dc: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1007dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1007e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1007e4: 0x641827  nor         $v1, $v1, $a0
    ctx->pc = 0x1007e4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1007e8: 0xa7838112  sh          $v1, -0x7EEE($gp)
    ctx->pc = 0x1007e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_1007ec:
    // 0x1007ec: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x1007ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x1007f0: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x1007f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16384u)));
    // 0x1007f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1007F4u;
    {
        const bool branch_taken_0x1007f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1007F4u;
            // 0x1007f8: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007f4) {
            ctx->pc = 0x100858u;
            goto label_100858;
        }
    }
    ctx->pc = 0x1007FCu;
    // 0x1007fc: 0x24511300  addiu       $s1, $v0, 0x1300
    ctx->pc = 0x1007fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x100800: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x100800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x100804: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x100804u;
    {
        const bool branch_taken_0x100804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100804u;
            // 0x100808: 0x30a21000  andi        $v0, $a1, 0x1000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4096u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100804) {
            ctx->pc = 0x10085Cu;
            goto label_10085c;
        }
    }
    ctx->pc = 0x10080Cu;
    // 0x10080c: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x10080cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x100810: 0x86021458  lh          $v0, 0x1458($s0)
    ctx->pc = 0x100810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5208)));
    // 0x100814: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x100814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x100818: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x100818u;
    {
        const bool branch_taken_0x100818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100818u;
            // 0x10081c: 0x30a21000  andi        $v0, $a1, 0x1000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4096u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100818) {
            ctx->pc = 0x10085Cu;
            goto label_10085c;
        }
    }
    ctx->pc = 0x100820u;
    // 0x100820: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x100820u;
    SET_GPR_U32(ctx, 31, 0x100828u);
    ctx->pc = 0x100824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100820u;
            // 0x100824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (runtime->hasFunction(0x10BF40u)) {
        auto targetFn = runtime->lookupFunction(0x10BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100828u; }
        if (ctx->pc != 0x100828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100828u; }
        if (ctx->pc != 0x100828u) { return; }
    }
    ctx->pc = 0x100828u;
    // 0x100828: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x100828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x10082c: 0xaf8280b0  sw          $v0, -0x7F50($gp)
    ctx->pc = 0x10082cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
    // 0x100830: 0x8c65e124  lw          $a1, -0x1EDC($v1)
    ctx->pc = 0x100830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959396)));
    // 0x100834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100838: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x100838u;
    SET_GPR_U32(ctx, 31, 0x100840u);
    ctx->pc = 0x10083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100838u;
            // 0x10083c: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100840u; }
        if (ctx->pc != 0x100840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100840u; }
        if (ctx->pc != 0x100840u) { return; }
    }
    ctx->pc = 0x100840u;
    // 0x100840: 0x96031458  lhu         $v1, 0x1458($s0)
    ctx->pc = 0x100840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5208)));
    // 0x100844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100848: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x100848u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x10084c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x100850: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x100850u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x100854: 0xa6031458  sh          $v1, 0x1458($s0)
    ctx->pc = 0x100854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5208), (uint16_t)GPR_U32(ctx, 3));
label_100858:
    // 0x100858: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x100858u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4096u)));
label_10085c:
    // 0x10085c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10085Cu;
    {
        const bool branch_taken_0x10085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10085Cu;
            // 0x100860: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10085c) {
            ctx->pc = 0x1008C0u;
            goto label_1008c0;
        }
    }
    ctx->pc = 0x100864u;
    // 0x100864: 0x24511300  addiu       $s1, $v0, 0x1300
    ctx->pc = 0x100864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x100868: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x100868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x10086c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10086Cu;
    {
        const bool branch_taken_0x10086c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10086Cu;
            // 0x100870: 0x30a24000  andi        $v0, $a1, 0x4000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16384u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10086c) {
            ctx->pc = 0x1008C4u;
            goto label_1008c4;
        }
    }
    ctx->pc = 0x100874u;
    // 0x100874: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x100874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x100878: 0x86021458  lh          $v0, 0x1458($s0)
    ctx->pc = 0x100878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5208)));
    // 0x10087c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x10087cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x100880: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x100880u;
    {
        const bool branch_taken_0x100880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100880u;
            // 0x100884: 0x30a24000  andi        $v0, $a1, 0x4000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16384u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100880) {
            ctx->pc = 0x1008C4u;
            goto label_1008c4;
        }
    }
    ctx->pc = 0x100888u;
    // 0x100888: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x100888u;
    SET_GPR_U32(ctx, 31, 0x100890u);
    ctx->pc = 0x10088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100888u;
            // 0x10088c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (runtime->hasFunction(0x10BF40u)) {
        auto targetFn = runtime->lookupFunction(0x10BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100890u; }
        if (ctx->pc != 0x100890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100890u; }
        if (ctx->pc != 0x100890u) { return; }
    }
    ctx->pc = 0x100890u;
    // 0x100890: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x100894: 0xaf8280b0  sw          $v0, -0x7F50($gp)
    ctx->pc = 0x100894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
    // 0x100898: 0x8c65e124  lw          $a1, -0x1EDC($v1)
    ctx->pc = 0x100898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959396)));
    // 0x10089c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008a0: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x1008A0u;
    SET_GPR_U32(ctx, 31, 0x1008A8u);
    ctx->pc = 0x1008A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1008A0u;
            // 0x1008a4: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1008A8u; }
        if (ctx->pc != 0x1008A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1008A8u; }
        if (ctx->pc != 0x1008A8u) { return; }
    }
    ctx->pc = 0x1008A8u;
    // 0x1008a8: 0x96031458  lhu         $v1, 0x1458($s0)
    ctx->pc = 0x1008a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 5208)));
    // 0x1008ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1008b0: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x1008b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1008b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1008b8: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x1008b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x1008bc: 0xa6031458  sh          $v1, 0x1458($s0)
    ctx->pc = 0x1008bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5208), (uint16_t)GPR_U32(ctx, 3));
label_1008c0:
    // 0x1008c0: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x1008c0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)16384u)));
label_1008c4:
    // 0x1008c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1008C4u;
    {
        const bool branch_taken_0x1008c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1008C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008C4u;
            // 0x1008c8: 0x30a21000  andi        $v0, $a1, 0x1000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4096u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008c4) {
            ctx->pc = 0x1008E8u;
            goto label_1008e8;
        }
    }
    ctx->pc = 0x1008CCu;
    // 0x1008cc: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1008d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1008d4: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1008d8: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1008dc: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1008DCu;
    {
        const bool branch_taken_0x1008dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1008dc) {
            ctx->pc = 0x1008E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1008DCu;
            // 0x1008e0: 0xa440000a  sh          $zero, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1008E4u;
            goto label_1008e4;
        }
    }
    ctx->pc = 0x1008E4u;
label_1008e4:
    // 0x1008e4: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x1008e4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4096u)));
label_1008e8:
    // 0x1008e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1008E8u;
    {
        const bool branch_taken_0x1008e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1008ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1008E8u;
            // 0x1008ec: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)64u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008e8) {
            ctx->pc = 0x10090Cu;
            goto label_10090c;
        }
    }
    ctx->pc = 0x1008F0u;
    // 0x1008f0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1008f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1008f8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1008fc: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x100900: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x100900u;
    {
        const bool branch_taken_0x100900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x100900) {
            ctx->pc = 0x100904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100900u;
            // 0x100904: 0xa4400008  sh          $zero, 0x8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100908u;
            goto label_100908;
        }
    }
    ctx->pc = 0x100908u;
label_100908:
    // 0x100908: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x100908u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)64u)));
label_10090c:
    // 0x10090c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10090Cu;
    {
        const bool branch_taken_0x10090c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10090Cu;
            // 0x100910: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10090c) {
            ctx->pc = 0x100928u;
            goto label_100928;
        }
    }
    ctx->pc = 0x100914u;
    // 0x100914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100918: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x10091c: 0x84430012  lh          $v1, 0x12($v0)
    ctx->pc = 0x10091cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x100920: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x100920u;
    {
        const bool branch_taken_0x100920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x100920) {
            ctx->pc = 0x100924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100920u;
            // 0x100924: 0xa4400012  sh          $zero, 0x12($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100928u;
            goto label_100928;
        }
    }
    ctx->pc = 0x100928u;
label_100928:
    // 0x100928: 0xc046298  jal         func_118A60
    ctx->pc = 0x100928u;
    SET_GPR_U32(ctx, 31, 0x100930u);
    ctx->pc = 0x118A60u;
    if (runtime->hasFunction(0x118A60u)) {
        auto targetFn = runtime->lookupFunction(0x118A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100930u; }
        if (ctx->pc != 0x100930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStatus_0x118a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100930u; }
        if (ctx->pc != 0x100930u) { return; }
    }
    ctx->pc = 0x100930u;
    // 0x100930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100934: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x100934u;
    {
        const bool branch_taken_0x100934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100934u;
            // 0x100938: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100934) {
            ctx->pc = 0x10096Cu;
            goto label_10096c;
        }
    }
    ctx->pc = 0x10093Cu;
    // 0x10093c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10093cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x100940: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x100940u;
    SET_GPR_U32(ctx, 31, 0x100948u);
    ctx->pc = 0x100944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100940u;
            // 0x100944: 0x24842a80  addiu       $a0, $a0, 0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100948u; }
        if (ctx->pc != 0x100948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100948u; }
        if (ctx->pc != 0x100948u) { return; }
    }
    ctx->pc = 0x100948u;
    // 0x100948: 0xc042c86  jal         func_10B218
    ctx->pc = 0x100948u;
    SET_GPR_U32(ctx, 31, 0x100950u);
    ctx->pc = 0x10B218u;
    if (runtime->hasFunction(0x10B218u)) {
        auto targetFn = runtime->lookupFunction(0x10B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100950u; }
        if (ctx->pc != 0x100950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100950u; }
        if (ctx->pc != 0x100950u) { return; }
    }
    ctx->pc = 0x100950u;
label_100950:
    // 0x100950: 0x0  nop
    ctx->pc = 0x100950u;
    // NOP
    // 0x100954: 0x0  nop
    ctx->pc = 0x100954u;
    // NOP
    // 0x100958: 0x0  nop
    ctx->pc = 0x100958u;
    // NOP
    // 0x10095c: 0x0  nop
    ctx->pc = 0x10095cu;
    // NOP
    // 0x100960: 0x0  nop
    ctx->pc = 0x100960u;
    // NOP
    // 0x100964: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x100964u;
    {
        const bool branch_taken_0x100964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100964) {
            ctx->pc = 0x100950u;
            goto label_100950;
        }
    }
    ctx->pc = 0x10096Cu;
label_10096c:
    // 0x10096c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10096cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100974: 0x3e00008  jr          $ra
    ctx->pc = 0x100974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100974u;
            // 0x100978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1007D4u: goto label_1007d4;
            case 0x1007D8u: goto label_1007d8;
            case 0x1007ECu: goto label_1007ec;
            case 0x100858u: goto label_100858;
            case 0x10085Cu: goto label_10085c;
            case 0x1008C0u: goto label_1008c0;
            case 0x1008C4u: goto label_1008c4;
            case 0x1008E4u: goto label_1008e4;
            case 0x1008E8u: goto label_1008e8;
            case 0x100908u: goto label_100908;
            case 0x10090Cu: goto label_10090c;
            case 0x100928u: goto label_100928;
            case 0x100950u: goto label_100950;
            case 0x10096Cu: goto label_10096c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10097Cu;
}
