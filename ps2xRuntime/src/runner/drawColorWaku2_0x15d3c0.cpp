#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawColorWaku2
// Address: 0x15d3c0 - 0x15d474
void drawColorWaku2_0x15d3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawColorWaku2_0x15d3c0");
#endif

    ctx->pc = 0x15d3c0u;

    // 0x15d3c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d3c4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15d3c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d3cc: 0x24429c98  addiu       $v0, $v0, -0x6368
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941848));
    // 0x15d3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d3d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d3d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15d3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15d3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3e0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x15d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x15d3e4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15D3E4u;
    SET_GPR_U32(ctx, 31, 0x15D3ECu);
    ctx->pc = 0x15D3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3E4u;
            // 0x15d3e8: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3ECu; }
        if (ctx->pc != 0x15D3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D3ECu; }
        if (ctx->pc != 0x15D3ECu) { return; }
    }
    ctx->pc = 0x15D3ECu;
    // 0x15d3ec: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x15D3ECu;
    {
        const bool branch_taken_0x15d3ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3ECu;
            // 0x15d3f0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3ec) {
            ctx->pc = 0x15D428u;
            goto label_15d428;
        }
    }
    ctx->pc = 0x15D3F4u;
    // 0x15d3f4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15d3f8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d3fc: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x15d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x15d400: 0x24634370  addiu       $v1, $v1, 0x4370
    ctx->pc = 0x15d400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17264));
    // 0x15d404: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d408: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15d40c: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x15d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x15d410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d414: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d418: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d41c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D41Cu;
    {
        const bool branch_taken_0x15d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D41Cu;
            // 0x15d420: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d41c) {
            ctx->pc = 0x15D458u;
            goto label_15d458;
        }
    }
    ctx->pc = 0x15D424u;
    // 0x15d424: 0x0  nop
    ctx->pc = 0x15d424u;
    // NOP
label_15d428:
    // 0x15d428: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15d42c: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x15d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x15d430: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15d430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15d434: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15d434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15d438: 0x24634370  addiu       $v1, $v1, 0x4370
    ctx->pc = 0x15d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17264));
    // 0x15d43c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d444: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x15d448: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x15d448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x15d44c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d450: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x15d450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x15d454: 0x0  nop
    ctx->pc = 0x15d454u;
    // NOP
label_15d458:
    // 0x15d458: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D458u;
    SET_GPR_U32(ctx, 31, 0x15D460u);
    ctx->pc = 0x15D45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D458u;
            // 0x15d45c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D460u; }
        if (ctx->pc != 0x15D460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D460u; }
        if (ctx->pc != 0x15D460u) { return; }
    }
    ctx->pc = 0x15D460u;
    // 0x15d460: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D46Cu;
            // 0x15d470: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D428u: goto label_15d428;
            case 0x15D458u: goto label_15d458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D474u;
}
