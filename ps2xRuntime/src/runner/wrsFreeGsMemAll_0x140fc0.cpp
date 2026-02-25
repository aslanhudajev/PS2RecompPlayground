#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsFreeGsMemAll
// Address: 0x140fc0 - 0x141088
void wrsFreeGsMemAll_0x140fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsFreeGsMemAll_0x140fc0");
#endif

    ctx->pc = 0x140fc0u;

    // 0x140fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140fd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x140fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140fd4: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x140fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x140fd8: 0x261077b0  addiu       $s0, $s0, 0x77B0
    ctx->pc = 0x140fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30640));
    // 0x140fdc: 0x0  nop
    ctx->pc = 0x140fdcu;
    // NOP
label_140fe0:
    // 0x140fe0: 0xc043574  jal         func_10D5D0
    ctx->pc = 0x140FE0u;
    SET_GPR_U32(ctx, 31, 0x140FE8u);
    ctx->pc = 0x140FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140FE0u;
            // 0x140fe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D5D0u;
    if (runtime->hasFunction(0x10D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x10D5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FE8u; }
        if (ctx->pc != 0x140FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemFree_0x10d5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140FE8u; }
        if (ctx->pc != 0x140FE8u) { return; }
    }
    ctx->pc = 0x140FE8u;
    // 0x140fe8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x140fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x140fec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x140fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x140ff0: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x140ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x140ff4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140FF4u;
    {
        const bool branch_taken_0x140ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140ff4) {
            ctx->pc = 0x140FE0u;
            goto label_140fe0;
        }
    }
    ctx->pc = 0x140FFCu;
    // 0x140ffc: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x141000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141004: 0x26317710  addiu       $s1, $s1, 0x7710
    ctx->pc = 0x141004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30480));
label_141008:
    // 0x141008: 0xc043574  jal         func_10D5D0
    ctx->pc = 0x141008u;
    SET_GPR_U32(ctx, 31, 0x141010u);
    ctx->pc = 0x14100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141008u;
            // 0x14100c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D5D0u;
    if (runtime->hasFunction(0x10D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x10D5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141010u; }
        if (ctx->pc != 0x141010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemFree_0x10d5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141010u; }
        if (ctx->pc != 0x141010u) { return; }
    }
    ctx->pc = 0x141010u;
    // 0x141010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141014: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x141014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x141018: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x141018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x14101c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14101Cu;
    {
        const bool branch_taken_0x14101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14101c) {
            ctx->pc = 0x141008u;
            goto label_141008;
        }
    }
    ctx->pc = 0x141024u;
    // 0x141024: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x141024u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x141028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14102c: 0x26317830  addiu       $s1, $s1, 0x7830
    ctx->pc = 0x14102cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30768));
label_141030:
    // 0x141030: 0xc043574  jal         func_10D5D0
    ctx->pc = 0x141030u;
    SET_GPR_U32(ctx, 31, 0x141038u);
    ctx->pc = 0x141034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141030u;
            // 0x141034: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D5D0u;
    if (runtime->hasFunction(0x10D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x10D5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141038u; }
        if (ctx->pc != 0x141038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemFree_0x10d5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141038u; }
        if (ctx->pc != 0x141038u) { return; }
    }
    ctx->pc = 0x141038u;
    // 0x141038: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14103c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x14103cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x141040: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x141040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x141044: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x141044u;
    {
        const bool branch_taken_0x141044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141044) {
            ctx->pc = 0x141030u;
            goto label_141030;
        }
    }
    ctx->pc = 0x14104Cu;
    // 0x14104c: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x14104cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x141050: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x141050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141054: 0x26317790  addiu       $s1, $s1, 0x7790
    ctx->pc = 0x141054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30608));
label_141058:
    // 0x141058: 0xc043574  jal         func_10D5D0
    ctx->pc = 0x141058u;
    SET_GPR_U32(ctx, 31, 0x141060u);
    ctx->pc = 0x14105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141058u;
            // 0x14105c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D5D0u;
    if (runtime->hasFunction(0x10D5D0u)) {
        auto targetFn = runtime->lookupFunction(0x10D5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141060u; }
        if (ctx->pc != 0x141060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiMemFree_0x10d5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141060u; }
        if (ctx->pc != 0x141060u) { return; }
    }
    ctx->pc = 0x141060u;
    // 0x141060: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141064: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x141064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x141068: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x141068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14106c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14106Cu;
    {
        const bool branch_taken_0x14106c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14106c) {
            ctx->pc = 0x141058u;
            goto label_141058;
        }
    }
    ctx->pc = 0x141074u;
    // 0x141074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14107c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14107cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141080: 0x3e00008  jr          $ra
    ctx->pc = 0x141080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141080u;
            // 0x141084: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140FE0u: goto label_140fe0;
            case 0x141008u: goto label_141008;
            case 0x141030u: goto label_141030;
            case 0x141058u: goto label_141058;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141088u;
}
