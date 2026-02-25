#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawColorWaku
// Address: 0x15d480 - 0x15d52c
void drawColorWaku_0x15d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawColorWaku_0x15d480");
#endif

    ctx->pc = 0x15d480u;

    // 0x15d480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d484: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d488: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d48c: 0x24429c98  addiu       $v0, $v0, -0x6368
    ctx->pc = 0x15d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941848));
    // 0x15d490: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d494: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d498: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d49c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4a0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x15d4a4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D4A4u;
    SET_GPR_U32(ctx, 31, 0x15D4ACu);
    ctx->pc = 0x15D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4A4u;
            // 0x15d4a8: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4ACu; }
        if (ctx->pc != 0x15D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4ACu; }
        if (ctx->pc != 0x15D4ACu) { return; }
    }
    ctx->pc = 0x15D4ACu;
    // 0x15d4ac: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x15D4ACu;
    {
        const bool branch_taken_0x15d4ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4ACu;
            // 0x15d4b0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4ac) {
            ctx->pc = 0x15D4E0u;
            goto label_15d4e0;
        }
    }
    ctx->pc = 0x15D4B4u;
    // 0x15d4b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d4b8: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15d4bc: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x15d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
    // 0x15d4c0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d4c4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d4c8: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d4cc: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x15d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x15d4d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d4d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D4D4u;
    {
        const bool branch_taken_0x15d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4D4u;
            // 0x15d4d8: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4d4) {
            ctx->pc = 0x15D510u;
            goto label_15d510;
        }
    }
    ctx->pc = 0x15D4DCu;
    // 0x15d4dc: 0x0  nop
    ctx->pc = 0x15d4dcu;
    // NOP
label_15d4e0:
    // 0x15d4e0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15d4e4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15d4e8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d4ec: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d4f0: 0x24634370  addiu       $v1, $v1, 0x4370
    ctx->pc = 0x15d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17264));
    // 0x15d4f4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d4f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d4fc: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x15d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x15d500: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d504: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d508: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x15d508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x15d50c: 0x0  nop
    ctx->pc = 0x15d50cu;
    // NOP
label_15d510:
    // 0x15d510: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D510u;
    SET_GPR_U32(ctx, 31, 0x15D518u);
    ctx->pc = 0x15D514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D510u;
            // 0x15d514: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D518u; }
        if (ctx->pc != 0x15D518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D518u; }
        if (ctx->pc != 0x15D518u) { return; }
    }
    ctx->pc = 0x15D518u;
    // 0x15d518: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d524: 0x3e00008  jr          $ra
    ctx->pc = 0x15D524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D524u;
            // 0x15d528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D510u: goto label_15d510;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D52Cu;
}
