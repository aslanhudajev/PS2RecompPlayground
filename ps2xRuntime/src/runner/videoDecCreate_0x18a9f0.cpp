#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecCreate
// Address: 0x18a9f0 - 0x18aaf0
void videoDecCreate_0x18a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecCreate_0x18a9f0");
#endif

    ctx->pc = 0x18a9f0u;

    // 0x18a9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18a9f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18a9f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a9fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18aa00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18aa00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18aa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18aa08: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18aa08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18aa10: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x18aa10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18aa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18aa18: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x18aa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18aa20: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x18aa20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa24: 0xc04ace2  jal         func_12B388
    ctx->pc = 0x18AA24u;
    SET_GPR_U32(ctx, 31, 0x18AA2Cu);
    ctx->pc = 0x18AA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA24u;
            // 0x18aa28: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B388u;
    if (runtime->hasFunction(0x12B388u)) {
        auto targetFn = runtime->lookupFunction(0x12B388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA2Cu; }
        if (ctx->pc != 0x18AA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegCreate_0x12b388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA2Cu; }
        if (ctx->pc != 0x18AA2Cu) { return; }
    }
    ctx->pc = 0x18AA2Cu;
    // 0x18aa2c: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18aa30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa38: 0x24c6a560  addiu       $a2, $a2, -0x5AA0
    ctx->pc = 0x18aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944096));
    // 0x18aa3c: 0xc04adf6  jal         func_12B7D8
    ctx->pc = 0x18AA3Cu;
    SET_GPR_U32(ctx, 31, 0x18AA44u);
    ctx->pc = 0x18AA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA3Cu;
            // 0x18aa40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B7D8u;
    if (runtime->hasFunction(0x12B7D8u)) {
        auto targetFn = runtime->lookupFunction(0x12B7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA44u; }
        if (ctx->pc != 0x18AA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x12b7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA44u; }
        if (ctx->pc != 0x18AA44u) { return; }
    }
    ctx->pc = 0x18AA44u;
    // 0x18aa44: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18aa44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18aa48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18aa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aa50: 0x24c6a530  addiu       $a2, $a2, -0x5AD0
    ctx->pc = 0x18aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944048));
    // 0x18aa54: 0xc04adf6  jal         func_12B7D8
    ctx->pc = 0x18AA54u;
    SET_GPR_U32(ctx, 31, 0x18AA5Cu);
    ctx->pc = 0x18AA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA54u;
            // 0x18aa58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B7D8u;
    if (runtime->hasFunction(0x12B7D8u)) {
        auto targetFn = runtime->lookupFunction(0x12B7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA5Cu; }
        if (ctx->pc != 0x18AA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x12b7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA5Cu; }
        if (ctx->pc != 0x18AA5Cu) { return; }
    }
    ctx->pc = 0x18AA5Cu;
    // 0x18aa5c: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18aa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18aa60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18aa68: 0x24c6a500  addiu       $a2, $a2, -0x5B00
    ctx->pc = 0x18aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944000));
    // 0x18aa6c: 0xc04adf6  jal         func_12B7D8
    ctx->pc = 0x18AA6Cu;
    SET_GPR_U32(ctx, 31, 0x18AA74u);
    ctx->pc = 0x18AA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA6Cu;
            // 0x18aa70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B7D8u;
    if (runtime->hasFunction(0x12B7D8u)) {
        auto targetFn = runtime->lookupFunction(0x12B7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA74u; }
        if (ctx->pc != 0x18AA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x12b7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA74u; }
        if (ctx->pc != 0x18AA74u) { return; }
    }
    ctx->pc = 0x18AA74u;
    // 0x18aa74: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18aa78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18aa80: 0x24c6a4d0  addiu       $a2, $a2, -0x5B30
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943952));
    // 0x18aa84: 0xc04adf6  jal         func_12B7D8
    ctx->pc = 0x18AA84u;
    SET_GPR_U32(ctx, 31, 0x18AA8Cu);
    ctx->pc = 0x18AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA84u;
            // 0x18aa88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B7D8u;
    if (runtime->hasFunction(0x12B7D8u)) {
        auto targetFn = runtime->lookupFunction(0x12B7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA8Cu; }
        if (ctx->pc != 0x18AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x12b7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA8Cu; }
        if (ctx->pc != 0x18AA8Cu) { return; }
    }
    ctx->pc = 0x18AA8Cu;
    // 0x18aa8c: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18aa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18aa90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18aa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa94: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x18aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18aa98: 0x24c6a480  addiu       $a2, $a2, -0x5B80
    ctx->pc = 0x18aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943872));
    // 0x18aa9c: 0xc04adf6  jal         func_12B7D8
    ctx->pc = 0x18AA9Cu;
    SET_GPR_U32(ctx, 31, 0x18AAA4u);
    ctx->pc = 0x18AAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA9Cu;
            // 0x18aaa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B7D8u;
    if (runtime->hasFunction(0x12B7D8u)) {
        auto targetFn = runtime->lookupFunction(0x12B7D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAA4u; }
        if (ctx->pc != 0x18AAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddCallback_0x12b7d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAA4u; }
        if (ctx->pc != 0x18AAA4u) { return; }
    }
    ctx->pc = 0x18AAA4u;
    // 0x18aaa4: 0xc062a68  jal         func_18A9A0
    ctx->pc = 0x18AAA4u;
    SET_GPR_U32(ctx, 31, 0x18AAACu);
    ctx->pc = 0x18AAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAA4u;
            // 0x18aaa8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9A0u;
    if (runtime->hasFunction(0x18A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAACu; }
        if (ctx->pc != 0x18AAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecReset_0x18a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAACu; }
        if (ctx->pc != 0x18AAACu) { return; }
    }
    ctx->pc = 0x18AAACu;
    // 0x18aaac: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x18aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
    // 0x18aab0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x18aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18aab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x18aab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aabc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18aabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aac0: 0xc062850  jal         func_18A140
    ctx->pc = 0x18AAC0u;
    SET_GPR_U32(ctx, 31, 0x18AAC8u);
    ctx->pc = 0x18AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAC0u;
            // 0x18aac4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A140u;
    if (runtime->hasFunction(0x18A140u)) {
        auto targetFn = runtime->lookupFunction(0x18A140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAC8u; }
        if (ctx->pc != 0x18AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufCreate_0x18a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAC8u; }
        if (ctx->pc != 0x18AAC8u) { return; }
    }
    ctx->pc = 0x18AAC8u;
    // 0x18aac8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18aac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18aacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aad0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18aad0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18aad4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18aad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18aad8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18aad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18aadc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18aadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18aae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18aae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18aae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18aae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18aae8: 0x3e00008  jr          $ra
    ctx->pc = 0x18AAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAE8u;
            // 0x18aaec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AAF0u;
}
