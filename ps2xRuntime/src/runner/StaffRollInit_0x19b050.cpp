#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StaffRollInit
// Address: 0x19b050 - 0x19b208
void StaffRollInit_0x19b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StaffRollInit_0x19b050");
#endif

    ctx->pc = 0x19b050u;

    // 0x19b050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19b054: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19b058: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19b05c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19b060: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x19b060u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b064: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19b064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19b068: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x19b068u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b06c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19b070: 0x3c140043  lui         $s4, 0x43
    ctx->pc = 0x19b070u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)67 << 16));
    // 0x19b074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19b074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19b078: 0x26941a00  addiu       $s4, $s4, 0x1A00
    ctx->pc = 0x19b078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6656));
    // 0x19b07c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19b080: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x19b080u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x19b084: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x19b084u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x19b088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19b08c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b090: 0x26521980  addiu       $s2, $s2, 0x1980
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6528));
    // 0x19b094: 0x26311960  addiu       $s1, $s1, 0x1960
    ctx->pc = 0x19b094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6496));
label_19b098:
    // 0x19b098: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19b09c: 0xc421a8f0  lwc1        $f1, -0x5710($at)
    ctx->pc = 0x19b09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b0a0: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x19b0a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19b0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19b0a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ac: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x19b0acu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b0b0: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x19b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x19b0b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19b0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19b0b8: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x19b0b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x19b0bc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19b0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19b0c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x19b0c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19b0c4: 0xc42ca8e8  lwc1        $f12, -0x5718($at)
    ctx->pc = 0x19b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b0c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19b0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19b0cc: 0xc066c10  jal         func_19B040
    ctx->pc = 0x19B0CCu;
    SET_GPR_U32(ctx, 31, 0x19B0D4u);
    ctx->pc = 0x19B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B0CCu;
            // 0x19b0d0: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B040u;
    if (runtime->hasFunction(0x19B040u)) {
        auto targetFn = runtime->lookupFunction(0x19B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0D4u; }
        if (ctx->pc != 0x19B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x19b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B0D4u; }
        if (ctx->pc != 0x19B0D4u) { return; }
    }
    ctx->pc = 0x19B0D4u;
    // 0x19b0d4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19b0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19b0d8: 0x3c024460  lui         $v0, 0x4460
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17504 << 16));
    // 0x19b0dc: 0xc422a8f0  lwc1        $f2, -0x5710($at)
    ctx->pc = 0x19b0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19b0e0: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x19b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x19b0e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19b0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19b0e8: 0x138100  sll         $s0, $s3, 4
    ctx->pc = 0x19b0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x19b0ec: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x19b0ecu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b0f0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x19b0f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19b0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19b0f8: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x19b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x19b0fc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x19b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19b100: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19b104: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x19b104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x19b108: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x19b108u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x19b10c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x19b10cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x19b110: 0x46011340  add.s       $f13, $f2, $f1
    ctx->pc = 0x19b110u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19b114: 0xc420a8e8  lwc1        $f0, -0x5718($at)
    ctx->pc = 0x19b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b118: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19b118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b11c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19b11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19b120: 0xc066c10  jal         func_19B040
    ctx->pc = 0x19B120u;
    SET_GPR_U32(ctx, 31, 0x19B128u);
    ctx->pc = 0x19B124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B120u;
            // 0x19b124: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B040u;
    if (runtime->hasFunction(0x19B040u)) {
        auto targetFn = runtime->lookupFunction(0x19B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B128u; }
        if (ctx->pc != 0x19B128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x19b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B128u; }
        if (ctx->pc != 0x19B128u) { return; }
    }
    ctx->pc = 0x19B128u;
    // 0x19b128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b130: 0xc066c8c  jal         func_19B230
    ctx->pc = 0x19B130u;
    SET_GPR_U32(ctx, 31, 0x19B138u);
    ctx->pc = 0x19B134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B130u;
            // 0x19b134: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B230u;
    if (runtime->hasFunction(0x19B230u)) {
        auto targetFn = runtime->lookupFunction(0x19B230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B138u; }
        if (ctx->pc != 0x19B138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x19b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B138u; }
        if (ctx->pc != 0x19B138u) { return; }
    }
    ctx->pc = 0x19B138u;
    // 0x19b138: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x19b13c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x19b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x19b140: 0x24421980  addiu       $v0, $v0, 0x1980
    ctx->pc = 0x19b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x19b144: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x19b148: 0xc066c8c  jal         func_19B230
    ctx->pc = 0x19B148u;
    SET_GPR_U32(ctx, 31, 0x19B150u);
    ctx->pc = 0x19B14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B148u;
            // 0x19b14c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B230u;
    if (runtime->hasFunction(0x19B230u)) {
        auto targetFn = runtime->lookupFunction(0x19B230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B150u; }
        if (ctx->pc != 0x19B150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x19b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B150u; }
        if (ctx->pc != 0x19B150u) { return; }
    }
    ctx->pc = 0x19B150u;
    // 0x19b150: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x19b150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19b154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b158: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19b158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b15c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b160: 0xc066c84  jal         func_19B210
    ctx->pc = 0x19B160u;
    SET_GPR_U32(ctx, 31, 0x19B168u);
    ctx->pc = 0x19B164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B160u;
            // 0x19b164: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B210u;
    if (runtime->hasFunction(0x19B210u)) {
        auto targetFn = runtime->lookupFunction(0x19B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B168u; }
        if (ctx->pc != 0x19B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x19b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B168u; }
        if (ctx->pc != 0x19B168u) { return; }
    }
    ctx->pc = 0x19B168u;
    // 0x19b168: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x19b168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x19b16c: 0x26b501c0  addiu       $s5, $s5, 0x1C0
    ctx->pc = 0x19b16cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
    // 0x19b170: 0x2ac30004  slti        $v1, $s6, 0x4
    ctx->pc = 0x19b170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19b174: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x19b174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x19b178: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x19b178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x19b17c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x19b17cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x19b180: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x19B180u;
    {
        const bool branch_taken_0x19b180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B180u;
            // 0x19b184: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b180) {
            ctx->pc = 0x19B098u;
            goto label_19b098;
        }
    }
    ctx->pc = 0x19B188u;
    // 0x19b188: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19b188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19b18c: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x19b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x19b190: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B190u;
    {
        const bool branch_taken_0x19b190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B190u;
            // 0x19b194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b190) {
            ctx->pc = 0x19B1A8u;
            goto label_19b1a8;
        }
    }
    ctx->pc = 0x19B198u;
    // 0x19b198: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x19B198u;
    SET_GPR_U32(ctx, 31, 0x19B1A0u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1A0u; }
        if (ctx->pc != 0x19B1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1A0u; }
        if (ctx->pc != 0x19B1A0u) { return; }
    }
    ctx->pc = 0x19B1A0u;
    // 0x19b1a0: 0xc065fb8  jal         func_197EE0
    ctx->pc = 0x19B1A0u;
    SET_GPR_U32(ctx, 31, 0x19B1A8u);
    ctx->pc = 0x19B1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1A0u;
            // 0x19b1a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197EE0u;
    if (runtime->hasFunction(0x197EE0u)) {
        auto targetFn = runtime->lookupFunction(0x197EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1A8u; }
        if (ctx->pc != 0x19B1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntryInit_0x197ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1A8u; }
        if (ctx->pc != 0x19B1A8u) { return; }
    }
    ctx->pc = 0x19B1A8u;
label_19b1a8:
    // 0x19b1a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19b1ac: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x19b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x19b1b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B1B0u;
    {
        const bool branch_taken_0x19b1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1B0u;
            // 0x19b1b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1b0) {
            ctx->pc = 0x19B1C8u;
            goto label_19b1c8;
        }
    }
    ctx->pc = 0x19B1B8u;
    // 0x19b1b8: 0xc0636e8  jal         func_18DBA0
    ctx->pc = 0x19B1B8u;
    SET_GPR_U32(ctx, 31, 0x19B1C0u);
    ctx->pc = 0x18DBA0u;
    if (runtime->hasFunction(0x18DBA0u)) {
        auto targetFn = runtime->lookupFunction(0x18DBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1C0u; }
        if (ctx->pc != 0x19B1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerAddr_0x18dba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1C0u; }
        if (ctx->pc != 0x19B1C0u) { return; }
    }
    ctx->pc = 0x19B1C0u;
    // 0x19b1c0: 0xc065fb8  jal         func_197EE0
    ctx->pc = 0x19B1C0u;
    SET_GPR_U32(ctx, 31, 0x19B1C8u);
    ctx->pc = 0x19B1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B1C0u;
            // 0x19b1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197EE0u;
    if (runtime->hasFunction(0x197EE0u)) {
        auto targetFn = runtime->lookupFunction(0x197EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1C8u; }
        if (ctx->pc != 0x19B1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameEntryInit_0x197ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B1C8u; }
        if (ctx->pc != 0x19B1C8u) { return; }
    }
    ctx->pc = 0x19B1C8u;
label_19b1c8:
    // 0x19b1c8: 0x3c03c380  lui         $v1, 0xC380
    ctx->pc = 0x19b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50048 << 16));
    // 0x19b1cc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19b1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19b1d0: 0xac23a8e8  sw          $v1, -0x5718($at)
    ctx->pc = 0x19b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945000), GPR_U32(ctx, 3));
    // 0x19b1d4: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x19b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x19b1d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19b1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19b1dc: 0xac23a8f0  sw          $v1, -0x5710($at)
    ctx->pc = 0x19b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945008), GPR_U32(ctx, 3));
    // 0x19b1e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19b1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19b1e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19b1e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b1e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19b1e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b1ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19b1ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b1f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19b1f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b1f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b200: 0x3e00008  jr          $ra
    ctx->pc = 0x19B200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B200u;
            // 0x19b204: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B098u: goto label_19b098;
            case 0x19B1A8u: goto label_19b1a8;
            case 0x19B1C8u: goto label_19b1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B208u;
}
