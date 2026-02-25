#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage1MapColorControl
// Address: 0x1e2770 - 0x1e2888
void Stage1MapColorControl_0x1e2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage1MapColorControl_0x1e2770");
#endif

    ctx->pc = 0x1e2770u;

    // 0x1e2770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e277c: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1E277Cu;
    SET_GPR_U32(ctx, 31, 0x1E2784u);
    ctx->pc = 0x1E2780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E277Cu;
            // 0x1e2780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2784u; }
        if (ctx->pc != 0x1E2784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2784u; }
        if (ctx->pc != 0x1E2784u) { return; }
    }
    ctx->pc = 0x1E2784u;
    // 0x1e2784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2788: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1e2788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e278c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1e278cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e2790: 0x0  nop
    ctx->pc = 0x1e2790u;
    // NOP
    // 0x1e2794: 0x0  nop
    ctx->pc = 0x1e2794u;
    // NOP
    // 0x1e2798: 0x2010  mfhi        $a0
    ctx->pc = 0x1e2798u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e279c: 0x28810032  slti        $at, $a0, 0x32
    ctx->pc = 0x1e279cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e27a0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E27A0u;
    {
        const bool branch_taken_0x1e27a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e27a0) {
            ctx->pc = 0x1E2810u;
            goto label_1e2810;
        }
    }
    ctx->pc = 0x1E27A8u;
    // 0x1e27a8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e27a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e27ac: 0x3c033b83  lui         $v1, 0x3B83
    ctx->pc = 0x1e27acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15235 << 16));
    // 0x1e27b0: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x1e27b0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x1e27b4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1e27b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e27b8: 0x3c033b6b  lui         $v1, 0x3B6B
    ctx->pc = 0x1e27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15211 << 16));
    // 0x1e27bc: 0x3463edfa  ori         $v1, $v1, 0xEDFA
    ctx->pc = 0x1e27bcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)60922u)));
    // 0x1e27c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e27c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e27c4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1e27c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1e27c8: 0x3c033bd1  lui         $v1, 0x3BD1
    ctx->pc = 0x1e27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15313 << 16));
    // 0x1e27cc: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x1e27ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46871u)));
    // 0x1e27d0: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e27d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1e27d4: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x1e27d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e27d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e27d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e27dc: 0x0  nop
    ctx->pc = 0x1e27dcu;
    // NOP
    // 0x1e27e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1e27e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1e27e4: 0xe60100d8  swc1        $f1, 0xD8($s0)
    ctx->pc = 0x1e27e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1e27e8: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27ec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e27ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e27f0: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e27f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e27f4: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e27f8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1e27f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1e27fc: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e27fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2800: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1e2800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2804: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e2804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2808: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E2808u;
    {
        const bool branch_taken_0x1e2808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2808u;
            // 0x1e280c: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2808) {
            ctx->pc = 0x1E2878u;
            goto label_1e2878;
        }
    }
    ctx->pc = 0x1E2810u;
label_1e2810:
    // 0x1e2810: 0x3c043b83  lui         $a0, 0x3B83
    ctx->pc = 0x1e2810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15235 << 16));
    // 0x1e2814: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e2814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2818: 0x3485126f  ori         $a1, $a0, 0x126F
    ctx->pc = 0x1e2818u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)4719u)));
    // 0x1e281c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1e281cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e2820: 0x3c033b6b  lui         $v1, 0x3B6B
    ctx->pc = 0x1e2820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15211 << 16));
    // 0x1e2824: 0x3464edfa  ori         $a0, $v1, 0xEDFA
    ctx->pc = 0x1e2824u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)60922u)));
    // 0x1e2828: 0x3c033bd1  lui         $v1, 0x3BD1
    ctx->pc = 0x1e2828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15313 << 16));
    // 0x1e282c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x1e282cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46871u)));
    // 0x1e2830: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e2830u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2834: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1e2834u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1e2838: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e2838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1e283c: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x1e283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2844: 0x0  nop
    ctx->pc = 0x1e2844u;
    // NOP
    // 0x1e2848: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1e2848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e284c: 0xe60100d8  swc1        $f1, 0xD8($s0)
    ctx->pc = 0x1e284cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1e2850: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2854: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1e2854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1e2858: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e2858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e285c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2860: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e2860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e2864: 0xe60100e4  swc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e2864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2868: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1e2868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e286c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e286cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2870: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e2870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1e2874: 0x0  nop
    ctx->pc = 0x1e2874u;
    // NOP
label_1e2878:
    // 0x1e2878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e287c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e287cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2880: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2880u;
            // 0x1e2884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2810u: goto label_1e2810;
            case 0x1E2878u: goto label_1e2878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2888u;
}
