#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fs_version
// Address: 0x132d38 - 0x132dc4
void _fs_version_0x132d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fs_version_0x132d38");
#endif

    ctx->pc = 0x132d38u;

    // 0x132d38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x132d3c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x132d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x132d40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x132d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x132d44: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x132d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x132d48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x132d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x132d4c: 0x245303ec  addiu       $s3, $v0, 0x3EC
    ctx->pc = 0x132d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1004));
    // 0x132d50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x132d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x132d54: 0x24715f28  addiu       $s1, $v1, 0x5F28
    ctx->pc = 0x132d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24360));
    // 0x132d58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x132d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x132d5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x132d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x132d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d6c: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x132D6Cu;
    SET_GPR_U32(ctx, 31, 0x132D74u);
    ctx->pc = 0x132D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132D6Cu;
            // 0x132d70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D74u; }
        if (ctx->pc != 0x132D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D74u; }
        if (ctx->pc != 0x132D74u) { return; }
    }
    ctx->pc = 0x132D74u;
    // 0x132d74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x132D74u;
    {
        const bool branch_taken_0x132d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D74u;
            // 0x132d78: 0x3c100021  lui         $s0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d74) {
            ctx->pc = 0x132DA4u;
            goto label_132da4;
        }
    }
    ctx->pc = 0x132D7Cu;
    // 0x132d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d80: 0x8e0504b0  lw          $a1, 0x4B0($s0)
    ctx->pc = 0x132d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
    // 0x132d84: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x132D84u;
    SET_GPR_U32(ctx, 31, 0x132D8Cu);
    ctx->pc = 0x132D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132D84u;
            // 0x132d88: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D8Cu; }
        if (ctx->pc != 0x132D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132D8Cu; }
        if (ctx->pc != 0x132D8Cu) { return; }
    }
    ctx->pc = 0x132D8Cu;
    // 0x132d8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x132D8Cu;
    {
        const bool branch_taken_0x132d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132D8Cu;
            // 0x132d90: 0x8e0504b0  lw          $a1, 0x4B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d8c) {
            ctx->pc = 0x132DA4u;
            goto label_132da4;
        }
    }
    ctx->pc = 0x132D94u;
    // 0x132d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d98: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x132D98u;
    SET_GPR_U32(ctx, 31, 0x132DA0u);
    ctx->pc = 0x132D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132D98u;
            // 0x132d9c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132DA0u; }
        if (ctx->pc != 0x132DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132DA0u; }
        if (ctx->pc != 0x132DA0u) { return; }
    }
    ctx->pc = 0x132DA0u;
    // 0x132da0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x132da0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_132da4:
    // 0x132da4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x132da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132da8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x132da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132dac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x132dacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132db0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x132db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132db4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x132db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x132DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132DBCu;
            // 0x132dc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132DA4u: goto label_132da4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132DC4u;
}
