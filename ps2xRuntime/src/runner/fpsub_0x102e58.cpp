#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fpsub
// Address: 0x102e58 - 0x102ebc
void fpsub_0x102e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fpsub_0x102e58");
#endif

    ctx->pc = 0x102e58u;

    // 0x102e58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x102e5c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x102e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x102e60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x102e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x102e68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e6c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x102e6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x102e70: 0xc040ace  jal         func_102B38
    ctx->pc = 0x102E70u;
    SET_GPR_U32(ctx, 31, 0x102E78u);
    ctx->pc = 0x102E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E70u;
            // 0x102e74: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E78u; }
        if (ctx->pc != 0x102E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E78u; }
        if (ctx->pc != 0x102E78u) { return; }
    }
    ctx->pc = 0x102E78u;
    // 0x102e78: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x102e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x102e7c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x102e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x102e80: 0xc040ace  jal         func_102B38
    ctx->pc = 0x102E80u;
    SET_GPR_U32(ctx, 31, 0x102E88u);
    ctx->pc = 0x102E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E80u;
            // 0x102e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B38u;
    if (runtime->hasFunction(0x102B38u)) {
        auto targetFn = runtime->lookupFunction(0x102B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E88u; }
        if (ctx->pc != 0x102E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x102b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102E88u; }
        if (ctx->pc != 0x102E88u) { return; }
    }
    ctx->pc = 0x102E88u;
    // 0x102e88: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x102e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x102e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e90: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x102e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x102e94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x102e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102e98u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x102e9c: 0xc040af2  jal         func_102BC8
    ctx->pc = 0x102E9Cu;
    SET_GPR_U32(ctx, 31, 0x102EA4u);
    ctx->pc = 0x102EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102E9Cu;
            // 0x102ea0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102BC8u;
    if (runtime->hasFunction(0x102BC8u)) {
        auto targetFn = runtime->lookupFunction(0x102BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EA4u; }
        if (ctx->pc != 0x102EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x102bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EA4u; }
        if (ctx->pc != 0x102EA4u) { return; }
    }
    ctx->pc = 0x102EA4u;
    // 0x102ea4: 0xc040a8a  jal         func_102A28
    ctx->pc = 0x102EA4u;
    SET_GPR_U32(ctx, 31, 0x102EACu);
    ctx->pc = 0x102EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102EA4u;
            // 0x102ea8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A28u;
    if (runtime->hasFunction(0x102A28u)) {
        auto targetFn = runtime->lookupFunction(0x102A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EACu; }
        if (ctx->pc != 0x102EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_f_0x102a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102EACu; }
        if (ctx->pc != 0x102EACu) { return; }
    }
    ctx->pc = 0x102EACu;
    // 0x102eac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x102eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x102eb0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x102eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x102EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102EB4u;
            // 0x102eb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102EBCu;
}
