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
// Address: 0x11eb10 - 0x11ec60
void _pack_header_0x11eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pack_header_0x11eb10");
#endif

    ctx->pc = 0x11eb10u;

    // 0x11eb10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11eb14: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11eb18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11eb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11eb1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11eb1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11eb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb24: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11eb28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11eb2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11eb30: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x11eb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x11eb34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11eb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11eb3c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11eb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11eb40: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EB40u;
    SET_GPR_U32(ctx, 31, 0x11EB48u);
    ctx->pc = 0x11EB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB40u;
            // 0x11eb44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB48u; }
        if (ctx->pc != 0x11EB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB48u; }
        if (ctx->pc != 0x11EB48u) { return; }
    }
    ctx->pc = 0x11EB48u;
    // 0x11eb48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb4c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EB4Cu;
    SET_GPR_U32(ctx, 31, 0x11EB54u);
    ctx->pc = 0x11EB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB4Cu;
            // 0x11eb50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB54u; }
        if (ctx->pc != 0x11EB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB54u; }
        if (ctx->pc != 0x11EB54u) { return; }
    }
    ctx->pc = 0x11EB54u;
    // 0x11eb54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11eb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb58: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EB58u;
    SET_GPR_U32(ctx, 31, 0x11EB60u);
    ctx->pc = 0x11EB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB58u;
            // 0x11eb5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB60u; }
        if (ctx->pc != 0x11EB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB60u; }
        if (ctx->pc != 0x11EB60u) { return; }
    }
    ctx->pc = 0x11EB60u;
    // 0x11eb60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb64: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EB64u;
    SET_GPR_U32(ctx, 31, 0x11EB6Cu);
    ctx->pc = 0x11EB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB64u;
            // 0x11eb68: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB6Cu; }
        if (ctx->pc != 0x11EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB6Cu; }
        if (ctx->pc != 0x11EB6Cu) { return; }
    }
    ctx->pc = 0x11EB6Cu;
    // 0x11eb6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11eb6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb70: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EB70u;
    SET_GPR_U32(ctx, 31, 0x11EB78u);
    ctx->pc = 0x11EB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB70u;
            // 0x11eb74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB78u; }
        if (ctx->pc != 0x11EB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB78u; }
        if (ctx->pc != 0x11EB78u) { return; }
    }
    ctx->pc = 0x11EB78u;
    // 0x11eb78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb7c: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EB7Cu;
    SET_GPR_U32(ctx, 31, 0x11EB84u);
    ctx->pc = 0x11EB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB7Cu;
            // 0x11eb80: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB84u; }
        if (ctx->pc != 0x11EB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB84u; }
        if (ctx->pc != 0x11EB84u) { return; }
    }
    ctx->pc = 0x11EB84u;
    // 0x11eb84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11eb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb88: 0xc0497fa  jal         func_125FE8
    ctx->pc = 0x11EB88u;
    SET_GPR_U32(ctx, 31, 0x11EB90u);
    ctx->pc = 0x11EB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB88u;
            // 0x11eb8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125FE8u;
    if (runtime->hasFunction(0x125FE8u)) {
        auto targetFn = runtime->lookupFunction(0x125FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB90u; }
        if (ctx->pc != 0x11EB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitMarker_0x125fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB90u; }
        if (ctx->pc != 0x11EB90u) { return; }
    }
    ctx->pc = 0x11EB90u;
    // 0x11eb90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb94: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EB94u;
    SET_GPR_U32(ctx, 31, 0x11EB9Cu);
    ctx->pc = 0x11EB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB94u;
            // 0x11eb98: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB9Cu; }
        if (ctx->pc != 0x11EB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB9Cu; }
        if (ctx->pc != 0x11EB9Cu) { return; }
    }
    ctx->pc = 0x11EB9Cu;
    // 0x11eb9c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x11eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x11eba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eba4: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EBA4u;
    SET_GPR_U32(ctx, 31, 0x11EBACu);
    ctx->pc = 0x11EBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBA4u;
            // 0x11eba8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBACu; }
        if (ctx->pc != 0x11EBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBACu; }
        if (ctx->pc != 0x11EBACu) { return; }
    }
    ctx->pc = 0x11EBACu;
    // 0x11ebac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebb0: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EBB0u;
    SET_GPR_U32(ctx, 31, 0x11EBB8u);
    ctx->pc = 0x11EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBB0u;
            // 0x11ebb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBB8u; }
        if (ctx->pc != 0x11EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBB8u; }
        if (ctx->pc != 0x11EBB8u) { return; }
    }
    ctx->pc = 0x11EBB8u;
    // 0x11ebb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11ebb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebbc: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x11ebbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x11ebc0: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x11ebc4: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x11ebc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x11ebc8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x11ebc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x11ebcc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x11ebccu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
    // 0x11ebd0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x11ebd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 18)));
    // 0x11ebd4: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x11ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x11ebd8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x11EBD8u;
    {
        const bool branch_taken_0x11ebd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBD8u;
            // 0x11ebdc: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebd8) {
            ctx->pc = 0x11EC00u;
            goto label_11ec00;
        }
    }
    ctx->pc = 0x11EBE0u;
    // 0x11ebe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ebe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ebe4: 0x0  nop
    ctx->pc = 0x11ebe4u;
    // NOP
label_11ebe8:
    // 0x11ebe8: 0xc0497e6  jal         func_125F98
    ctx->pc = 0x11EBE8u;
    SET_GPR_U32(ctx, 31, 0x11EBF0u);
    ctx->pc = 0x11EBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBE8u;
            // 0x11ebec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F98u;
    if (runtime->hasFunction(0x125F98u)) {
        auto targetFn = runtime->lookupFunction(0x125F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBF0u; }
        if (ctx->pc != 0x11EBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x125f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EBF0u; }
        if (ctx->pc != 0x11EBF0u) { return; }
    }
    ctx->pc = 0x11EBF0u;
    // 0x11ebf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x11ebf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x11ebf4: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x11ebf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x11ebf8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11EBF8u;
    {
        const bool branch_taken_0x11ebf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBF8u;
            // 0x11ebfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebf8) {
            ctx->pc = 0x11EBE8u;
            goto label_11ebe8;
        }
    }
    ctx->pc = 0x11EC00u;
label_11ec00:
    // 0x11ec00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec04: 0xc0497b8  jal         func_125EE0
    ctx->pc = 0x11EC04u;
    SET_GPR_U32(ctx, 31, 0x11EC0Cu);
    ctx->pc = 0x11EC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC04u;
            // 0x11ec08: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125EE0u;
    if (runtime->hasFunction(0x125EE0u)) {
        auto targetFn = runtime->lookupFunction(0x125EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC0Cu; }
        if (ctx->pc != 0x11EC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x125ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC0Cu; }
        if (ctx->pc != 0x11EC0Cu) { return; }
    }
    ctx->pc = 0x11EC0Cu;
    // 0x11ec0c: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x11ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x11ec10: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EC10u;
    {
        const bool branch_taken_0x11ec10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ec10) {
            ctx->pc = 0x11EC14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC10u;
            // 0x11ec14: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EC34u;
            goto label_11ec34;
        }
    }
    ctx->pc = 0x11EC18u;
    // 0x11ec18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ec1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec20: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x11ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x11ec24: 0xc047b18  jal         func_11EC60
    ctx->pc = 0x11EC24u;
    SET_GPR_U32(ctx, 31, 0x11EC2Cu);
    ctx->pc = 0x11EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC24u;
            // 0x11ec28: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EC60u;
    if (runtime->hasFunction(0x11EC60u)) {
        auto targetFn = runtime->lookupFunction(0x11EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC2Cu; }
        if (ctx->pc != 0x11EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _system_header_0x11ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC2Cu; }
        if (ctx->pc != 0x11EC2Cu) { return; }
    }
    ctx->pc = 0x11EC2Cu;
    // 0x11ec2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EC2Cu;
    {
        const bool branch_taken_0x11ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC2Cu;
            // 0x11ec30: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec2c) {
            ctx->pc = 0x11EC38u;
            goto label_11ec38;
        }
    }
    ctx->pc = 0x11EC34u;
label_11ec34:
    // 0x11ec34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11ec38:
    // 0x11ec38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ec3c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11ec3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ec40: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ec44: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11ec44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ec48: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11ec48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ec4c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11ec4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11ec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11ec54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC58u;
            // 0x11ec5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EBE8u: goto label_11ebe8;
            case 0x11EC00u: goto label_11ec00;
            case 0x11EC34u: goto label_11ec34;
            case 0x11EC38u: goto label_11ec38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EC60u;
}
