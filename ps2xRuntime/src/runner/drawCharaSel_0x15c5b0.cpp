#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawCharaSel
// Address: 0x15c5b0 - 0x15c6e4
void drawCharaSel_0x15c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawCharaSel_0x15c5b0");
#endif

    ctx->pc = 0x15c5b0u;

    // 0x15c5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15c5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15c5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15c5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c5c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c5c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c5c8: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C5C8u;
    {
        const bool branch_taken_0x15c5c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5C8u;
            // 0x15c5cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5c8) {
            ctx->pc = 0x15C5DCu;
            goto label_15c5dc;
        }
    }
    ctx->pc = 0x15C5D0u;
    // 0x15c5d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15c5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15c5d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C5D4u;
    {
        const bool branch_taken_0x15c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5D4u;
            // 0x15c5d8: 0x8c303590  lw          $s0, 0x3590($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5d4) {
            ctx->pc = 0x15C5E4u;
            goto label_15c5e4;
        }
    }
    ctx->pc = 0x15C5DCu;
label_15c5dc:
    // 0x15c5dc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15c5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15c5e0: 0x8c309ce8  lw          $s0, -0x6318($at)
    ctx->pc = 0x15c5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941928)));
label_15c5e4:
    // 0x15c5e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C5E4u;
    {
        const bool branch_taken_0x15c5e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5E4u;
            // 0x15c5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5e4) {
            ctx->pc = 0x15C5F8u;
            goto label_15c5f8;
        }
    }
    ctx->pc = 0x15C5ECu;
    // 0x15c5ec: 0xc0574f0  jal         func_15D3C0
    ctx->pc = 0x15C5ECu;
    SET_GPR_U32(ctx, 31, 0x15C5F4u);
    ctx->pc = 0x15C5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5ECu;
            // 0x15c5f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D3C0u;
    if (runtime->hasFunction(0x15D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C5F4u; }
        if (ctx->pc != 0x15C5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku2_0x15d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C5F4u; }
        if (ctx->pc != 0x15C5F4u) { return; }
    }
    ctx->pc = 0x15C5F4u;
    // 0x15c5f4: 0x0  nop
    ctx->pc = 0x15c5f4u;
    // NOP
label_15c5f8:
    // 0x15c5f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c5fc: 0x12050004  beq         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C5FCu;
    {
        const bool branch_taken_0x15c5fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5FCu;
            // 0x15c600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5fc) {
            ctx->pc = 0x15C610u;
            goto label_15c610;
        }
    }
    ctx->pc = 0x15C604u;
    // 0x15c604: 0xc0574f0  jal         func_15D3C0
    ctx->pc = 0x15C604u;
    SET_GPR_U32(ctx, 31, 0x15C60Cu);
    ctx->pc = 0x15D3C0u;
    if (runtime->hasFunction(0x15D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C60Cu; }
        if (ctx->pc != 0x15C60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku2_0x15d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C60Cu; }
        if (ctx->pc != 0x15C60Cu) { return; }
    }
    ctx->pc = 0x15C60Cu;
    // 0x15c60c: 0x0  nop
    ctx->pc = 0x15c60cu;
    // NOP
label_15c610:
    // 0x15c610: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c614: 0x12050004  beq         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C614u;
    {
        const bool branch_taken_0x15c614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C614u;
            // 0x15c618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c614) {
            ctx->pc = 0x15C628u;
            goto label_15c628;
        }
    }
    ctx->pc = 0x15C61Cu;
    // 0x15c61c: 0xc0574f0  jal         func_15D3C0
    ctx->pc = 0x15C61Cu;
    SET_GPR_U32(ctx, 31, 0x15C624u);
    ctx->pc = 0x15D3C0u;
    if (runtime->hasFunction(0x15D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C624u; }
        if (ctx->pc != 0x15C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku2_0x15d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C624u; }
        if (ctx->pc != 0x15C624u) { return; }
    }
    ctx->pc = 0x15C624u;
    // 0x15c624: 0x0  nop
    ctx->pc = 0x15c624u;
    // NOP
label_15c628:
    // 0x15c628: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15c62c: 0x12050004  beq         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C62Cu;
    {
        const bool branch_taken_0x15c62c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C62Cu;
            // 0x15c630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c62c) {
            ctx->pc = 0x15C640u;
            goto label_15c640;
        }
    }
    ctx->pc = 0x15C634u;
    // 0x15c634: 0xc0574f0  jal         func_15D3C0
    ctx->pc = 0x15C634u;
    SET_GPR_U32(ctx, 31, 0x15C63Cu);
    ctx->pc = 0x15D3C0u;
    if (runtime->hasFunction(0x15D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C63Cu; }
        if (ctx->pc != 0x15C63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku2_0x15d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C63Cu; }
        if (ctx->pc != 0x15C63Cu) { return; }
    }
    ctx->pc = 0x15C63Cu;
    // 0x15c63c: 0x0  nop
    ctx->pc = 0x15c63cu;
    // NOP
label_15c640:
    // 0x15c640: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15c644: 0x12050004  beq         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C644u;
    {
        const bool branch_taken_0x15c644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C644u;
            // 0x15c648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c644) {
            ctx->pc = 0x15C658u;
            goto label_15c658;
        }
    }
    ctx->pc = 0x15C64Cu;
    // 0x15c64c: 0xc0574f0  jal         func_15D3C0
    ctx->pc = 0x15C64Cu;
    SET_GPR_U32(ctx, 31, 0x15C654u);
    ctx->pc = 0x15D3C0u;
    if (runtime->hasFunction(0x15D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C654u; }
        if (ctx->pc != 0x15C654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku2_0x15d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C654u; }
        if (ctx->pc != 0x15C654u) { return; }
    }
    ctx->pc = 0x15C654u;
    // 0x15c654: 0x0  nop
    ctx->pc = 0x15c654u;
    // NOP
label_15c658:
    // 0x15c658: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15c658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c65c: 0x12050004  beq         $s0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C65Cu;
    {
        const bool branch_taken_0x15c65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x15C660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C65Cu;
            // 0x15c660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c65c) {
            ctx->pc = 0x15C670u;
            goto label_15c670;
        }
    }
    ctx->pc = 0x15C664u;
    // 0x15c664: 0xc0574f0  jal         func_15D3C0
    ctx->pc = 0x15C664u;
    SET_GPR_U32(ctx, 31, 0x15C66Cu);
    ctx->pc = 0x15D3C0u;
    if (runtime->hasFunction(0x15D3C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C66Cu; }
        if (ctx->pc != 0x15C66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawColorWaku2_0x15d3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C66Cu; }
        if (ctx->pc != 0x15C66Cu) { return; }
    }
    ctx->pc = 0x15C66Cu;
    // 0x15c66c: 0x0  nop
    ctx->pc = 0x15c66cu;
    // NOP
label_15c670:
    // 0x15c670: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C670u;
    {
        const bool branch_taken_0x15c670 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x15C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C670u;
            // 0x15c674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c670) {
            ctx->pc = 0x15C680u;
            goto label_15c680;
        }
    }
    ctx->pc = 0x15C678u;
    // 0x15c678: 0xc05754c  jal         func_15D530
    ctx->pc = 0x15C678u;
    SET_GPR_U32(ctx, 31, 0x15C680u);
    ctx->pc = 0x15C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C678u;
            // 0x15c67c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D530u;
    if (runtime->hasFunction(0x15D530u)) {
        auto targetFn = runtime->lookupFunction(0x15D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C680u; }
        if (ctx->pc != 0x15C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawYajirushi_0x15d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C680u; }
        if (ctx->pc != 0x15C680u) { return; }
    }
    ctx->pc = 0x15C680u;
label_15c680:
    // 0x15c680: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x15c680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x15c684: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C684u;
    {
        const bool branch_taken_0x15c684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C684u;
            // 0x15c688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c684) {
            ctx->pc = 0x15C698u;
            goto label_15c698;
        }
    }
    ctx->pc = 0x15C68Cu;
    // 0x15c68c: 0xc05754c  jal         func_15D530
    ctx->pc = 0x15C68Cu;
    SET_GPR_U32(ctx, 31, 0x15C694u);
    ctx->pc = 0x15C690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C68Cu;
            // 0x15c690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D530u;
    if (runtime->hasFunction(0x15D530u)) {
        auto targetFn = runtime->lookupFunction(0x15D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C694u; }
        if (ctx->pc != 0x15C694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawYajirushi_0x15d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C694u; }
        if (ctx->pc != 0x15C694u) { return; }
    }
    ctx->pc = 0x15C694u;
    // 0x15c694: 0x0  nop
    ctx->pc = 0x15c694u;
    // NOP
label_15c698:
    // 0x15c698: 0xc0574b0  jal         func_15D2C0
    ctx->pc = 0x15C698u;
    SET_GPR_U32(ctx, 31, 0x15C6A0u);
    ctx->pc = 0x15C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C698u;
            // 0x15c69c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2C0u;
    if (runtime->hasFunction(0x15D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6A0u; }
        if (ctx->pc != 0x15C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawPlayerNo2_0x15d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6A0u; }
        if (ctx->pc != 0x15C6A0u) { return; }
    }
    ctx->pc = 0x15C6A0u;
    // 0x15c6a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15c6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6a8: 0xc057364  jal         func_15CD90
    ctx->pc = 0x15C6A8u;
    SET_GPR_U32(ctx, 31, 0x15C6B0u);
    ctx->pc = 0x15C6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6A8u;
            // 0x15c6ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD90u;
    if (runtime->hasFunction(0x15CD90u)) {
        auto targetFn = runtime->lookupFunction(0x15CD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6B0u; }
        if (ctx->pc != 0x15C6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawCharName_0x15cd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6B0u; }
        if (ctx->pc != 0x15C6B0u) { return; }
    }
    ctx->pc = 0x15C6B0u;
    // 0x15c6b0: 0xc057594  jal         func_15D650
    ctx->pc = 0x15C6B0u;
    SET_GPR_U32(ctx, 31, 0x15C6B8u);
    ctx->pc = 0x15C6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6B0u;
            // 0x15c6b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D650u;
    if (runtime->hasFunction(0x15D650u)) {
        auto targetFn = runtime->lookupFunction(0x15D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6B8u; }
        if (ctx->pc != 0x15C6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawCharaWaku_0x15d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6B8u; }
        if (ctx->pc != 0x15C6B8u) { return; }
    }
    ctx->pc = 0x15C6B8u;
    // 0x15c6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c6bc: 0xc0573ac  jal         func_15CEB0
    ctx->pc = 0x15C6BCu;
    SET_GPR_U32(ctx, 31, 0x15C6C4u);
    ctx->pc = 0x15C6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6BCu;
            // 0x15c6c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEB0u;
    if (runtime->hasFunction(0x15CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6C4u; }
        if (ctx->pc != 0x15C6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawChar_0x15ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6C4u; }
        if (ctx->pc != 0x15C6C4u) { return; }
    }
    ctx->pc = 0x15C6C4u;
    // 0x15c6c4: 0xc0575d4  jal         func_15D750
    ctx->pc = 0x15C6C4u;
    SET_GPR_U32(ctx, 31, 0x15C6CCu);
    ctx->pc = 0x15C6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6C4u;
            // 0x15c6c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D750u;
    if (runtime->hasFunction(0x15D750u)) {
        auto targetFn = runtime->lookupFunction(0x15D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6CCu; }
        if (ctx->pc != 0x15C6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawWaku_0x15d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6CCu; }
        if (ctx->pc != 0x15C6CCu) { return; }
    }
    ctx->pc = 0x15C6CCu;
    // 0x15c6cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15c6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15c6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6DCu;
            // 0x15c6e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15C5DCu: goto label_15c5dc;
            case 0x15C5E4u: goto label_15c5e4;
            case 0x15C5F8u: goto label_15c5f8;
            case 0x15C610u: goto label_15c610;
            case 0x15C628u: goto label_15c628;
            case 0x15C640u: goto label_15c640;
            case 0x15C658u: goto label_15c658;
            case 0x15C670u: goto label_15c670;
            case 0x15C680u: goto label_15c680;
            case 0x15C698u: goto label_15c698;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15C6E4u;
}
