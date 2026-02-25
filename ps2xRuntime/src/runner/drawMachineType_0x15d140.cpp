#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawMachineType
// Address: 0x15d140 - 0x15d1ec
void drawMachineType_0x15d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawMachineType_0x15d140");
#endif

    ctx->pc = 0x15d140u;

    // 0x15d140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d144: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d14c: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x15d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x15d150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d15c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d160: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15d160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x15d164: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D164u;
    SET_GPR_U32(ctx, 31, 0x15D16Cu);
    ctx->pc = 0x15D168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D164u;
            // 0x15d168: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D16Cu; }
        if (ctx->pc != 0x15D16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D16Cu; }
        if (ctx->pc != 0x15D16Cu) { return; }
    }
    ctx->pc = 0x15D16Cu;
    // 0x15d16c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x15D16Cu;
    {
        const bool branch_taken_0x15d16c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D16Cu;
            // 0x15d170: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d16c) {
            ctx->pc = 0x15D1A0u;
            goto label_15d1a0;
        }
    }
    ctx->pc = 0x15D174u;
    // 0x15d174: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d178: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x15d178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15d17c: 0x24423d30  addiu       $v0, $v0, 0x3D30
    ctx->pc = 0x15d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15664));
    // 0x15d180: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d184: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d188: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d18c: 0x24423c70  addiu       $v0, $v0, 0x3C70
    ctx->pc = 0x15d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15472));
    // 0x15d190: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d194: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D194u;
    {
        const bool branch_taken_0x15d194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D194u;
            // 0x15d198: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d194) {
            ctx->pc = 0x15D1D0u;
            goto label_15d1d0;
        }
    }
    ctx->pc = 0x15D19Cu;
    // 0x15d19c: 0x0  nop
    ctx->pc = 0x15d19cu;
    // NOP
label_15d1a0:
    // 0x15d1a0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15d1a4: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x15d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x15d1a8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d1ac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d1b0: 0x24633d30  addiu       $v1, $v1, 0x3D30
    ctx->pc = 0x15d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15664));
    // 0x15d1b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d1b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d1bc: 0x24423c70  addiu       $v0, $v0, 0x3C70
    ctx->pc = 0x15d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15472));
    // 0x15d1c0: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d1c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d1c8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x15d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x15d1cc: 0x0  nop
    ctx->pc = 0x15d1ccu;
    // NOP
label_15d1d0:
    // 0x15d1d0: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D1D0u;
    SET_GPR_U32(ctx, 31, 0x15D1D8u);
    ctx->pc = 0x15D1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1D0u;
            // 0x15d1d4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D1D8u; }
        if (ctx->pc != 0x15D1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D1D8u; }
        if (ctx->pc != 0x15D1D8u) { return; }
    }
    ctx->pc = 0x15D1D8u;
    // 0x15d1d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1E4u;
            // 0x15d1e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1A0u: goto label_15d1a0;
            case 0x15D1D0u: goto label_15d1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D1ECu;
}
