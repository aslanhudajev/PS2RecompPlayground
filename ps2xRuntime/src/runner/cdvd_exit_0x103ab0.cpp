#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cdvd_exit
// Address: 0x103ab0 - 0x103b50
void cdvd_exit_0x103ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cdvd_exit_0x103ab0");
#endif

    ctx->pc = 0x103ab0u;

    // 0x103ab0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x103ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x103ab4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103ab8: 0x8c43da14  lw          $v1, -0x25EC($v0)
    ctx->pc = 0x103ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957588)));
    // 0x103abc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103ac0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x103AC0u;
    {
        const bool branch_taken_0x103ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103AC0u;
            // 0x103ac4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ac0) {
            ctx->pc = 0x103AE8u;
            goto label_103ae8;
        }
    }
    ctx->pc = 0x103AC8u;
    // 0x103ac8: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x103ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x103acc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x103accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103ad0: 0xac62da58  sw          $v0, -0x25A8($v1)
    ctx->pc = 0x103ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957656), GPR_U32(ctx, 2));
    // 0x103ad4: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x103ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x103ad8: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x103AD8u;
    SET_GPR_U32(ctx, 31, 0x103AE0u);
    ctx->pc = 0x103ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AD8u;
            // 0x103adc: 0x8e04da20  lw          $a0, -0x25E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294957600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AE0u; }
        if (ctx->pc != 0x103AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AE0u; }
        if (ctx->pc != 0x103AE0u) { return; }
    }
    ctx->pc = 0x103AE0u;
    // 0x103ae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x103AE0u;
    {
        const bool branch_taken_0x103ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103AE0u;
            // 0x103ae4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ae0) {
            ctx->pc = 0x103AF0u;
            goto label_103af0;
        }
    }
    ctx->pc = 0x103AE8u;
label_103ae8:
    // 0x103ae8: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x103ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x103aec: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x103aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_103af0:
    // 0x103af0: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x103AF0u;
    SET_GPR_U32(ctx, 31, 0x103AF8u);
    ctx->pc = 0x103AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AF0u;
            // 0x103af4: 0x8c44da28  lw          $a0, -0x25D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AF8u; }
        if (ctx->pc != 0x103AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103AF8u; }
        if (ctx->pc != 0x103AF8u) { return; }
    }
    ctx->pc = 0x103AF8u;
    // 0x103af8: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x103af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x103afc: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x103AFCu;
    SET_GPR_U32(ctx, 31, 0x103B04u);
    ctx->pc = 0x103B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103AFCu;
            // 0x103b00: 0x8c64da2c  lw          $a0, -0x25D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957612)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B04u; }
        if (ctx->pc != 0x103B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B04u; }
        if (ctx->pc != 0x103B04u) { return; }
    }
    ctx->pc = 0x103B04u;
    // 0x103b04: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x103b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x103b08: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x103B08u;
    SET_GPR_U32(ctx, 31, 0x103B10u);
    ctx->pc = 0x103B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103B08u;
            // 0x103b0c: 0x8c64da30  lw          $a0, -0x25D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B10u; }
        if (ctx->pc != 0x103B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B10u; }
        if (ctx->pc != 0x103B10u) { return; }
    }
    ctx->pc = 0x103B10u;
    // 0x103b10: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x103B10u;
    SET_GPR_U32(ctx, 31, 0x103B18u);
    ctx->pc = 0x103B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103B10u;
            // 0x103b14: 0x8e04da20  lw          $a0, -0x25E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294957600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B18u; }
        if (ctx->pc != 0x103B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B18u; }
        if (ctx->pc != 0x103B18u) { return; }
    }
    ctx->pc = 0x103B18u;
    // 0x103b18: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x103B18u;
    SET_GPR_U32(ctx, 31, 0x103B20u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B20u; }
        if (ctx->pc != 0x103B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B20u; }
        if (ctx->pc != 0x103B20u) { return; }
    }
    ctx->pc = 0x103B20u;
    // 0x103b20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x103b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x103b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b28: 0xc04c43c  jal         func_1310F0
    ctx->pc = 0x103B28u;
    SET_GPR_U32(ctx, 31, 0x103B30u);
    ctx->pc = 0x103B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103B28u;
            // 0x103b2c: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)18u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1310F0u;
    if (runtime->hasFunction(0x1310F0u)) {
        auto targetFn = runtime->lookupFunction(0x1310F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B30u; }
        if (ctx->pc != 0x103B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRemoveCmdHandler_0x1310f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103B30u; }
        if (ctx->pc != 0x103B30u) { return; }
    }
    ctx->pc = 0x103B30u;
    // 0x103b30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103B30u;
    {
        const bool branch_taken_0x103b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103B30u;
            // 0x103b34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b30) {
            ctx->pc = 0x103B44u;
            goto label_103b44;
        }
    }
    ctx->pc = 0x103B38u;
    // 0x103b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b3c: 0x804de7a  j           func_1379E8
    ctx->pc = 0x103B3Cu;
    ctx->pc = 0x103B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103B3Cu;
            // 0x103b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103B44u;
label_103b44:
    // 0x103b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b48: 0x3e00008  jr          $ra
    ctx->pc = 0x103B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103B48u;
            // 0x103b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103AE8u: goto label_103ae8;
            case 0x103AF0u: goto label_103af0;
            case 0x103B44u: goto label_103b44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103B50u;
}
