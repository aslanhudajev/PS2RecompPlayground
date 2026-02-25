#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _Balloc
// Address: 0x13b710 - 0x13b7b8
void ps2__Balloc_0x13b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__Balloc_0x13b710");
#endif

    ctx->pc = 0x13b710u;

    // 0x13b710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b714: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13b718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b71c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b724: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x13b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13b728: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B728u;
    {
        const bool branch_taken_0x13b728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B728u;
            // 0x13b72c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b728) {
            ctx->pc = 0x13B748u;
            goto label_13b748;
        }
    }
    ctx->pc = 0x13B730u;
    // 0x13b730: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13b730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13b734: 0xc04e08e  jal         func_138238
    ctx->pc = 0x13B734u;
    SET_GPR_U32(ctx, 31, 0x13B73Cu);
    ctx->pc = 0x13B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B734u;
            // 0x13b738: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138238u;
    if (runtime->hasFunction(0x138238u)) {
        auto targetFn = runtime->lookupFunction(0x138238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B73Cu; }
        if (ctx->pc != 0x13B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x138238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B73Cu; }
        if (ctx->pc != 0x13B73Cu) { return; }
    }
    ctx->pc = 0x13B73Cu;
    // 0x13b73c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13B73Cu;
    {
        const bool branch_taken_0x13b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B73Cu;
            // 0x13b740: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b73c) {
            ctx->pc = 0x13B78Cu;
            goto label_13b78c;
        }
    }
    ctx->pc = 0x13B744u;
    // 0x13b744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13b744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b748:
    // 0x13b748: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13b748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13b74c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x13b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b750: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B754u;
    {
        const bool branch_taken_0x13b754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B754u;
            // 0x13b758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b754) {
            ctx->pc = 0x13B768u;
            goto label_13b768;
        }
    }
    ctx->pc = 0x13B75Cu;
    // 0x13b75c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b760: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13B760u;
    {
        const bool branch_taken_0x13b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B760u;
            // 0x13b764: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b760) {
            ctx->pc = 0x13B798u;
            goto label_13b798;
        }
    }
    ctx->pc = 0x13B768u;
label_13b768:
    // 0x13b768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b76c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x13b76cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x13b770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b774: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x13b774u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13b778: 0xc04e08e  jal         func_138238
    ctx->pc = 0x13B778u;
    SET_GPR_U32(ctx, 31, 0x13B780u);
    ctx->pc = 0x13B77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B778u;
            // 0x13b77c: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138238u;
    if (runtime->hasFunction(0x138238u)) {
        auto targetFn = runtime->lookupFunction(0x138238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B780u; }
        if (ctx->pc != 0x13B780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _calloc_r_0x138238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B780u; }
        if (ctx->pc != 0x13B780u) { return; }
    }
    ctx->pc = 0x13B780u;
    // 0x13b780: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13b780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b784: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B784u;
    {
        const bool branch_taken_0x13b784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b784) {
            ctx->pc = 0x13B788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B784u;
            // 0x13b788: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B794u;
            goto label_13b794;
        }
    }
    ctx->pc = 0x13B78Cu;
label_13b78c:
    // 0x13b78c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13B78Cu;
    {
        const bool branch_taken_0x13b78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B78Cu;
            // 0x13b790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b78c) {
            ctx->pc = 0x13B7A4u;
            goto label_13b7a4;
        }
    }
    ctx->pc = 0x13B794u;
label_13b794:
    // 0x13b794: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x13b794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_13b798:
    // 0x13b798: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x13b798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x13b79c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13b79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b7a0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_13b7a4:
    // 0x13b7a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b7a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13b7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7B0u;
            // 0x13b7b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B748u: goto label_13b748;
            case 0x13B768u: goto label_13b768;
            case 0x13B78Cu: goto label_13b78c;
            case 0x13B794u: goto label_13b794;
            case 0x13B798u: goto label_13b798;
            case 0x13B7A4u: goto label_13b7a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B7B8u;
}
