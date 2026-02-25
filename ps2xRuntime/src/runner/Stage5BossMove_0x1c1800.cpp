#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage5BossMove
// Address: 0x1c1800 - 0x1c3ad8
void Stage5BossMove_0x1c1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage5BossMove_0x1c1800");
#endif

    ctx->pc = 0x1c1800u;

    // 0x1c1800: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c1800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c1804: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c1804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c1808: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c180c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c1810: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c1810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c1814: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c1818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c181c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c181cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c1820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1824: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c1828: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1c1828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1c182c: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1C182Cu;
    SET_GPR_U32(ctx, 31, 0x1C1834u);
    ctx->pc = 0x1C1830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C182Cu;
            // 0x1c1830: 0xdc25aa50  ld          $a1, -0x55B0($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1834u; }
        if (ctx->pc != 0x1C1834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1834u; }
        if (ctx->pc != 0x1C1834u) { return; }
    }
    ctx->pc = 0x1C1834u;
    // 0x1c1834: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1838: 0xac221c30  sw          $v0, 0x1C30($at)
    ctx->pc = 0x1c1838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7216), GPR_U32(ctx, 2));
    // 0x1c183c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1840: 0x8c241c30  lw          $a0, 0x1C30($at)
    ctx->pc = 0x1c1840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7216)));
    // 0x1c1844: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C1844u;
    SET_GPR_U32(ctx, 31, 0x1C184Cu);
    ctx->pc = 0x1C1848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1844u;
            // 0x1c1848: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C184Cu; }
        if (ctx->pc != 0x1C184Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C184Cu; }
        if (ctx->pc != 0x1C184Cu) { return; }
    }
    ctx->pc = 0x1C184Cu;
    // 0x1c184c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1850: 0xac221c38  sw          $v0, 0x1C38($at)
    ctx->pc = 0x1c1850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7224), GPR_U32(ctx, 2));
    // 0x1c1854: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1858: 0x8c241c30  lw          $a0, 0x1C30($at)
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7216)));
    // 0x1c185c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C185Cu;
    SET_GPR_U32(ctx, 31, 0x1C1864u);
    ctx->pc = 0x1C1860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C185Cu;
            // 0x1c1860: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1864u; }
        if (ctx->pc != 0x1C1864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1864u; }
        if (ctx->pc != 0x1C1864u) { return; }
    }
    ctx->pc = 0x1C1864u;
    // 0x1c1864: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1868: 0xac221c40  sw          $v0, 0x1C40($at)
    ctx->pc = 0x1c1868u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7232), GPR_U32(ctx, 2));
    // 0x1c186c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1870: 0x8c241c30  lw          $a0, 0x1C30($at)
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7216)));
    // 0x1c1874: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C1874u;
    SET_GPR_U32(ctx, 31, 0x1C187Cu);
    ctx->pc = 0x1C1878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1874u;
            // 0x1c1878: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C187Cu; }
        if (ctx->pc != 0x1C187Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C187Cu; }
        if (ctx->pc != 0x1C187Cu) { return; }
    }
    ctx->pc = 0x1C187Cu;
    // 0x1c187c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c187cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1880: 0xac221c48  sw          $v0, 0x1C48($at)
    ctx->pc = 0x1c1880u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7240), GPR_U32(ctx, 2));
    // 0x1c1884: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1888: 0x8c241c30  lw          $a0, 0x1C30($at)
    ctx->pc = 0x1c1888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7216)));
    // 0x1c188c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C188Cu;
    SET_GPR_U32(ctx, 31, 0x1C1894u);
    ctx->pc = 0x1C1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C188Cu;
            // 0x1c1890: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1894u; }
        if (ctx->pc != 0x1C1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1894u; }
        if (ctx->pc != 0x1C1894u) { return; }
    }
    ctx->pc = 0x1C1894u;
    // 0x1c1894: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1898: 0xac221c50  sw          $v0, 0x1C50($at)
    ctx->pc = 0x1c1898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7248), GPR_U32(ctx, 2));
    // 0x1c189c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1c18a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c18a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c18a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c18a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c18a8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c18ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18b0: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c18b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c18b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c18b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c18b8: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1c18b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1c18bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18c0: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1c18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c18c4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c18c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c18c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c18c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c18cc: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1c18ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c18d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18d4: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1c18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c18d8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c18dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c18dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c18e0: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1c18e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1c18e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18e8: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1c18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c18ec: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1c18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c18f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c18f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c18f4: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1c18f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1c18f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c18fc: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c18fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1904: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1904u;
    {
        const bool branch_taken_0x1c1904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1904u;
            // 0x1c1908: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1904) {
            ctx->pc = 0x1C1928u;
            goto label_1c1928;
        }
    }
    ctx->pc = 0x1C190Cu;
    // 0x1c190c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c1910: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c1910u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c1914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1918: 0x0  nop
    ctx->pc = 0x1c1918u;
    // NOP
    // 0x1c191c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c191cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1920: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c1920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c1924: 0x0  nop
    ctx->pc = 0x1c1924u;
    // NOP
label_1c1928:
    // 0x1c1928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c192c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c1930: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c1930u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c1934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1938: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1c1938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c193c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c193cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1940: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1940u;
    {
        const bool branch_taken_0x1c1940 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1940u;
            // 0x1c1944: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1940) {
            ctx->pc = 0x1C1960u;
            goto label_1c1960;
        }
    }
    ctx->pc = 0x1C1948u;
    // 0x1c1948: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c1948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c194c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c194cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c1950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1954: 0x0  nop
    ctx->pc = 0x1c1954u;
    // NOP
    // 0x1c1958: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c195c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c195cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c1960:
    // 0x1c1960: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1964: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1c1968: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c1968u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c196c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c196cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1970: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1978: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1978u;
    {
        const bool branch_taken_0x1c1978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1978u;
            // 0x1c197c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1978) {
            ctx->pc = 0x1C1998u;
            goto label_1c1998;
        }
    }
    ctx->pc = 0x1C1980u;
    // 0x1c1980: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c1984: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c1984u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c1988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c198c: 0x0  nop
    ctx->pc = 0x1c198cu;
    // NOP
    // 0x1c1990: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1994: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c1994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c1998:
    // 0x1c1998: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c1998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c199c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c19a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c19a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c19a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c19a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c19a8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c19a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c19ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c19acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c19b0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C19B0u;
    {
        const bool branch_taken_0x1c19b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C19B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19B0u;
            // 0x1c19b4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19b0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C19B8u;
    // 0x1c19b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c19bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c19bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c19c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c19c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c19c4: 0x0  nop
    ctx->pc = 0x1c19c4u;
    // NOP
    // 0x1c19c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c19c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c19cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c19ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c19d0:
    // 0x1c19d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c19d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c19d4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c19d8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c19dc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c19dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c19e0: 0xc071024  jal         func_1C4090
    ctx->pc = 0x1C19E0u;
    SET_GPR_U32(ctx, 31, 0x1C19E8u);
    ctx->pc = 0x1C19E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19E0u;
            // 0x1c19e4: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4090u;
    if (runtime->hasFunction(0x1C4090u)) {
        auto targetFn = runtime->lookupFunction(0x1C4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19E8u; }
        if (ctx->pc != 0x1C19E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19E8u; }
        if (ctx->pc != 0x1C19E8u) { return; }
    }
    ctx->pc = 0x1C19E8u;
    // 0x1c19e8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c19ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19f0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1c19f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1c19f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c19f8: 0xc05b994  jal         func_16E650
    ctx->pc = 0x1C19F8u;
    SET_GPR_U32(ctx, 31, 0x1C1A00u);
    ctx->pc = 0x1C19FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19F8u;
            // 0x1c19fc: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E650u;
    if (runtime->hasFunction(0x16E650u)) {
        auto targetFn = runtime->lookupFunction(0x16E650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A00u; }
        if (ctx->pc != 0x1C1A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_DeadEnd_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A00u; }
        if (ctx->pc != 0x1C1A00u) { return; }
    }
    ctx->pc = 0x1C1A00u;
    // 0x1c1a00: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c1a04: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x1c1a08: 0x10200707  beqz        $at, . + 4 + (0x707 << 2)
    ctx->pc = 0x1C1A08u;
    {
        const bool branch_taken_0x1c1a08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A08u;
            // 0x1c1a0c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a08) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C1A10u;
    // 0x1c1a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1a14: 0x24632b60  addiu       $v1, $v1, 0x2B60
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11104));
    // 0x1c1a18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1a20: 0x400008  jr          $v0
    ctx->pc = 0x1C1A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1A28u: goto label_1c1a28;
            case 0x1C1AB0u: goto label_1c1ab0;
            case 0x1C2058u: goto label_1c2058;
            case 0x1C2458u: goto label_1c2458;
            case 0x1C24B0u: goto label_1c24b0;
            case 0x1C2890u: goto label_1c2890;
            case 0x1C2F00u: goto label_1c2f00;
            case 0x1C3430u: goto label_1c3430;
            case 0x1C3578u: goto label_1c3578;
            case 0x1C35E8u: goto label_1c35e8;
            case 0x1C3628u: goto label_1c3628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1A28u;
label_1c1a28:
    // 0x1c1a28: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c1a2c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1a30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1a30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1a38: 0x0  nop
    ctx->pc = 0x1c1a38u;
    // NOP
    // 0x1c1a3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1a40: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1A40u;
    {
        const bool branch_taken_0x1c1a40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A40u;
            // 0x1c1a44: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a40) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C1A48u;
    // 0x1c1a48: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c1a48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1c1a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1a50: 0x0  nop
    ctx->pc = 0x1c1a50u;
    // NOP
    // 0x1c1a54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c1a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1a58: 0x100006f3  b           . + 4 + (0x6F3 << 2)
    ctx->pc = 0x1C1A58u;
    {
        const bool branch_taken_0x1c1a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A58u;
            // 0x1c1a5c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a58) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C1A60u;
label_1c1a60:
    // 0x1c1a60: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C1A60u;
    SET_GPR_U32(ctx, 31, 0x1C1A68u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A68u; }
        if (ctx->pc != 0x1C1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A68u; }
        if (ctx->pc != 0x1C1A68u) { return; }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c1a6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c1a6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c1a70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1a74: 0x0  nop
    ctx->pc = 0x1c1a74u;
    // NOP
    // 0x1c1a78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c1a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1a7c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A84u);
    ctx->pc = 0x1C1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A7Cu;
            // 0x1c1a80: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A84u; }
        if (ctx->pc != 0x1C1A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A84u; }
        if (ctx->pc != 0x1C1A84u) { return; }
    }
    ctx->pc = 0x1C1A84u;
    // 0x1c1a84: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c1a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c1a8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c1a90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c1a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1a94: 0x0  nop
    ctx->pc = 0x1c1a94u;
    // NOP
    // 0x1c1a98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c1a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c1a9c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c1a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c1aa0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c1aa4: 0x100006e0  b           . + 4 + (0x6E0 << 2)
    ctx->pc = 0x1C1AA4u;
    {
        const bool branch_taken_0x1c1aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AA4u;
            // 0x1c1aa8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1aa4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C1AACu;
    // 0x1c1aac: 0x0  nop
    ctx->pc = 0x1c1aacu;
    // NOP
label_1c1ab0:
    // 0x1c1ab0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c1ab4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c1ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1ab8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1ab8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1ac0: 0x0  nop
    ctx->pc = 0x1c1ac0u;
    // NOP
    // 0x1c1ac4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1ac8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1AC8u;
    {
        const bool branch_taken_0x1c1ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AC8u;
            // 0x1c1acc: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ac8) {
            ctx->pc = 0x1C1B20u;
            goto label_1c1b20;
        }
    }
    ctx->pc = 0x1C1AD0u;
    // 0x1c1ad0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1ad0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1ad8: 0x0  nop
    ctx->pc = 0x1c1ad8u;
    // NOP
    // 0x1c1adc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1ae0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1C1AE0u;
    {
        const bool branch_taken_0x1c1ae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AE0u;
            // 0x1c1ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ae0) {
            ctx->pc = 0x1C1B20u;
            goto label_1c1b20;
        }
    }
    ctx->pc = 0x1C1AE8u;
    // 0x1c1ae8: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C1AE8u;
    SET_GPR_U32(ctx, 31, 0x1C1AF0u);
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AF0u; }
        if (ctx->pc != 0x1C1AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1AF0u; }
        if (ctx->pc != 0x1C1AF0u) { return; }
    }
    ctx->pc = 0x1C1AF0u;
    // 0x1c1af0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1af4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1af8: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c1af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c1afc: 0xc065590  jal         func_195640
    ctx->pc = 0x1C1AFCu;
    SET_GPR_U32(ctx, 31, 0x1C1B04u);
    ctx->pc = 0x1C1B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1AFCu;
            // 0x1c1b00: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B04u; }
        if (ctx->pc != 0x1C1B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B04u; }
        if (ctx->pc != 0x1C1B04u) { return; }
    }
    ctx->pc = 0x1C1B04u;
    // 0x1c1b04: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1b08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1b0c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c1b10: 0xc065590  jal         func_195640
    ctx->pc = 0x1C1B10u;
    SET_GPR_U32(ctx, 31, 0x1C1B18u);
    ctx->pc = 0x1C1B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B10u;
            // 0x1c1b14: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B18u; }
        if (ctx->pc != 0x1C1B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B18u; }
        if (ctx->pc != 0x1C1B18u) { return; }
    }
    ctx->pc = 0x1C1B18u;
    // 0x1c1b18: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C1B18u;
    {
        const bool branch_taken_0x1c1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b18) {
            ctx->pc = 0x1C1BB8u;
            goto label_1c1bb8;
        }
    }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c1b24: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c1b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1b28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1b28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1b30: 0x0  nop
    ctx->pc = 0x1c1b30u;
    // NOP
    // 0x1c1b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b38: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C1B38u;
    {
        const bool branch_taken_0x1c1b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B38u;
            // 0x1c1b3c: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b38) {
            ctx->pc = 0x1C1B90u;
            goto label_1c1b90;
        }
    }
    ctx->pc = 0x1C1B40u;
    // 0x1c1b40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1b40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1b48: 0x0  nop
    ctx->pc = 0x1c1b48u;
    // NOP
    // 0x1c1b4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1b4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1b50: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1C1B50u;
    {
        const bool branch_taken_0x1c1b50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B50u;
            // 0x1c1b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b50) {
            ctx->pc = 0x1C1B90u;
            goto label_1c1b90;
        }
    }
    ctx->pc = 0x1C1B58u;
    // 0x1c1b58: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C1B58u;
    SET_GPR_U32(ctx, 31, 0x1C1B60u);
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B60u; }
        if (ctx->pc != 0x1C1B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B60u; }
        if (ctx->pc != 0x1C1B60u) { return; }
    }
    ctx->pc = 0x1C1B60u;
    // 0x1c1b60: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1b68: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c1b6c: 0xc065590  jal         func_195640
    ctx->pc = 0x1C1B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B74u);
    ctx->pc = 0x1C1B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B6Cu;
            // 0x1c1b70: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B74u; }
        if (ctx->pc != 0x1C1B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B74u; }
        if (ctx->pc != 0x1C1B74u) { return; }
    }
    ctx->pc = 0x1C1B74u;
    // 0x1c1b74: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1b78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1b7c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c1b80: 0xc065590  jal         func_195640
    ctx->pc = 0x1C1B80u;
    SET_GPR_U32(ctx, 31, 0x1C1B88u);
    ctx->pc = 0x1C1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1B80u;
            // 0x1c1b84: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B88u; }
        if (ctx->pc != 0x1C1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1B88u; }
        if (ctx->pc != 0x1C1B88u) { return; }
    }
    ctx->pc = 0x1C1B88u;
    // 0x1c1b88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C1B88u;
    {
        const bool branch_taken_0x1c1b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b88) {
            ctx->pc = 0x1C1BB8u;
            goto label_1c1bb8;
        }
    }
    ctx->pc = 0x1C1B90u;
label_1c1b90:
    // 0x1c1b90: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1c1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1c1b94: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c1b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1b98: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c1b98u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1c1b9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c1b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1ba0: 0x0  nop
    ctx->pc = 0x1c1ba0u;
    // NOP
    // 0x1c1ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c1ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c1ba8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c1ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c1bac: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1bb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c1bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c1bb4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c1bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1c1bb8:
    // 0x1c1bb8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1bbc: 0x8c221c38  lw          $v0, 0x1C38($at)
    ctx->pc = 0x1c1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7224)));
    // 0x1c1bc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c1bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1bc4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1bc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1bcc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1BCCu;
    {
        const bool branch_taken_0x1c1bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BCCu;
            // 0x1c1bd0: 0x24430014  addiu       $v1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bcc) {
            ctx->pc = 0x1C1BF0u;
            goto label_1c1bf0;
        }
    }
    ctx->pc = 0x1C1BD4u;
    // 0x1c1bd4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c1bd8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1bd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1be0: 0x0  nop
    ctx->pc = 0x1c1be0u;
    // NOP
    // 0x1c1be4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c1be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c1be8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c1be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c1bec: 0x0  nop
    ctx->pc = 0x1c1becu;
    // NOP
label_1c1bf0:
    // 0x1c1bf0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c1bf4: 0x8c221c40  lw          $v0, 0x1C40($at)
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7232)));
    // 0x1c1bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c1bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1bfc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c1bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1c04: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1C04u;
    {
        const bool branch_taken_0x1c1c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C04u;
            // 0x1c1c08: 0x24430014  addiu       $v1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c04) {
            ctx->pc = 0x1C1C28u;
            goto label_1c1c28;
        }
    }
    ctx->pc = 0x1C1C0Cu;
    // 0x1c1c0c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c1c10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c1c10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c1c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1c18: 0x0  nop
    ctx->pc = 0x1c1c18u;
    // NOP
    // 0x1c1c1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c1c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c1c20: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c1c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c1c24: 0x0  nop
    ctx->pc = 0x1c1c24u;
    // NOP
label_1c1c28:
    // 0x1c1c28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1c2c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c1c30: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c1c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1c34: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c1c38: 0xc071024  jal         func_1C4090
    ctx->pc = 0x1C1C38u;
    SET_GPR_U32(ctx, 31, 0x1C1C40u);
    ctx->pc = 0x1C1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C38u;
            // 0x1c1c3c: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4090u;
    if (runtime->hasFunction(0x1C4090u)) {
        auto targetFn = runtime->lookupFunction(0x1C4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C40u; }
        if (ctx->pc != 0x1C1C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C40u; }
        if (ctx->pc != 0x1C1C40u) { return; }
    }
    ctx->pc = 0x1C1C40u;
    // 0x1c1c40: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1c44: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1c1c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1c1c48: 0x142000f7  bnez        $at, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1C1C48u;
    {
        const bool branch_taken_0x1c1c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c48) {
            ctx->pc = 0x1C2028u;
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C1C50u;
    // 0x1c1c50: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C1C50u;
    SET_GPR_U32(ctx, 31, 0x1C1C58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C58u; }
        if (ctx->pc != 0x1C1C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C58u; }
        if (ctx->pc != 0x1C1C58u) { return; }
    }
    ctx->pc = 0x1C1C58u;
    // 0x1c1c58: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c1c58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1c5c: 0x14200050  bnez        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x1C1C5Cu;
    {
        const bool branch_taken_0x1c1c5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c5c) {
            ctx->pc = 0x1C1DA0u;
            goto label_1c1da0;
        }
    }
    ctx->pc = 0x1C1C64u;
    // 0x1c1c64: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1C64u;
    SET_GPR_U32(ctx, 31, 0x1C1C6Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C6Cu; }
        if (ctx->pc != 0x1C1C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C6Cu; }
        if (ctx->pc != 0x1C1C6Cu) { return; }
    }
    ctx->pc = 0x1C1C6Cu;
    // 0x1c1c6c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1c70: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1c74: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1c74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1c78: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1c7c: 0x0  nop
    ctx->pc = 0x1c1c7cu;
    // NOP
    // 0x1c1c80: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1c80u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1c84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c1c88: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c1c88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1c8c: 0x0  nop
    ctx->pc = 0x1c1c8cu;
    // NOP
    // 0x1c1c90: 0x0  nop
    ctx->pc = 0x1c1c90u;
    // NOP
    // 0x1c1c94: 0x1010  mfhi        $v0
    ctx->pc = 0x1c1c94u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c1c98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1C98u;
    {
        const bool branch_taken_0x1c1c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C98u;
            // 0x1c1c9c: 0x853023  subu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c98) {
            ctx->pc = 0x1C1CC0u;
            goto label_1c1cc0;
        }
    }
    ctx->pc = 0x1C1CA0u;
    // 0x1c1ca0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1ca4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1ca8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1cac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1cb0: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c1cb4: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1CB4u;
    SET_GPR_U32(ctx, 31, 0x1C1CBCu);
    ctx->pc = 0x1C1CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CB4u;
            // 0x1c1cb8: 0x2445005a  addiu       $a1, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CBCu; }
        if (ctx->pc != 0x1C1CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CBCu; }
        if (ctx->pc != 0x1C1CBCu) { return; }
    }
    ctx->pc = 0x1C1CBCu;
    // 0x1c1cbc: 0x0  nop
    ctx->pc = 0x1c1cbcu;
    // NOP
label_1c1cc0:
    // 0x1c1cc0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1CC0u;
    SET_GPR_U32(ctx, 31, 0x1C1CC8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CC8u; }
        if (ctx->pc != 0x1C1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CC8u; }
        if (ctx->pc != 0x1C1CC8u) { return; }
    }
    ctx->pc = 0x1C1CC8u;
    // 0x1c1cc8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1ccc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1cd0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1cd0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1cd4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1cd8: 0x0  nop
    ctx->pc = 0x1c1cd8u;
    // NOP
    // 0x1c1cdc: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1cdcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1ce0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c1ce4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c1ce4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1ce8: 0x0  nop
    ctx->pc = 0x1c1ce8u;
    // NOP
    // 0x1c1cec: 0x0  nop
    ctx->pc = 0x1c1cecu;
    // NOP
    // 0x1c1cf0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c1cf4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1CF4u;
    {
        const bool branch_taken_0x1c1cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CF4u;
            // 0x1c1cf8: 0x853023  subu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf4) {
            ctx->pc = 0x1C1D18u;
            goto label_1c1d18;
        }
    }
    ctx->pc = 0x1C1CFCu;
    // 0x1c1cfc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1d00: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1d08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1d0c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c1d10: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1D10u;
    SET_GPR_U32(ctx, 31, 0x1C1D18u);
    ctx->pc = 0x1C1D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D10u;
            // 0x1c1d14: 0x2445005a  addiu       $a1, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D18u; }
        if (ctx->pc != 0x1C1D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D18u; }
        if (ctx->pc != 0x1C1D18u) { return; }
    }
    ctx->pc = 0x1C1D18u;
label_1c1d18:
    // 0x1c1d18: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1D18u;
    SET_GPR_U32(ctx, 31, 0x1C1D20u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D20u; }
        if (ctx->pc != 0x1C1D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D20u; }
        if (ctx->pc != 0x1C1D20u) { return; }
    }
    ctx->pc = 0x1C1D20u;
    // 0x1c1d20: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c1d24: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c1d28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1d28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1d2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1d30: 0x0  nop
    ctx->pc = 0x1c1d30u;
    // NOP
    // 0x1c1d34: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1d34u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1d38: 0x858823  subu        $s1, $a0, $a1
    ctx->pc = 0x1c1d38u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c1d3c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D3Cu;
    {
        const bool branch_taken_0x1c1d3c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D3Cu;
            // 0x1c1d40: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d3c) {
            ctx->pc = 0x1C1D50u;
            goto label_1c1d50;
        }
    }
    ctx->pc = 0x1C1D44u;
    // 0x1c1d44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1D44u;
    {
        const bool branch_taken_0x1c1d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d44) {
            ctx->pc = 0x1C1D50u;
            goto label_1c1d50;
        }
    }
    ctx->pc = 0x1C1D4Cu;
    // 0x1c1d4c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1c1d50:
    // 0x1c1d50: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1C1D50u;
    {
        const bool branch_taken_0x1c1d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d50) {
            ctx->pc = 0x1C2028u;
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C1D58u;
    // 0x1c1d58: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c1d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1d5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1d60: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c1d64: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c1d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c1d68: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1c1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1c1d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1d70: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C1D70u;
    SET_GPR_U32(ctx, 31, 0x1C1D78u);
    ctx->pc = 0x1C1D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D70u;
            // 0x1c1d74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D78u; }
        if (ctx->pc != 0x1C1D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D78u; }
        if (ctx->pc != 0x1C1D78u) { return; }
    }
    ctx->pc = 0x1C1D78u;
    // 0x1c1d78: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1d7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1d80: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1d84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1d88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c1d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d8c: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D94u);
    ctx->pc = 0x1C1D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D8Cu;
            // 0x1c1d90: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D94u; }
        if (ctx->pc != 0x1C1D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D94u; }
        if (ctx->pc != 0x1C1D94u) { return; }
    }
    ctx->pc = 0x1C1D94u;
    // 0x1c1d94: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x1C1D94u;
    {
        const bool branch_taken_0x1c1d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d94) {
            ctx->pc = 0x1C2028u;
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C1D9Cu;
    // 0x1c1d9c: 0x0  nop
    ctx->pc = 0x1c1d9cu;
    // NOP
label_1c1da0:
    // 0x1c1da0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C1DA0u;
    SET_GPR_U32(ctx, 31, 0x1C1DA8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DA8u; }
        if (ctx->pc != 0x1C1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DA8u; }
        if (ctx->pc != 0x1C1DA8u) { return; }
    }
    ctx->pc = 0x1C1DA8u;
    // 0x1c1da8: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C1DA8u;
    {
        const bool branch_taken_0x1c1da8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c1da8) {
            ctx->pc = 0x1C1EF0u;
            goto label_1c1ef0;
        }
    }
    ctx->pc = 0x1C1DB0u;
    // 0x1c1db0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1DB0u;
    SET_GPR_U32(ctx, 31, 0x1C1DB8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DB8u; }
        if (ctx->pc != 0x1C1DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DB8u; }
        if (ctx->pc != 0x1C1DB8u) { return; }
    }
    ctx->pc = 0x1C1DB8u;
    // 0x1c1db8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1dbc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1dc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1dc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1dc4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1dc8: 0x0  nop
    ctx->pc = 0x1c1dc8u;
    // NOP
    // 0x1c1dcc: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1dccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1dd0: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c1dd4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1DD4u;
    {
        const bool branch_taken_0x1c1dd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DD4u;
            // 0x1c1dd8: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dd4) {
            ctx->pc = 0x1C1DE8u;
            goto label_1c1de8;
        }
    }
    ctx->pc = 0x1C1DDCu;
    // 0x1c1ddc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1DDCu;
    {
        const bool branch_taken_0x1c1ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ddc) {
            ctx->pc = 0x1C1DE8u;
            goto label_1c1de8;
        }
    }
    ctx->pc = 0x1C1DE4u;
    // 0x1c1de4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1c1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c1de8:
    // 0x1c1de8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1DE8u;
    {
        const bool branch_taken_0x1c1de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1de8) {
            ctx->pc = 0x1C1E10u;
            goto label_1c1e10;
        }
    }
    ctx->pc = 0x1C1DF0u;
    // 0x1c1df0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1df4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1df8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1dfc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1e00: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c1e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c1e04: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1E04u;
    SET_GPR_U32(ctx, 31, 0x1C1E0Cu);
    ctx->pc = 0x1C1E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E04u;
            // 0x1c1e08: 0x2445005a  addiu       $a1, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E0Cu; }
        if (ctx->pc != 0x1C1E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E0Cu; }
        if (ctx->pc != 0x1C1E0Cu) { return; }
    }
    ctx->pc = 0x1C1E0Cu;
    // 0x1c1e0c: 0x0  nop
    ctx->pc = 0x1c1e0cu;
    // NOP
label_1c1e10:
    // 0x1c1e10: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1E10u;
    SET_GPR_U32(ctx, 31, 0x1C1E18u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E18u; }
        if (ctx->pc != 0x1C1E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E18u; }
        if (ctx->pc != 0x1C1E18u) { return; }
    }
    ctx->pc = 0x1C1E18u;
    // 0x1c1e18: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1e1c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1e20: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1e20u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1e24: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1e28: 0x0  nop
    ctx->pc = 0x1c1e28u;
    // NOP
    // 0x1c1e2c: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1e2cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1e30: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c1e34: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1E34u;
    {
        const bool branch_taken_0x1c1e34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E34u;
            // 0x1c1e38: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e34) {
            ctx->pc = 0x1C1E48u;
            goto label_1c1e48;
        }
    }
    ctx->pc = 0x1C1E3Cu;
    // 0x1c1e3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1E3Cu;
    {
        const bool branch_taken_0x1c1e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e3c) {
            ctx->pc = 0x1C1E48u;
            goto label_1c1e48;
        }
    }
    ctx->pc = 0x1C1E44u;
    // 0x1c1e44: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1c1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c1e48:
    // 0x1c1e48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1E48u;
    {
        const bool branch_taken_0x1c1e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e48) {
            ctx->pc = 0x1C1E70u;
            goto label_1c1e70;
        }
    }
    ctx->pc = 0x1C1E50u;
    // 0x1c1e50: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1e54: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1e58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1e5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1e60: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c1e64: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1E64u;
    SET_GPR_U32(ctx, 31, 0x1C1E6Cu);
    ctx->pc = 0x1C1E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E64u;
            // 0x1c1e68: 0x2445005a  addiu       $a1, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E6Cu; }
        if (ctx->pc != 0x1C1E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E6Cu; }
        if (ctx->pc != 0x1C1E6Cu) { return; }
    }
    ctx->pc = 0x1C1E6Cu;
    // 0x1c1e6c: 0x0  nop
    ctx->pc = 0x1c1e6cu;
    // NOP
label_1c1e70:
    // 0x1c1e70: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1E70u;
    SET_GPR_U32(ctx, 31, 0x1C1E78u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E78u; }
        if (ctx->pc != 0x1C1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E78u; }
        if (ctx->pc != 0x1C1E78u) { return; }
    }
    ctx->pc = 0x1C1E78u;
    // 0x1c1e78: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1c1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c1e7c: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1c1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c1e80: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1e80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1e84: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1e88: 0x0  nop
    ctx->pc = 0x1c1e88u;
    // NOP
    // 0x1c1e8c: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1e8cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1e90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c1e94: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c1e94u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1e98: 0x0  nop
    ctx->pc = 0x1c1e98u;
    // NOP
    // 0x1c1e9c: 0x0  nop
    ctx->pc = 0x1c1e9cu;
    // NOP
    // 0x1c1ea0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c1ea4: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1C1EA4u;
    {
        const bool branch_taken_0x1c1ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EA4u;
            // 0x1c1ea8: 0x858823  subu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ea4) {
            ctx->pc = 0x1C2028u;
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C1EACu;
    // 0x1c1eac: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c1eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1eb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1eb4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c1eb8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c1eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c1ebc: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1c1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1c1ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1ec4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C1EC4u;
    SET_GPR_U32(ctx, 31, 0x1C1ECCu);
    ctx->pc = 0x1C1EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EC4u;
            // 0x1c1ec8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ECCu; }
        if (ctx->pc != 0x1C1ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1ECCu; }
        if (ctx->pc != 0x1C1ECCu) { return; }
    }
    ctx->pc = 0x1C1ECCu;
    // 0x1c1ecc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1ed0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c1ed4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1ed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1edc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c1edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ee0: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1EE0u;
    SET_GPR_U32(ctx, 31, 0x1C1EE8u);
    ctx->pc = 0x1C1EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EE0u;
            // 0x1c1ee4: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EE8u; }
        if (ctx->pc != 0x1C1EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EE8u; }
        if (ctx->pc != 0x1C1EE8u) { return; }
    }
    ctx->pc = 0x1C1EE8u;
    // 0x1c1ee8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C1EE8u;
    {
        const bool branch_taken_0x1c1ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ee8) {
            ctx->pc = 0x1C2028u;
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C1EF0u;
label_1c1ef0:
    // 0x1c1ef0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1EF0u;
    SET_GPR_U32(ctx, 31, 0x1C1EF8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EF8u; }
        if (ctx->pc != 0x1C1EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EF8u; }
        if (ctx->pc != 0x1C1EF8u) { return; }
    }
    ctx->pc = 0x1C1EF8u;
    // 0x1c1ef8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1efc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c1efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1f00: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1f00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1f04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1f08: 0x0  nop
    ctx->pc = 0x1c1f08u;
    // NOP
    // 0x1c1f0c: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1f0cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1f10: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1c1f10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c1f14: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1F14u;
    {
        const bool branch_taken_0x1c1f14 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F14u;
            // 0x1c1f18: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f14) {
            ctx->pc = 0x1C1F28u;
            goto label_1c1f28;
        }
    }
    ctx->pc = 0x1C1F1Cu;
    // 0x1c1f1c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1F1Cu;
    {
        const bool branch_taken_0x1c1f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f1c) {
            ctx->pc = 0x1C1F28u;
            goto label_1c1f28;
        }
    }
    ctx->pc = 0x1C1F24u;
    // 0x1c1f24: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1c1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1c1f28:
    // 0x1c1f28: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1F28u;
    {
        const bool branch_taken_0x1c1f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f28) {
            ctx->pc = 0x1C1F50u;
            goto label_1c1f50;
        }
    }
    ctx->pc = 0x1C1F30u;
    // 0x1c1f30: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1f34: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1f38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1f3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1f40: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c1f44: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1F44u;
    SET_GPR_U32(ctx, 31, 0x1C1F4Cu);
    ctx->pc = 0x1C1F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F44u;
            // 0x1c1f48: 0x2445005a  addiu       $a1, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F4Cu; }
        if (ctx->pc != 0x1C1F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F4Cu; }
        if (ctx->pc != 0x1C1F4Cu) { return; }
    }
    ctx->pc = 0x1C1F4Cu;
    // 0x1c1f4c: 0x0  nop
    ctx->pc = 0x1c1f4cu;
    // NOP
label_1c1f50:
    // 0x1c1f50: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1F50u;
    SET_GPR_U32(ctx, 31, 0x1C1F58u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F58u; }
        if (ctx->pc != 0x1C1F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F58u; }
        if (ctx->pc != 0x1C1F58u) { return; }
    }
    ctx->pc = 0x1C1F58u;
    // 0x1c1f58: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1c1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c1f5c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c1f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c1f60: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1f60u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1f64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1f68: 0x0  nop
    ctx->pc = 0x1c1f68u;
    // NOP
    // 0x1c1f6c: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1f6cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1f70: 0x853023  subu        $a2, $a0, $a1
    ctx->pc = 0x1c1f70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c1f74: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1F74u;
    {
        const bool branch_taken_0x1c1f74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F74u;
            // 0x1c1f78: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f74) {
            ctx->pc = 0x1C1F88u;
            goto label_1c1f88;
        }
    }
    ctx->pc = 0x1C1F7Cu;
    // 0x1c1f7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1F7Cu;
    {
        const bool branch_taken_0x1c1f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f7c) {
            ctx->pc = 0x1C1F88u;
            goto label_1c1f88;
        }
    }
    ctx->pc = 0x1C1F84u;
    // 0x1c1f84: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1c1f88:
    // 0x1c1f88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1F88u;
    {
        const bool branch_taken_0x1c1f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f88) {
            ctx->pc = 0x1C1FB0u;
            goto label_1c1fb0;
        }
    }
    ctx->pc = 0x1C1F90u;
    // 0x1c1f90: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c1f94: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c1f98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1f9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1fa0: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c1fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c1fa4: 0xc065480  jal         func_195200
    ctx->pc = 0x1C1FA4u;
    SET_GPR_U32(ctx, 31, 0x1C1FACu);
    ctx->pc = 0x1C1FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FA4u;
            // 0x1c1fa8: 0x2445005a  addiu       $a1, $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FACu; }
        if (ctx->pc != 0x1C1FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FACu; }
        if (ctx->pc != 0x1C1FACu) { return; }
    }
    ctx->pc = 0x1C1FACu;
    // 0x1c1fac: 0x0  nop
    ctx->pc = 0x1c1facu;
    // NOP
label_1c1fb0:
    // 0x1c1fb0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C1FB0u;
    SET_GPR_U32(ctx, 31, 0x1C1FB8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FB8u; }
        if (ctx->pc != 0x1C1FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FB8u; }
        if (ctx->pc != 0x1C1FB8u) { return; }
    }
    ctx->pc = 0x1C1FB8u;
    // 0x1c1fb8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1c1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c1fbc: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1c1fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1c1fc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1fc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c1fc4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c1fc8: 0x0  nop
    ctx->pc = 0x1c1fc8u;
    // NOP
    // 0x1c1fcc: 0x2810  mfhi        $a1
    ctx->pc = 0x1c1fccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c1fd0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c1fd4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c1fd4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1fd8: 0x0  nop
    ctx->pc = 0x1c1fd8u;
    // NOP
    // 0x1c1fdc: 0x0  nop
    ctx->pc = 0x1c1fdcu;
    // NOP
    // 0x1c1fe0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c1fe0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c1fe4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C1FE4u;
    {
        const bool branch_taken_0x1c1fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FE4u;
            // 0x1c1fe8: 0x858823  subu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fe4) {
            ctx->pc = 0x1C2028u;
            goto label_1c2028;
        }
    }
    ctx->pc = 0x1C1FECu;
    // 0x1c1fec: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c1fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1ff0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c1ff4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c1ff8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c1ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c1ffc: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1c2000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2004: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2004u;
    SET_GPR_U32(ctx, 31, 0x1C200Cu);
    ctx->pc = 0x1C2008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2004u;
            // 0x1c2008: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C200Cu; }
        if (ctx->pc != 0x1C200Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C200Cu; }
        if (ctx->pc != 0x1C200Cu) { return; }
    }
    ctx->pc = 0x1C200Cu;
    // 0x1c200c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2010: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2014: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2018: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c2018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c201c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c201cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2020: 0xc065480  jal         func_195200
    ctx->pc = 0x1C2020u;
    SET_GPR_U32(ctx, 31, 0x1C2028u);
    ctx->pc = 0x1C2024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2020u;
            // 0x1c2024: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2028u; }
        if (ctx->pc != 0x1C2028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2028u; }
        if (ctx->pc != 0x1C2028u) { return; }
    }
    ctx->pc = 0x1C2028u;
label_1c2028:
    // 0x1c2028: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c202c: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x1c202cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1c2030: 0x1420057d  bnez        $at, . + 4 + (0x57D << 2)
    ctx->pc = 0x1C2030u;
    {
        const bool branch_taken_0x1c2030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2030) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2038u;
    // 0x1c2038: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c2038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c203c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2040: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x1c2040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2044: 0xc070f88  jal         func_1C3E20
    ctx->pc = 0x1C2044u;
    SET_GPR_U32(ctx, 31, 0x1C204Cu);
    ctx->pc = 0x1C2048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2044u;
            // 0x1c2048: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E20u;
    if (runtime->hasFunction(0x1C3E20u)) {
        auto targetFn = runtime->lookupFunction(0x1C3E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C204Cu; }
        if (ctx->pc != 0x1C204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get5BossNextStep_0x1c3e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C204Cu; }
        if (ctx->pc != 0x1C204Cu) { return; }
    }
    ctx->pc = 0x1C204Cu;
    // 0x1c204c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c204cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c2050: 0x10000575  b           . + 4 + (0x575 << 2)
    ctx->pc = 0x1C2050u;
    {
        const bool branch_taken_0x1c2050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2050u;
            // 0x1c2054: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2050) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2058u;
label_1c2058:
    // 0x1c2058: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c2058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c205c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2060: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c2060u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c2064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2068: 0x0  nop
    ctx->pc = 0x1c2068u;
    // NOP
    // 0x1c206c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c206cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c2070: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c2070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c2074: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2078: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c2078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c207c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c2080: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c2084: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x1c2084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c2088: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1C2088u;
    {
        const bool branch_taken_0x1c2088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C208Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2088u;
            // 0x1c208c: 0x28610064  slti        $at, $v1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2088) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C2090u;
    // 0x1c2090: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1C2090u;
    {
        const bool branch_taken_0x1c2090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2090) {
            ctx->pc = 0x1C20D0u;
            goto label_1c20d0;
        }
    }
    ctx->pc = 0x1C2098u;
    // 0x1c2098: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c209c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c209cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c20a0: 0x8c231c48  lw          $v1, 0x1C48($at)
    ctx->pc = 0x1c20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7240)));
    // 0x1c20a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c20a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c20a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c20a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c20ac: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1c20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c20b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c20b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c20b8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1c20b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1c20bc: 0x8c221c50  lw          $v0, 0x1C50($at)
    ctx->pc = 0x1c20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7248)));
    // 0x1c20c0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c20c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c20c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c20c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1C20C8u;
    {
        const bool branch_taken_0x1c20c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20C8u;
            // 0x1c20cc: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20c8) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C20D0u;
label_1c20d0:
    // 0x1c20d0: 0x28610096  slti        $at, $v1, 0x96
    ctx->pc = 0x1c20d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1c20d4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1C20D4u;
    {
        const bool branch_taken_0x1c20d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20D4u;
            // 0x1c20d8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d4) {
            ctx->pc = 0x1C2110u;
            goto label_1c2110;
        }
    }
    ctx->pc = 0x1C20DCu;
    // 0x1c20dc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c20e0: 0x8c231c48  lw          $v1, 0x1C48($at)
    ctx->pc = 0x1c20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7240)));
    // 0x1c20e4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c20e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c20e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c20e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c20ec: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1c20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c20f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c20f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c20f8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1c20f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1c20fc: 0x8c221c50  lw          $v0, 0x1C50($at)
    ctx->pc = 0x1c20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7248)));
    // 0x1c2100: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c2100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2108: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1C2108u;
    {
        const bool branch_taken_0x1c2108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C210Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2108u;
            // 0x1c210c: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2108) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C2110u;
label_1c2110:
    // 0x1c2110: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x1c2110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c2114: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2114u;
    {
        const bool branch_taken_0x1c2114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2114u;
            // 0x1c2118: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2114) {
            ctx->pc = 0x1C2150u;
            goto label_1c2150;
        }
    }
    ctx->pc = 0x1C211Cu;
    // 0x1c211c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c2120: 0x8c231c48  lw          $v1, 0x1C48($at)
    ctx->pc = 0x1c2120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7240)));
    // 0x1c2124: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c2124u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c2128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c212c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1c212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2130: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c2134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2138: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1c2138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1c213c: 0x8c221c50  lw          $v0, 0x1C50($at)
    ctx->pc = 0x1c213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7248)));
    // 0x1c2140: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c2140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2144: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c2144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c2148: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C2148u;
    {
        const bool branch_taken_0x1c2148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2148u;
            // 0x1c214c: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2148) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C2150u;
label_1c2150:
    // 0x1c2150: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1c2150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x1c2154: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2154u;
    {
        const bool branch_taken_0x1c2154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2154u;
            // 0x1c2158: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2154) {
            ctx->pc = 0x1C2190u;
            goto label_1c2190;
        }
    }
    ctx->pc = 0x1C215Cu;
    // 0x1c215c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c215cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c2160: 0x8c231c48  lw          $v1, 0x1C48($at)
    ctx->pc = 0x1c2160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7240)));
    // 0x1c2164: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c2164u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c2168: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c216c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1c216cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2170: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c2174: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c2174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c2178: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1c2178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1c217c: 0x8c221c50  lw          $v0, 0x1C50($at)
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7248)));
    // 0x1c2180: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1c2180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2184: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2188: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C2188u;
    {
        const bool branch_taken_0x1c2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2188u;
            // 0x1c218c: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2188) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C2190u;
label_1c2190:
    // 0x1c2190: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c2194: 0x8c231c48  lw          $v1, 0x1C48($at)
    ctx->pc = 0x1c2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7240)));
    // 0x1c2198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c219c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21a0: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1c21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1c21a4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c21a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c21a8: 0x8c231c50  lw          $v1, 0x1C50($at)
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7248)));
    // 0x1c21ac: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1c21acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1c21b0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c21b4: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C21B4u;
    SET_GPR_U32(ctx, 31, 0x1C21BCu);
    ctx->pc = 0x1C21B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21B4u;
            // 0x1c21b8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C21BCu; }
        if (ctx->pc != 0x1C21BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C21BCu; }
        if (ctx->pc != 0x1C21BCu) { return; }
    }
    ctx->pc = 0x1C21BCu;
    // 0x1c21bc: 0x0  nop
    ctx->pc = 0x1c21bcu;
    // NOP
label_1c21c0:
    // 0x1c21c0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c21c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c21c8: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1c21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x1c21cc: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c21d0: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1c21d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c21d4: 0x14400514  bnez        $v0, . + 4 + (0x514 << 2)
    ctx->pc = 0x1C21D4u;
    {
        const bool branch_taken_0x1c21d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C21D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21D4u;
            // 0x1c21d8: 0x3c024190  lui         $v0, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21d4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C21DCu;
    // 0x1c21dc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c21dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c21e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c21e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c21e4: 0x8c241c48  lw          $a0, 0x1C48($at)
    ctx->pc = 0x1c21e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7240)));
    // 0x1c21e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c21ec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1c21f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c21f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c21f4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1c21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x1c21f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c21f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c21fc: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x1c21fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c2200: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c2200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c2204: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2204u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2208: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c2208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c220c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1c220cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1c2210: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1c2210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c2214: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c2214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c2218: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c2218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c221c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c221cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c2220: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2220u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2224: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1c2224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c2228: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c2228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c222c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c222cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c2230: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2230u;
    {
        const bool branch_taken_0x1c2230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2230) {
            ctx->pc = 0x1C2260u;
            goto label_1c2260;
        }
    }
    ctx->pc = 0x1C2238u;
    // 0x1c2238: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c2238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c223c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2240: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c2240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2244: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2248: 0x2463ffd3  addiu       $v1, $v1, -0x2D
    ctx->pc = 0x1c2248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c224c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1c224cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c2250: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1c2250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1c2254: 0xc065480  jal         func_195200
    ctx->pc = 0x1C2254u;
    SET_GPR_U32(ctx, 31, 0x1C225Cu);
    ctx->pc = 0x1C2258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2254u;
            // 0x1c2258: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C225Cu; }
        if (ctx->pc != 0x1C225Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C225Cu; }
        if (ctx->pc != 0x1C225Cu) { return; }
    }
    ctx->pc = 0x1C225Cu;
    // 0x1c225c: 0x0  nop
    ctx->pc = 0x1c225cu;
    // NOP
label_1c2260:
    // 0x1c2260: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c2260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1c2264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c2264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2268: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x1c2268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x1c226c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c226cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c2270: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c2274: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2278: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1c2278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x1c227c: 0x8c241c50  lw          $a0, 0x1C50($at)
    ctx->pc = 0x1c227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7248)));
    // 0x1c2280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2284: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c2288: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2288u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c228c: 0xc4830018  lwc1        $f3, 0x18($a0)
    ctx->pc = 0x1c228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c2290: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c2290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c2294: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1c2294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1c2298: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1c2298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c229c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c229cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1c22a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c22a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c22a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c22a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c22a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c22a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c22ac: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1c22acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c22b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1c22b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c22b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c22b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c22b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C22B8u;
    {
        const bool branch_taken_0x1c22b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C22BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22B8u;
            // 0x1c22bc: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22b8) {
            ctx->pc = 0x1C22E0u;
            goto label_1c22e0;
        }
    }
    ctx->pc = 0x1C22C0u;
    // 0x1c22c0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c22c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c22c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c22c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c22cc: 0x2463002d  addiu       $v1, $v1, 0x2D
    ctx->pc = 0x1c22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c22d0: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1c22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c22d4: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1c22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1c22d8: 0xc065480  jal         func_195200
    ctx->pc = 0x1C22D8u;
    SET_GPR_U32(ctx, 31, 0x1C22E0u);
    ctx->pc = 0x1C22DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C22D8u;
            // 0x1c22dc: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22E0u; }
        if (ctx->pc != 0x1C22E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22E0u; }
        if (ctx->pc != 0x1C22E0u) { return; }
    }
    ctx->pc = 0x1C22E0u;
label_1c22e0:
    // 0x1c22e0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C22E0u;
    SET_GPR_U32(ctx, 31, 0x1C22E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22E8u; }
        if (ctx->pc != 0x1C22E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C22E8u; }
        if (ctx->pc != 0x1C22E8u) { return; }
    }
    ctx->pc = 0x1C22E8u;
    // 0x1c22e8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1c22e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c22ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c22ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c22f0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c22f0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c22f4: 0x0  nop
    ctx->pc = 0x1c22f4u;
    // NOP
    // 0x1c22f8: 0x0  nop
    ctx->pc = 0x1c22f8u;
    // NOP
    // 0x1c22fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1c22fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2300: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C2300u;
    SET_GPR_U32(ctx, 31, 0x1C2308u);
    ctx->pc = 0x1C2304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2300u;
            // 0x1c2304: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2308u; }
        if (ctx->pc != 0x1C2308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2308u; }
        if (ctx->pc != 0x1C2308u) { return; }
    }
    ctx->pc = 0x1C2308u;
    // 0x1c2308: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c2308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c230c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C230Cu;
    {
        const bool branch_taken_0x1c230c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c230c) {
            ctx->pc = 0x1C2378u;
            goto label_1c2378;
        }
    }
    ctx->pc = 0x1C2314u;
    // 0x1c2314: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2318: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c231c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c231cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2320: 0x0  nop
    ctx->pc = 0x1c2320u;
    // NOP
    // 0x1c2324: 0x0  nop
    ctx->pc = 0x1c2324u;
    // NOP
    // 0x1c2328: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2328u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c232c: 0x144004be  bnez        $v0, . + 4 + (0x4BE << 2)
    ctx->pc = 0x1C232Cu;
    {
        const bool branch_taken_0x1c232c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c232c) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2334u;
    // 0x1c2334: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2338: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c233c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c2340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2344: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c2344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2348: 0xc065480  jal         func_195200
    ctx->pc = 0x1C2348u;
    SET_GPR_U32(ctx, 31, 0x1C2350u);
    ctx->pc = 0x1C234Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2348u;
            // 0x1c234c: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2350u; }
        if (ctx->pc != 0x1C2350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2350u; }
        if (ctx->pc != 0x1C2350u) { return; }
    }
    ctx->pc = 0x1C2350u;
    // 0x1c2350: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c2350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2354: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2358: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c2358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c235c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c235cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2360: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1c2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1c2364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2368: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2368u;
    SET_GPR_U32(ctx, 31, 0x1C2370u);
    ctx->pc = 0x1C236Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2368u;
            // 0x1c236c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2370u; }
        if (ctx->pc != 0x1C2370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2370u; }
        if (ctx->pc != 0x1C2370u) { return; }
    }
    ctx->pc = 0x1C2370u;
    // 0x1c2370: 0x100004ad  b           . + 4 + (0x4AD << 2)
    ctx->pc = 0x1C2370u;
    {
        const bool branch_taken_0x1c2370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2370) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2378u;
label_1c2378:
    // 0x1c2378: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C2378u;
    SET_GPR_U32(ctx, 31, 0x1C2380u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2380u; }
        if (ctx->pc != 0x1C2380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2380u; }
        if (ctx->pc != 0x1C2380u) { return; }
    }
    ctx->pc = 0x1C2380u;
    // 0x1c2380: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C2380u;
    {
        const bool branch_taken_0x1c2380 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c2380) {
            ctx->pc = 0x1C23F0u;
            goto label_1c23f0;
        }
    }
    ctx->pc = 0x1C2388u;
    // 0x1c2388: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c238c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c238cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2390: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2390u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2394: 0x0  nop
    ctx->pc = 0x1c2394u;
    // NOP
    // 0x1c2398: 0x0  nop
    ctx->pc = 0x1c2398u;
    // NOP
    // 0x1c239c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c239cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c23a0: 0x144004a1  bnez        $v0, . + 4 + (0x4A1 << 2)
    ctx->pc = 0x1C23A0u;
    {
        const bool branch_taken_0x1c23a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c23a0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C23A8u;
    // 0x1c23a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c23ac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c23acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c23b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c23b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c23b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c23b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c23b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c23bc: 0xc065480  jal         func_195200
    ctx->pc = 0x1C23BCu;
    SET_GPR_U32(ctx, 31, 0x1C23C4u);
    ctx->pc = 0x1C23C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23BCu;
            // 0x1c23c0: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23C4u; }
        if (ctx->pc != 0x1C23C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23C4u; }
        if (ctx->pc != 0x1C23C4u) { return; }
    }
    ctx->pc = 0x1C23C4u;
    // 0x1c23c4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c23c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c23c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c23cc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c23ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c23d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c23d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c23d4: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1c23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1c23d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c23d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c23dc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C23DCu;
    SET_GPR_U32(ctx, 31, 0x1C23E4u);
    ctx->pc = 0x1C23E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23DCu;
            // 0x1c23e0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23E4u; }
        if (ctx->pc != 0x1C23E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C23E4u; }
        if (ctx->pc != 0x1C23E4u) { return; }
    }
    ctx->pc = 0x1C23E4u;
    // 0x1c23e4: 0x10000490  b           . + 4 + (0x490 << 2)
    ctx->pc = 0x1C23E4u;
    {
        const bool branch_taken_0x1c23e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23e4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C23ECu;
    // 0x1c23ec: 0x0  nop
    ctx->pc = 0x1c23ecu;
    // NOP
label_1c23f0:
    // 0x1c23f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c23f4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c23f8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c23f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c23fc: 0x0  nop
    ctx->pc = 0x1c23fcu;
    // NOP
    // 0x1c2400: 0x0  nop
    ctx->pc = 0x1c2400u;
    // NOP
    // 0x1c2404: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2404u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2408: 0x14400487  bnez        $v0, . + 4 + (0x487 << 2)
    ctx->pc = 0x1C2408u;
    {
        const bool branch_taken_0x1c2408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2408) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2410u;
    // 0x1c2410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2414: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2418: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c241c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c241cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2420: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c2420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2424: 0xc065480  jal         func_195200
    ctx->pc = 0x1C2424u;
    SET_GPR_U32(ctx, 31, 0x1C242Cu);
    ctx->pc = 0x1C2428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2424u;
            // 0x1c2428: 0x2465002d  addiu       $a1, $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C242Cu; }
        if (ctx->pc != 0x1C242Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C242Cu; }
        if (ctx->pc != 0x1C242Cu) { return; }
    }
    ctx->pc = 0x1C242Cu;
    // 0x1c242c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2430: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2434: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c2434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c2438: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c2438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c243c: 0x2442002d  addiu       $v0, $v0, 0x2D
    ctx->pc = 0x1c243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
    // 0x1c2440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2444: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2444u;
    SET_GPR_U32(ctx, 31, 0x1C244Cu);
    ctx->pc = 0x1C2448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2444u;
            // 0x1c2448: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C244Cu; }
        if (ctx->pc != 0x1C244Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C244Cu; }
        if (ctx->pc != 0x1C244Cu) { return; }
    }
    ctx->pc = 0x1C244Cu;
    // 0x1c244c: 0x10000476  b           . + 4 + (0x476 << 2)
    ctx->pc = 0x1C244Cu;
    {
        const bool branch_taken_0x1c244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c244c) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2454u;
    // 0x1c2454: 0x0  nop
    ctx->pc = 0x1c2454u;
    // NOP
label_1c2458:
    // 0x1c2458: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c2458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c245c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2460: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c2460u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c2464: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2468: 0x0  nop
    ctx->pc = 0x1c2468u;
    // NOP
    // 0x1c246c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c246cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c2470: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c2470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c2474: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2478: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c2478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c247c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c247cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c2480: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2484: 0x284101f5  slti        $at, $v0, 0x1F5
    ctx->pc = 0x1c2484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x1c2488: 0x14200467  bnez        $at, . + 4 + (0x467 << 2)
    ctx->pc = 0x1C2488u;
    {
        const bool branch_taken_0x1c2488 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2488) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2490u;
    // 0x1c2490: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c2490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c2494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2498: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c2498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c249c: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C249Cu;
    SET_GPR_U32(ctx, 31, 0x1C24A4u);
    ctx->pc = 0x1C24A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C249Cu;
            // 0x1c24a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24A4u; }
        if (ctx->pc != 0x1C24A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24A4u; }
        if (ctx->pc != 0x1C24A4u) { return; }
    }
    ctx->pc = 0x1C24A4u;
    // 0x1c24a4: 0x10000460  b           . + 4 + (0x460 << 2)
    ctx->pc = 0x1C24A4u;
    {
        const bool branch_taken_0x1c24a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c24a4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C24ACu;
    // 0x1c24ac: 0x0  nop
    ctx->pc = 0x1c24acu;
    // NOP
label_1c24b0:
    // 0x1c24b0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c24b4: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c24b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c24b8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c24b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c24bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c24bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c24c0: 0x0  nop
    ctx->pc = 0x1c24c0u;
    // NOP
    // 0x1c24c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c24c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c24c8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c24c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c24cc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c24ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c24d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c24d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c24d4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c24d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c24d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c24dc: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x1c24dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1c24e0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C24E0u;
    {
        const bool branch_taken_0x1c24e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c24e0) {
            ctx->pc = 0x1C2500u;
            goto label_1c2500;
        }
    }
    ctx->pc = 0x1C24E8u;
    // 0x1c24e8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c24e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c24ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c24f0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c24f4: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C24F4u;
    SET_GPR_U32(ctx, 31, 0x1C24FCu);
    ctx->pc = 0x1C24F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C24F4u;
            // 0x1c24f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24FCu; }
        if (ctx->pc != 0x1C24FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C24FCu; }
        if (ctx->pc != 0x1C24FCu) { return; }
    }
    ctx->pc = 0x1C24FCu;
    // 0x1c24fc: 0x0  nop
    ctx->pc = 0x1c24fcu;
    // NOP
label_1c2500:
    // 0x1c2500: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2504: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1c2504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1c2508: 0x14200447  bnez        $at, . + 4 + (0x447 << 2)
    ctx->pc = 0x1C2508u;
    {
        const bool branch_taken_0x1c2508 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2508) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2510u;
    // 0x1c2510: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C2510u;
    SET_GPR_U32(ctx, 31, 0x1C2518u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2518u; }
        if (ctx->pc != 0x1C2518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2518u; }
        if (ctx->pc != 0x1C2518u) { return; }
    }
    ctx->pc = 0x1C2518u;
    // 0x1c2518: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c2518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c251c: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C251Cu;
    {
        const bool branch_taken_0x1c251c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c251c) {
            ctx->pc = 0x1C2640u;
            goto label_1c2640;
        }
    }
    ctx->pc = 0x1C2524u;
    // 0x1c2524: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2528: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c252c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c252cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2530: 0x0  nop
    ctx->pc = 0x1c2530u;
    // NOP
    // 0x1c2534: 0x0  nop
    ctx->pc = 0x1c2534u;
    // NOP
    // 0x1c2538: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2538u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c253c: 0x1440043a  bnez        $v0, . + 4 + (0x43A << 2)
    ctx->pc = 0x1C253Cu;
    {
        const bool branch_taken_0x1c253c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c253c) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2544u;
    // 0x1c2544: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c254c: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c2550: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c2550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2554: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c2554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c2558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c255c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C255Cu;
    SET_GPR_U32(ctx, 31, 0x1C2564u);
    ctx->pc = 0x1C2560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C255Cu;
            // 0x1c2560: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2564u; }
        if (ctx->pc != 0x1C2564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2564u; }
        if (ctx->pc != 0x1C2564u) { return; }
    }
    ctx->pc = 0x1C2564u;
    // 0x1c2564: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1c2564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2568: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c256c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c256cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2570: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2574: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2578: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c2578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c257c: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x1c257cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c2580: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1c2580u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c2584: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2584u;
    SET_GPR_U32(ctx, 31, 0x1C258Cu);
    ctx->pc = 0x1C2588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2584u;
            // 0x1c2588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C258Cu; }
        if (ctx->pc != 0x1C258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C258Cu; }
        if (ctx->pc != 0x1C258Cu) { return; }
    }
    ctx->pc = 0x1C258Cu;
    // 0x1c258c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2590: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x1c2590u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x1c2594: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2598: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2598u;
    SET_GPR_U32(ctx, 31, 0x1C25A0u);
    ctx->pc = 0x1C259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2598u;
            // 0x1c259c: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25A0u; }
        if (ctx->pc != 0x1C25A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25A0u; }
        if (ctx->pc != 0x1C25A0u) { return; }
    }
    ctx->pc = 0x1C25A0u;
    // 0x1c25a0: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c25a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c25a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c25a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c25a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c25ac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c25b0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c25b4: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1c25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1c25b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c25b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c25bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c25bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c25c0: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x1c25c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c25c4: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c25c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c25c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C25C8u;
    SET_GPR_U32(ctx, 31, 0x1C25D0u);
    ctx->pc = 0x1C25CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25C8u;
            // 0x1c25cc: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25D0u; }
        if (ctx->pc != 0x1C25D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25D0u; }
        if (ctx->pc != 0x1C25D0u) { return; }
    }
    ctx->pc = 0x1C25D0u;
    // 0x1c25d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c25d4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1c25d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c25d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c25dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c25e0: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c25e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c25e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C25E4u;
    SET_GPR_U32(ctx, 31, 0x1C25ECu);
    ctx->pc = 0x1C25E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C25E4u;
            // 0x1c25e8: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25ECu; }
        if (ctx->pc != 0x1C25ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C25ECu; }
        if (ctx->pc != 0x1C25ECu) { return; }
    }
    ctx->pc = 0x1C25ECu;
    // 0x1c25ec: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c25f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c25f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c25f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c25f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c25f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c25fc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2600: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x1c2604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2608: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c2608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c260c: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x1c260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c2610: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c2610u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c2614: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2614u;
    SET_GPR_U32(ctx, 31, 0x1C261Cu);
    ctx->pc = 0x1C2618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2614u;
            // 0x1c2618: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C261Cu; }
        if (ctx->pc != 0x1C261Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C261Cu; }
        if (ctx->pc != 0x1C261Cu) { return; }
    }
    ctx->pc = 0x1C261Cu;
    // 0x1c261c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2620: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1c2624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2628: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c262c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c262cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c2630: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2630u;
    SET_GPR_U32(ctx, 31, 0x1C2638u);
    ctx->pc = 0x1C2634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2630u;
            // 0x1c2634: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2638u; }
        if (ctx->pc != 0x1C2638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2638u; }
        if (ctx->pc != 0x1C2638u) { return; }
    }
    ctx->pc = 0x1C2638u;
    // 0x1c2638: 0x100003fb  b           . + 4 + (0x3FB << 2)
    ctx->pc = 0x1C2638u;
    {
        const bool branch_taken_0x1c2638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2638) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2640u;
label_1c2640:
    // 0x1c2640: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C2640u;
    SET_GPR_U32(ctx, 31, 0x1C2648u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2648u; }
        if (ctx->pc != 0x1C2648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2648u; }
        if (ctx->pc != 0x1C2648u) { return; }
    }
    ctx->pc = 0x1C2648u;
    // 0x1c2648: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1C2648u;
    {
        const bool branch_taken_0x1c2648 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c2648) {
            ctx->pc = 0x1C2770u;
            goto label_1c2770;
        }
    }
    ctx->pc = 0x1C2650u;
    // 0x1c2650: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2654: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2654u;
    {
        const bool branch_taken_0x1c2654 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2654u;
            // 0x1c2658: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2654) {
            ctx->pc = 0x1C2668u;
            goto label_1c2668;
        }
    }
    ctx->pc = 0x1C265Cu;
    // 0x1c265c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C265Cu;
    {
        const bool branch_taken_0x1c265c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c265c) {
            ctx->pc = 0x1C2668u;
            goto label_1c2668;
        }
    }
    ctx->pc = 0x1C2664u;
    // 0x1c2664: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1c2664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1c2668:
    // 0x1c2668: 0x144003ef  bnez        $v0, . + 4 + (0x3EF << 2)
    ctx->pc = 0x1C2668u;
    {
        const bool branch_taken_0x1c2668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2668) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2670u;
    // 0x1c2670: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c2670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2674: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2678: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c2678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c267c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c267cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2680: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c2680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c2684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2688: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2688u;
    SET_GPR_U32(ctx, 31, 0x1C2690u);
    ctx->pc = 0x1C268Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2688u;
            // 0x1c268c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2690u; }
        if (ctx->pc != 0x1C2690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2690u; }
        if (ctx->pc != 0x1C2690u) { return; }
    }
    ctx->pc = 0x1C2690u;
    // 0x1c2690: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1c2690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2694: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c269c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c269cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c26a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c26a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c26a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c26a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c26a8: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x1c26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c26ac: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1c26acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c26b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C26B0u;
    SET_GPR_U32(ctx, 31, 0x1C26B8u);
    ctx->pc = 0x1C26B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26B0u;
            // 0x1c26b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26B8u; }
        if (ctx->pc != 0x1C26B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26B8u; }
        if (ctx->pc != 0x1C26B8u) { return; }
    }
    ctx->pc = 0x1C26B8u;
    // 0x1c26b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c26bc: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x1c26bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x1c26c0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c26c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C26C4u;
    SET_GPR_U32(ctx, 31, 0x1C26CCu);
    ctx->pc = 0x1C26C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26C4u;
            // 0x1c26c8: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26CCu; }
        if (ctx->pc != 0x1C26CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26CCu; }
        if (ctx->pc != 0x1C26CCu) { return; }
    }
    ctx->pc = 0x1C26CCu;
    // 0x1c26cc: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c26ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c26d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c26d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c26d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c26d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c26dc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c26e0: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1c26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1c26e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c26e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c26e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c26e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c26ec: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c26f0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c26f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c26f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C26F4u;
    SET_GPR_U32(ctx, 31, 0x1C26FCu);
    ctx->pc = 0x1C26F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26F4u;
            // 0x1c26f8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26FCu; }
        if (ctx->pc != 0x1C26FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26FCu; }
        if (ctx->pc != 0x1C26FCu) { return; }
    }
    ctx->pc = 0x1C26FCu;
    // 0x1c26fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c26fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2700: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1c2704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2708: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c270c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c270cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c2710: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2710u;
    SET_GPR_U32(ctx, 31, 0x1C2718u);
    ctx->pc = 0x1C2714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2710u;
            // 0x1c2714: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2718u; }
        if (ctx->pc != 0x1C2718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2718u; }
        if (ctx->pc != 0x1C2718u) { return; }
    }
    ctx->pc = 0x1C2718u;
    // 0x1c2718: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c271c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2720: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2724: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2728: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c272c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1c272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x1c2730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2734: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c2734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c2738: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x1c2738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c273c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c273cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c2740: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2740u;
    SET_GPR_U32(ctx, 31, 0x1C2748u);
    ctx->pc = 0x1C2744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2740u;
            // 0x1c2744: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2748u; }
        if (ctx->pc != 0x1C2748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2748u; }
        if (ctx->pc != 0x1C2748u) { return; }
    }
    ctx->pc = 0x1C2748u;
    // 0x1c2748: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c274c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1c274cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1c2750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2754: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2758: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c2758u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c275c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C275Cu;
    SET_GPR_U32(ctx, 31, 0x1C2764u);
    ctx->pc = 0x1C2760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C275Cu;
            // 0x1c2760: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2764u; }
        if (ctx->pc != 0x1C2764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2764u; }
        if (ctx->pc != 0x1C2764u) { return; }
    }
    ctx->pc = 0x1C2764u;
    // 0x1c2764: 0x100003b0  b           . + 4 + (0x3B0 << 2)
    ctx->pc = 0x1C2764u;
    {
        const bool branch_taken_0x1c2764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2764) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C276Cu;
    // 0x1c276c: 0x0  nop
    ctx->pc = 0x1c276cu;
    // NOP
label_1c2770:
    // 0x1c2770: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2774: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c2778: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2778u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c277c: 0x0  nop
    ctx->pc = 0x1c277cu;
    // NOP
    // 0x1c2780: 0x0  nop
    ctx->pc = 0x1c2780u;
    // NOP
    // 0x1c2784: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2784u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2788: 0x144003a7  bnez        $v0, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x1C2788u;
    {
        const bool branch_taken_0x1c2788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2788) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2790u;
    // 0x1c2790: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2798: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c2798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c279c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c279cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c27a0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c27a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c27a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c27a8: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C27A8u;
    SET_GPR_U32(ctx, 31, 0x1C27B0u);
    ctx->pc = 0x1C27ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27A8u;
            // 0x1c27ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27B0u; }
        if (ctx->pc != 0x1C27B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27B0u; }
        if (ctx->pc != 0x1C27B0u) { return; }
    }
    ctx->pc = 0x1C27B0u;
    // 0x1c27b0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1c27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c27b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c27b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c27b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c27bc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c27c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c27c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c27c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c27c8: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x1c27c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c27cc: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1c27ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c27d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C27D0u;
    SET_GPR_U32(ctx, 31, 0x1C27D8u);
    ctx->pc = 0x1C27D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27D0u;
            // 0x1c27d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27D8u; }
        if (ctx->pc != 0x1C27D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27D8u; }
        if (ctx->pc != 0x1C27D8u) { return; }
    }
    ctx->pc = 0x1C27D8u;
    // 0x1c27d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c27dc: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x1c27dcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x1c27e0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c27e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C27E4u;
    SET_GPR_U32(ctx, 31, 0x1C27ECu);
    ctx->pc = 0x1C27E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27E4u;
            // 0x1c27e8: 0x2445003c  addiu       $a1, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27ECu; }
        if (ctx->pc != 0x1C27ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27ECu; }
        if (ctx->pc != 0x1C27ECu) { return; }
    }
    ctx->pc = 0x1C27ECu;
    // 0x1c27ec: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c27ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c27f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c27f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c27f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c27f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c27f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c27f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c27fc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2800: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1c2800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1c2804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2808: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c2808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c280c: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x1c280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c2810: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c2810u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c2814: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2814u;
    SET_GPR_U32(ctx, 31, 0x1C281Cu);
    ctx->pc = 0x1C2818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2814u;
            // 0x1c2818: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C281Cu; }
        if (ctx->pc != 0x1C281Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C281Cu; }
        if (ctx->pc != 0x1C281Cu) { return; }
    }
    ctx->pc = 0x1C281Cu;
    // 0x1c281c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2820: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c2820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1c2824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2828: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c282c: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c282cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c2830: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2830u;
    SET_GPR_U32(ctx, 31, 0x1C2838u);
    ctx->pc = 0x1C2834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2830u;
            // 0x1c2834: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2838u; }
        if (ctx->pc != 0x1C2838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2838u; }
        if (ctx->pc != 0x1C2838u) { return; }
    }
    ctx->pc = 0x1C2838u;
    // 0x1c2838: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1c2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c283c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c283cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2848: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c284c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x1c284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x1c2850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2854: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c2854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c2858: 0x2465003c  addiu       $a1, $v1, 0x3C
    ctx->pc = 0x1c2858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1c285c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c285cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c2860: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C2860u;
    SET_GPR_U32(ctx, 31, 0x1C2868u);
    ctx->pc = 0x1C2864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2860u;
            // 0x1c2864: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2868u; }
        if (ctx->pc != 0x1C2868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2868u; }
        if (ctx->pc != 0x1C2868u) { return; }
    }
    ctx->pc = 0x1C2868u;
    // 0x1c2868: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c286c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1c2870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2874: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c2874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2878: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x1c2878u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c287c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C287Cu;
    SET_GPR_U32(ctx, 31, 0x1C2884u);
    ctx->pc = 0x1C2880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C287Cu;
            // 0x1c2880: 0x2465003c  addiu       $a1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2884u; }
        if (ctx->pc != 0x1C2884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2884u; }
        if (ctx->pc != 0x1C2884u) { return; }
    }
    ctx->pc = 0x1C2884u;
    // 0x1c2884: 0x10000368  b           . + 4 + (0x368 << 2)
    ctx->pc = 0x1C2884u;
    {
        const bool branch_taken_0x1c2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2884) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C288Cu;
    // 0x1c288c: 0x0  nop
    ctx->pc = 0x1c288cu;
    // NOP
label_1c2890:
    // 0x1c2890: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c2890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c2894: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c2894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2898: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c2898u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c289c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c289cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c28a0: 0x0  nop
    ctx->pc = 0x1c28a0u;
    // NOP
    // 0x1c28a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c28a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c28a8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c28a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c28ac: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c28b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c28b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c28b4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c28b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c28b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c28bc: 0x284101c3  slti        $at, $v0, 0x1C3
    ctx->pc = 0x1c28bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)451) ? 1 : 0);
    // 0x1c28c0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C28C0u;
    {
        const bool branch_taken_0x1c28c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c28c0) {
            ctx->pc = 0x1C28E0u;
            goto label_1c28e0;
        }
    }
    ctx->pc = 0x1C28C8u;
    // 0x1c28c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c28cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c28d0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c28d4: 0xc070eb8  jal         func_1C3AE0
    ctx->pc = 0x1C28D4u;
    SET_GPR_U32(ctx, 31, 0x1C28DCu);
    ctx->pc = 0x1C28D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28D4u;
            // 0x1c28d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AE0u;
    if (runtime->hasFunction(0x1C3AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C3AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28DCu; }
        if (ctx->pc != 0x1C28DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c3ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28DCu; }
        if (ctx->pc != 0x1C28DCu) { return; }
    }
    ctx->pc = 0x1C28DCu;
    // 0x1c28dc: 0x0  nop
    ctx->pc = 0x1c28dcu;
    // NOP
label_1c28e0:
    // 0x1c28e0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c28e4: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x1c28e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c28e8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C28E8u;
    {
        const bool branch_taken_0x1c28e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C28ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28E8u;
            // 0x1c28ec: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28e8) {
            ctx->pc = 0x1C2960u;
            goto label_1c2960;
        }
    }
    ctx->pc = 0x1C28F0u;
    // 0x1c28f0: 0x3c023c8b  lui         $v0, 0x3C8B
    ctx->pc = 0x1c28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15499 << 16));
    // 0x1c28f4: 0x8c241c38  lw          $a0, 0x1C38($at)
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7224)));
    // 0x1c28f8: 0x34434396  ori         $v1, $v0, 0x4396
    ctx->pc = 0x1c28f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)17302u)));
    // 0x1c28fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c28fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2900: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c2904: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1c2904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2908: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c290c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c290cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c2910: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1c2910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1c2914: 0x8c231c40  lw          $v1, 0x1C40($at)
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7232)));
    // 0x1c2918: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1c2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c291c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c291cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2920: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1c2920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1c2924: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1c2924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1c2928: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2928u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c292c: 0x0  nop
    ctx->pc = 0x1c292cu;
    // NOP
    // 0x1c2930: 0x0  nop
    ctx->pc = 0x1c2930u;
    // NOP
    // 0x1c2934: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2934u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2938: 0x1440033b  bnez        $v0, . + 4 + (0x33B << 2)
    ctx->pc = 0x1C2938u;
    {
        const bool branch_taken_0x1c2938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2938) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2940u;
    // 0x1c2940: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c2940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2944: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1c2944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1c2948: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c2948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c294c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c294cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2950: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2950u;
    SET_GPR_U32(ctx, 31, 0x1C2958u);
    ctx->pc = 0x1C2954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2950u;
            // 0x1c2954: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2958u; }
        if (ctx->pc != 0x1C2958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2958u; }
        if (ctx->pc != 0x1C2958u) { return; }
    }
    ctx->pc = 0x1C2958u;
    // 0x1c2958: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x1C2958u;
    {
        const bool branch_taken_0x1c2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2958) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2960u;
label_1c2960:
    // 0x1c2960: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c2960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1c2964: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2964u;
    {
        const bool branch_taken_0x1c2964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2964) {
            ctx->pc = 0x1C2990u;
            goto label_1c2990;
        }
    }
    ctx->pc = 0x1C296Cu;
    // 0x1c296c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2970: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c2974: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c2974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2978: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c2978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c297c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C297Cu;
    SET_GPR_U32(ctx, 31, 0x1C2984u);
    ctx->pc = 0x1C2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C297Cu;
            // 0x1c2980: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2984u; }
        if (ctx->pc != 0x1C2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2984u; }
        if (ctx->pc != 0x1C2984u) { return; }
    }
    ctx->pc = 0x1C2984u;
    // 0x1c2984: 0x10000328  b           . + 4 + (0x328 << 2)
    ctx->pc = 0x1C2984u;
    {
        const bool branch_taken_0x1c2984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2984) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C298Cu;
    // 0x1c298c: 0x0  nop
    ctx->pc = 0x1c298cu;
    // NOP
label_1c2990:
    // 0x1c2990: 0x286200c8  slti        $v0, $v1, 0xC8
    ctx->pc = 0x1c2990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c2994: 0x14400324  bnez        $v0, . + 4 + (0x324 << 2)
    ctx->pc = 0x1C2994u;
    {
        const bool branch_taken_0x1c2994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2994u;
            // 0x1c2998: 0x2861015e  slti        $at, $v1, 0x15E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)350) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2994) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C299Cu;
    // 0x1c299c: 0x1020011e  beqz        $at, . + 4 + (0x11E << 2)
    ctx->pc = 0x1C299Cu;
    {
        const bool branch_taken_0x1c299c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c299c) {
            ctx->pc = 0x1C2E18u;
            goto label_1c2e18;
        }
    }
    ctx->pc = 0x1C29A4u;
    // 0x1c29a4: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C29A4u;
    SET_GPR_U32(ctx, 31, 0x1C29ACu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29ACu; }
        if (ctx->pc != 0x1C29ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29ACu; }
        if (ctx->pc != 0x1C29ACu) { return; }
    }
    ctx->pc = 0x1C29ACu;
    // 0x1c29ac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1c29acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c29b0: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1C29B0u;
    {
        const bool branch_taken_0x1c29b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c29b0) {
            ctx->pc = 0x1C2B28u;
            goto label_1c2b28;
        }
    }
    ctx->pc = 0x1C29B8u;
    // 0x1c29b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c29bc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C29BCu;
    {
        const bool branch_taken_0x1c29bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C29C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29BCu;
            // 0x1c29c0: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29bc) {
            ctx->pc = 0x1C29D0u;
            goto label_1c29d0;
        }
    }
    ctx->pc = 0x1C29C4u;
    // 0x1c29c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C29C4u;
    {
        const bool branch_taken_0x1c29c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c29c4) {
            ctx->pc = 0x1C29D0u;
            goto label_1c29d0;
        }
    }
    ctx->pc = 0x1C29CCu;
    // 0x1c29cc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1c29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c29d0:
    // 0x1c29d0: 0x14400315  bnez        $v0, . + 4 + (0x315 << 2)
    ctx->pc = 0x1C29D0u;
    {
        const bool branch_taken_0x1c29d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c29d0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C29D8u;
    // 0x1c29d8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c29dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c29e0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c29e4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c29e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c29e8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c29ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c29ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c29f0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C29F0u;
    SET_GPR_U32(ctx, 31, 0x1C29F8u);
    ctx->pc = 0x1C29F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C29F0u;
            // 0x1c29f4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29F8u; }
        if (ctx->pc != 0x1C29F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C29F8u; }
        if (ctx->pc != 0x1C29F8u) { return; }
    }
    ctx->pc = 0x1C29F8u;
    // 0x1c29f8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C29F8u;
    SET_GPR_U32(ctx, 31, 0x1C2A00u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A00u; }
        if (ctx->pc != 0x1C2A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A00u; }
        if (ctx->pc != 0x1C2A00u) { return; }
    }
    ctx->pc = 0x1C2A00u;
    // 0x1c2a00: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2a04: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2a04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2a08: 0x0  nop
    ctx->pc = 0x1c2a08u;
    // NOP
    // 0x1c2a0c: 0x0  nop
    ctx->pc = 0x1c2a0cu;
    // NOP
    // 0x1c2a10: 0x8810  mfhi        $s1
    ctx->pc = 0x1c2a10u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c2a14: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C2A14u;
    SET_GPR_U32(ctx, 31, 0x1C2A1Cu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A1Cu; }
        if (ctx->pc != 0x1C2A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A1Cu; }
        if (ctx->pc != 0x1C2A1Cu) { return; }
    }
    ctx->pc = 0x1C2A1Cu;
    // 0x1c2a1c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2a20: 0x2e210006  sltiu       $at, $s1, 0x6
    ctx->pc = 0x1c2a20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c2a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2a28: 0x102002ff  beqz        $at, . + 4 + (0x2FF << 2)
    ctx->pc = 0x1C2A28u;
    {
        const bool branch_taken_0x1c2a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A28u;
            // 0x1c2a2c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a28) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2A30u;
    // 0x1c2a30: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c2a34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2a38: 0x24632b40  addiu       $v1, $v1, 0x2B40
    ctx->pc = 0x1c2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11072));
    // 0x1c2a3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2a40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2a44: 0x400008  jr          $v0
    ctx->pc = 0x1C2A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2A50u: goto label_1c2a50;
            case 0x1C2A70u: goto label_1c2a70;
            case 0x1C2A90u: goto label_1c2a90;
            case 0x1C2AB0u: goto label_1c2ab0;
            case 0x1C2AD8u: goto label_1c2ad8;
            case 0x1C2B00u: goto label_1c2b00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2A4Cu;
    // 0x1c2a4c: 0x0  nop
    ctx->pc = 0x1c2a4cu;
    // NOP
label_1c2a50:
    // 0x1c2a50: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2a54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2a58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2a5c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1c2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1c2a60: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2A60u;
    SET_GPR_U32(ctx, 31, 0x1C2A68u);
    ctx->pc = 0x1C2A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A60u;
            // 0x1c2a64: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A68u; }
        if (ctx->pc != 0x1C2A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A68u; }
        if (ctx->pc != 0x1C2A68u) { return; }
    }
    ctx->pc = 0x1C2A68u;
    // 0x1c2a68: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x1C2A68u;
    {
        const bool branch_taken_0x1c2a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a68) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2A70u;
label_1c2a70:
    // 0x1c2a70: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2a74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2a78: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2a7c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c2a80: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2A80u;
    SET_GPR_U32(ctx, 31, 0x1C2A88u);
    ctx->pc = 0x1C2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A80u;
            // 0x1c2a84: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A88u; }
        if (ctx->pc != 0x1C2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2A88u; }
        if (ctx->pc != 0x1C2A88u) { return; }
    }
    ctx->pc = 0x1C2A88u;
    // 0x1c2a88: 0x100002e7  b           . + 4 + (0x2E7 << 2)
    ctx->pc = 0x1C2A88u;
    {
        const bool branch_taken_0x1c2a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a88) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2A90u;
label_1c2a90:
    // 0x1c2a90: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2a94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2a98: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2a9c: 0x24640032  addiu       $a0, $v1, 0x32
    ctx->pc = 0x1c2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x1c2aa0: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2AA0u;
    SET_GPR_U32(ctx, 31, 0x1C2AA8u);
    ctx->pc = 0x1C2AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AA0u;
            // 0x1c2aa4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA8u; }
        if (ctx->pc != 0x1C2AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA8u; }
        if (ctx->pc != 0x1C2AA8u) { return; }
    }
    ctx->pc = 0x1C2AA8u;
    // 0x1c2aa8: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x1C2AA8u;
    {
        const bool branch_taken_0x1c2aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2aa8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2ab4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2ab8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2abc: 0x0  nop
    ctx->pc = 0x1c2abcu;
    // NOP
    // 0x1c2ac0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2ac0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2ac4: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1c2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1c2ac8: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2AC8u;
    SET_GPR_U32(ctx, 31, 0x1C2AD0u);
    ctx->pc = 0x1C2ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AC8u;
            // 0x1c2acc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AD0u; }
        if (ctx->pc != 0x1C2AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AD0u; }
        if (ctx->pc != 0x1C2AD0u) { return; }
    }
    ctx->pc = 0x1C2AD0u;
    // 0x1c2ad0: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x1C2AD0u;
    {
        const bool branch_taken_0x1c2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ad0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2AD8u;
label_1c2ad8:
    // 0x1c2ad8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2ae0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2ae4: 0x0  nop
    ctx->pc = 0x1c2ae4u;
    // NOP
    // 0x1c2ae8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2ae8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2aec: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c2af0: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2AF0u;
    SET_GPR_U32(ctx, 31, 0x1C2AF8u);
    ctx->pc = 0x1C2AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AF0u;
            // 0x1c2af4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AF8u; }
        if (ctx->pc != 0x1C2AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AF8u; }
        if (ctx->pc != 0x1C2AF8u) { return; }
    }
    ctx->pc = 0x1C2AF8u;
    // 0x1c2af8: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x1C2AF8u;
    {
        const bool branch_taken_0x1c2af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2af8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2B00u;
label_1c2b00:
    // 0x1c2b00: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2b04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2b08: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2b0c: 0x0  nop
    ctx->pc = 0x1c2b0cu;
    // NOP
    // 0x1c2b10: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2b10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2b14: 0x2464ffce  addiu       $a0, $v1, -0x32
    ctx->pc = 0x1c2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1c2b18: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2B18u;
    SET_GPR_U32(ctx, 31, 0x1C2B20u);
    ctx->pc = 0x1C2B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B18u;
            // 0x1c2b1c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B20u; }
        if (ctx->pc != 0x1C2B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B20u; }
        if (ctx->pc != 0x1C2B20u) { return; }
    }
    ctx->pc = 0x1C2B20u;
    // 0x1c2b20: 0x100002c1  b           . + 4 + (0x2C1 << 2)
    ctx->pc = 0x1C2B20u;
    {
        const bool branch_taken_0x1c2b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b20) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2B28u;
label_1c2b28:
    // 0x1c2b28: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C2B28u;
    SET_GPR_U32(ctx, 31, 0x1C2B30u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B30u; }
        if (ctx->pc != 0x1C2B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B30u; }
        if (ctx->pc != 0x1C2B30u) { return; }
    }
    ctx->pc = 0x1C2B30u;
    // 0x1c2b30: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1C2B30u;
    {
        const bool branch_taken_0x1c2b30 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c2b30) {
            ctx->pc = 0x1C2CA8u;
            goto label_1c2ca8;
        }
    }
    ctx->pc = 0x1C2B38u;
    // 0x1c2b38: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2b3c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B3Cu;
    {
        const bool branch_taken_0x1c2b3c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B3Cu;
            // 0x1c2b40: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b3c) {
            ctx->pc = 0x1C2B50u;
            goto label_1c2b50;
        }
    }
    ctx->pc = 0x1C2B44u;
    // 0x1c2b44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2B44u;
    {
        const bool branch_taken_0x1c2b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b44) {
            ctx->pc = 0x1C2B50u;
            goto label_1c2b50;
        }
    }
    ctx->pc = 0x1C2B4Cu;
    // 0x1c2b4c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1c2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1c2b50:
    // 0x1c2b50: 0x144002b5  bnez        $v0, . + 4 + (0x2B5 << 2)
    ctx->pc = 0x1C2B50u;
    {
        const bool branch_taken_0x1c2b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b50) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2B58u;
    // 0x1c2b58: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2b5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2b60: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c2b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c2b64: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c2b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2b68: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c2b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2b70: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2B70u;
    SET_GPR_U32(ctx, 31, 0x1C2B78u);
    ctx->pc = 0x1C2B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2B70u;
            // 0x1c2b74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B78u; }
        if (ctx->pc != 0x1C2B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B78u; }
        if (ctx->pc != 0x1C2B78u) { return; }
    }
    ctx->pc = 0x1C2B78u;
    // 0x1c2b78: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C2B78u;
    SET_GPR_U32(ctx, 31, 0x1C2B80u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B80u; }
        if (ctx->pc != 0x1C2B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B80u; }
        if (ctx->pc != 0x1C2B80u) { return; }
    }
    ctx->pc = 0x1C2B80u;
    // 0x1c2b80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2b84: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2b84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2b88: 0x0  nop
    ctx->pc = 0x1c2b88u;
    // NOP
    // 0x1c2b8c: 0x0  nop
    ctx->pc = 0x1c2b8cu;
    // NOP
    // 0x1c2b90: 0x8810  mfhi        $s1
    ctx->pc = 0x1c2b90u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c2b94: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C2B94u;
    SET_GPR_U32(ctx, 31, 0x1C2B9Cu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B9Cu; }
        if (ctx->pc != 0x1C2B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2B9Cu; }
        if (ctx->pc != 0x1C2B9Cu) { return; }
    }
    ctx->pc = 0x1C2B9Cu;
    // 0x1c2b9c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2ba0: 0x2e210006  sltiu       $at, $s1, 0x6
    ctx->pc = 0x1c2ba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c2ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2ba8: 0x1020029f  beqz        $at, . + 4 + (0x29F << 2)
    ctx->pc = 0x1C2BA8u;
    {
        const bool branch_taken_0x1c2ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BA8u;
            // 0x1c2bac: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ba8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2BB0u;
    // 0x1c2bb0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c2bb4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2bb8: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x1c2bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2bc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2bc4: 0x400008  jr          $v0
    ctx->pc = 0x1C2BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2BD0u: goto label_1c2bd0;
            case 0x1C2BF0u: goto label_1c2bf0;
            case 0x1C2C10u: goto label_1c2c10;
            case 0x1C2C30u: goto label_1c2c30;
            case 0x1C2C58u: goto label_1c2c58;
            case 0x1C2C80u: goto label_1c2c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2BCCu;
    // 0x1c2bcc: 0x0  nop
    ctx->pc = 0x1c2bccu;
    // NOP
label_1c2bd0:
    // 0x1c2bd0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2bd4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2bd8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2bdc: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1c2be0: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2BE0u;
    SET_GPR_U32(ctx, 31, 0x1C2BE8u);
    ctx->pc = 0x1C2BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2BE0u;
            // 0x1c2be4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BE8u; }
        if (ctx->pc != 0x1C2BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2BE8u; }
        if (ctx->pc != 0x1C2BE8u) { return; }
    }
    ctx->pc = 0x1C2BE8u;
    // 0x1c2be8: 0x1000028f  b           . + 4 + (0x28F << 2)
    ctx->pc = 0x1C2BE8u;
    {
        const bool branch_taken_0x1c2be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2be8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2BF0u;
label_1c2bf0:
    // 0x1c2bf0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2bf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2bf8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2bfc: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c2c00: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2C00u;
    SET_GPR_U32(ctx, 31, 0x1C2C08u);
    ctx->pc = 0x1C2C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C00u;
            // 0x1c2c04: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C08u; }
        if (ctx->pc != 0x1C2C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C08u; }
        if (ctx->pc != 0x1C2C08u) { return; }
    }
    ctx->pc = 0x1C2C08u;
    // 0x1c2c08: 0x10000287  b           . + 4 + (0x287 << 2)
    ctx->pc = 0x1C2C08u;
    {
        const bool branch_taken_0x1c2c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c08) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2C10u;
label_1c2c10:
    // 0x1c2c10: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2c14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2c18: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2c18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2c1c: 0x24640032  addiu       $a0, $v1, 0x32
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x1c2c20: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2C20u;
    SET_GPR_U32(ctx, 31, 0x1C2C28u);
    ctx->pc = 0x1C2C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C20u;
            // 0x1c2c24: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C28u; }
        if (ctx->pc != 0x1C2C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C28u; }
        if (ctx->pc != 0x1C2C28u) { return; }
    }
    ctx->pc = 0x1C2C28u;
    // 0x1c2c28: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x1C2C28u;
    {
        const bool branch_taken_0x1c2c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c28) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2C30u;
label_1c2c30:
    // 0x1c2c30: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2c34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2c38: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2c3c: 0x0  nop
    ctx->pc = 0x1c2c3cu;
    // NOP
    // 0x1c2c40: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2c40u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2c44: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1c2c48: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2C48u;
    SET_GPR_U32(ctx, 31, 0x1C2C50u);
    ctx->pc = 0x1C2C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C48u;
            // 0x1c2c4c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C50u; }
        if (ctx->pc != 0x1C2C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C50u; }
        if (ctx->pc != 0x1C2C50u) { return; }
    }
    ctx->pc = 0x1C2C50u;
    // 0x1c2c50: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x1C2C50u;
    {
        const bool branch_taken_0x1c2c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c50) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2C58u;
label_1c2c58:
    // 0x1c2c58: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2c5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2c60: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2c64: 0x0  nop
    ctx->pc = 0x1c2c64u;
    // NOP
    // 0x1c2c68: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2c68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2c6c: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c2c70: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2C70u;
    SET_GPR_U32(ctx, 31, 0x1C2C78u);
    ctx->pc = 0x1C2C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C70u;
            // 0x1c2c74: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C78u; }
        if (ctx->pc != 0x1C2C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2C78u; }
        if (ctx->pc != 0x1C2C78u) { return; }
    }
    ctx->pc = 0x1C2C78u;
    // 0x1c2c78: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x1C2C78u;
    {
        const bool branch_taken_0x1c2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c78) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2C80u;
label_1c2c80:
    // 0x1c2c80: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2c84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2c88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2c8c: 0x0  nop
    ctx->pc = 0x1c2c8cu;
    // NOP
    // 0x1c2c90: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2c90u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2c94: 0x2464ffce  addiu       $a0, $v1, -0x32
    ctx->pc = 0x1c2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1c2c98: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2C98u;
    SET_GPR_U32(ctx, 31, 0x1C2CA0u);
    ctx->pc = 0x1C2C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2C98u;
            // 0x1c2c9c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CA0u; }
        if (ctx->pc != 0x1C2CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CA0u; }
        if (ctx->pc != 0x1C2CA0u) { return; }
    }
    ctx->pc = 0x1C2CA0u;
    // 0x1c2ca0: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x1C2CA0u;
    {
        const bool branch_taken_0x1c2ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ca0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2CA8u;
label_1c2ca8:
    // 0x1c2ca8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2cac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c2cb0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2cb0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2cb4: 0x0  nop
    ctx->pc = 0x1c2cb4u;
    // NOP
    // 0x1c2cb8: 0x0  nop
    ctx->pc = 0x1c2cb8u;
    // NOP
    // 0x1c2cbc: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2cbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2cc0: 0x14400259  bnez        $v0, . + 4 + (0x259 << 2)
    ctx->pc = 0x1C2CC0u;
    {
        const bool branch_taken_0x1c2cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2cc0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2CC8u;
    // 0x1c2cc8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c2cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2ccc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2cd0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c2cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c2cd4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c2cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2cd8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c2cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2ce0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2CE0u;
    SET_GPR_U32(ctx, 31, 0x1C2CE8u);
    ctx->pc = 0x1C2CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2CE0u;
            // 0x1c2ce4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE8u; }
        if (ctx->pc != 0x1C2CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CE8u; }
        if (ctx->pc != 0x1C2CE8u) { return; }
    }
    ctx->pc = 0x1C2CE8u;
    // 0x1c2ce8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C2CE8u;
    SET_GPR_U32(ctx, 31, 0x1C2CF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CF0u; }
        if (ctx->pc != 0x1C2CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2CF0u; }
        if (ctx->pc != 0x1C2CF0u) { return; }
    }
    ctx->pc = 0x1C2CF0u;
    // 0x1c2cf0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1c2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2cf4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2cf4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2cf8: 0x0  nop
    ctx->pc = 0x1c2cf8u;
    // NOP
    // 0x1c2cfc: 0x0  nop
    ctx->pc = 0x1c2cfcu;
    // NOP
    // 0x1c2d00: 0x8810  mfhi        $s1
    ctx->pc = 0x1c2d00u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c2d04: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C2D04u;
    SET_GPR_U32(ctx, 31, 0x1C2D0Cu);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D0Cu; }
        if (ctx->pc != 0x1C2D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D0Cu; }
        if (ctx->pc != 0x1C2D0Cu) { return; }
    }
    ctx->pc = 0x1C2D0Cu;
    // 0x1c2d0c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2d10: 0x2e210006  sltiu       $at, $s1, 0x6
    ctx->pc = 0x1c2d10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c2d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2d18: 0x10200243  beqz        $at, . + 4 + (0x243 << 2)
    ctx->pc = 0x1C2D18u;
    {
        const bool branch_taken_0x1c2d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D18u;
            // 0x1c2d1c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d18) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2D20u;
    // 0x1c2d20: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c2d24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2d28: 0x24632b00  addiu       $v1, $v1, 0x2B00
    ctx->pc = 0x1c2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11008));
    // 0x1c2d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2d34: 0x400008  jr          $v0
    ctx->pc = 0x1C2D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C2D40u: goto label_1c2d40;
            case 0x1C2D60u: goto label_1c2d60;
            case 0x1C2D80u: goto label_1c2d80;
            case 0x1C2DA0u: goto label_1c2da0;
            case 0x1C2DC8u: goto label_1c2dc8;
            case 0x1C2DF0u: goto label_1c2df0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C2D3Cu;
    // 0x1c2d3c: 0x0  nop
    ctx->pc = 0x1c2d3cu;
    // NOP
label_1c2d40:
    // 0x1c2d40: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2d44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2d48: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2d4c: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x1c2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1c2d50: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2D50u;
    SET_GPR_U32(ctx, 31, 0x1C2D58u);
    ctx->pc = 0x1C2D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D50u;
            // 0x1c2d54: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D58u; }
        if (ctx->pc != 0x1C2D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D58u; }
        if (ctx->pc != 0x1C2D58u) { return; }
    }
    ctx->pc = 0x1C2D58u;
    // 0x1c2d58: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1C2D58u;
    {
        const bool branch_taken_0x1c2d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d58) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2D60u;
label_1c2d60:
    // 0x1c2d60: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2d64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2d68: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2d6c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1c2d70: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2D70u;
    SET_GPR_U32(ctx, 31, 0x1C2D78u);
    ctx->pc = 0x1C2D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D70u;
            // 0x1c2d74: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D78u; }
        if (ctx->pc != 0x1C2D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D78u; }
        if (ctx->pc != 0x1C2D78u) { return; }
    }
    ctx->pc = 0x1C2D78u;
    // 0x1c2d78: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x1C2D78u;
    {
        const bool branch_taken_0x1c2d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d78) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2D80u;
label_1c2d80:
    // 0x1c2d80: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2d84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2d88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2d8c: 0x24640032  addiu       $a0, $v1, 0x32
    ctx->pc = 0x1c2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x1c2d90: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2D90u;
    SET_GPR_U32(ctx, 31, 0x1C2D98u);
    ctx->pc = 0x1C2D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D90u;
            // 0x1c2d94: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D98u; }
        if (ctx->pc != 0x1C2D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D98u; }
        if (ctx->pc != 0x1C2D98u) { return; }
    }
    ctx->pc = 0x1C2D98u;
    // 0x1c2d98: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x1C2D98u;
    {
        const bool branch_taken_0x1c2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d98) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2DA0u;
label_1c2da0:
    // 0x1c2da0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2da4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2da8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2dac: 0x0  nop
    ctx->pc = 0x1c2dacu;
    // NOP
    // 0x1c2db0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2db0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2db4: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x1c2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1c2db8: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2DB8u;
    SET_GPR_U32(ctx, 31, 0x1C2DC0u);
    ctx->pc = 0x1C2DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DB8u;
            // 0x1c2dbc: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DC0u; }
        if (ctx->pc != 0x1C2DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DC0u; }
        if (ctx->pc != 0x1C2DC0u) { return; }
    }
    ctx->pc = 0x1C2DC0u;
    // 0x1c2dc0: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x1C2DC0u;
    {
        const bool branch_taken_0x1c2dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2dc0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2DC8u;
label_1c2dc8:
    // 0x1c2dc8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2dcc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2dd0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2dd4: 0x0  nop
    ctx->pc = 0x1c2dd4u;
    // NOP
    // 0x1c2dd8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2dd8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2ddc: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1c2de0: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2DE0u;
    SET_GPR_U32(ctx, 31, 0x1C2DE8u);
    ctx->pc = 0x1C2DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DE0u;
            // 0x1c2de4: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DE8u; }
        if (ctx->pc != 0x1C2DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DE8u; }
        if (ctx->pc != 0x1C2DE8u) { return; }
    }
    ctx->pc = 0x1C2DE8u;
    // 0x1c2de8: 0x1000020f  b           . + 4 + (0x20F << 2)
    ctx->pc = 0x1C2DE8u;
    {
        const bool branch_taken_0x1c2de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2de8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2DF0u;
label_1c2df0:
    // 0x1c2df0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2df4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2df8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c2df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2dfc: 0x0  nop
    ctx->pc = 0x1c2dfcu;
    // NOP
    // 0x1c2e00: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1c2e00u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x1c2e04: 0x2464ffce  addiu       $a0, $v1, -0x32
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1c2e08: 0xc065478  jal         func_1951E0
    ctx->pc = 0x1C2E08u;
    SET_GPR_U32(ctx, 31, 0x1C2E10u);
    ctx->pc = 0x1C2E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E08u;
            // 0x1c2e0c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E10u; }
        if (ctx->pc != 0x1C2E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E10u; }
        if (ctx->pc != 0x1C2E10u) { return; }
    }
    ctx->pc = 0x1C2E10u;
    // 0x1c2e10: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x1C2E10u;
    {
        const bool branch_taken_0x1c2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2e10) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2E18u;
label_1c2e18:
    // 0x1c2e18: 0x286101c2  slti        $at, $v1, 0x1C2
    ctx->pc = 0x1c2e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)450) ? 1 : 0);
    // 0x1c2e1c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C2E1Cu;
    {
        const bool branch_taken_0x1c2e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E1Cu;
            // 0x1c2e20: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e1c) {
            ctx->pc = 0x1C2ED0u;
            goto label_1c2ed0;
        }
    }
    ctx->pc = 0x1C2E24u;
    // 0x1c2e24: 0x8c221c38  lw          $v0, 0x1C38($at)
    ctx->pc = 0x1c2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7224)));
    // 0x1c2e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e2c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2e34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2E34u;
    {
        const bool branch_taken_0x1c2e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E34u;
            // 0x1c2e38: 0x24430014  addiu       $v1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e34) {
            ctx->pc = 0x1C2E58u;
            goto label_1c2e58;
        }
    }
    ctx->pc = 0x1C2E3Cu;
    // 0x1c2e3c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c2e40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c2e40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c2e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e48: 0x0  nop
    ctx->pc = 0x1c2e48u;
    // NOP
    // 0x1c2e4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c2e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2e50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c2e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c2e54: 0x0  nop
    ctx->pc = 0x1c2e54u;
    // NOP
label_1c2e58:
    // 0x1c2e58: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c2e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c2e5c: 0x8c221c40  lw          $v0, 0x1C40($at)
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7232)));
    // 0x1c2e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e64: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c2e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c2e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2e6c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2E6Cu;
    {
        const bool branch_taken_0x1c2e6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E6Cu;
            // 0x1c2e70: 0x24430014  addiu       $v1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e6c) {
            ctx->pc = 0x1C2E90u;
            goto label_1c2e90;
        }
    }
    ctx->pc = 0x1C2E74u;
    // 0x1c2e74: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c2e78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c2e78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c2e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c2e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2e80: 0x0  nop
    ctx->pc = 0x1c2e80u;
    // NOP
    // 0x1c2e84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c2e84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c2e88: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c2e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c2e8c: 0x0  nop
    ctx->pc = 0x1c2e8cu;
    // NOP
label_1c2e90:
    // 0x1c2e90: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1c2e94: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c2e98: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2e98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2e9c: 0x0  nop
    ctx->pc = 0x1c2e9cu;
    // NOP
    // 0x1c2ea0: 0x0  nop
    ctx->pc = 0x1c2ea0u;
    // NOP
    // 0x1c2ea4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2ea4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2ea8: 0x144001df  bnez        $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x1C2EA8u;
    {
        const bool branch_taken_0x1c2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ea8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2EB0u;
    // 0x1c2eb0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2eb4: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1c2eb8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2ebc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c2ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2ec0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2EC0u;
    SET_GPR_U32(ctx, 31, 0x1C2EC8u);
    ctx->pc = 0x1C2EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EC0u;
            // 0x1c2ec4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EC8u; }
        if (ctx->pc != 0x1C2EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EC8u; }
        if (ctx->pc != 0x1C2EC8u) { return; }
    }
    ctx->pc = 0x1C2EC8u;
    // 0x1c2ec8: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1C2EC8u;
    {
        const bool branch_taken_0x1c2ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ec8) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2ED0u;
label_1c2ed0:
    // 0x1c2ed0: 0x240201c2  addiu       $v0, $zero, 0x1C2
    ctx->pc = 0x1c2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
    // 0x1c2ed4: 0x146201d4  bne         $v1, $v0, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x1C2ED4u;
    {
        const bool branch_taken_0x1c2ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2ed4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2EDCu;
    // 0x1c2edc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2ee0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c2ee4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c2ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2ee8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c2ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c2eec: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C2EECu;
    SET_GPR_U32(ctx, 31, 0x1C2EF4u);
    ctx->pc = 0x1C2EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EECu;
            // 0x1c2ef0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EF4u; }
        if (ctx->pc != 0x1C2EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EF4u; }
        if (ctx->pc != 0x1C2EF4u) { return; }
    }
    ctx->pc = 0x1C2EF4u;
    // 0x1c2ef4: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x1C2EF4u;
    {
        const bool branch_taken_0x1c2ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ef4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C2EFCu;
    // 0x1c2efc: 0x0  nop
    ctx->pc = 0x1c2efcu;
    // NOP
label_1c2f00:
    // 0x1c2f00: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1C2F00u;
    SET_GPR_U32(ctx, 31, 0x1C2F08u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F08u; }
        if (ctx->pc != 0x1C2F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F08u; }
        if (ctx->pc != 0x1C2F08u) { return; }
    }
    ctx->pc = 0x1C2F08u;
    // 0x1c2f08: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1C2F08u;
    SET_GPR_U32(ctx, 31, 0x1C2F10u);
    ctx->pc = 0x1C2F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F08u;
            // 0x1c2f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F10u; }
        if (ctx->pc != 0x1C2F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F10u; }
        if (ctx->pc != 0x1C2F10u) { return; }
    }
    ctx->pc = 0x1C2F10u;
    // 0x1c2f10: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1C2F10u;
    SET_GPR_U32(ctx, 31, 0x1C2F18u);
    ctx->pc = 0x1C2F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F10u;
            // 0x1c2f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F18u; }
        if (ctx->pc != 0x1C2F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F18u; }
        if (ctx->pc != 0x1C2F18u) { return; }
    }
    ctx->pc = 0x1C2F18u;
    // 0x1c2f18: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2f1c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c2f20: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c2f20u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c2f24: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c2f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c2f28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2f2c: 0x0  nop
    ctx->pc = 0x1c2f2cu;
    // NOP
    // 0x1c2f30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c2f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c2f34: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c2f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c2f38: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c2f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c2f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c2f40: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c2f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c2f44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2f48: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2f4c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c2f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2f50: 0xc071024  jal         func_1C4090
    ctx->pc = 0x1C2F50u;
    SET_GPR_U32(ctx, 31, 0x1C2F58u);
    ctx->pc = 0x1C2F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F50u;
            // 0x1c2f54: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4090u;
    if (runtime->hasFunction(0x1C4090u)) {
        auto targetFn = runtime->lookupFunction(0x1C4090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F58u; }
        if (ctx->pc != 0x1C2F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c4090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F58u; }
        if (ctx->pc != 0x1C2F58u) { return; }
    }
    ctx->pc = 0x1C2F58u;
    // 0x1c2f58: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c2f5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2f60: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1c2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1c2f64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c2f68: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1c2f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1c2f6c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c2f70: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c2f70u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c2f74: 0x0  nop
    ctx->pc = 0x1c2f74u;
    // NOP
    // 0x1c2f78: 0x0  nop
    ctx->pc = 0x1c2f78u;
    // NOP
    // 0x1c2f7c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c2f7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c2f80: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1C2F80u;
    {
        const bool branch_taken_0x1c2f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2f80) {
            ctx->pc = 0x1C31A8u;
            goto label_1c31a8;
        }
    }
    ctx->pc = 0x1C2F88u;
    // 0x1c2f88: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C2F88u;
    SET_GPR_U32(ctx, 31, 0x1C2F90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F90u; }
        if (ctx->pc != 0x1C2F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F90u; }
        if (ctx->pc != 0x1C2F90u) { return; }
    }
    ctx->pc = 0x1C2F90u;
    // 0x1c2f90: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c2f94: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2f94u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2f98: 0x0  nop
    ctx->pc = 0x1c2f98u;
    // NOP
    // 0x1c2f9c: 0x0  nop
    ctx->pc = 0x1c2f9cu;
    // NOP
    // 0x1c2fa0: 0x9010  mfhi        $s2
    ctx->pc = 0x1c2fa0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1c2fa4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C2FA4u;
    SET_GPR_U32(ctx, 31, 0x1C2FACu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FACu; }
        if (ctx->pc != 0x1C2FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FACu; }
        if (ctx->pc != 0x1C2FACu) { return; }
    }
    ctx->pc = 0x1C2FACu;
    // 0x1c2fac: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1c2facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c2fb0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c2fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c2fb4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c2fb4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c2fb8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c2fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2fbc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2fc0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2fc4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c2fc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c2fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c2fcc: 0x8810  mfhi        $s1
    ctx->pc = 0x1c2fccu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c2fd0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c2fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2fd8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c2fd8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c2fdc: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1c2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1c2fe0: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1c2fe4: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1c2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1c2fe8: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1C2FE8u;
    SET_GPR_U32(ctx, 31, 0x1C2FF0u);
    ctx->pc = 0x1C2FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2FE8u;
            // 0x1c2fec: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FF0u; }
        if (ctx->pc != 0x1C2FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2FF0u; }
        if (ctx->pc != 0x1C2FF0u) { return; }
    }
    ctx->pc = 0x1C2FF0u;
    // 0x1c2ff0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2ff4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1c2ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c2ff8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c2ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c2ffc: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x1c2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c3000: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c3000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3004: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c3004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3008: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c3008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c300c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c300cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3010: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3014: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c3014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c3018: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c3018u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c301c: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c3020: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c3020u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c3024: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C3024u;
    SET_GPR_U32(ctx, 31, 0x1C302Cu);
    ctx->pc = 0x1C3028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3024u;
            // 0x1c3028: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C302Cu; }
        if (ctx->pc != 0x1C302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C302Cu; }
        if (ctx->pc != 0x1C302Cu) { return; }
    }
    ctx->pc = 0x1C302Cu;
    // 0x1c302c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c3030: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1c3030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c3034: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c3034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3038: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c303c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3040: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c3040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3044: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c3044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c3048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c304c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3050: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1c3050u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c3054: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c3054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c3058: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c3058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c305c: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c305cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c3060: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C3060u;
    SET_GPR_U32(ctx, 31, 0x1C3068u);
    ctx->pc = 0x1C3064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3060u;
            // 0x1c3064: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3068u; }
        if (ctx->pc != 0x1C3068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3068u; }
        if (ctx->pc != 0x1C3068u) { return; }
    }
    ctx->pc = 0x1C3068u;
    // 0x1c3068: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c3068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c306c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1c306cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c3070: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c3070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3074: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c3074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c3078: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1c3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1c307c: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1c3080: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c3080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3088: 0x0  nop
    ctx->pc = 0x1c3088u;
    // NOP
    // 0x1c308c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c308cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c3090: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C3090u;
    SET_GPR_U32(ctx, 31, 0x1C3098u);
    ctx->pc = 0x1C3094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3090u;
            // 0x1c3094: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3098u; }
        if (ctx->pc != 0x1C3098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3098u; }
        if (ctx->pc != 0x1C3098u) { return; }
    }
    ctx->pc = 0x1C3098u;
    // 0x1c3098: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3098u;
    SET_GPR_U32(ctx, 31, 0x1C30A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30A0u; }
        if (ctx->pc != 0x1C30A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30A0u; }
        if (ctx->pc != 0x1C30A0u) { return; }
    }
    ctx->pc = 0x1C30A0u;
    // 0x1c30a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c30a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c30a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C30A4u;
    {
        const bool branch_taken_0x1c30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c30a4) {
            ctx->pc = 0x1C30E0u;
            goto label_1c30e0;
        }
    }
    ctx->pc = 0x1C30ACu;
    // 0x1c30ac: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c30acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c30b0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c30b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c30b4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c30b8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c30bc: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1c30bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1c30c0: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1c30c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c30c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c30c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c30c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c30cc: 0x0  nop
    ctx->pc = 0x1c30ccu;
    // NOP
    // 0x1c30d0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c30d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c30d4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C30D4u;
    SET_GPR_U32(ctx, 31, 0x1C30DCu);
    ctx->pc = 0x1C30D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C30D4u;
            // 0x1c30d8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30DCu; }
        if (ctx->pc != 0x1C30DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30DCu; }
        if (ctx->pc != 0x1C30DCu) { return; }
    }
    ctx->pc = 0x1C30DCu;
    // 0x1c30dc: 0x0  nop
    ctx->pc = 0x1c30dcu;
    // NOP
label_1c30e0:
    // 0x1c30e0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C30E0u;
    SET_GPR_U32(ctx, 31, 0x1C30E8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30E8u; }
        if (ctx->pc != 0x1C30E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C30E8u; }
        if (ctx->pc != 0x1C30E8u) { return; }
    }
    ctx->pc = 0x1C30E8u;
    // 0x1c30e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c30e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c30ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C30ECu;
    {
        const bool branch_taken_0x1c30ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c30ec) {
            ctx->pc = 0x1C3128u;
            goto label_1c3128;
        }
    }
    ctx->pc = 0x1C30F4u;
    // 0x1c30f4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c30f8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c30fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c3100: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1c3104: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1c3108: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1c310c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c310cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3114: 0x0  nop
    ctx->pc = 0x1c3114u;
    // NOP
    // 0x1c3118: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c3118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c311c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C311Cu;
    SET_GPR_U32(ctx, 31, 0x1C3124u);
    ctx->pc = 0x1C3120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C311Cu;
            // 0x1c3120: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3124u; }
        if (ctx->pc != 0x1C3124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3124u; }
        if (ctx->pc != 0x1C3124u) { return; }
    }
    ctx->pc = 0x1C3124u;
    // 0x1c3124: 0x0  nop
    ctx->pc = 0x1c3124u;
    // NOP
label_1c3128:
    // 0x1c3128: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1c3128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c312c: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1c312cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1c3130: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C3130u;
    {
        const bool branch_taken_0x1c3130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3130u;
            // 0x1c3134: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3130) {
            ctx->pc = 0x1C31A8u;
            goto label_1c31a8;
        }
    }
    ctx->pc = 0x1C3138u;
    // 0x1c3138: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C3138u;
    SET_GPR_U32(ctx, 31, 0x1C3140u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3140u; }
        if (ctx->pc != 0x1C3140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3140u; }
        if (ctx->pc != 0x1C3140u) { return; }
    }
    ctx->pc = 0x1C3140u;
    // 0x1c3140: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3140u;
    {
        const bool branch_taken_0x1c3140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3140) {
            ctx->pc = 0x1C3170u;
            goto label_1c3170;
        }
    }
    ctx->pc = 0x1C3148u;
    // 0x1c3148: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3148u;
    SET_GPR_U32(ctx, 31, 0x1C3150u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3150u; }
        if (ctx->pc != 0x1C3150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3150u; }
        if (ctx->pc != 0x1C3150u) { return; }
    }
    ctx->pc = 0x1C3150u;
    // 0x1c3150: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c3150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c3154: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c3154u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c3158: 0x0  nop
    ctx->pc = 0x1c3158u;
    // NOP
    // 0x1c315c: 0x0  nop
    ctx->pc = 0x1c315cu;
    // NOP
    // 0x1c3160: 0x2810  mfhi        $a1
    ctx->pc = 0x1c3160u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c3164: 0xc055124  jal         func_154490
    ctx->pc = 0x1C3164u;
    SET_GPR_U32(ctx, 31, 0x1C316Cu);
    ctx->pc = 0x1C3168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3164u;
            // 0x1c3168: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C316Cu; }
        if (ctx->pc != 0x1C316Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C316Cu; }
        if (ctx->pc != 0x1C316Cu) { return; }
    }
    ctx->pc = 0x1C316Cu;
    // 0x1c316c: 0x0  nop
    ctx->pc = 0x1c316cu;
    // NOP
label_1c3170:
    // 0x1c3170: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C3170u;
    SET_GPR_U32(ctx, 31, 0x1C3178u);
    ctx->pc = 0x1C3174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3170u;
            // 0x1c3174: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3178u; }
        if (ctx->pc != 0x1C3178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3178u; }
        if (ctx->pc != 0x1C3178u) { return; }
    }
    ctx->pc = 0x1C3178u;
    // 0x1c3178: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3178u;
    {
        const bool branch_taken_0x1c3178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3178) {
            ctx->pc = 0x1C31A8u;
            goto label_1c31a8;
        }
    }
    ctx->pc = 0x1C3180u;
    // 0x1c3180: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3180u;
    SET_GPR_U32(ctx, 31, 0x1C3188u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3188u; }
        if (ctx->pc != 0x1C3188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3188u; }
        if (ctx->pc != 0x1C3188u) { return; }
    }
    ctx->pc = 0x1C3188u;
    // 0x1c3188: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c3188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c318c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c318cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c3190: 0x0  nop
    ctx->pc = 0x1c3190u;
    // NOP
    // 0x1c3194: 0x0  nop
    ctx->pc = 0x1c3194u;
    // NOP
    // 0x1c3198: 0x2810  mfhi        $a1
    ctx->pc = 0x1c3198u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c319c: 0xc055124  jal         func_154490
    ctx->pc = 0x1C319Cu;
    SET_GPR_U32(ctx, 31, 0x1C31A4u);
    ctx->pc = 0x1C31A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C319Cu;
            // 0x1c31a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31A4u; }
        if (ctx->pc != 0x1C31A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31A4u; }
        if (ctx->pc != 0x1C31A4u) { return; }
    }
    ctx->pc = 0x1C31A4u;
    // 0x1c31a4: 0x0  nop
    ctx->pc = 0x1c31a4u;
    // NOP
label_1c31a8:
    // 0x1c31a8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c31ac: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1c31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c31b0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C31B0u;
    {
        const bool branch_taken_0x1c31b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C31B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31B0u;
            // 0x1c31b4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31b0) {
            ctx->pc = 0x1C31F8u;
            goto label_1c31f8;
        }
    }
    ctx->pc = 0x1C31B8u;
    // 0x1c31b8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C31B8u;
    SET_GPR_U32(ctx, 31, 0x1C31C0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31C0u; }
        if (ctx->pc != 0x1C31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31C0u; }
        if (ctx->pc != 0x1C31C0u) { return; }
    }
    ctx->pc = 0x1C31C0u;
    // 0x1c31c0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C31C0u;
    SET_GPR_U32(ctx, 31, 0x1C31C8u);
    ctx->pc = 0x1C31C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31C0u;
            // 0x1c31c4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31C8u; }
        if (ctx->pc != 0x1C31C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31C8u; }
        if (ctx->pc != 0x1C31C8u) { return; }
    }
    ctx->pc = 0x1C31C8u;
    // 0x1c31c8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C31C8u;
    SET_GPR_U32(ctx, 31, 0x1C31D0u);
    ctx->pc = 0x1C31CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31C8u;
            // 0x1c31cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31D0u; }
        if (ctx->pc != 0x1C31D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31D0u; }
        if (ctx->pc != 0x1C31D0u) { return; }
    }
    ctx->pc = 0x1C31D0u;
    // 0x1c31d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C31D0u;
    {
        const bool branch_taken_0x1c31d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31D0u;
            // 0x1c31d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31d0) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C31D8u;
    // 0x1c31d8: 0xc055124  jal         func_154490
    ctx->pc = 0x1C31D8u;
    SET_GPR_U32(ctx, 31, 0x1C31E0u);
    ctx->pc = 0x1C31DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31D8u;
            // 0x1c31dc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31E0u; }
        if (ctx->pc != 0x1C31E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31E0u; }
        if (ctx->pc != 0x1C31E0u) { return; }
    }
    ctx->pc = 0x1C31E0u;
label_1c31e0:
    // 0x1c31e0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C31E0u;
    SET_GPR_U32(ctx, 31, 0x1C31E8u);
    ctx->pc = 0x1C31E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31E0u;
            // 0x1c31e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31E8u; }
        if (ctx->pc != 0x1C31E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31E8u; }
        if (ctx->pc != 0x1C31E8u) { return; }
    }
    ctx->pc = 0x1C31E8u;
    // 0x1c31e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C31E8u;
    {
        const bool branch_taken_0x1c31e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31E8u;
            // 0x1c31ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31e8) {
            ctx->pc = 0x1C31F8u;
            goto label_1c31f8;
        }
    }
    ctx->pc = 0x1C31F0u;
    // 0x1c31f0: 0xc055124  jal         func_154490
    ctx->pc = 0x1C31F0u;
    SET_GPR_U32(ctx, 31, 0x1C31F8u);
    ctx->pc = 0x1C31F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31F0u;
            // 0x1c31f4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31F8u; }
        if (ctx->pc != 0x1C31F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C31F8u; }
        if (ctx->pc != 0x1C31F8u) { return; }
    }
    ctx->pc = 0x1C31F8u;
label_1c31f8:
    // 0x1c31f8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c31fc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c3200: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C3200u;
    {
        const bool branch_taken_0x1c3200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3200u;
            // 0x1c3204: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3200) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C3208u;
    // 0x1c3208: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C3208u;
    SET_GPR_U32(ctx, 31, 0x1C3210u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3210u; }
        if (ctx->pc != 0x1C3210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3210u; }
        if (ctx->pc != 0x1C3210u) { return; }
    }
    ctx->pc = 0x1C3210u;
    // 0x1c3210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3214: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3218: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c3218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c321c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c321cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c3220: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c3220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c3224: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c3224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c3228: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c3228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c322c: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1C322Cu;
    SET_GPR_U32(ctx, 31, 0x1C3234u);
    ctx->pc = 0x1C3230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C322Cu;
            // 0x1c3230: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3234u; }
        if (ctx->pc != 0x1C3234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3234u; }
        if (ctx->pc != 0x1C3234u) { return; }
    }
    ctx->pc = 0x1C3234u;
    // 0x1c3234: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3234u;
    SET_GPR_U32(ctx, 31, 0x1C323Cu);
    ctx->pc = 0x1C3238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3234u;
            // 0x1c3238: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C323Cu; }
        if (ctx->pc != 0x1C323Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C323Cu; }
        if (ctx->pc != 0x1C323Cu) { return; }
    }
    ctx->pc = 0x1C323Cu;
    // 0x1c323c: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C323Cu;
    SET_GPR_U32(ctx, 31, 0x1C3244u);
    ctx->pc = 0x1C3240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C323Cu;
            // 0x1c3240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3244u; }
        if (ctx->pc != 0x1C3244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3244u; }
        if (ctx->pc != 0x1C3244u) { return; }
    }
    ctx->pc = 0x1C3244u;
    // 0x1c3244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3244u;
    {
        const bool branch_taken_0x1c3244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3244u;
            // 0x1c3248: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3244) {
            ctx->pc = 0x1C3258u;
            goto label_1c3258;
        }
    }
    ctx->pc = 0x1C324Cu;
    // 0x1c324c: 0xc055124  jal         func_154490
    ctx->pc = 0x1C324Cu;
    SET_GPR_U32(ctx, 31, 0x1C3254u);
    ctx->pc = 0x1C3250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C324Cu;
            // 0x1c3250: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3254u; }
        if (ctx->pc != 0x1C3254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3254u; }
        if (ctx->pc != 0x1C3254u) { return; }
    }
    ctx->pc = 0x1C3254u;
    // 0x1c3254: 0x0  nop
    ctx->pc = 0x1c3254u;
    // NOP
label_1c3258:
    // 0x1c3258: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C3258u;
    SET_GPR_U32(ctx, 31, 0x1C3260u);
    ctx->pc = 0x1C325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3258u;
            // 0x1c325c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3260u; }
        if (ctx->pc != 0x1C3260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3260u; }
        if (ctx->pc != 0x1C3260u) { return; }
    }
    ctx->pc = 0x1C3260u;
    // 0x1c3260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3260u;
    {
        const bool branch_taken_0x1c3260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3260u;
            // 0x1c3264: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3260) {
            ctx->pc = 0x1C3270u;
            goto label_1c3270;
        }
    }
    ctx->pc = 0x1C3268u;
    // 0x1c3268: 0xc055124  jal         func_154490
    ctx->pc = 0x1C3268u;
    SET_GPR_U32(ctx, 31, 0x1C3270u);
    ctx->pc = 0x1C326Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3268u;
            // 0x1c326c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3270u; }
        if (ctx->pc != 0x1C3270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3270u; }
        if (ctx->pc != 0x1C3270u) { return; }
    }
    ctx->pc = 0x1C3270u;
label_1c3270:
    // 0x1c3270: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c3274: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1c3274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1c3278: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3278u;
    {
        const bool branch_taken_0x1c3278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3278u;
            // 0x1c327c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3278) {
            ctx->pc = 0x1C32C0u;
            goto label_1c32c0;
        }
    }
    ctx->pc = 0x1C3280u;
    // 0x1c3280: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C3280u;
    SET_GPR_U32(ctx, 31, 0x1C3288u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3288u; }
        if (ctx->pc != 0x1C3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3288u; }
        if (ctx->pc != 0x1C3288u) { return; }
    }
    ctx->pc = 0x1C3288u;
    // 0x1c3288: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3288u;
    SET_GPR_U32(ctx, 31, 0x1C3290u);
    ctx->pc = 0x1C328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3288u;
            // 0x1c328c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3290u; }
        if (ctx->pc != 0x1C3290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3290u; }
        if (ctx->pc != 0x1C3290u) { return; }
    }
    ctx->pc = 0x1C3290u;
    // 0x1c3290: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C3290u;
    SET_GPR_U32(ctx, 31, 0x1C3298u);
    ctx->pc = 0x1C3294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3290u;
            // 0x1c3294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3298u; }
        if (ctx->pc != 0x1C3298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3298u; }
        if (ctx->pc != 0x1C3298u) { return; }
    }
    ctx->pc = 0x1C3298u;
    // 0x1c3298: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3298u;
    {
        const bool branch_taken_0x1c3298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C329Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3298u;
            // 0x1c329c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3298) {
            ctx->pc = 0x1C32A8u;
            goto label_1c32a8;
        }
    }
    ctx->pc = 0x1C32A0u;
    // 0x1c32a0: 0xc055124  jal         func_154490
    ctx->pc = 0x1C32A0u;
    SET_GPR_U32(ctx, 31, 0x1C32A8u);
    ctx->pc = 0x1C32A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32A0u;
            // 0x1c32a4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32A8u; }
        if (ctx->pc != 0x1C32A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32A8u; }
        if (ctx->pc != 0x1C32A8u) { return; }
    }
    ctx->pc = 0x1C32A8u;
label_1c32a8:
    // 0x1c32a8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C32A8u;
    SET_GPR_U32(ctx, 31, 0x1C32B0u);
    ctx->pc = 0x1C32ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32A8u;
            // 0x1c32ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32B0u; }
        if (ctx->pc != 0x1C32B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32B0u; }
        if (ctx->pc != 0x1C32B0u) { return; }
    }
    ctx->pc = 0x1C32B0u;
    // 0x1c32b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C32B0u;
    {
        const bool branch_taken_0x1c32b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32B0u;
            // 0x1c32b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32b0) {
            ctx->pc = 0x1C32C0u;
            goto label_1c32c0;
        }
    }
    ctx->pc = 0x1C32B8u;
    // 0x1c32b8: 0xc055124  jal         func_154490
    ctx->pc = 0x1C32B8u;
    SET_GPR_U32(ctx, 31, 0x1C32C0u);
    ctx->pc = 0x1C32BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32B8u;
            // 0x1c32bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32C0u; }
        if (ctx->pc != 0x1C32C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32C0u; }
        if (ctx->pc != 0x1C32C0u) { return; }
    }
    ctx->pc = 0x1C32C0u;
label_1c32c0:
    // 0x1c32c0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c32c4: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1c32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1c32c8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C32C8u;
    {
        const bool branch_taken_0x1c32c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C32CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32C8u;
            // 0x1c32cc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32c8) {
            ctx->pc = 0x1C3338u;
            goto label_1c3338;
        }
    }
    ctx->pc = 0x1C32D0u;
    // 0x1c32d0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C32D0u;
    SET_GPR_U32(ctx, 31, 0x1C32D8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32D8u; }
        if (ctx->pc != 0x1C32D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32D8u; }
        if (ctx->pc != 0x1C32D8u) { return; }
    }
    ctx->pc = 0x1C32D8u;
    // 0x1c32d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c32dc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c32e0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c32e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c32e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c32e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c32e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c32ec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c32ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c32f0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c32f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c32f4: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1C32F4u;
    SET_GPR_U32(ctx, 31, 0x1C32FCu);
    ctx->pc = 0x1C32F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32F4u;
            // 0x1c32f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32FCu; }
        if (ctx->pc != 0x1C32FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C32FCu; }
        if (ctx->pc != 0x1C32FCu) { return; }
    }
    ctx->pc = 0x1C32FCu;
    // 0x1c32fc: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C32FCu;
    SET_GPR_U32(ctx, 31, 0x1C3304u);
    ctx->pc = 0x1C3300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C32FCu;
            // 0x1c3300: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3304u; }
        if (ctx->pc != 0x1C3304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3304u; }
        if (ctx->pc != 0x1C3304u) { return; }
    }
    ctx->pc = 0x1C3304u;
    // 0x1c3304: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C3304u;
    SET_GPR_U32(ctx, 31, 0x1C330Cu);
    ctx->pc = 0x1C3308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3304u;
            // 0x1c3308: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C330Cu; }
        if (ctx->pc != 0x1C330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C330Cu; }
        if (ctx->pc != 0x1C330Cu) { return; }
    }
    ctx->pc = 0x1C330Cu;
    // 0x1c330c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C330Cu;
    {
        const bool branch_taken_0x1c330c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C330Cu;
            // 0x1c3310: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c330c) {
            ctx->pc = 0x1C3320u;
            goto label_1c3320;
        }
    }
    ctx->pc = 0x1C3314u;
    // 0x1c3314: 0xc055124  jal         func_154490
    ctx->pc = 0x1C3314u;
    SET_GPR_U32(ctx, 31, 0x1C331Cu);
    ctx->pc = 0x1C3318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3314u;
            // 0x1c3318: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C331Cu; }
        if (ctx->pc != 0x1C331Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C331Cu; }
        if (ctx->pc != 0x1C331Cu) { return; }
    }
    ctx->pc = 0x1C331Cu;
    // 0x1c331c: 0x0  nop
    ctx->pc = 0x1c331cu;
    // NOP
label_1c3320:
    // 0x1c3320: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C3320u;
    SET_GPR_U32(ctx, 31, 0x1C3328u);
    ctx->pc = 0x1C3324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3320u;
            // 0x1c3324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3328u; }
        if (ctx->pc != 0x1C3328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3328u; }
        if (ctx->pc != 0x1C3328u) { return; }
    }
    ctx->pc = 0x1C3328u;
    // 0x1c3328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3328u;
    {
        const bool branch_taken_0x1c3328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C332Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3328u;
            // 0x1c332c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3328) {
            ctx->pc = 0x1C3338u;
            goto label_1c3338;
        }
    }
    ctx->pc = 0x1C3330u;
    // 0x1c3330: 0xc055124  jal         func_154490
    ctx->pc = 0x1C3330u;
    SET_GPR_U32(ctx, 31, 0x1C3338u);
    ctx->pc = 0x1C3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3330u;
            // 0x1c3334: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3338u; }
        if (ctx->pc != 0x1C3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3338u; }
        if (ctx->pc != 0x1C3338u) { return; }
    }
    ctx->pc = 0x1C3338u;
label_1c3338:
    // 0x1c3338: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c3338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c333c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3340: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1c3340u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1c3344: 0x142000b8  bnez        $at, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1C3344u;
    {
        const bool branch_taken_0x1c3344 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3344u;
            // 0x1c3348: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3344) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C334Cu;
    // 0x1c334c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c334cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3350: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C3350u;
    SET_GPR_U32(ctx, 31, 0x1C3358u);
    ctx->pc = 0x1C3354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3350u;
            // 0x1c3354: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3358u; }
        if (ctx->pc != 0x1C3358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3358u; }
        if (ctx->pc != 0x1C3358u) { return; }
    }
    ctx->pc = 0x1C3358u;
    // 0x1c3358: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c3358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c335c: 0x0  nop
    ctx->pc = 0x1c335cu;
    // NOP
label_1c3360:
    // 0x1c3360: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3360u;
    SET_GPR_U32(ctx, 31, 0x1C3368u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3368u; }
        if (ctx->pc != 0x1C3368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3368u; }
        if (ctx->pc != 0x1C3368u) { return; }
    }
    ctx->pc = 0x1C3368u;
    // 0x1c3368: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1c3368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1c336c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c336cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c3370: 0x0  nop
    ctx->pc = 0x1c3370u;
    // NOP
    // 0x1c3374: 0x0  nop
    ctx->pc = 0x1c3374u;
    // NOP
    // 0x1c3378: 0x9010  mfhi        $s2
    ctx->pc = 0x1c3378u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1c337c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C337Cu;
    SET_GPR_U32(ctx, 31, 0x1C3384u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3384u; }
        if (ctx->pc != 0x1C3384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3384u; }
        if (ctx->pc != 0x1C3384u) { return; }
    }
    ctx->pc = 0x1C3384u;
    // 0x1c3384: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1c3384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c3388: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c338c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c338cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c3390: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c3390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3394: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c3394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3398: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c3398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c339c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c33a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c33a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c33a4: 0x8810  mfhi        $s1
    ctx->pc = 0x1c33a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c33a8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c33ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c33acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c33b0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c33b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c33b4: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1c33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1c33b8: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1c33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c33bc: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c33c0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c33c4: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C33C4u;
    SET_GPR_U32(ctx, 31, 0x1C33CCu);
    ctx->pc = 0x1C33C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C33C4u;
            // 0x1c33c8: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33CCu; }
        if (ctx->pc != 0x1C33CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C33CCu; }
        if (ctx->pc != 0x1C33CCu) { return; }
    }
    ctx->pc = 0x1C33CCu;
    // 0x1c33cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c33d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c33d4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c33d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c33d8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c33dc: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c33e0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c33e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c33e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c33e8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c33ec: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1c33f0: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c33f4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c33f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c33f8: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c33fc: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c33fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c3400: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1C3400u;
    SET_GPR_U32(ctx, 31, 0x1C3408u);
    ctx->pc = 0x1C3404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3400u;
            // 0x1c3404: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3408u; }
        if (ctx->pc != 0x1C3408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3408u; }
        if (ctx->pc != 0x1C3408u) { return; }
    }
    ctx->pc = 0x1C3408u;
    // 0x1c3408: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c340c: 0x2a62003c  slti        $v0, $s3, 0x3C
    ctx->pc = 0x1c340cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1c3410: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C3410u;
    {
        const bool branch_taken_0x1c3410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3410u;
            // 0x1c3414: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3410) {
            ctx->pc = 0x1C3360u;
            goto label_1c3360;
        }
    }
    ctx->pc = 0x1C3418u;
    // 0x1c3418: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c3418u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1c341c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1c341cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1c3420: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c3420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c3424: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1C3424u;
    {
        const bool branch_taken_0x1c3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3424u;
            // 0x1c3428: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3424) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C342Cu;
    // 0x1c342c: 0x0  nop
    ctx->pc = 0x1c342cu;
    // NOP
label_1c3430:
    // 0x1c3430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3434: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x1c3438: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1c3438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1c343c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c3440: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3444: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1c3444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1c3448: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1c3448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1c344c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3450: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1c3450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1c3454: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c3454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c3458: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c345c: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1c345cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1c3460: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c3460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c3464: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c3464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c3468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3468u;
    {
        const bool branch_taken_0x1c3468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C346Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3468u;
            // 0x1c346c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3468) {
            ctx->pc = 0x1C3478u;
            goto label_1c3478;
        }
    }
    ctx->pc = 0x1C3470u;
    // 0x1c3470: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3470u;
    SET_GPR_U32(ctx, 31, 0x1C3478u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3478u; }
        if (ctx->pc != 0x1C3478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3478u; }
        if (ctx->pc != 0x1C3478u) { return; }
    }
    ctx->pc = 0x1C3478u;
label_1c3478:
    // 0x1c3478: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c347c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3480: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3480u;
    {
        const bool branch_taken_0x1c3480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3480u;
            // 0x1c3484: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3480) {
            ctx->pc = 0x1C3490u;
            goto label_1c3490;
        }
    }
    ctx->pc = 0x1C3488u;
    // 0x1c3488: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3488u;
    SET_GPR_U32(ctx, 31, 0x1C3490u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3490u; }
        if (ctx->pc != 0x1C3490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3490u; }
        if (ctx->pc != 0x1C3490u) { return; }
    }
    ctx->pc = 0x1C3490u;
label_1c3490:
    // 0x1c3490: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c3490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c3494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3498: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3498u;
    {
        const bool branch_taken_0x1c3498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3498u;
            // 0x1c349c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3498) {
            ctx->pc = 0x1C34A8u;
            goto label_1c34a8;
        }
    }
    ctx->pc = 0x1C34A0u;
    // 0x1c34a0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C34A0u;
    SET_GPR_U32(ctx, 31, 0x1C34A8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34A8u; }
        if (ctx->pc != 0x1C34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34A8u; }
        if (ctx->pc != 0x1C34A8u) { return; }
    }
    ctx->pc = 0x1C34A8u;
label_1c34a8:
    // 0x1c34a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c34ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c34b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C34B0u;
    {
        const bool branch_taken_0x1c34b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C34B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34B0u;
            // 0x1c34b4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34b0) {
            ctx->pc = 0x1C34C0u;
            goto label_1c34c0;
        }
    }
    ctx->pc = 0x1C34B8u;
    // 0x1c34b8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C34B8u;
    SET_GPR_U32(ctx, 31, 0x1C34C0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C0u; }
        if (ctx->pc != 0x1C34C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C0u; }
        if (ctx->pc != 0x1C34C0u) { return; }
    }
    ctx->pc = 0x1C34C0u;
label_1c34c0:
    // 0x1c34c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c34c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c34c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C34C8u;
    {
        const bool branch_taken_0x1c34c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C34CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34C8u;
            // 0x1c34cc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34c8) {
            ctx->pc = 0x1C34D8u;
            goto label_1c34d8;
        }
    }
    ctx->pc = 0x1C34D0u;
    // 0x1c34d0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C34D0u;
    SET_GPR_U32(ctx, 31, 0x1C34D8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34D8u; }
        if (ctx->pc != 0x1C34D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34D8u; }
        if (ctx->pc != 0x1C34D8u) { return; }
    }
    ctx->pc = 0x1C34D8u;
label_1c34d8:
    // 0x1c34d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c34dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c34e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C34E0u;
    {
        const bool branch_taken_0x1c34e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C34E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34E0u;
            // 0x1c34e4: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34e0) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C34E8u;
    // 0x1c34e8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C34E8u;
    SET_GPR_U32(ctx, 31, 0x1C34F0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34F0u; }
        if (ctx->pc != 0x1C34F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34F0u; }
        if (ctx->pc != 0x1C34F0u) { return; }
    }
    ctx->pc = 0x1C34F0u;
label_1c34f0:
    // 0x1c34f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c34f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c34f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C34F8u;
    {
        const bool branch_taken_0x1c34f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34F8u;
            // 0x1c34fc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34f8) {
            ctx->pc = 0x1C3508u;
            goto label_1c3508;
        }
    }
    ctx->pc = 0x1C3500u;
    // 0x1c3500: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3500u;
    SET_GPR_U32(ctx, 31, 0x1C3508u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3508u; }
        if (ctx->pc != 0x1C3508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3508u; }
        if (ctx->pc != 0x1C3508u) { return; }
    }
    ctx->pc = 0x1C3508u;
label_1c3508:
    // 0x1c3508: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c350c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c3510: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3510u;
    {
        const bool branch_taken_0x1c3510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3510u;
            // 0x1c3514: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3510) {
            ctx->pc = 0x1C3520u;
            goto label_1c3520;
        }
    }
    ctx->pc = 0x1C3518u;
    // 0x1c3518: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3518u;
    SET_GPR_U32(ctx, 31, 0x1C3520u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3520u; }
        if (ctx->pc != 0x1C3520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3520u; }
        if (ctx->pc != 0x1C3520u) { return; }
    }
    ctx->pc = 0x1C3520u;
label_1c3520:
    // 0x1c3520: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c3524: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3528: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3528u;
    {
        const bool branch_taken_0x1c3528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3528u;
            // 0x1c352c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3528) {
            ctx->pc = 0x1C3538u;
            goto label_1c3538;
        }
    }
    ctx->pc = 0x1C3530u;
    // 0x1c3530: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C3530u;
    SET_GPR_U32(ctx, 31, 0x1C3538u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3538u; }
        if (ctx->pc != 0x1C3538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3538u; }
        if (ctx->pc != 0x1C3538u) { return; }
    }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c353c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3540: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C3540u;
    {
        const bool branch_taken_0x1c3540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3540) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C3548u;
    // 0x1c3548: 0xc056054  jal         func_158150
    ctx->pc = 0x1C3548u;
    SET_GPR_U32(ctx, 31, 0x1C3550u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3550u; }
        if (ctx->pc != 0x1C3550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3550u; }
        if (ctx->pc != 0x1C3550u) { return; }
    }
    ctx->pc = 0x1C3550u;
    // 0x1c3550: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1C3550u;
    SET_GPR_U32(ctx, 31, 0x1C3558u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3558u; }
        if (ctx->pc != 0x1C3558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3558u; }
        if (ctx->pc != 0x1C3558u) { return; }
    }
    ctx->pc = 0x1C3558u;
    // 0x1c3558: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1C3558u;
    SET_GPR_U32(ctx, 31, 0x1C3560u);
    ctx->pc = 0x1C355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3558u;
            // 0x1c355c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3560u; }
        if (ctx->pc != 0x1C3560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3560u; }
        if (ctx->pc != 0x1C3560u) { return; }
    }
    ctx->pc = 0x1C3560u;
    // 0x1c3560: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1C3560u;
    SET_GPR_U32(ctx, 31, 0x1C3568u);
    ctx->pc = 0x1C3564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3560u;
            // 0x1c3564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3568u; }
        if (ctx->pc != 0x1C3568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3568u; }
        if (ctx->pc != 0x1C3568u) { return; }
    }
    ctx->pc = 0x1C3568u;
    // 0x1c3568: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1C3568u;
    SET_GPR_U32(ctx, 31, 0x1C3570u);
    ctx->pc = 0x1C356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3568u;
            // 0x1c356c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3570u; }
        if (ctx->pc != 0x1C3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3570u; }
        if (ctx->pc != 0x1C3570u) { return; }
    }
    ctx->pc = 0x1C3570u;
    // 0x1c3570: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1C3570u;
    {
        const bool branch_taken_0x1c3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3570) {
            ctx->pc = 0x1C3AB8u;
            goto label_1c3ab8;
        }
    }
    ctx->pc = 0x1C3578u;
label_1c3578:
    // 0x1c3578: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1C3578u;
    SET_GPR_U32(ctx, 31, 0x1C3580u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3580u; }
        if (ctx->pc != 0x1C3580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3580u; }
        if (ctx->pc != 0x1C3580u) { return; }
    }
    ctx->pc = 0x1C3580u;
    // 0x1c3580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c3580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3584: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1c3584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1c3588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c358c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c3590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3594: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1C3594u;
    {
        const bool branch_taken_0x1c3594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3594u;
            // 0x1c3598: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3594) {
            ctx->pc = 0x1C35C0u;
            goto label_1c35c0;
        }
    }
    ctx->pc = 0x1C359Cu;
    // 0x1c359c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c35a0: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1c35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1c35a4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c35a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c35a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c35a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c35ac: 0x0  nop
    ctx->pc = 0x1c35acu;
    // NOP
    // 0x1c35b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c35b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c35b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C35B4u;
    {
        const bool branch_taken_0x1c35b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35B4u;
            // 0x1c35b8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35b4) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C35BCu;
    // 0x1c35bc: 0x0  nop
    ctx->pc = 0x1c35bcu;
    // NOP
label_1c35c0:
    // 0x1c35c0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c35c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c35c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c35c8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c35cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c35ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1c35d0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1c35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1c35d4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1c35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1c35d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c35dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35DCu;
            // 0x1c35e0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C35E4u;
    // 0x1c35e4: 0x0  nop
    ctx->pc = 0x1c35e4u;
    // NOP
label_1c35e8:
    // 0x1c35e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c35ec: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c35f0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C35F0u;
    {
        const bool branch_taken_0x1c35f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c35f0) {
            ctx->pc = 0x1C3628u;
            goto label_1c3628;
        }
    }
    ctx->pc = 0x1C35F8u;
    // 0x1c35f8: 0xc056054  jal         func_158150
    ctx->pc = 0x1C35F8u;
    SET_GPR_U32(ctx, 31, 0x1C3600u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3600u; }
        if (ctx->pc != 0x1C3600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3600u; }
        if (ctx->pc != 0x1C3600u) { return; }
    }
    ctx->pc = 0x1C3600u;
    // 0x1c3600: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1C3600u;
    SET_GPR_U32(ctx, 31, 0x1C3608u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3608u; }
        if (ctx->pc != 0x1C3608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3608u; }
        if (ctx->pc != 0x1C3608u) { return; }
    }
    ctx->pc = 0x1C3608u;
    // 0x1c3608: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1C3608u;
    SET_GPR_U32(ctx, 31, 0x1C3610u);
    ctx->pc = 0x1C360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3608u;
            // 0x1c360c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3610u; }
        if (ctx->pc != 0x1C3610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3610u; }
        if (ctx->pc != 0x1C3610u) { return; }
    }
    ctx->pc = 0x1C3610u;
    // 0x1c3610: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1C3610u;
    SET_GPR_U32(ctx, 31, 0x1C3618u);
    ctx->pc = 0x1C3614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3610u;
            // 0x1c3614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3618u; }
        if (ctx->pc != 0x1C3618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3618u; }
        if (ctx->pc != 0x1C3618u) { return; }
    }
    ctx->pc = 0x1C3618u;
    // 0x1c3618: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1C3618u;
    SET_GPR_U32(ctx, 31, 0x1C3620u);
    ctx->pc = 0x1C361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3618u;
            // 0x1c361c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3620u; }
        if (ctx->pc != 0x1C3620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3620u; }
        if (ctx->pc != 0x1C3620u) { return; }
    }
    ctx->pc = 0x1C3620u;
    // 0x1c3620: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x1C3620u;
    {
        const bool branch_taken_0x1c3620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3620) {
            ctx->pc = 0x1C3AB8u;
            goto label_1c3ab8;
        }
    }
    ctx->pc = 0x1C3628u;
label_1c3628:
    // 0x1c3628: 0xc05b9ac  jal         func_16E6B0
    ctx->pc = 0x1C3628u;
    SET_GPR_U32(ctx, 31, 0x1C3630u);
    ctx->pc = 0x1C362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3628u;
            // 0x1c362c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E6B0u;
    if (runtime->hasFunction(0x16E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3630u; }
        if (ctx->pc != 0x1C3630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Vector_0x16e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3630u; }
        if (ctx->pc != 0x1C3630u) { return; }
    }
    ctx->pc = 0x1C3630u;
    // 0x1c3630: 0xc05b9a0  jal         func_16E680
    ctx->pc = 0x1C3630u;
    SET_GPR_U32(ctx, 31, 0x1C3638u);
    ctx->pc = 0x1C3634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3630u;
            // 0x1c3634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E680u;
    if (runtime->hasFunction(0x16E680u)) {
        auto targetFn = runtime->lookupFunction(0x16E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3638u; }
        if (ctx->pc != 0x1C3638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_State_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3638u; }
        if (ctx->pc != 0x1C3638u) { return; }
    }
    ctx->pc = 0x1C3638u;
    // 0x1c3638: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1C3638u;
    SET_GPR_U32(ctx, 31, 0x1C3640u);
    ctx->pc = 0x1C363Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3638u;
            // 0x1c363c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3640u; }
        if (ctx->pc != 0x1C3640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3640u; }
        if (ctx->pc != 0x1C3640u) { return; }
    }
    ctx->pc = 0x1C3640u;
    // 0x1c3640: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c3640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3644: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3648: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1C3648u;
    SET_GPR_U32(ctx, 31, 0x1C3650u);
    ctx->pc = 0x1C364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3648u;
            // 0x1c364c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3650u; }
        if (ctx->pc != 0x1C3650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3650u; }
        if (ctx->pc != 0x1C3650u) { return; }
    }
    ctx->pc = 0x1C3650u;
    // 0x1c3650: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c3650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3654: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c3654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3658: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1C3658u;
    SET_GPR_U32(ctx, 31, 0x1C3660u);
    ctx->pc = 0x1C365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3658u;
            // 0x1c365c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3660u; }
        if (ctx->pc != 0x1C3660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3660u; }
        if (ctx->pc != 0x1C3660u) { return; }
    }
    ctx->pc = 0x1C3660u;
    // 0x1c3660: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c3660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3664: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3668: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1C3668u;
    SET_GPR_U32(ctx, 31, 0x1C3670u);
    ctx->pc = 0x1C366Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3668u;
            // 0x1c366c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3670u; }
        if (ctx->pc != 0x1C3670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3670u; }
        if (ctx->pc != 0x1C3670u) { return; }
    }
    ctx->pc = 0x1C3670u;
    // 0x1c3670: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c3670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c3674: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c3674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3678: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1C3678u;
    SET_GPR_U32(ctx, 31, 0x1C3680u);
    ctx->pc = 0x1C367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3678u;
            // 0x1c367c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3680u; }
        if (ctx->pc != 0x1C3680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3680u; }
        if (ctx->pc != 0x1C3680u) { return; }
    }
    ctx->pc = 0x1C3680u;
    // 0x1c3680: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c3684: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c3688: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c3688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c368c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C368Cu;
    {
        const bool branch_taken_0x1c368c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c368c) {
            ctx->pc = 0x1C36E0u;
            goto label_1c36e0;
        }
    }
    ctx->pc = 0x1C3694u;
    // 0x1c3694: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1c3694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c3698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3698u;
    {
        const bool branch_taken_0x1c3698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3698) {
            ctx->pc = 0x1C36B0u;
            goto label_1c36b0;
        }
    }
    ctx->pc = 0x1C36A0u;
    // 0x1c36a0: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1C36A0u;
    SET_GPR_U32(ctx, 31, 0x1C36A8u);
    ctx->pc = 0x1C36A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36A0u;
            // 0x1c36a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36A8u; }
        if (ctx->pc != 0x1C36A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36A8u; }
        if (ctx->pc != 0x1C36A8u) { return; }
    }
    ctx->pc = 0x1C36A8u;
    // 0x1c36a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C36A8u;
    {
        const bool branch_taken_0x1c36a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c36a8) {
            ctx->pc = 0x1C36B8u;
            goto label_1c36b8;
        }
    }
    ctx->pc = 0x1C36B0u;
label_1c36b0:
    // 0x1c36b0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C36B0u;
    SET_GPR_U32(ctx, 31, 0x1C36B8u);
    ctx->pc = 0x1C36B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36B0u;
            // 0x1c36b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36B8u; }
        if (ctx->pc != 0x1C36B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36B8u; }
        if (ctx->pc != 0x1C36B8u) { return; }
    }
    ctx->pc = 0x1C36B8u;
label_1c36b8:
    // 0x1c36b8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1c36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c36bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C36BCu;
    {
        const bool branch_taken_0x1c36bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c36bc) {
            ctx->pc = 0x1C36D0u;
            goto label_1c36d0;
        }
    }
    ctx->pc = 0x1C36C4u;
    // 0x1c36c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C36C4u;
    {
        const bool branch_taken_0x1c36c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36C4u;
            // 0x1c36c8: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36c4) {
            ctx->pc = 0x1C3730u;
            goto label_1c3730;
        }
    }
    ctx->pc = 0x1C36CCu;
    // 0x1c36cc: 0x0  nop
    ctx->pc = 0x1c36ccu;
    // NOP
label_1c36d0:
    // 0x1c36d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c36d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C36D4u;
    {
        const bool branch_taken_0x1c36d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36D4u;
            // 0x1c36d8: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36d4) {
            ctx->pc = 0x1C3730u;
            goto label_1c3730;
        }
    }
    ctx->pc = 0x1C36DCu;
    // 0x1c36dc: 0x0  nop
    ctx->pc = 0x1c36dcu;
    // NOP
label_1c36e0:
    // 0x1c36e0: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1c36e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x1c36e4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1C36E4u;
    {
        const bool branch_taken_0x1c36e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c36e4) {
            ctx->pc = 0x1C3720u;
            goto label_1c3720;
        }
    }
    ctx->pc = 0x1C36ECu;
    // 0x1c36ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c36f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c36f4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c36f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c36f8: 0x0  nop
    ctx->pc = 0x1c36f8u;
    // NOP
    // 0x1c36fc: 0x0  nop
    ctx->pc = 0x1c36fcu;
    // NOP
    // 0x1c3700: 0x1010  mfhi        $v0
    ctx->pc = 0x1c3700u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c3704: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3704u;
    {
        const bool branch_taken_0x1c3704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3704) {
            ctx->pc = 0x1C3720u;
            goto label_1c3720;
        }
    }
    ctx->pc = 0x1C370Cu;
    // 0x1c370c: 0xc060500  jal         func_181400
    ctx->pc = 0x1C370Cu;
    SET_GPR_U32(ctx, 31, 0x1C3714u);
    ctx->pc = 0x1C3710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C370Cu;
            // 0x1c3710: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3714u; }
        if (ctx->pc != 0x1C3714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3714u; }
        if (ctx->pc != 0x1C3714u) { return; }
    }
    ctx->pc = 0x1C3714u;
    // 0x1c3714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3714u;
    {
        const bool branch_taken_0x1c3714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3714) {
            ctx->pc = 0x1C3728u;
            goto label_1c3728;
        }
    }
    ctx->pc = 0x1C371Cu;
    // 0x1c371c: 0x0  nop
    ctx->pc = 0x1c371cu;
    // NOP
label_1c3720:
    // 0x1c3720: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C3720u;
    SET_GPR_U32(ctx, 31, 0x1C3728u);
    ctx->pc = 0x1C3724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3720u;
            // 0x1c3724: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3728u; }
        if (ctx->pc != 0x1C3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3728u; }
        if (ctx->pc != 0x1C3728u) { return; }
    }
    ctx->pc = 0x1C3728u;
label_1c3728:
    // 0x1c3728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c372c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1c372cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1c3730:
    // 0x1c3730: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c3734: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c3734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c3738: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c3738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c373c: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C373Cu;
    {
        const bool branch_taken_0x1c373c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1c373c) {
            ctx->pc = 0x1C3770u;
            goto label_1c3770;
        }
    }
    ctx->pc = 0x1C3744u;
    // 0x1c3744: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c3748: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c3748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c374c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1c374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c3750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3754: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1c3754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1c3758: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1c3758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1c375c: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1C375Cu;
    SET_GPR_U32(ctx, 31, 0x1C3764u);
    ctx->pc = 0x1C3760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C375Cu;
            // 0x1c3760: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3764u; }
        if (ctx->pc != 0x1C3764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3764u; }
        if (ctx->pc != 0x1C3764u) { return; }
    }
    ctx->pc = 0x1C3764u;
    // 0x1c3764: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1C3764u;
    {
        const bool branch_taken_0x1c3764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3764) {
            ctx->pc = 0x1C3AA0u;
            goto label_1c3aa0;
        }
    }
    ctx->pc = 0x1C376Cu;
    // 0x1c376c: 0x0  nop
    ctx->pc = 0x1c376cu;
    // NOP
label_1c3770:
    // 0x1c3770: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c3774: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3774u;
    {
        const bool branch_taken_0x1c3774 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C3778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3774u;
            // 0x1c3778: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3774) {
            ctx->pc = 0x1C3790u;
            goto label_1c3790;
        }
    }
    ctx->pc = 0x1C377Cu;
    // 0x1c377c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C377Cu;
    {
        const bool branch_taken_0x1c377c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c377c) {
            ctx->pc = 0x1C3790u;
            goto label_1c3790;
        }
    }
    ctx->pc = 0x1C3784u;
    // 0x1c3784: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c3788: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1C3788u;
    {
        const bool branch_taken_0x1c3788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3788u;
            // 0x1c378c: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3788) {
            ctx->pc = 0x1C3AA0u;
            goto label_1c3aa0;
        }
    }
    ctx->pc = 0x1C3790u;
label_1c3790:
    // 0x1c3790: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c3790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c3794: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c3798: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1C3798u;
    {
        const bool branch_taken_0x1c3798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3798u;
            // 0x1c379c: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3798) {
            ctx->pc = 0x1C3A90u;
            goto label_1c3a90;
        }
    }
    ctx->pc = 0x1C37A0u;
    // 0x1c37a0: 0x108300bb  beq         $a0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x1C37A0u;
    {
        const bool branch_taken_0x1c37a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c37a0) {
            ctx->pc = 0x1C3A90u;
            goto label_1c3a90;
        }
    }
    ctx->pc = 0x1C37A8u;
    // 0x1c37a8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c37ac: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c37acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c37b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c37b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c37b4: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1c37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1c37b8: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1c37b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1c37bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c37bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37c0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c37c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37c4: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x1c37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1c37c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c37c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c37cc: 0x0  nop
    ctx->pc = 0x1c37ccu;
    // NOP
    // 0x1c37d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c37d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c37d4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c37d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c37d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c37dc: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x1c37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x1c37e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c37e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c37e4: 0x0  nop
    ctx->pc = 0x1c37e4u;
    // NOP
    // 0x1c37e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c37e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c37ec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c37ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c37f0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c37f4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1c37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1c37f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c37f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c37fc: 0x0  nop
    ctx->pc = 0x1c37fcu;
    // NOP
    // 0x1c3800: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3804: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c3804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c3808: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c3808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c380c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c3810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3814: 0x0  nop
    ctx->pc = 0x1c3814u;
    // NOP
    // 0x1c3818: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c381c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C381Cu;
    SET_GPR_U32(ctx, 31, 0x1C3824u);
    ctx->pc = 0x1C3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C381Cu;
            // 0x1c3820: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3824u; }
        if (ctx->pc != 0x1C3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3824u; }
        if (ctx->pc != 0x1C3824u) { return; }
    }
    ctx->pc = 0x1C3824u;
    // 0x1c3824: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c3828: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c3828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c382c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3830: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1c3830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1c3834: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1c3834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1c3838: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c3838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c383c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c383cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3840: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1c3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1c3844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3848: 0x0  nop
    ctx->pc = 0x1c3848u;
    // NOP
    // 0x1c384c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c384cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3850: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1c3850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1c3854: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c3854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3858: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c3858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3860: 0x0  nop
    ctx->pc = 0x1c3860u;
    // NOP
    // 0x1c3864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3868: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1c3868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1c386c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c3870: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c3874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3878: 0x0  nop
    ctx->pc = 0x1c3878u;
    // NOP
    // 0x1c387c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c387cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3880: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1c3880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1c3884: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3888: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c388c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c388cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3890: 0x0  nop
    ctx->pc = 0x1c3890u;
    // NOP
    // 0x1c3894: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3898: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C3898u;
    SET_GPR_U32(ctx, 31, 0x1C38A0u);
    ctx->pc = 0x1C389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3898u;
            // 0x1c389c: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C38A0u; }
        if (ctx->pc != 0x1C38A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C38A0u; }
        if (ctx->pc != 0x1C38A0u) { return; }
    }
    ctx->pc = 0x1C38A0u;
    // 0x1c38a0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c38a4: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c38a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c38a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c38a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c38ac: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1c38acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1c38b0: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1c38b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1c38b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c38b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38b8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c38b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38bc: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1c38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1c38c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c38c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c38c4: 0x0  nop
    ctx->pc = 0x1c38c4u;
    // NOP
    // 0x1c38c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c38c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c38cc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1c38ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1c38d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c38d4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c38d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c38d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c38dc: 0x0  nop
    ctx->pc = 0x1c38dcu;
    // NOP
    // 0x1c38e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c38e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c38e4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1c38e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1c38e8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c38ec: 0x2442ffdd  addiu       $v0, $v0, -0x23
    ctx->pc = 0x1c38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967261));
    // 0x1c38f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c38f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c38f4: 0x0  nop
    ctx->pc = 0x1c38f4u;
    // NOP
    // 0x1c38f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c38f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c38fc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1c38fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1c3900: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3904: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1c3904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1c3908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c390c: 0x0  nop
    ctx->pc = 0x1c390cu;
    // NOP
    // 0x1c3910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3914: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C3914u;
    SET_GPR_U32(ctx, 31, 0x1C391Cu);
    ctx->pc = 0x1C3918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3914u;
            // 0x1c3918: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C391Cu; }
        if (ctx->pc != 0x1C391Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C391Cu; }
        if (ctx->pc != 0x1C391Cu) { return; }
    }
    ctx->pc = 0x1C391Cu;
    // 0x1c391c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c3920: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c3920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c3924: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3928: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1c392c: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1c3930: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c3930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3934: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3938: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x1c3938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x1c393c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3940: 0x0  nop
    ctx->pc = 0x1c3940u;
    // NOP
    // 0x1c3944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3948: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1c3948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1c394c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3950: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c3954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3958: 0x0  nop
    ctx->pc = 0x1c3958u;
    // NOP
    // 0x1c395c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c395cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3960: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1c3960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1c3964: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c3964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c3968: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1c3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1c396c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c396cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3970: 0x0  nop
    ctx->pc = 0x1c3970u;
    // NOP
    // 0x1c3974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3978: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1c3978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1c397c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3980: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1c3980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1c3984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3988: 0x0  nop
    ctx->pc = 0x1c3988u;
    // NOP
    // 0x1c398c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c398cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3990: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C3990u;
    SET_GPR_U32(ctx, 31, 0x1C3998u);
    ctx->pc = 0x1C3994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3990u;
            // 0x1c3994: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3998u; }
        if (ctx->pc != 0x1C3998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3998u; }
        if (ctx->pc != 0x1C3998u) { return; }
    }
    ctx->pc = 0x1C3998u;
    // 0x1c3998: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c3998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c399c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c399cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c39a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c39a4: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1c39a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c39a8: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1c39a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1c39ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c39acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c39b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39b4: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1c39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1c39b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c39b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c39bc: 0x0  nop
    ctx->pc = 0x1c39bcu;
    // NOP
    // 0x1c39c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c39c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c39c4: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1c39c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1c39c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c39cc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c39d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c39d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c39d4: 0x0  nop
    ctx->pc = 0x1c39d4u;
    // NOP
    // 0x1c39d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c39d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c39dc: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c39dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c39e0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c39e4: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1c39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x1c39e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c39ec: 0x0  nop
    ctx->pc = 0x1c39ecu;
    // NOP
    // 0x1c39f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c39f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c39f4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c39f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c39fc: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1c39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1c3a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a04: 0x0  nop
    ctx->pc = 0x1c3a04u;
    // NOP
    // 0x1c3a08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3a0c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C3A14u);
    ctx->pc = 0x1C3A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A0Cu;
            // 0x1c3a10: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A14u; }
        if (ctx->pc != 0x1C3A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A14u; }
        if (ctx->pc != 0x1C3A14u) { return; }
    }
    ctx->pc = 0x1C3A14u;
    // 0x1c3a14: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c3a18: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c3a18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c3a1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3a20: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1c3a24: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1c3a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1c3a28: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c3a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a2c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c3a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a30: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x1c3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x1c3a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a38: 0x0  nop
    ctx->pc = 0x1c3a38u;
    // NOP
    // 0x1c3a3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3a40: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c3a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c3a44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3a48: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c3a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a50: 0x0  nop
    ctx->pc = 0x1c3a50u;
    // NOP
    // 0x1c3a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3a58: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c3a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c3a5c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c3a60: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1c3a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a68: 0x0  nop
    ctx->pc = 0x1c3a68u;
    // NOP
    // 0x1c3a6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3a70: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1c3a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1c3a74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3a78: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1c3a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a80: 0x0  nop
    ctx->pc = 0x1c3a80u;
    // NOP
    // 0x1c3a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c3a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c3a88: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C3A88u;
    SET_GPR_U32(ctx, 31, 0x1C3A90u);
    ctx->pc = 0x1C3A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A88u;
            // 0x1c3a8c: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A90u; }
        if (ctx->pc != 0x1C3A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3A90u; }
        if (ctx->pc != 0x1C3A90u) { return; }
    }
    ctx->pc = 0x1C3A90u;
label_1c3a90:
    // 0x1c3a90: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c3a94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c3a98: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1c3a9c: 0x0  nop
    ctx->pc = 0x1c3a9cu;
    // NOP
label_1c3aa0:
    // 0x1c3aa0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c3aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3aa8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1c3aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1c3aac: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1c3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1c3ab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3ab4: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x1c3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
label_1c3ab8:
    // 0x1c3ab8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c3ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3abc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c3abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3ac0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c3ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3ac4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c3ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3ac8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3acc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AD0u;
            // 0x1c3ad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C1928u: goto label_1c1928;
            case 0x1C1960u: goto label_1c1960;
            case 0x1C1998u: goto label_1c1998;
            case 0x1C19D0u: goto label_1c19d0;
            case 0x1C1A28u: goto label_1c1a28;
            case 0x1C1A60u: goto label_1c1a60;
            case 0x1C1AB0u: goto label_1c1ab0;
            case 0x1C1B20u: goto label_1c1b20;
            case 0x1C1B90u: goto label_1c1b90;
            case 0x1C1BB8u: goto label_1c1bb8;
            case 0x1C1BF0u: goto label_1c1bf0;
            case 0x1C1C28u: goto label_1c1c28;
            case 0x1C1CC0u: goto label_1c1cc0;
            case 0x1C1D18u: goto label_1c1d18;
            case 0x1C1D50u: goto label_1c1d50;
            case 0x1C1DA0u: goto label_1c1da0;
            case 0x1C1DE8u: goto label_1c1de8;
            case 0x1C1E10u: goto label_1c1e10;
            case 0x1C1E48u: goto label_1c1e48;
            case 0x1C1E70u: goto label_1c1e70;
            case 0x1C1EF0u: goto label_1c1ef0;
            case 0x1C1F28u: goto label_1c1f28;
            case 0x1C1F50u: goto label_1c1f50;
            case 0x1C1F88u: goto label_1c1f88;
            case 0x1C1FB0u: goto label_1c1fb0;
            case 0x1C2028u: goto label_1c2028;
            case 0x1C2058u: goto label_1c2058;
            case 0x1C20D0u: goto label_1c20d0;
            case 0x1C2110u: goto label_1c2110;
            case 0x1C2150u: goto label_1c2150;
            case 0x1C2190u: goto label_1c2190;
            case 0x1C21C0u: goto label_1c21c0;
            case 0x1C2260u: goto label_1c2260;
            case 0x1C22E0u: goto label_1c22e0;
            case 0x1C2378u: goto label_1c2378;
            case 0x1C23F0u: goto label_1c23f0;
            case 0x1C2458u: goto label_1c2458;
            case 0x1C24B0u: goto label_1c24b0;
            case 0x1C2500u: goto label_1c2500;
            case 0x1C2640u: goto label_1c2640;
            case 0x1C2668u: goto label_1c2668;
            case 0x1C2770u: goto label_1c2770;
            case 0x1C2890u: goto label_1c2890;
            case 0x1C28E0u: goto label_1c28e0;
            case 0x1C2960u: goto label_1c2960;
            case 0x1C2990u: goto label_1c2990;
            case 0x1C29D0u: goto label_1c29d0;
            case 0x1C2A50u: goto label_1c2a50;
            case 0x1C2A70u: goto label_1c2a70;
            case 0x1C2A90u: goto label_1c2a90;
            case 0x1C2AB0u: goto label_1c2ab0;
            case 0x1C2AD8u: goto label_1c2ad8;
            case 0x1C2B00u: goto label_1c2b00;
            case 0x1C2B28u: goto label_1c2b28;
            case 0x1C2B50u: goto label_1c2b50;
            case 0x1C2BD0u: goto label_1c2bd0;
            case 0x1C2BF0u: goto label_1c2bf0;
            case 0x1C2C10u: goto label_1c2c10;
            case 0x1C2C30u: goto label_1c2c30;
            case 0x1C2C58u: goto label_1c2c58;
            case 0x1C2C80u: goto label_1c2c80;
            case 0x1C2CA8u: goto label_1c2ca8;
            case 0x1C2D40u: goto label_1c2d40;
            case 0x1C2D60u: goto label_1c2d60;
            case 0x1C2D80u: goto label_1c2d80;
            case 0x1C2DA0u: goto label_1c2da0;
            case 0x1C2DC8u: goto label_1c2dc8;
            case 0x1C2DF0u: goto label_1c2df0;
            case 0x1C2E18u: goto label_1c2e18;
            case 0x1C2E58u: goto label_1c2e58;
            case 0x1C2E90u: goto label_1c2e90;
            case 0x1C2ED0u: goto label_1c2ed0;
            case 0x1C2F00u: goto label_1c2f00;
            case 0x1C30E0u: goto label_1c30e0;
            case 0x1C3128u: goto label_1c3128;
            case 0x1C3170u: goto label_1c3170;
            case 0x1C31A8u: goto label_1c31a8;
            case 0x1C31E0u: goto label_1c31e0;
            case 0x1C31F8u: goto label_1c31f8;
            case 0x1C3258u: goto label_1c3258;
            case 0x1C3270u: goto label_1c3270;
            case 0x1C32A8u: goto label_1c32a8;
            case 0x1C32C0u: goto label_1c32c0;
            case 0x1C3320u: goto label_1c3320;
            case 0x1C3338u: goto label_1c3338;
            case 0x1C3360u: goto label_1c3360;
            case 0x1C3430u: goto label_1c3430;
            case 0x1C3478u: goto label_1c3478;
            case 0x1C3490u: goto label_1c3490;
            case 0x1C34A8u: goto label_1c34a8;
            case 0x1C34C0u: goto label_1c34c0;
            case 0x1C34D8u: goto label_1c34d8;
            case 0x1C34F0u: goto label_1c34f0;
            case 0x1C3508u: goto label_1c3508;
            case 0x1C3520u: goto label_1c3520;
            case 0x1C3538u: goto label_1c3538;
            case 0x1C3578u: goto label_1c3578;
            case 0x1C35C0u: goto label_1c35c0;
            case 0x1C35E8u: goto label_1c35e8;
            case 0x1C3628u: goto label_1c3628;
            case 0x1C36B0u: goto label_1c36b0;
            case 0x1C36B8u: goto label_1c36b8;
            case 0x1C36D0u: goto label_1c36d0;
            case 0x1C36E0u: goto label_1c36e0;
            case 0x1C3720u: goto label_1c3720;
            case 0x1C3728u: goto label_1c3728;
            case 0x1C3730u: goto label_1c3730;
            case 0x1C3770u: goto label_1c3770;
            case 0x1C3790u: goto label_1c3790;
            case 0x1C3A90u: goto label_1c3a90;
            case 0x1C3AA0u: goto label_1c3aa0;
            case 0x1C3AB8u: goto label_1c3ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3AD8u;
}
