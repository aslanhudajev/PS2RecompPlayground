#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateExplosionKemuri
// Address: 0x14db60 - 0x14dc1c
void CreateExplosionKemuri_0x14db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateExplosionKemuri_0x14db60");
#endif

    ctx->pc = 0x14db60u;

    // 0x14db60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14db64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14db68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14db68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14db6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14db70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14db70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14db74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14db74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14db78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14db78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14db7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14db80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14db80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14db84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14db84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14db88: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14db88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14db8c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DB8Cu;
    SET_GPR_U32(ctx, 31, 0x14DB94u);
    ctx->pc = 0x14DB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DB8Cu;
            // 0x14db90: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB94u; }
        if (ctx->pc != 0x14DB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DB94u; }
        if (ctx->pc != 0x14DB94u) { return; }
    }
    ctx->pc = 0x14DB94u;
    // 0x14db94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14db98: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14db98u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14db9c: 0x0  nop
    ctx->pc = 0x14db9cu;
    // NOP
    // 0x14dba0: 0x0  nop
    ctx->pc = 0x14dba0u;
    // NOP
    // 0x14dba4: 0x9010  mfhi        $s2
    ctx->pc = 0x14dba4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x14dba8: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x14dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x14dbac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x14dbacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dbb0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x14DBB0u;
    {
        const bool branch_taken_0x14dbb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBB0u;
            // 0x14dbb4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dbb0) {
            ctx->pc = 0x14DBF8u;
            goto label_14dbf8;
        }
    }
    ctx->pc = 0x14DBB8u;
label_14dbb8:
    // 0x14dbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14dbc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14dbc4: 0xc053878  jal         func_14E1E0
    ctx->pc = 0x14DBC4u;
    SET_GPR_U32(ctx, 31, 0x14DBCCu);
    ctx->pc = 0x14DBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBC4u;
            // 0x14dbc8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E1E0u;
    if (runtime->hasFunction(0x14E1E0u)) {
        auto targetFn = runtime->lookupFunction(0x14E1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBCCu; }
        if (ctx->pc != 0x14DBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChainBaku_small_0x14e1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBCCu; }
        if (ctx->pc != 0x14DBCCu) { return; }
    }
    ctx->pc = 0x14DBCCu;
    // 0x14dbcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbd4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x14dbd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x14dbd8: 0xc053780  jal         func_14DE00
    ctx->pc = 0x14DBD8u;
    SET_GPR_U32(ctx, 31, 0x14DBE0u);
    ctx->pc = 0x14DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBD8u;
            // 0x14dbdc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE00u;
    if (runtime->hasFunction(0x14DE00u)) {
        auto targetFn = runtime->lookupFunction(0x14DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBE0u; }
        if (ctx->pc != 0x14DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChainKemuri_small_0x14de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBE0u; }
        if (ctx->pc != 0x14DBE0u) { return; }
    }
    ctx->pc = 0x14DBE0u;
    // 0x14dbe0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14dbe4: 0x26430002  addiu       $v1, $s2, 0x2
    ctx->pc = 0x14dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x14dbe8: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x14dbe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dbec: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x14DBECu;
    {
        const bool branch_taken_0x14dbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dbec) {
            ctx->pc = 0x14DBB8u;
            goto label_14dbb8;
        }
    }
    ctx->pc = 0x14DBF4u;
    // 0x14dbf4: 0x0  nop
    ctx->pc = 0x14dbf4u;
    // NOP
label_14dbf8:
    // 0x14dbf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14dbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dbfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14dbfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dc00: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14dc04: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14dc04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dc08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14dc0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14dc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dc10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14dc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dc14: 0x3e00008  jr          $ra
    ctx->pc = 0x14DC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC14u;
            // 0x14dc18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DBB8u: goto label_14dbb8;
            case 0x14DBF8u: goto label_14dbf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DC1Cu;
}
