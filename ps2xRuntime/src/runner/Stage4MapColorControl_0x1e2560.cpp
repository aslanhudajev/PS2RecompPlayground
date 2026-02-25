#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage4MapColorControl
// Address: 0x1e2560 - 0x1e2648
void Stage4MapColorControl_0x1e2560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage4MapColorControl_0x1e2560");
#endif

    ctx->pc = 0x1e2560u;

    // 0x1e2560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e256c: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1E256Cu;
    SET_GPR_U32(ctx, 31, 0x1E2574u);
    ctx->pc = 0x1E2570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E256Cu;
            // 0x1e2570: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2574u; }
        if (ctx->pc != 0x1E2574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2574u; }
        if (ctx->pc != 0x1E2574u) { return; }
    }
    ctx->pc = 0x1E2574u;
    // 0x1e2574: 0x28410bb8  slti        $at, $v0, 0xBB8
    ctx->pc = 0x1e2574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x1e2578: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E2578u;
    {
        const bool branch_taken_0x1e2578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2578) {
            ctx->pc = 0x1E2638u;
            goto label_1e2638;
        }
    }
    ctx->pc = 0x1E2580u;
    // 0x1e2580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2584: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1e2584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1e2588: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x1e2588u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1e258c: 0x3c043f0c  lui         $a0, 0x3F0C
    ctx->pc = 0x1e258cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16140 << 16));
    // 0x1e2590: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e2590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e2594: 0x3c033df5  lui         $v1, 0x3DF5
    ctx->pc = 0x1e2594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15861 << 16));
    // 0x1e2598: 0x346ac290  ori         $t2, $v1, 0xC290
    ctx->pc = 0x1e2598u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49808u)));
    // 0x1e259c: 0x3489cccd  ori         $t1, $a0, 0xCCCD
    ctx->pc = 0x1e259cu;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e25a0: 0x3c033e23  lui         $v1, 0x3E23
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15907 << 16));
    // 0x1e25a4: 0x3c043e75  lui         $a0, 0x3E75
    ctx->pc = 0x1e25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15989 << 16));
    // 0x1e25a8: 0x3468d70a  ori         $t0, $v1, 0xD70A
    ctx->pc = 0x1e25a8u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e25ac: 0x3487c28f  ori         $a3, $a0, 0xC28F
    ctx->pc = 0x1e25acu;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)49807u)));
    // 0x1e25b0: 0x3c033e57  lui         $v1, 0x3E57
    ctx->pc = 0x1e25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15959 << 16));
    // 0x1e25b4: 0x3c043eb8  lui         $a0, 0x3EB8
    ctx->pc = 0x1e25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16056 << 16));
    // 0x1e25b8: 0x34660a3e  ori         $a2, $v1, 0xA3E
    ctx->pc = 0x1e25b8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2622u)));
    // 0x1e25bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1e25bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e25c0: 0x3c033e05  lui         $v1, 0x3E05
    ctx->pc = 0x1e25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15877 << 16));
    // 0x1e25c4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1e25c4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e25c8: 0x0  nop
    ctx->pc = 0x1e25c8u;
    // NOP
    // 0x1e25cc: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x1e25ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1e25d0: 0x348551ec  ori         $a1, $a0, 0x51EC
    ctx->pc = 0x1e25d0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e25d4: 0x34641eb8  ori         $a0, $v1, 0x1EB8
    ctx->pc = 0x1e25d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7864u)));
    // 0x1e25d8: 0x3c033eb3  lui         $v1, 0x3EB3
    ctx->pc = 0x1e25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16051 << 16));
    // 0x1e25dc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e25dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e25e0: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e25e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e25e4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1e25e4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e25e8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1e25e8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e25ec: 0x0  nop
    ctx->pc = 0x1e25ecu;
    // NOP
    // 0x1e25f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e25f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e25f4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e25f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e25f8: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e25f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e25fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1e25fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2600: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e2600u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2604: 0x0  nop
    ctx->pc = 0x1e2604u;
    // NOP
    // 0x1e2608: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2608u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e260c: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e260cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2610: 0xe60100c4  swc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2614: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1e2614u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e2618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e261c: 0x0  nop
    ctx->pc = 0x1e261cu;
    // NOP
    // 0x1e2620: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x1e2620u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2624: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x1e2624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e262c: 0xe60200e0  swc1        $f2, 0xE0($s0)
    ctx->pc = 0x1e262cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2630: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2634: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e2634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1e2638:
    // 0x1e2638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e263c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e263cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2640: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2640u;
            // 0x1e2644: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2638u: goto label_1e2638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2648u;
}
