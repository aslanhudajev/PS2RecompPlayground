#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pow5mult
// Address: 0x13bdf8 - 0x13bef8
void _pow5mult_0x13bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pow5mult_0x13bdf8");
#endif

    ctx->pc = 0x13bdf8u;

    // 0x13bdf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13bdfc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13bdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13be00: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x13be00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13be04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13be04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13be0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13be0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13be14: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x13be14u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)3u)));
    // 0x13be18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13be1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13BE1Cu;
    {
        const bool branch_taken_0x13be1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE1Cu;
            // 0x13be20: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be1c) {
            ctx->pc = 0x13BE48u;
            goto label_13be48;
        }
    }
    ctx->pc = 0x13BE24u;
    // 0x13be24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13be24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13be28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13be28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13be2c: 0x2442fb88  addiu       $v0, $v0, -0x478
    ctx->pc = 0x13be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966152));
    // 0x13be30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13be30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13be34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13be34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13be38: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x13be38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13be3c: 0xc04edfa  jal         func_13B7E8
    ctx->pc = 0x13BE3Cu;
    SET_GPR_U32(ctx, 31, 0x13BE44u);
    ctx->pc = 0x13BE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE3Cu;
            // 0x13be40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7E8u;
    if (runtime->hasFunction(0x13B7E8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE44u; }
        if (ctx->pc != 0x13BE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x13b7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE44u; }
        if (ctx->pc != 0x13BE44u) { return; }
    }
    ctx->pc = 0x13BE44u;
    // 0x13be44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13be44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13be48:
    // 0x13be48: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x13be48u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x13be4c: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x13BE4Cu;
    {
        const bool branch_taken_0x13be4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE4Cu;
            // 0x13be50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be4c) {
            ctx->pc = 0x13BEDCu;
            goto label_13bedc;
        }
    }
    ctx->pc = 0x13BE54u;
    // 0x13be54: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x13be54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x13be58: 0x16000013  bnez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13BE58u;
    {
        const bool branch_taken_0x13be58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE58u;
            // 0x13be5c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be58) {
            ctx->pc = 0x13BEA8u;
            goto label_13bea8;
        }
    }
    ctx->pc = 0x13BE60u;
    // 0x13be60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13be60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be64: 0xc04eee4  jal         func_13BB90
    ctx->pc = 0x13BE64u;
    SET_GPR_U32(ctx, 31, 0x13BE6Cu);
    ctx->pc = 0x13BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE64u;
            // 0x13be68: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BB90u;
    if (runtime->hasFunction(0x13BB90u)) {
        auto targetFn = runtime->lookupFunction(0x13BB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE6Cu; }
        if (ctx->pc != 0x13BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x13bb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE6Cu; }
        if (ctx->pc != 0x13BE6Cu) { return; }
    }
    ctx->pc = 0x13BE6Cu;
    // 0x13be6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13be6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be70: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x13be70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x13be74: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13BE74u;
    {
        const bool branch_taken_0x13be74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE74u;
            // 0x13be78: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be74) {
            ctx->pc = 0x13BEA4u;
            goto label_13bea4;
        }
    }
    ctx->pc = 0x13BE7Cu;
    // 0x13be7c: 0x0  nop
    ctx->pc = 0x13be7cu;
    // NOP
label_13be80:
    // 0x13be80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BE80u;
    {
        const bool branch_taken_0x13be80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13be80) {
            ctx->pc = 0x13BE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE80u;
            // 0x13be84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BEA4u;
            goto label_13bea4;
        }
    }
    ctx->pc = 0x13BE88u;
    // 0x13be88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13be88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13be8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be90: 0xc04eef2  jal         func_13BBC8
    ctx->pc = 0x13BE90u;
    SET_GPR_U32(ctx, 31, 0x13BE98u);
    ctx->pc = 0x13BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BE90u;
            // 0x13be94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC8u;
    if (runtime->hasFunction(0x13BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x13BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE98u; }
        if (ctx->pc != 0x13BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x13bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BE98u; }
        if (ctx->pc != 0x13BE98u) { return; }
    }
    ctx->pc = 0x13BE98u;
    // 0x13be98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x13be98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x13be9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13bea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13bea4:
    // 0x13bea4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x13bea4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)1u)));
label_13bea8:
    // 0x13bea8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13BEA8u;
    {
        const bool branch_taken_0x13bea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEA8u;
            // 0x13beac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bea8) {
            ctx->pc = 0x13BECCu;
            goto label_13becc;
        }
    }
    ctx->pc = 0x13BEB0u;
    // 0x13beb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13beb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13beb4: 0xc04eef2  jal         func_13BBC8
    ctx->pc = 0x13BEB4u;
    SET_GPR_U32(ctx, 31, 0x13BEBCu);
    ctx->pc = 0x13BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEB4u;
            // 0x13beb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC8u;
    if (runtime->hasFunction(0x13BBC8u)) {
        auto targetFn = runtime->lookupFunction(0x13BBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEBCu; }
        if (ctx->pc != 0x13BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x13bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BEBCu; }
        if (ctx->pc != 0x13BEBCu) { return; }
    }
    ctx->pc = 0x13BEBCu;
    // 0x13bebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13bebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bec4: 0xc04edee  jal         func_13B7B8
    ctx->pc = 0x13BEC4u;
    SET_GPR_U32(ctx, 31, 0x13BECCu);
    ctx->pc = 0x13BEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEC4u;
            // 0x13bec8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (runtime->hasFunction(0x13B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x13B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BECCu; }
        if (ctx->pc != 0x13BECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x13b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BECCu; }
        if (ctx->pc != 0x13BECCu) { return; }
    }
    ctx->pc = 0x13BECCu;
label_13becc:
    // 0x13becc: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x13beccu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x13bed0: 0x5620ffeb  bnel        $s1, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x13BED0u;
    {
        const bool branch_taken_0x13bed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bed0) {
            ctx->pc = 0x13BED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13BED0u;
            // 0x13bed4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13BE80u;
            goto label_13be80;
        }
    }
    ctx->pc = 0x13BED8u;
    // 0x13bed8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13bed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13bedc:
    // 0x13bedc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13bedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bee0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x13bee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bee4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13bee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bee8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13bee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13beec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13beecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x13BEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BEF0u;
            // 0x13bef4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13BE48u: goto label_13be48;
            case 0x13BE80u: goto label_13be80;
            case 0x13BEA4u: goto label_13bea4;
            case 0x13BEA8u: goto label_13bea8;
            case 0x13BECCu: goto label_13becc;
            case 0x13BEDCu: goto label_13bedc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13BEF8u;
}
