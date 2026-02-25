#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_StopStream
// Address: 0x173580 - 0x173640
void SOUND_StopStream_0x173580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_StopStream_0x173580");
#endif

    ctx->pc = 0x173580u;

    // 0x173580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17358c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17358cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173590: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173590u;
    {
        const bool branch_taken_0x173590 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x173594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173590u;
            // 0x173594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173590) {
            ctx->pc = 0x1735A0u;
            goto label_1735a0;
        }
    }
    ctx->pc = 0x173598u;
    // 0x173598: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x173598u;
    {
        const bool branch_taken_0x173598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173598) {
            ctx->pc = 0x173630u;
            goto label_173630;
        }
    }
    ctx->pc = 0x1735A0u;
label_1735a0:
    // 0x1735a0: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x1735a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1735a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1735A4u;
    {
        const bool branch_taken_0x1735a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1735A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735A4u;
            // 0x1735a8: 0x2604ffc0  addiu       $a0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735a4) {
            ctx->pc = 0x1735F8u;
            goto label_1735f8;
        }
    }
    ctx->pc = 0x1735ACu;
    // 0x1735ac: 0xc05ca20  jal         func_172880
    ctx->pc = 0x1735ACu;
    SET_GPR_U32(ctx, 31, 0x1735B4u);
    ctx->pc = 0x172880u;
    if (runtime->hasFunction(0x172880u)) {
        auto targetFn = runtime->lookupFunction(0x172880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735B4u; }
        if (ctx->pc != 0x1735B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_GetStreamChannel_0x172880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1735B4u; }
        if (ctx->pc != 0x1735B4u) { return; }
    }
    ctx->pc = 0x1735B4u;
    // 0x1735b4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1735B4u;
    {
        const bool branch_taken_0x1735b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1735B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735B4u;
            // 0x1735b8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735b4) {
            ctx->pc = 0x1735F0u;
            goto label_1735f0;
        }
    }
    ctx->pc = 0x1735BCu;
    // 0x1735bc: 0x2605ffc0  addiu       $a1, $s0, -0x40
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x1735c0: 0x2463a020  addiu       $v1, $v1, -0x5FE0
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942752));
    // 0x1735c4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1735c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1735c8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1735c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1735cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1735d0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x1735d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x1735d4: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1735d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1735d8: 0x24630e90  addiu       $v1, $v1, 0xE90
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3728));
    // 0x1735dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1735dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1735e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1735E4u;
    {
        const bool branch_taken_0x1735e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735E4u;
            // 0x1735e8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735e4) {
            ctx->pc = 0x173610u;
            goto label_173610;
        }
    }
    ctx->pc = 0x1735ECu;
    // 0x1735ec: 0x0  nop
    ctx->pc = 0x1735ecu;
    // NOP
label_1735f0:
    // 0x1735f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1735F0u;
    {
        const bool branch_taken_0x1735f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1735F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1735F0u;
            // 0x1735f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735f0) {
            ctx->pc = 0x173630u;
            goto label_173630;
        }
    }
    ctx->pc = 0x1735F8u;
label_1735f8:
    // 0x1735f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1735fc: 0x24420e90  addiu       $v0, $v0, 0xE90
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3728));
    // 0x173600: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173604: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x173608: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x173608u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17360c: 0x0  nop
    ctx->pc = 0x17360cu;
    // NOP
label_173610:
    // 0x173610: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x173610u;
    SET_GPR_U32(ctx, 31, 0x173618u);
    ctx->pc = 0x173614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173610u;
            // 0x173614: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173618u; }
        if (ctx->pc != 0x173618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173618u; }
        if (ctx->pc != 0x173618u) { return; }
    }
    ctx->pc = 0x173618u;
    // 0x173618: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x173618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17361c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17361Cu;
    SET_GPR_U32(ctx, 31, 0x173624u);
    ctx->pc = 0x173620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17361Cu;
            // 0x173620: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173624u; }
        if (ctx->pc != 0x173624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173624u; }
        if (ctx->pc != 0x173624u) { return; }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x173624u;
    SET_GPR_U32(ctx, 31, 0x17362Cu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17362Cu; }
        if (ctx->pc != 0x17362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17362Cu; }
        if (ctx->pc != 0x17362Cu) { return; }
    }
    ctx->pc = 0x17362Cu;
    // 0x17362c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17362cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173630:
    // 0x173630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173638: 0x3e00008  jr          $ra
    ctx->pc = 0x173638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173638u;
            // 0x17363c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1735A0u: goto label_1735a0;
            case 0x1735F0u: goto label_1735f0;
            case 0x1735F8u: goto label_1735f8;
            case 0x173610u: goto label_173610;
            case 0x173630u: goto label_173630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173640u;
}
