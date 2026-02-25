#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateExplosionChain
// Address: 0x14dc20 - 0x14dcf8
void CreateExplosionChain_0x14dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateExplosionChain_0x14dc20");
#endif

    ctx->pc = 0x14dc20u;

    // 0x14dc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14dc24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14dc28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14dc2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14dc30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14dc34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14dc38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14dc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc3c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14dc3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14dc40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14dc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14dc44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14dc48: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x14dc48u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x14dc4c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x14dc4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x14dc50: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DC50u;
    SET_GPR_U32(ctx, 31, 0x14DC58u);
    ctx->pc = 0x14DC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC50u;
            // 0x14dc54: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC58u; }
        if (ctx->pc != 0x14DC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC58u; }
        if (ctx->pc != 0x14DC58u) { return; }
    }
    ctx->pc = 0x14DC58u;
    // 0x14dc58: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14dc5c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14dc5cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14dc60: 0x0  nop
    ctx->pc = 0x14dc60u;
    // NOP
    // 0x14dc64: 0x0  nop
    ctx->pc = 0x14dc64u;
    // NOP
    // 0x14dc68: 0x9010  mfhi        $s2
    ctx->pc = 0x14dc68u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x14dc6c: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x14dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x14dc70: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x14dc70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dc74: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x14DC74u;
    {
        const bool branch_taken_0x14dc74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC74u;
            // 0x14dc78: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc74) {
            ctx->pc = 0x14DCD0u;
            goto label_14dcd0;
        }
    }
    ctx->pc = 0x14DC7Cu;
    // 0x14dc7c: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x14dc7cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_14dc80:
    // 0x14dc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc88: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dc88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dc8c: 0xc0538f4  jal         func_14E3D0
    ctx->pc = 0x14DC8Cu;
    SET_GPR_U32(ctx, 31, 0x14DC94u);
    ctx->pc = 0x14DC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC8Cu;
            // 0x14dc90: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3D0u;
    if (runtime->hasFunction(0x14E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC94u; }
        if (ctx->pc != 0x14DC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChainBaku_0x14e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC94u; }
        if (ctx->pc != 0x14DC94u) { return; }
    }
    ctx->pc = 0x14DC94u;
    // 0x14dc94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc9c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dc9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dca0: 0xc0537fc  jal         func_14DFF0
    ctx->pc = 0x14DCA0u;
    SET_GPR_U32(ctx, 31, 0x14DCA8u);
    ctx->pc = 0x14DCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCA0u;
            // 0x14dca4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DFF0u;
    if (runtime->hasFunction(0x14DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x14DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCA8u; }
        if (ctx->pc != 0x14DCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChainKemuri_0x14dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCA8u; }
        if (ctx->pc != 0x14DCA8u) { return; }
    }
    ctx->pc = 0x14DCA8u;
    // 0x14dca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dcb0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dcb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dcb4: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x14DCB4u;
    SET_GPR_U32(ctx, 31, 0x14DCBCu);
    ctx->pc = 0x14DCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCB4u;
            // 0x14dcb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (runtime->hasFunction(0x16ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x16ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCBCu; }
        if (ctx->pc != 0x14DCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateParticle_0x16eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DCBCu; }
        if (ctx->pc != 0x14DCBCu) { return; }
    }
    ctx->pc = 0x14DCBCu;
    // 0x14dcbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14dcbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14dcc0: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x14dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x14dcc4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x14dcc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dcc8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14DCC8u;
    {
        const bool branch_taken_0x14dcc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dcc8) {
            ctx->pc = 0x14DC80u;
            goto label_14dc80;
        }
    }
    ctx->pc = 0x14DCD0u;
label_14dcd0:
    // 0x14dcd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14dcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dcd4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14dcd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dcd8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14dcdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14dcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dce0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14dce4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14dce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dce8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14dcec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14dcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCF0u;
            // 0x14dcf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DC80u: goto label_14dc80;
            case 0x14DCD0u: goto label_14dcd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DCF8u;
}
