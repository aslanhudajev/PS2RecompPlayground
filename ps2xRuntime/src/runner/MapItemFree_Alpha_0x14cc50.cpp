#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapItemFree_Alpha
// Address: 0x14cc50 - 0x14ccc8
void MapItemFree_Alpha_0x14cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapItemFree_Alpha_0x14cc50");
#endif

    ctx->pc = 0x14cc50u;

    // 0x14cc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14cc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14cc58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14cc5c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x14cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14cc60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CC60u;
    {
        const bool branch_taken_0x14cc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC60u;
            // 0x14cc64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc60) {
            ctx->pc = 0x14CC70u;
            goto label_14cc70;
        }
    }
    ctx->pc = 0x14CC68u;
    // 0x14cc68: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x14cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x14cc6c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x14cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_14cc70:
    // 0x14cc70: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x14cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x14cc74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CC74u;
    {
        const bool branch_taken_0x14cc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc74) {
            ctx->pc = 0x14CC88u;
            goto label_14cc88;
        }
    }
    ctx->pc = 0x14CC7Cu;
    // 0x14cc7c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x14cc80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14CC80u;
    {
        const bool branch_taken_0x14cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CC80u;
            // 0x14cc84: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc80) {
            ctx->pc = 0x14CC98u;
            goto label_14cc98;
        }
    }
    ctx->pc = 0x14CC88u;
label_14cc88:
    // 0x14cc88: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x14cc8c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14cc90: 0xac229d10  sw          $v0, -0x62F0($at)
    ctx->pc = 0x14cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941968), GPR_U32(ctx, 2));
    // 0x14cc94: 0x0  nop
    ctx->pc = 0x14cc94u;
    // NOP
label_14cc98:
    // 0x14cc98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14cc9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CC9Cu;
    {
        const bool branch_taken_0x14cc9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14cc9c) {
            ctx->pc = 0x14CCB0u;
            goto label_14ccb0;
        }
    }
    ctx->pc = 0x14CCA4u;
    // 0x14cca4: 0xc060564  jal         func_181590
    ctx->pc = 0x14CCA4u;
    SET_GPR_U32(ctx, 31, 0x14CCACu);
    ctx->pc = 0x181590u;
    if (runtime->hasFunction(0x181590u)) {
        auto targetFn = runtime->lookupFunction(0x181590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCACu; }
        if (ctx->pc != 0x14CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFree_0x181590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCACu; }
        if (ctx->pc != 0x14CCACu) { return; }
    }
    ctx->pc = 0x14CCACu;
    // 0x14ccac: 0x0  nop
    ctx->pc = 0x14ccacu;
    // NOP
label_14ccb0:
    // 0x14ccb0: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x14CCB0u;
    SET_GPR_U32(ctx, 31, 0x14CCB8u);
    ctx->pc = 0x14CCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCB0u;
            // 0x14ccb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB8u; }
        if (ctx->pc != 0x14CCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB8u; }
        if (ctx->pc != 0x14CCB8u) { return; }
    }
    ctx->pc = 0x14CCB8u;
    // 0x14ccb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ccb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ccbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ccbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ccc0: 0x3e00008  jr          $ra
    ctx->pc = 0x14CCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CCC0u;
            // 0x14ccc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CC70u: goto label_14cc70;
            case 0x14CC88u: goto label_14cc88;
            case 0x14CC98u: goto label_14cc98;
            case 0x14CCB0u: goto label_14ccb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CCC8u;
}
