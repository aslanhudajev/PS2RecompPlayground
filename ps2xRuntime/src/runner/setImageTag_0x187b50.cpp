#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setImageTag
// Address: 0x187b50 - 0x187e4c
void setImageTag_0x187b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setImageTag_0x187b50");
#endif

    ctx->pc = 0x187b50u;

    // 0x187b50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x187b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x187b54: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x187b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x187b58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x187b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x187b5c: 0x2442a4a0  addiu       $v0, $v0, -0x5B60
    ctx->pc = 0x187b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x187b60: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x187b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x187b64: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x187b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x187b68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x187b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x187b6c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x187b6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x187b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x187b74: 0x8b903  sra         $s7, $t0, 4
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 4));
    // 0x187b78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x187b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x187b7c: 0x7b103  sra         $s6, $a3, 4
    ctx->pc = 0x187b7cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 7), 4));
    // 0x187b80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x187b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x187b84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x187b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187b8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187b98: 0xafa800ac  sw          $t0, 0xAC($sp)
    ctx->pc = 0x187b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
    // 0x187b9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x187b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ba0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x187ba0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187ba4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x187ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x187ba8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x187ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x187bac: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x187bacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x187bb0: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x187bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x187bb4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x187bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187bb8: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x187BB8u;
    SET_GPR_U32(ctx, 31, 0x187BC0u);
    ctx->pc = 0x187BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BB8u;
            // 0x187bbc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BC0u; }
        if (ctx->pc != 0x187BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BC0u; }
        if (ctx->pc != 0x187BC0u) { return; }
    }
    ctx->pc = 0x187BC0u;
    // 0x187bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187bc4: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x187BC4u;
    SET_GPR_U32(ctx, 31, 0x187BCCu);
    ctx->pc = 0x187BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BC4u;
            // 0x187bc8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (runtime->hasFunction(0x12D288u)) {
        auto targetFn = runtime->lookupFunction(0x12D288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BCCu; }
        if (ctx->pc != 0x187BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x12d288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BCCu; }
        if (ctx->pc != 0x187BCCu) { return; }
    }
    ctx->pc = 0x187BCCu;
    // 0x187bcc: 0xc04b4a6  jal         func_12D298
    ctx->pc = 0x187BCCu;
    SET_GPR_U32(ctx, 31, 0x187BD4u);
    ctx->pc = 0x187BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BCCu;
            // 0x187bd0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D298u;
    if (runtime->hasFunction(0x12D298u)) {
        auto targetFn = runtime->lookupFunction(0x12D298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BD4u; }
        if (ctx->pc != 0x187BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x12d298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BD4u; }
        if (ctx->pc != 0x187BD4u) { return; }
    }
    ctx->pc = 0x187BD4u;
    // 0x187bd4: 0x16000052  bnez        $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x187BD4u;
    {
        const bool branch_taken_0x187bd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x187BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BD4u;
            // 0x187bd8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bd4) {
            ctx->pc = 0x187D20u;
            goto label_187d20;
        }
    }
    ctx->pc = 0x187BDCu;
    // 0x187bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187be4: 0xc04b4c0  jal         func_12D300
    ctx->pc = 0x187BE4u;
    SET_GPR_U32(ctx, 31, 0x187BECu);
    ctx->pc = 0x187BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BE4u;
            // 0x187be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D300u;
    if (runtime->hasFunction(0x12D300u)) {
        auto targetFn = runtime->lookupFunction(0x12D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BECu; }
        if (ctx->pc != 0x187BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x12d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BECu; }
        if (ctx->pc != 0x187BECu) { return; }
    }
    ctx->pc = 0x187BECu;
    // 0x187bec: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x187becu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x187bf0: 0xc04b528  jal         func_12D4A0
    ctx->pc = 0x187BF0u;
    SET_GPR_U32(ctx, 31, 0x187BF8u);
    ctx->pc = 0x187BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187BF0u;
            // 0x187bf4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4A0u;
    if (runtime->hasFunction(0x12D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BF8u; }
        if (ctx->pc != 0x187BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x12d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BF8u; }
        if (ctx->pc != 0x187BF8u) { return; }
    }
    ctx->pc = 0x187BF8u;
    // 0x187bf8: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x187bfc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187c00: 0x34421b00  ori         $v0, $v0, 0x1B00
    ctx->pc = 0x187c00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6912u)));
    // 0x187c04: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x187c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x187c08: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187C08u;
    SET_GPR_U32(ctx, 31, 0x187C10u);
    ctx->pc = 0x187C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C08u;
            // 0x187c0c: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C10u; }
        if (ctx->pc != 0x187C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C10u; }
        if (ctx->pc != 0x187C10u) { return; }
    }
    ctx->pc = 0x187C10u;
    // 0x187c10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x187c14: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187c18: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x187c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187c1c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x187c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x187c20: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187C20u;
    SET_GPR_U32(ctx, 31, 0x187C28u);
    ctx->pc = 0x187C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C20u;
            // 0x187c24: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C28u; }
        if (ctx->pc != 0x187C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C28u; }
        if (ctx->pc != 0x187C28u) { return; }
    }
    ctx->pc = 0x187C28u;
    // 0x187c28: 0xc04b52e  jal         func_12D4B8
    ctx->pc = 0x187C28u;
    SET_GPR_U32(ctx, 31, 0x187C30u);
    ctx->pc = 0x187C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C28u;
            // 0x187c2c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4B8u;
    if (runtime->hasFunction(0x12D4B8u)) {
        auto targetFn = runtime->lookupFunction(0x12D4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C30u; }
        if (ctx->pc != 0x187C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x12d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C30u; }
        if (ctx->pc != 0x187C30u) { return; }
    }
    ctx->pc = 0x187C30u;
    // 0x187c30: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x187c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x187c34: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x187C34u;
    {
        const bool branch_taken_0x187c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C34u;
            // 0x187c38: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c34) {
            ctx->pc = 0x187D20u;
            goto label_187d20;
        }
    }
    ctx->pc = 0x187C3Cu;
    // 0x187c3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x187c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187c40:
    // 0x187c40: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x187c40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x187c44: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x187C44u;
    {
        const bool branch_taken_0x187c44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187C44u;
            // 0x187c48: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c44) {
            ctx->pc = 0x187D10u;
            goto label_187d10;
        }
    }
    ctx->pc = 0x187C4Cu;
    // 0x187c4c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x187c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x187c50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x187c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x187c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x187c58: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x187c58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187c5c: 0x0  nop
    ctx->pc = 0x187c5cu;
    // NOP
label_187c60:
    // 0x187c60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c6c: 0xc04b4c0  jal         func_12D300
    ctx->pc = 0x187C6Cu;
    SET_GPR_U32(ctx, 31, 0x187C74u);
    ctx->pc = 0x187C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C6Cu;
            // 0x187c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D300u;
    if (runtime->hasFunction(0x12D300u)) {
        auto targetFn = runtime->lookupFunction(0x12D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C74u; }
        if (ctx->pc != 0x187C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x12d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C74u; }
        if (ctx->pc != 0x187C74u) { return; }
    }
    ctx->pc = 0x187C74u;
    // 0x187c74: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x187c74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x187c78: 0xc04b528  jal         func_12D4A0
    ctx->pc = 0x187C78u;
    SET_GPR_U32(ctx, 31, 0x187C80u);
    ctx->pc = 0x187C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C78u;
            // 0x187c7c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4A0u;
    if (runtime->hasFunction(0x12D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C80u; }
        if (ctx->pc != 0x187C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x12d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C80u; }
        if (ctx->pc != 0x187C80u) { return; }
    }
    ctx->pc = 0x187C80u;
    // 0x187c80: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x187c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x187c84: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187c88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x187c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x187c8c: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x187c90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x187c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187c94: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187C94u;
    SET_GPR_U32(ctx, 31, 0x187C9Cu);
    ctx->pc = 0x187C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187C94u;
            // 0x187c98: 0x2023025  or          $a2, $s0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C9Cu; }
        if (ctx->pc != 0x187C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187C9Cu; }
        if (ctx->pc != 0x187C9Cu) { return; }
    }
    ctx->pc = 0x187C9Cu;
    // 0x187c9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187ca0: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x187ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x187ca4: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187CA4u;
    SET_GPR_U32(ctx, 31, 0x187CACu);
    ctx->pc = 0x187CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CA4u;
            // 0x187ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CACu; }
        if (ctx->pc != 0x187CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CACu; }
        if (ctx->pc != 0x187CACu) { return; }
    }
    ctx->pc = 0x187CACu;
    // 0x187cac: 0xc04b52e  jal         func_12D4B8
    ctx->pc = 0x187CACu;
    SET_GPR_U32(ctx, 31, 0x187CB4u);
    ctx->pc = 0x187CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CACu;
            // 0x187cb0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4B8u;
    if (runtime->hasFunction(0x12D4B8u)) {
        auto targetFn = runtime->lookupFunction(0x12D4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CB4u; }
        if (ctx->pc != 0x187CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x12d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CB4u; }
        if (ctx->pc != 0x187CB4u) { return; }
    }
    ctx->pc = 0x187CB4u;
    // 0x187cb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187cb8: 0xc04b522  jal         func_12D488
    ctx->pc = 0x187CB8u;
    SET_GPR_U32(ctx, 31, 0x187CC0u);
    ctx->pc = 0x187CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CB8u;
            // 0x187cbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D488u;
    if (runtime->hasFunction(0x12D488u)) {
        auto targetFn = runtime->lookupFunction(0x12D488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CC0u; }
        if (ctx->pc != 0x187CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReserve_0x12d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CC0u; }
        if (ctx->pc != 0x187CC0u) { return; }
    }
    ctx->pc = 0x187CC0u;
    // 0x187cc0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x187cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x187cc4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x187cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187cc8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x187cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x187ccc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x187cccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x187cd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x187cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cd4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x187cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x187cd8: 0xc061f94  jal         func_187E50
    ctx->pc = 0x187CD8u;
    SET_GPR_U32(ctx, 31, 0x187CE0u);
    ctx->pc = 0x187CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CD8u;
            // 0x187cdc: 0xfc400008  sd          $zero, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CE0u; }
        if (ctx->pc != 0x187CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CE0u; }
        if (ctx->pc != 0x187CE0u) { return; }
    }
    ctx->pc = 0x187CE0u;
    // 0x187ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ce4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187ce8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x187ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187cec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x187cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cf4: 0xc04b4de  jal         func_12D378
    ctx->pc = 0x187CF4u;
    SET_GPR_U32(ctx, 31, 0x187CFCu);
    ctx->pc = 0x187CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187CF4u;
            // 0x187cf8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D378u;
    if (runtime->hasFunction(0x12D378u)) {
        auto targetFn = runtime->lookupFunction(0x12D378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CFCu; }
        if (ctx->pc != 0x187CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRef_0x12d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187CFCu; }
        if (ctx->pc != 0x187CFCu) { return; }
    }
    ctx->pc = 0x187CFCu;
    // 0x187cfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x187cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x187d00: 0x26b50400  addiu       $s5, $s5, 0x400
    ctx->pc = 0x187d00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
    // 0x187d04: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x187d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x187d08: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x187D08u;
    {
        const bool branch_taken_0x187d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D08u;
            // 0x187d0c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d08) {
            ctx->pc = 0x187C60u;
            goto label_187c60;
        }
    }
    ctx->pc = 0x187D10u;
label_187d10:
    // 0x187d10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x187d14: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x187d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x187d18: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x187D18u;
    {
        const bool branch_taken_0x187d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187D18u;
            // 0x187d1c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d18) {
            ctx->pc = 0x187C40u;
            goto label_187c40;
        }
    }
    ctx->pc = 0x187D20u;
label_187d20:
    // 0x187d20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d2c: 0xc04b504  jal         func_12D410
    ctx->pc = 0x187D2Cu;
    SET_GPR_U32(ctx, 31, 0x187D34u);
    ctx->pc = 0x187D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D2Cu;
            // 0x187d30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D410u;
    if (runtime->hasFunction(0x12D410u)) {
        auto targetFn = runtime->lookupFunction(0x12D410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D34u; }
        if (ctx->pc != 0x187D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x12d410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D34u; }
        if (ctx->pc != 0x187D34u) { return; }
    }
    ctx->pc = 0x187D34u;
    // 0x187d34: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x187d34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x187d38: 0xc04b528  jal         func_12D4A0
    ctx->pc = 0x187D38u;
    SET_GPR_U32(ctx, 31, 0x187D40u);
    ctx->pc = 0x187D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D38u;
            // 0x187d3c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4A0u;
    if (runtime->hasFunction(0x12D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D40u; }
        if (ctx->pc != 0x187D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x12d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D40u; }
        if (ctx->pc != 0x187D40u) { return; }
    }
    ctx->pc = 0x187D40u;
    // 0x187d40: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187d44: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x187d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x187d48: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187D48u;
    SET_GPR_U32(ctx, 31, 0x187D50u);
    ctx->pc = 0x187D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D48u;
            // 0x187d4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D50u; }
        if (ctx->pc != 0x187D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D50u; }
        if (ctx->pc != 0x187D50u) { return; }
    }
    ctx->pc = 0x187D50u;
    // 0x187d50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187d54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x187d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x187d58: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187D58u;
    SET_GPR_U32(ctx, 31, 0x187D60u);
    ctx->pc = 0x187D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D58u;
            // 0x187d5c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D60u; }
        if (ctx->pc != 0x187D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D60u; }
        if (ctx->pc != 0x187D60u) { return; }
    }
    ctx->pc = 0x187D60u;
    // 0x187d60: 0x3402a803  ori         $v0, $zero, 0xA803
    ctx->pc = 0x187d60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)43011u)));
    // 0x187d64: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x187d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187d68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x187d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x187d6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187d70: 0x34421b00  ori         $v0, $v0, 0x1B00
    ctx->pc = 0x187d70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6912u)));
    // 0x187d74: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187d78: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x187d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x187d7c: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187D7Cu;
    SET_GPR_U32(ctx, 31, 0x187D84u);
    ctx->pc = 0x187D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D7Cu;
            // 0x187d80: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D84u; }
        if (ctx->pc != 0x187D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D84u; }
        if (ctx->pc != 0x187D84u) { return; }
    }
    ctx->pc = 0x187D84u;
    // 0x187d84: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d8c: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187D8Cu;
    SET_GPR_U32(ctx, 31, 0x187D94u);
    ctx->pc = 0x187D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187D8Cu;
            // 0x187d90: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D94u; }
        if (ctx->pc != 0x187D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187D94u; }
        if (ctx->pc != 0x187D94u) { return; }
    }
    ctx->pc = 0x187D94u;
    // 0x187d94: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x187d98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187d9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187da0: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187DA0u;
    SET_GPR_U32(ctx, 31, 0x187DA8u);
    ctx->pc = 0x187DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187DA0u;
            // 0x187da4: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DA8u; }
        if (ctx->pc != 0x187DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DA8u; }
        if (ctx->pc != 0x187DA8u) { return; }
    }
    ctx->pc = 0x187DA8u;
    // 0x187da8: 0x3c027880  lui         $v0, 0x7880
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30848 << 16));
    // 0x187dac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187db0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x187db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187db4: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187DB4u;
    SET_GPR_U32(ctx, 31, 0x187DBCu);
    ctx->pc = 0x187DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187DB4u;
            // 0x187db8: 0x34466c00  ori         $a2, $v0, 0x6C00 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)27648u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DBCu; }
        if (ctx->pc != 0x187DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DBCu; }
        if (ctx->pc != 0x187DBCu) { return; }
    }
    ctx->pc = 0x187DBCu;
    // 0x187dbc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x187dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x187dc0: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x187dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x187dc4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x187dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x187dc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187dcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x187dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x187dd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x187dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187dd4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x187dd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x187dd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x187dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x187ddc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x187ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x187de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187de4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x187de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x187de8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x187de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x187dec: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187DECu;
    SET_GPR_U32(ctx, 31, 0x187DF4u);
    ctx->pc = 0x187DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187DECu;
            // 0x187df0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DF4u; }
        if (ctx->pc != 0x187DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DF4u; }
        if (ctx->pc != 0x187DF4u) { return; }
    }
    ctx->pc = 0x187DF4u;
    // 0x187df4: 0x34028780  ori         $v0, $zero, 0x8780
    ctx->pc = 0x187df4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34688u)));
    // 0x187df8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x187df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x187dfc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x187dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x187e00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x187e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187e04: 0xc04b558  jal         func_12D560
    ctx->pc = 0x187E04u;
    SET_GPR_U32(ctx, 31, 0x187E0Cu);
    ctx->pc = 0x187E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E04u;
            // 0x187e08: 0x34469400  ori         $a2, $v0, 0x9400 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)37888u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D560u;
    if (runtime->hasFunction(0x12D560u)) {
        auto targetFn = runtime->lookupFunction(0x12D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E0Cu; }
        if (ctx->pc != 0x187E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x12d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E0Cu; }
        if (ctx->pc != 0x187E0Cu) { return; }
    }
    ctx->pc = 0x187E0Cu;
    // 0x187e0c: 0xc04b52e  jal         func_12D4B8
    ctx->pc = 0x187E0Cu;
    SET_GPR_U32(ctx, 31, 0x187E14u);
    ctx->pc = 0x187E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E0Cu;
            // 0x187e10: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D4B8u;
    if (runtime->hasFunction(0x12D4B8u)) {
        auto targetFn = runtime->lookupFunction(0x12D4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E14u; }
        if (ctx->pc != 0x187E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x12d4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E14u; }
        if (ctx->pc != 0x187E14u) { return; }
    }
    ctx->pc = 0x187E14u;
    // 0x187e14: 0xc04b4aa  jal         func_12D2A8
    ctx->pc = 0x187E14u;
    SET_GPR_U32(ctx, 31, 0x187E1Cu);
    ctx->pc = 0x187E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187E14u;
            // 0x187e18: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D2A8u;
    if (runtime->hasFunction(0x12D2A8u)) {
        auto targetFn = runtime->lookupFunction(0x12D2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E1Cu; }
        if (ctx->pc != 0x187E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x12d2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187E1Cu; }
        if (ctx->pc != 0x187E1Cu) { return; }
    }
    ctx->pc = 0x187E1Cu;
    // 0x187e1c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x187e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x187e20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x187e20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x187e24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x187e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x187e28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x187e28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x187e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187e44: 0x3e00008  jr          $ra
    ctx->pc = 0x187E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187E44u;
            // 0x187e48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187C40u: goto label_187c40;
            case 0x187C60u: goto label_187c60;
            case 0x187D10u: goto label_187d10;
            case 0x187D20u: goto label_187d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187E4Cu;
}
