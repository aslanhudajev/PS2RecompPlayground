#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SyncDmaForRead
// Address: 0x123d30 - 0x123dc8
void SyncDmaForRead_0x123d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SyncDmaForRead_0x123d30");
#endif

    ctx->pc = 0x123d30u;

    // 0x123d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x123d34: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x123d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x123d38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123d3c: 0x2452b780  addiu       $s2, $v0, -0x4880
    ctx->pc = 0x123d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
    // 0x123d40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x123d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x123d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123d48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x123d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123d50: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x123d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123d58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x123d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x123d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x123d60: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x123d60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123d68:
    // 0x123d68: 0xc04bd56  jal         func_12F558
    ctx->pc = 0x123D68u;
    SET_GPR_U32(ctx, 31, 0x123D70u);
    ctx->pc = 0x123D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123D68u;
            // 0x123d6c: 0x2625007f  addiu       $a1, $s1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F558u;
    if (runtime->hasFunction(0x12F558u)) {
        auto targetFn = runtime->lookupFunction(0x12F558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D70u; }
        if (ctx->pc != 0x123D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x12f558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D70u; }
        if (ctx->pc != 0x123D70u) { return; }
    }
    ctx->pc = 0x123D70u;
    // 0x123d70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123d74: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123D74u;
    {
        const bool branch_taken_0x123d74 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x123d74) {
            ctx->pc = 0x123D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123D74u;
            // 0x123d78: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123DA8u;
            goto label_123da8;
        }
    }
    ctx->pc = 0x123D7Cu;
    // 0x123d7c: 0xc049362  jal         func_124D88
    ctx->pc = 0x123D7Cu;
    SET_GPR_U32(ctx, 31, 0x123D84u);
    ctx->pc = 0x123D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123D7Cu;
            // 0x123d80: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124D88u;
    if (runtime->hasFunction(0x124D88u)) {
        auto targetFn = runtime->lookupFunction(0x124D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D84u; }
        if (ctx->pc != 0x123D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcCoreWaitSema_0x124d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D84u; }
        if (ctx->pc != 0x123D84u) { return; }
    }
    ctx->pc = 0x123D84u;
    // 0x123d84: 0x2a020800  slti        $v0, $s0, 0x800
    ctx->pc = 0x123d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x123d88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x123D88u;
    {
        const bool branch_taken_0x123d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D88u;
            // 0x123d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d88) {
            ctx->pc = 0x123DA0u;
            goto label_123da0;
        }
    }
    ctx->pc = 0x123D90u;
    // 0x123d90: 0xc0416de  jal         func_105B78
    ctx->pc = 0x123D90u;
    SET_GPR_U32(ctx, 31, 0x123D98u);
    ctx->pc = 0x105B78u;
    if (runtime->hasFunction(0x105B78u)) {
        auto targetFn = runtime->lookupFunction(0x105B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D98u; }
        if (ctx->pc != 0x123D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDbcGetConnection_0x105b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123D98u; }
        if (ctx->pc != 0x123D98u) { return; }
    }
    ctx->pc = 0x123D98u;
    // 0x123d98: 0x1454fff3  bne         $v0, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x123D98u;
    {
        const bool branch_taken_0x123d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x123D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D98u;
            // 0x123d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d98) {
            ctx->pc = 0x123D68u;
            goto label_123d68;
        }
    }
    ctx->pc = 0x123DA0u;
label_123da0:
    // 0x123da0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x123da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x123da4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x123da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123da8:
    // 0x123da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123db0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123db4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123db4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123db8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x123db8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123dbc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x123dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x123dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x123DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DC0u;
            // 0x123dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123D68u: goto label_123d68;
            case 0x123DA0u: goto label_123da0;
            case 0x123DA8u: goto label_123da8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123DC8u;
}
