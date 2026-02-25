#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemHitFunction_BONUS
// Address: 0x197050 - 0x19711c
void ItemHitFunction_BONUS_0x197050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemHitFunction_BONUS_0x197050");
#endif

    ctx->pc = 0x197050u;

    // 0x197050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19705c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197060: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x197060u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x197064: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x197064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x197068: 0x18800027  blez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x197068u;
    {
        const bool branch_taken_0x197068 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197068u;
            // 0x19706c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197068) {
            ctx->pc = 0x197108u;
            goto label_197108;
        }
    }
    ctx->pc = 0x197070u;
    // 0x197070: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x197070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197074: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197074u;
    {
        const bool branch_taken_0x197074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x197074) {
            ctx->pc = 0x197088u;
            goto label_197088;
        }
    }
    ctx->pc = 0x19707Cu;
    // 0x19707c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19707Cu;
    {
        const bool branch_taken_0x19707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19707c) {
            ctx->pc = 0x197108u;
            goto label_197108;
        }
    }
    ctx->pc = 0x197084u;
    // 0x197084: 0x0  nop
    ctx->pc = 0x197084u;
    // NOP
label_197088:
    // 0x197088: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x197088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19708c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x19708cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x197090: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x197090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x197094: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x197094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x197098: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197098u;
    {
        const bool branch_taken_0x197098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x197098) {
            ctx->pc = 0x1970A8u;
            goto label_1970a8;
        }
    }
    ctx->pc = 0x1970A0u;
    // 0x1970a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1970a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1970a4: 0x0  nop
    ctx->pc = 0x1970a4u;
    // NOP
label_1970a8:
    // 0x1970a8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1970a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1970ac: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x1970acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1970b0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x1970b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1970b4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1970b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1970b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1970b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1970bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1970bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1970c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1970c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1970c4: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x1970c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x1970c8: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1970c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1970cc: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x1970ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1970d0: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1970D0u;
    SET_GPR_U32(ctx, 31, 0x1970D8u);
    ctx->pc = 0x1970D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1970D0u;
            // 0x1970d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970D8u; }
        if (ctx->pc != 0x1970D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970D8u; }
        if (ctx->pc != 0x1970D8u) { return; }
    }
    ctx->pc = 0x1970D8u;
    // 0x1970d8: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x1970d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1970dc: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x1970dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1970e0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1970E0u;
    SET_GPR_U32(ctx, 31, 0x1970E8u);
    ctx->pc = 0x1970E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1970E0u;
            // 0x1970e4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970E8u; }
        if (ctx->pc != 0x1970E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1970E8u; }
        if (ctx->pc != 0x1970E8u) { return; }
    }
    ctx->pc = 0x1970E8u;
    // 0x1970e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1970ec: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x1970ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x1970f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1970f4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1970f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1970f8: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x1970f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x1970fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1970fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197100: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x197100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x197104: 0x0  nop
    ctx->pc = 0x197104u;
    // NOP
label_197108:
    // 0x197108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19710c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19710cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197114: 0x3e00008  jr          $ra
    ctx->pc = 0x197114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197114u;
            // 0x197118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197088u: goto label_197088;
            case 0x1970A8u: goto label_1970a8;
            case 0x197108u: goto label_197108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19711Cu;
}
