#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage7mapGenerate
// Address: 0x143d20 - 0x143e00
void stage7mapGenerate_0x143d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage7mapGenerate_0x143d20");
#endif

    ctx->pc = 0x143d20u;

    // 0x143d20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x143d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x143d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143d28: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x143D28u;
    SET_GPR_U32(ctx, 31, 0x143D30u);
    ctx->pc = 0x143D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143D28u;
            // 0x143d2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D30u; }
        if (ctx->pc != 0x143D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D30u; }
        if (ctx->pc != 0x143D30u) { return; }
    }
    ctx->pc = 0x143D30u;
    // 0x143d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x143d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143d34: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x143D34u;
    {
        const bool branch_taken_0x143d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x143D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D34u;
            // 0x143d38: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d34) {
            ctx->pc = 0x143DF0u;
            goto label_143df0;
        }
    }
    ctx->pc = 0x143D3Cu;
    // 0x143d3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143d40: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x143D40u;
    SET_GPR_U32(ctx, 31, 0x143D48u);
    ctx->pc = 0x143D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143D40u;
            // 0x143d44: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D48u; }
        if (ctx->pc != 0x143D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D48u; }
        if (ctx->pc != 0x143D48u) { return; }
    }
    ctx->pc = 0x143D48u;
    // 0x143d48: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x143d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x143d4c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143d50: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x143d50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)62915u)));
    // 0x143d54: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x143d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x143d58: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x143d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x143d5c: 0x27b00024  addiu       $s0, $sp, 0x24
    ctx->pc = 0x143d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x143d60: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x143d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x143d64: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x143d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x143d68: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x143d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x143d6c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143d70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x143d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x143d74: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x143d78: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x143d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x143d7c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143d80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x143d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143d84: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143D84u;
    SET_GPR_U32(ctx, 31, 0x143D8Cu);
    ctx->pc = 0x143D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143D84u;
            // 0x143d88: 0x24e73e60  addiu       $a3, $a3, 0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D8Cu; }
        if (ctx->pc != 0x143D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143D8Cu; }
        if (ctx->pc != 0x143D8Cu) { return; }
    }
    ctx->pc = 0x143D8Cu;
    // 0x143d8c: 0x3c02c496  lui         $v0, 0xC496
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
    // 0x143d90: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143d90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143d94: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143d98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x143d9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143da0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x143da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143da4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143DA4u;
    SET_GPR_U32(ctx, 31, 0x143DACu);
    ctx->pc = 0x143DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143DA4u;
            // 0x143da8: 0x24e73e60  addiu       $a3, $a3, 0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DACu; }
        if (ctx->pc != 0x143DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DACu; }
        if (ctx->pc != 0x143DACu) { return; }
    }
    ctx->pc = 0x143DACu;
    // 0x143dac: 0x3c02c516  lui         $v0, 0xC516
    ctx->pc = 0x143dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50454 << 16));
    // 0x143db0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143db0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143db4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143db8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x143dbc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143dc0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x143dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143dc4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143DC4u;
    SET_GPR_U32(ctx, 31, 0x143DCCu);
    ctx->pc = 0x143DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143DC4u;
            // 0x143dc8: 0x24e73e60  addiu       $a3, $a3, 0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DCCu; }
        if (ctx->pc != 0x143DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DCCu; }
        if (ctx->pc != 0x143DCCu) { return; }
    }
    ctx->pc = 0x143DCCu;
    // 0x143dcc: 0x3c02c561  lui         $v0, 0xC561
    ctx->pc = 0x143dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50529 << 16));
    // 0x143dd0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143dd4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143dd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x143dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x143ddc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143de0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x143de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143de4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143DE4u;
    SET_GPR_U32(ctx, 31, 0x143DECu);
    ctx->pc = 0x143DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143DE4u;
            // 0x143de8: 0x24e73e60  addiu       $a3, $a3, 0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DECu; }
        if (ctx->pc != 0x143DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143DECu; }
        if (ctx->pc != 0x143DECu) { return; }
    }
    ctx->pc = 0x143DECu;
    // 0x143dec: 0x0  nop
    ctx->pc = 0x143decu;
    // NOP
label_143df0:
    // 0x143df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143df8: 0x3e00008  jr          $ra
    ctx->pc = 0x143DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DF8u;
            // 0x143dfc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143DF0u: goto label_143df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143E00u;
}
