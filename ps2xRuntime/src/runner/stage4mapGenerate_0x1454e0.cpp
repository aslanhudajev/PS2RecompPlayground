#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage4mapGenerate
// Address: 0x1454e0 - 0x145940
void stage4mapGenerate_0x1454e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage4mapGenerate_0x1454e0");
#endif

    ctx->pc = 0x1454e0u;

    // 0x1454e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1454e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1454e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1454e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1454e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1454e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1454ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1454ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1454f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1454f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1454f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1454f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1454f8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1454f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1454fc: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1454FCu;
    SET_GPR_U32(ctx, 31, 0x145504u);
    ctx->pc = 0x145500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454FCu;
            // 0x145500: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145504u; }
        if (ctx->pc != 0x145504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145504u; }
        if (ctx->pc != 0x145504u) { return; }
    }
    ctx->pc = 0x145504u;
    // 0x145504: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x145504u;
    SET_GPR_U32(ctx, 31, 0x14550Cu);
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14550Cu; }
        if (ctx->pc != 0x14550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14550Cu; }
        if (ctx->pc != 0x14550Cu) { return; }
    }
    ctx->pc = 0x14550Cu;
    // 0x14550c: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x14550cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x145510: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145514: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x145514u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x145518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14551c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x14551cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x145520: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x145520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x145524: 0xc4249ca8  lwc1        $f4, -0x6358($at)
    ctx->pc = 0x145524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x145528: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x145528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x14552c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x14552cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x145530: 0x3c05c496  lui         $a1, 0xC496
    ctx->pc = 0x145530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50326 << 16));
    // 0x145534: 0x3464126f  ori         $a0, $v1, 0x126F
    ctx->pc = 0x145534u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x145538: 0x3c033ee6  lui         $v1, 0x3EE6
    ctx->pc = 0x145538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16102 << 16));
    // 0x14553c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x14553cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)26214u)));
    // 0x145540: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x145540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x145544: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x145544u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145548: 0x3c03be85  lui         $v1, 0xBE85
    ctx->pc = 0x145548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48773 << 16));
    // 0x14554c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145550: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x145550u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7864u)));
    // 0x145554: 0x3c04bf05  lui         $a0, 0xBF05
    ctx->pc = 0x145554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48901 << 16));
    // 0x145558: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x145558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x14555c: 0xc4239ca0  lwc1        $f3, -0x6360($at)
    ctx->pc = 0x14555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145560: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x145560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x145564: 0x34841eb8  ori         $a0, $a0, 0x1EB8
    ctx->pc = 0x145564u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7864u)));
    // 0x145568: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x145568u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14556c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x14556cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x145570: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x145570u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x145574: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x145574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x145578: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14557c: 0xc4219c98  lwc1        $f1, -0x6368($at)
    ctx->pc = 0x14557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145580: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x145580u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x145584: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145588: 0xc4209c90  lwc1        $f0, -0x6370($at)
    ctx->pc = 0x145588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14558c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14558cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x145590: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145594: 0xe4249ca8  swc1        $f4, -0x6358($at)
    ctx->pc = 0x145594u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941864), bits); }
    // 0x145598: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14559c: 0xe4239ca0  swc1        $f3, -0x6360($at)
    ctx->pc = 0x14559cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941856), bits); }
    // 0x1455a0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1455a4: 0xe4219c98  swc1        $f1, -0x6368($at)
    ctx->pc = 0x1455a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941848), bits); }
    // 0x1455a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1455a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1455ac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1455acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1455b0: 0xe4209c90  swc1        $f0, -0x6370($at)
    ctx->pc = 0x1455b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941840), bits); }
    // 0x1455b4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1455b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1455b8: 0x9010  mfhi        $s2
    ctx->pc = 0x1455b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1455bc: 0x1640002c  bnez        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1455BCu;
    {
        const bool branch_taken_0x1455bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1455C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1455BCu;
            // 0x1455c0: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455bc) {
            ctx->pc = 0x145670u;
            goto label_145670;
        }
    }
    ctx->pc = 0x1455C4u;
    // 0x1455c4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1455c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1455c8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1455cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1455ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1455d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1455d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1455d4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1455D4u;
    SET_GPR_U32(ctx, 31, 0x1455DCu);
    ctx->pc = 0x1455D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1455D4u;
            // 0x1455d8: 0x24e75c80  addiu       $a3, $a3, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455DCu; }
        if (ctx->pc != 0x1455DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455DCu; }
        if (ctx->pc != 0x1455DCu) { return; }
    }
    ctx->pc = 0x1455DCu;
    // 0x1455dc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1455e0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1455e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1455e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1455e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1455ec: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1455ECu;
    SET_GPR_U32(ctx, 31, 0x1455F4u);
    ctx->pc = 0x1455F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1455ECu;
            // 0x1455f0: 0x24e75c80  addiu       $a3, $a3, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455F4u; }
        if (ctx->pc != 0x1455F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455F4u; }
        if (ctx->pc != 0x1455F4u) { return; }
    }
    ctx->pc = 0x1455F4u;
    // 0x1455f4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1455f8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1455fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1455fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145600: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145604: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145604u;
    SET_GPR_U32(ctx, 31, 0x14560Cu);
    ctx->pc = 0x145608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145604u;
            // 0x145608: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14560Cu; }
        if (ctx->pc != 0x14560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14560Cu; }
        if (ctx->pc != 0x14560Cu) { return; }
    }
    ctx->pc = 0x14560Cu;
    // 0x14560c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14560cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145610: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x145610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x145614: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145618: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14561c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14561Cu;
    SET_GPR_U32(ctx, 31, 0x145624u);
    ctx->pc = 0x145620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14561Cu;
            // 0x145620: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145624u; }
        if (ctx->pc != 0x145624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145624u; }
        if (ctx->pc != 0x145624u) { return; }
    }
    ctx->pc = 0x145624u;
    // 0x145624: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145628: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x145628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14562c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145630: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145634: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145634u;
    SET_GPR_U32(ctx, 31, 0x14563Cu);
    ctx->pc = 0x145638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145634u;
            // 0x145638: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14563Cu; }
        if (ctx->pc != 0x14563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14563Cu; }
        if (ctx->pc != 0x14563Cu) { return; }
    }
    ctx->pc = 0x14563Cu;
    // 0x14563c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145640: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x145640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x145644: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145648: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14564c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14564Cu;
    SET_GPR_U32(ctx, 31, 0x145654u);
    ctx->pc = 0x145650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14564Cu;
            // 0x145650: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145654u; }
        if (ctx->pc != 0x145654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145654u; }
        if (ctx->pc != 0x145654u) { return; }
    }
    ctx->pc = 0x145654u;
    // 0x145654: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145658: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x145658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14565c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145660: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145664: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145664u;
    SET_GPR_U32(ctx, 31, 0x14566Cu);
    ctx->pc = 0x145668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145664u;
            // 0x145668: 0x24e75b60  addiu       $a3, $a3, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14566Cu; }
        if (ctx->pc != 0x14566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14566Cu; }
        if (ctx->pc != 0x14566Cu) { return; }
    }
    ctx->pc = 0x14566Cu;
    // 0x14566c: 0x0  nop
    ctx->pc = 0x14566cu;
    // NOP
label_145670:
    // 0x145670: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x145670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x145674: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x145674u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x145678: 0x0  nop
    ctx->pc = 0x145678u;
    // NOP
    // 0x14567c: 0x0  nop
    ctx->pc = 0x14567cu;
    // NOP
    // 0x145680: 0x1810  mfhi        $v1
    ctx->pc = 0x145680u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x145684: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x145684u;
    {
        const bool branch_taken_0x145684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145684u;
            // 0x145688: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145684) {
            ctx->pc = 0x1456A0u;
            goto label_1456a0;
        }
    }
    ctx->pc = 0x14568Cu;
    // 0x14568c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x14568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x145690: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145694: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145698: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145698u;
    SET_GPR_U32(ctx, 31, 0x1456A0u);
    ctx->pc = 0x14569Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145698u;
            // 0x14569c: 0x24e75a60  addiu       $a3, $a3, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A0u; }
        if (ctx->pc != 0x1456A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A0u; }
        if (ctx->pc != 0x1456A0u) { return; }
    }
    ctx->pc = 0x1456A0u;
label_1456a0:
    // 0x1456a0: 0x2a2104b1  slti        $at, $s1, 0x4B1
    ctx->pc = 0x1456a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1201) ? 1 : 0);
    // 0x1456a4: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1456A4u;
    {
        const bool branch_taken_0x1456a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1456a4) {
            ctx->pc = 0x145748u;
            goto label_145748;
        }
    }
    ctx->pc = 0x1456ACu;
    // 0x1456ac: 0x16400026  bnez        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1456ACu;
    {
        const bool branch_taken_0x1456ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1456B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1456ACu;
            // 0x1456b0: 0x3c03c4c8  lui         $v1, 0xC4C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50376 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456ac) {
            ctx->pc = 0x145748u;
            goto label_145748;
        }
    }
    ctx->pc = 0x1456B4u;
    // 0x1456b4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1456b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1456b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1456b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1456bc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1456bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1456c0: 0x8c239c18  lw          $v1, -0x63E8($at)
    ctx->pc = 0x1456c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941720)));
    // 0x1456c4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1456c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1456c8: 0x24429540  addiu       $v0, $v0, -0x6AC0
    ctx->pc = 0x1456c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939968));
    // 0x1456cc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1456ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1456d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1456d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1456d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1456d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1456d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1456dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1456dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1456e0: 0xc0520a0  jal         func_148280
    ctx->pc = 0x1456E0u;
    SET_GPR_U32(ctx, 31, 0x1456E8u);
    ctx->pc = 0x1456E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456E0u;
            // 0x1456e4: 0x24e75a00  addiu       $a3, $a3, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456E8u; }
        if (ctx->pc != 0x1456E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456E8u; }
        if (ctx->pc != 0x1456E8u) { return; }
    }
    ctx->pc = 0x1456E8u;
    // 0x1456e8: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1456e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1456ec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1456ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1456f0: 0x8c239c18  lw          $v1, -0x63E8($at)
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941720)));
    // 0x1456f4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1456f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1456f8: 0x24429544  addiu       $v0, $v0, -0x6ABC
    ctx->pc = 0x1456f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939972));
    // 0x1456fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1456fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145700: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145704: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x145704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x145708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14570c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145710: 0xc0520a0  jal         func_148280
    ctx->pc = 0x145710u;
    SET_GPR_U32(ctx, 31, 0x145718u);
    ctx->pc = 0x145714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145710u;
            // 0x145714: 0x24e75a00  addiu       $a3, $a3, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145718u; }
        if (ctx->pc != 0x145718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145718u; }
        if (ctx->pc != 0x145718u) { return; }
    }
    ctx->pc = 0x145718u;
    // 0x145718: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14571c: 0x8c239c18  lw          $v1, -0x63E8($at)
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941720)));
    // 0x145720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x145720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x145724: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145728: 0xac239c18  sw          $v1, -0x63E8($at)
    ctx->pc = 0x145728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941720), GPR_U32(ctx, 3));
    // 0x14572c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14572cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145730: 0x8c239c18  lw          $v1, -0x63E8($at)
    ctx->pc = 0x145730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941720)));
    // 0x145734: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x145734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145738: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x145738u;
    {
        const bool branch_taken_0x145738 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145738u;
            // 0x14573c: 0x3c010025  lui         $at, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145738) {
            ctx->pc = 0x145748u;
            goto label_145748;
        }
    }
    ctx->pc = 0x145740u;
    // 0x145740: 0xac209c18  sw          $zero, -0x63E8($at)
    ctx->pc = 0x145740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941720), GPR_U32(ctx, 0));
    // 0x145744: 0x0  nop
    ctx->pc = 0x145744u;
    // NOP
label_145748:
    // 0x145748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14574c: 0x16230076  bne         $s1, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x14574Cu;
    {
        const bool branch_taken_0x14574c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x145750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14574Cu;
            // 0x145750: 0x3c070014  lui         $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14574c) {
            ctx->pc = 0x145928u;
            goto label_145928;
        }
    }
    ctx->pc = 0x145754u;
    // 0x145754: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145758: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14575c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145760: 0x24e75c80  addiu       $a3, $a3, 0x5C80
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
    // 0x145764: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145764u;
    SET_GPR_U32(ctx, 31, 0x14576Cu);
    ctx->pc = 0x145768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145764u;
            // 0x145768: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14576Cu; }
        if (ctx->pc != 0x14576Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14576Cu; }
        if (ctx->pc != 0x14576Cu) { return; }
    }
    ctx->pc = 0x14576Cu;
    // 0x14576c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14576cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145770: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x145770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x145774: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145778: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14577c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14577Cu;
    SET_GPR_U32(ctx, 31, 0x145784u);
    ctx->pc = 0x145780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14577Cu;
            // 0x145780: 0x24e75c80  addiu       $a3, $a3, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145784u; }
        if (ctx->pc != 0x145784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145784u; }
        if (ctx->pc != 0x145784u) { return; }
    }
    ctx->pc = 0x145784u;
    // 0x145784: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145788: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14578c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14578cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145790: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145794: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145794u;
    SET_GPR_U32(ctx, 31, 0x14579Cu);
    ctx->pc = 0x145798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145794u;
            // 0x145798: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14579Cu; }
        if (ctx->pc != 0x14579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14579Cu; }
        if (ctx->pc != 0x14579Cu) { return; }
    }
    ctx->pc = 0x14579Cu;
    // 0x14579c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14579cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1457a0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1457a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1457a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1457a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1457a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1457a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1457ac: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1457ACu;
    SET_GPR_U32(ctx, 31, 0x1457B4u);
    ctx->pc = 0x1457B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457ACu;
            // 0x1457b0: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B4u; }
        if (ctx->pc != 0x1457B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B4u; }
        if (ctx->pc != 0x1457B4u) { return; }
    }
    ctx->pc = 0x1457B4u;
    // 0x1457b4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1457b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1457b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1457b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1457bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1457bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1457c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1457c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1457c4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1457C4u;
    SET_GPR_U32(ctx, 31, 0x1457CCu);
    ctx->pc = 0x1457C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457C4u;
            // 0x1457c8: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457CCu; }
        if (ctx->pc != 0x1457CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457CCu; }
        if (ctx->pc != 0x1457CCu) { return; }
    }
    ctx->pc = 0x1457CCu;
    // 0x1457cc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1457ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1457d0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1457d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1457d4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1457d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1457d8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1457d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1457dc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1457DCu;
    SET_GPR_U32(ctx, 31, 0x1457E4u);
    ctx->pc = 0x1457E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457DCu;
            // 0x1457e0: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457E4u; }
        if (ctx->pc != 0x1457E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457E4u; }
        if (ctx->pc != 0x1457E4u) { return; }
    }
    ctx->pc = 0x1457E4u;
    // 0x1457e4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1457e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1457e8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1457e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1457ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1457ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1457f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1457f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1457f4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1457F4u;
    SET_GPR_U32(ctx, 31, 0x1457FCu);
    ctx->pc = 0x1457F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457F4u;
            // 0x1457f8: 0x24e75b60  addiu       $a3, $a3, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457FCu; }
        if (ctx->pc != 0x1457FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457FCu; }
        if (ctx->pc != 0x1457FCu) { return; }
    }
    ctx->pc = 0x1457FCu;
    // 0x1457fc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1457fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145800: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x145800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x145804: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145808: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14580c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14580Cu;
    SET_GPR_U32(ctx, 31, 0x145814u);
    ctx->pc = 0x145810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14580Cu;
            // 0x145810: 0x24e75a60  addiu       $a3, $a3, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145814u; }
        if (ctx->pc != 0x145814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145814u; }
        if (ctx->pc != 0x145814u) { return; }
    }
    ctx->pc = 0x145814u;
    // 0x145814: 0x3c02c416  lui         $v0, 0xC416
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50198 << 16));
    // 0x145818: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145818u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14581c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x145820: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x145820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x145824: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145828: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14582c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14582Cu;
    SET_GPR_U32(ctx, 31, 0x145834u);
    ctx->pc = 0x145830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14582Cu;
            // 0x145830: 0x24e75a60  addiu       $a3, $a3, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145834u; }
        if (ctx->pc != 0x145834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145834u; }
        if (ctx->pc != 0x145834u) { return; }
    }
    ctx->pc = 0x145834u;
    // 0x145834: 0x3c02c496  lui         $v0, 0xC496
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50326 << 16));
    // 0x145838: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14583c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145840: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x145840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x145844: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145848: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14584c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14584Cu;
    SET_GPR_U32(ctx, 31, 0x145854u);
    ctx->pc = 0x145850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14584Cu;
            // 0x145850: 0x24e75c80  addiu       $a3, $a3, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145854u; }
        if (ctx->pc != 0x145854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145854u; }
        if (ctx->pc != 0x145854u) { return; }
    }
    ctx->pc = 0x145854u;
    // 0x145854: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145858: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x145858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x14585c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14585cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145860: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145864: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145864u;
    SET_GPR_U32(ctx, 31, 0x14586Cu);
    ctx->pc = 0x145868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145864u;
            // 0x145868: 0x24e75c80  addiu       $a3, $a3, 0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14586Cu; }
        if (ctx->pc != 0x14586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14586Cu; }
        if (ctx->pc != 0x14586Cu) { return; }
    }
    ctx->pc = 0x14586Cu;
    // 0x14586c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14586cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145870: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x145874: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x145874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145878: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14587c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x14587Cu;
    SET_GPR_U32(ctx, 31, 0x145884u);
    ctx->pc = 0x145880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14587Cu;
            // 0x145880: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145884u; }
        if (ctx->pc != 0x145884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145884u; }
        if (ctx->pc != 0x145884u) { return; }
    }
    ctx->pc = 0x145884u;
    // 0x145884: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x145884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x145888: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x145888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14588c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x145890: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145894: 0xc0520cc  jal         func_148330
    ctx->pc = 0x145894u;
    SET_GPR_U32(ctx, 31, 0x14589Cu);
    ctx->pc = 0x145898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145894u;
            // 0x145898: 0x24e75bf0  addiu       $a3, $a3, 0x5BF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14589Cu; }
        if (ctx->pc != 0x14589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14589Cu; }
        if (ctx->pc != 0x14589Cu) { return; }
    }
    ctx->pc = 0x14589Cu;
    // 0x14589c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14589cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1458a0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1458a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1458a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1458a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1458a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1458ac: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1458ACu;
    SET_GPR_U32(ctx, 31, 0x1458B4u);
    ctx->pc = 0x1458B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458ACu;
            // 0x1458b0: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458B4u; }
        if (ctx->pc != 0x1458B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458B4u; }
        if (ctx->pc != 0x1458B4u) { return; }
    }
    ctx->pc = 0x1458B4u;
    // 0x1458b4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1458b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1458b8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1458bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1458bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1458c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1458c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1458c4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1458C4u;
    SET_GPR_U32(ctx, 31, 0x1458CCu);
    ctx->pc = 0x1458C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458C4u;
            // 0x1458c8: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458CCu; }
        if (ctx->pc != 0x1458CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458CCu; }
        if (ctx->pc != 0x1458CCu) { return; }
    }
    ctx->pc = 0x1458CCu;
    // 0x1458cc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1458ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1458d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1458d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1458d4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1458d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1458d8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1458dc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1458DCu;
    SET_GPR_U32(ctx, 31, 0x1458E4u);
    ctx->pc = 0x1458E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458DCu;
            // 0x1458e0: 0x24e75b60  addiu       $a3, $a3, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458E4u; }
        if (ctx->pc != 0x1458E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458E4u; }
        if (ctx->pc != 0x1458E4u) { return; }
    }
    ctx->pc = 0x1458E4u;
    // 0x1458e4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1458e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1458e8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1458e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1458ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1458ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1458f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1458f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1458f4: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1458F4u;
    SET_GPR_U32(ctx, 31, 0x1458FCu);
    ctx->pc = 0x1458F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1458F4u;
            // 0x1458f8: 0x24e75a60  addiu       $a3, $a3, 0x5A60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458FCu; }
        if (ctx->pc != 0x1458FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1458FCu; }
        if (ctx->pc != 0x1458FCu) { return; }
    }
    ctx->pc = 0x1458FCu;
    // 0x1458fc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1458fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145900: 0xac209ca8  sw          $zero, -0x6358($at)
    ctx->pc = 0x145900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941864), GPR_U32(ctx, 0));
    // 0x145904: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145908: 0xac209ca0  sw          $zero, -0x6360($at)
    ctx->pc = 0x145908u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941856), GPR_U32(ctx, 0));
    // 0x14590c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145910: 0xac209c98  sw          $zero, -0x6368($at)
    ctx->pc = 0x145910u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941848), GPR_U32(ctx, 0));
    // 0x145914: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x145914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145918: 0xac209c90  sw          $zero, -0x6370($at)
    ctx->pc = 0x145918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941840), GPR_U32(ctx, 0));
    // 0x14591c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14591cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x145920: 0xac209c18  sw          $zero, -0x63E8($at)
    ctx->pc = 0x145920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941720), GPR_U32(ctx, 0));
    // 0x145924: 0x0  nop
    ctx->pc = 0x145924u;
    // NOP
label_145928:
    // 0x145928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14592c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14592cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145938: 0x3e00008  jr          $ra
    ctx->pc = 0x145938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145938u;
            // 0x14593c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145670u: goto label_145670;
            case 0x1456A0u: goto label_1456a0;
            case 0x145748u: goto label_145748;
            case 0x145928u: goto label_145928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145940u;
}
