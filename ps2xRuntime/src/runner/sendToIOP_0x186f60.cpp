#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sendToIOP
// Address: 0x186f60 - 0x186fdc
void sendToIOP_0x186f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sendToIOP_0x186f60");
#endif

    ctx->pc = 0x186f60u;

    // 0x186f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x186f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x186f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186f6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x186f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f70: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186F70u;
    {
        const bool branch_taken_0x186f70 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x186F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F70u;
            // 0x186f74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f70) {
            ctx->pc = 0x186F80u;
            goto label_186f80;
        }
    }
    ctx->pc = 0x186F78u;
    // 0x186f78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x186F78u;
    {
        const bool branch_taken_0x186f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F78u;
            // 0x186f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f78) {
            ctx->pc = 0x186FC8u;
            goto label_186fc8;
        }
    }
    ctx->pc = 0x186F80u;
label_186f80:
    // 0x186f80: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x186f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x186f84: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x186f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x186f88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f8c: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x186f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x186f90: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x186F90u;
    SET_GPR_U32(ctx, 31, 0x186F98u);
    ctx->pc = 0x186F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F90u;
            // 0x186f94: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F98u; }
        if (ctx->pc != 0x186F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F98u; }
        if (ctx->pc != 0x186F98u) { return; }
    }
    ctx->pc = 0x186F98u;
    // 0x186f98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186f9c: 0xc04bc08  jal         func_12F020
    ctx->pc = 0x186F9Cu;
    SET_GPR_U32(ctx, 31, 0x186FA4u);
    ctx->pc = 0x186FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F9Cu;
            // 0x186fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F020u;
    if (runtime->hasFunction(0x12F020u)) {
        auto targetFn = runtime->lookupFunction(0x12F020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FA4u; }
        if (ctx->pc != 0x186FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x12f020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FA4u; }
        if (ctx->pc != 0x186FA4u) { return; }
    }
    ctx->pc = 0x186FA4u;
    // 0x186fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x186fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186fa8:
    // 0x186fa8: 0xc04bc00  jal         func_12F000
    ctx->pc = 0x186FA8u;
    SET_GPR_U32(ctx, 31, 0x186FB0u);
    ctx->pc = 0x186FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186FA8u;
            // 0x186fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F000u;
    if (runtime->hasFunction(0x12F000u)) {
        auto targetFn = runtime->lookupFunction(0x12F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FB0u; }
        if (ctx->pc != 0x186FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x12f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186FB0u; }
        if (ctx->pc != 0x186FB0u) { return; }
    }
    ctx->pc = 0x186FB0u;
    // 0x186fb0: 0x0  nop
    ctx->pc = 0x186fb0u;
    // NOP
    // 0x186fb4: 0x0  nop
    ctx->pc = 0x186fb4u;
    // NOP
    // 0x186fb8: 0x0  nop
    ctx->pc = 0x186fb8u;
    // NOP
    // 0x186fbc: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186FBCu;
    {
        const bool branch_taken_0x186fbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x186fbc) {
            ctx->pc = 0x186FA8u;
            goto label_186fa8;
        }
    }
    ctx->pc = 0x186FC4u;
    // 0x186fc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x186fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186fc8:
    // 0x186fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x186FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186FD4u;
            // 0x186fd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F80u: goto label_186f80;
            case 0x186FA8u: goto label_186fa8;
            case 0x186FC8u: goto label_186fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186FDCu;
}
