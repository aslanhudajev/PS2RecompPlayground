#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateExplosion
// Address: 0x14dd00 - 0x14de00
void CreateExplosion_0x14dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateExplosion_0x14dd00");
#endif

    ctx->pc = 0x14dd00u;

    // 0x14dd00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14dd04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14dd08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14dd0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14dd10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14dd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14dd14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14dd18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14dd18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd1c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14dd1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14dd20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14dd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14dd24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14dd28: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x14dd28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x14dd2c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x14dd2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x14dd30: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DD30u;
    SET_GPR_U32(ctx, 31, 0x14DD38u);
    ctx->pc = 0x14DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD30u;
            // 0x14dd34: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD38u; }
        if (ctx->pc != 0x14DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD38u; }
        if (ctx->pc != 0x14DD38u) { return; }
    }
    ctx->pc = 0x14DD38u;
    // 0x14dd38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14dd3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14dd3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14dd40: 0x0  nop
    ctx->pc = 0x14dd40u;
    // NOP
    // 0x14dd44: 0x0  nop
    ctx->pc = 0x14dd44u;
    // NOP
    // 0x14dd48: 0x9010  mfhi        $s2
    ctx->pc = 0x14dd48u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x14dd4c: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x14dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x14dd50: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x14dd50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dd54: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x14DD54u;
    {
        const bool branch_taken_0x14dd54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD54u;
            // 0x14dd58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd54) {
            ctx->pc = 0x14DDD8u;
            goto label_14ddd8;
        }
    }
    ctx->pc = 0x14DD5Cu;
    // 0x14dd5c: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x14dd5cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_14dd60:
    // 0x14dd60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd68: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dd68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dd6c: 0xc053a08  jal         func_14E820
    ctx->pc = 0x14DD6Cu;
    SET_GPR_U32(ctx, 31, 0x14DD74u);
    ctx->pc = 0x14DD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD6Cu;
            // 0x14dd70: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E820u;
    if (runtime->hasFunction(0x14E820u)) {
        auto targetFn = runtime->lookupFunction(0x14E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD74u; }
        if (ctx->pc != 0x14DD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomBaku_0x14e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD74u; }
        if (ctx->pc != 0x14DD74u) { return; }
    }
    ctx->pc = 0x14DD74u;
    // 0x14dd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd7c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dd7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dd80: 0xc053a08  jal         func_14E820
    ctx->pc = 0x14DD80u;
    SET_GPR_U32(ctx, 31, 0x14DD88u);
    ctx->pc = 0x14DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD80u;
            // 0x14dd84: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E820u;
    if (runtime->hasFunction(0x14E820u)) {
        auto targetFn = runtime->lookupFunction(0x14E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD88u; }
        if (ctx->pc != 0x14DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomBaku_0x14e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD88u; }
        if (ctx->pc != 0x14DD88u) { return; }
    }
    ctx->pc = 0x14DD88u;
    // 0x14dd88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd90: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dd90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dd94: 0xc053974  jal         func_14E5D0
    ctx->pc = 0x14DD94u;
    SET_GPR_U32(ctx, 31, 0x14DD9Cu);
    ctx->pc = 0x14DD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD94u;
            // 0x14dd98: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5D0u;
    if (runtime->hasFunction(0x14E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD9Cu; }
        if (ctx->pc != 0x14DD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomKemuri_0x14e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD9Cu; }
        if (ctx->pc != 0x14DD9Cu) { return; }
    }
    ctx->pc = 0x14DD9Cu;
    // 0x14dd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dda0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dda4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14dda4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14dda8: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x14DDA8u;
    SET_GPR_U32(ctx, 31, 0x14DDB0u);
    ctx->pc = 0x14DDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDA8u;
            // 0x14ddac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (runtime->hasFunction(0x16ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x16ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDB0u; }
        if (ctx->pc != 0x14DDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateParticle_0x16eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDB0u; }
        if (ctx->pc != 0x14DDB0u) { return; }
    }
    ctx->pc = 0x14DDB0u;
    // 0x14ddb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ddb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ddb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ddb8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x14ddb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x14ddbc: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x14DDBCu;
    SET_GPR_U32(ctx, 31, 0x14DDC4u);
    ctx->pc = 0x14DDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDBCu;
            // 0x14ddc0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (runtime->hasFunction(0x16ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x16ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDC4u; }
        if (ctx->pc != 0x14DDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateParticle_0x16eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDC4u; }
        if (ctx->pc != 0x14DDC4u) { return; }
    }
    ctx->pc = 0x14DDC4u;
    // 0x14ddc4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14ddc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14ddc8: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x14ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x14ddcc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x14ddccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ddd0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x14DDD0u;
    {
        const bool branch_taken_0x14ddd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ddd0) {
            ctx->pc = 0x14DD60u;
            goto label_14dd60;
        }
    }
    ctx->pc = 0x14DDD8u;
label_14ddd8:
    // 0x14ddd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14ddd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dddc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14dddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dde0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14dde4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14dde4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dde8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14ddec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ddecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ddf0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ddf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ddf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDF8u;
            // 0x14ddfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DD60u: goto label_14dd60;
            case 0x14DDD8u: goto label_14ddd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DE00u;
}
