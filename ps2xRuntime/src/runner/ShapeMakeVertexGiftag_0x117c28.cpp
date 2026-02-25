#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeMakeVertexGiftag
// Address: 0x117c28 - 0x117cd0
void ShapeMakeVertexGiftag_0x117c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeMakeVertexGiftag_0x117c28");
#endif

    ctx->pc = 0x117c28u;

    // 0x117c28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117c2c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x117c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c30: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x117c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x117c34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x117c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117c3c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x117c40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c44: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x117c44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x117c48: 0xc045e6a  jal         func_1179A8
    ctx->pc = 0x117C48u;
    SET_GPR_U32(ctx, 31, 0x117C50u);
    ctx->pc = 0x117C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C48u;
            // 0x117c4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1179A8u;
    if (runtime->hasFunction(0x1179A8u)) {
        auto targetFn = runtime->lookupFunction(0x1179A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C50u; }
        if (ctx->pc != 0x117C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeGetGiftag_0x1179a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C50u; }
        if (ctx->pc != 0x117C50u) { return; }
    }
    ctx->pc = 0x117C50u;
    // 0x117c50: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x117c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x117c54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x117c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x117c58: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x117c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x117c5c: 0xc045e2e  jal         func_1178B8
    ctx->pc = 0x117C5Cu;
    SET_GPR_U32(ctx, 31, 0x117C64u);
    ctx->pc = 0x117C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C5Cu;
            // 0x117c60: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1178B8u;
    if (runtime->hasFunction(0x1178B8u)) {
        auto targetFn = runtime->lookupFunction(0x1178B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C64u; }
        if (ctx->pc != 0x117C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1GetIptr_0x1178b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C64u; }
        if (ctx->pc != 0x117C64u) { return; }
    }
    ctx->pc = 0x117C64u;
    // 0x117c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x117c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117c68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117c6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117c6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x117c70: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117C70u;
    {
        const bool branch_taken_0x117c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x117c70) {
            ctx->pc = 0x117C88u;
            goto label_117c88;
        }
    }
    ctx->pc = 0x117C78u;
    // 0x117c78: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x117C78u;
    SET_GPR_U32(ctx, 31, 0x117C80u);
    ctx->pc = 0x117C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C78u;
            // 0x117c7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C80u; }
        if (ctx->pc != 0x117C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C80u; }
        if (ctx->pc != 0x117C80u) { return; }
    }
    ctx->pc = 0x117C80u;
    // 0x117c80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x117C80u;
    {
        const bool branch_taken_0x117c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C80u;
            // 0x117c84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c80) {
            ctx->pc = 0x117CC4u;
            goto label_117cc4;
        }
    }
    ctx->pc = 0x117C88u;
label_117c88:
    // 0x117c88: 0xc043ef6  jal         func_10FBD8
    ctx->pc = 0x117C88u;
    SET_GPR_U32(ctx, 31, 0x117C90u);
    ctx->pc = 0x10FBD8u;
    if (runtime->hasFunction(0x10FBD8u)) {
        auto targetFn = runtime->lookupFunction(0x10FBD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C90u; }
        if (ctx->pc != 0x117C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LumpStart_0x10fbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117C90u; }
        if (ctx->pc != 0x117C90u) { return; }
    }
    ctx->pc = 0x117C90u;
    // 0x117c90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x117C90u;
    {
        const bool branch_taken_0x117c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117C90u;
            // 0x117c94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c90) {
            ctx->pc = 0x117CC4u;
            goto label_117cc4;
        }
    }
    ctx->pc = 0x117C98u;
    // 0x117c98: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x117C98u;
    SET_GPR_U32(ctx, 31, 0x117CA0u);
    ctx->pc = 0x117C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117C98u;
            // 0x117c9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (runtime->hasFunction(0x10FE10u)) {
        auto targetFn = runtime->lookupFunction(0x10FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CA0u; }
        if (ctx->pc != 0x117CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_Lump_0x10fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CA0u; }
        if (ctx->pc != 0x117CA0u) { return; }
    }
    ctx->pc = 0x117CA0u;
    // 0x117ca0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117CA0u;
    {
        const bool branch_taken_0x117ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CA0u;
            // 0x117ca4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ca0) {
            ctx->pc = 0x117CC4u;
            goto label_117cc4;
        }
    }
    ctx->pc = 0x117CA8u;
    // 0x117ca8: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x117CA8u;
    SET_GPR_U32(ctx, 31, 0x117CB0u);
    ctx->pc = 0x117CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117CA8u;
            // 0x117cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (runtime->hasFunction(0x10FE10u)) {
        auto targetFn = runtime->lookupFunction(0x10FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CB0u; }
        if (ctx->pc != 0x117CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_Lump_0x10fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CB0u; }
        if (ctx->pc != 0x117CB0u) { return; }
    }
    ctx->pc = 0x117CB0u;
    // 0x117cb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117CB0u;
    {
        const bool branch_taken_0x117cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CB0u;
            // 0x117cb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cb0) {
            ctx->pc = 0x117CC4u;
            goto label_117cc4;
        }
    }
    ctx->pc = 0x117CB8u;
    // 0x117cb8: 0xc043f30  jal         func_10FCC0
    ctx->pc = 0x117CB8u;
    SET_GPR_U32(ctx, 31, 0x117CC0u);
    ctx->pc = 0x10FCC0u;
    if (runtime->hasFunction(0x10FCC0u)) {
        auto targetFn = runtime->lookupFunction(0x10FCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CC0u; }
        if (ctx->pc != 0x117CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LumpEnd_0x10fcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117CC0u; }
        if (ctx->pc != 0x117CC0u) { return; }
    }
    ctx->pc = 0x117CC0u;
    // 0x117cc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_117cc4:
    // 0x117cc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x117cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x117CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117CC8u;
            // 0x117ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117C88u: goto label_117c88;
            case 0x117CC4u: goto label_117cc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117CD0u;
}
