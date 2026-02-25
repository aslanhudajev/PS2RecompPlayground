#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetArg
// Address: 0x137e38 - 0x137f50
void SetArg_0x137e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetArg_0x137e38");
#endif

    ctx->pc = 0x137e38u;

    // 0x137e38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x137e3c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137e40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x137e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x137e44: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x137e48: 0x8c530840  lw          $s3, 0x840($v0)
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x137e4c: 0x246712f8  addiu       $a3, $v1, 0x12F8
    ctx->pc = 0x137e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4856));
    // 0x137e50: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x137e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x137e54: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x137e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x137e58: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x137e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x137e5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x137e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x137e60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x137e60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e64: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x137e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x137e68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x137e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137e70: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x137e70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x137e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x137e78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e7c: 0x8c6412f8  lw          $a0, 0x12F8($v1)
    ctx->pc = 0x137e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4856)));
    // 0x137e80: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x137e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x137e84: 0xc04df8a  jal         func_137E28
    ctx->pc = 0x137E84u;
    SET_GPR_U32(ctx, 31, 0x137E8Cu);
    ctx->pc = 0x137E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137E84u;
            // 0x137e88: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137E28u;
    if (runtime->hasFunction(0x137E28u)) {
        auto targetFn = runtime->lookupFunction(0x137E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E8Cu; }
        if (ctx->pc != 0x137E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137E8Cu; }
        if (ctx->pc != 0x137E8Cu) { return; }
    }
    ctx->pc = 0x137E8Cu;
    // 0x137e8c: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x137e8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x137e90: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137e98: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x137e98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x137e9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ea0: 0xc04df7a  jal         func_137DE8
    ctx->pc = 0x137EA0u;
    SET_GPR_U32(ctx, 31, 0x137EA8u);
    ctx->pc = 0x137EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EA0u;
            // 0x137ea4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DE8u;
    if (runtime->hasFunction(0x137DE8u)) {
        auto targetFn = runtime->lookupFunction(0x137DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EA8u; }
        if (ctx->pc != 0x137EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EA8u; }
        if (ctx->pc != 0x137EA8u) { return; }
    }
    ctx->pc = 0x137EA8u;
    // 0x137ea8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x137ea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x137eac: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x137EACu;
    SET_GPR_U32(ctx, 31, 0x137EB4u);
    ctx->pc = 0x137EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EACu;
            // 0x137eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EB4u; }
        if (ctx->pc != 0x137EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EB4u; }
        if (ctx->pc != 0x137EB4u) { return; }
    }
    ctx->pc = 0x137EB4u;
    // 0x137eb4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x137eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137eb8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x137eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ec0: 0xc04df7a  jal         func_137DE8
    ctx->pc = 0x137EC0u;
    SET_GPR_U32(ctx, 31, 0x137EC8u);
    ctx->pc = 0x137EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EC0u;
            // 0x137ec4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DE8u;
    if (runtime->hasFunction(0x137DE8u)) {
        auto targetFn = runtime->lookupFunction(0x137DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EC8u; }
        if (ctx->pc != 0x137EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EC8u; }
        if (ctx->pc != 0x137EC8u) { return; }
    }
    ctx->pc = 0x137EC8u;
    // 0x137ec8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ecc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x137eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x137ed0: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x137ED0u;
    {
        const bool branch_taken_0x137ed0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x137ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137ED0u;
            // 0x137ed4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ed0) {
            ctx->pc = 0x137F28u;
            goto label_137f28;
        }
    }
    ctx->pc = 0x137ED8u;
    // 0x137ed8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x137ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137edc: 0x0  nop
    ctx->pc = 0x137edcu;
    // NOP
label_137ee0:
    // 0x137ee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ee4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ee8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137eec: 0xc04df7a  jal         func_137DE8
    ctx->pc = 0x137EECu;
    SET_GPR_U32(ctx, 31, 0x137EF4u);
    ctx->pc = 0x137EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EECu;
            // 0x137ef0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DE8u;
    if (runtime->hasFunction(0x137DE8u)) {
        auto targetFn = runtime->lookupFunction(0x137DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EF4u; }
        if (ctx->pc != 0x137EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137EF4u; }
        if (ctx->pc != 0x137EF4u) { return; }
    }
    ctx->pc = 0x137EF4u;
    // 0x137ef4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x137ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x137ef8: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x137EF8u;
    SET_GPR_U32(ctx, 31, 0x137F00u);
    ctx->pc = 0x137EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137EF8u;
            // 0x137efc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F00u; }
        if (ctx->pc != 0x137F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F00u; }
        if (ctx->pc != 0x137F00u) { return; }
    }
    ctx->pc = 0x137F00u;
    // 0x137f00: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137f04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x137f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137f08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x137f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137f0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x137f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f10: 0xc04df7a  jal         func_137DE8
    ctx->pc = 0x137F10u;
    SET_GPR_U32(ctx, 31, 0x137F18u);
    ctx->pc = 0x137F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137F10u;
            // 0x137f14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137DE8u;
    if (runtime->hasFunction(0x137DE8u)) {
        auto targetFn = runtime->lookupFunction(0x137DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F18u; }
        if (ctx->pc != 0x137F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x137de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137F18u; }
        if (ctx->pc != 0x137F18u) { return; }
    }
    ctx->pc = 0x137F18u;
    // 0x137f18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137f1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x137f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x137f20: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137F20u;
    {
        const bool branch_taken_0x137f20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x137F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F20u;
            // 0x137f24: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f20) {
            ctx->pc = 0x137EE0u;
            goto label_137ee0;
        }
    }
    ctx->pc = 0x137F28u;
label_137f28:
    // 0x137f28: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x137f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x137f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137f30: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x137f30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137f34: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x137f34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137f38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x137f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137f3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x137f3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137f40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x137f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f48: 0x3e00008  jr          $ra
    ctx->pc = 0x137F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137F48u;
            // 0x137f4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137EE0u: goto label_137ee0;
            case 0x137F28u: goto label_137f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137F50u;
}
