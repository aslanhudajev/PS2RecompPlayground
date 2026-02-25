#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitExecPS2
// Address: 0x137d38 - 0x137de4
void InitExecPS2_0x137d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitExecPS2_0x137d38");
#endif

    ctx->pc = 0x137d38u;

    // 0x137d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137d3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137d40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x137d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137d44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137d48: 0xc04df34  jal         func_137CD0
    ctx->pc = 0x137D48u;
    SET_GPR_U32(ctx, 31, 0x137D50u);
    ctx->pc = 0x137D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D48u;
            // 0x137d4c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137CD0u;
    if (runtime->hasFunction(0x137CD0u)) {
        auto targetFn = runtime->lookupFunction(0x137CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D50u; }
        if (ctx->pc != 0x137D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PatchIsNeeded_0x137cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D50u; }
        if (ctx->pc != 0x137D50u) { return; }
    }
    ctx->pc = 0x137D50u;
    // 0x137d50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x137D50u;
    {
        const bool branch_taken_0x137d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137D50u;
            // 0x137d54: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d50) {
            ctx->pc = 0x137DCCu;
            goto label_137dcc;
        }
    }
    ctx->pc = 0x137D58u;
    // 0x137d58: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x137d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137d5c: 0x245012e0  addiu       $s0, $v0, 0x12E0
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4832));
    // 0x137d60: 0x8c4412e0  lw          $a0, 0x12E0($v0)
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4832)));
    // 0x137d64: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x137d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137d68: 0xc04df1a  jal         func_137C68
    ctx->pc = 0x137D68u;
    SET_GPR_U32(ctx, 31, 0x137D70u);
    ctx->pc = 0x137D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D68u;
            // 0x137d6c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137C68u;
    if (runtime->hasFunction(0x137C68u)) {
        auto targetFn = runtime->lookupFunction(0x137C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D70u; }
        if (ctx->pc != 0x137D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D70u; }
        if (ctx->pc != 0x137D70u) { return; }
    }
    ctx->pc = 0x137D70u;
    // 0x137d70: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x137d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x137d74: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x137d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x137d78: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x137d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x137d7c: 0x24a50b38  addiu       $a1, $a1, 0xB38
    ctx->pc = 0x137d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2872));
    // 0x137d80: 0xc04df1e  jal         func_137C78
    ctx->pc = 0x137D80u;
    SET_GPR_U32(ctx, 31, 0x137D88u);
    ctx->pc = 0x137D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D80u;
            // 0x137d84: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16384u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137C78u;
    if (runtime->hasFunction(0x137C78u)) {
        auto targetFn = runtime->lookupFunction(0x137C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D88u; }
        if (ctx->pc != 0x137D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D88u; }
        if (ctx->pc != 0x137D88u) { return; }
    }
    ctx->pc = 0x137D88u;
    // 0x137d88: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x137D88u;
    SET_GPR_U32(ctx, 31, 0x137D90u);
    ctx->pc = 0x137D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D88u;
            // 0x137d8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D90u; }
        if (ctx->pc != 0x137D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D90u; }
        if (ctx->pc != 0x137D90u) { return; }
    }
    ctx->pc = 0x137D90u;
    // 0x137d90: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x137D90u;
    SET_GPR_U32(ctx, 31, 0x137D98u);
    ctx->pc = 0x137D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D90u;
            // 0x137d94: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D98u; }
        if (ctx->pc != 0x137D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137D98u; }
        if (ctx->pc != 0x137D98u) { return; }
    }
    ctx->pc = 0x137D98u;
    // 0x137d98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x137d9c: 0xc04df1a  jal         func_137C68
    ctx->pc = 0x137D9Cu;
    SET_GPR_U32(ctx, 31, 0x137DA4u);
    ctx->pc = 0x137DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137D9Cu;
            // 0x137da0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137C68u;
    if (runtime->hasFunction(0x137C68u)) {
        auto targetFn = runtime->lookupFunction(0x137C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DA4u; }
        if (ctx->pc != 0x137DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DA4u; }
        if (ctx->pc != 0x137DA4u) { return; }
    }
    ctx->pc = 0x137DA4u;
    // 0x137da4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x137da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137da8:
    // 0x137da8: 0xc04df30  jal         func_137CC0
    ctx->pc = 0x137DA8u;
    SET_GPR_U32(ctx, 31, 0x137DB0u);
    ctx->pc = 0x137DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DA8u;
            // 0x137dac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137CC0u;
    if (runtime->hasFunction(0x137CC0u)) {
        auto targetFn = runtime->lookupFunction(0x137CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DB0u; }
        if (ctx->pc != 0x137DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x137cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DB0u; }
        if (ctx->pc != 0x137DB0u) { return; }
    }
    ctx->pc = 0x137DB0u;
    // 0x137db0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x137db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137db8: 0xc04df1a  jal         func_137C68
    ctx->pc = 0x137DB8u;
    SET_GPR_U32(ctx, 31, 0x137DC0u);
    ctx->pc = 0x137DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137DB8u;
            // 0x137dbc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137C68u;
    if (runtime->hasFunction(0x137C68u)) {
        auto targetFn = runtime->lookupFunction(0x137C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DC0u; }
        if (ctx->pc != 0x137DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137DC0u; }
        if (ctx->pc != 0x137DC0u) { return; }
    }
    ctx->pc = 0x137DC0u;
    // 0x137dc0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x137dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x137dc4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x137DC4u;
    {
        const bool branch_taken_0x137dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137dc4) {
            ctx->pc = 0x137DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x137DC4u;
            // 0x137dc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137DA8u;
            goto label_137da8;
        }
    }
    ctx->pc = 0x137DCCu;
label_137dcc:
    // 0x137dcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x137dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137dd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137dd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x137DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DDCu;
            // 0x137de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137DA8u: goto label_137da8;
            case 0x137DCCu: goto label_137dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137DE4u;
}
