#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_05Hit
// Address: 0x1ad8e0 - 0x1ad95c
void En6_05Hit_0x1ad8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_05Hit_0x1ad8e0");
#endif

    ctx->pc = 0x1ad8e0u;

    // 0x1ad8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad8e8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1ad8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ad8ec: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1ad8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ad8f0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1ad8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ad8f4: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AD8F4u;
    {
        const bool branch_taken_0x1ad8f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AD8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD8F4u;
            // 0x1ad8f8: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8f4) {
            ctx->pc = 0x1AD950u;
            goto label_1ad950;
        }
    }
    ctx->pc = 0x1AD8FCu;
    // 0x1ad8fc: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x1ad8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1ad900: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ad900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ad904: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1ad904u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1ad908: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ad90c: 0x1c600010  bgtz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AD90Cu;
    {
        const bool branch_taken_0x1ad90c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ad90c) {
            ctx->pc = 0x1AD950u;
            goto label_1ad950;
        }
    }
    ctx->pc = 0x1AD914u;
    // 0x1ad914: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1ad914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1ad918: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1ad918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1ad91c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1ad91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ad920: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1ad920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ad924: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ad928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ad92c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ad92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ad930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad934: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1ad934u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1ad938: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1ad938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ad93c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1ad93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ad940: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1ad940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1ad944: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1AD944u;
    SET_GPR_U32(ctx, 31, 0x1AD94Cu);
    ctx->pc = 0x1AD948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD944u;
            // 0x1ad948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD94Cu; }
        if (ctx->pc != 0x1AD94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD94Cu; }
        if (ctx->pc != 0x1AD94Cu) { return; }
    }
    ctx->pc = 0x1AD94Cu;
    // 0x1ad94c: 0x0  nop
    ctx->pc = 0x1ad94cu;
    // NOP
label_1ad950:
    // 0x1ad950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad954: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD954u;
            // 0x1ad958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD950u: goto label_1ad950;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD95Cu;
}
