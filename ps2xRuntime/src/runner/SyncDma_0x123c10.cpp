#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SyncDma
// Address: 0x123c10 - 0x123d2c
void SyncDma_0x123c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SyncDma_0x123c10");
#endif

    ctx->pc = 0x123c10u;

    // 0x123c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x123c14: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x123c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x123c18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x123c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x123c1c: 0x3c150021  lui         $s5, 0x21
    ctx->pc = 0x123c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)33 << 16));
    // 0x123c20: 0x26a30130  addiu       $v1, $s5, 0x130
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x123c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123c2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x123c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123c34: 0x2450b780  addiu       $s0, $v0, -0x4880
    ctx->pc = 0x123c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
    // 0x123c38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123c3c: 0x26130080  addiu       $s3, $s0, 0x80
    ctx->pc = 0x123c3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x123c40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x123c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x123c44: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x123c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c48: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x123c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x123c4c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x123c4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c50: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x123c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x123c54: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x123c54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123c58: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x123c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x123c5c: 0x3c1e0024  lui         $fp, 0x24
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)36 << 16));
    // 0x123c60: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x123c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x123c64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x123c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x123c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x123c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123c70:
    // 0x123c70: 0xc04bd56  jal         func_12F558
    ctx->pc = 0x123C70u;
    SET_GPR_U32(ctx, 31, 0x123C78u);
    ctx->pc = 0x123C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123C70u;
            // 0x123c74: 0x264500ff  addiu       $a1, $s2, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F558u;
    if (runtime->hasFunction(0x12F558u)) {
        auto targetFn = runtime->lookupFunction(0x12F558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123C78u; }
        if (ctx->pc != 0x123C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x12f558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123C78u; }
        if (ctx->pc != 0x123C78u) { return; }
    }
    ctx->pc = 0x123C78u;
    // 0x123c78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x123c7c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x123c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x123c80: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x123c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x123c84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x123C84u;
    {
        const bool branch_taken_0x123c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C84u;
            // 0x123c88: 0x26a50130  addiu       $a1, $s5, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c84) {
            ctx->pc = 0x123CA8u;
            goto label_123ca8;
        }
    }
    ctx->pc = 0x123C8Cu;
    // 0x123c8c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x123c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x123c90: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x123c94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x123C94u;
    {
        const bool branch_taken_0x123c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c94) {
            ctx->pc = 0x123C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123C94u;
            // 0x123c98: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123CB0u;
            goto label_123cb0;
        }
    }
    ctx->pc = 0x123C9Cu;
    // 0x123c9c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x123c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x123ca0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x123CA0u;
    {
        const bool branch_taken_0x123ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CA0u;
            // 0x123ca4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ca0) {
            ctx->pc = 0x123CFCu;
            goto label_123cfc;
        }
    }
    ctx->pc = 0x123CA8u;
label_123ca8:
    // 0x123ca8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x123ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x123cac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x123cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_123cb0:
    // 0x123cb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x123cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x123cb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123CB4u;
    {
        const bool branch_taken_0x123cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CB4u;
            // 0x123cb8: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cb4) {
            ctx->pc = 0x123CD0u;
            goto label_123cd0;
        }
    }
    ctx->pc = 0x123CBCu;
    // 0x123cbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123CBCu;
    {
        const bool branch_taken_0x123cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CBCu;
            // 0x123cc0: 0x27c2b800  addiu       $v0, $fp, -0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cbc) {
            ctx->pc = 0x123CD0u;
            goto label_123cd0;
        }
    }
    ctx->pc = 0x123CC4u;
    // 0x123cc4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x123CC4u;
    {
        const bool branch_taken_0x123cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CC4u;
            // 0x123cc8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cc4) {
            ctx->pc = 0x123CFCu;
            goto label_123cfc;
        }
    }
    ctx->pc = 0x123CCCu;
    // 0x123ccc: 0x0  nop
    ctx->pc = 0x123cccu;
    // NOP
label_123cd0:
    // 0x123cd0: 0xc049362  jal         func_124D88
    ctx->pc = 0x123CD0u;
    SET_GPR_U32(ctx, 31, 0x123CD8u);
    ctx->pc = 0x123CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123CD0u;
            // 0x123cd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124D88u;
    if (runtime->hasFunction(0x124D88u)) {
        auto targetFn = runtime->lookupFunction(0x124D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123CD8u; }
        if (ctx->pc != 0x123CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcCoreWaitSema_0x124d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123CD8u; }
        if (ctx->pc != 0x123CD8u) { return; }
    }
    ctx->pc = 0x123CD8u;
    // 0x123cd8: 0x2a220800  slti        $v0, $s1, 0x800
    ctx->pc = 0x123cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x123cdc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123CDCu;
    {
        const bool branch_taken_0x123cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CDCu;
            // 0x123ce0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cdc) {
            ctx->pc = 0x123CF4u;
            goto label_123cf4;
        }
    }
    ctx->pc = 0x123CE4u;
    // 0x123ce4: 0xc0416de  jal         func_105B78
    ctx->pc = 0x123CE4u;
    SET_GPR_U32(ctx, 31, 0x123CECu);
    ctx->pc = 0x105B78u;
    if (runtime->hasFunction(0x105B78u)) {
        auto targetFn = runtime->lookupFunction(0x105B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123CECu; }
        if (ctx->pc != 0x123CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDbcGetConnection_0x105b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123CECu; }
        if (ctx->pc != 0x123CECu) { return; }
    }
    ctx->pc = 0x123CECu;
    // 0x123cec: 0x1457ffe0  bne         $v0, $s7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x123CECu;
    {
        const bool branch_taken_0x123cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x123CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CECu;
            // 0x123cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cec) {
            ctx->pc = 0x123C70u;
            goto label_123c70;
        }
    }
    ctx->pc = 0x123CF4u;
label_123cf4:
    // 0x123cf4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x123cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x123cf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x123cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123cfc:
    // 0x123cfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123d00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123d04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123d08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123d0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123d10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x123d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123d14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x123d14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123d18: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x123d18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x123d1c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x123d1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x123d20: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x123d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x123d24: 0x3e00008  jr          $ra
    ctx->pc = 0x123D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D24u;
            // 0x123d28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123C70u: goto label_123c70;
            case 0x123CA8u: goto label_123ca8;
            case 0x123CB0u: goto label_123cb0;
            case 0x123CD0u: goto label_123cd0;
            case 0x123CF4u: goto label_123cf4;
            case 0x123CFCu: goto label_123cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123D2Cu;
}
