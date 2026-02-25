#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemHitFunction_BONUS_MID
// Address: 0x196f70 - 0x197044
void ItemHitFunction_BONUS_MID_0x196f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemHitFunction_BONUS_MID_0x196f70");
#endif

    ctx->pc = 0x196f70u;

    // 0x196f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196f74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196f80: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x196f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x196f84: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x196f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x196f88: 0x18800029  blez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x196F88u;
    {
        const bool branch_taken_0x196f88 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x196F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F88u;
            // 0x196f8c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f88) {
            ctx->pc = 0x197030u;
            goto label_197030;
        }
    }
    ctx->pc = 0x196F90u;
    // 0x196f90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196f94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196F94u;
    {
        const bool branch_taken_0x196f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f94) {
            ctx->pc = 0x196FA8u;
            goto label_196fa8;
        }
    }
    ctx->pc = 0x196F9Cu;
    // 0x196f9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x196F9Cu;
    {
        const bool branch_taken_0x196f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f9c) {
            ctx->pc = 0x197030u;
            goto label_197030;
        }
    }
    ctx->pc = 0x196FA4u;
    // 0x196fa4: 0x0  nop
    ctx->pc = 0x196fa4u;
    // NOP
label_196fa8:
    // 0x196fa8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x196fac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x196facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x196fb0: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x196fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x196fb4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x196fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x196fb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196FB8u;
    {
        const bool branch_taken_0x196fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196fb8) {
            ctx->pc = 0x196FC8u;
            goto label_196fc8;
        }
    }
    ctx->pc = 0x196FC0u;
    // 0x196fc0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x196fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x196fc4: 0x0  nop
    ctx->pc = 0x196fc4u;
    // NOP
label_196fc8:
    // 0x196fc8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x196fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x196fcc: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x196fccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196fd0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x196fd4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x196fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x196fd8: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x196fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x196fdc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x196fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x196fe0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x196fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x196fe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196fec: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x196fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x196ff0: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x196ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x196ff4: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x196ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x196ff8: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x196FF8u;
    SET_GPR_U32(ctx, 31, 0x197000u);
    ctx->pc = 0x196FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196FF8u;
            // 0x196ffc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197000u; }
        if (ctx->pc != 0x197000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197000u; }
        if (ctx->pc != 0x197000u) { return; }
    }
    ctx->pc = 0x197000u;
    // 0x197000: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x197000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197004: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x197004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x197008: 0xc05d080  jal         func_174200
    ctx->pc = 0x197008u;
    SET_GPR_U32(ctx, 31, 0x197010u);
    ctx->pc = 0x19700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197008u;
            // 0x19700c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197010u; }
        if (ctx->pc != 0x197010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197010u; }
        if (ctx->pc != 0x197010u) { return; }
    }
    ctx->pc = 0x197010u;
    // 0x197010: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x197014: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x197014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x197018: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19701c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x19701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x197020: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x197024: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x197024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x197028: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x197028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x19702c: 0x0  nop
    ctx->pc = 0x19702cu;
    // NOP
label_197030:
    // 0x197030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19703c: 0x3e00008  jr          $ra
    ctx->pc = 0x19703Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19703Cu;
            // 0x197040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196FA8u: goto label_196fa8;
            case 0x196FC8u: goto label_196fc8;
            case 0x197030u: goto label_197030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197044u;
}
