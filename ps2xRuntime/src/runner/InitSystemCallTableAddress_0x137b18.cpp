#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitSystemCallTableAddress
// Address: 0x137b18 - 0x137c14
void InitSystemCallTableAddress_0x137b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitSystemCallTableAddress_0x137b18");
#endif

    ctx->pc = 0x137b18u;

    // 0x137b18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x137b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x137b1c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x137b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137b20: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x137b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x137b24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x137b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x137b28: 0x3c150013  lui         $s5, 0x13
    ctx->pc = 0x137b28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)19 << 16));
    // 0x137b2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x137b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x137b30: 0x3c140013  lui         $s4, 0x13
    ctx->pc = 0x137b30u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)19 << 16));
    // 0x137b34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x137b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137b38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137b40: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x137b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x137b44: 0x24500b20  addiu       $s0, $v0, 0xB20
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2848));
    // 0x137b48: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x137b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x137b4c: 0x8c440b20  lw          $a0, 0xB20($v0)
    ctx->pc = 0x137b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2848)));
    // 0x137b50: 0xc04df06  jal         func_137C18
    ctx->pc = 0x137B50u;
    SET_GPR_U32(ctx, 31, 0x137B58u);
    ctx->pc = 0x137B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137B50u;
            // 0x137b54: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137C18u;
    if (runtime->hasFunction(0x137C18u)) {
        auto targetFn = runtime->lookupFunction(0x137C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B58u; }
        if (ctx->pc != 0x137B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B58u; }
        if (ctx->pc != 0x137B58u) { return; }
    }
    ctx->pc = 0x137B58u;
    // 0x137b58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x137b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x137b5c: 0xc04df06  jal         func_137C18
    ctx->pc = 0x137B5Cu;
    SET_GPR_U32(ctx, 31, 0x137B64u);
    ctx->pc = 0x137B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137B5Cu;
            // 0x137b60: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137C18u;
    if (runtime->hasFunction(0x137C18u)) {
        auto targetFn = runtime->lookupFunction(0x137C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B64u; }
        if (ctx->pc != 0x137B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x137c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B64u; }
        if (ctx->pc != 0x137B64u) { return; }
    }
    ctx->pc = 0x137B64u;
    // 0x137b64: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x137b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x137b68: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x137b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x137b6c: 0xc04deb4  jal         func_137AD0
    ctx->pc = 0x137B6Cu;
    SET_GPR_U32(ctx, 31, 0x137B74u);
    ctx->pc = 0x137B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137B6Cu;
            // 0x137b70: 0x26a67a90  addiu       $a2, $s5, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 31376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137AD0u;
    if (runtime->hasFunction(0x137AD0u)) {
        auto targetFn = runtime->lookupFunction(0x137AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B74u; }
        if (ctx->pc != 0x137B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindAddress_0x137ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B74u; }
        if (ctx->pc != 0x137B74u) { return; }
    }
    ctx->pc = 0x137B74u;
    // 0x137b74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x137b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x137b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x137b7c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x137b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x137b80: 0xc04deb4  jal         func_137AD0
    ctx->pc = 0x137B80u;
    SET_GPR_U32(ctx, 31, 0x137B88u);
    ctx->pc = 0x137B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137B80u;
            // 0x137b84: 0x26867a58  addiu       $a2, $s4, 0x7A58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 31320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137AD0u;
    if (runtime->hasFunction(0x137AD0u)) {
        auto targetFn = runtime->lookupFunction(0x137AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B88u; }
        if (ctx->pc != 0x137B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindAddress_0x137ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137B88u; }
        if (ctx->pc != 0x137B88u) { return; }
    }
    ctx->pc = 0x137B88u;
    // 0x137b88: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x137b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x137b8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x137b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137b90: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x137b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x137b94: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x137B94u;
    {
        const bool branch_taken_0x137b94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x137B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137B94u;
            // 0x137b98: 0x3c160021  lui         $s6, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b94) {
            ctx->pc = 0x137BE8u;
            goto label_137be8;
        }
    }
    ctx->pc = 0x137B9Cu;
    // 0x137b9c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x137b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_137ba0:
    // 0x137ba0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137BA0u;
    {
        const bool branch_taken_0x137ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BA0u;
            // 0x137ba4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ba0) {
            ctx->pc = 0x137BC0u;
            goto label_137bc0;
        }
    }
    ctx->pc = 0x137BA8u;
    // 0x137ba8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x137ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x137bac: 0xc04deb4  jal         func_137AD0
    ctx->pc = 0x137BACu;
    SET_GPR_U32(ctx, 31, 0x137BB4u);
    ctx->pc = 0x137BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137BACu;
            // 0x137bb0: 0x26a67a90  addiu       $a2, $s5, 0x7A90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 31376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137AD0u;
    if (runtime->hasFunction(0x137AD0u)) {
        auto targetFn = runtime->lookupFunction(0x137AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BB4u; }
        if (ctx->pc != 0x137BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindAddress_0x137ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BB4u; }
        if (ctx->pc != 0x137BB4u) { return; }
    }
    ctx->pc = 0x137BB4u;
    // 0x137bb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x137bb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137bb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x137BB8u;
    {
        const bool branch_taken_0x137bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BB8u;
            // 0x137bbc: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bb8) {
            ctx->pc = 0x137BD8u;
            goto label_137bd8;
        }
    }
    ctx->pc = 0x137BC0u;
label_137bc0:
    // 0x137bc0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x137bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x137bc4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x137bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x137bc8: 0xc04deb4  jal         func_137AD0
    ctx->pc = 0x137BC8u;
    SET_GPR_U32(ctx, 31, 0x137BD0u);
    ctx->pc = 0x137BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137BC8u;
            // 0x137bcc: 0x26867a58  addiu       $a2, $s4, 0x7A58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 31320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137AD0u;
    if (runtime->hasFunction(0x137AD0u)) {
        auto targetFn = runtime->lookupFunction(0x137AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BD0u; }
        if (ctx->pc != 0x137BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindAddress_0x137ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137BD0u; }
        if (ctx->pc != 0x137BD0u) { return; }
    }
    ctx->pc = 0x137BD0u;
    // 0x137bd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x137bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137bd4: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x137bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_137bd8:
    // 0x137bd8: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x137BD8u;
    {
        const bool branch_taken_0x137bd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x137BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BD8u;
            // 0x137bdc: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137bd8) {
            ctx->pc = 0x137BA0u;
            goto label_137ba0;
        }
    }
    ctx->pc = 0x137BE0u;
    // 0x137be0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137BE0u;
    {
        const bool branch_taken_0x137be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137BE0u;
            // 0x137be4: 0xaed10b18  sw          $s1, 0xB18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 2840), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137be0) {
            ctx->pc = 0x137BECu;
            goto label_137bec;
        }
    }
    ctx->pc = 0x137BE8u;
label_137be8:
    // 0x137be8: 0xaed10b18  sw          $s1, 0xB18($s6)
    ctx->pc = 0x137be8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 2840), GPR_U32(ctx, 17));
label_137bec:
    // 0x137bec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x137becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x137bf0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x137bf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137bf4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x137bf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137bf8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x137bf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137bfc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x137bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137c00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137c04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x137c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x137C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137C0Cu;
            // 0x137c10: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137BA0u: goto label_137ba0;
            case 0x137BC0u: goto label_137bc0;
            case 0x137BD8u: goto label_137bd8;
            case 0x137BE8u: goto label_137be8;
            case 0x137BECu: goto label_137bec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137C14u;
}
