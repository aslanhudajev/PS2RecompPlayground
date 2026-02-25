#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufStopDMA
// Address: 0x189b50 - 0x189c24
void viBufStopDMA_0x189b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufStopDMA_0x189b50");
#endif

    ctx->pc = 0x189b50u;

    // 0x189b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b60: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189B60u;
    SET_GPR_U32(ctx, 31, 0x189B68u);
    ctx->pc = 0x189B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B60u;
            // 0x189b64: 0x8c840040  lw          $a0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B68u; }
        if (ctx->pc != 0x189B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B68u; }
        if (ctx->pc != 0x189B68u) { return; }
    }
    ctx->pc = 0x189B68u;
    // 0x189b68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x189b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x189b6c: 0xc062880  jal         func_18A200
    ctx->pc = 0x189B6Cu;
    SET_GPR_U32(ctx, 31, 0x189B74u);
    ctx->pc = 0x189B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189B6Cu;
            // 0x189b70: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A200u;
    if (runtime->hasFunction(0x18A200u)) {
        auto targetFn = runtime->lookupFunction(0x18A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B74u; }
        if (ctx->pc != 0x189B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x18a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189B74u; }
        if (ctx->pc != 0x189B74u) { return; }
    }
    ctx->pc = 0x189B74u;
    // 0x189b74: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189b78: 0x8c22b410  lw          $v0, -0x4BF0($at)
    ctx->pc = 0x189b78u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947856))); // MMIO: 0x1000b410
    // 0x189b7c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x189b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x189b80: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189b84: 0x8c22b430  lw          $v0, -0x4BD0($at)
    ctx->pc = 0x189b84u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947888))); // MMIO: 0x1000b430
    // 0x189b88: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x189b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x189b8c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189b90: 0x8c22b420  lw          $v0, -0x4BE0($at)
    ctx->pc = 0x189b90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947872))); // MMIO: 0x1000b420
    // 0x189b94: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x189b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x189b98: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189b9c: 0x8c22b400  lw          $v0, -0x4C00($at)
    ctx->pc = 0x189b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947840))); // MMIO: 0x1000b400
    // 0x189ba0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x189ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x189ba4: 0x0  nop
    ctx->pc = 0x189ba4u;
    // NOP
label_189ba8:
    // 0x189ba8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189bac: 0x8c222010  lw          $v0, 0x2010($at)
    ctx->pc = 0x189bacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208))); // MMIO: 0x10002010
    // 0x189bb0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x189bb0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)240u)));
    // 0x189bb4: 0x0  nop
    ctx->pc = 0x189bb4u;
    // NOP
    // 0x189bb8: 0x0  nop
    ctx->pc = 0x189bb8u;
    // NOP
    // 0x189bbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x189BBCu;
    {
        const bool branch_taken_0x189bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189bbc) {
            ctx->pc = 0x189BA8u;
            goto label_189ba8;
        }
    }
    ctx->pc = 0x189BC4u;
    // 0x189bc4: 0xc06289c  jal         func_18A270
    ctx->pc = 0x189BC4u;
    SET_GPR_U32(ctx, 31, 0x189BCCu);
    ctx->pc = 0x189BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189BC4u;
            // 0x189bc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A270u;
    if (runtime->hasFunction(0x18A270u)) {
        auto targetFn = runtime->lookupFunction(0x18A270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BCCu; }
        if (ctx->pc != 0x189BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD3_CHCR_0x18a270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189BCCu; }
        if (ctx->pc != 0x189BCCu) { return; }
    }
    ctx->pc = 0x189BCCu;
    // 0x189bcc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189bd0: 0x8c22b010  lw          $v0, -0x4FF0($at)
    ctx->pc = 0x189bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946832))); // MMIO: 0x1000b010
    // 0x189bd4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x189bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x189bd8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189bdc: 0x8c22b020  lw          $v0, -0x4FE0($at)
    ctx->pc = 0x189bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848))); // MMIO: 0x1000b020
    // 0x189be0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x189be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x189be4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x189be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x189be8: 0x8c22b000  lw          $v0, -0x5000($at)
    ctx->pc = 0x189be8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816))); // MMIO: 0x1000b000
    // 0x189bec: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x189becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x189bf0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189bf4: 0x8c222020  lw          $v0, 0x2020($at)
    ctx->pc = 0x189bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8224))); // MMIO: 0x10002020
    // 0x189bf8: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x189bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x189bfc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x189bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x189c00: 0x8c222010  lw          $v0, 0x2010($at)
    ctx->pc = 0x189c00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208))); // MMIO: 0x10002010
    // 0x189c04: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x189c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x189c08: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189C08u;
    SET_GPR_U32(ctx, 31, 0x189C10u);
    ctx->pc = 0x189C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189C08u;
            // 0x189c0c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C10u; }
        if (ctx->pc != 0x189C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189C10u; }
        if (ctx->pc != 0x189C10u) { return; }
    }
    ctx->pc = 0x189C10u;
    // 0x189c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x189C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189C1Cu;
            // 0x189c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189BA8u: goto label_189ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189C24u;
}
