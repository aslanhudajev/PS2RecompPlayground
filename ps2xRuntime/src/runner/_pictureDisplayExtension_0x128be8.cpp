#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pictureDisplayExtension
// Address: 0x128be8 - 0x128cdc
void _pictureDisplayExtension_0x128be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pictureDisplayExtension_0x128be8");
#endif

    ctx->pc = 0x128be8u;

    // 0x128be8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x128be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x128bec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x128becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x128bf0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x128bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x128bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bf8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x128bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x128bfc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x128bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x128c00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x128c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x128c04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x128c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x128c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128c0c: 0x8e22013c  lw          $v0, 0x13C($s1)
    ctx->pc = 0x128c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x128c10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x128C10u;
    {
        const bool branch_taken_0x128c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128c10) {
            ctx->pc = 0x128C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128C10u;
            // 0x128c14: 0x8e230174  lw          $v1, 0x174($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128C34u;
            goto label_128c34;
        }
    }
    ctx->pc = 0x128C18u;
    // 0x128c18: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x128c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x128c1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128C1Cu;
    {
        const bool branch_taken_0x128c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C1Cu;
            // 0x128c20: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c1c) {
            ctx->pc = 0x128C40u;
            goto label_128c40;
        }
    }
    ctx->pc = 0x128C24u;
    // 0x128c24: 0x8e230178  lw          $v1, 0x178($s1)
    ctx->pc = 0x128c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x128c28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128c2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128C2Cu;
    {
        const bool branch_taken_0x128c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C2Cu;
            // 0x128c30: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c2c) {
            ctx->pc = 0x128C50u;
            goto label_128c50;
        }
    }
    ctx->pc = 0x128C34u;
label_128c34:
    // 0x128c34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128c38: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x128C38u;
    {
        const bool branch_taken_0x128c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x128c38) {
            ctx->pc = 0x128C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128C38u;
            // 0x128c3c: 0x8e220184  lw          $v0, 0x184($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128C48u;
            goto label_128c48;
        }
    }
    ctx->pc = 0x128C40u;
label_128c40:
    // 0x128c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128C40u;
    {
        const bool branch_taken_0x128c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C40u;
            // 0x128c44: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c40) {
            ctx->pc = 0x128C50u;
            goto label_128c50;
        }
    }
    ctx->pc = 0x128C48u;
label_128c48:
    // 0x128c48: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x128c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x128c4c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x128c4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_128c50:
    // 0x128c50: 0x1a600019  blez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x128C50u;
    {
        const bool branch_taken_0x128c50 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x128C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128C50u;
            // 0x128c54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128c50) {
            ctx->pc = 0x128CB8u;
            goto label_128cb8;
        }
    }
    ctx->pc = 0x128C58u;
    // 0x128c58: 0x2635018c  addiu       $s5, $s1, 0x18C
    ctx->pc = 0x128c58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x128c5c: 0x26340198  addiu       $s4, $s1, 0x198
    ctx->pc = 0x128c5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 408));
    // 0x128c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c64: 0x0  nop
    ctx->pc = 0x128c64u;
    // NOP
label_128c68:
    // 0x128c68: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128C68u;
    SET_GPR_U32(ctx, 31, 0x128C70u);
    ctx->pc = 0x128C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C68u;
            // 0x128c6c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C70u; }
        if (ctx->pc != 0x128C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C70u; }
        if (ctx->pc != 0x128C70u) { return; }
    }
    ctx->pc = 0x128C70u;
    // 0x128c70: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x128c70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x128c74: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x128c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x128c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x128c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x128c80: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128C80u;
    SET_GPR_U32(ctx, 31, 0x128C88u);
    ctx->pc = 0x128C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C80u;
            // 0x128c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C88u; }
        if (ctx->pc != 0x128C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C88u; }
        if (ctx->pc != 0x128C88u) { return; }
    }
    ctx->pc = 0x128C88u;
    // 0x128c88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128c8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128c90: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128C90u;
    SET_GPR_U32(ctx, 31, 0x128C98u);
    ctx->pc = 0x128C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128C90u;
            // 0x128c94: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C98u; }
        if (ctx->pc != 0x128C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128C98u; }
        if (ctx->pc != 0x128C98u) { return; }
    }
    ctx->pc = 0x128C98u;
    // 0x128c98: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x128c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x128c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ca0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x128ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x128ca4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128CA4u;
    SET_GPR_U32(ctx, 31, 0x128CACu);
    ctx->pc = 0x128CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128CA4u;
            // 0x128ca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CACu; }
        if (ctx->pc != 0x128CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128CACu; }
        if (ctx->pc != 0x128CACu) { return; }
    }
    ctx->pc = 0x128CACu;
    // 0x128cac: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x128cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x128cb0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x128CB0u;
    {
        const bool branch_taken_0x128cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CB0u;
            // 0x128cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cb0) {
            ctx->pc = 0x128C68u;
            goto label_128c68;
        }
    }
    ctx->pc = 0x128CB8u;
label_128cb8:
    // 0x128cb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x128cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x128cbc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x128cc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x128cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x128cc4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x128cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x128cc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x128cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128ccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x128CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128CD4u;
            // 0x128cd8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128C34u: goto label_128c34;
            case 0x128C40u: goto label_128c40;
            case 0x128C48u: goto label_128c48;
            case 0x128C50u: goto label_128c50;
            case 0x128C68u: goto label_128c68;
            case 0x128CB8u: goto label_128cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128CDCu;
}
