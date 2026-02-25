#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardLoadFunc
// Address: 0x182e40 - 0x18396c
void MemCardLoadFunc_0x182e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardLoadFunc_0x182e40");
#endif

    ctx->pc = 0x182e40u;

    // 0x182e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x182e44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x182e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x182e48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x182e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x182e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182e50: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x182e50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x182e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182e5c: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x182e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x182e60: 0xc0619e4  jal         func_186790
    ctx->pc = 0x182E60u;
    SET_GPR_U32(ctx, 31, 0x182E68u);
    ctx->pc = 0x182E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182E60u;
            // 0x182e64: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186790u;
    if (runtime->hasFunction(0x186790u)) {
        auto targetFn = runtime->lookupFunction(0x186790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E68u; }
        if (ctx->pc != 0x182E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgCacheClear_0x186790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E68u; }
        if (ctx->pc != 0x182E68u) { return; }
    }
    ctx->pc = 0x182E68u;
    // 0x182e68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182e6c: 0x0  nop
    ctx->pc = 0x182e6cu;
    // NOP
label_182e70:
    // 0x182e70: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x182E70u;
    SET_GPR_U32(ctx, 31, 0x182E78u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E78u; }
        if (ctx->pc != 0x182E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182E78u; }
        if (ctx->pc != 0x182E78u) { return; }
    }
    ctx->pc = 0x182E78u;
    // 0x182e78: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x182e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x182e7c: 0x12420116  beq         $s2, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x182E7Cu;
    {
        const bool branch_taken_0x182e7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x182E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E7Cu;
            // 0x182e80: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e7c) {
            ctx->pc = 0x1832D8u;
            goto label_1832d8;
        }
    }
    ctx->pc = 0x182E84u;
    // 0x182e84: 0x12420108  beq         $s2, $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x182E84u;
    {
        const bool branch_taken_0x182e84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182e84) {
            ctx->pc = 0x1832A8u;
            goto label_1832a8;
        }
    }
    ctx->pc = 0x182E8Cu;
    // 0x182e8c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x182e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x182e90: 0x12420101  beq         $s2, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x182E90u;
    {
        const bool branch_taken_0x182e90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x182E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E90u;
            // 0x182e94: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e90) {
            ctx->pc = 0x183298u;
            goto label_183298;
        }
    }
    ctx->pc = 0x182E98u;
    // 0x182e98: 0x124200f1  beq         $s2, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x182E98u;
    {
        const bool branch_taken_0x182e98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182e98) {
            ctx->pc = 0x183260u;
            goto label_183260;
        }
    }
    ctx->pc = 0x182EA0u;
    // 0x182ea0: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x182ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x182ea4: 0x124200aa  beq         $s2, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x182EA4u;
    {
        const bool branch_taken_0x182ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x182EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EA4u;
            // 0x182ea8: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ea4) {
            ctx->pc = 0x183150u;
            goto label_183150;
        }
    }
    ctx->pc = 0x182EACu;
    // 0x182eac: 0x12420064  beq         $s2, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x182EACu;
    {
        const bool branch_taken_0x182eac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182eac) {
            ctx->pc = 0x183040u;
            goto label_183040;
        }
    }
    ctx->pc = 0x182EB4u;
    // 0x182eb4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x182eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x182eb8: 0x1242004f  beq         $s2, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x182EB8u;
    {
        const bool branch_taken_0x182eb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x182EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EB8u;
            // 0x182ebc: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182eb8) {
            ctx->pc = 0x182FF8u;
            goto label_182ff8;
        }
    }
    ctx->pc = 0x182EC0u;
    // 0x182ec0: 0x1242003b  beq         $s2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x182EC0u;
    {
        const bool branch_taken_0x182ec0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182ec0) {
            ctx->pc = 0x182FB0u;
            goto label_182fb0;
        }
    }
    ctx->pc = 0x182EC8u;
    // 0x182ec8: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x182ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x182ecc: 0x12420026  beq         $s2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x182ECCu;
    {
        const bool branch_taken_0x182ecc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x182ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182ECCu;
            // 0x182ed0: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ecc) {
            ctx->pc = 0x182F68u;
            goto label_182f68;
        }
    }
    ctx->pc = 0x182ED4u;
    // 0x182ed4: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x182ED4u;
    {
        const bool branch_taken_0x182ed4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182ed4) {
            ctx->pc = 0x182F20u;
            goto label_182f20;
        }
    }
    ctx->pc = 0x182EDCu;
    // 0x182edc: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x182edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x182ee0: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x182EE0u;
    {
        const bool branch_taken_0x182ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x182EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182EE0u;
            // 0x182ee4: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ee0) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182EE8u;
    // 0x182ee8: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182EE8u;
    {
        const bool branch_taken_0x182ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182ee8) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182EF0u;
    // 0x182ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182ef4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182EF4u;
    {
        const bool branch_taken_0x182ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x182ef4) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182EFCu;
    // 0x182efc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x182EFCu;
    {
        const bool branch_taken_0x182efc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x182efc) {
            ctx->pc = 0x182F10u;
            goto label_182f10;
        }
    }
    ctx->pc = 0x182F04u;
    // 0x182f04: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x182F04u;
    {
        const bool branch_taken_0x182f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f04) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182F0Cu;
    // 0x182f0c: 0x0  nop
    ctx->pc = 0x182f0cu;
    // NOP
label_182f10:
    // 0x182f10: 0xc0619c0  jal         func_186700
    ctx->pc = 0x182F10u;
    SET_GPR_U32(ctx, 31, 0x182F18u);
    ctx->pc = 0x182F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F10u;
            // 0x182f14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F18u; }
        if (ctx->pc != 0x182F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F18u; }
        if (ctx->pc != 0x182F18u) { return; }
    }
    ctx->pc = 0x182F18u;
    // 0x182f18: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x182F18u;
    {
        const bool branch_taken_0x182f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f18) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182F20u;
label_182f20:
    // 0x182f20: 0xc0619c0  jal         func_186700
    ctx->pc = 0x182F20u;
    SET_GPR_U32(ctx, 31, 0x182F28u);
    ctx->pc = 0x182F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F20u;
            // 0x182f24: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F28u; }
        if (ctx->pc != 0x182F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F28u; }
        if (ctx->pc != 0x182F28u) { return; }
    }
    ctx->pc = 0x182F28u;
    // 0x182f28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x182f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x182f2c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x182f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x182f30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x182f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x182f34: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x182f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x182f38: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x182f38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x182f3c: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x182F3Cu;
    {
        const bool branch_taken_0x182f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F3Cu;
            // 0x182f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f3c) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182F44u;
    // 0x182f44: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x182f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x182f48: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x182f48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x182f4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f54: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x182F54u;
    SET_GPR_U32(ctx, 31, 0x182F5Cu);
    ctx->pc = 0x182F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F54u;
            // 0x182f58: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F5Cu; }
        if (ctx->pc != 0x182F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F5Cu; }
        if (ctx->pc != 0x182F5Cu) { return; }
    }
    ctx->pc = 0x182F5Cu;
    // 0x182f5c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x182F5Cu;
    {
        const bool branch_taken_0x182f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182f5c) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182F64u;
    // 0x182f64: 0x0  nop
    ctx->pc = 0x182f64u;
    // NOP
label_182f68:
    // 0x182f68: 0xc0619c0  jal         func_186700
    ctx->pc = 0x182F68u;
    SET_GPR_U32(ctx, 31, 0x182F70u);
    ctx->pc = 0x182F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F68u;
            // 0x182f6c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F70u; }
        if (ctx->pc != 0x182F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F70u; }
        if (ctx->pc != 0x182F70u) { return; }
    }
    ctx->pc = 0x182F70u;
    // 0x182f70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x182f74: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x182f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x182f78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x182f7c: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x182f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x182f80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x182f80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x182f84: 0x104000e0  beqz        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x182F84u;
    {
        const bool branch_taken_0x182f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182F84u;
            // 0x182f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182f84) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182F8Cu;
    // 0x182f8c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x182f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x182f90: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x182f90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x182f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f9c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x182F9Cu;
    SET_GPR_U32(ctx, 31, 0x182FA4u);
    ctx->pc = 0x182FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182F9Cu;
            // 0x182fa0: 0x24120190  addiu       $s2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FA4u; }
        if (ctx->pc != 0x182FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FA4u; }
        if (ctx->pc != 0x182FA4u) { return; }
    }
    ctx->pc = 0x182FA4u;
    // 0x182fa4: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x182FA4u;
    {
        const bool branch_taken_0x182fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182fa4) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182FACu;
    // 0x182fac: 0x0  nop
    ctx->pc = 0x182facu;
    // NOP
label_182fb0:
    // 0x182fb0: 0xc0619c0  jal         func_186700
    ctx->pc = 0x182FB0u;
    SET_GPR_U32(ctx, 31, 0x182FB8u);
    ctx->pc = 0x182FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FB0u;
            // 0x182fb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FB8u; }
        if (ctx->pc != 0x182FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FB8u; }
        if (ctx->pc != 0x182FB8u) { return; }
    }
    ctx->pc = 0x182FB8u;
    // 0x182fb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x182fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x182fbc: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x182fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x182fc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x182fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x182fc4: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x182fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x182fc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x182fc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x182fcc: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x182FCCu;
    {
        const bool branch_taken_0x182fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182FCCu;
            // 0x182fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182fcc) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182FD4u;
    // 0x182fd4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x182fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x182fd8: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x182fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x182fdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x182fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182fe4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x182FE4u;
    SET_GPR_U32(ctx, 31, 0x182FECu);
    ctx->pc = 0x182FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FE4u;
            // 0x182fe8: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FECu; }
        if (ctx->pc != 0x182FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182FECu; }
        if (ctx->pc != 0x182FECu) { return; }
    }
    ctx->pc = 0x182FECu;
    // 0x182fec: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x182FECu;
    {
        const bool branch_taken_0x182fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182fec) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x182FF4u;
    // 0x182ff4: 0x0  nop
    ctx->pc = 0x182ff4u;
    // NOP
label_182ff8:
    // 0x182ff8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x182FF8u;
    SET_GPR_U32(ctx, 31, 0x183000u);
    ctx->pc = 0x182FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182FF8u;
            // 0x182ffc: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183000u; }
        if (ctx->pc != 0x183000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183000u; }
        if (ctx->pc != 0x183000u) { return; }
    }
    ctx->pc = 0x183000u;
    // 0x183000: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183004: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x183004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x183008: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18300c: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x18300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x183010: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183010u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183014: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x183014u;
    {
        const bool branch_taken_0x183014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183014u;
            // 0x183018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183014) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x18301Cu;
    // 0x18301c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18301cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183020: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183020u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18302c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18302Cu;
    SET_GPR_U32(ctx, 31, 0x183034u);
    ctx->pc = 0x183030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18302Cu;
            // 0x183030: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183034u; }
        if (ctx->pc != 0x183034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183034u; }
        if (ctx->pc != 0x183034u) { return; }
    }
    ctx->pc = 0x183034u;
    // 0x183034: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x183034u;
    {
        const bool branch_taken_0x183034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183034) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x18303Cu;
    // 0x18303c: 0x0  nop
    ctx->pc = 0x18303cu;
    // NOP
label_183040:
    // 0x183040: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183040u;
    SET_GPR_U32(ctx, 31, 0x183048u);
    ctx->pc = 0x183044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183040u;
            // 0x183044: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183048u; }
        if (ctx->pc != 0x183048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183048u; }
        if (ctx->pc != 0x183048u) { return; }
    }
    ctx->pc = 0x183048u;
    // 0x183048: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18304c: 0xc061930  jal         func_1864C0
    ctx->pc = 0x18304Cu;
    SET_GPR_U32(ctx, 31, 0x183054u);
    ctx->pc = 0x183050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18304Cu;
            // 0x183050: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183054u; }
        if (ctx->pc != 0x183054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183054u; }
        if (ctx->pc != 0x183054u) { return; }
    }
    ctx->pc = 0x183054u;
    // 0x183054: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183058: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x183058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x18305c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183060: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x183064: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183064u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183068: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183068u;
    {
        const bool branch_taken_0x183068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183068u;
            // 0x18306c: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183068) {
            ctx->pc = 0x183098u;
            goto label_183098;
        }
    }
    ctx->pc = 0x183070u;
    // 0x183070: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183074: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183078: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18307c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18307cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183080: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183084: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183088: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183088u;
    {
        const bool branch_taken_0x183088 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18308Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183088u;
            // 0x18308c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183088) {
            ctx->pc = 0x183098u;
            goto label_183098;
        }
    }
    ctx->pc = 0x183090u;
    // 0x183090: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183094: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183094u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_183098:
    // 0x183098: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18309c: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1830a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1830a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1830a4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x1830a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1830a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1830ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1830ACu;
    {
        const bool branch_taken_0x1830ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1830B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830ACu;
            // 0x1830b0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830ac) {
            ctx->pc = 0x1830E0u;
            goto label_1830e0;
        }
    }
    ctx->pc = 0x1830B4u;
    // 0x1830b4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1830b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1830b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1830b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1830bc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1830bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1830c0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1830c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1830c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1830c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1830c8: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1830c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1830cc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1830ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1830d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1830D0u;
    {
        const bool branch_taken_0x1830d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1830d0) {
            ctx->pc = 0x1830E0u;
            goto label_1830e0;
        }
    }
    ctx->pc = 0x1830D8u;
    // 0x1830d8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1830d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1830dc: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x1830dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_1830e0:
    // 0x1830e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1830e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1830e4: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1830e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1830e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1830ec: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1830ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1830f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1830f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1830f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1830F4u;
    {
        const bool branch_taken_0x1830f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1830F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830F4u;
            // 0x1830f8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1830f4) {
            ctx->pc = 0x183118u;
            goto label_183118;
        }
    }
    ctx->pc = 0x1830FCu;
    // 0x1830fc: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x183100: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183104: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x183104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x183108: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183108u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18310c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x18310Cu;
    {
        const bool branch_taken_0x18310c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18310c) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x183114u;
    // 0x183114: 0x0  nop
    ctx->pc = 0x183114u;
    // NOP
label_183118:
    // 0x183118: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18311c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183120: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183120u;
    {
        const bool branch_taken_0x183120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183120u;
            // 0x183124: 0x241200f0  addiu       $s2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183120) {
            ctx->pc = 0x183130u;
            goto label_183130;
        }
    }
    ctx->pc = 0x183128u;
    // 0x183128: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183128u;
    {
        const bool branch_taken_0x183128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183128) {
            ctx->pc = 0x183138u;
            goto label_183138;
        }
    }
    ctx->pc = 0x183130u;
label_183130:
    // 0x183130: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183134: 0x0  nop
    ctx->pc = 0x183134u;
    // NOP
label_183138:
    // 0x183138: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18313c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18313Cu;
    SET_GPR_U32(ctx, 31, 0x183144u);
    ctx->pc = 0x183140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18313Cu;
            // 0x183140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183144u; }
        if (ctx->pc != 0x183144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183144u; }
        if (ctx->pc != 0x183144u) { return; }
    }
    ctx->pc = 0x183144u;
    // 0x183144: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x183144u;
    {
        const bool branch_taken_0x183144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183144) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x18314Cu;
    // 0x18314c: 0x0  nop
    ctx->pc = 0x18314cu;
    // NOP
label_183150:
    // 0x183150: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183150u;
    SET_GPR_U32(ctx, 31, 0x183158u);
    ctx->pc = 0x183154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183150u;
            // 0x183154: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183158u; }
        if (ctx->pc != 0x183158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183158u; }
        if (ctx->pc != 0x183158u) { return; }
    }
    ctx->pc = 0x183158u;
    // 0x183158: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18315c: 0xc061930  jal         func_1864C0
    ctx->pc = 0x18315Cu;
    SET_GPR_U32(ctx, 31, 0x183164u);
    ctx->pc = 0x183160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18315Cu;
            // 0x183160: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183164u; }
        if (ctx->pc != 0x183164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183164u; }
        if (ctx->pc != 0x183164u) { return; }
    }
    ctx->pc = 0x183164u;
    // 0x183164: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183168: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x18316c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183170: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x183170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x183174: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183174u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183178: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183178u;
    {
        const bool branch_taken_0x183178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183178u;
            // 0x18317c: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183178) {
            ctx->pc = 0x1831A8u;
            goto label_1831a8;
        }
    }
    ctx->pc = 0x183180u;
    // 0x183180: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183188: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18318c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18318cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183190: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183194: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183198: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183198u;
    {
        const bool branch_taken_0x183198 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183198u;
            // 0x18319c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183198) {
            ctx->pc = 0x1831A8u;
            goto label_1831a8;
        }
    }
    ctx->pc = 0x1831A0u;
    // 0x1831a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1831a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1831a4: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1831a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_1831a8:
    // 0x1831a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1831a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1831ac: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x1831acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1831b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1831b4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x1831b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1831b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1831bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1831BCu;
    {
        const bool branch_taken_0x1831bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1831C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1831BCu;
            // 0x1831c0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831bc) {
            ctx->pc = 0x1831F0u;
            goto label_1831f0;
        }
    }
    ctx->pc = 0x1831C4u;
    // 0x1831c4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1831c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1831c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1831cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1831d0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1831d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1831d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1831d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1831d8: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1831dc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1831dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1831e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1831E0u;
    {
        const bool branch_taken_0x1831e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1831e0) {
            ctx->pc = 0x1831F0u;
            goto label_1831f0;
        }
    }
    ctx->pc = 0x1831E8u;
    // 0x1831e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1831e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1831ec: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x1831ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_1831f0:
    // 0x1831f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1831f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1831f4: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1831f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1831f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1831f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1831fc: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1831fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x183200: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183200u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183204: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183204u;
    {
        const bool branch_taken_0x183204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183204u;
            // 0x183208: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183204) {
            ctx->pc = 0x183228u;
            goto label_183228;
        }
    }
    ctx->pc = 0x18320Cu;
    // 0x18320c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x18320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x183210: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183214: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x183214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x183218: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183218u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18321c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x18321Cu;
    {
        const bool branch_taken_0x18321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18321c) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x183224u;
    // 0x183224: 0x0  nop
    ctx->pc = 0x183224u;
    // NOP
label_183228:
    // 0x183228: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18322c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183230u;
    {
        const bool branch_taken_0x183230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183230u;
            // 0x183234: 0x241200f0  addiu       $s2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183230) {
            ctx->pc = 0x183240u;
            goto label_183240;
        }
    }
    ctx->pc = 0x183238u;
    // 0x183238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183238u;
    {
        const bool branch_taken_0x183238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183238) {
            ctx->pc = 0x183248u;
            goto label_183248;
        }
    }
    ctx->pc = 0x183240u;
label_183240:
    // 0x183240: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183244: 0x0  nop
    ctx->pc = 0x183244u;
    // NOP
label_183248:
    // 0x183248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18324c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18324Cu;
    SET_GPR_U32(ctx, 31, 0x183254u);
    ctx->pc = 0x183250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18324Cu;
            // 0x183250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183254u; }
        if (ctx->pc != 0x183254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183254u; }
        if (ctx->pc != 0x183254u) { return; }
    }
    ctx->pc = 0x183254u;
    // 0x183254: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x183254u;
    {
        const bool branch_taken_0x183254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183254) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x18325Cu;
    // 0x18325c: 0x0  nop
    ctx->pc = 0x18325cu;
    // NOP
label_183260:
    // 0x183260: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183260u;
    SET_GPR_U32(ctx, 31, 0x183268u);
    ctx->pc = 0x183264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183260u;
            // 0x183264: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183268u; }
        if (ctx->pc != 0x183268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183268u; }
        if (ctx->pc != 0x183268u) { return; }
    }
    ctx->pc = 0x183268u;
    // 0x183268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x183268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18326c: 0x4410026  bgez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x18326Cu;
    {
        const bool branch_taken_0x18326c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x183270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18326Cu;
            // 0x183270: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18326c) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x183274u;
    // 0x183274: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x183274u;
    SET_GPR_U32(ctx, 31, 0x18327Cu);
    ctx->pc = 0x183278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183274u;
            // 0x183278: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18327Cu; }
        if (ctx->pc != 0x18327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18327Cu; }
        if (ctx->pc != 0x18327Cu) { return; }
    }
    ctx->pc = 0x18327Cu;
    // 0x18327c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18327cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183284: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183284u;
    SET_GPR_U32(ctx, 31, 0x18328Cu);
    ctx->pc = 0x183288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183284u;
            // 0x183288: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18328Cu; }
        if (ctx->pc != 0x18328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18328Cu; }
        if (ctx->pc != 0x18328Cu) { return; }
    }
    ctx->pc = 0x18328Cu;
    // 0x18328c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18328Cu;
    {
        const bool branch_taken_0x18328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18328c) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x183294u;
    // 0x183294: 0x0  nop
    ctx->pc = 0x183294u;
    // NOP
label_183298:
    // 0x183298: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183298u;
    SET_GPR_U32(ctx, 31, 0x1832A0u);
    ctx->pc = 0x18329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183298u;
            // 0x18329c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832A0u; }
        if (ctx->pc != 0x1832A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832A0u; }
        if (ctx->pc != 0x1832A0u) { return; }
    }
    ctx->pc = 0x1832A0u;
    // 0x1832a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1832A0u;
    {
        const bool branch_taken_0x1832a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1832a0) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x1832A8u;
label_1832a8:
    // 0x1832a8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1832A8u;
    SET_GPR_U32(ctx, 31, 0x1832B0u);
    ctx->pc = 0x1832ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832A8u;
            // 0x1832ac: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832B0u; }
        if (ctx->pc != 0x1832B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832B0u; }
        if (ctx->pc != 0x1832B0u) { return; }
    }
    ctx->pc = 0x1832B0u;
    // 0x1832b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1832b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832b4: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1832B4u;
    {
        const bool branch_taken_0x1832b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1832B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832B4u;
            // 0x1832b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832b4) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x1832BCu;
    // 0x1832bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1832bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1832c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832c4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1832C4u;
    SET_GPR_U32(ctx, 31, 0x1832CCu);
    ctx->pc = 0x1832C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832C4u;
            // 0x1832c8: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832CCu; }
        if (ctx->pc != 0x1832CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832CCu; }
        if (ctx->pc != 0x1832CCu) { return; }
    }
    ctx->pc = 0x1832CCu;
    // 0x1832cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1832CCu;
    {
        const bool branch_taken_0x1832cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1832cc) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x1832D4u;
    // 0x1832d4: 0x0  nop
    ctx->pc = 0x1832d4u;
    // NOP
label_1832d8:
    // 0x1832d8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1832D8u;
    SET_GPR_U32(ctx, 31, 0x1832E0u);
    ctx->pc = 0x1832DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1832D8u;
            // 0x1832dc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832E0u; }
        if (ctx->pc != 0x1832E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1832E0u; }
        if (ctx->pc != 0x1832E0u) { return; }
    }
    ctx->pc = 0x1832E0u;
    // 0x1832e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1832e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1832e4: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1832e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1832e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1832e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1832ec: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1832ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1832f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1832f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1832f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1832F4u;
    {
        const bool branch_taken_0x1832f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1832F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1832F4u;
            // 0x1832f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832f4) {
            ctx->pc = 0x183308u;
            goto label_183308;
        }
    }
    ctx->pc = 0x1832FCu;
    // 0x1832fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1832fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183300: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183300u;
    SET_GPR_U32(ctx, 31, 0x183308u);
    ctx->pc = 0x183304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183300u;
            // 0x183304: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183308u; }
        if (ctx->pc != 0x183308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183308u; }
        if (ctx->pc != 0x183308u) { return; }
    }
    ctx->pc = 0x183308u;
label_183308:
    // 0x183308: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x183308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x18330c: 0xc0478ec  jal         func_11E3B0
    ctx->pc = 0x18330Cu;
    SET_GPR_U32(ctx, 31, 0x183314u);
    ctx->pc = 0x183310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18330Cu;
            // 0x183310: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3B0u;
    if (runtime->hasFunction(0x11E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183314u; }
        if (ctx->pc != 0x183314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CheckAsync_0x11e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183314u; }
        if (ctx->pc != 0x183314u) { return; }
    }
    ctx->pc = 0x183314u;
    // 0x183314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183318: 0x104300d3  beq         $v0, $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x183318u;
    {
        const bool branch_taken_0x183318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x183318) {
            ctx->pc = 0x183668u;
            goto label_183668;
        }
    }
    ctx->pc = 0x183320u;
    // 0x183320: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x183320u;
    {
        const bool branch_taken_0x183320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183320u;
            // 0x183324: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183320) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183328u;
    // 0x183328: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183328u;
    {
        const bool branch_taken_0x183328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x183328) {
            ctx->pc = 0x183338u;
            goto label_183338;
        }
    }
    ctx->pc = 0x183330u;
    // 0x183330: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x183330u;
    {
        const bool branch_taken_0x183330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183330) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183338u;
label_183338:
    // 0x183338: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18333c: 0x124200be  beq         $s2, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x18333Cu;
    {
        const bool branch_taken_0x18333c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18333Cu;
            // 0x183340: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18333c) {
            ctx->pc = 0x183638u;
            goto label_183638;
        }
    }
    ctx->pc = 0x183344u;
    // 0x183344: 0x124200b4  beq         $s2, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x183344u;
    {
        const bool branch_taken_0x183344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183344) {
            ctx->pc = 0x183618u;
            goto label_183618;
        }
    }
    ctx->pc = 0x18334Cu;
    // 0x18334c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x18334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x183350: 0x124200a1  beq         $s2, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x183350u;
    {
        const bool branch_taken_0x183350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183350u;
            // 0x183354: 0x240200aa  addiu       $v0, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183350) {
            ctx->pc = 0x1835D8u;
            goto label_1835d8;
        }
    }
    ctx->pc = 0x183358u;
    // 0x183358: 0x12420085  beq         $s2, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x183358u;
    {
        const bool branch_taken_0x183358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183358) {
            ctx->pc = 0x183570u;
            goto label_183570;
        }
    }
    ctx->pc = 0x183360u;
    // 0x183360: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x183360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x183364: 0x1242006e  beq         $s2, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x183364u;
    {
        const bool branch_taken_0x183364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183364u;
            // 0x183368: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183364) {
            ctx->pc = 0x183520u;
            goto label_183520;
        }
    }
    ctx->pc = 0x18336Cu;
    // 0x18336c: 0x12420060  beq         $s2, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x18336Cu;
    {
        const bool branch_taken_0x18336c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18336c) {
            ctx->pc = 0x1834F0u;
            goto label_1834f0;
        }
    }
    ctx->pc = 0x183374u;
    // 0x183374: 0x12430052  beq         $s2, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x183374u;
    {
        const bool branch_taken_0x183374 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x183378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183374u;
            // 0x183378: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183374) {
            ctx->pc = 0x1834C0u;
            goto label_1834c0;
        }
    }
    ctx->pc = 0x18337Cu;
    // 0x18337c: 0x12420044  beq         $s2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x18337Cu;
    {
        const bool branch_taken_0x18337c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18337c) {
            ctx->pc = 0x183490u;
            goto label_183490;
        }
    }
    ctx->pc = 0x183384u;
    // 0x183384: 0x240200d2  addiu       $v0, $zero, 0xD2
    ctx->pc = 0x183384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    // 0x183388: 0x12420035  beq         $s2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x183388u;
    {
        const bool branch_taken_0x183388 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183388u;
            // 0x18338c: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183388) {
            ctx->pc = 0x183460u;
            goto label_183460;
        }
    }
    ctx->pc = 0x183390u;
    // 0x183390: 0x12420027  beq         $s2, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x183390u;
    {
        const bool branch_taken_0x183390 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183390) {
            ctx->pc = 0x183430u;
            goto label_183430;
        }
    }
    ctx->pc = 0x183398u;
    // 0x183398: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x183398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x18339c: 0x12420018  beq         $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x18339Cu;
    {
        const bool branch_taken_0x18339c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18339c) {
            ctx->pc = 0x183400u;
            goto label_183400;
        }
    }
    ctx->pc = 0x1833A4u;
    // 0x1833a4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1833A4u;
    {
        const bool branch_taken_0x1833a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1833a4) {
            ctx->pc = 0x1833B8u;
            goto label_1833b8;
        }
    }
    ctx->pc = 0x1833ACu;
    // 0x1833ac: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x1833ACu;
    {
        const bool branch_taken_0x1833ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1833ac) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1833B4u;
    // 0x1833b4: 0x0  nop
    ctx->pc = 0x1833b4u;
    // NOP
label_1833b8:
    // 0x1833b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1833b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1833bc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1833bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1833c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1833c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1833c4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1833c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x1833c8: 0x24a52128  addiu       $a1, $a1, 0x2128
    ctx->pc = 0x1833c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8488));
    // 0x1833cc: 0xc047990  jal         func_11E640
    ctx->pc = 0x1833CCu;
    SET_GPR_U32(ctx, 31, 0x1833D4u);
    ctx->pc = 0x1833D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833CCu;
            // 0x1833d0: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833D4u; }
        if (ctx->pc != 0x1833D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833D4u; }
        if (ctx->pc != 0x1833D4u) { return; }
    }
    ctx->pc = 0x1833D4u;
    // 0x1833d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1833d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1833d8: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1833d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1833dc: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1833DCu;
    SET_GPR_U32(ctx, 31, 0x1833E4u);
    ctx->pc = 0x1833E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833DCu;
            // 0x1833e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833E4u; }
        if (ctx->pc != 0x1833E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833E4u; }
        if (ctx->pc != 0x1833E4u) { return; }
    }
    ctx->pc = 0x1833E4u;
    // 0x1833e4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1833e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1833e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1833ec: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1833ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1833f0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1833F0u;
    SET_GPR_U32(ctx, 31, 0x1833F8u);
    ctx->pc = 0x1833F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1833F0u;
            // 0x1833f4: 0x24a52130  addiu       $a1, $a1, 0x2130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833F8u; }
        if (ctx->pc != 0x1833F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833F8u; }
        if (ctx->pc != 0x1833F8u) { return; }
    }
    ctx->pc = 0x1833F8u;
    // 0x1833f8: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1833F8u;
    {
        const bool branch_taken_0x1833f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1833f8) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183400u;
label_183400:
    // 0x183400: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183404: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x183404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183408: 0xc04755e  jal         func_11D578
    ctx->pc = 0x183408u;
    SET_GPR_U32(ctx, 31, 0x183410u);
    ctx->pc = 0x18340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183408u;
            // 0x18340c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183410u; }
        if (ctx->pc != 0x183410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183410u; }
        if (ctx->pc != 0x183410u) { return; }
    }
    ctx->pc = 0x183410u;
    // 0x183410: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183414: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183418: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18341c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18341Cu;
    SET_GPR_U32(ctx, 31, 0x183424u);
    ctx->pc = 0x183420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18341Cu;
            // 0x183420: 0x24a52140  addiu       $a1, $a1, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183424u; }
        if (ctx->pc != 0x183424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183424u; }
        if (ctx->pc != 0x183424u) { return; }
    }
    ctx->pc = 0x183424u;
    // 0x183424: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x183424u;
    {
        const bool branch_taken_0x183424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183424) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x18342Cu;
    // 0x18342c: 0x0  nop
    ctx->pc = 0x18342cu;
    // NOP
label_183430:
    // 0x183430: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183434: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x183434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183438: 0xc04755e  jal         func_11D578
    ctx->pc = 0x183438u;
    SET_GPR_U32(ctx, 31, 0x183440u);
    ctx->pc = 0x18343Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183438u;
            // 0x18343c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183440u; }
        if (ctx->pc != 0x183440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183440u; }
        if (ctx->pc != 0x183440u) { return; }
    }
    ctx->pc = 0x183440u;
    // 0x183440: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183444: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183448: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18344c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18344Cu;
    SET_GPR_U32(ctx, 31, 0x183454u);
    ctx->pc = 0x183450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18344Cu;
            // 0x183450: 0x24a52160  addiu       $a1, $a1, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183454u; }
        if (ctx->pc != 0x183454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183454u; }
        if (ctx->pc != 0x183454u) { return; }
    }
    ctx->pc = 0x183454u;
    // 0x183454: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x183454u;
    {
        const bool branch_taken_0x183454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183454) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x18345Cu;
    // 0x18345c: 0x0  nop
    ctx->pc = 0x18345cu;
    // NOP
label_183460:
    // 0x183460: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183464: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x183464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183468: 0xc04755e  jal         func_11D578
    ctx->pc = 0x183468u;
    SET_GPR_U32(ctx, 31, 0x183470u);
    ctx->pc = 0x18346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183468u;
            // 0x18346c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183470u; }
        if (ctx->pc != 0x183470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183470u; }
        if (ctx->pc != 0x183470u) { return; }
    }
    ctx->pc = 0x183470u;
    // 0x183470: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183474: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183478: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18347c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18347Cu;
    SET_GPR_U32(ctx, 31, 0x183484u);
    ctx->pc = 0x183480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18347Cu;
            // 0x183480: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183484u; }
        if (ctx->pc != 0x183484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183484u; }
        if (ctx->pc != 0x183484u) { return; }
    }
    ctx->pc = 0x183484u;
    // 0x183484: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x183484u;
    {
        const bool branch_taken_0x183484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183484) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x18348Cu;
    // 0x18348c: 0x0  nop
    ctx->pc = 0x18348cu;
    // NOP
label_183490:
    // 0x183490: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183494: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183498: 0xc04755e  jal         func_11D578
    ctx->pc = 0x183498u;
    SET_GPR_U32(ctx, 31, 0x1834A0u);
    ctx->pc = 0x18349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183498u;
            // 0x18349c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834A0u; }
        if (ctx->pc != 0x1834A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834A0u; }
        if (ctx->pc != 0x1834A0u) { return; }
    }
    ctx->pc = 0x1834A0u;
    // 0x1834a0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1834a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1834a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1834a8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1834a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1834ac: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1834ACu;
    SET_GPR_U32(ctx, 31, 0x1834B4u);
    ctx->pc = 0x1834B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834ACu;
            // 0x1834b0: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834B4u; }
        if (ctx->pc != 0x1834B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834B4u; }
        if (ctx->pc != 0x1834B4u) { return; }
    }
    ctx->pc = 0x1834B4u;
    // 0x1834b4: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x1834B4u;
    {
        const bool branch_taken_0x1834b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834b4) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1834BCu;
    // 0x1834bc: 0x0  nop
    ctx->pc = 0x1834bcu;
    // NOP
label_1834c0:
    // 0x1834c0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1834c4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1834c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1834c8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1834c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1834cc: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1834CCu;
    SET_GPR_U32(ctx, 31, 0x1834D4u);
    ctx->pc = 0x1834D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834CCu;
            // 0x1834d0: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834D4u; }
        if (ctx->pc != 0x1834D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834D4u; }
        if (ctx->pc != 0x1834D4u) { return; }
    }
    ctx->pc = 0x1834D4u;
    // 0x1834d4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1834d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1834d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1834dc: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1834e0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1834E0u;
    SET_GPR_U32(ctx, 31, 0x1834E8u);
    ctx->pc = 0x1834E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834E0u;
            // 0x1834e4: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E8u; }
        if (ctx->pc != 0x1834E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1834E8u; }
        if (ctx->pc != 0x1834E8u) { return; }
    }
    ctx->pc = 0x1834E8u;
    // 0x1834e8: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x1834E8u;
    {
        const bool branch_taken_0x1834e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834e8) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1834F0u;
label_1834f0:
    // 0x1834f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1834f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1834f4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1834f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1834f8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1834f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1834fc: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1834FCu;
    SET_GPR_U32(ctx, 31, 0x183504u);
    ctx->pc = 0x183500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1834FCu;
            // 0x183500: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183504u; }
        if (ctx->pc != 0x183504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183504u; }
        if (ctx->pc != 0x183504u) { return; }
    }
    ctx->pc = 0x183504u;
    // 0x183504: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183508: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18350c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18350cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x183510: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x183510u;
    SET_GPR_U32(ctx, 31, 0x183518u);
    ctx->pc = 0x183514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183510u;
            // 0x183514: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183518u; }
        if (ctx->pc != 0x183518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183518u; }
        if (ctx->pc != 0x183518u) { return; }
    }
    ctx->pc = 0x183518u;
    // 0x183518: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x183518u;
    {
        const bool branch_taken_0x183518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183518) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183520u;
label_183520:
    // 0x183520: 0xc061aa0  jal         func_186A80
    ctx->pc = 0x183520u;
    SET_GPR_U32(ctx, 31, 0x183528u);
    ctx->pc = 0x186A80u;
    if (runtime->hasFunction(0x186A80u)) {
        auto targetFn = runtime->lookupFunction(0x186A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183528u; }
        if (ctx->pc != 0x183528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FileInfoClean_0x186a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183528u; }
        if (ctx->pc != 0x183528u) { return; }
    }
    ctx->pc = 0x183528u;
    // 0x183528: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18352c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18352cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183530: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183534: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x183534u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x183538: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x183538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x18353c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18353cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183540: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x183540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183544: 0x2508bcc0  addiu       $t0, $t0, -0x4340
    ctx->pc = 0x183544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950080));
    // 0x183548: 0xc04769e  jal         func_11DA78
    ctx->pc = 0x183548u;
    SET_GPR_U32(ctx, 31, 0x183550u);
    ctx->pc = 0x18354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183548u;
            // 0x18354c: 0x27a90054  addiu       $t1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA78u;
    if (runtime->hasFunction(0x11DA78u)) {
        auto targetFn = runtime->lookupFunction(0x11DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183550u; }
        if (ctx->pc != 0x183550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetDirAsync_0x11da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183550u; }
        if (ctx->pc != 0x183550u) { return; }
    }
    ctx->pc = 0x183550u;
    // 0x183550: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183554: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183558: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18355c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18355Cu;
    SET_GPR_U32(ctx, 31, 0x183564u);
    ctx->pc = 0x183560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18355Cu;
            // 0x183560: 0x24a521b0  addiu       $a1, $a1, 0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183564u; }
        if (ctx->pc != 0x183564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183564u; }
        if (ctx->pc != 0x183564u) { return; }
    }
    ctx->pc = 0x183564u;
    // 0x183564: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x183564u;
    {
        const bool branch_taken_0x183564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183564) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x18356Cu;
    // 0x18356c: 0x0  nop
    ctx->pc = 0x18356cu;
    // NOP
label_183570:
    // 0x183570: 0xc061aa0  jal         func_186A80
    ctx->pc = 0x183570u;
    SET_GPR_U32(ctx, 31, 0x183578u);
    ctx->pc = 0x186A80u;
    if (runtime->hasFunction(0x186A80u)) {
        auto targetFn = runtime->lookupFunction(0x186A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183578u; }
        if (ctx->pc != 0x183578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FileInfoClean_0x186a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183578u; }
        if (ctx->pc != 0x183578u) { return; }
    }
    ctx->pc = 0x183578u;
    // 0x183578: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18357c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18357cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183580: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x183580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183584: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x183584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x183588: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x183588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x18358c: 0xc047990  jal         func_11E640
    ctx->pc = 0x18358Cu;
    SET_GPR_U32(ctx, 31, 0x183594u);
    ctx->pc = 0x183590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18358Cu;
            // 0x183590: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183594u; }
        if (ctx->pc != 0x183594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183594u; }
        if (ctx->pc != 0x183594u) { return; }
    }
    ctx->pc = 0x183594u;
    // 0x183594: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183598: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18359c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18359cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1835a0: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x1835a4: 0x24a521b8  addiu       $a1, $a1, 0x21B8
    ctx->pc = 0x1835a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8632));
    // 0x1835a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1835a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1835acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1835b0: 0x2508bb70  addiu       $t0, $t0, -0x4490
    ctx->pc = 0x1835b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949744));
    // 0x1835b4: 0xc04769e  jal         func_11DA78
    ctx->pc = 0x1835B4u;
    SET_GPR_U32(ctx, 31, 0x1835BCu);
    ctx->pc = 0x1835B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1835B4u;
            // 0x1835b8: 0x27a90054  addiu       $t1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA78u;
    if (runtime->hasFunction(0x11DA78u)) {
        auto targetFn = runtime->lookupFunction(0x11DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835BCu; }
        if (ctx->pc != 0x1835BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetDirAsync_0x11da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835BCu; }
        if (ctx->pc != 0x1835BCu) { return; }
    }
    ctx->pc = 0x1835BCu;
    // 0x1835bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1835bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1835c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1835c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1835c4: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1835c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1835c8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1835C8u;
    SET_GPR_U32(ctx, 31, 0x1835D0u);
    ctx->pc = 0x1835CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1835C8u;
            // 0x1835cc: 0x24a521c0  addiu       $a1, $a1, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835D0u; }
        if (ctx->pc != 0x1835D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835D0u; }
        if (ctx->pc != 0x1835D0u) { return; }
    }
    ctx->pc = 0x1835D0u;
    // 0x1835d0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1835D0u;
    {
        const bool branch_taken_0x1835d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1835d0) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1835D8u;
label_1835d8:
    // 0x1835d8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1835d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1835dc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1835e0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1835e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1835e4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1835e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x1835e8: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x1835e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x1835ec: 0x24c6b740  addiu       $a2, $a2, -0x48C0
    ctx->pc = 0x1835ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948672));
    // 0x1835f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1835f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835f4: 0xc0475d2  jal         func_11D748
    ctx->pc = 0x1835F4u;
    SET_GPR_U32(ctx, 31, 0x1835FCu);
    ctx->pc = 0x1835F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1835F4u;
            // 0x1835f8: 0x240802e0  addiu       $t0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D748u;
    if (runtime->hasFunction(0x11D748u)) {
        auto targetFn = runtime->lookupFunction(0x11D748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835FCu; }
        if (ctx->pc != 0x1835FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2ReadFileAsync_0x11d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1835FCu; }
        if (ctx->pc != 0x1835FCu) { return; }
    }
    ctx->pc = 0x1835FCu;
    // 0x1835fc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183600: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183604: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x183608: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x183608u;
    SET_GPR_U32(ctx, 31, 0x183610u);
    ctx->pc = 0x18360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183608u;
            // 0x18360c: 0x24a521c8  addiu       $a1, $a1, 0x21C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183610u; }
        if (ctx->pc != 0x183610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183610u; }
        if (ctx->pc != 0x183610u) { return; }
    }
    ctx->pc = 0x183610u;
    // 0x183610: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x183610u;
    {
        const bool branch_taken_0x183610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183610) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183618u;
label_183618:
    // 0x183618: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18361c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18361cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183620: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x183624: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x183624u;
    SET_GPR_U32(ctx, 31, 0x18362Cu);
    ctx->pc = 0x183628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183624u;
            // 0x183628: 0x24a521d8  addiu       $a1, $a1, 0x21D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18362Cu; }
        if (ctx->pc != 0x18362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18362Cu; }
        if (ctx->pc != 0x18362Cu) { return; }
    }
    ctx->pc = 0x18362Cu;
    // 0x18362c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x18362Cu;
    {
        const bool branch_taken_0x18362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18362Cu;
            // 0x183630: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18362c) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183634u;
    // 0x183634: 0x0  nop
    ctx->pc = 0x183634u;
    // NOP
label_183638:
    // 0x183638: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18363c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18363cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x183640: 0xc04755e  jal         func_11D578
    ctx->pc = 0x183640u;
    SET_GPR_U32(ctx, 31, 0x183648u);
    ctx->pc = 0x183644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183640u;
            // 0x183644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183648u; }
        if (ctx->pc != 0x183648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183648u; }
        if (ctx->pc != 0x183648u) { return; }
    }
    ctx->pc = 0x183648u;
    // 0x183648: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18364c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18364cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183650: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x183650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x183654: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x183654u;
    SET_GPR_U32(ctx, 31, 0x18365Cu);
    ctx->pc = 0x183658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183654u;
            // 0x183658: 0x24a521e0  addiu       $a1, $a1, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18365Cu; }
        if (ctx->pc != 0x18365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18365Cu; }
        if (ctx->pc != 0x18365Cu) { return; }
    }
    ctx->pc = 0x18365Cu;
    // 0x18365c: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x18365Cu;
    {
        const bool branch_taken_0x18365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18365c) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183664u;
    // 0x183664: 0x0  nop
    ctx->pc = 0x183664u;
    // NOP
label_183668:
    // 0x183668: 0x240200e6  addiu       $v0, $zero, 0xE6
    ctx->pc = 0x183668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x18366c: 0x124200ae  beq         $s2, $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x18366Cu;
    {
        const bool branch_taken_0x18366c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18366Cu;
            // 0x183670: 0x24020136  addiu       $v0, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18366c) {
            ctx->pc = 0x183928u;
            goto label_183928;
        }
    }
    ctx->pc = 0x183674u;
    // 0x183674: 0x124200ac  beq         $s2, $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x183674u;
    {
        const bool branch_taken_0x183674 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183674u;
            // 0x183678: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183674) {
            ctx->pc = 0x183928u;
            goto label_183928;
        }
    }
    ctx->pc = 0x18367Cu;
    // 0x18367c: 0x124400aa  beq         $s2, $a0, . + 4 + (0xAA << 2)
    ctx->pc = 0x18367Cu;
    {
        const bool branch_taken_0x18367c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x183680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18367Cu;
            // 0x183680: 0x24020122  addiu       $v0, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18367c) {
            ctx->pc = 0x183928u;
            goto label_183928;
        }
    }
    ctx->pc = 0x183684u;
    // 0x183684: 0x124200a8  beq         $s2, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x183684u;
    {
        const bool branch_taken_0x183684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183684) {
            ctx->pc = 0x183928u;
            goto label_183928;
        }
    }
    ctx->pc = 0x18368Cu;
    // 0x18368c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x183690: 0x1242009d  beq         $s2, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x183690u;
    {
        const bool branch_taken_0x183690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183690u;
            // 0x183694: 0x24020083  addiu       $v0, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183690) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x183698u;
    // 0x183698: 0x1242009b  beq         $s2, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x183698u;
    {
        const bool branch_taken_0x183698 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183698) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836A0u;
    // 0x1836a0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1836a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1836a4: 0x12420098  beq         $s2, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1836A4u;
    {
        const bool branch_taken_0x1836a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1836A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836A4u;
            // 0x1836a8: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836a4) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836ACu;
    // 0x1836ac: 0x12420096  beq         $s2, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1836ACu;
    {
        const bool branch_taken_0x1836ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1836ac) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836B4u;
    // 0x1836b4: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x1836b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1836b8: 0x12420093  beq         $s2, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x1836B8u;
    {
        const bool branch_taken_0x1836b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1836BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836B8u;
            // 0x1836bc: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836b8) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836C0u;
    // 0x1836c0: 0x12450091  beq         $s2, $a1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1836C0u;
    {
        const bool branch_taken_0x1836c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x1836C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836C0u;
            // 0x1836c4: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836c0) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836C8u;
    // 0x1836c8: 0x1242008f  beq         $s2, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1836C8u;
    {
        const bool branch_taken_0x1836c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1836c8) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836D0u;
    // 0x1836d0: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1836d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1836d4: 0x1242008c  beq         $s2, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1836D4u;
    {
        const bool branch_taken_0x1836d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1836D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836D4u;
            // 0x1836d8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836d4) {
            ctx->pc = 0x183908u;
            goto label_183908;
        }
    }
    ctx->pc = 0x1836DCu;
    // 0x1836dc: 0x12420076  beq         $s2, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1836DCu;
    {
        const bool branch_taken_0x1836dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1836dc) {
            ctx->pc = 0x1838B8u;
            goto label_1838b8;
        }
    }
    ctx->pc = 0x1836E4u;
    // 0x1836e4: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1836e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1836e8: 0x12440065  beq         $s2, $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1836E8u;
    {
        const bool branch_taken_0x1836e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x1836ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836E8u;
            // 0x1836ec: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836e8) {
            ctx->pc = 0x183880u;
            goto label_183880;
        }
    }
    ctx->pc = 0x1836F0u;
    // 0x1836f0: 0x12420055  beq         $s2, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1836F0u;
    {
        const bool branch_taken_0x1836f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1836f0) {
            ctx->pc = 0x183848u;
            goto label_183848;
        }
    }
    ctx->pc = 0x1836F8u;
    // 0x1836f8: 0x1243003d  beq         $s2, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1836F8u;
    {
        const bool branch_taken_0x1836f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1836FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836F8u;
            // 0x1836fc: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836f8) {
            ctx->pc = 0x1837F0u;
            goto label_1837f0;
        }
    }
    ctx->pc = 0x183700u;
    // 0x183700: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183700u;
    {
        const bool branch_taken_0x183700 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183700) {
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x183708u;
    // 0x183708: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x183708u;
    {
        const bool branch_taken_0x183708 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x183708) {
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x183710u;
    // 0x183710: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x183710u;
    {
        const bool branch_taken_0x183710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183710) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183718u;
label_183718:
    // 0x183718: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18371c: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x18371Cu;
    {
        const bool branch_taken_0x18371c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18371c) {
            ctx->pc = 0x1837E8u;
            goto label_1837e8;
        }
    }
    ctx->pc = 0x183724u;
    // 0x183724: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x183728: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x183728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x18372c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18372Cu;
    {
        const bool branch_taken_0x18372c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18372c) {
            ctx->pc = 0x183740u;
            goto label_183740;
        }
    }
    ctx->pc = 0x183734u;
    // 0x183734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183738: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x183738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x18373c: 0x0  nop
    ctx->pc = 0x18373cu;
    // NOP
label_183740:
    // 0x183740: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x183744: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183748: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x183748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x18374c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18374Cu;
    SET_GPR_U32(ctx, 31, 0x183754u);
    ctx->pc = 0x183750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18374Cu;
            // 0x183750: 0x24a521f0  addiu       $a1, $a1, 0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183754u; }
        if (ctx->pc != 0x183754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183754u; }
        if (ctx->pc != 0x183754u) { return; }
    }
    ctx->pc = 0x183754u;
    // 0x183754: 0x97a30058  lhu         $v1, 0x58($sp)
    ctx->pc = 0x183754u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183758: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x183758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x18375c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18375Cu;
    {
        const bool branch_taken_0x18375c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x183760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18375Cu;
            // 0x183760: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18375c) {
            ctx->pc = 0x183778u;
            goto label_183778;
        }
    }
    ctx->pc = 0x183764u;
    // 0x183764: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183768: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x183768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x18376c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18376Cu;
    SET_GPR_U32(ctx, 31, 0x183774u);
    ctx->pc = 0x183770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18376Cu;
            // 0x183770: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183774u; }
        if (ctx->pc != 0x183774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183774u; }
        if (ctx->pc != 0x183774u) { return; }
    }
    ctx->pc = 0x183774u;
    // 0x183774: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x183774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_183778:
    // 0x183778: 0x97a30058  lhu         $v1, 0x58($sp)
    ctx->pc = 0x183778u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18377c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x18377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x183780: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x183780u;
    {
        const bool branch_taken_0x183780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x183784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183780u;
            // 0x183784: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183780) {
            ctx->pc = 0x1837A0u;
            goto label_1837a0;
        }
    }
    ctx->pc = 0x183788u;
    // 0x183788: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x183788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18378c: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x18378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x183790: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x183790u;
    SET_GPR_U32(ctx, 31, 0x183798u);
    ctx->pc = 0x183794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183790u;
            // 0x183794: 0x24a52200  addiu       $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183798u; }
        if (ctx->pc != 0x183798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183798u; }
        if (ctx->pc != 0x183798u) { return; }
    }
    ctx->pc = 0x183798u;
    // 0x183798: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x183798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x18379c: 0x0  nop
    ctx->pc = 0x18379cu;
    // NOP
label_1837a0:
    // 0x1837a0: 0x97a30058  lhu         $v1, 0x58($sp)
    ctx->pc = 0x1837a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1837a4: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x1837a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x1837a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1837A8u;
    {
        const bool branch_taken_0x1837a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1837ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837A8u;
            // 0x1837ac: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837a8) {
            ctx->pc = 0x1837C8u;
            goto label_1837c8;
        }
    }
    ctx->pc = 0x1837B0u;
    // 0x1837b0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1837b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1837b4: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x1837b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x1837b8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1837B8u;
    SET_GPR_U32(ctx, 31, 0x1837C0u);
    ctx->pc = 0x1837BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1837B8u;
            // 0x1837bc: 0x24a52210  addiu       $a1, $a1, 0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837C0u; }
        if (ctx->pc != 0x1837C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837C0u; }
        if (ctx->pc != 0x1837C0u) { return; }
    }
    ctx->pc = 0x1837C0u;
    // 0x1837c0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1837c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1837c4: 0x0  nop
    ctx->pc = 0x1837c4u;
    // NOP
label_1837c8:
    // 0x1837c8: 0x1640005d  bnez        $s2, . + 4 + (0x5D << 2)
    ctx->pc = 0x1837C8u;
    {
        const bool branch_taken_0x1837c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1837CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837C8u;
            // 0x1837cc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837c8) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1837D0u;
    // 0x1837d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1837d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1837d4: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x1837d8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1837D8u;
    SET_GPR_U32(ctx, 31, 0x1837E0u);
    ctx->pc = 0x1837DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1837D8u;
            // 0x1837dc: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837E0u; }
        if (ctx->pc != 0x1837E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837E0u; }
        if (ctx->pc != 0x1837E0u) { return; }
    }
    ctx->pc = 0x1837E0u;
    // 0x1837e0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1837E0u;
    {
        const bool branch_taken_0x1837e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837E0u;
            // 0x1837e4: 0x2412008c  addiu       $s2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837e0) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1837E8u;
label_1837e8:
    // 0x1837e8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1837E8u;
    {
        const bool branch_taken_0x1837e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837E8u;
            // 0x1837ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837e8) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1837F0u;
label_1837f0:
    // 0x1837f0: 0x97a20058  lhu         $v0, 0x58($sp)
    ctx->pc = 0x1837f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1837f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1837F4u;
    {
        const bool branch_taken_0x1837f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1837f4) {
            ctx->pc = 0x183820u;
            goto label_183820;
        }
    }
    ctx->pc = 0x1837FCu;
    // 0x1837fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1837fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x183800: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x183800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x183804: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x183804u;
    {
        const bool branch_taken_0x183804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x183804) {
            ctx->pc = 0x183818u;
            goto label_183818;
        }
    }
    ctx->pc = 0x18380Cu;
    // 0x18380c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18380cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183810: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x183810u;
    {
        const bool branch_taken_0x183810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183810u;
            // 0x183814: 0x2412008c  addiu       $s2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183810) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183818u;
label_183818:
    // 0x183818: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x183818u;
    {
        const bool branch_taken_0x183818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183818u;
            // 0x18381c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183818) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183820u;
label_183820:
    // 0x183820: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183824: 0x8c26bb68  lw          $a2, -0x4498($at)
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949736)));
    // 0x183828: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18382c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18382cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x183830: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x183830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x183834: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x183834u;
    SET_GPR_U32(ctx, 31, 0x18383Cu);
    ctx->pc = 0x183838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183834u;
            // 0x183838: 0x24a52220  addiu       $a1, $a1, 0x2220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18383Cu; }
        if (ctx->pc != 0x18383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18383Cu; }
        if (ctx->pc != 0x18383Cu) { return; }
    }
    ctx->pc = 0x18383Cu;
    // 0x18383c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18383Cu;
    {
        const bool branch_taken_0x18383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18383Cu;
            // 0x183840: 0x241200a0  addiu       $s2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18383c) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183844u;
    // 0x183844: 0x0  nop
    ctx->pc = 0x183844u;
    // NOP
label_183848:
    // 0x183848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18384c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18384Cu;
    {
        const bool branch_taken_0x18384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18384Cu;
            // 0x183850: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18384c) {
            ctx->pc = 0x183860u;
            goto label_183860;
        }
    }
    ctx->pc = 0x183854u;
    // 0x183854: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x183854u;
    {
        const bool branch_taken_0x183854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183854) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x18385Cu;
    // 0x18385c: 0x0  nop
    ctx->pc = 0x18385cu;
    // NOP
label_183860:
    // 0x183860: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x183864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183864u;
    {
        const bool branch_taken_0x183864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183864u;
            // 0x183868: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183864) {
            ctx->pc = 0x183878u;
            goto label_183878;
        }
    }
    ctx->pc = 0x18386Cu;
    // 0x18386c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18386Cu;
    {
        const bool branch_taken_0x18386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18386c) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183874u;
    // 0x183874: 0x0  nop
    ctx->pc = 0x183874u;
    // NOP
label_183878:
    // 0x183878: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x183878u;
    {
        const bool branch_taken_0x183878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183878u;
            // 0x18387c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183878) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183880u;
label_183880:
    // 0x183880: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183884: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183884u;
    {
        const bool branch_taken_0x183884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183884u;
            // 0x183888: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183884) {
            ctx->pc = 0x183898u;
            goto label_183898;
        }
    }
    ctx->pc = 0x18388Cu;
    // 0x18388c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18388Cu;
    {
        const bool branch_taken_0x18388c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18388c) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183894u;
    // 0x183894: 0x0  nop
    ctx->pc = 0x183894u;
    // NOP
label_183898:
    // 0x183898: 0xc061a14  jal         func_186850
    ctx->pc = 0x183898u;
    SET_GPR_U32(ctx, 31, 0x1838A0u);
    ctx->pc = 0x186850u;
    if (runtime->hasFunction(0x186850u)) {
        auto targetFn = runtime->lookupFunction(0x186850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838A0u; }
        if (ctx->pc != 0x1838A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardFileCheckLight_0x186850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838A0u; }
        if (ctx->pc != 0x1838A0u) { return; }
    }
    ctx->pc = 0x1838A0u;
    // 0x1838a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1838A0u;
    {
        const bool branch_taken_0x1838a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1838A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1838A0u;
            // 0x1838a4: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838a0) {
            ctx->pc = 0x1838B0u;
            goto label_1838b0;
        }
    }
    ctx->pc = 0x1838A8u;
    // 0x1838a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1838A8u;
    {
        const bool branch_taken_0x1838a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1838a8) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1838B0u;
label_1838b0:
    // 0x1838b0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1838B0u;
    {
        const bool branch_taken_0x1838b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1838B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1838B0u;
            // 0x1838b4: 0x241200d2  addiu       $s2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838b0) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1838B8u;
label_1838b8:
    // 0x1838b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1838bc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1838BCu;
    {
        const bool branch_taken_0x1838bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1838C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1838BCu;
            // 0x1838c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838bc) {
            ctx->pc = 0x1838D0u;
            goto label_1838d0;
        }
    }
    ctx->pc = 0x1838C4u;
    // 0x1838c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1838C4u;
    {
        const bool branch_taken_0x1838c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1838c4) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x1838CCu;
    // 0x1838cc: 0x0  nop
    ctx->pc = 0x1838ccu;
    // NOP
label_1838d0:
    // 0x1838d0: 0xc061a08  jal         func_186820
    ctx->pc = 0x1838D0u;
    SET_GPR_U32(ctx, 31, 0x1838D8u);
    ctx->pc = 0x186820u;
    if (runtime->hasFunction(0x186820u)) {
        auto targetFn = runtime->lookupFunction(0x186820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838D8u; }
        if (ctx->pc != 0x1838D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardFileCheck_0x186820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838D8u; }
        if (ctx->pc != 0x1838D8u) { return; }
    }
    ctx->pc = 0x1838D8u;
    // 0x1838d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1838D8u;
    {
        const bool branch_taken_0x1838d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1838DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1838D8u;
            // 0x1838dc: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838d8) {
            ctx->pc = 0x183900u;
            goto label_183900;
        }
    }
    ctx->pc = 0x1838E0u;
    // 0x1838e0: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1838e4: 0x24841610  addiu       $a0, $a0, 0x1610
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
    // 0x1838e8: 0x24a5b740  addiu       $a1, $a1, -0x48C0
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948672));
    // 0x1838ec: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x1838f0: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x1838F0u;
    SET_GPR_U32(ctx, 31, 0x1838F8u);
    ctx->pc = 0x1838F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1838F0u;
            // 0x1838f4: 0x24120104  addiu       $s2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838F8u; }
        if (ctx->pc != 0x1838F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1838F8u; }
        if (ctx->pc != 0x1838F8u) { return; }
    }
    ctx->pc = 0x1838F8u;
    // 0x1838f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1838F8u;
    {
        const bool branch_taken_0x1838f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1838f8) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183900u;
label_183900:
    // 0x183900: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x183900u;
    {
        const bool branch_taken_0x183900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183900u;
            // 0x183904: 0x241200d2  addiu       $s2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183900) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183908u;
label_183908:
    // 0x183908: 0x97a30058  lhu         $v1, 0x58($sp)
    ctx->pc = 0x183908u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18390c: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x18390cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x183910: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183910u;
    {
        const bool branch_taken_0x183910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x183914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183910u;
            // 0x183914: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183910) {
            ctx->pc = 0x183920u;
            goto label_183920;
        }
    }
    ctx->pc = 0x183918u;
    // 0x183918: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x183918u;
    {
        const bool branch_taken_0x183918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x183918) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183920u;
label_183920:
    // 0x183920: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x183920u;
    {
        const bool branch_taken_0x183920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183920u;
            // 0x183924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183920) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183928u;
label_183928:
    // 0x183928: 0x97a30058  lhu         $v1, 0x58($sp)
    ctx->pc = 0x183928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18392c: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x18392cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x183930: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183930u;
    {
        const bool branch_taken_0x183930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x183930) {
            ctx->pc = 0x183940u;
            goto label_183940;
        }
    }
    ctx->pc = 0x183938u;
    // 0x183938: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18393c: 0x0  nop
    ctx->pc = 0x18393cu;
    // NOP
label_183940:
    // 0x183940: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x183940u;
    SET_GPR_U32(ctx, 31, 0x183948u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183948u; }
        if (ctx->pc != 0x183948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183948u; }
        if (ctx->pc != 0x183948u) { return; }
    }
    ctx->pc = 0x183948u;
    // 0x183948: 0x1660fd49  bnez        $s3, . + 4 + (-0x2B7 << 2)
    ctx->pc = 0x183948u;
    {
        const bool branch_taken_0x183948 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x183948) {
            ctx->pc = 0x182E70u;
            goto label_182e70;
        }
    }
    ctx->pc = 0x183950u;
    // 0x183950: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x183950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183954: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18395c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18395cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183964: 0x3e00008  jr          $ra
    ctx->pc = 0x183964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183964u;
            // 0x183968: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182E70u: goto label_182e70;
            case 0x182F10u: goto label_182f10;
            case 0x182F20u: goto label_182f20;
            case 0x182F68u: goto label_182f68;
            case 0x182FB0u: goto label_182fb0;
            case 0x182FF8u: goto label_182ff8;
            case 0x183040u: goto label_183040;
            case 0x183098u: goto label_183098;
            case 0x1830E0u: goto label_1830e0;
            case 0x183118u: goto label_183118;
            case 0x183130u: goto label_183130;
            case 0x183138u: goto label_183138;
            case 0x183150u: goto label_183150;
            case 0x1831A8u: goto label_1831a8;
            case 0x1831F0u: goto label_1831f0;
            case 0x183228u: goto label_183228;
            case 0x183240u: goto label_183240;
            case 0x183248u: goto label_183248;
            case 0x183260u: goto label_183260;
            case 0x183298u: goto label_183298;
            case 0x1832A8u: goto label_1832a8;
            case 0x1832D8u: goto label_1832d8;
            case 0x183308u: goto label_183308;
            case 0x183338u: goto label_183338;
            case 0x1833B8u: goto label_1833b8;
            case 0x183400u: goto label_183400;
            case 0x183430u: goto label_183430;
            case 0x183460u: goto label_183460;
            case 0x183490u: goto label_183490;
            case 0x1834C0u: goto label_1834c0;
            case 0x1834F0u: goto label_1834f0;
            case 0x183520u: goto label_183520;
            case 0x183570u: goto label_183570;
            case 0x1835D8u: goto label_1835d8;
            case 0x183618u: goto label_183618;
            case 0x183638u: goto label_183638;
            case 0x183668u: goto label_183668;
            case 0x183718u: goto label_183718;
            case 0x183740u: goto label_183740;
            case 0x183778u: goto label_183778;
            case 0x1837A0u: goto label_1837a0;
            case 0x1837C8u: goto label_1837c8;
            case 0x1837E8u: goto label_1837e8;
            case 0x1837F0u: goto label_1837f0;
            case 0x183818u: goto label_183818;
            case 0x183820u: goto label_183820;
            case 0x183848u: goto label_183848;
            case 0x183860u: goto label_183860;
            case 0x183878u: goto label_183878;
            case 0x183880u: goto label_183880;
            case 0x183898u: goto label_183898;
            case 0x1838B0u: goto label_1838b0;
            case 0x1838B8u: goto label_1838b8;
            case 0x1838D0u: goto label_1838d0;
            case 0x183900u: goto label_183900;
            case 0x183908u: goto label_183908;
            case 0x183920u: goto label_183920;
            case 0x183928u: goto label_183928;
            case 0x183940u: goto label_183940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18396Cu;
}
