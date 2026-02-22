#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sitofp
// Address: 0x129e60 - 0x129f18
void sitofp_0x129e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129e60u;

    // 0x129e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129e64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x129e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129e68: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x129e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x129e6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129e70: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x129e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x129e74: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129E74u;
    {
        const bool branch_taken_0x129e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E74u;
            // 0x129e78: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e74) {
            ctx->pc = 0x129E88u;
            goto label_129e88;
        }
    }
    ctx->pc = 0x129E7Cu;
    // 0x129e7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x129e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129e80: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x129E80u;
    {
        const bool branch_taken_0x129e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E80u;
            // 0x129e84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e80) {
            ctx->pc = 0x129F04u;
            goto label_129f04;
        }
    }
    ctx->pc = 0x129E88u;
label_129e88:
    // 0x129e88: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x129e8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x129E8Cu;
    {
        const bool branch_taken_0x129e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E8Cu;
            // 0x129e90: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e8c) {
            ctx->pc = 0x129EB8u;
            goto label_129eb8;
        }
    }
    ctx->pc = 0x129E94u;
    // 0x129e94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x129e98: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129E98u;
    {
        const bool branch_taken_0x129e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x129E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E98u;
            // 0x129e9c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e98) {
            ctx->pc = 0x129EB0u;
            goto label_129eb0;
        }
    }
    ctx->pc = 0x129EA0u;
    // 0x129ea0: 0x3c01cf00  lui         $at, 0xCF00
    ctx->pc = 0x129ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52992 << 16));
    // 0x129ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129ea8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x129EA8u;
    {
        const bool branch_taken_0x129ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EA8u;
            // 0x129eac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ea8) {
            ctx->pc = 0x129F10u;
            goto label_129f10;
        }
    }
    ctx->pc = 0x129EB0u;
label_129eb0:
    // 0x129eb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129EB0u;
    {
        const bool branch_taken_0x129eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EB0u;
            // 0x129eb4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129eb0) {
            ctx->pc = 0x129EBCu;
            goto label_129ebc;
        }
    }
    ctx->pc = 0x129EB8u;
label_129eb8:
    // 0x129eb8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x129eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_129ebc:
    // 0x129ebc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x129ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x129ec0: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x129ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x129ec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129ec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x129ec8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x129ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x129ecc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x129ECCu;
    {
        const bool branch_taken_0x129ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129ECCu;
            // 0x129ed0: 0x3c053fff  lui         $a1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ecc) {
            ctx->pc = 0x129F04u;
            goto label_129f04;
        }
    }
    ctx->pc = 0x129ED4u;
    // 0x129ed4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x129ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129ed8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x129ed8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x129edc: 0x0  nop
    ctx->pc = 0x129edcu;
    // NOP
label_129ee0:
    // 0x129ee0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x129ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x129ee4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x129ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x129ee8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x129ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129eec: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x129eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x129ef0: 0x0  nop
    ctx->pc = 0x129ef0u;
    // NOP
    // 0x129ef4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129EF4u;
    {
        const bool branch_taken_0x129ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ef4) {
            ctx->pc = 0x129EE0u;
            goto label_129ee0;
        }
    }
    ctx->pc = 0x129EFCu;
    // 0x129efc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x129efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x129f00: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x129f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_129f04:
    // 0x129f04: 0xc04a542  jal         func_129508
    ctx->pc = 0x129F04u;
    SET_GPR_U32(ctx, 31, 0x129F0Cu);
    ctx->pc = 0x129F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F04u;
            // 0x129f08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129508u;
    if (runtime->hasFunction(0x129508u)) {
        auto targetFn = runtime->lookupFunction(0x129508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F0Cu; }
        if (ctx->pc != 0x129F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x129508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F0Cu; }
        if (ctx->pc != 0x129F0Cu) { return; }
    }
    ctx->pc = 0x129F0Cu;
    // 0x129f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x129f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_129f10:
    // 0x129f10: 0x3e00008  jr          $ra
    ctx->pc = 0x129F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F10u;
            // 0x129f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129E88u: goto label_129e88;
            case 0x129EB0u: goto label_129eb0;
            case 0x129EB8u: goto label_129eb8;
            case 0x129EBCu: goto label_129ebc;
            case 0x129EE0u: goto label_129ee0;
            case 0x129F04u: goto label_129f04;
            case 0x129F10u: goto label_129f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129F18u;
}
