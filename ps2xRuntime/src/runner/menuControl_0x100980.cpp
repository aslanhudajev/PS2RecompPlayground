#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: menuControl
// Address: 0x100980 - 0x100bc4
void menuControl_0x100980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("menuControl_0x100980");
#endif

    ctx->pc = 0x100980u;

    // 0x100980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10098c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10098cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100990: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x100994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100998: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x100998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10099c: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x10099Cu;
    SET_GPR_U32(ctx, 31, 0x1009A4u);
    ctx->pc = 0x1009A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10099Cu;
            // 0x1009a0: 0x2606e100  addiu       $a2, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009A4u; }
        if (ctx->pc != 0x1009A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009A4u; }
        if (ctx->pc != 0x1009A4u) { return; }
    }
    ctx->pc = 0x1009A4u;
    // 0x1009a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1009a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1009a8: 0xc04591e  jal         func_116478
    ctx->pc = 0x1009A8u;
    SET_GPR_U32(ctx, 31, 0x1009B0u);
    ctx->pc = 0x1009ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1009A8u;
            // 0x1009ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116478u;
    if (runtime->hasFunction(0x116478u)) {
        auto targetFn = runtime->lookupFunction(0x116478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009B0u; }
        if (ctx->pc != 0x1009B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009B0u; }
        if (ctx->pc != 0x1009B0u) { return; }
    }
    ctx->pc = 0x1009B0u;
    // 0x1009b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1009b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1009b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1009b8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1009B8u;
    {
        const bool branch_taken_0x1009b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1009BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009B8u;
            // 0x1009bc: 0xaf838114  sw          $v1, -0x7EEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009b8) {
            ctx->pc = 0x1009D4u;
            goto label_1009d4;
        }
    }
    ctx->pc = 0x1009C0u;
    // 0x1009c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1009c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1009C4u;
    {
        const bool branch_taken_0x1009c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1009C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009C4u;
            // 0x1009c8: 0x2602e100  addiu       $v0, $s0, -0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009c4) {
            ctx->pc = 0x1009D8u;
            goto label_1009d8;
        }
    }
    ctx->pc = 0x1009CCu;
    // 0x1009cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1009CCu;
    {
        const bool branch_taken_0x1009cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1009D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009CCu;
            // 0x1009d0: 0xa7808112  sh          $zero, -0x7EEE($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009cc) {
            ctx->pc = 0x1009ECu;
            goto label_1009ec;
        }
    }
    ctx->pc = 0x1009D4u;
label_1009d4:
    // 0x1009d4: 0x2602e100  addiu       $v0, $s0, -0x1F00
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959360));
label_1009d8:
    // 0x1009d8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x1009d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1009dc: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1009dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1009e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1009e4: 0x641827  nor         $v1, $v1, $a0
    ctx->pc = 0x1009e4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1009e8: 0xa7838112  sh          $v1, -0x7EEE($gp)
    ctx->pc = 0x1009e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_1009ec:
    // 0x1009ec: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x1009ECu;
    SET_GPR_U32(ctx, 31, 0x1009F4u);
    ctx->pc = 0x1009F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1009ECu;
            // 0x1009f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (runtime->hasFunction(0x10BF40u)) {
        auto targetFn = runtime->lookupFunction(0x10BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009F4u; }
        if (ctx->pc != 0x1009F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009F4u; }
        if (ctx->pc != 0x1009F4u) { return; }
    }
    ctx->pc = 0x1009F4u;
    // 0x1009f4: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x1009f4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x1009f8: 0xaf8280b0  sw          $v0, -0x7F50($gp)
    ctx->pc = 0x1009f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
    // 0x1009fc: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x1009fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
    // 0x100a00: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x100A00u;
    {
        const bool branch_taken_0x100a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A00u;
            // 0x100a04: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a00) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A08u;
    // 0x100a08: 0x24511300  addiu       $s1, $v0, 0x1300
    ctx->pc = 0x100a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x100a0c: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x100a0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x100a10: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x100A10u;
    {
        const bool branch_taken_0x100a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A10u;
            // 0x100a14: 0x30a28000  andi        $v0, $a1, 0x8000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a10) {
            ctx->pc = 0x100A94u;
            goto label_100a94;
        }
    }
    ctx->pc = 0x100A18u;
    // 0x100a18: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x100a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x100a1c: 0x2470dfc0  addiu       $s0, $v1, -0x2040
    ctx->pc = 0x100a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
    // 0x100a20: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x100a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x100a24: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x100a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x100a28: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x100A28u;
    {
        const bool branch_taken_0x100a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A28u;
            // 0x100a2c: 0x3c040017  lui         $a0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a28) {
            ctx->pc = 0x100A90u;
            goto label_100a90;
        }
    }
    ctx->pc = 0x100A30u;
    // 0x100a30: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x100A30u;
    SET_GPR_U32(ctx, 31, 0x100A38u);
    ctx->pc = 0x100A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A30u;
            // 0x100a34: 0x24842ab8  addiu       $a0, $a0, 0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A38u; }
        if (ctx->pc != 0x100A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A38u; }
        if (ctx->pc != 0x100A38u) { return; }
    }
    ctx->pc = 0x100A38u;
    // 0x100a38: 0xc042c6e  jal         func_10B1B8
    ctx->pc = 0x100A38u;
    SET_GPR_U32(ctx, 31, 0x100A40u);
    ctx->pc = 0x100A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A38u;
            // 0x100a3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B1B8u;
    if (runtime->hasFunction(0x10B1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10B1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A40u; }
        if (ctx->pc != 0x100A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSound_0x10b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A40u; }
        if (ctx->pc != 0x100A40u) { return; }
    }
    ctx->pc = 0x100A40u;
    // 0x100a40: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x100a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x100a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100a48: 0x8c45e12c  lw          $a1, -0x1ED4($v0)
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959404)));
    // 0x100a4c: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x100A4Cu;
    SET_GPR_U32(ctx, 31, 0x100A54u);
    ctx->pc = 0x100A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A4Cu;
            // 0x100a50: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A54u; }
        if (ctx->pc != 0x100A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A54u; }
        if (ctx->pc != 0x100A54u) { return; }
    }
    ctx->pc = 0x100A54u;
    // 0x100a54: 0xc041604  jal         func_105810
    ctx->pc = 0x100A54u;
    SET_GPR_U32(ctx, 31, 0x100A5Cu);
    ctx->pc = 0x105810u;
    if (runtime->hasFunction(0x105810u)) {
        auto targetFn = runtime->lookupFunction(0x105810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A5Cu; }
        if (ctx->pc != 0x100A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menuAnimate_0x105810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A5Cu; }
        if (ctx->pc != 0x100A5Cu) { return; }
    }
    ctx->pc = 0x100A5Cu;
    // 0x100a5c: 0xc04166c  jal         func_1059B0
    ctx->pc = 0x100A5Cu;
    SET_GPR_U32(ctx, 31, 0x100A64u);
    ctx->pc = 0x1059B0u;
    if (runtime->hasFunction(0x1059B0u)) {
        auto targetFn = runtime->lookupFunction(0x1059B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A64u; }
        if (ctx->pc != 0x100A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menuDisplay_0x1059b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A64u; }
        if (ctx->pc != 0x100A64u) { return; }
    }
    ctx->pc = 0x100A64u;
    // 0x100a64: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x100a64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x100a68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100a6c: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x100a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x100a70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100a78: 0xaf848144  sw          $a0, -0x7EBC($gp)
    ctx->pc = 0x100a78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934852), GPR_U32(ctx, 4));
    // 0x100a7c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x100a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x100a80: 0xaf80813c  sw          $zero, -0x7EC4($gp)
    ctx->pc = 0x100a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 0));
    // 0x100a84: 0xaf808148  sw          $zero, -0x7EB8($gp)
    ctx->pc = 0x100a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934856), GPR_U32(ctx, 0));
    // 0x100a88: 0xaf80809c  sw          $zero, -0x7F64($gp)
    ctx->pc = 0x100a88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934684), GPR_U32(ctx, 0));
    // 0x100a8c: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x100a8cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_100a90:
    // 0x100a90: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x100a90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
label_100a94:
    // 0x100a94: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x100A94u;
    {
        const bool branch_taken_0x100a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100A94u;
            // 0x100a98: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a94) {
            ctx->pc = 0x100B28u;
            goto label_100b28;
        }
    }
    ctx->pc = 0x100A9Cu;
    // 0x100a9c: 0x24511300  addiu       $s1, $v0, 0x1300
    ctx->pc = 0x100a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x100aa0: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x100aa4: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x100AA4u;
    {
        const bool branch_taken_0x100aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100AA4u;
            // 0x100aa8: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aa4) {
            ctx->pc = 0x100B2Cu;
            goto label_100b2c;
        }
    }
    ctx->pc = 0x100AACu;
    // 0x100aac: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x100aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x100ab0: 0x2470dfc0  addiu       $s0, $v1, -0x2040
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
    // 0x100ab4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x100ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x100ab8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x100ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x100abc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x100ABCu;
    {
        const bool branch_taken_0x100abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100ABCu;
            // 0x100ac0: 0x30a22000  andi        $v0, $a1, 0x2000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100abc) {
            ctx->pc = 0x100B2Cu;
            goto label_100b2c;
        }
    }
    ctx->pc = 0x100AC4u;
    // 0x100ac4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x100ac8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x100AC8u;
    SET_GPR_U32(ctx, 31, 0x100AD0u);
    ctx->pc = 0x100ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AC8u;
            // 0x100acc: 0x24842ad0  addiu       $a0, $a0, 0x2AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AD0u; }
        if (ctx->pc != 0x100AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AD0u; }
        if (ctx->pc != 0x100AD0u) { return; }
    }
    ctx->pc = 0x100AD0u;
    // 0x100ad0: 0xc042c6e  jal         func_10B1B8
    ctx->pc = 0x100AD0u;
    SET_GPR_U32(ctx, 31, 0x100AD8u);
    ctx->pc = 0x100AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AD0u;
            // 0x100ad4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B1B8u;
    if (runtime->hasFunction(0x10B1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10B1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AD8u; }
        if (ctx->pc != 0x100AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSound_0x10b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AD8u; }
        if (ctx->pc != 0x100AD8u) { return; }
    }
    ctx->pc = 0x100AD8u;
    // 0x100ad8: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x100ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x100adc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100ae0: 0x8c45e12c  lw          $a1, -0x1ED4($v0)
    ctx->pc = 0x100ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959404)));
    // 0x100ae4: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x100AE4u;
    SET_GPR_U32(ctx, 31, 0x100AECu);
    ctx->pc = 0x100AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AE4u;
            // 0x100ae8: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AECu; }
        if (ctx->pc != 0x100AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AECu; }
        if (ctx->pc != 0x100AECu) { return; }
    }
    ctx->pc = 0x100AECu;
    // 0x100aec: 0xc041604  jal         func_105810
    ctx->pc = 0x100AECu;
    SET_GPR_U32(ctx, 31, 0x100AF4u);
    ctx->pc = 0x105810u;
    if (runtime->hasFunction(0x105810u)) {
        auto targetFn = runtime->lookupFunction(0x105810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AF4u; }
        if (ctx->pc != 0x100AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menuAnimate_0x105810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AF4u; }
        if (ctx->pc != 0x100AF4u) { return; }
    }
    ctx->pc = 0x100AF4u;
    // 0x100af4: 0xc04166c  jal         func_1059B0
    ctx->pc = 0x100AF4u;
    SET_GPR_U32(ctx, 31, 0x100AFCu);
    ctx->pc = 0x1059B0u;
    if (runtime->hasFunction(0x1059B0u)) {
        auto targetFn = runtime->lookupFunction(0x1059B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AFCu; }
        if (ctx->pc != 0x100AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menuDisplay_0x1059b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AFCu; }
        if (ctx->pc != 0x100AFCu) { return; }
    }
    ctx->pc = 0x100AFCu;
    // 0x100afc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x100afcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x100b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b04: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x100b04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x100b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x100b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x100b10: 0xaf848148  sw          $a0, -0x7EB8($gp)
    ctx->pc = 0x100b10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934856), GPR_U32(ctx, 4));
    // 0x100b14: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x100b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x100b18: 0xaf80813c  sw          $zero, -0x7EC4($gp)
    ctx->pc = 0x100b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 0));
    // 0x100b1c: 0xaf808144  sw          $zero, -0x7EBC($gp)
    ctx->pc = 0x100b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934852), GPR_U32(ctx, 0));
    // 0x100b20: 0xaf80809c  sw          $zero, -0x7F64($gp)
    ctx->pc = 0x100b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934684), GPR_U32(ctx, 0));
    // 0x100b24: 0x97858112  lhu         $a1, -0x7EEE($gp)
    ctx->pc = 0x100b24u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_100b28:
    // 0x100b28: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x100b28u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
label_100b2c:
    // 0x100b2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100B2Cu;
    {
        const bool branch_taken_0x100b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B2Cu;
            // 0x100b30: 0x30a28000  andi        $v0, $a1, 0x8000 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b2c) {
            ctx->pc = 0x100B50u;
            goto label_100b50;
        }
    }
    ctx->pc = 0x100B34u;
    // 0x100b34: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x100b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x100b38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b3c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x100b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x100b40: 0x8443000e  lh          $v1, 0xE($v0)
    ctx->pc = 0x100b40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x100b44: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x100B44u;
    {
        const bool branch_taken_0x100b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x100b44) {
            ctx->pc = 0x100B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100B44u;
            // 0x100b48: 0xa440000e  sh          $zero, 0xE($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100B4Cu;
            goto label_100b4c;
        }
    }
    ctx->pc = 0x100B4Cu;
label_100b4c:
    // 0x100b4c: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x100b4cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32768u)));
label_100b50:
    // 0x100b50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100B50u;
    {
        const bool branch_taken_0x100b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B50u;
            // 0x100b54: 0x3c020013  lui         $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b50) {
            ctx->pc = 0x100B6Cu;
            goto label_100b6c;
        }
    }
    ctx->pc = 0x100B58u;
    // 0x100b58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b5c: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x100b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x100b60: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x100b64: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x100B64u;
    {
        const bool branch_taken_0x100b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x100b64) {
            ctx->pc = 0x100B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100B64u;
            // 0x100b68: 0xa440000c  sh          $zero, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100B6Cu;
            goto label_100b6c;
        }
    }
    ctx->pc = 0x100B6Cu;
label_100b6c:
    // 0x100b6c: 0xc046298  jal         func_118A60
    ctx->pc = 0x100B6Cu;
    SET_GPR_U32(ctx, 31, 0x100B74u);
    ctx->pc = 0x118A60u;
    if (runtime->hasFunction(0x118A60u)) {
        auto targetFn = runtime->lookupFunction(0x118A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B74u; }
        if (ctx->pc != 0x100B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceCdStatus_0x118a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B74u; }
        if (ctx->pc != 0x100B74u) { return; }
    }
    ctx->pc = 0x100B74u;
    // 0x100b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b78: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x100B78u;
    {
        const bool branch_taken_0x100b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B78u;
            // 0x100b7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b78) {
            ctx->pc = 0x100BB4u;
            goto label_100bb4;
        }
    }
    ctx->pc = 0x100B80u;
    // 0x100b80: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x100b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x100b84: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x100B84u;
    SET_GPR_U32(ctx, 31, 0x100B8Cu);
    ctx->pc = 0x100B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B84u;
            // 0x100b88: 0x24842a80  addiu       $a0, $a0, 0x2A80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B8Cu; }
        if (ctx->pc != 0x100B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B8Cu; }
        if (ctx->pc != 0x100B8Cu) { return; }
    }
    ctx->pc = 0x100B8Cu;
    // 0x100b8c: 0xc042c86  jal         func_10B218
    ctx->pc = 0x100B8Cu;
    SET_GPR_U32(ctx, 31, 0x100B94u);
    ctx->pc = 0x10B218u;
    if (runtime->hasFunction(0x10B218u)) {
        auto targetFn = runtime->lookupFunction(0x10B218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B94u; }
        if (ctx->pc != 0x100B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B94u; }
        if (ctx->pc != 0x100B94u) { return; }
    }
    ctx->pc = 0x100B94u;
    // 0x100b94: 0x0  nop
    ctx->pc = 0x100b94u;
    // NOP
label_100b98:
    // 0x100b98: 0x0  nop
    ctx->pc = 0x100b98u;
    // NOP
    // 0x100b9c: 0x0  nop
    ctx->pc = 0x100b9cu;
    // NOP
    // 0x100ba0: 0x0  nop
    ctx->pc = 0x100ba0u;
    // NOP
    // 0x100ba4: 0x0  nop
    ctx->pc = 0x100ba4u;
    // NOP
    // 0x100ba8: 0x0  nop
    ctx->pc = 0x100ba8u;
    // NOP
    // 0x100bac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x100BACu;
    {
        const bool branch_taken_0x100bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100bac) {
            ctx->pc = 0x100B98u;
            goto label_100b98;
        }
    }
    ctx->pc = 0x100BB4u;
label_100bb4:
    // 0x100bb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x100bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x100BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100BBCu;
            // 0x100bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1009D4u: goto label_1009d4;
            case 0x1009D8u: goto label_1009d8;
            case 0x1009ECu: goto label_1009ec;
            case 0x100A90u: goto label_100a90;
            case 0x100A94u: goto label_100a94;
            case 0x100B28u: goto label_100b28;
            case 0x100B2Cu: goto label_100b2c;
            case 0x100B4Cu: goto label_100b4c;
            case 0x100B50u: goto label_100b50;
            case 0x100B6Cu: goto label_100b6c;
            case 0x100B98u: goto label_100b98;
            case 0x100BB4u: goto label_100bb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100BC4u;
}
