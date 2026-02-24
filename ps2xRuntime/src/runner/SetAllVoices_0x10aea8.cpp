#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetAllVoices
// Address: 0x10aea8 - 0x10b034
void SetAllVoices_0x10aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetAllVoices_0x10aea8");
#endif

    ctx->pc = 0x10aea8u;

    // 0x10aea8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10aea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10aeac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x10aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x10aeb0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x10aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10aeb4: 0x3c1e0017  lui         $fp, 0x17
    ctx->pc = 0x10aeb4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)23 << 16));
    // 0x10aeb8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10aeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10aebc: 0x3c170017  lui         $s7, 0x17
    ctx->pc = 0x10aebcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)23 << 16));
    // 0x10aec0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10aec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10aec4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x10aec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aec8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10aecc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x10aeccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aed0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10aed4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10aed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aed8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10aedc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x10aedcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10aee0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10aee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10aee4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10aee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10aee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aeec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10aeecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aef0:
    // 0x10aef0: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x10aef4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x10aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_10aef8:
    // 0x10aef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10aefc: 0x2628025  or          $s0, $s3, $v0
    ctx->pc = 0x10aefcu;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 19), GPR_VEC(ctx, 2)));
    // 0x10af00: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10af00u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10af04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af08: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AF08u;
    SET_GPR_U32(ctx, 31, 0x10AF10u);
    ctx->pc = 0x10AF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF08u;
            // 0x10af0c: 0x24071eff  addiu       $a3, $zero, 0x1EFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF10u; }
        if (ctx->pc != 0x10AF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF10u; }
        if (ctx->pc != 0x10AF10u) { return; }
    }
    ctx->pc = 0x10AF10u;
    // 0x10af10: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AF10u;
    {
        const bool branch_taken_0x10af10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF10u;
            // 0x10af14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af10) {
            ctx->pc = 0x10AF28u;
            goto label_10af28;
        }
    }
    ctx->pc = 0x10AF18u;
    // 0x10af18: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10af18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10af1c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AF1Cu;
    SET_GPR_U32(ctx, 31, 0x10AF24u);
    ctx->pc = 0x10AF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF1Cu;
            // 0x10af20: 0x24445eb0  addiu       $a0, $v0, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF24u; }
        if (ctx->pc != 0x10AF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF24u; }
        if (ctx->pc != 0x10AF24u) { return; }
    }
    ctx->pc = 0x10AF24u;
    // 0x10af24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10af24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10af28:
    // 0x10af28: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10af28u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10af2c: 0x36060100  ori         $a2, $s0, 0x100
    ctx->pc = 0x10af2cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)256u)));
    // 0x10af30: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AF30u;
    SET_GPR_U32(ctx, 31, 0x10AF38u);
    ctx->pc = 0x10AF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF30u;
            // 0x10af34: 0x24071eff  addiu       $a3, $zero, 0x1EFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF38u; }
        if (ctx->pc != 0x10AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF38u; }
        if (ctx->pc != 0x10AF38u) { return; }
    }
    ctx->pc = 0x10AF38u;
    // 0x10af38: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AF38u;
    {
        const bool branch_taken_0x10af38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF38u;
            // 0x10af3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af38) {
            ctx->pc = 0x10AF50u;
            goto label_10af50;
        }
    }
    ctx->pc = 0x10AF40u;
    // 0x10af40: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10af40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10af44: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AF44u;
    SET_GPR_U32(ctx, 31, 0x10AF4Cu);
    ctx->pc = 0x10AF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF44u;
            // 0x10af48: 0x24445eb8  addiu       $a0, $v0, 0x5EB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF4Cu; }
        if (ctx->pc != 0x10AF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF4Cu; }
        if (ctx->pc != 0x10AF4Cu) { return; }
    }
    ctx->pc = 0x10AF4Cu;
    // 0x10af4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10af50:
    // 0x10af50: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10af50u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10af54: 0x36060200  ori         $a2, $s0, 0x200
    ctx->pc = 0x10af54u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)512u)));
    // 0x10af58: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AF58u;
    SET_GPR_U32(ctx, 31, 0x10AF60u);
    ctx->pc = 0x10AF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF58u;
            // 0x10af5c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF60u; }
        if (ctx->pc != 0x10AF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF60u; }
        if (ctx->pc != 0x10AF60u) { return; }
    }
    ctx->pc = 0x10AF60u;
    // 0x10af60: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AF60u;
    {
        const bool branch_taken_0x10af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF60u;
            // 0x10af64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af60) {
            ctx->pc = 0x10AF78u;
            goto label_10af78;
        }
    }
    ctx->pc = 0x10AF68u;
    // 0x10af68: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10af68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10af6c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AF6Cu;
    SET_GPR_U32(ctx, 31, 0x10AF74u);
    ctx->pc = 0x10AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF6Cu;
            // 0x10af70: 0x24445ec0  addiu       $a0, $v0, 0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF74u; }
        if (ctx->pc != 0x10AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF74u; }
        if (ctx->pc != 0x10AF74u) { return; }
    }
    ctx->pc = 0x10AF74u;
    // 0x10af74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10af74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10af78:
    // 0x10af78: 0x34058050  ori         $a1, $zero, 0x8050
    ctx->pc = 0x10af78u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32848u)));
    // 0x10af7c: 0x36062040  ori         $a2, $s0, 0x2040
    ctx->pc = 0x10af7cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)8256u)));
    // 0x10af80: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AF80u;
    SET_GPR_U32(ctx, 31, 0x10AF88u);
    ctx->pc = 0x10AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF80u;
            // 0x10af84: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF88u; }
        if (ctx->pc != 0x10AF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF88u; }
        if (ctx->pc != 0x10AF88u) { return; }
    }
    ctx->pc = 0x10AF88u;
    // 0x10af88: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10AF88u;
    {
        const bool branch_taken_0x10af88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF88u;
            // 0x10af8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af88) {
            ctx->pc = 0x10AFA0u;
            goto label_10afa0;
        }
    }
    ctx->pc = 0x10AF90u;
    // 0x10af90: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10af90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10af94: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AF94u;
    SET_GPR_U32(ctx, 31, 0x10AF9Cu);
    ctx->pc = 0x10AF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AF94u;
            // 0x10af98: 0x24445ec8  addiu       $a0, $v0, 0x5EC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF9Cu; }
        if (ctx->pc != 0x10AF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AF9Cu; }
        if (ctx->pc != 0x10AF9Cu) { return; }
    }
    ctx->pc = 0x10AF9Cu;
    // 0x10af9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10afa0:
    // 0x10afa0: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10afa0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10afa4: 0x36060300  ori         $a2, $s0, 0x300
    ctx->pc = 0x10afa4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)768u)));
    // 0x10afa8: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AFA8u;
    SET_GPR_U32(ctx, 31, 0x10AFB0u);
    ctx->pc = 0x10AFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFA8u;
            // 0x10afac: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFB0u; }
        if (ctx->pc != 0x10AFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFB0u; }
        if (ctx->pc != 0x10AFB0u) { return; }
    }
    ctx->pc = 0x10AFB0u;
    // 0x10afb0: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AFB0u;
    {
        const bool branch_taken_0x10afb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x10AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFB0u;
            // 0x10afb4: 0x36060400  ori         $a2, $s0, 0x400 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1024u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afb0) {
            ctx->pc = 0x10AFC4u;
            goto label_10afc4;
        }
    }
    ctx->pc = 0x10AFB8u;
    // 0x10afb8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AFB8u;
    SET_GPR_U32(ctx, 31, 0x10AFC0u);
    ctx->pc = 0x10AFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFB8u;
            // 0x10afbc: 0x27c45ed0  addiu       $a0, $fp, 0x5ED0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 24272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFC0u; }
        if (ctx->pc != 0x10AFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFC0u; }
        if (ctx->pc != 0x10AFC0u) { return; }
    }
    ctx->pc = 0x10AFC0u;
    // 0x10afc0: 0x36060400  ori         $a2, $s0, 0x400
    ctx->pc = 0x10afc0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1024u)));
label_10afc4:
    // 0x10afc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10afc8: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10afc8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10afcc: 0xc045c80  jal         func_117200
    ctx->pc = 0x10AFCCu;
    SET_GPR_U32(ctx, 31, 0x10AFD4u);
    ctx->pc = 0x10AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFCCu;
            // 0x10afd0: 0x24071fc0  addiu       $a3, $zero, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFD4u; }
        if (ctx->pc != 0x10AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFD4u; }
        if (ctx->pc != 0x10AFD4u) { return; }
    }
    ctx->pc = 0x10AFD4u;
    // 0x10afd4: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AFD4u;
    {
        const bool branch_taken_0x10afd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x10afd4) {
            ctx->pc = 0x10AFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFD4u;
            // 0x10afd8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10AFE8u;
            goto label_10afe8;
        }
    }
    ctx->pc = 0x10AFDCu;
    // 0x10afdc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10AFDCu;
    SET_GPR_U32(ctx, 31, 0x10AFE4u);
    ctx->pc = 0x10AFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFDCu;
            // 0x10afe0: 0x26e45ed8  addiu       $a0, $s7, 0x5ED8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFE4u; }
        if (ctx->pc != 0x10AFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10AFE4u; }
        if (ctx->pc != 0x10AFE4u) { return; }
    }
    ctx->pc = 0x10AFE4u;
    // 0x10afe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10afe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10afe8:
    // 0x10afe8: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x10afe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10afec: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x10AFECu;
    {
        const bool branch_taken_0x10afec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFECu;
            // 0x10aff0: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10afec) {
            ctx->pc = 0x10AEF8u;
            goto label_10aef8;
        }
    }
    ctx->pc = 0x10AFF4u;
    // 0x10aff4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x10aff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10aff8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x10aff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10affc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x10AFFCu;
    {
        const bool branch_taken_0x10affc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AFFCu;
            // 0x10b000: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10affc) {
            ctx->pc = 0x10AEF0u;
            goto label_10aef0;
        }
    }
    ctx->pc = 0x10B004u;
    // 0x10b004: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10b004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b008: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x10b008u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b00c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x10b00cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b010: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10b010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b014: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10b014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b018: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10b018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b01c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10b01cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b020: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10b020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b024: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B02Cu;
            // 0x10b030: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10AEF0u: goto label_10aef0;
            case 0x10AEF8u: goto label_10aef8;
            case 0x10AF28u: goto label_10af28;
            case 0x10AF50u: goto label_10af50;
            case 0x10AF78u: goto label_10af78;
            case 0x10AFA0u: goto label_10afa0;
            case 0x10AFC4u: goto label_10afc4;
            case 0x10AFE8u: goto label_10afe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B034u;
}
