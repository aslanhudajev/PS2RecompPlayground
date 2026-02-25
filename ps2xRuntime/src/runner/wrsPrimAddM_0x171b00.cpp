#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimAddM
// Address: 0x171b00 - 0x171ddc
void wrsPrimAddM_0x171b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimAddM_0x171b00");
#endif

    ctx->pc = 0x171b00u;

    // 0x171b00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x171b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x171b04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x171b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x171b08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x171b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x171b0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x171b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x171b10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x171b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171b20: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x171b24: 0xc042054  jal         func_108150
    ctx->pc = 0x171B24u;
    SET_GPR_U32(ctx, 31, 0x171B2Cu);
    ctx->pc = 0x171B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B24u;
            // 0x171b28: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108150u;
    if (runtime->hasFunction(0x108150u)) {
        auto targetFn = runtime->lookupFunction(0x108150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B2Cu; }
        if (ctx->pc != 0x171B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkPacketSize_0x108150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B2Cu; }
        if (ctx->pc != 0x171B2Cu) { return; }
    }
    ctx->pc = 0x171B2Cu;
    // 0x171b2c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x171b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x171b30: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x171b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x171b34: 0xc042ace  jal         func_10AB38
    ctx->pc = 0x171B34u;
    SET_GPR_U32(ctx, 31, 0x171B3Cu);
    ctx->pc = 0x171B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B34u;
            // 0x171b38: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB38u;
    if (runtime->hasFunction(0x10AB38u)) {
        auto targetFn = runtime->lookupFunction(0x10AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B3Cu; }
        if (ctx->pc != 0x171B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkNumPtoV_0x10ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B3Cu; }
        if (ctx->pc != 0x171B3Cu) { return; }
    }
    ctx->pc = 0x171B3Cu;
    // 0x171b3c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x171b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x171b40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x171b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171b44: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x171b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x171b48: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x171B48u;
    SET_GPR_U32(ctx, 31, 0x171B50u);
    ctx->pc = 0x171B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B48u;
            // 0x171b4c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B50u; }
        if (ctx->pc != 0x171B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B50u; }
        if (ctx->pc != 0x171B50u) { return; }
    }
    ctx->pc = 0x171B50u;
    // 0x171b50: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171b54: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x171b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x171b58: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171b5c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x171b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x171b60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x171b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b64: 0x24e73970  addiu       $a3, $a3, 0x3970
    ctx->pc = 0x171b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14704));
    // 0x171b68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x171b6c: 0x2463f980  addiu       $v1, $v1, -0x680
    ctx->pc = 0x171b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965632));
    // 0x171b70: 0x24423980  addiu       $v0, $v0, 0x3980
    ctx->pc = 0x171b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14720));
    // 0x171b74: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x171b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x171b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b7c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x171b7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171b80: 0x38890001  xori        $t1, $a0, 0x1
    ctx->pc = 0x171b80u;
    SET_GPR_VEC(ctx, 9, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x171b84: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x171b84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x171b88: 0x922c0  sll         $a0, $t1, 11
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x171b8c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x171b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x171b90: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x171b90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x171b94: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x171b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171b98: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x171b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x171b9c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x171b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x171ba0: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x171ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x171ba4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x171ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171ba8: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x171ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x171bac: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x171bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x171bb0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x171bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x171bb4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x171bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x171bb8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x171bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x171bbc: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x171bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x171bc0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171bc4: 0xc0420a6  jal         func_108298
    ctx->pc = 0x171BC4u;
    SET_GPR_U32(ctx, 31, 0x171BCCu);
    ctx->pc = 0x171BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BC4u;
            // 0x171bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BCCu; }
        if (ctx->pc != 0x171BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BCCu; }
        if (ctx->pc != 0x171BCCu) { return; }
    }
    ctx->pc = 0x171BCCu;
    // 0x171bcc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x171bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171bd0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x171bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x171bd4: 0xc0420f8  jal         func_1083E0
    ctx->pc = 0x171BD4u;
    SET_GPR_U32(ctx, 31, 0x171BDCu);
    ctx->pc = 0x171BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BD4u;
            // 0x171bd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083E0u;
    if (runtime->hasFunction(0x1083E0u)) {
        auto targetFn = runtime->lookupFunction(0x1083E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BDCu; }
        if (ctx->pc != 0x171BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPrimR_0x1083e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BDCu; }
        if (ctx->pc != 0x171BDCu) { return; }
    }
    ctx->pc = 0x171BDCu;
    // 0x171bdc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x171bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171be0: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x171be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x171be4: 0xc0420a6  jal         func_108298
    ctx->pc = 0x171BE4u;
    SET_GPR_U32(ctx, 31, 0x171BECu);
    ctx->pc = 0x171BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BE4u;
            // 0x171be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BECu; }
        if (ctx->pc != 0x171BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BECu; }
        if (ctx->pc != 0x171BECu) { return; }
    }
    ctx->pc = 0x171BECu;
    // 0x171bec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x171becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x171bf0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x171bf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171bf4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x171bf4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x171bf8: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x171bf8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x171bfc: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x171bfcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x171c00: 0xc05c518  jal         func_171460
    ctx->pc = 0x171C00u;
    SET_GPR_U32(ctx, 31, 0x171C08u);
    ctx->pc = 0x171C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C00u;
            // 0x171c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171460u;
    if (runtime->hasFunction(0x171460u)) {
        auto targetFn = runtime->lookupFunction(0x171460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C08u; }
        if (ctx->pc != 0x171C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetRgbaFM_0x171460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C08u; }
        if (ctx->pc != 0x171C08u) { return; }
    }
    ctx->pc = 0x171C08u;
    // 0x171c08: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x171c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x171c0c: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x171c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x171c10: 0xc04278e  jal         func_109E38
    ctx->pc = 0x171C10u;
    SET_GPR_U32(ctx, 31, 0x171C18u);
    ctx->pc = 0x171C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C10u;
            // 0x171c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E38u;
    if (runtime->hasFunction(0x109E38u)) {
        auto targetFn = runtime->lookupFunction(0x109E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C18u; }
        if (ctx->pc != 0x171C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetAlphaEnvFunc_0x109e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C18u; }
        if (ctx->pc != 0x171C18u) { return; }
    }
    ctx->pc = 0x171C18u;
    // 0x171c18: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x171c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x171c1c: 0xde440010  ld          $a0, 0x10($s2)
    ctx->pc = 0x171c1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x171c20: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x171c20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x171c24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x171c24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x171c28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x171c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x171c2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x171c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x171c30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x171c30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x171c34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x171c34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x171c38: 0x419b8  dsll        $v1, $a0, 6
    ctx->pc = 0x171c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 6);
    // 0x171c3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x171c3cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x171c40: 0x31d7e  dsrl32      $v1, $v1, 21
    ctx->pc = 0x171c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 21));
    // 0x171c44: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x171c44u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x171c48: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x171c48u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x171c4c: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x171c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x171c50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x171c50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x171c54: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x171c54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x171c58: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x171c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x171c5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x171c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171c60: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x171C60u;
    {
        const bool branch_taken_0x171c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171C60u;
            // 0x171c64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c60) {
            ctx->pc = 0x171D50u;
            goto label_171d50;
        }
    }
    ctx->pc = 0x171C68u;
    // 0x171c68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c6c: 0x0  nop
    ctx->pc = 0x171c6cu;
    // NOP
label_171c70:
    // 0x171c70: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x171c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x171c74: 0xc042a98  jal         func_10AA60
    ctx->pc = 0x171C74u;
    SET_GPR_U32(ctx, 31, 0x171C7Cu);
    ctx->pc = 0x171C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171C74u;
            // 0x171c78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA60u;
    if (runtime->hasFunction(0x10AA60u)) {
        auto targetFn = runtime->lookupFunction(0x10AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C7Cu; }
        if (ctx->pc != 0x171C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexXyzf_0x10aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C7Cu; }
        if (ctx->pc != 0x171C7Cu) { return; }
    }
    ctx->pc = 0x171C7Cu;
    // 0x171c7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x171c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x171c80: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x171c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x171c84: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x171c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x171c88: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x171c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x171c8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x171c8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171c90: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x171c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x171c94: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x171c98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x171c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x171c9c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x171c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x171ca0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x171ca0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x171ca4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x171ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x171ca8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x171ca8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x171cac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171cacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x171cb0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x171cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171cb4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x171cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171cb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171cbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171cbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171cc0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171cc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171cc4: 0x0  nop
    ctx->pc = 0x171cc4u;
    // NOP
    // 0x171cc8: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x171cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x171ccc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x171cd0: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x171cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x171cd4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x171cd8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x171cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x171cdc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x171cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171ce0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171ce4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171ce8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171cec: 0x0  nop
    ctx->pc = 0x171cecu;
    // NOP
    // 0x171cf0: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x171cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x171cf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x171cf8: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x171cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x171cfc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x171cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x171d00: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x171d00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x171d04: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x171d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171d08: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x171d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171d0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x171d0cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x171d10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171d14: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171d18: 0x0  nop
    ctx->pc = 0x171d18u;
    // NOP
    // 0x171d1c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x171d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171d20: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x171d20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x171d24: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x171d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x171d28: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x171d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x171d2c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x171d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171d30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171d30u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x171d34: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x171d34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x171d38: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x171d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x171d3c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x171d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x171d40: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x171d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171d44: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x171D44u;
    {
        const bool branch_taken_0x171d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171D44u;
            // 0x171d48: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d44) {
            ctx->pc = 0x171C70u;
            goto label_171c70;
        }
    }
    ctx->pc = 0x171D4Cu;
    // 0x171d4c: 0x0  nop
    ctx->pc = 0x171d4cu;
    // NOP
label_171d50:
    // 0x171d50: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171d54: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x171d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171d58: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x171d5c: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x171d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x171d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d64: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x171d64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171d68: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x171d68u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x171d6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x171d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x171d70: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x171D70u;
    SET_GPR_U32(ctx, 31, 0x171D78u);
    ctx->pc = 0x171D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D70u;
            // 0x171d74: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D78u; }
        if (ctx->pc != 0x171D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpGetTailChain_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D78u; }
        if (ctx->pc != 0x171D78u) { return; }
    }
    ctx->pc = 0x171D78u;
    // 0x171d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d7c: 0xc041ca6  jal         func_107298
    ctx->pc = 0x171D7Cu;
    SET_GPR_U32(ctx, 31, 0x171D84u);
    ctx->pc = 0x171D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D7Cu;
            // 0x171d80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D84u; }
        if (ctx->pc != 0x171D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D84u; }
        if (ctx->pc != 0x171D84u) { return; }
    }
    ctx->pc = 0x171D84u;
    // 0x171d84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d88: 0xc041ca6  jal         func_107298
    ctx->pc = 0x171D88u;
    SET_GPR_U32(ctx, 31, 0x171D90u);
    ctx->pc = 0x171D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D88u;
            // 0x171d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D90u; }
        if (ctx->pc != 0x171D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D90u; }
        if (ctx->pc != 0x171D90u) { return; }
    }
    ctx->pc = 0x171D90u;
    // 0x171d90: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171d94: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x171d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x171d98: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171d9c: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x171d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x171da0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x171da0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171da4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x171da4u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x171da8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x171da8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x171dac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x171dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171db0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x171db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171db4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x171db8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x171db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x171dbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x171dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171dc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x171dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x171DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171DD4u;
            // 0x171dd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171C70u: goto label_171c70;
            case 0x171D50u: goto label_171d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171DDCu;
}
