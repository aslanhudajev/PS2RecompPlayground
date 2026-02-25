#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage3MapColorControl
// Address: 0x1e2650 - 0x1e2768
void Stage3MapColorControl_0x1e2650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage3MapColorControl_0x1e2650");
#endif

    ctx->pc = 0x1e2650u;

    // 0x1e2650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e265c: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1E265Cu;
    SET_GPR_U32(ctx, 31, 0x1E2664u);
    ctx->pc = 0x1E2660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E265Cu;
            // 0x1e2660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2664u; }
        if (ctx->pc != 0x1E2664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2664u; }
        if (ctx->pc != 0x1E2664u) { return; }
    }
    ctx->pc = 0x1E2664u;
    // 0x1e2664: 0x28410bb8  slti        $at, $v0, 0xBB8
    ctx->pc = 0x1e2664u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x1e2668: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1E2668u;
    {
        const bool branch_taken_0x1e2668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2668) {
            ctx->pc = 0x1E2758u;
            goto label_1e2758;
        }
    }
    ctx->pc = 0x1E2670u;
    // 0x1e2670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2674: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1e2674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1e2678: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x1e2678u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1e267c: 0x3c043fa2  lui         $a0, 0x3FA2
    ctx->pc = 0x1e267cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16290 << 16));
    // 0x1e2680: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e2680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e2684: 0x3c033f38  lui         $v1, 0x3F38
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16184 << 16));
    // 0x1e2688: 0x346551eb  ori         $a1, $v1, 0x51EB
    ctx->pc = 0x1e2688u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20971u)));
    // 0x1e268c: 0x348b8f5c  ori         $t3, $a0, 0x8F5C
    ctx->pc = 0x1e268cu;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)36700u)));
    // 0x1e2690: 0x3c033f8f  lui         $v1, 0x3F8F
    ctx->pc = 0x1e2690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16271 << 16));
    // 0x1e2694: 0x3c043fae  lui         $a0, 0x3FAE
    ctx->pc = 0x1e2694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16302 << 16));
    // 0x1e2698: 0x346a5c29  ori         $t2, $v1, 0x5C29
    ctx->pc = 0x1e2698u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e269c: 0x3489147b  ori         $t1, $a0, 0x147B
    ctx->pc = 0x1e269cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)5243u)));
    // 0x1e26a0: 0x3c033f8a  lui         $v1, 0x3F8A
    ctx->pc = 0x1e26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16266 << 16));
    // 0x1e26a4: 0x3c043f97  lui         $a0, 0x3F97
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16279 << 16));
    // 0x1e26a8: 0x3468e147  ori         $t0, $v1, 0xE147
    ctx->pc = 0x1e26a8u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)57671u)));
    // 0x1e26ac: 0x3487ae14  ori         $a3, $a0, 0xAE14
    ctx->pc = 0x1e26acu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)44564u)));
    // 0x1e26b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1e26b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e26b4: 0x3c033eb8  lui         $v1, 0x3EB8
    ctx->pc = 0x1e26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16056 << 16));
    // 0x1e26b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e26b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e26bc: 0x0  nop
    ctx->pc = 0x1e26bcu;
    // NOP
    // 0x1e26c0: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x1e26c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1e26c4: 0x346651ec  ori         $a2, $v1, 0x51EC
    ctx->pc = 0x1e26c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e26c8: 0x3c033eb3  lui         $v1, 0x3EB3
    ctx->pc = 0x1e26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16051 << 16));
    // 0x1e26cc: 0x34653333  ori         $a1, $v1, 0x3333
    ctx->pc = 0x1e26ccu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e26d0: 0x3c03be8f  lui         $v1, 0xBE8F
    ctx->pc = 0x1e26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48783 << 16));
    // 0x1e26d4: 0x34645c29  ori         $a0, $v1, 0x5C29
    ctx->pc = 0x1e26d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e26d8: 0x3c033e61  lui         $v1, 0x3E61
    ctx->pc = 0x1e26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
    // 0x1e26dc: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1e26dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)18350u)));
    // 0x1e26e0: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e26e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e26e4: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1e26e4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e26e8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1e26e8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e26ec: 0x0  nop
    ctx->pc = 0x1e26ecu;
    // NOP
    // 0x1e26f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e26f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e26f4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e26f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e26f8: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e26f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e26fc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1e26fcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2700: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1e2700u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2704: 0x0  nop
    ctx->pc = 0x1e2704u;
    // NOP
    // 0x1e2708: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e270c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e270cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2710: 0xe60100c4  swc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2714: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1e2714u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2718: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e2718u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e271c: 0x0  nop
    ctx->pc = 0x1e271cu;
    // NOP
    // 0x1e2720: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2720u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2724: 0xe60100c8  swc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e2724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2728: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e2728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e272c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1e272cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2730: 0x0  nop
    ctx->pc = 0x1e2730u;
    // NOP
    // 0x1e2734: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2738: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x1e2738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e273c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e273cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2740: 0xe60200e4  swc1        $f2, 0xE4($s0)
    ctx->pc = 0x1e2740u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2744: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x1e2744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e274c: 0x0  nop
    ctx->pc = 0x1e274cu;
    // NOP
    // 0x1e2750: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2754: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e2754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1e2758:
    // 0x1e2758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e275c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e275cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2760: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2760u;
            // 0x1e2764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2758u: goto label_1e2758;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2768u;
}
