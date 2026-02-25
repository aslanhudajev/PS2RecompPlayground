#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: VSync
// Address: 0x12f0f0 - 0x12f180
void VSync_0x12f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("VSync_0x12f0f0");
#endif

    ctx->pc = 0x12f0f0u;

    // 0x12f0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f0f8: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F0F8u;
    SET_GPR_U32(ctx, 31, 0x12F100u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F100u; }
        if (ctx->pc != 0x12F100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F100u; }
        if (ctx->pc != 0x12F100u) { return; }
    }
    ctx->pc = 0x12F100u;
    // 0x12f100: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12f100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12f104: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f108: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12f108u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61440u)));
    // 0x12f10c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12f10cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12f110: 0xf  sync
    ctx->pc = 0x12f110u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F114u;
    {
        const bool branch_taken_0x12f114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F114u;
            // 0x12f118: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f114) {
            ctx->pc = 0x12F128u;
            goto label_12f128;
        }
    }
    ctx->pc = 0x12F11Cu;
    // 0x12f11c: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F11Cu;
    SET_GPR_U32(ctx, 31, 0x12F124u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F124u; }
        if (ctx->pc != 0x12F124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F124u; }
        if (ctx->pc != 0x12F124u) { return; }
    }
    ctx->pc = 0x12F124u;
    // 0x12f124: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12f124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_12f128:
    // 0x12f128: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12f128u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61440u)));
    // 0x12f12c: 0x0  nop
    ctx->pc = 0x12f12cu;
    // NOP
label_12f130:
    // 0x12f130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f130u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x12f134: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12f134u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4u)));
    // 0x12f138: 0x0  nop
    ctx->pc = 0x12f138u;
    // NOP
    // 0x12f13c: 0x0  nop
    ctx->pc = 0x12f13cu;
    // NOP
    // 0x12f140: 0x0  nop
    ctx->pc = 0x12f140u;
    // NOP
    // 0x12f144: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F144u;
    {
        const bool branch_taken_0x12f144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f144) {
            ctx->pc = 0x12F130u;
            goto label_12f130;
        }
    }
    ctx->pc = 0x12F14Cu;
    // 0x12f14c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F14Cu;
    SET_GPR_U32(ctx, 31, 0x12F154u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F154u; }
        if (ctx->pc != 0x12F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F154u; }
        if (ctx->pc != 0x12F154u) { return; }
    }
    ctx->pc = 0x12F154u;
    // 0x12f154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12f158: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f15c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x12f15cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61440u)));
    // 0x12f160: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12f160u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12f164: 0xf  sync
    ctx->pc = 0x12f164u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F168u;
    {
        const bool branch_taken_0x12f168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F168u;
            // 0x12f16c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f168) {
            ctx->pc = 0x12F178u;
            goto label_12f178;
        }
    }
    ctx->pc = 0x12F170u;
    // 0x12f170: 0x804de7a  j           func_1379E8
    ctx->pc = 0x12F170u;
    ctx->pc = 0x12F174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F170u;
            // 0x12f174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12F178u;
label_12f178:
    // 0x12f178: 0x3e00008  jr          $ra
    ctx->pc = 0x12F178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F178u;
            // 0x12f17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F128u: goto label_12f128;
            case 0x12F130u: goto label_12f130;
            case 0x12F178u: goto label_12f178;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F180u;
}
