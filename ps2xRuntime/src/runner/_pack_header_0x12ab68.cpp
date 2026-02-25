#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pack_header
// Address: 0x12ab68 - 0x12acb8
void _pack_header_0x12ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pack_header_0x12ab68");
#endif

    ctx->pc = 0x12ab68u;

    // 0x12ab68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12ab6c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x12ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x12ab70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12ab74: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12ab74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12ab78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ab7c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x12ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x12ab80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12ab84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12ab88: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x12ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12ab8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12ab90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ab94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12ab98: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AB98u;
    SET_GPR_U32(ctx, 31, 0x12ABA0u);
    ctx->pc = 0x12AB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AB98u;
            // 0x12ab9c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABA0u; }
        if (ctx->pc != 0x12ABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABA0u; }
        if (ctx->pc != 0x12ABA0u) { return; }
    }
    ctx->pc = 0x12ABA0u;
    // 0x12aba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aba4: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ABA4u;
    SET_GPR_U32(ctx, 31, 0x12ABACu);
    ctx->pc = 0x12ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABA4u;
            // 0x12aba8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABACu; }
        if (ctx->pc != 0x12ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABACu; }
        if (ctx->pc != 0x12ABACu) { return; }
    }
    ctx->pc = 0x12ABACu;
    // 0x12abac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12abacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abb0: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12ABB0u;
    SET_GPR_U32(ctx, 31, 0x12ABB8u);
    ctx->pc = 0x12ABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABB0u;
            // 0x12abb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABB8u; }
        if (ctx->pc != 0x12ABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABB8u; }
        if (ctx->pc != 0x12ABB8u) { return; }
    }
    ctx->pc = 0x12ABB8u;
    // 0x12abb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12abb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abbc: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ABBCu;
    SET_GPR_U32(ctx, 31, 0x12ABC4u);
    ctx->pc = 0x12ABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABBCu;
            // 0x12abc0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABC4u; }
        if (ctx->pc != 0x12ABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABC4u; }
        if (ctx->pc != 0x12ABC4u) { return; }
    }
    ctx->pc = 0x12ABC4u;
    // 0x12abc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12abc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abc8: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12ABC8u;
    SET_GPR_U32(ctx, 31, 0x12ABD0u);
    ctx->pc = 0x12ABCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABC8u;
            // 0x12abcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABD0u; }
        if (ctx->pc != 0x12ABD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABD0u; }
        if (ctx->pc != 0x12ABD0u) { return; }
    }
    ctx->pc = 0x12ABD0u;
    // 0x12abd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12abd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abd4: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ABD4u;
    SET_GPR_U32(ctx, 31, 0x12ABDCu);
    ctx->pc = 0x12ABD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABD4u;
            // 0x12abd8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABDCu; }
        if (ctx->pc != 0x12ABDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABDCu; }
        if (ctx->pc != 0x12ABDCu) { return; }
    }
    ctx->pc = 0x12ABDCu;
    // 0x12abdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12abdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abe0: 0xc04a900  jal         func_12A400
    ctx->pc = 0x12ABE0u;
    SET_GPR_U32(ctx, 31, 0x12ABE8u);
    ctx->pc = 0x12ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABE0u;
            // 0x12abe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A400u;
    if (runtime->hasFunction(0x12A400u)) {
        auto targetFn = runtime->lookupFunction(0x12A400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABE8u; }
        if (ctx->pc != 0x12ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x12a400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABE8u; }
        if (ctx->pc != 0x12ABE8u) { return; }
    }
    ctx->pc = 0x12ABE8u;
    // 0x12abe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12abe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abec: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ABECu;
    SET_GPR_U32(ctx, 31, 0x12ABF4u);
    ctx->pc = 0x12ABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABECu;
            // 0x12abf0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABF4u; }
        if (ctx->pc != 0x12ABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABF4u; }
        if (ctx->pc != 0x12ABF4u) { return; }
    }
    ctx->pc = 0x12ABF4u;
    // 0x12abf4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x12abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x12abf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abfc: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12ABFCu;
    SET_GPR_U32(ctx, 31, 0x12AC04u);
    ctx->pc = 0x12AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABFCu;
            // 0x12ac00: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC04u; }
        if (ctx->pc != 0x12AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC04u; }
        if (ctx->pc != 0x12AC04u) { return; }
    }
    ctx->pc = 0x12AC04u;
    // 0x12ac04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac08: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AC08u;
    SET_GPR_U32(ctx, 31, 0x12AC10u);
    ctx->pc = 0x12AC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC08u;
            // 0x12ac0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC10u; }
        if (ctx->pc != 0x12AC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC10u; }
        if (ctx->pc != 0x12AC10u) { return; }
    }
    ctx->pc = 0x12AC10u;
    // 0x12ac10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12ac10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac14: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x12ac18: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x12ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x12ac1c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x12ac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x12ac20: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x12ac20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x12ac24: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x12ac24u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x12ac28: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x12ac28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x12ac2c: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x12ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x12ac30: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AC30u;
    {
        const bool branch_taken_0x12ac30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC30u;
            // 0x12ac34: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac30) {
            ctx->pc = 0x12AC58u;
            goto label_12ac58;
        }
    }
    ctx->pc = 0x12AC38u;
    // 0x12ac38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac3c: 0x0  nop
    ctx->pc = 0x12ac3cu;
    // NOP
label_12ac40:
    // 0x12ac40: 0xc04a8ec  jal         func_12A3B0
    ctx->pc = 0x12AC40u;
    SET_GPR_U32(ctx, 31, 0x12AC48u);
    ctx->pc = 0x12AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC40u;
            // 0x12ac44: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3B0u;
    if (runtime->hasFunction(0x12A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC48u; }
        if (ctx->pc != 0x12AC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x12a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC48u; }
        if (ctx->pc != 0x12AC48u) { return; }
    }
    ctx->pc = 0x12AC48u;
    // 0x12ac48: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12ac48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12ac4c: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x12ac4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x12ac50: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12AC50u;
    {
        const bool branch_taken_0x12ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC50u;
            // 0x12ac54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac50) {
            ctx->pc = 0x12AC40u;
            goto label_12ac40;
        }
    }
    ctx->pc = 0x12AC58u;
label_12ac58:
    // 0x12ac58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac5c: 0xc04a8be  jal         func_12A2F8
    ctx->pc = 0x12AC5Cu;
    SET_GPR_U32(ctx, 31, 0x12AC64u);
    ctx->pc = 0x12AC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC5Cu;
            // 0x12ac60: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A2F8u;
    if (runtime->hasFunction(0x12A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC64u; }
        if (ctx->pc != 0x12AC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x12a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC64u; }
        if (ctx->pc != 0x12AC64u) { return; }
    }
    ctx->pc = 0x12AC64u;
    // 0x12ac64: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x12ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x12ac68: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AC68u;
    {
        const bool branch_taken_0x12ac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ac68) {
            ctx->pc = 0x12AC6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC68u;
            // 0x12ac6c: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12AC8Cu;
            goto label_12ac8c;
        }
    }
    ctx->pc = 0x12AC70u;
    // 0x12ac70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ac74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac78: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x12ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x12ac7c: 0xc04ab2e  jal         func_12ACB8
    ctx->pc = 0x12AC7Cu;
    SET_GPR_U32(ctx, 31, 0x12AC84u);
    ctx->pc = 0x12AC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC7Cu;
            // 0x12ac80: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ACB8u;
    if (runtime->hasFunction(0x12ACB8u)) {
        auto targetFn = runtime->lookupFunction(0x12ACB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC84u; }
        if (ctx->pc != 0x12AC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _system_header_0x12acb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC84u; }
        if (ctx->pc != 0x12AC84u) { return; }
    }
    ctx->pc = 0x12AC84u;
    // 0x12ac84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12AC84u;
    {
        const bool branch_taken_0x12ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC84u;
            // 0x12ac88: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac84) {
            ctx->pc = 0x12AC90u;
            goto label_12ac90;
        }
    }
    ctx->pc = 0x12AC8Cu;
label_12ac8c:
    // 0x12ac8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12ac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_12ac90:
    // 0x12ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ac94: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x12ac94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ac98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x12ac98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ac9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12ac9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12aca0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12aca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12aca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12aca8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12aca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12acac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12acacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x12ACB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACB0u;
            // 0x12acb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12AC40u: goto label_12ac40;
            case 0x12AC58u: goto label_12ac58;
            case 0x12AC8Cu: goto label_12ac8c;
            case 0x12AC90u: goto label_12ac90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12ACB8u;
}
