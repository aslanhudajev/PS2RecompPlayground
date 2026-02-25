#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: vblankHandler
// Address: 0x187940 - 0x187b24
void vblankHandler_0x187940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("vblankHandler_0x187940");
#endif

    ctx->pc = 0x187940u;

    // 0x187940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187944: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x187944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18794c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187950: 0xc04197a  jal         func_1065E8
    ctx->pc = 0x187950u;
    SET_GPR_U32(ctx, 31, 0x187958u);
    ctx->pc = 0x187954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187950u;
            // 0x187954: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1065E8u;
    if (runtime->hasFunction(0x1065E8u)) {
        auto targetFn = runtime->lookupFunction(0x1065E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187958u; }
        if (ctx->pc != 0x187958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1065e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187958u; }
        if (ctx->pc != 0x187958u) { return; }
    }
    ctx->pc = 0x187958u;
    // 0x187958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x187958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18795c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x18795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x187960: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x187960u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
    // 0x187964: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x187964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x187968: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18796c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18796cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x187970: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x187970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x187974: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x187974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x187978: 0xac22cad8  sw          $v0, -0x3528($at)
    ctx->pc = 0x187978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953688), GPR_U32(ctx, 2));
    // 0x18797c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187980: 0x8c22cac0  lw          $v0, -0x3540($at)
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953664)));
    // 0x187984: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x187984u;
    {
        const bool branch_taken_0x187984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187984u;
            // 0x187988: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187984) {
            ctx->pc = 0x187B00u;
            goto label_187b00;
        }
    }
    ctx->pc = 0x18798Cu;
    // 0x18798c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187990: 0x8c22cac8  lw          $v0, -0x3538($at)
    ctx->pc = 0x187990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953672)));
    // 0x187994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187998: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x187998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18799c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18799cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1879a0: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x1879A0u;
    SET_GPR_U32(ctx, 31, 0x1879A8u);
    ctx->pc = 0x1879A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879A0u;
            // 0x1879a4: 0xac22cac8  sw          $v0, -0x3538($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879A8u; }
        if (ctx->pc != 0x1879A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879A8u; }
        if (ctx->pc != 0x1879A8u) { return; }
    }
    ctx->pc = 0x1879A8u;
    // 0x1879a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1879a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1879ac: 0xac22cae0  sw          $v0, -0x3520($at)
    ctx->pc = 0x1879acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953696), GPR_U32(ctx, 2));
    // 0x1879b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1879b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1879b4: 0x8c22cae0  lw          $v0, -0x3520($at)
    ctx->pc = 0x1879b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953696)));
    // 0x1879b8: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1879B8u;
    {
        const bool branch_taken_0x1879b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879B8u;
            // 0x1879bc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879b8) {
            ctx->pc = 0x187B00u;
            goto label_187b00;
        }
    }
    ctx->pc = 0x1879C0u;
    // 0x1879c0: 0xc062ac4  jal         func_18AB10
    ctx->pc = 0x1879C0u;
    SET_GPR_U32(ctx, 31, 0x1879C8u);
    ctx->pc = 0x1879C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1879C0u;
            // 0x1879c4: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AB10u;
    if (runtime->hasFunction(0x18AB10u)) {
        auto targetFn = runtime->lookupFunction(0x18AB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879C8u; }
        if (ctx->pc != 0x1879C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufGetTag_0x18ab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1879C8u; }
        if (ctx->pc != 0x1879C8u) { return; }
    }
    ctx->pc = 0x1879C8u;
    // 0x1879c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1879c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879cc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1879CCu;
    {
        const bool branch_taken_0x1879cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1879D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879CCu;
            // 0x1879d0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879cc) {
            ctx->pc = 0x1879F8u;
            goto label_1879f8;
        }
    }
    ctx->pc = 0x1879D4u;
    // 0x1879d4: 0x8c22fd78  lw          $v0, -0x288($at)
    ctx->pc = 0x1879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966648)));
    // 0x1879d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1879d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1879dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1879dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1879e0: 0xac22fd78  sw          $v0, -0x288($at)
    ctx->pc = 0x1879e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966648), GPR_U32(ctx, 2));
    // 0x1879e4: 0xf  sync
    ctx->pc = 0x1879e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1879e8: 0x42000038  ei
    ctx->pc = 0x1879e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1879ec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1879ECu;
    {
        const bool branch_taken_0x1879ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1879F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1879ECu;
            // 0x1879f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1879ec) {
            ctx->pc = 0x187B10u;
            goto label_187b10;
        }
    }
    ctx->pc = 0x1879F4u;
    // 0x1879f4: 0x0  nop
    ctx->pc = 0x1879f4u;
    // NOP
label_1879f8:
    // 0x1879f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1879f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1879fc: 0x8c22cad8  lw          $v0, -0x3528($at)
    ctx->pc = 0x1879fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953688)));
    // 0x187a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x187a00u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x187a04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187A04u;
    {
        const bool branch_taken_0x187a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A04u;
            // 0x187a08: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a04) {
            ctx->pc = 0x187A20u;
            goto label_187a20;
        }
    }
    ctx->pc = 0x187A0Cu;
    // 0x187a0c: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x187A0Cu;
    SET_GPR_U32(ctx, 31, 0x187A14u);
    ctx->pc = 0x187A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A0Cu;
            // 0x187a10: 0x2484fc90  addiu       $a0, $a0, -0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A14u; }
        if (ctx->pc != 0x187A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A14u; }
        if (ctx->pc != 0x187A14u) { return; }
    }
    ctx->pc = 0x187A14u;
    // 0x187a14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x187A14u;
    {
        const bool branch_taken_0x187a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187a14) {
            ctx->pc = 0x187A30u;
            goto label_187a30;
        }
    }
    ctx->pc = 0x187A1Cu;
    // 0x187a1c: 0x0  nop
    ctx->pc = 0x187a1cu;
    // NOP
label_187a20:
    // 0x187a20: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x187a24: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x187A24u;
    SET_GPR_U32(ctx, 31, 0x187A2Cu);
    ctx->pc = 0x187A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A24u;
            // 0x187a28: 0x2484fba0  addiu       $a0, $a0, -0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A2Cu; }
        if (ctx->pc != 0x187A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A2Cu; }
        if (ctx->pc != 0x187A2Cu) { return; }
    }
    ctx->pc = 0x187A2Cu;
    // 0x187a2c: 0x0  nop
    ctx->pc = 0x187a2cu;
    // NOP
label_187a30:
    // 0x187a30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a34: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187a38: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x187a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x187a3c: 0x8c22cad8  lw          $v0, -0x3528($at)
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953688)));
    // 0x187a40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x187a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x187a44u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x187a48: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x187a48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187a4c: 0xc04306a  jal         func_10C1A8
    ctx->pc = 0x187A4Cu;
    SET_GPR_U32(ctx, 31, 0x187A54u);
    ctx->pc = 0x187A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A4Cu;
            // 0x187a50: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A8u;
    if (runtime->hasFunction(0x10C1A8u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A54u; }
        if (ctx->pc != 0x187A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetHalfOffset_0x10c1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A54u; }
        if (ctx->pc != 0x187A54u) { return; }
    }
    ctx->pc = 0x187A54u;
    // 0x187a54: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187a58: 0x8c22cad8  lw          $v0, -0x3528($at)
    ctx->pc = 0x187a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953688)));
    // 0x187a5c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x187A5Cu;
    {
        const bool branch_taken_0x187a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187a5c) {
            ctx->pc = 0x187AA8u;
            goto label_187aa8;
        }
    }
    ctx->pc = 0x187A64u;
    // 0x187a64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x187a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187a68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187a6c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x187A6Cu;
    {
        const bool branch_taken_0x187a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x187A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A6Cu;
            // 0x187a70: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a6c) {
            ctx->pc = 0x187AA8u;
            goto label_187aa8;
        }
    }
    ctx->pc = 0x187A74u;
    // 0x187a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a78: 0xc042e64  jal         func_10B990
    ctx->pc = 0x187A78u;
    SET_GPR_U32(ctx, 31, 0x187A80u);
    ctx->pc = 0x187A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A78u;
            // 0x187a7c: 0x2484fb40  addiu       $a0, $a0, -0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B990u;
    if (runtime->hasFunction(0x10B990u)) {
        auto targetFn = runtime->lookupFunction(0x10B990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A80u; }
        if (ctx->pc != 0x187A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x10b990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A80u; }
        if (ctx->pc != 0x187A80u) { return; }
    }
    ctx->pc = 0x187A80u;
    // 0x187a80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a84: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x187A84u;
    SET_GPR_U32(ctx, 31, 0x187A8Cu);
    ctx->pc = 0x187A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A84u;
            // 0x187a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A8Cu; }
        if (ctx->pc != 0x187A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A8Cu; }
        if (ctx->pc != 0x187A8Cu) { return; }
    }
    ctx->pc = 0x187A8Cu;
    // 0x187a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a90: 0xc041a46  jal         func_106918
    ctx->pc = 0x187A90u;
    SET_GPR_U32(ctx, 31, 0x187A98u);
    ctx->pc = 0x187A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187A90u;
            // 0x187a94: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106918u;
    if (runtime->hasFunction(0x106918u)) {
        auto targetFn = runtime->lookupFunction(0x106918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A98u; }
        if (ctx->pc != 0x187A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x106918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187A98u; }
        if (ctx->pc != 0x187A98u) { return; }
    }
    ctx->pc = 0x187A98u;
    // 0x187a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187a9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187A9Cu;
    {
        const bool branch_taken_0x187a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187A9Cu;
            // 0x187aa0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a9c) {
            ctx->pc = 0x187B00u;
            goto label_187b00;
        }
    }
    ctx->pc = 0x187AA4u;
    // 0x187aa4: 0x0  nop
    ctx->pc = 0x187aa4u;
    // NOP
label_187aa8:
    // 0x187aa8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187aac: 0x8c22cad8  lw          $v0, -0x3528($at)
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953688)));
    // 0x187ab0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187ab4: 0x14450012  bne         $v0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x187AB4u;
    {
        const bool branch_taken_0x187ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x187ab4) {
            ctx->pc = 0x187B00u;
            goto label_187b00;
        }
    }
    ctx->pc = 0x187ABCu;
    // 0x187abc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x187abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187ac0: 0x1445000f  bne         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x187AC0u;
    {
        const bool branch_taken_0x187ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x187AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187AC0u;
            // 0x187ac4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ac0) {
            ctx->pc = 0x187B00u;
            goto label_187b00;
        }
    }
    ctx->pc = 0x187AC8u;
    // 0x187ac8: 0xc042e64  jal         func_10B990
    ctx->pc = 0x187AC8u;
    SET_GPR_U32(ctx, 31, 0x187AD0u);
    ctx->pc = 0x187ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AC8u;
            // 0x187acc: 0x2484fb40  addiu       $a0, $a0, -0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B990u;
    if (runtime->hasFunction(0x10B990u)) {
        auto targetFn = runtime->lookupFunction(0x10B990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AD0u; }
        if (ctx->pc != 0x187AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSwapDBuff_0x10b990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AD0u; }
        if (ctx->pc != 0x187AD0u) { return; }
    }
    ctx->pc = 0x187AD0u;
    // 0x187ad0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ad4: 0xc042ea2  jal         func_10BA88
    ctx->pc = 0x187AD4u;
    SET_GPR_U32(ctx, 31, 0x187ADCu);
    ctx->pc = 0x187AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AD4u;
            // 0x187ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BA88u;
    if (runtime->hasFunction(0x10BA88u)) {
        auto targetFn = runtime->lookupFunction(0x10BA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187ADCu; }
        if (ctx->pc != 0x187ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10ba88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187ADCu; }
        if (ctx->pc != 0x187ADCu) { return; }
    }
    ctx->pc = 0x187ADCu;
    // 0x187adc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x187adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x187ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187ae4: 0x34216740  ori         $at, $at, 0x6740
    ctx->pc = 0x187ae4u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)26432u)));
    // 0x187ae8: 0xc041a46  jal         func_106918
    ctx->pc = 0x187AE8u;
    SET_GPR_U32(ctx, 31, 0x187AF0u);
    ctx->pc = 0x187AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187AE8u;
            // 0x187aec: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106918u;
    if (runtime->hasFunction(0x106918u)) {
        auto targetFn = runtime->lookupFunction(0x106918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AF0u; }
        if (ctx->pc != 0x187AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x106918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187AF0u; }
        if (ctx->pc != 0x187AF0u) { return; }
    }
    ctx->pc = 0x187AF0u;
    // 0x187af0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x187af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x187af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187af8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187afc: 0xac22cad0  sw          $v0, -0x3530($at)
    ctx->pc = 0x187afcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953680), GPR_U32(ctx, 2));
label_187b00:
    // 0x187b00: 0xf  sync
    ctx->pc = 0x187b00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x187b04: 0x42000038  ei
    ctx->pc = 0x187b04u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x187b08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b0c: 0x0  nop
    ctx->pc = 0x187b0cu;
    // NOP
label_187b10:
    // 0x187b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x187B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187B1Cu;
            // 0x187b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1879F8u: goto label_1879f8;
            case 0x187A20u: goto label_187a20;
            case 0x187A30u: goto label_187a30;
            case 0x187AA8u: goto label_187aa8;
            case 0x187B00u: goto label_187b00;
            case 0x187B10u: goto label_187b10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187B24u;
}
