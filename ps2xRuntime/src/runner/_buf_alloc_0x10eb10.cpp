#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_alloc
// Address: 0x10eb10 - 0x10ebf0
void _buf_alloc_0x10eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_alloc_0x10eb10");
#endif

    ctx->pc = 0x10eb10u;

    // 0x10eb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eb14: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x10eb14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x10eb18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10eb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eb1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10eb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb20: 0x8ce27184  lw          $v0, 0x7184($a3)
    ctx->pc = 0x10eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 29060)));
    // 0x10eb24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eb2c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10EB2Cu;
    {
        const bool branch_taken_0x10eb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB2Cu;
            // 0x10eb30: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb2c) {
            ctx->pc = 0x10EB6Cu;
            goto label_10eb6c;
        }
    }
    ctx->pc = 0x10EB34u;
    // 0x10eb34: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x10eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x10eb38: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x10eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x10eb3c: 0x0  nop
    ctx->pc = 0x10eb3cu;
    // NOP
label_10eb40:
    // 0x10eb40: 0x8cc47180  lw          $a0, 0x7180($a2)
    ctx->pc = 0x10eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 29056)));
    // 0x10eb44: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x10eb44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10eb48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x10eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10eb4c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10eb50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10eb50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x10eb54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10EB54u;
    {
        const bool branch_taken_0x10eb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB54u;
            // 0x10eb58: 0x8ce27184  lw          $v0, 0x7184($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 29060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb54) {
            ctx->pc = 0x10EB80u;
            goto label_10eb80;
        }
    }
    ctx->pc = 0x10EB5Cu;
    // 0x10eb5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10eb60: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x10eb60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10eb64: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10EB64u;
    {
        const bool branch_taken_0x10eb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB64u;
            // 0x10eb68: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb64) {
            ctx->pc = 0x10EB40u;
            goto label_10eb40;
        }
    }
    ctx->pc = 0x10EB6Cu;
label_10eb6c:
    // 0x10eb6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10eb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10eb70:
    // 0x10eb70: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EB70u;
    {
        const bool branch_taken_0x10eb70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10eb70) {
            ctx->pc = 0x10EB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB70u;
            // 0x10eb74: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10EB88u;
            goto label_10eb88;
        }
    }
    ctx->pc = 0x10EB78u;
    // 0x10eb78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10EB78u;
    {
        const bool branch_taken_0x10eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB78u;
            // 0x10eb7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb78) {
            ctx->pc = 0x10EBDCu;
            goto label_10ebdc;
        }
    }
    ctx->pc = 0x10EB80u;
label_10eb80:
    // 0x10eb80: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x10EB80u;
    {
        const bool branch_taken_0x10eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB80u;
            // 0x10eb84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb80) {
            ctx->pc = 0x10EB70u;
            goto label_10eb70;
        }
    }
    ctx->pc = 0x10EB88u;
label_10eb88:
    // 0x10eb88: 0xae10001c  sw          $s0, 0x1C($s0)
    ctx->pc = 0x10eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 16));
    // 0x10eb8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x10eb8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x10eb90: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10EB90u;
    {
        const bool branch_taken_0x10eb90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB90u;
            // 0x10eb94: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb90) {
            ctx->pc = 0x10EBD8u;
            goto label_10ebd8;
        }
    }
    ctx->pc = 0x10EB98u;
    // 0x10eb98: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x10eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x10eb9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10eb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eba0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x10eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x10eba4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10eba8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ebac: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x10ebb0: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x10ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x10ebb4: 0xc043a78  jal         func_10E9E0
    ctx->pc = 0x10EBB4u;
    SET_GPR_U32(ctx, 31, 0x10EBBCu);
    ctx->pc = 0x10EBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBB4u;
            // 0x10ebb8: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E9E0u;
    if (runtime->hasFunction(0x10E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBBCu; }
        if (ctx->pc != 0x10EBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _buf_set_next_0x10e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBBCu; }
        if (ctx->pc != 0x10EBBCu) { return; }
    }
    ctx->pc = 0x10EBBCu;
    // 0x10ebbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10EBBCu;
    {
        const bool branch_taken_0x10ebbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBBCu;
            // 0x10ebc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebbc) {
            ctx->pc = 0x10EBDCu;
            goto label_10ebdc;
        }
    }
    ctx->pc = 0x10EBC4u;
    // 0x10ebc4: 0xc0440b4  jal         func_1102D0
    ctx->pc = 0x10EBC4u;
    SET_GPR_U32(ctx, 31, 0x10EBCCu);
    ctx->pc = 0x10EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBC4u;
            // 0x10ebc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102D0u;
    if (runtime->hasFunction(0x1102D0u)) {
        auto targetFn = runtime->lookupFunction(0x1102D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBCCu; }
        if (ctx->pc != 0x10EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _buf_clear_0x1102d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBCCu; }
        if (ctx->pc != 0x10EBCCu) { return; }
    }
    ctx->pc = 0x10EBCCu;
    // 0x10ebcc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x10ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x10ebd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10EBD0u;
    {
        const bool branch_taken_0x10ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBD0u;
            // 0x10ebd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebd0) {
            ctx->pc = 0x10EBDCu;
            goto label_10ebdc;
        }
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10ebd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ebdc:
    // 0x10ebdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ebe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ebe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ebe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ebe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ebe8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EBE8u;
            // 0x10ebec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EB40u: goto label_10eb40;
            case 0x10EB6Cu: goto label_10eb6c;
            case 0x10EB70u: goto label_10eb70;
            case 0x10EB80u: goto label_10eb80;
            case 0x10EB88u: goto label_10eb88;
            case 0x10EBD8u: goto label_10ebd8;
            case 0x10EBDCu: goto label_10ebdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EBF0u;
}
