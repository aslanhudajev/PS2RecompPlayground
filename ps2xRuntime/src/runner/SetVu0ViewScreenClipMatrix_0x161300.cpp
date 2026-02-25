#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetVu0ViewScreenClipMatrix
// Address: 0x161300 - 0x16152c
void SetVu0ViewScreenClipMatrix_0x161300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetVu0ViewScreenClipMatrix_0x161300");
#endif

    ctx->pc = 0x161300u;

    // 0x161300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x161300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161304: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x161304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x161308: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x161308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x16130c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x161310: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x161310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161314: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x161314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x161318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x161318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16131c: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x16131cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x161320: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x161320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161324: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x161324u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x161328: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x161328u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x16132c: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x16132cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x161330: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x161330u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x161334: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x161334u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x161338: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x161338u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16133c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16133cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x161340: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x161340u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x161344: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x161344u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x161348: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x161348u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16134c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16134cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x161350: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x161350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161354: 0x46009e06  mov.s       $f24, $f19
    ctx->pc = 0x161354u;
    ctx->f[24] = FPU_MOV_S(ctx->f[19]);
    // 0x161358: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x161358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16135c: 0x460067c6  mov.s       $f31, $f12
    ctx->pc = 0x16135cu;
    ctx->f[31] = FPU_MOV_S(ctx->f[12]);
    // 0x161360: 0x46006f86  mov.s       $f30, $f13
    ctx->pc = 0x161360u;
    ctx->f[30] = FPU_MOV_S(ctx->f[13]);
    // 0x161364: 0x46007746  mov.s       $f29, $f14
    ctx->pc = 0x161364u;
    ctx->f[29] = FPU_MOV_S(ctx->f[14]);
    // 0x161368: 0x4601c042  mul.s       $f1, $f24, $f1
    ctx->pc = 0x161368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x16136c: 0x46007f06  mov.s       $f28, $f15
    ctx->pc = 0x16136cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[15]);
    // 0x161370: 0x460086c6  mov.s       $f27, $f16
    ctx->pc = 0x161370u;
    ctx->f[27] = FPU_MOV_S(ctx->f[16]);
    // 0x161374: 0x46008e86  mov.s       $f26, $f17
    ctx->pc = 0x161374u;
    ctx->f[26] = FPU_MOV_S(ctx->f[17]);
    // 0x161378: 0x46009646  mov.s       $f25, $f18
    ctx->pc = 0x161378u;
    ctx->f[25] = FPU_MOV_S(ctx->f[18]);
    // 0x16137c: 0xc7b700c0  lwc1        $f23, 0xC0($sp)
    ctx->pc = 0x16137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x161380: 0x461f0d83  div.s       $f22, $f1, $f31
    ctx->pc = 0x161380u;
    if (ctx->f[31] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[22] = ctx->f[1] / ctx->f[31];
    // 0x161384: 0x0  nop
    ctx->pc = 0x161384u;
    // NOP
    // 0x161388: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x161388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x16138c: 0x461f0543  div.s       $f21, $f0, $f31
    ctx->pc = 0x16138cu;
    if (ctx->f[31] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[31];
    // 0x161390: 0x0  nop
    ctx->pc = 0x161390u;
    // NOP
    // 0x161394: 0x0  nop
    ctx->pc = 0x161394u;
    // NOP
    // 0x161398: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x161398u;
    SET_GPR_U32(ctx, 31, 0x1613A0u);
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613A0u; }
        if (ctx->pc != 0x1613A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613A0u; }
        if (ctx->pc != 0x1613A0u) { return; }
    }
    ctx->pc = 0x1613A0u;
    // 0x1613a0: 0xe65f0000  swc1        $f31, 0x0($s2)
    ctx->pc = 0x1613a0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1613a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1613a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1613a8: 0xe65f0014  swc1        $f31, 0x14($s2)
    ctx->pc = 0x1613a8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1613ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1613acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1613b0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1613b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x1613b4: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1613b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x1613b8: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x1613b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x1613bc: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1613BCu;
    SET_GPR_U32(ctx, 31, 0x1613C4u);
    ctx->pc = 0x1613C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1613BCu;
            // 0x1613c0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613C4u; }
        if (ctx->pc != 0x1613C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613C4u; }
        if (ctx->pc != 0x1613C4u) { return; }
    }
    ctx->pc = 0x1613C4u;
    // 0x1613c4: 0x4600c007  neg.s       $f0, $f24
    ctx->pc = 0x1613c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
    // 0x1613c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1613c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613cc: 0x46170040  add.s       $f1, $f0, $f23
    ctx->pc = 0x1613ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1613d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1613d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613d4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1613d8: 0x4600d007  neg.s       $f0, $f26
    ctx->pc = 0x1613d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[26]);
    // 0x1613dc: 0x4618bd02  mul.s       $f20, $f23, $f24
    ctx->pc = 0x1613dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
    // 0x1613e0: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x1613e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
    // 0x1613e4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1613e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1613e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1613e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1613ec: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1613ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1613f0: 0x4600c807  neg.s       $f0, $f25
    ctx->pc = 0x1613f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[25]);
    // 0x1613f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1613f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1613f8: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1613f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1613fc: 0x4618001a  mula.s      $f0, $f24
    ctx->pc = 0x1613fcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x161400: 0x4617d01c  madd.s      $f0, $f26, $f23
    ctx->pc = 0x161400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[26], ctx->f[23]));
    // 0x161404: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x161404u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x161408: 0xe7be0080  swc1        $f30, 0x80($sp)
    ctx->pc = 0x161408u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x16140c: 0xe7bd0094  swc1        $f29, 0x94($sp)
    ctx->pc = 0x16140cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x161410: 0xe7bc00b0  swc1        $f28, 0xB0($sp)
    ctx->pc = 0x161410u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x161414: 0xe7bb00b4  swc1        $f27, 0xB4($sp)
    ctx->pc = 0x161414u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x161418: 0x0  nop
    ctx->pc = 0x161418u;
    // NOP
    // 0x16141c: 0x0  nop
    ctx->pc = 0x16141cu;
    // NOP
    // 0x161420: 0xc04b6ca  jal         func_12DB28
    ctx->pc = 0x161420u;
    SET_GPR_U32(ctx, 31, 0x161428u);
    ctx->pc = 0x161424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161420u;
            // 0x161424: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DB28u;
    if (runtime->hasFunction(0x12DB28u)) {
        auto targetFn = runtime->lookupFunction(0x12DB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161428u; }
        if (ctx->pc != 0x161428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x12db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161428u; }
        if (ctx->pc != 0x161428u) { return; }
    }
    ctx->pc = 0x161428u;
    // 0x161428: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x161428u;
    SET_GPR_U32(ctx, 31, 0x161430u);
    ctx->pc = 0x16142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161428u;
            // 0x16142c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161430u; }
        if (ctx->pc != 0x161430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161430u; }
        if (ctx->pc != 0x161430u) { return; }
    }
    ctx->pc = 0x161430u;
    // 0x161430: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161434: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x161434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x161438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16143c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161444: 0x0  nop
    ctx->pc = 0x161444u;
    // NOP
    // 0x161448: 0x46180882  mul.s       $f2, $f1, $f24
    ctx->pc = 0x161448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x16144c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161450: 0x4616b040  add.s       $f1, $f22, $f22
    ctx->pc = 0x161450u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x161454: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x161454u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x161458: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x161458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x16145c: 0x4615a840  add.s       $f1, $f21, $f21
    ctx->pc = 0x16145cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x161460: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x161460u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x161464: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x161464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x161468: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x161468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x16146c: 0x4618b881  sub.s       $f2, $f23, $f24
    ctx->pc = 0x16146cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x161470: 0x4618b840  add.s       $f1, $f23, $f24
    ctx->pc = 0x161470u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x161474: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x161474u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x161478: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x161478u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x16147c: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x16147cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x161480: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x161480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x161484: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x161484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x161488: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x161488u;
    SET_GPR_U32(ctx, 31, 0x161490u);
    ctx->pc = 0x16148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161488u;
            // 0x16148c: 0xae20003c  sw          $zero, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161490u; }
        if (ctx->pc != 0x161490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161490u; }
        if (ctx->pc != 0x161490u) { return; }
    }
    ctx->pc = 0x161490u;
    // 0x161490: 0x461ef802  mul.s       $f0, $f31, $f30
    ctx->pc = 0x161490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[30]);
    // 0x161494: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x161494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x161498: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16149c: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x16149cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1614a0: 0x461df802  mul.s       $f0, $f31, $f29
    ctx->pc = 0x1614a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[31], ctx->f[29]);
    // 0x1614a4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1614a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1614a8: 0x46180843  div.s       $f1, $f1, $f24
    ctx->pc = 0x1614a8u;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[24];
    // 0x1614ac: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x1614acu;
    if (ctx->f[24] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[24];
    // 0x1614b0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1614b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1614b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1614b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1614b8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1614b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1614bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1614bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1614c0: 0x461a0040  add.s       $f1, $f0, $f26
    ctx->pc = 0x1614c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x1614c4: 0x461ac800  add.s       $f0, $f25, $f26
    ctx->pc = 0x1614c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x1614c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1614c8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1614cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1614ccu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1614d0: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1614d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1614d4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1614d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1614d8: 0xe61c0030  swc1        $f28, 0x30($s0)
    ctx->pc = 0x1614d8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1614dc: 0xe61b0034  swc1        $f27, 0x34($s0)
    ctx->pc = 0x1614dcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1614e0: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1614e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1614e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1614e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1614e8: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x1614e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x1614ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1614ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1614f0: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x1614f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x1614f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1614f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1614f8: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1614f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x1614fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1614fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161500: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x161500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x161504: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x161504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x161508: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x161508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x16150c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x16150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x161510: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x161510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x161514: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x161514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x161518: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x161518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16151c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x161520: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x161524: 0x3e00008  jr          $ra
    ctx->pc = 0x161524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161524u;
            // 0x161528: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16152Cu;
}
