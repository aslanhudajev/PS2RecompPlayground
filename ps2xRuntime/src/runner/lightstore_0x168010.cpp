#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: lightstore
// Address: 0x168010 - 0x1680d8
void lightstore_0x168010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("lightstore_0x168010");
#endif

    ctx->pc = 0x168010u;

    // 0x168010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x168010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x168014: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x168014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x168018: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x168018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16801c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x168020: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x168020u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168024: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168028: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x168028u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16802c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16802cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168030: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x168030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16803c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168040: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168044: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x168044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168048: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x168048u;
    SET_GPR_U32(ctx, 31, 0x168050u);
    ctx->pc = 0x16804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168048u;
            // 0x16804c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168050u; }
        if (ctx->pc != 0x168050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168050u; }
        if (ctx->pc != 0x168050u) { return; }
    }
    ctx->pc = 0x168050u;
    // 0x168050: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x168050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168054: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x168054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x168058: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x168058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x16805c: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x16805cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x168060: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x168060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x168064: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x168064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x168068: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x168068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x16806c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16806cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168070: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x168070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x168074: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x168074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x168078: 0x26440140  addiu       $a0, $s2, 0x140
    ctx->pc = 0x168078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
    // 0x16807c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16807cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x168080: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x168080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x168084: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x168084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168088: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x168088u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16808c: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x16808cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x168090: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x168090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168094: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x168094u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x168098: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x168098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x16809c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x16809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1680a0: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1680A0u;
    SET_GPR_U32(ctx, 31, 0x1680A8u);
    ctx->pc = 0x1680A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1680A0u;
            // 0x1680a4: 0xe4600130  swc1        $f0, 0x130($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680A8u; }
        if (ctx->pc != 0x1680A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680A8u; }
        if (ctx->pc != 0x1680A8u) { return; }
    }
    ctx->pc = 0x1680A8u;
    // 0x1680a8: 0x26440180  addiu       $a0, $s2, 0x180
    ctx->pc = 0x1680a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    // 0x1680ac: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x1680ACu;
    SET_GPR_U32(ctx, 31, 0x1680B4u);
    ctx->pc = 0x1680B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1680ACu;
            // 0x1680b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680B4u; }
        if (ctx->pc != 0x1680B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1680B4u; }
        if (ctx->pc != 0x1680B4u) { return; }
    }
    ctx->pc = 0x1680B4u;
    // 0x1680b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1680b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1680b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1680b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1680bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1680bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1680c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1680c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1680c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1680c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1680c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1680c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1680cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1680ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1680d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1680D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1680D0u;
            // 0x1680d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1680D8u;
}
