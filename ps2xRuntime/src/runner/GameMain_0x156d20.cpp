#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GameMain
// Address: 0x156d20 - 0x157364
void GameMain_0x156d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GameMain_0x156d20");
#endif

    ctx->pc = 0x156d20u;

    // 0x156d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156d2c: 0xc05d1b0  jal         func_1746C0
    ctx->pc = 0x156D2Cu;
    SET_GPR_U32(ctx, 31, 0x156D34u);
    ctx->pc = 0x156D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156D2Cu;
            // 0x156d30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1746C0u;
    if (runtime->hasFunction(0x1746C0u)) {
        auto targetFn = runtime->lookupFunction(0x1746C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D34u; }
        if (ctx->pc != 0x156D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MS_BankLoad_0x1746c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D34u; }
        if (ctx->pc != 0x156D34u) { return; }
    }
    ctx->pc = 0x156D34u;
    // 0x156d34: 0xc05d218  jal         func_174860
    ctx->pc = 0x156D34u;
    SET_GPR_U32(ctx, 31, 0x156D3Cu);
    ctx->pc = 0x174860u;
    if (runtime->hasFunction(0x174860u)) {
        auto targetFn = runtime->lookupFunction(0x174860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D3Cu; }
        if (ctx->pc != 0x156D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MS_PlayInt_0x174860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D3Cu; }
        if (ctx->pc != 0x156D3Cu) { return; }
    }
    ctx->pc = 0x156D3Cu;
    // 0x156d3c: 0xc06141c  jal         func_185070
    ctx->pc = 0x156D3Cu;
    SET_GPR_U32(ctx, 31, 0x156D44u);
    ctx->pc = 0x185070u;
    if (runtime->hasFunction(0x185070u)) {
        auto targetFn = runtime->lookupFunction(0x185070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D44u; }
        if (ctx->pc != 0x156D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardFirstFunc_0x185070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D44u; }
        if (ctx->pc != 0x156D44u) { return; }
    }
    ctx->pc = 0x156D44u;
    // 0x156d44: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x156D44u;
    SET_GPR_U32(ctx, 31, 0x156D4Cu);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D4Cu; }
        if (ctx->pc != 0x156D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D4Cu; }
        if (ctx->pc != 0x156D4Cu) { return; }
    }
    ctx->pc = 0x156D4Cu;
    // 0x156d4c: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x156D4Cu;
    SET_GPR_U32(ctx, 31, 0x156D54u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D54u; }
        if (ctx->pc != 0x156D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D54u; }
        if (ctx->pc != 0x156D54u) { return; }
    }
    ctx->pc = 0x156D54u;
    // 0x156d54: 0x0  nop
    ctx->pc = 0x156d54u;
    // NOP
label_156d58:
    // 0x156d58: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x156D58u;
    SET_GPR_U32(ctx, 31, 0x156D60u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D60u; }
        if (ctx->pc != 0x156D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D60u; }
        if (ctx->pc != 0x156D60u) { return; }
    }
    ctx->pc = 0x156D60u;
    // 0x156d60: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x156D60u;
    SET_GPR_U32(ctx, 31, 0x156D68u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D68u; }
        if (ctx->pc != 0x156D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D68u; }
        if (ctx->pc != 0x156D68u) { return; }
    }
    ctx->pc = 0x156D68u;
    // 0x156d68: 0xc056f94  jal         func_15BE50
    ctx->pc = 0x156D68u;
    SET_GPR_U32(ctx, 31, 0x156D70u);
    ctx->pc = 0x156D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156D68u;
            // 0x156d6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE50u;
    if (runtime->hasFunction(0x15BE50u)) {
        auto targetFn = runtime->lookupFunction(0x15BE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D70u; }
        if (ctx->pc != 0x156D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameReset_0x15be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D70u; }
        if (ctx->pc != 0x156D70u) { return; }
    }
    ctx->pc = 0x156D70u;
    // 0x156d70: 0xc07a84c  jal         func_1EA130
    ctx->pc = 0x156D70u;
    SET_GPR_U32(ctx, 31, 0x156D78u);
    ctx->pc = 0x1EA130u;
    if (runtime->hasFunction(0x1EA130u)) {
        auto targetFn = runtime->lookupFunction(0x1EA130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D78u; }
        if (ctx->pc != 0x156D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExpTitleMain_0x1ea130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156D78u; }
        if (ctx->pc != 0x156D78u) { return; }
    }
    ctx->pc = 0x156D78u;
    // 0x156d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x156d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156d7c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x156D7Cu;
    {
        const bool branch_taken_0x156d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x156d7c) {
            ctx->pc = 0x156DA8u;
            goto label_156da8;
        }
    }
    ctx->pc = 0x156D84u;
    // 0x156d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156D84u;
    {
        const bool branch_taken_0x156d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d84) {
            ctx->pc = 0x156D98u;
            goto label_156d98;
        }
    }
    ctx->pc = 0x156D8Cu;
    // 0x156d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x156D8Cu;
    {
        const bool branch_taken_0x156d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d8c) {
            ctx->pc = 0x156DA8u;
            goto label_156da8;
        }
    }
    ctx->pc = 0x156D94u;
    // 0x156d94: 0x0  nop
    ctx->pc = 0x156d94u;
    // NOP
label_156d98:
    // 0x156d98: 0xc0506fc  jal         func_141BF0
    ctx->pc = 0x156D98u;
    SET_GPR_U32(ctx, 31, 0x156DA0u);
    ctx->pc = 0x141BF0u;
    if (runtime->hasFunction(0x141BF0u)) {
        auto targetFn = runtime->lookupFunction(0x141BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DA0u; }
        if (ctx->pc != 0x156DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shienryu1Start_0x141bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DA0u; }
        if (ctx->pc != 0x156DA0u) { return; }
    }
    ctx->pc = 0x156DA0u;
    // 0x156da0: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x156DA0u;
    SET_GPR_U32(ctx, 31, 0x156DA8u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DA8u; }
        if (ctx->pc != 0x156DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DA8u; }
        if (ctx->pc != 0x156DA8u) { return; }
    }
    ctx->pc = 0x156DA8u;
label_156da8:
    // 0x156da8: 0xc05ff74  jal         func_17FDD0
    ctx->pc = 0x156DA8u;
    SET_GPR_U32(ctx, 31, 0x156DB0u);
    ctx->pc = 0x17FDD0u;
    if (runtime->hasFunction(0x17FDD0u)) {
        auto targetFn = runtime->lookupFunction(0x17FDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DB0u; }
        if (ctx->pc != 0x156DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMain_0x17fdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DB0u; }
        if (ctx->pc != 0x156DB0u) { return; }
    }
    ctx->pc = 0x156DB0u;
    // 0x156db0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x156db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156db4: 0x1043ffe8  beq         $v0, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x156DB4u;
    {
        const bool branch_taken_0x156db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x156DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156DB4u;
            // 0x156db8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156db4) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x156DBCu;
    // 0x156dbc: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156DBCu;
    {
        const bool branch_taken_0x156dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x156dbc) {
            ctx->pc = 0x156DD8u;
            goto label_156dd8;
        }
    }
    ctx->pc = 0x156DC4u;
    // 0x156dc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156DC4u;
    {
        const bool branch_taken_0x156dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dc4) {
            ctx->pc = 0x156DD8u;
            goto label_156dd8;
        }
    }
    ctx->pc = 0x156DCCu;
    // 0x156dcc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x156DCCu;
    {
        const bool branch_taken_0x156dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156dcc) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x156DD4u;
    // 0x156dd4: 0x0  nop
    ctx->pc = 0x156dd4u;
    // NOP
label_156dd8:
    // 0x156dd8: 0xc056fbc  jal         func_15BEF0
    ctx->pc = 0x156DD8u;
    SET_GPR_U32(ctx, 31, 0x156DE0u);
    ctx->pc = 0x15BEF0u;
    if (runtime->hasFunction(0x15BEF0u)) {
        auto targetFn = runtime->lookupFunction(0x15BEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DE0u; }
        if (ctx->pc != 0x156DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerSelectMain_0x15bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DE0u; }
        if (ctx->pc != 0x156DE0u) { return; }
    }
    ctx->pc = 0x156DE0u;
    // 0x156de0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156de4: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x156DE4u;
    SET_GPR_U32(ctx, 31, 0x156DECu);
    ctx->pc = 0x156DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156DE4u;
            // 0x156de8: 0xac202c48  sw          $zero, 0x2C48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DECu; }
        if (ctx->pc != 0x156DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        gameCharaselInit_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DECu; }
        if (ctx->pc != 0x156DECu) { return; }
    }
    ctx->pc = 0x156DECu;
    // 0x156dec: 0xc06369c  jal         func_18DA70
    ctx->pc = 0x156DECu;
    SET_GPR_U32(ctx, 31, 0x156DF4u);
    ctx->pc = 0x156DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156DECu;
            // 0x156df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA70u;
    if (runtime->hasFunction(0x18DA70u)) {
        auto targetFn = runtime->lookupFunction(0x18DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DF4u; }
        if (ctx->pc != 0x156DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayer_0x18da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DF4u; }
        if (ctx->pc != 0x156DF4u) { return; }
    }
    ctx->pc = 0x156DF4u;
    // 0x156df4: 0xc06369c  jal         func_18DA70
    ctx->pc = 0x156DF4u;
    SET_GPR_U32(ctx, 31, 0x156DFCu);
    ctx->pc = 0x156DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156DF4u;
            // 0x156df8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA70u;
    if (runtime->hasFunction(0x18DA70u)) {
        auto targetFn = runtime->lookupFunction(0x18DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DFCu; }
        if (ctx->pc != 0x156DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayer_0x18da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156DFCu; }
        if (ctx->pc != 0x156DFCu) { return; }
    }
    ctx->pc = 0x156DFCu;
    // 0x156dfc: 0xc055d8c  jal         func_157630
    ctx->pc = 0x156DFCu;
    SET_GPR_U32(ctx, 31, 0x156E04u);
    ctx->pc = 0x157630u;
    if (runtime->hasFunction(0x157630u)) {
        auto targetFn = runtime->lookupFunction(0x157630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E04u; }
        if (ctx->pc != 0x156E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetExStageState_0x157630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E04u; }
        if (ctx->pc != 0x156E04u) { return; }
    }
    ctx->pc = 0x156E04u;
    // 0x156e04: 0x0  nop
    ctx->pc = 0x156e04u;
    // NOP
label_156e08:
    // 0x156e08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156e0c: 0x8c223514  lw          $v0, 0x3514($at)
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x156e10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x156E10u;
    {
        const bool branch_taken_0x156e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E10u;
            // 0x156e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e10) {
            ctx->pc = 0x156E60u;
            goto label_156e60;
        }
    }
    ctx->pc = 0x156E18u;
    // 0x156e18: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x156e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x156e1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x156e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e20: 0xc059fd4  jal         func_167F50
    ctx->pc = 0x156E20u;
    SET_GPR_U32(ctx, 31, 0x156E28u);
    ctx->pc = 0x156E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E20u;
            // 0x156e24: 0xac221834  sw          $v0, 0x1834($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167F50u;
    if (runtime->hasFunction(0x167F50u)) {
        auto targetFn = runtime->lookupFunction(0x167F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E28u; }
        if (ctx->pc != 0x156E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCameraStep_0x167f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E28u; }
        if (ctx->pc != 0x156E28u) { return; }
    }
    ctx->pc = 0x156E28u;
    // 0x156e28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156e2c: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x156e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x156e30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156E30u;
    {
        const bool branch_taken_0x156e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E30u;
            // 0x156e34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e30) {
            ctx->pc = 0x156E40u;
            goto label_156e40;
        }
    }
    ctx->pc = 0x156E38u;
    // 0x156e38: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x156E38u;
    SET_GPR_U32(ctx, 31, 0x156E40u);
    ctx->pc = 0x156E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E38u;
            // 0x156e3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E40u; }
        if (ctx->pc != 0x156E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E40u; }
        if (ctx->pc != 0x156E40u) { return; }
    }
    ctx->pc = 0x156E40u;
label_156e40:
    // 0x156e40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156e44: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x156e48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x156E48u;
    {
        const bool branch_taken_0x156e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E48u;
            // 0x156e4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e48) {
            ctx->pc = 0x156E98u;
            goto label_156e98;
        }
    }
    ctx->pc = 0x156E50u;
    // 0x156e50: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x156E50u;
    SET_GPR_U32(ctx, 31, 0x156E58u);
    ctx->pc = 0x156E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E50u;
            // 0x156e54: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E58u; }
        if (ctx->pc != 0x156E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E58u; }
        if (ctx->pc != 0x156E58u) { return; }
    }
    ctx->pc = 0x156E58u;
    // 0x156e58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156E58u;
    {
        const bool branch_taken_0x156e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156e58) {
            ctx->pc = 0x156E98u;
            goto label_156e98;
        }
    }
    ctx->pc = 0x156E60u;
label_156e60:
    // 0x156e60: 0xc059fd4  jal         func_167F50
    ctx->pc = 0x156E60u;
    SET_GPR_U32(ctx, 31, 0x156E68u);
    ctx->pc = 0x156E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E60u;
            // 0x156e64: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167F50u;
    if (runtime->hasFunction(0x167F50u)) {
        auto targetFn = runtime->lookupFunction(0x167F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E68u; }
        if (ctx->pc != 0x156E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCameraStep_0x167f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E68u; }
        if (ctx->pc != 0x156E68u) { return; }
    }
    ctx->pc = 0x156E68u;
    // 0x156e68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156e6c: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x156e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x156e70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156E70u;
    {
        const bool branch_taken_0x156e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E70u;
            // 0x156e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e70) {
            ctx->pc = 0x156E80u;
            goto label_156e80;
        }
    }
    ctx->pc = 0x156E78u;
    // 0x156e78: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x156E78u;
    SET_GPR_U32(ctx, 31, 0x156E80u);
    ctx->pc = 0x156E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E78u;
            // 0x156e7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E80u; }
        if (ctx->pc != 0x156E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E80u; }
        if (ctx->pc != 0x156E80u) { return; }
    }
    ctx->pc = 0x156E80u;
label_156e80:
    // 0x156e80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156e84: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x156e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x156e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156E88u;
    {
        const bool branch_taken_0x156e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156E88u;
            // 0x156e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e88) {
            ctx->pc = 0x156E98u;
            goto label_156e98;
        }
    }
    ctx->pc = 0x156E90u;
    // 0x156e90: 0xc062b88  jal         func_18AE20
    ctx->pc = 0x156E90u;
    SET_GPR_U32(ctx, 31, 0x156E98u);
    ctx->pc = 0x156E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156E90u;
            // 0x156e94: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE20u;
    if (runtime->hasFunction(0x18AE20u)) {
        auto targetFn = runtime->lookupFunction(0x18AE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E98u; }
        if (ctx->pc != 0x156E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPlayerState_0x18ae20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156E98u; }
        if (ctx->pc != 0x156E98u) { return; }
    }
    ctx->pc = 0x156E98u;
label_156e98:
    // 0x156e98: 0xc05b744  jal         func_16DD10
    ctx->pc = 0x156E98u;
    SET_GPR_U32(ctx, 31, 0x156EA0u);
    ctx->pc = 0x16DD10u;
    if (runtime->hasFunction(0x16DD10u)) {
        auto targetFn = runtime->lookupFunction(0x16DD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EA0u; }
        if (ctx->pc != 0x156EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StageEnemyInit_0x16dd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EA0u; }
        if (ctx->pc != 0x156EA0u) { return; }
    }
    ctx->pc = 0x156EA0u;
    // 0x156ea0: 0xc0521a4  jal         func_148690
    ctx->pc = 0x156EA0u;
    SET_GPR_U32(ctx, 31, 0x156EA8u);
    ctx->pc = 0x148690u;
    if (runtime->hasFunction(0x148690u)) {
        auto targetFn = runtime->lookupFunction(0x148690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EA8u; }
        if (ctx->pc != 0x156EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapInit_0x148690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EA8u; }
        if (ctx->pc != 0x156EA8u) { return; }
    }
    ctx->pc = 0x156EA8u;
    // 0x156ea8: 0xc056e9c  jal         func_15BA70
    ctx->pc = 0x156EA8u;
    SET_GPR_U32(ctx, 31, 0x156EB0u);
    ctx->pc = 0x15BA70u;
    if (runtime->hasFunction(0x15BA70u)) {
        auto targetFn = runtime->lookupFunction(0x15BA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EB0u; }
        if (ctx->pc != 0x156EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameOrderInit_0x15ba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EB0u; }
        if (ctx->pc != 0x156EB0u) { return; }
    }
    ctx->pc = 0x156EB0u;
    // 0x156eb0: 0xc065c84  jal         func_197210
    ctx->pc = 0x156EB0u;
    SET_GPR_U32(ctx, 31, 0x156EB8u);
    ctx->pc = 0x197210u;
    if (runtime->hasFunction(0x197210u)) {
        auto targetFn = runtime->lookupFunction(0x197210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EB8u; }
        if (ctx->pc != 0x156EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemInit_0x197210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EB8u; }
        if (ctx->pc != 0x156EB8u) { return; }
    }
    ctx->pc = 0x156EB8u;
    // 0x156eb8: 0xc053c0c  jal         func_14F030
    ctx->pc = 0x156EB8u;
    SET_GPR_U32(ctx, 31, 0x156EC0u);
    ctx->pc = 0x14F030u;
    if (runtime->hasFunction(0x14F030u)) {
        auto targetFn = runtime->lookupFunction(0x14F030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EC0u; }
        if (ctx->pc != 0x156EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionInit_0x14f030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EC0u; }
        if (ctx->pc != 0x156EC0u) { return; }
    }
    ctx->pc = 0x156EC0u;
    // 0x156ec0: 0xc05bce4  jal         func_16F390
    ctx->pc = 0x156EC0u;
    SET_GPR_U32(ctx, 31, 0x156EC8u);
    ctx->pc = 0x16F390u;
    if (runtime->hasFunction(0x16F390u)) {
        auto targetFn = runtime->lookupFunction(0x16F390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EC8u; }
        if (ctx->pc != 0x156EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleInit_0x16f390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EC8u; }
        if (ctx->pc != 0x156EC8u) { return; }
    }
    ctx->pc = 0x156EC8u;
    // 0x156ec8: 0xc055080  jal         func_154200
    ctx->pc = 0x156EC8u;
    SET_GPR_U32(ctx, 31, 0x156ED0u);
    ctx->pc = 0x154200u;
    if (runtime->hasFunction(0x154200u)) {
        auto targetFn = runtime->lookupFunction(0x154200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ED0u; }
        if (ctx->pc != 0x156ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotInit_0x154200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ED0u; }
        if (ctx->pc != 0x156ED0u) { return; }
    }
    ctx->pc = 0x156ED0u;
    // 0x156ed0: 0xc065710  jal         func_195C40
    ctx->pc = 0x156ED0u;
    SET_GPR_U32(ctx, 31, 0x156ED8u);
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ED8u; }
        if (ctx->pc != 0x156ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotInit_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156ED8u; }
        if (ctx->pc != 0x156ED8u) { return; }
    }
    ctx->pc = 0x156ED8u;
    // 0x156ed8: 0xc07b3c0  jal         func_1ECF00
    ctx->pc = 0x156ED8u;
    SET_GPR_U32(ctx, 31, 0x156EE0u);
    ctx->pc = 0x1ECF00u;
    if (runtime->hasFunction(0x1ECF00u)) {
        auto targetFn = runtime->lookupFunction(0x1ECF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EE0u; }
        if (ctx->pc != 0x156EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipInit_0x1ecf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EE0u; }
        if (ctx->pc != 0x156EE0u) { return; }
    }
    ctx->pc = 0x156EE0u;
    // 0x156ee0: 0xc053ef4  jal         func_14FBD0
    ctx->pc = 0x156EE0u;
    SET_GPR_U32(ctx, 31, 0x156EE8u);
    ctx->pc = 0x14FBD0u;
    if (runtime->hasFunction(0x14FBD0u)) {
        auto targetFn = runtime->lookupFunction(0x14FBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EE8u; }
        if (ctx->pc != 0x156EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CutInInit_0x14fbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EE8u; }
        if (ctx->pc != 0x156EE8u) { return; }
    }
    ctx->pc = 0x156EE8u;
    // 0x156ee8: 0xc0607ac  jal         func_181EB0
    ctx->pc = 0x156EE8u;
    SET_GPR_U32(ctx, 31, 0x156EF0u);
    ctx->pc = 0x181EB0u;
    if (runtime->hasFunction(0x181EB0u)) {
        auto targetFn = runtime->lookupFunction(0x181EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EF0u; }
        if (ctx->pc != 0x156EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderInit_0x181eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EF0u; }
        if (ctx->pc != 0x156EF0u) { return; }
    }
    ctx->pc = 0x156EF0u;
    // 0x156ef0: 0xc0506ec  jal         func_141BB0
    ctx->pc = 0x156EF0u;
    SET_GPR_U32(ctx, 31, 0x156EF8u);
    ctx->pc = 0x141BB0u;
    if (runtime->hasFunction(0x141BB0u)) {
        auto targetFn = runtime->lookupFunction(0x141BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EF8u; }
        if (ctx->pc != 0x156EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsResetFrame_0x141bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156EF8u; }
        if (ctx->pc != 0x156EF8u) { return; }
    }
    ctx->pc = 0x156EF8u;
    // 0x156ef8: 0xc05603c  jal         func_1580F0
    ctx->pc = 0x156EF8u;
    SET_GPR_U32(ctx, 31, 0x156F00u);
    ctx->pc = 0x1580F0u;
    if (runtime->hasFunction(0x1580F0u)) {
        auto targetFn = runtime->lookupFunction(0x1580F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F00u; }
        if (ctx->pc != 0x156F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameManagerInit_0x1580f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F00u; }
        if (ctx->pc != 0x156F00u) { return; }
    }
    ctx->pc = 0x156F00u;
    // 0x156f00: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x156F00u;
    SET_GPR_U32(ctx, 31, 0x156F08u);
    ctx->pc = 0x156F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156F00u;
            // 0x156f04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F08u; }
        if (ctx->pc != 0x156F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F08u; }
        if (ctx->pc != 0x156F08u) { return; }
    }
    ctx->pc = 0x156F08u;
    // 0x156f08: 0xc060718  jal         func_181C60
    ctx->pc = 0x156F08u;
    SET_GPR_U32(ctx, 31, 0x156F10u);
    ctx->pc = 0x156F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156F08u;
            // 0x156f0c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F10u; }
        if (ctx->pc != 0x156F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F10u; }
        if (ctx->pc != 0x156F10u) { return; }
    }
    ctx->pc = 0x156F10u;
    // 0x156f10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156f14: 0x8c223500  lw          $v0, 0x3500($at)
    ctx->pc = 0x156f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13568)));
    // 0x156f18: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x156F18u;
    {
        const bool branch_taken_0x156f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f18) {
            ctx->pc = 0x1571F8u;
            goto label_1571f8;
        }
    }
    ctx->pc = 0x156F20u;
label_156f20:
    // 0x156f20: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x156F20u;
    SET_GPR_U32(ctx, 31, 0x156F28u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F28u; }
        if (ctx->pc != 0x156F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F28u; }
        if (ctx->pc != 0x156F28u) { return; }
    }
    ctx->pc = 0x156F28u;
    // 0x156f28: 0xc055da4  jal         func_157690
    ctx->pc = 0x156F28u;
    SET_GPR_U32(ctx, 31, 0x156F30u);
    ctx->pc = 0x157690u;
    if (runtime->hasFunction(0x157690u)) {
        auto targetFn = runtime->lookupFunction(0x157690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F30u; }
        if (ctx->pc != 0x156F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameManager_0x157690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F30u; }
        if (ctx->pc != 0x156F30u) { return; }
    }
    ctx->pc = 0x156F30u;
    // 0x156f30: 0xc06069c  jal         func_181A70
    ctx->pc = 0x156F30u;
    SET_GPR_U32(ctx, 31, 0x156F38u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F38u; }
        if (ctx->pc != 0x156F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F38u; }
        if (ctx->pc != 0x156F38u) { return; }
    }
    ctx->pc = 0x156F38u;
    // 0x156f38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156f3c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x156f40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156F40u;
    {
        const bool branch_taken_0x156f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f40) {
            ctx->pc = 0x156F50u;
            goto label_156f50;
        }
    }
    ctx->pc = 0x156F48u;
    // 0x156f48: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x156F48u;
    SET_GPR_U32(ctx, 31, 0x156F50u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F50u; }
        if (ctx->pc != 0x156F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F50u; }
        if (ctx->pc != 0x156F50u) { return; }
    }
    ctx->pc = 0x156F50u;
label_156f50:
    // 0x156f50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156f54: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x156f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x156f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156F58u;
    {
        const bool branch_taken_0x156f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f58) {
            ctx->pc = 0x156F68u;
            goto label_156f68;
        }
    }
    ctx->pc = 0x156F60u;
    // 0x156f60: 0xc053d74  jal         func_14F5D0
    ctx->pc = 0x156F60u;
    SET_GPR_U32(ctx, 31, 0x156F68u);
    ctx->pc = 0x14F5D0u;
    if (runtime->hasFunction(0x14F5D0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F68u; }
        if (ctx->pc != 0x156F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CutInMove_0x14f5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F68u; }
        if (ctx->pc != 0x156F68u) { return; }
    }
    ctx->pc = 0x156F68u;
label_156f68:
    // 0x156f68: 0xc053d30  jal         func_14F4C0
    ctx->pc = 0x156F68u;
    SET_GPR_U32(ctx, 31, 0x156F70u);
    ctx->pc = 0x14F4C0u;
    if (runtime->hasFunction(0x14F4C0u)) {
        auto targetFn = runtime->lookupFunction(0x14F4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F70u; }
        if (ctx->pc != 0x156F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CutInDraw_0x14f4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F70u; }
        if (ctx->pc != 0x156F70u) { return; }
    }
    ctx->pc = 0x156F70u;
    // 0x156f70: 0xc056eb8  jal         func_15BAE0
    ctx->pc = 0x156F70u;
    SET_GPR_U32(ctx, 31, 0x156F78u);
    ctx->pc = 0x15BAE0u;
    if (runtime->hasFunction(0x15BAE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F78u; }
        if (ctx->pc != 0x156F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setNeraiPlayer_0x15bae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F78u; }
        if (ctx->pc != 0x156F78u) { return; }
    }
    ctx->pc = 0x156F78u;
    // 0x156f78: 0xc053cc0  jal         func_14F300
    ctx->pc = 0x156F78u;
    SET_GPR_U32(ctx, 31, 0x156F80u);
    ctx->pc = 0x14F300u;
    if (runtime->hasFunction(0x14F300u)) {
        auto targetFn = runtime->lookupFunction(0x14F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F80u; }
        if (ctx->pc != 0x156F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionFree_All_0x14f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F80u; }
        if (ctx->pc != 0x156F80u) { return; }
    }
    ctx->pc = 0x156F80u;
    // 0x156f80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156f84: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x156f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x156f88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156F88u;
    {
        const bool branch_taken_0x156f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f88) {
            ctx->pc = 0x156F98u;
            goto label_156f98;
        }
    }
    ctx->pc = 0x156F90u;
    // 0x156f90: 0xc059eb4  jal         func_167AD0
    ctx->pc = 0x156F90u;
    SET_GPR_U32(ctx, 31, 0x156F98u);
    ctx->pc = 0x167AD0u;
    if (runtime->hasFunction(0x167AD0u)) {
        auto targetFn = runtime->lookupFunction(0x167AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F98u; }
        if (ctx->pc != 0x156F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugCamraMoveFunc_0x167ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156F98u; }
        if (ctx->pc != 0x156F98u) { return; }
    }
    ctx->pc = 0x156F98u;
label_156f98:
    // 0x156f98: 0xc056b14  jal         func_15AC50
    ctx->pc = 0x156F98u;
    SET_GPR_U32(ctx, 31, 0x156FA0u);
    ctx->pc = 0x15AC50u;
    if (runtime->hasFunction(0x15AC50u)) {
        auto targetFn = runtime->lookupFunction(0x15AC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FA0u; }
        if (ctx->pc != 0x156FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameInfomationDisp_0x15ac50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FA0u; }
        if (ctx->pc != 0x156FA0u) { return; }
    }
    ctx->pc = 0x156FA0u;
    // 0x156fa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156fa4: 0x8c223530  lw          $v0, 0x3530($at)
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x156fa8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x156FA8u;
    {
        const bool branch_taken_0x156fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FA8u;
            // 0x156fac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fa8) {
            ctx->pc = 0x156FE8u;
            goto label_156fe8;
        }
    }
    ctx->pc = 0x156FB0u;
    // 0x156fb0: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x156FB0u;
    SET_GPR_U32(ctx, 31, 0x156FB8u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FB8u; }
        if (ctx->pc != 0x156FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FB8u; }
        if (ctx->pc != 0x156FB8u) { return; }
    }
    ctx->pc = 0x156FB8u;
    // 0x156fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x156fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fbc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156fc0: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x156fc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156FC4u;
    {
        const bool branch_taken_0x156fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FC4u;
            // 0x156fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fc4) {
            ctx->pc = 0x156FD8u;
            goto label_156fd8;
        }
    }
    ctx->pc = 0x156FCCu;
    // 0x156fcc: 0xc062c6c  jal         func_18B1B0
    ctx->pc = 0x156FCCu;
    SET_GPR_U32(ctx, 31, 0x156FD4u);
    ctx->pc = 0x18B1B0u;
    if (runtime->hasFunction(0x18B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FD4u; }
        if (ctx->pc != 0x156FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerMoveFunction_0x18b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FD4u; }
        if (ctx->pc != 0x156FD4u) { return; }
    }
    ctx->pc = 0x156FD4u;
    // 0x156fd4: 0x0  nop
    ctx->pc = 0x156fd4u;
    // NOP
label_156fd8:
    // 0x156fd8: 0xc062c50  jal         func_18B140
    ctx->pc = 0x156FD8u;
    SET_GPR_U32(ctx, 31, 0x156FE0u);
    ctx->pc = 0x156FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156FD8u;
            // 0x156fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B140u;
    if (runtime->hasFunction(0x18B140u)) {
        auto targetFn = runtime->lookupFunction(0x18B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FE0u; }
        if (ctx->pc != 0x156FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerRenderFunction_0x18b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FE0u; }
        if (ctx->pc != 0x156FE0u) { return; }
    }
    ctx->pc = 0x156FE0u;
    // 0x156fe0: 0xc062b90  jal         func_18AE40
    ctx->pc = 0x156FE0u;
    SET_GPR_U32(ctx, 31, 0x156FE8u);
    ctx->pc = 0x156FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156FE0u;
            // 0x156fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE40u;
    if (runtime->hasFunction(0x18AE40u)) {
        auto targetFn = runtime->lookupFunction(0x18AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FE8u; }
        if (ctx->pc != 0x156FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerScoreRenderFunction_0x18ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156FE8u; }
        if (ctx->pc != 0x156FE8u) { return; }
    }
    ctx->pc = 0x156FE8u;
label_156fe8:
    // 0x156fe8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156fec: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x156fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x156ff0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x156FF0u;
    {
        const bool branch_taken_0x156ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156FF0u;
            // 0x156ff4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156ff0) {
            ctx->pc = 0x157030u;
            goto label_157030;
        }
    }
    ctx->pc = 0x156FF8u;
    // 0x156ff8: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x156FF8u;
    SET_GPR_U32(ctx, 31, 0x157000u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157000u; }
        if (ctx->pc != 0x157000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157000u; }
        if (ctx->pc != 0x157000u) { return; }
    }
    ctx->pc = 0x157000u;
    // 0x157000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x157000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157004: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157008: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x15700c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15700Cu;
    {
        const bool branch_taken_0x15700c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15700Cu;
            // 0x157010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15700c) {
            ctx->pc = 0x157020u;
            goto label_157020;
        }
    }
    ctx->pc = 0x157014u;
    // 0x157014: 0xc062c6c  jal         func_18B1B0
    ctx->pc = 0x157014u;
    SET_GPR_U32(ctx, 31, 0x15701Cu);
    ctx->pc = 0x18B1B0u;
    if (runtime->hasFunction(0x18B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15701Cu; }
        if (ctx->pc != 0x15701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerMoveFunction_0x18b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15701Cu; }
        if (ctx->pc != 0x15701Cu) { return; }
    }
    ctx->pc = 0x15701Cu;
    // 0x15701c: 0x0  nop
    ctx->pc = 0x15701cu;
    // NOP
label_157020:
    // 0x157020: 0xc062c50  jal         func_18B140
    ctx->pc = 0x157020u;
    SET_GPR_U32(ctx, 31, 0x157028u);
    ctx->pc = 0x157024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157020u;
            // 0x157024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B140u;
    if (runtime->hasFunction(0x18B140u)) {
        auto targetFn = runtime->lookupFunction(0x18B140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157028u; }
        if (ctx->pc != 0x157028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerRenderFunction_0x18b140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157028u; }
        if (ctx->pc != 0x157028u) { return; }
    }
    ctx->pc = 0x157028u;
    // 0x157028: 0xc062b90  jal         func_18AE40
    ctx->pc = 0x157028u;
    SET_GPR_U32(ctx, 31, 0x157030u);
    ctx->pc = 0x15702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157028u;
            // 0x15702c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE40u;
    if (runtime->hasFunction(0x18AE40u)) {
        auto targetFn = runtime->lookupFunction(0x18AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157030u; }
        if (ctx->pc != 0x157030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayerScoreRenderFunction_0x18ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157030u; }
        if (ctx->pc != 0x157030u) { return; }
    }
    ctx->pc = 0x157030u;
label_157030:
    // 0x157030: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157034: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157038u;
    {
        const bool branch_taken_0x157038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157038) {
            ctx->pc = 0x157048u;
            goto label_157048;
        }
    }
    ctx->pc = 0x157040u;
    // 0x157040: 0xc0506f4  jal         func_141BD0
    ctx->pc = 0x157040u;
    SET_GPR_U32(ctx, 31, 0x157048u);
    ctx->pc = 0x141BD0u;
    if (runtime->hasFunction(0x141BD0u)) {
        auto targetFn = runtime->lookupFunction(0x141BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157048u; }
        if (ctx->pc != 0x157048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFrameAdd_0x141bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157048u; }
        if (ctx->pc != 0x157048u) { return; }
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15704c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x15704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157050u;
    {
        const bool branch_taken_0x157050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157050) {
            ctx->pc = 0x157060u;
            goto label_157060;
        }
    }
    ctx->pc = 0x157058u;
    // 0x157058: 0xc052118  jal         func_148460
    ctx->pc = 0x157058u;
    SET_GPR_U32(ctx, 31, 0x157060u);
    ctx->pc = 0x148460u;
    if (runtime->hasFunction(0x148460u)) {
        auto targetFn = runtime->lookupFunction(0x148460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157060u; }
        if (ctx->pc != 0x157060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapGenerate_0x148460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157060u; }
        if (ctx->pc != 0x157060u) { return; }
    }
    ctx->pc = 0x157060u;
label_157060:
    // 0x157060: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157064: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x157064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157068u;
    {
        const bool branch_taken_0x157068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157068) {
            ctx->pc = 0x157078u;
            goto label_157078;
        }
    }
    ctx->pc = 0x157070u;
    // 0x157070: 0xc050c38  jal         func_1430E0
    ctx->pc = 0x157070u;
    SET_GPR_U32(ctx, 31, 0x157078u);
    ctx->pc = 0x1430E0u;
    if (runtime->hasFunction(0x1430E0u)) {
        auto targetFn = runtime->lookupFunction(0x1430E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157078u; }
        if (ctx->pc != 0x157078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapMoveFunction_0x1430e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157078u; }
        if (ctx->pc != 0x157078u) { return; }
    }
    ctx->pc = 0x157078u;
label_157078:
    // 0x157078: 0xc0520f8  jal         func_1483E0
    ctx->pc = 0x157078u;
    SET_GPR_U32(ctx, 31, 0x157080u);
    ctx->pc = 0x1483E0u;
    if (runtime->hasFunction(0x1483E0u)) {
        auto targetFn = runtime->lookupFunction(0x1483E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157080u; }
        if (ctx->pc != 0x157080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapRenderFunction_0x1483e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157080u; }
        if (ctx->pc != 0x157080u) { return; }
    }
    ctx->pc = 0x157080u;
    // 0x157080: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157084: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x157084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157088u;
    {
        const bool branch_taken_0x157088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157088) {
            ctx->pc = 0x157098u;
            goto label_157098;
        }
    }
    ctx->pc = 0x157090u;
    // 0x157090: 0xc05a038  jal         func_1680E0
    ctx->pc = 0x157090u;
    SET_GPR_U32(ctx, 31, 0x157098u);
    ctx->pc = 0x1680E0u;
    if (runtime->hasFunction(0x1680E0u)) {
        auto targetFn = runtime->lookupFunction(0x1680E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157098u; }
        if (ctx->pc != 0x157098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugEnemyGenerate_0x1680e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157098u; }
        if (ctx->pc != 0x157098u) { return; }
    }
    ctx->pc = 0x157098u;
label_157098:
    // 0x157098: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15709c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x15709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1570a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570A0u;
    {
        const bool branch_taken_0x1570a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1570a0) {
            ctx->pc = 0x1570B0u;
            goto label_1570b0;
        }
    }
    ctx->pc = 0x1570A8u;
    // 0x1570a8: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x1570A8u;
    SET_GPR_U32(ctx, 31, 0x1570B0u);
    ctx->pc = 0x16E820u;
    if (runtime->hasFunction(0x16E820u)) {
        auto targetFn = runtime->lookupFunction(0x16E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570B0u; }
        if (ctx->pc != 0x1570B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyMoveFunction_0x16e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570B0u; }
        if (ctx->pc != 0x1570B0u) { return; }
    }
    ctx->pc = 0x1570B0u;
label_1570b0:
    // 0x1570b0: 0xc05b9f0  jal         func_16E7C0
    ctx->pc = 0x1570B0u;
    SET_GPR_U32(ctx, 31, 0x1570B8u);
    ctx->pc = 0x16E7C0u;
    if (runtime->hasFunction(0x16E7C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570B8u; }
        if (ctx->pc != 0x1570B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyRenderFunction_0x16e7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570B8u; }
        if (ctx->pc != 0x1570B8u) { return; }
    }
    ctx->pc = 0x1570B8u;
    // 0x1570b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1570b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1570bc: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x1570bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1570c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570C0u;
    {
        const bool branch_taken_0x1570c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1570c0) {
            ctx->pc = 0x1570D0u;
            goto label_1570d0;
        }
    }
    ctx->pc = 0x1570C8u;
    // 0x1570c8: 0xc065088  jal         func_194220
    ctx->pc = 0x1570C8u;
    SET_GPR_U32(ctx, 31, 0x1570D0u);
    ctx->pc = 0x194220u;
    if (runtime->hasFunction(0x194220u)) {
        auto targetFn = runtime->lookupFunction(0x194220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570D0u; }
        if (ctx->pc != 0x1570D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotMoveFunction_0x194220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570D0u; }
        if (ctx->pc != 0x1570D0u) { return; }
    }
    ctx->pc = 0x1570D0u;
label_1570d0:
    // 0x1570d0: 0xc063e74  jal         func_18F9D0
    ctx->pc = 0x1570D0u;
    SET_GPR_U32(ctx, 31, 0x1570D8u);
    ctx->pc = 0x18F9D0u;
    if (runtime->hasFunction(0x18F9D0u)) {
        auto targetFn = runtime->lookupFunction(0x18F9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570D8u; }
        if (ctx->pc != 0x1570D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotRenderFunction_0x18f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570D8u; }
        if (ctx->pc != 0x1570D8u) { return; }
    }
    ctx->pc = 0x1570D8u;
    // 0x1570d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1570d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1570dc: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x1570dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1570e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1570E0u;
    {
        const bool branch_taken_0x1570e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1570e0) {
            ctx->pc = 0x1570F0u;
            goto label_1570f0;
        }
    }
    ctx->pc = 0x1570E8u;
    // 0x1570e8: 0xc07b2b0  jal         func_1ECAC0
    ctx->pc = 0x1570E8u;
    SET_GPR_U32(ctx, 31, 0x1570F0u);
    ctx->pc = 0x1ECAC0u;
    if (runtime->hasFunction(0x1ECAC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570F0u; }
        if (ctx->pc != 0x1570F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipMoveFunction_0x1ecac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570F0u; }
        if (ctx->pc != 0x1570F0u) { return; }
    }
    ctx->pc = 0x1570F0u;
label_1570f0:
    // 0x1570f0: 0xc07b2c4  jal         func_1ECB10
    ctx->pc = 0x1570F0u;
    SET_GPR_U32(ctx, 31, 0x1570F8u);
    ctx->pc = 0x1ECB10u;
    if (runtime->hasFunction(0x1ECB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ECB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570F8u; }
        if (ctx->pc != 0x1570F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipRenderFunction_0x1ecb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1570F8u; }
        if (ctx->pc != 0x1570F8u) { return; }
    }
    ctx->pc = 0x1570F8u;
    // 0x1570f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1570f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1570fc: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x1570fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157100u;
    {
        const bool branch_taken_0x157100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157100) {
            ctx->pc = 0x157110u;
            goto label_157110;
        }
    }
    ctx->pc = 0x157108u;
    // 0x157108: 0xc065970  jal         func_1965C0
    ctx->pc = 0x157108u;
    SET_GPR_U32(ctx, 31, 0x157110u);
    ctx->pc = 0x1965C0u;
    if (runtime->hasFunction(0x1965C0u)) {
        auto targetFn = runtime->lookupFunction(0x1965C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157110u; }
        if (ctx->pc != 0x157110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemMoveFunction_0x1965c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157110u; }
        if (ctx->pc != 0x157110u) { return; }
    }
    ctx->pc = 0x157110u;
label_157110:
    // 0x157110: 0xc065984  jal         func_196610
    ctx->pc = 0x157110u;
    SET_GPR_U32(ctx, 31, 0x157118u);
    ctx->pc = 0x196610u;
    if (runtime->hasFunction(0x196610u)) {
        auto targetFn = runtime->lookupFunction(0x196610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157118u; }
        if (ctx->pc != 0x157118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemRenderFunction_0x196610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157118u; }
        if (ctx->pc != 0x157118u) { return; }
    }
    ctx->pc = 0x157118u;
    // 0x157118: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15711c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x15711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157120u;
    {
        const bool branch_taken_0x157120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157120) {
            ctx->pc = 0x157130u;
            goto label_157130;
        }
    }
    ctx->pc = 0x157128u;
    // 0x157128: 0xc0546d4  jal         func_151B50
    ctx->pc = 0x157128u;
    SET_GPR_U32(ctx, 31, 0x157130u);
    ctx->pc = 0x151B50u;
    if (runtime->hasFunction(0x151B50u)) {
        auto targetFn = runtime->lookupFunction(0x151B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157130u; }
        if (ctx->pc != 0x157130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotMoveFunction_0x151b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157130u; }
        if (ctx->pc != 0x157130u) { return; }
    }
    ctx->pc = 0x157130u;
label_157130:
    // 0x157130: 0xc053f48  jal         func_14FD20
    ctx->pc = 0x157130u;
    SET_GPR_U32(ctx, 31, 0x157138u);
    ctx->pc = 0x14FD20u;
    if (runtime->hasFunction(0x14FD20u)) {
        auto targetFn = runtime->lookupFunction(0x14FD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157138u; }
        if (ctx->pc != 0x157138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotRenderFunction_0x14fd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157138u; }
        if (ctx->pc != 0x157138u) { return; }
    }
    ctx->pc = 0x157138u;
    // 0x157138: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15713c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x15713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157140u;
    {
        const bool branch_taken_0x157140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157140) {
            ctx->pc = 0x157150u;
            goto label_157150;
        }
    }
    ctx->pc = 0x157148u;
    // 0x157148: 0xc076cdc  jal         func_1DB370
    ctx->pc = 0x157148u;
    SET_GPR_U32(ctx, 31, 0x157150u);
    ctx->pc = 0x1DB370u;
    if (runtime->hasFunction(0x1DB370u)) {
        auto targetFn = runtime->lookupFunction(0x1DB370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157150u; }
        if (ctx->pc != 0x157150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PointsMoveFunction_0x1db370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157150u; }
        if (ctx->pc != 0x157150u) { return; }
    }
    ctx->pc = 0x157150u;
label_157150:
    // 0x157150: 0xc076cf0  jal         func_1DB3C0
    ctx->pc = 0x157150u;
    SET_GPR_U32(ctx, 31, 0x157158u);
    ctx->pc = 0x1DB3C0u;
    if (runtime->hasFunction(0x1DB3C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157158u; }
        if (ctx->pc != 0x157158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PointsRenderFunction_0x1db3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157158u; }
        if (ctx->pc != 0x157158u) { return; }
    }
    ctx->pc = 0x157158u;
    // 0x157158: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15715c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x15715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157160u;
    {
        const bool branch_taken_0x157160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157160) {
            ctx->pc = 0x157170u;
            goto label_157170;
        }
    }
    ctx->pc = 0x157168u;
    // 0x157168: 0xc053a9c  jal         func_14EA70
    ctx->pc = 0x157168u;
    SET_GPR_U32(ctx, 31, 0x157170u);
    ctx->pc = 0x14EA70u;
    if (runtime->hasFunction(0x14EA70u)) {
        auto targetFn = runtime->lookupFunction(0x14EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157170u; }
        if (ctx->pc != 0x157170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionMoveFunction_0x14ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157170u; }
        if (ctx->pc != 0x157170u) { return; }
    }
    ctx->pc = 0x157170u;
label_157170:
    // 0x157170: 0xc053ab0  jal         func_14EAC0
    ctx->pc = 0x157170u;
    SET_GPR_U32(ctx, 31, 0x157178u);
    ctx->pc = 0x14EAC0u;
    if (runtime->hasFunction(0x14EAC0u)) {
        auto targetFn = runtime->lookupFunction(0x14EAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157178u; }
        if (ctx->pc != 0x157178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionRenderFunction_0x14eac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157178u; }
        if (ctx->pc != 0x157178u) { return; }
    }
    ctx->pc = 0x157178u;
    // 0x157178: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15717c: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x15717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x157180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157180u;
    {
        const bool branch_taken_0x157180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157180) {
            ctx->pc = 0x157190u;
            goto label_157190;
        }
    }
    ctx->pc = 0x157188u;
    // 0x157188: 0xc05bbc8  jal         func_16EF20
    ctx->pc = 0x157188u;
    SET_GPR_U32(ctx, 31, 0x157190u);
    ctx->pc = 0x16EF20u;
    if (runtime->hasFunction(0x16EF20u)) {
        auto targetFn = runtime->lookupFunction(0x16EF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157190u; }
        if (ctx->pc != 0x157190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleMoveFunction_0x16ef20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157190u; }
        if (ctx->pc != 0x157190u) { return; }
    }
    ctx->pc = 0x157190u;
label_157190:
    // 0x157190: 0xc05bbdc  jal         func_16EF70
    ctx->pc = 0x157190u;
    SET_GPR_U32(ctx, 31, 0x157198u);
    ctx->pc = 0x16EF70u;
    if (runtime->hasFunction(0x16EF70u)) {
        auto targetFn = runtime->lookupFunction(0x16EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157198u; }
        if (ctx->pc != 0x157198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleRenderFunction_0x16ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157198u; }
        if (ctx->pc != 0x157198u) { return; }
    }
    ctx->pc = 0x157198u;
    // 0x157198: 0xc053c44  jal         func_14F110
    ctx->pc = 0x157198u;
    SET_GPR_U32(ctx, 31, 0x1571A0u);
    ctx->pc = 0x14F110u;
    if (runtime->hasFunction(0x14F110u)) {
        auto targetFn = runtime->lookupFunction(0x14F110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571A0u; }
        if (ctx->pc != 0x1571A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionFunction_0x14f110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571A0u; }
        if (ctx->pc != 0x1571A0u) { return; }
    }
    ctx->pc = 0x1571A0u;
    // 0x1571a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1571a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1571a4: 0x8c223508  lw          $v0, 0x3508($at)
    ctx->pc = 0x1571a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13576)));
    // 0x1571a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1571A8u;
    {
        const bool branch_taken_0x1571a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571a8) {
            ctx->pc = 0x1571C8u;
            goto label_1571c8;
        }
    }
    ctx->pc = 0x1571B0u;
    // 0x1571b0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1571B0u;
    {
        const bool branch_taken_0x1571b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1571b0) {
            ctx->pc = 0x1571C8u;
            goto label_1571c8;
        }
    }
    ctx->pc = 0x1571B8u;
    // 0x1571b8: 0xc05cd1c  jal         func_173470
    ctx->pc = 0x1571B8u;
    SET_GPR_U32(ctx, 31, 0x1571C0u);
    ctx->pc = 0x173470u;
    if (runtime->hasFunction(0x173470u)) {
        auto targetFn = runtime->lookupFunction(0x173470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571C0u; }
        if (ctx->pc != 0x1571C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_Pause_0x173470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571C0u; }
        if (ctx->pc != 0x1571C0u) { return; }
    }
    ctx->pc = 0x1571C0u;
    // 0x1571c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1571C0u;
    {
        const bool branch_taken_0x1571c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1571C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1571C0u;
            // 0x1571c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1571c0) {
            ctx->pc = 0x1571E8u;
            goto label_1571e8;
        }
    }
    ctx->pc = 0x1571C8u;
label_1571c8:
    // 0x1571c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1571C8u;
    {
        const bool branch_taken_0x1571c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1571c8) {
            ctx->pc = 0x1571E8u;
            goto label_1571e8;
        }
    }
    ctx->pc = 0x1571D0u;
    // 0x1571d0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1571D0u;
    {
        const bool branch_taken_0x1571d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1571d0) {
            ctx->pc = 0x1571E8u;
            goto label_1571e8;
        }
    }
    ctx->pc = 0x1571D8u;
    // 0x1571d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1571D8u;
    SET_GPR_U32(ctx, 31, 0x1571E0u);
    ctx->pc = 0x173440u;
    if (runtime->hasFunction(0x173440u)) {
        auto targetFn = runtime->lookupFunction(0x173440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571E0u; }
        if (ctx->pc != 0x1571E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_Resume_0x173440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1571E0u; }
        if (ctx->pc != 0x1571E0u) { return; }
    }
    ctx->pc = 0x1571E0u;
    // 0x1571e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1571e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571e4: 0x0  nop
    ctx->pc = 0x1571e4u;
    // NOP
label_1571e8:
    // 0x1571e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1571e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1571ec: 0x8c223500  lw          $v0, 0x3500($at)
    ctx->pc = 0x1571ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13568)));
    // 0x1571f0: 0x1440ff4b  bnez        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x1571F0u;
    {
        const bool branch_taken_0x1571f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1571f0) {
            ctx->pc = 0x156F20u;
            goto label_156f20;
        }
    }
    ctx->pc = 0x1571F8u;
label_1571f8:
    // 0x1571f8: 0xc055118  jal         func_154460
    ctx->pc = 0x1571F8u;
    SET_GPR_U32(ctx, 31, 0x157200u);
    ctx->pc = 0x1571FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1571F8u;
            // 0x1571fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154460u;
    if (runtime->hasFunction(0x154460u)) {
        auto targetFn = runtime->lookupFunction(0x154460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157200u; }
        if (ctx->pc != 0x157200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShockStop_0x154460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157200u; }
        if (ctx->pc != 0x157200u) { return; }
    }
    ctx->pc = 0x157200u;
    // 0x157200: 0xc055118  jal         func_154460
    ctx->pc = 0x157200u;
    SET_GPR_U32(ctx, 31, 0x157208u);
    ctx->pc = 0x157204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157200u;
            // 0x157204: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154460u;
    if (runtime->hasFunction(0x154460u)) {
        auto targetFn = runtime->lookupFunction(0x154460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157208u; }
        if (ctx->pc != 0x157208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShockStop_0x154460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157208u; }
        if (ctx->pc != 0x157208u) { return; }
    }
    ctx->pc = 0x157208u;
    // 0x157208: 0xc05cff0  jal         func_173FC0
    ctx->pc = 0x157208u;
    SET_GPR_U32(ctx, 31, 0x157210u);
    ctx->pc = 0x173FC0u;
    if (runtime->hasFunction(0x173FC0u)) {
        auto targetFn = runtime->lookupFunction(0x173FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157210u; }
        if (ctx->pc != 0x157210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stop_bgm_0x173fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157210u; }
        if (ctx->pc != 0x157210u) { return; }
    }
    ctx->pc = 0x157210u;
    // 0x157210: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x157210u;
    SET_GPR_U32(ctx, 31, 0x157218u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157218u; }
        if (ctx->pc != 0x157218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157218u; }
        if (ctx->pc != 0x157218u) { return; }
    }
    ctx->pc = 0x157218u;
    // 0x157218: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x157218u;
    SET_GPR_U32(ctx, 31, 0x157220u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157220u; }
        if (ctx->pc != 0x157220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157220u; }
        if (ctx->pc != 0x157220u) { return; }
    }
    ctx->pc = 0x157220u;
    // 0x157220: 0xc065c48  jal         func_197120
    ctx->pc = 0x157220u;
    SET_GPR_U32(ctx, 31, 0x157228u);
    ctx->pc = 0x197120u;
    if (runtime->hasFunction(0x197120u)) {
        auto targetFn = runtime->lookupFunction(0x197120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157228u; }
        if (ctx->pc != 0x157228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemUnInit_0x197120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157228u; }
        if (ctx->pc != 0x157228u) { return; }
    }
    ctx->pc = 0x157228u;
    // 0x157228: 0xc053bd0  jal         func_14EF40
    ctx->pc = 0x157228u;
    SET_GPR_U32(ctx, 31, 0x157230u);
    ctx->pc = 0x14EF40u;
    if (runtime->hasFunction(0x14EF40u)) {
        auto targetFn = runtime->lookupFunction(0x14EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157230u; }
        if (ctx->pc != 0x157230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionUnInit_0x14ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157230u; }
        if (ctx->pc != 0x157230u) { return; }
    }
    ctx->pc = 0x157230u;
    // 0x157230: 0xc076df8  jal         func_1DB7E0
    ctx->pc = 0x157230u;
    SET_GPR_U32(ctx, 31, 0x157238u);
    ctx->pc = 0x1DB7E0u;
    if (runtime->hasFunction(0x1DB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157238u; }
        if (ctx->pc != 0x157238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PointsUnInit_0x1db7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157238u; }
        if (ctx->pc != 0x157238u) { return; }
    }
    ctx->pc = 0x157238u;
    // 0x157238: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x157238u;
    SET_GPR_U32(ctx, 31, 0x157240u);
    ctx->pc = 0x16F2A0u;
    if (runtime->hasFunction(0x16F2A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157240u; }
        if (ctx->pc != 0x157240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleUnInit_0x16f2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157240u; }
        if (ctx->pc != 0x157240u) { return; }
    }
    ctx->pc = 0x157240u;
    // 0x157240: 0xc05b9dc  jal         func_16E770
    ctx->pc = 0x157240u;
    SET_GPR_U32(ctx, 31, 0x157248u);
    ctx->pc = 0x16E770u;
    if (runtime->hasFunction(0x16E770u)) {
        auto targetFn = runtime->lookupFunction(0x16E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157248u; }
        if (ctx->pc != 0x157248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyUnInit_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157248u; }
        if (ctx->pc != 0x157248u) { return; }
    }
    ctx->pc = 0x157248u;
    // 0x157248: 0xc0656d4  jal         func_195B50
    ctx->pc = 0x157248u;
    SET_GPR_U32(ctx, 31, 0x157250u);
    ctx->pc = 0x195B50u;
    if (runtime->hasFunction(0x195B50u)) {
        auto targetFn = runtime->lookupFunction(0x195B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157250u; }
        if (ctx->pc != 0x157250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotUnInit_0x195b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157250u; }
        if (ctx->pc != 0x157250u) { return; }
    }
    ctx->pc = 0x157250u;
    // 0x157250: 0xc07b384  jal         func_1ECE10
    ctx->pc = 0x157250u;
    SET_GPR_U32(ctx, 31, 0x157258u);
    ctx->pc = 0x1ECE10u;
    if (runtime->hasFunction(0x1ECE10u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157258u; }
        if (ctx->pc != 0x157258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipUnInit_0x1ece10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157258u; }
        if (ctx->pc != 0x157258u) { return; }
    }
    ctx->pc = 0x157258u;
    // 0x157258: 0xc052150  jal         func_148540
    ctx->pc = 0x157258u;
    SET_GPR_U32(ctx, 31, 0x157260u);
    ctx->pc = 0x148540u;
    if (runtime->hasFunction(0x148540u)) {
        auto targetFn = runtime->lookupFunction(0x148540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157260u; }
        if (ctx->pc != 0x157260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapUnInit_0x148540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157260u; }
        if (ctx->pc != 0x157260u) { return; }
    }
    ctx->pc = 0x157260u;
    // 0x157260: 0xc05b708  jal         func_16DC20
    ctx->pc = 0x157260u;
    SET_GPR_U32(ctx, 31, 0x157268u);
    ctx->pc = 0x16DC20u;
    if (runtime->hasFunction(0x16DC20u)) {
        auto targetFn = runtime->lookupFunction(0x16DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157268u; }
        if (ctx->pc != 0x157268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StageEnemyUnInit_0x16dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157268u; }
        if (ctx->pc != 0x157268u) { return; }
    }
    ctx->pc = 0x157268u;
    // 0x157268: 0xc053f34  jal         func_14FCD0
    ctx->pc = 0x157268u;
    SET_GPR_U32(ctx, 31, 0x157270u);
    ctx->pc = 0x14FCD0u;
    if (runtime->hasFunction(0x14FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x14FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157270u; }
        if (ctx->pc != 0x157270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotUnInit_0x14fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157270u; }
        if (ctx->pc != 0x157270u) { return; }
    }
    ctx->pc = 0x157270u;
    // 0x157270: 0xc056f7c  jal         func_15BDF0
    ctx->pc = 0x157270u;
    SET_GPR_U32(ctx, 31, 0x157278u);
    ctx->pc = 0x15BDF0u;
    if (runtime->hasFunction(0x15BDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157278u; }
        if (ctx->pc != 0x157278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getGameMode_0x15bdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157278u; }
        if (ctx->pc != 0x157278u) { return; }
    }
    ctx->pc = 0x157278u;
    // 0x157278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15727c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15727Cu;
    {
        const bool branch_taken_0x15727c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15727c) {
            ctx->pc = 0x157298u;
            goto label_157298;
        }
    }
    ctx->pc = 0x157284u;
    // 0x157284: 0xc063700  jal         func_18DC00
    ctx->pc = 0x157284u;
    SET_GPR_U32(ctx, 31, 0x15728Cu);
    ctx->pc = 0x18DC00u;
    if (runtime->hasFunction(0x18DC00u)) {
        auto targetFn = runtime->lookupFunction(0x18DC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15728Cu; }
        if (ctx->pc != 0x15728Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiUnInit_0x18dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15728Cu; }
        if (ctx->pc != 0x15728Cu) { return; }
    }
    ctx->pc = 0x15728Cu;
    // 0x15728c: 0x1000feb2  b           . + 4 + (-0x14E << 2)
    ctx->pc = 0x15728Cu;
    {
        const bool branch_taken_0x15728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15728c) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x157294u;
    // 0x157294: 0x0  nop
    ctx->pc = 0x157294u;
    // NOP
label_157298:
    // 0x157298: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15729c: 0x8c222c40  lw          $v0, 0x2C40($at)
    ctx->pc = 0x15729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11328)));
    // 0x1572a0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1572A0u;
    {
        const bool branch_taken_0x1572a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1572A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1572A0u;
            // 0x1572a4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1572a0) {
            ctx->pc = 0x157310u;
            goto label_157310;
        }
    }
    ctx->pc = 0x1572A8u;
    // 0x1572a8: 0xc055cdc  jal         func_157370
    ctx->pc = 0x1572A8u;
    SET_GPR_U32(ctx, 31, 0x1572B0u);
    ctx->pc = 0x1572ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1572A8u;
            // 0x1572ac: 0xac202c78  sw          $zero, 0x2C78($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157370u;
    if (runtime->hasFunction(0x157370u)) {
        auto targetFn = runtime->lookupFunction(0x157370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572B0u; }
        if (ctx->pc != 0x1572B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextStage_0x157370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572B0u; }
        if (ctx->pc != 0x1572B0u) { return; }
    }
    ctx->pc = 0x1572B0u;
    // 0x1572b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1572b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1572b4: 0xac223514  sw          $v0, 0x3514($at)
    ctx->pc = 0x1572b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13588), GPR_U32(ctx, 2));
    // 0x1572b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1572bc: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1572bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1572c0: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x1572c4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1572C4u;
    {
        const bool branch_taken_0x1572c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1572c4) {
            ctx->pc = 0x157310u;
            goto label_157310;
        }
    }
    ctx->pc = 0x1572CCu;
    // 0x1572cc: 0xc0793ec  jal         func_1E4FB0
    ctx->pc = 0x1572CCu;
    SET_GPR_U32(ctx, 31, 0x1572D4u);
    ctx->pc = 0x1E4FB0u;
    if (runtime->hasFunction(0x1E4FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572D4u; }
        if (ctx->pc != 0x1572D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Ending_0x1e4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572D4u; }
        if (ctx->pc != 0x1572D4u) { return; }
    }
    ctx->pc = 0x1572D4u;
    // 0x1572d4: 0xc066b38  jal         func_19ACE0
    ctx->pc = 0x1572D4u;
    SET_GPR_U32(ctx, 31, 0x1572DCu);
    ctx->pc = 0x19ACE0u;
    if (runtime->hasFunction(0x19ACE0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572DCu; }
        if (ctx->pc != 0x1572DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StaffRoll_0x19ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572DCu; }
        if (ctx->pc != 0x1572DCu) { return; }
    }
    ctx->pc = 0x1572DCu;
    // 0x1572dc: 0xc063700  jal         func_18DC00
    ctx->pc = 0x1572DCu;
    SET_GPR_U32(ctx, 31, 0x1572E4u);
    ctx->pc = 0x18DC00u;
    if (runtime->hasFunction(0x18DC00u)) {
        auto targetFn = runtime->lookupFunction(0x18DC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572E4u; }
        if (ctx->pc != 0x1572E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiUnInit_0x18dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572E4u; }
        if (ctx->pc != 0x1572E4u) { return; }
    }
    ctx->pc = 0x1572E4u;
    // 0x1572e4: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x1572E4u;
    SET_GPR_U32(ctx, 31, 0x1572ECu);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572ECu; }
        if (ctx->pc != 0x1572ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572ECu; }
        if (ctx->pc != 0x1572ECu) { return; }
    }
    ctx->pc = 0x1572ECu;
    // 0x1572ec: 0x1040fe9a  beqz        $v0, . + 4 + (-0x166 << 2)
    ctx->pc = 0x1572ECu;
    {
        const bool branch_taken_0x1572ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1572ec) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x1572F4u;
    // 0x1572f4: 0xc055d94  jal         func_157650
    ctx->pc = 0x1572F4u;
    SET_GPR_U32(ctx, 31, 0x1572FCu);
    ctx->pc = 0x157650u;
    if (runtime->hasFunction(0x157650u)) {
        auto targetFn = runtime->lookupFunction(0x157650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572FCu; }
        if (ctx->pc != 0x1572FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KariBgLoad_0x157650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1572FCu; }
        if (ctx->pc != 0x1572FCu) { return; }
    }
    ctx->pc = 0x1572FCu;
    // 0x1572fc: 0xc060e5c  jal         func_183970
    ctx->pc = 0x1572FCu;
    SET_GPR_U32(ctx, 31, 0x157304u);
    ctx->pc = 0x157300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1572FCu;
            // 0x157300: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183970u;
    if (runtime->hasFunction(0x183970u)) {
        auto targetFn = runtime->lookupFunction(0x183970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157304u; }
        if (ctx->pc != 0x157304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardSaveFunc_0x183970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157304u; }
        if (ctx->pc != 0x157304u) { return; }
    }
    ctx->pc = 0x157304u;
    // 0x157304: 0x1000fe94  b           . + 4 + (-0x16C << 2)
    ctx->pc = 0x157304u;
    {
        const bool branch_taken_0x157304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157304) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x15730Cu;
    // 0x15730c: 0x0  nop
    ctx->pc = 0x15730cu;
    // NOP
label_157310:
    // 0x157310: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x157310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x157314: 0x8c222c40  lw          $v0, 0x2C40($at)
    ctx->pc = 0x157314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11328)));
    // 0x157318: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x157318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15731c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15731cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x157320: 0x1440feb9  bnez        $v0, . + 4 + (-0x147 << 2)
    ctx->pc = 0x157320u;
    {
        const bool branch_taken_0x157320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157320) {
            ctx->pc = 0x156E08u;
            goto label_156e08;
        }
    }
    ctx->pc = 0x157328u;
    // 0x157328: 0xc063700  jal         func_18DC00
    ctx->pc = 0x157328u;
    SET_GPR_U32(ctx, 31, 0x157330u);
    ctx->pc = 0x18DC00u;
    if (runtime->hasFunction(0x18DC00u)) {
        auto targetFn = runtime->lookupFunction(0x18DC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157330u; }
        if (ctx->pc != 0x157330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JikiUnInit_0x18dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157330u; }
        if (ctx->pc != 0x157330u) { return; }
    }
    ctx->pc = 0x157330u;
    // 0x157330: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x157330u;
    SET_GPR_U32(ctx, 31, 0x157338u);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157338u; }
        if (ctx->pc != 0x157338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157338u; }
        if (ctx->pc != 0x157338u) { return; }
    }
    ctx->pc = 0x157338u;
    // 0x157338: 0x1040fe87  beqz        $v0, . + 4 + (-0x179 << 2)
    ctx->pc = 0x157338u;
    {
        const bool branch_taken_0x157338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157338u;
            // 0x15733c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157338) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x157340u;
    // 0x157340: 0x8c222c48  lw          $v0, 0x2C48($at)
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11336)));
    // 0x157344: 0x1440fe84  bnez        $v0, . + 4 + (-0x17C << 2)
    ctx->pc = 0x157344u;
    {
        const bool branch_taken_0x157344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157344) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x15734Cu;
    // 0x15734c: 0xc055d94  jal         func_157650
    ctx->pc = 0x15734Cu;
    SET_GPR_U32(ctx, 31, 0x157354u);
    ctx->pc = 0x157650u;
    if (runtime->hasFunction(0x157650u)) {
        auto targetFn = runtime->lookupFunction(0x157650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157354u; }
        if (ctx->pc != 0x157354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KariBgLoad_0x157650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157354u; }
        if (ctx->pc != 0x157354u) { return; }
    }
    ctx->pc = 0x157354u;
    // 0x157354: 0xc060e5c  jal         func_183970
    ctx->pc = 0x157354u;
    SET_GPR_U32(ctx, 31, 0x15735Cu);
    ctx->pc = 0x157358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157354u;
            // 0x157358: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183970u;
    if (runtime->hasFunction(0x183970u)) {
        auto targetFn = runtime->lookupFunction(0x183970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15735Cu; }
        if (ctx->pc != 0x15735Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardSaveFunc_0x183970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15735Cu; }
        if (ctx->pc != 0x15735Cu) { return; }
    }
    ctx->pc = 0x15735Cu;
    // 0x15735c: 0x1000fe7e  b           . + 4 + (-0x182 << 2)
    ctx->pc = 0x15735Cu;
    {
        const bool branch_taken_0x15735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15735c) {
            ctx->pc = 0x156D58u;
            goto label_156d58;
        }
    }
    ctx->pc = 0x157364u;
}
