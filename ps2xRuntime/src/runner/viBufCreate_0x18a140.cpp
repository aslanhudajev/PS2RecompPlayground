#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufCreate
// Address: 0x18a140 - 0x18a1d0
void viBufCreate_0x18a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufCreate_0x18a140");
#endif

    ctx->pc = 0x18a140u;

    // 0x18a140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18a144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18a148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a14c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a150: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18a150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a154: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a158: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18a158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a160: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x18a160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a164: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18a164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18a168: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x18a168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a16c: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x18A16Cu;
    SET_GPR_U32(ctx, 31, 0x18A174u);
    ctx->pc = 0x18A170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A16Cu;
            // 0x18a170: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A174u; }
        if (ctx->pc != 0x18A174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A174u; }
        if (ctx->pc != 0x18A174u) { return; }
    }
    ctx->pc = 0x18A174u;
    // 0x18a174: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x18a174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x18a178: 0x121ac0  sll         $v1, $s2, 11
    ctx->pc = 0x18a178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x18a17c: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x18a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x18a180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a184: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x18a184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
    // 0x18a188: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18a18c: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x18a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
    // 0x18a190: 0xae700054  sw          $s0, 0x54($s3)
    ctx->pc = 0x18a190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 16));
    // 0x18a194: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x18a194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x18a198: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x18A198u;
    SET_GPR_U32(ctx, 31, 0x18A1A0u);
    ctx->pc = 0x18A19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A198u;
            // 0x18a19c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1A0u; }
        if (ctx->pc != 0x18A1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1A0u; }
        if (ctx->pc != 0x18A1A0u) { return; }
    }
    ctx->pc = 0x18A1A0u;
    // 0x18a1a0: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x18a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x18a1a4: 0xc0627f4  jal         func_189FD0
    ctx->pc = 0x18A1A4u;
    SET_GPR_U32(ctx, 31, 0x18A1ACu);
    ctx->pc = 0x18A1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1A4u;
            // 0x18a1a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FD0u;
    if (runtime->hasFunction(0x189FD0u)) {
        auto targetFn = runtime->lookupFunction(0x189FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1ACu; }
        if (ctx->pc != 0x18A1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufReset_0x189fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A1ACu; }
        if (ctx->pc != 0x18A1ACu) { return; }
    }
    ctx->pc = 0x18A1ACu;
    // 0x18a1ac: 0xfe600048  sd          $zero, 0x48($s3)
    ctx->pc = 0x18a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 0));
    // 0x18a1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a1b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a1b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a1bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A1C8u;
            // 0x18a1cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A1D0u;
}
