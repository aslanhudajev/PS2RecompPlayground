#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_06Hit
// Address: 0x1aeaa0 - 0x1aeb1c
void En6_06Hit_0x1aeaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_06Hit_0x1aeaa0");
#endif

    ctx->pc = 0x1aeaa0u;

    // 0x1aeaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aeaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aeaa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aeaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aeaa8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1aeaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1aeaac: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1aeab0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1aeab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1aeab4: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AEAB4u;
    {
        const bool branch_taken_0x1aeab4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AEAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEAB4u;
            // 0x1aeab8: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeab4) {
            ctx->pc = 0x1AEB10u;
            goto label_1aeb10;
        }
    }
    ctx->pc = 0x1AEABCu;
    // 0x1aeabc: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x1aeabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1aeac0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1aeac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1aeac4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1aeac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1aeac8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1aeac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1aeacc: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AEACCu;
    {
        const bool branch_taken_0x1aeacc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1aeacc) {
            ctx->pc = 0x1AEB10u;
            goto label_1aeb10;
        }
    }
    ctx->pc = 0x1AEAD4u;
    // 0x1aead4: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1aead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1aead8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1aeadc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1aeadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aeae0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aeae4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1aeae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aeae8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1aeaec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1aeaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1aeaf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aeaf4: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1aeaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1aeaf8: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1aeafc: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1aeb00: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1aeb04: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1AEB04u;
    SET_GPR_U32(ctx, 31, 0x1AEB0Cu);
    ctx->pc = 0x1AEB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB04u;
            // 0x1aeb08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB0Cu; }
        if (ctx->pc != 0x1AEB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB0Cu; }
        if (ctx->pc != 0x1AEB0Cu) { return; }
    }
    ctx->pc = 0x1AEB0Cu;
    // 0x1aeb0c: 0x0  nop
    ctx->pc = 0x1aeb0cu;
    // NOP
label_1aeb10:
    // 0x1aeb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeb14: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB14u;
            // 0x1aeb18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AEB10u: goto label_1aeb10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AEB1Cu;
}
