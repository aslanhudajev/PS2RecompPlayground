#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_03Move
// Address: 0x1b1820 - 0x1b37fc
void En7_03Move_0x1b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_03Move_0x1b1820");
#endif

    ctx->pc = 0x1b1820u;

label_1b1820:
    // 0x1b1820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b1824:
    // 0x1b1824: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b1824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1b1828:
    // 0x1b1828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b1828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b182c:
    // 0x1b182c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b1830:
    // 0x1b1830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b1834:
    // 0x1b1834: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b1834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1838:
    // 0x1b1838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b183c:
    // 0x1b183c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b1840:
    // 0x1b1840: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b1840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1844:
    // 0x1b1844: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
label_1b1848:
    // 0x1b1848: 0xc0471aa  jal         func_11C6A8
label_1b184c:
    if (ctx->pc == 0x1B184Cu) {
        ctx->pc = 0x1B184Cu;
            // 0x1b184c: 0xdc25a9c8  ld          $a1, -0x5638($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945224)));
        ctx->pc = 0x1B1850u;
        goto label_1b1850;
    }
    ctx->pc = 0x1B1848u;
    SET_GPR_U32(ctx, 31, 0x1B1850u);
    ctx->pc = 0x1B184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1848u;
            // 0x1b184c: 0xdc25a9c8  ld          $a1, -0x5638($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1850u; }
        if (ctx->pc != 0x1B1850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1850u; }
        if (ctx->pc != 0x1B1850u) { return; }
    }
    ctx->pc = 0x1B1850u;
label_1b1850:
    // 0x1b1850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1854:
    // 0x1b1854: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1858:
    // 0x1b1858: 0xc0471b4  jal         func_11C6D0
label_1b185c:
    if (ctx->pc == 0x1B185Cu) {
        ctx->pc = 0x1B185Cu;
            // 0x1b185c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1860u;
        goto label_1b1860;
    }
    ctx->pc = 0x1B1858u;
    SET_GPR_U32(ctx, 31, 0x1B1860u);
    ctx->pc = 0x1B185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1858u;
            // 0x1b185c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1860u; }
        if (ctx->pc != 0x1B1860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1860u; }
        if (ctx->pc != 0x1B1860u) { return; }
    }
    ctx->pc = 0x1B1860u;
label_1b1860:
    // 0x1b1860: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b1860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1864:
    // 0x1b1864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1868:
    // 0x1b1868: 0xc0471b4  jal         func_11C6D0
label_1b186c:
    if (ctx->pc == 0x1B186Cu) {
        ctx->pc = 0x1B186Cu;
            // 0x1b186c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B1870u;
        goto label_1b1870;
    }
    ctx->pc = 0x1B1868u;
    SET_GPR_U32(ctx, 31, 0x1B1870u);
    ctx->pc = 0x1B186Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1868u;
            // 0x1b186c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1870u; }
        if (ctx->pc != 0x1B1870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1870u; }
        if (ctx->pc != 0x1B1870u) { return; }
    }
    ctx->pc = 0x1B1870u;
label_1b1870:
    // 0x1b1870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1874:
    // 0x1b1874: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b1874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1878:
    // 0x1b1878: 0xc0471b4  jal         func_11C6D0
label_1b187c:
    if (ctx->pc == 0x1B187Cu) {
        ctx->pc = 0x1B187Cu;
            // 0x1b187c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B1880u;
        goto label_1b1880;
    }
    ctx->pc = 0x1B1878u;
    SET_GPR_U32(ctx, 31, 0x1B1880u);
    ctx->pc = 0x1B187Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1878u;
            // 0x1b187c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1880u; }
        if (ctx->pc != 0x1B1880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1880u; }
        if (ctx->pc != 0x1B1880u) { return; }
    }
    ctx->pc = 0x1B1880u;
label_1b1880:
    // 0x1b1880: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1884:
    // 0x1b1884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1888:
    // 0x1b1888: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b1888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b188c:
    // 0x1b188c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b188cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1890:
    // 0x1b1890: 0xc66200d0  lwc1        $f2, 0xD0($s3)
    ctx->pc = 0x1b1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b1894:
    // 0x1b1894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1898:
    // 0x1b1898: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1b1898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b189c:
    // 0x1b189c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b189cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b18a0:
    // 0x1b18a0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b18a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1b18a4:
    // 0x1b18a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b18a8:
    // 0x1b18a8: 0xc66200d4  lwc1        $f2, 0xD4($s3)
    ctx->pc = 0x1b18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b18ac:
    // 0x1b18ac: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b18b0:
    // 0x1b18b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b18b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b18b4:
    // 0x1b18b4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1b18b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1b18b8:
    // 0x1b18b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b18bc:
    // 0x1b18bc: 0xc66200e4  lwc1        $f2, 0xE4($s3)
    ctx->pc = 0x1b18bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b18c0:
    // 0x1b18c0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b18c4:
    // 0x1b18c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b18c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b18c8:
    // 0x1b18c8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1b18c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1b18cc:
    // 0x1b18cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b18d0:
    // 0x1b18d0: 0xc66200e0  lwc1        $f2, 0xE0($s3)
    ctx->pc = 0x1b18d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b18d4:
    // 0x1b18d4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b18d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b18d8:
    // 0x1b18d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b18d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b18dc:
    // 0x1b18dc: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1b18dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1b18e0:
    // 0x1b18e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b18e4:
    // 0x1b18e4: 0xc66200e8  lwc1        $f2, 0xE8($s3)
    ctx->pc = 0x1b18e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b18e8:
    // 0x1b18e8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b18ec:
    // 0x1b18ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b18ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b18f0:
    // 0x1b18f0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1b18f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1b18f4:
    // 0x1b18f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b18f8:
    // 0x1b18f8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b18fc:
    // 0x1b18fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b18fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1900:
    // 0x1b1900: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b1904:
    if (ctx->pc == 0x1B1904u) {
        ctx->pc = 0x1B1904u;
            // 0x1b1904: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1B1908u;
        goto label_1b1908;
    }
    ctx->pc = 0x1B1900u;
    {
        const bool branch_taken_0x1b1900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1900u;
            // 0x1b1904: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1900) {
            ctx->pc = 0x1B1920u;
            goto label_1b1920;
        }
    }
    ctx->pc = 0x1B1908u;
label_1b1908:
    // 0x1b1908: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b1908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b190c:
    // 0x1b190c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b190cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1910:
    // 0x1b1910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1914:
    // 0x1b1914: 0x0  nop
    ctx->pc = 0x1b1914u;
    // NOP
label_1b1918:
    // 0x1b1918: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b1918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b191c:
    // 0x1b191c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b191cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b1920:
    // 0x1b1920: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b1920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1924:
    // 0x1b1924: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b1924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b1928:
    // 0x1b1928: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1928u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b192c:
    // 0x1b192c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b192cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1930:
    // 0x1b1930: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1b1930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1934:
    // 0x1b1934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1938:
    // 0x1b1938: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b193c:
    if (ctx->pc == 0x1B193Cu) {
        ctx->pc = 0x1B193Cu;
            // 0x1b193c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1B1940u;
        goto label_1b1940;
    }
    ctx->pc = 0x1B1938u;
    {
        const bool branch_taken_0x1b1938 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1938u;
            // 0x1b193c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1938) {
            ctx->pc = 0x1B1958u;
            goto label_1b1958;
        }
    }
    ctx->pc = 0x1B1940u;
label_1b1940:
    // 0x1b1940: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b1940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b1944:
    // 0x1b1944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1944u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1948:
    // 0x1b1948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b194c:
    // 0x1b194c: 0x0  nop
    ctx->pc = 0x1b194cu;
    // NOP
label_1b1950:
    // 0x1b1950: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b1950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b1954:
    // 0x1b1954: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b1954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b1958:
    // 0x1b1958: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b1958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b195c:
    // 0x1b195c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b195cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b1960:
    // 0x1b1960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1960u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1964:
    // 0x1b1964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1968:
    // 0x1b1968: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b196c:
    // 0x1b196c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b196cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1970:
    // 0x1b1970: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b1974:
    if (ctx->pc == 0x1B1974u) {
        ctx->pc = 0x1B1974u;
            // 0x1b1974: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B1978u;
        goto label_1b1978;
    }
    ctx->pc = 0x1B1970u;
    {
        const bool branch_taken_0x1b1970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1970u;
            // 0x1b1974: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1970) {
            ctx->pc = 0x1B1990u;
            goto label_1b1990;
        }
    }
    ctx->pc = 0x1B1978u;
label_1b1978:
    // 0x1b1978: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b1978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b197c:
    // 0x1b197c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b197cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1980:
    // 0x1b1980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1984:
    // 0x1b1984: 0x0  nop
    ctx->pc = 0x1b1984u;
    // NOP
label_1b1988:
    // 0x1b1988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b1988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b198c:
    // 0x1b198c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b1990:
    // 0x1b1990: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b1990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1994:
    // 0x1b1994: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b1998:
    // 0x1b1998: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1998u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b199c:
    // 0x1b199c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b199cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b19a0:
    // 0x1b19a0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b19a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b19a4:
    // 0x1b19a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b19a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b19a8:
    // 0x1b19a8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b19ac:
    if (ctx->pc == 0x1B19ACu) {
        ctx->pc = 0x1B19ACu;
            // 0x1b19ac: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B19B0u;
        goto label_1b19b0;
    }
    ctx->pc = 0x1B19A8u;
    {
        const bool branch_taken_0x1b19a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B19ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19A8u;
            // 0x1b19ac: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19a8) {
            ctx->pc = 0x1B19C8u;
            goto label_1b19c8;
        }
    }
    ctx->pc = 0x1B19B0u;
label_1b19b0:
    // 0x1b19b0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b19b4:
    // 0x1b19b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b19b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b19b8:
    // 0x1b19b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b19b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b19bc:
    // 0x1b19bc: 0x0  nop
    ctx->pc = 0x1b19bcu;
    // NOP
label_1b19c0:
    // 0x1b19c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b19c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b19c4:
    // 0x1b19c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b19c8:
    // 0x1b19c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b19cc:
    // 0x1b19cc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b19ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b19d0:
    // 0x1b19d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b19d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b19d4:
    // 0x1b19d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b19d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b19d8:
    // 0x1b19d8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b19dc:
    // 0x1b19dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b19dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b19e0:
    // 0x1b19e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b19e4:
    if (ctx->pc == 0x1B19E4u) {
        ctx->pc = 0x1B19E4u;
            // 0x1b19e4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B19E8u;
        goto label_1b19e8;
    }
    ctx->pc = 0x1B19E0u;
    {
        const bool branch_taken_0x1b19e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B19E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19E0u;
            // 0x1b19e4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b19e0) {
            ctx->pc = 0x1B1A00u;
            goto label_1b1a00;
        }
    }
    ctx->pc = 0x1B19E8u;
label_1b19e8:
    // 0x1b19e8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b19ec:
    // 0x1b19ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b19ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b19f0:
    // 0x1b19f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b19f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b19f4:
    // 0x1b19f4: 0x0  nop
    ctx->pc = 0x1b19f4u;
    // NOP
label_1b19f8:
    // 0x1b19f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b19f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b19fc:
    // 0x1b19fc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b19fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b1a00:
    // 0x1b1a00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1b1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1a04:
    // 0x1b1a04: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b1a08:
    // 0x1b1a08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1a08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1a0c:
    // 0x1b1a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1a10:
    // 0x1b1a10: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b1a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1a14:
    // 0x1b1a14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1a14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1a18:
    // 0x1b1a18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b1a1c:
    if (ctx->pc == 0x1B1A1Cu) {
        ctx->pc = 0x1B1A1Cu;
            // 0x1b1a1c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B1A20u;
        goto label_1b1a20;
    }
    ctx->pc = 0x1B1A18u;
    {
        const bool branch_taken_0x1b1a18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A18u;
            // 0x1b1a1c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a18) {
            ctx->pc = 0x1B1A38u;
            goto label_1b1a38;
        }
    }
    ctx->pc = 0x1B1A20u;
label_1b1a20:
    // 0x1b1a20: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b1a24:
    // 0x1b1a24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1a24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1a28:
    // 0x1b1a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1a2c:
    // 0x1b1a2c: 0x0  nop
    ctx->pc = 0x1b1a2cu;
    // NOP
label_1b1a30:
    // 0x1b1a30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b1a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b1a34:
    // 0x1b1a34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b1a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b1a38:
    // 0x1b1a38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b1a3c:
    // 0x1b1a3c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1b1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1b1a40:
    // 0x1b1a40: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b1a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b1a44:
    // 0x1b1a44: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b1a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b1a48:
    // 0x1b1a48: 0xc06ce00  jal         func_1B3800
label_1b1a4c:
    if (ctx->pc == 0x1B1A4Cu) {
        ctx->pc = 0x1B1A4Cu;
            // 0x1b1a4c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1B1A50u;
        goto label_1b1a50;
    }
    ctx->pc = 0x1B1A48u;
    SET_GPR_U32(ctx, 31, 0x1B1A50u);
    ctx->pc = 0x1B1A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A48u;
            // 0x1b1a4c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3800u;
    if (runtime->hasFunction(0x1B3800u)) {
        auto targetFn = runtime->lookupFunction(0x1B3800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A50u; }
        if (ctx->pc != 0x1B1A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1b3800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1A50u; }
        if (ctx->pc != 0x1B1A50u) { return; }
    }
    ctx->pc = 0x1B1A50u;
label_1b1a50:
    // 0x1b1a50: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1a54:
    // 0x1b1a54: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b1a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1a58:
    // 0x1b1a58: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1b1a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_1b1a5c:
    // 0x1b1a5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1a60:
    // 0x1b1a60: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1b1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_1b1a64:
    // 0x1b1a64: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x1b1a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1b1a68:
    // 0x1b1a68: 0x10e6037b  beq         $a3, $a2, . + 4 + (0x37B << 2)
label_1b1a6c:
    if (ctx->pc == 0x1B1A6Cu) {
        ctx->pc = 0x1B1A6Cu;
            // 0x1b1a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B1A70u;
        goto label_1b1a70;
    }
    ctx->pc = 0x1B1A68u;
    {
        const bool branch_taken_0x1b1a68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B1A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A68u;
            // 0x1b1a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a68) {
            ctx->pc = 0x1B2858u;
            goto label_1b2858;
        }
    }
    ctx->pc = 0x1B1A70u;
label_1b1a70:
    // 0x1b1a70: 0x10e20379  beq         $a3, $v0, . + 4 + (0x379 << 2)
label_1b1a74:
    if (ctx->pc == 0x1B1A74u) {
        ctx->pc = 0x1B1A74u;
            // 0x1b1a74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B1A78u;
        goto label_1b1a78;
    }
    ctx->pc = 0x1B1A70u;
    {
        const bool branch_taken_0x1b1a70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A70u;
            // 0x1b1a74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a70) {
            ctx->pc = 0x1B2858u;
            goto label_1b2858;
        }
    }
    ctx->pc = 0x1B1A78u;
label_1b1a78:
    // 0x1b1a78: 0x10e3020d  beq         $a3, $v1, . + 4 + (0x20D << 2)
label_1b1a7c:
    if (ctx->pc == 0x1B1A7Cu) {
        ctx->pc = 0x1B1A80u;
        goto label_1b1a80;
    }
    ctx->pc = 0x1B1A78u;
    {
        const bool branch_taken_0x1b1a78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b1a78) {
            ctx->pc = 0x1B22B0u;
            goto label_1b22b0;
        }
    }
    ctx->pc = 0x1B1A80u;
label_1b1a80:
    // 0x1b1a80: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1b1a84:
    if (ctx->pc == 0x1B1A84u) {
        ctx->pc = 0x1B1A88u;
        goto label_1b1a88;
    }
    ctx->pc = 0x1B1A80u;
    {
        const bool branch_taken_0x1b1a80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a80) {
            ctx->pc = 0x1B1A90u;
            goto label_1b1a90;
        }
    }
    ctx->pc = 0x1B1A88u;
label_1b1a88:
    // 0x1b1a88: 0x100004fd  b           . + 4 + (0x4FD << 2)
label_1b1a8c:
    if (ctx->pc == 0x1B1A8Cu) {
        ctx->pc = 0x1B1A90u;
        goto label_1b1a90;
    }
    ctx->pc = 0x1B1A88u;
    {
        const bool branch_taken_0x1b1a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a88) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1A90u;
label_1b1a90:
    // 0x1b1a90: 0x8e67010c  lw          $a3, 0x10C($s3)
    ctx->pc = 0x1b1a90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1b1a94:
    // 0x1b1a94: 0x14e00010  bnez        $a3, . + 4 + (0x10 << 2)
label_1b1a98:
    if (ctx->pc == 0x1B1A98u) {
        ctx->pc = 0x1B1A9Cu;
        goto label_1b1a9c;
    }
    ctx->pc = 0x1B1A94u;
    {
        const bool branch_taken_0x1b1a94 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1a94) {
            ctx->pc = 0x1B1AD8u;
            goto label_1b1ad8;
        }
    }
    ctx->pc = 0x1B1A9Cu;
label_1b1a9c:
    // 0x1b1a9c: 0xc050bb4  jal         func_142ED0
label_1b1aa0:
    if (ctx->pc == 0x1B1AA0u) {
        ctx->pc = 0x1B1AA0u;
            // 0x1b1aa0: 0xae63010c  sw          $v1, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
        ctx->pc = 0x1B1AA4u;
        goto label_1b1aa4;
    }
    ctx->pc = 0x1B1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1AA4u);
    ctx->pc = 0x1B1AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A9Cu;
            // 0x1b1aa0: 0xae63010c  sw          $v1, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1AA4u; }
        if (ctx->pc != 0x1B1AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1AA4u; }
        if (ctx->pc != 0x1B1AA4u) { return; }
    }
    ctx->pc = 0x1B1AA4u;
label_1b1aa4:
    // 0x1b1aa4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b1aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b1aa8:
    // 0x1b1aa8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b1aac:
    // 0x1b1aac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b1aacu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b1ab0:
    // 0x1b1ab0: 0x0  nop
    ctx->pc = 0x1b1ab0u;
    // NOP
label_1b1ab4:
    // 0x1b1ab4: 0x0  nop
    ctx->pc = 0x1b1ab4u;
    // NOP
label_1b1ab8:
    // 0x1b1ab8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b1ab8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b1abc:
    // 0x1b1abc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b1ac0:
    // 0x1b1ac0: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x1b1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_1b1ac4:
    // 0x1b1ac4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1b1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1b1ac8:
    // 0x1b1ac8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1b1acc:
    // 0x1b1acc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b1accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b1ad0:
    // 0x1b1ad0: 0x100004eb  b           . + 4 + (0x4EB << 2)
label_1b1ad4:
    if (ctx->pc == 0x1B1AD4u) {
        ctx->pc = 0x1B1AD4u;
            // 0x1b1ad4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B1AD8u;
        goto label_1b1ad8;
    }
    ctx->pc = 0x1B1AD0u;
    {
        const bool branch_taken_0x1b1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1AD0u;
            // 0x1b1ad4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ad0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1AD8u;
label_1b1ad8:
    // 0x1b1ad8: 0x14e30021  bne         $a3, $v1, . + 4 + (0x21 << 2)
label_1b1adc:
    if (ctx->pc == 0x1B1ADCu) {
        ctx->pc = 0x1B1AE0u;
        goto label_1b1ae0;
    }
    ctx->pc = 0x1B1AD8u;
    {
        const bool branch_taken_0x1b1ad8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1ad8) {
            ctx->pc = 0x1B1B60u;
            goto label_1b1b60;
        }
    }
    ctx->pc = 0x1B1AE0u;
label_1b1ae0:
    // 0x1b1ae0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1ae4:
    // 0x1b1ae4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b1ae8:
    // 0x1b1ae8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b1ae8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b1aec:
    // 0x1b1aec: 0x0  nop
    ctx->pc = 0x1b1aecu;
    // NOP
label_1b1af0:
    // 0x1b1af0: 0x0  nop
    ctx->pc = 0x1b1af0u;
    // NOP
label_1b1af4:
    // 0x1b1af4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b1af4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b1af8:
    // 0x1b1af8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1b1afc:
    if (ctx->pc == 0x1B1AFCu) {
        ctx->pc = 0x1B1B00u;
        goto label_1b1b00;
    }
    ctx->pc = 0x1B1AF8u;
    {
        const bool branch_taken_0x1b1af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1af8) {
            ctx->pc = 0x1B1B48u;
            goto label_1b1b48;
        }
    }
    ctx->pc = 0x1B1B00u;
label_1b1b00:
    // 0x1b1b00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1b04:
    // 0x1b1b04: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1b08:
    // 0x1b1b08: 0xc06560c  jal         func_195830
label_1b1b0c:
    if (ctx->pc == 0x1B1B0Cu) {
        ctx->pc = 0x1B1B0Cu;
            // 0x1b1b0c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B1B10u;
        goto label_1b1b10;
    }
    ctx->pc = 0x1B1B08u;
    SET_GPR_U32(ctx, 31, 0x1B1B10u);
    ctx->pc = 0x1B1B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B08u;
            // 0x1b1b0c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B10u; }
        if (ctx->pc != 0x1B1B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B10u; }
        if (ctx->pc != 0x1B1B10u) { return; }
    }
    ctx->pc = 0x1B1B10u;
label_1b1b10:
    // 0x1b1b10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1b14:
    // 0x1b1b14: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1b18:
    // 0x1b1b18: 0xc06560c  jal         func_195830
label_1b1b1c:
    if (ctx->pc == 0x1B1B1Cu) {
        ctx->pc = 0x1B1B1Cu;
            // 0x1b1b1c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B1B20u;
        goto label_1b1b20;
    }
    ctx->pc = 0x1B1B18u;
    SET_GPR_U32(ctx, 31, 0x1B1B20u);
    ctx->pc = 0x1B1B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B18u;
            // 0x1b1b1c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B20u; }
        if (ctx->pc != 0x1B1B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B20u; }
        if (ctx->pc != 0x1B1B20u) { return; }
    }
    ctx->pc = 0x1B1B20u;
label_1b1b20:
    // 0x1b1b20: 0xc065d00  jal         func_197400
label_1b1b24:
    if (ctx->pc == 0x1B1B24u) {
        ctx->pc = 0x1B1B28u;
        goto label_1b1b28;
    }
    ctx->pc = 0x1B1B20u;
    SET_GPR_U32(ctx, 31, 0x1B1B28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B28u; }
        if (ctx->pc != 0x1B1B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B28u; }
        if (ctx->pc != 0x1B1B28u) { return; }
    }
    ctx->pc = 0x1B1B28u;
label_1b1b28:
    // 0x1b1b28: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1b1b2c:
    if (ctx->pc == 0x1B1B2Cu) {
        ctx->pc = 0x1B1B30u;
        goto label_1b1b30;
    }
    ctx->pc = 0x1B1B28u;
    {
        const bool branch_taken_0x1b1b28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b1b28) {
            ctx->pc = 0x1B1B48u;
            goto label_1b1b48;
        }
    }
    ctx->pc = 0x1B1B30u;
label_1b1b30:
    // 0x1b1b30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1b34:
    // 0x1b1b34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1b38:
    // 0x1b1b38: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1b3c:
    // 0x1b1b3c: 0xc0655b0  jal         func_1956C0
label_1b1b40:
    if (ctx->pc == 0x1B1B40u) {
        ctx->pc = 0x1B1B40u;
            // 0x1b1b40: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B1B44u;
        goto label_1b1b44;
    }
    ctx->pc = 0x1B1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B44u);
    ctx->pc = 0x1B1B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B3Cu;
            // 0x1b1b40: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B44u; }
        if (ctx->pc != 0x1B1B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B44u; }
        if (ctx->pc != 0x1B1B44u) { return; }
    }
    ctx->pc = 0x1B1B44u;
label_1b1b44:
    // 0x1b1b44: 0x0  nop
    ctx->pc = 0x1b1b44u;
    // NOP
label_1b1b48:
    // 0x1b1b48: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1b4c:
    // 0x1b1b4c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1b1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1b1b50:
    // 0x1b1b50: 0x146204cb  bne         $v1, $v0, . + 4 + (0x4CB << 2)
label_1b1b54:
    if (ctx->pc == 0x1B1B54u) {
        ctx->pc = 0x1B1B54u;
            // 0x1b1b54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B1B58u;
        goto label_1b1b58;
    }
    ctx->pc = 0x1B1B50u;
    {
        const bool branch_taken_0x1b1b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B1B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B50u;
            // 0x1b1b54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b50) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1B58u;
label_1b1b58:
    // 0x1b1b58: 0x100004c9  b           . + 4 + (0x4C9 << 2)
label_1b1b5c:
    if (ctx->pc == 0x1B1B5Cu) {
        ctx->pc = 0x1B1B5Cu;
            // 0x1b1b5c: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B1B60u;
        goto label_1b1b60;
    }
    ctx->pc = 0x1B1B58u;
    {
        const bool branch_taken_0x1b1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B58u;
            // 0x1b1b5c: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b58) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1B60u;
label_1b1b60:
    // 0x1b1b60: 0x14e20015  bne         $a3, $v0, . + 4 + (0x15 << 2)
label_1b1b64:
    if (ctx->pc == 0x1B1B64u) {
        ctx->pc = 0x1B1B68u;
        goto label_1b1b68;
    }
    ctx->pc = 0x1B1B60u;
    {
        const bool branch_taken_0x1b1b60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1b60) {
            ctx->pc = 0x1B1BB8u;
            goto label_1b1bb8;
        }
    }
    ctx->pc = 0x1B1B68u;
label_1b1b68:
    // 0x1b1b68: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b1b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1b6c:
    // 0x1b1b6c: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b1b70:
    // 0x1b1b70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1b70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b1b74:
    // 0x1b1b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1b78:
    // 0x1b1b78: 0x0  nop
    ctx->pc = 0x1b1b78u;
    // NOP
label_1b1b7c:
    // 0x1b1b7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b1b7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b1b80:
    // 0x1b1b80: 0xc040d72  jal         func_1035C8
label_1b1b84:
    if (ctx->pc == 0x1B1B84u) {
        ctx->pc = 0x1B1B84u;
            // 0x1b1b84: 0xe64c0014  swc1        $f12, 0x14($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->pc = 0x1B1B88u;
        goto label_1b1b88;
    }
    ctx->pc = 0x1B1B80u;
    SET_GPR_U32(ctx, 31, 0x1B1B88u);
    ctx->pc = 0x1B1B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B80u;
            // 0x1b1b84: 0xe64c0014  swc1        $f12, 0x14($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1B88u; }
        if (ctx->pc != 0x1B1B88u) { return; }
    }
    ctx->pc = 0x1B1B88u;
label_1b1b88:
    // 0x1b1b88: 0x3c043fee  lui         $a0, 0x3FEE
    ctx->pc = 0x1b1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16366 << 16));
label_1b1b8c:
    // 0x1b1b8c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1b1b90:
    // 0x1b1b90: 0x348528c7  ori         $a1, $a0, 0x28C7
    ctx->pc = 0x1b1b90u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)10439u)));
label_1b1b94:
    // 0x1b1b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1b98:
    // 0x1b1b98: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b1b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1b1b9c:
    // 0x1b1b9c: 0xc040084  jal         func_100210
label_1b1ba0:
    if (ctx->pc == 0x1B1BA0u) {
        ctx->pc = 0x1B1BA0u;
            // 0x1b1ba0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->pc = 0x1B1BA4u;
        goto label_1b1ba4;
    }
    ctx->pc = 0x1B1B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1BA4u);
    ctx->pc = 0x1B1BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1B9Cu;
            // 0x1b1ba0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BA4u; }
        if (ctx->pc != 0x1B1BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BA4u; }
        if (ctx->pc != 0x1B1BA4u) { return; }
    }
    ctx->pc = 0x1B1BA4u;
label_1b1ba4:
    // 0x1b1ba4: 0x104004b6  beqz        $v0, . + 4 + (0x4B6 << 2)
label_1b1ba8:
    if (ctx->pc == 0x1B1BA8u) {
        ctx->pc = 0x1B1BACu;
        goto label_1b1bac;
    }
    ctx->pc = 0x1B1BA4u;
    {
        const bool branch_taken_0x1b1ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ba4) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1BACu;
label_1b1bac:
    // 0x1b1bac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1bb0:
    // 0x1b1bb0: 0x100004b3  b           . + 4 + (0x4B3 << 2)
label_1b1bb4:
    if (ctx->pc == 0x1B1BB4u) {
        ctx->pc = 0x1B1BB4u;
            // 0x1b1bb4: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B1BB8u;
        goto label_1b1bb8;
    }
    ctx->pc = 0x1B1BB0u;
    {
        const bool branch_taken_0x1b1bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BB0u;
            // 0x1b1bb4: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bb0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1BB8u;
label_1b1bb8:
    // 0x1b1bb8: 0x14e60019  bne         $a3, $a2, . + 4 + (0x19 << 2)
label_1b1bbc:
    if (ctx->pc == 0x1B1BBCu) {
        ctx->pc = 0x1B1BC0u;
        goto label_1b1bc0;
    }
    ctx->pc = 0x1B1BB8u;
    {
        const bool branch_taken_0x1b1bb8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1b1bb8) {
            ctx->pc = 0x1B1C20u;
            goto label_1b1c20;
        }
    }
    ctx->pc = 0x1B1BC0u;
label_1b1bc0:
    // 0x1b1bc0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1b1bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1bc4:
    // 0x1b1bc4: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b1bc8:
    // 0x1b1bc8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1bc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b1bcc:
    // 0x1b1bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1bd0:
    // 0x1b1bd0: 0x0  nop
    ctx->pc = 0x1b1bd0u;
    // NOP
label_1b1bd4:
    // 0x1b1bd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b1bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b1bd8:
    // 0x1b1bd8: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1b1bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1b1bdc:
    // 0x1b1bdc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1b1bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1be0:
    // 0x1b1be0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1b1be0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b1be4:
    // 0x1b1be4: 0xc040d72  jal         func_1035C8
label_1b1be8:
    if (ctx->pc == 0x1B1BE8u) {
        ctx->pc = 0x1B1BE8u;
            // 0x1b1be8: 0xe62c0014  swc1        $f12, 0x14($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->pc = 0x1B1BECu;
        goto label_1b1bec;
    }
    ctx->pc = 0x1B1BE4u;
    SET_GPR_U32(ctx, 31, 0x1B1BECu);
    ctx->pc = 0x1B1BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BE4u;
            // 0x1b1be8: 0xe62c0014  swc1        $f12, 0x14($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BECu; }
        if (ctx->pc != 0x1B1BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BECu; }
        if (ctx->pc != 0x1B1BECu) { return; }
    }
    ctx->pc = 0x1B1BECu;
label_1b1bec:
    // 0x1b1bec: 0x3c04bfee  lui         $a0, 0xBFEE
    ctx->pc = 0x1b1becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49134 << 16));
label_1b1bf0:
    // 0x1b1bf0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1b1bf4:
    // 0x1b1bf4: 0x348528c7  ori         $a1, $a0, 0x28C7
    ctx->pc = 0x1b1bf4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)10439u)));
label_1b1bf8:
    // 0x1b1bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1bfc:
    // 0x1b1bfc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b1bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1b1c00:
    // 0x1b1c00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b1c00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1b1c04:
    // 0x1b1c04: 0xc040098  jal         func_100260
label_1b1c08:
    if (ctx->pc == 0x1B1C08u) {
        ctx->pc = 0x1B1C08u;
            // 0x1b1c08: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->pc = 0x1B1C0Cu;
        goto label_1b1c0c;
    }
    ctx->pc = 0x1B1C04u;
    SET_GPR_U32(ctx, 31, 0x1B1C0Cu);
    ctx->pc = 0x1B1C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C04u;
            // 0x1b1c08: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C0Cu; }
        if (ctx->pc != 0x1B1C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C0Cu; }
        if (ctx->pc != 0x1B1C0Cu) { return; }
    }
    ctx->pc = 0x1B1C0Cu;
label_1b1c0c:
    // 0x1b1c0c: 0x1040049c  beqz        $v0, . + 4 + (0x49C << 2)
label_1b1c10:
    if (ctx->pc == 0x1B1C10u) {
        ctx->pc = 0x1B1C14u;
        goto label_1b1c14;
    }
    ctx->pc = 0x1B1C0Cu;
    {
        const bool branch_taken_0x1b1c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c0c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1C14u;
label_1b1c14:
    // 0x1b1c14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1c18:
    // 0x1b1c18: 0x10000499  b           . + 4 + (0x499 << 2)
label_1b1c1c:
    if (ctx->pc == 0x1B1C1Cu) {
        ctx->pc = 0x1B1C1Cu;
            // 0x1b1c1c: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B1C20u;
        goto label_1b1c20;
    }
    ctx->pc = 0x1B1C18u;
    {
        const bool branch_taken_0x1b1c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C18u;
            // 0x1b1c1c: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c18) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1C20u;
label_1b1c20:
    // 0x1b1c20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b1c24:
    // 0x1b1c24: 0x14e2001c  bne         $a3, $v0, . + 4 + (0x1C << 2)
label_1b1c28:
    if (ctx->pc == 0x1B1C28u) {
        ctx->pc = 0x1B1C2Cu;
        goto label_1b1c2c;
    }
    ctx->pc = 0x1B1C24u;
    {
        const bool branch_taken_0x1b1c24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1c24) {
            ctx->pc = 0x1B1C98u;
            goto label_1b1c98;
        }
    }
    ctx->pc = 0x1B1C2Cu;
label_1b1c2c:
    // 0x1b1c2c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1b1c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1c30:
    // 0x1b1c30: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b1c34:
    // 0x1b1c34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b1c34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b1c38:
    // 0x1b1c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1c3c:
    // 0x1b1c3c: 0x0  nop
    ctx->pc = 0x1b1c3cu;
    // NOP
label_1b1c40:
    // 0x1b1c40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b1c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b1c44:
    // 0x1b1c44: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1b1c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1b1c48:
    // 0x1b1c48: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1b1c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1c4c:
    // 0x1b1c4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1c4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b1c50:
    // 0x1b1c50: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1b1c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1b1c54:
    // 0x1b1c54: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1b1c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1c58:
    // 0x1b1c58: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b1c58u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b1c5c:
    // 0x1b1c5c: 0xc040d72  jal         func_1035C8
label_1b1c60:
    if (ctx->pc == 0x1B1C60u) {
        ctx->pc = 0x1B1C60u;
            // 0x1b1c60: 0xe60c0014  swc1        $f12, 0x14($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->pc = 0x1B1C64u;
        goto label_1b1c64;
    }
    ctx->pc = 0x1B1C5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C64u);
    ctx->pc = 0x1B1C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C5Cu;
            // 0x1b1c60: 0xe60c0014  swc1        $f12, 0x14($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C64u; }
        if (ctx->pc != 0x1B1C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C64u; }
        if (ctx->pc != 0x1B1C64u) { return; }
    }
    ctx->pc = 0x1B1C64u;
label_1b1c64:
    // 0x1b1c64: 0x3c043fee  lui         $a0, 0x3FEE
    ctx->pc = 0x1b1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16366 << 16));
label_1b1c68:
    // 0x1b1c68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1b1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1b1c6c:
    // 0x1b1c6c: 0x348528c7  ori         $a1, $a0, 0x28C7
    ctx->pc = 0x1b1c6cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)10439u)));
label_1b1c70:
    // 0x1b1c70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c74:
    // 0x1b1c74: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b1c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1b1c78:
    // 0x1b1c78: 0xc040084  jal         func_100210
label_1b1c7c:
    if (ctx->pc == 0x1B1C7Cu) {
        ctx->pc = 0x1B1C7Cu;
            // 0x1b1c7c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->pc = 0x1B1C80u;
        goto label_1b1c80;
    }
    ctx->pc = 0x1B1C78u;
    SET_GPR_U32(ctx, 31, 0x1B1C80u);
    ctx->pc = 0x1B1C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C78u;
            // 0x1b1c7c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C80u; }
        if (ctx->pc != 0x1B1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C80u; }
        if (ctx->pc != 0x1B1C80u) { return; }
    }
    ctx->pc = 0x1B1C80u;
label_1b1c80:
    // 0x1b1c80: 0x1040047f  beqz        $v0, . + 4 + (0x47F << 2)
label_1b1c84:
    if (ctx->pc == 0x1B1C84u) {
        ctx->pc = 0x1B1C88u;
        goto label_1b1c88;
    }
    ctx->pc = 0x1B1C80u;
    {
        const bool branch_taken_0x1b1c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c80) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1C88u;
label_1b1c88:
    // 0x1b1c88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b1c8c:
    // 0x1b1c8c: 0x1000047c  b           . + 4 + (0x47C << 2)
label_1b1c90:
    if (ctx->pc == 0x1B1C90u) {
        ctx->pc = 0x1B1C90u;
            // 0x1b1c90: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B1C94u;
        goto label_1b1c94;
    }
    ctx->pc = 0x1B1C8Cu;
    {
        const bool branch_taken_0x1b1c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C8Cu;
            // 0x1b1c90: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c8c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1C94u;
label_1b1c94:
    // 0x1b1c94: 0x0  nop
    ctx->pc = 0x1b1c94u;
    // NOP
label_1b1c98:
    // 0x1b1c98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b1c9c:
    // 0x1b1c9c: 0x14e20018  bne         $a3, $v0, . + 4 + (0x18 << 2)
label_1b1ca0:
    if (ctx->pc == 0x1B1CA0u) {
        ctx->pc = 0x1B1CA4u;
        goto label_1b1ca4;
    }
    ctx->pc = 0x1B1C9Cu;
    {
        const bool branch_taken_0x1b1c9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1c9c) {
            ctx->pc = 0x1B1D00u;
            goto label_1b1d00;
        }
    }
    ctx->pc = 0x1B1CA4u;
label_1b1ca4:
    // 0x1b1ca4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b1ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1ca8:
    // 0x1b1ca8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b1cac:
    // 0x1b1cac: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b1cacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b1cb0:
    // 0x1b1cb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b1cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b1cb4:
    // 0x1b1cb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b1cb8:
    // 0x1b1cb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b1cb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b1cbc:
    // 0x1b1cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1cc0:
    // 0x1b1cc0: 0x0  nop
    ctx->pc = 0x1b1cc0u;
    // NOP
label_1b1cc4:
    // 0x1b1cc4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b1cc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b1cc8:
    // 0x1b1cc8: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x1b1cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1b1ccc:
    // 0x1b1ccc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1b1cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1cd0:
    // 0x1b1cd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b1cd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b1cd4:
    // 0x1b1cd4: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x1b1cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1b1cd8:
    // 0x1b1cd8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b1cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1cdc:
    // 0x1b1cdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b1cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b1ce0:
    // 0x1b1ce0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1ce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b1ce4:
    // 0x1b1ce4: 0x45010466  bc1t        . + 4 + (0x466 << 2)
label_1b1ce8:
    if (ctx->pc == 0x1B1CE8u) {
        ctx->pc = 0x1B1CE8u;
            // 0x1b1ce8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->pc = 0x1B1CECu;
        goto label_1b1cec;
    }
    ctx->pc = 0x1B1CE4u;
    {
        const bool branch_taken_0x1b1ce4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CE4u;
            // 0x1b1ce8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ce4) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1CECu;
label_1b1cec:
    // 0x1b1cec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b1cf0:
    // 0x1b1cf0: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1b1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1b1cf4:
    // 0x1b1cf4: 0x10000462  b           . + 4 + (0x462 << 2)
label_1b1cf8:
    if (ctx->pc == 0x1B1CF8u) {
        ctx->pc = 0x1B1CF8u;
            // 0x1b1cf8: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B1CFCu;
        goto label_1b1cfc;
    }
    ctx->pc = 0x1B1CF4u;
    {
        const bool branch_taken_0x1b1cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1CF4u;
            // 0x1b1cf8: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cf4) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1CFCu;
label_1b1cfc:
    // 0x1b1cfc: 0x0  nop
    ctx->pc = 0x1b1cfcu;
    // NOP
label_1b1d00:
    // 0x1b1d00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b1d04:
    // 0x1b1d04: 0x14e200da  bne         $a3, $v0, . + 4 + (0xDA << 2)
label_1b1d08:
    if (ctx->pc == 0x1B1D08u) {
        ctx->pc = 0x1B1D0Cu;
        goto label_1b1d0c;
    }
    ctx->pc = 0x1B1D04u;
    {
        const bool branch_taken_0x1b1d04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1d04) {
            ctx->pc = 0x1B2070u;
            goto label_1b2070;
        }
    }
    ctx->pc = 0x1B1D0Cu;
label_1b1d0c:
    // 0x1b1d0c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1d10:
    // 0x1b1d10: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1b1d14:
    if (ctx->pc == 0x1B1D14u) {
        ctx->pc = 0x1B1D18u;
        goto label_1b1d18;
    }
    ctx->pc = 0x1B1D10u;
    {
        const bool branch_taken_0x1b1d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1d10) {
            ctx->pc = 0x1B1D60u;
            goto label_1b1d60;
        }
    }
    ctx->pc = 0x1B1D18u;
label_1b1d18:
    // 0x1b1d18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1d1c:
    // 0x1b1d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1d20:
    // 0x1b1d20: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1d24:
    // 0x1b1d24: 0xc0655b0  jal         func_1956C0
label_1b1d28:
    if (ctx->pc == 0x1B1D28u) {
        ctx->pc = 0x1B1D28u;
            // 0x1b1d28: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B1D2Cu;
        goto label_1b1d2c;
    }
    ctx->pc = 0x1B1D24u;
    SET_GPR_U32(ctx, 31, 0x1B1D2Cu);
    ctx->pc = 0x1B1D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D24u;
            // 0x1b1d28: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D2Cu; }
        if (ctx->pc != 0x1B1D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D2Cu; }
        if (ctx->pc != 0x1B1D2Cu) { return; }
    }
    ctx->pc = 0x1B1D2Cu;
label_1b1d2c:
    // 0x1b1d2c: 0xc065d00  jal         func_197400
label_1b1d30:
    if (ctx->pc == 0x1B1D30u) {
        ctx->pc = 0x1B1D34u;
        goto label_1b1d34;
    }
    ctx->pc = 0x1B1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D34u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D34u; }
        if (ctx->pc != 0x1B1D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D34u; }
        if (ctx->pc != 0x1B1D34u) { return; }
    }
    ctx->pc = 0x1B1D34u;
label_1b1d34:
    // 0x1b1d34: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b1d34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b1d38:
    // 0x1b1d38: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_1b1d3c:
    if (ctx->pc == 0x1B1D3Cu) {
        ctx->pc = 0x1B1D40u;
        goto label_1b1d40;
    }
    ctx->pc = 0x1B1D38u;
    {
        const bool branch_taken_0x1b1d38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d38) {
            ctx->pc = 0x1B1D60u;
            goto label_1b1d60;
        }
    }
    ctx->pc = 0x1B1D40u;
label_1b1d40:
    // 0x1b1d40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1d44:
    // 0x1b1d44: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1d48:
    // 0x1b1d48: 0xc06560c  jal         func_195830
label_1b1d4c:
    if (ctx->pc == 0x1B1D4Cu) {
        ctx->pc = 0x1B1D4Cu;
            // 0x1b1d4c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B1D50u;
        goto label_1b1d50;
    }
    ctx->pc = 0x1B1D48u;
    SET_GPR_U32(ctx, 31, 0x1B1D50u);
    ctx->pc = 0x1B1D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D48u;
            // 0x1b1d4c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D50u; }
        if (ctx->pc != 0x1B1D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D50u; }
        if (ctx->pc != 0x1B1D50u) { return; }
    }
    ctx->pc = 0x1B1D50u;
label_1b1d50:
    // 0x1b1d50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1d54:
    // 0x1b1d54: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1d58:
    // 0x1b1d58: 0xc06560c  jal         func_195830
label_1b1d5c:
    if (ctx->pc == 0x1B1D5Cu) {
        ctx->pc = 0x1B1D5Cu;
            // 0x1b1d5c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B1D60u;
        goto label_1b1d60;
    }
    ctx->pc = 0x1B1D58u;
    SET_GPR_U32(ctx, 31, 0x1B1D60u);
    ctx->pc = 0x1B1D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D58u;
            // 0x1b1d5c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D60u; }
        if (ctx->pc != 0x1B1D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D60u; }
        if (ctx->pc != 0x1B1D60u) { return; }
    }
    ctx->pc = 0x1B1D60u;
label_1b1d60:
    // 0x1b1d60: 0xc065d00  jal         func_197400
label_1b1d64:
    if (ctx->pc == 0x1B1D64u) {
        ctx->pc = 0x1B1D68u;
        goto label_1b1d68;
    }
    ctx->pc = 0x1B1D60u;
    SET_GPR_U32(ctx, 31, 0x1B1D68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D68u; }
        if (ctx->pc != 0x1B1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D68u; }
        if (ctx->pc != 0x1B1D68u) { return; }
    }
    ctx->pc = 0x1B1D68u;
label_1b1d68:
    // 0x1b1d68: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_1b1d6c:
    if (ctx->pc == 0x1B1D6Cu) {
        ctx->pc = 0x1B1D70u;
        goto label_1b1d70;
    }
    ctx->pc = 0x1B1D68u;
    {
        const bool branch_taken_0x1b1d68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b1d68) {
            ctx->pc = 0x1B1DC0u;
            goto label_1b1dc0;
        }
    }
    ctx->pc = 0x1B1D70u;
label_1b1d70:
    // 0x1b1d70: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1d74:
    // 0x1b1d74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b1d78:
    // 0x1b1d78: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1b1d7c:
    if (ctx->pc == 0x1B1D7Cu) {
        ctx->pc = 0x1B1D7Cu;
            // 0x1b1d7c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x1B1D80u;
        goto label_1b1d80;
    }
    ctx->pc = 0x1B1D78u;
    {
        const bool branch_taken_0x1b1d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D78u;
            // 0x1b1d7c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d78) {
            ctx->pc = 0x1B1DC0u;
            goto label_1b1dc0;
        }
    }
    ctx->pc = 0x1B1D80u;
label_1b1d80:
    // 0x1b1d80: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1d84:
    // 0x1b1d84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1d88:
    // 0x1b1d88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b1d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1d8c:
    // 0x1b1d8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1d90:
    // 0x1b1d90: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b1d94:
    // 0x1b1d94: 0xc065478  jal         func_1951E0
label_1b1d98:
    if (ctx->pc == 0x1B1D98u) {
        ctx->pc = 0x1B1D98u;
            // 0x1b1d98: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1B1D9Cu;
        goto label_1b1d9c;
    }
    ctx->pc = 0x1B1D94u;
    SET_GPR_U32(ctx, 31, 0x1B1D9Cu);
    ctx->pc = 0x1B1D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1D94u;
            // 0x1b1d98: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D9Cu; }
        if (ctx->pc != 0x1B1D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1D9Cu; }
        if (ctx->pc != 0x1B1D9Cu) { return; }
    }
    ctx->pc = 0x1B1D9Cu;
label_1b1d9c:
    // 0x1b1d9c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b1da0:
    // 0x1b1da0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1da4:
    // 0x1b1da4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1da8:
    // 0x1b1da8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b1da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1dac:
    // 0x1b1dac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1db0:
    // 0x1b1db0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b1db4:
    // 0x1b1db4: 0xc065478  jal         func_1951E0
label_1b1db8:
    if (ctx->pc == 0x1B1DB8u) {
        ctx->pc = 0x1B1DB8u;
            // 0x1b1db8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1B1DBCu;
        goto label_1b1dbc;
    }
    ctx->pc = 0x1B1DB4u;
    SET_GPR_U32(ctx, 31, 0x1B1DBCu);
    ctx->pc = 0x1B1DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DB4u;
            // 0x1b1db8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DBCu; }
        if (ctx->pc != 0x1B1DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DBCu; }
        if (ctx->pc != 0x1B1DBCu) { return; }
    }
    ctx->pc = 0x1B1DBCu;
label_1b1dbc:
    // 0x1b1dbc: 0x0  nop
    ctx->pc = 0x1b1dbcu;
    // NOP
label_1b1dc0:
    // 0x1b1dc0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1dc4:
    // 0x1b1dc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b1dc8:
    // 0x1b1dc8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1b1dcc:
    if (ctx->pc == 0x1B1DCCu) {
        ctx->pc = 0x1B1DD0u;
        goto label_1b1dd0;
    }
    ctx->pc = 0x1B1DC8u;
    {
        const bool branch_taken_0x1b1dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1dc8) {
            ctx->pc = 0x1B1E18u;
            goto label_1b1e18;
        }
    }
    ctx->pc = 0x1B1DD0u;
label_1b1dd0:
    // 0x1b1dd0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1dd4:
    // 0x1b1dd4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b1dd8:
    // 0x1b1dd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1ddc:
    // 0x1b1ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1de0:
    // 0x1b1de0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1b1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1b1de4:
    // 0x1b1de4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1de8:
    // 0x1b1de8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b1de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b1dec:
    // 0x1b1dec: 0xc065478  jal         func_1951E0
label_1b1df0:
    if (ctx->pc == 0x1B1DF0u) {
        ctx->pc = 0x1B1DF0u;
            // 0x1b1df0: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->pc = 0x1B1DF4u;
        goto label_1b1df4;
    }
    ctx->pc = 0x1B1DECu;
    SET_GPR_U32(ctx, 31, 0x1B1DF4u);
    ctx->pc = 0x1B1DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1DECu;
            // 0x1b1df0: 0x2465000a  addiu       $a1, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DF4u; }
        if (ctx->pc != 0x1B1DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1DF4u; }
        if (ctx->pc != 0x1B1DF4u) { return; }
    }
    ctx->pc = 0x1B1DF4u;
label_1b1df4:
    // 0x1b1df4: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1b1df8:
    // 0x1b1df8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1dfc:
    // 0x1b1dfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1e00:
    // 0x1b1e00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1e04:
    // 0x1b1e04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b1e04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b1e08:
    // 0x1b1e08: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b1e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b1e0c:
    // 0x1b1e0c: 0xc065478  jal         func_1951E0
label_1b1e10:
    if (ctx->pc == 0x1B1E10u) {
        ctx->pc = 0x1B1E10u;
            // 0x1b1e10: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1B1E14u;
        goto label_1b1e14;
    }
    ctx->pc = 0x1B1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E14u);
    ctx->pc = 0x1B1E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E0Cu;
            // 0x1b1e10: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E14u; }
        if (ctx->pc != 0x1B1E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E14u; }
        if (ctx->pc != 0x1B1E14u) { return; }
    }
    ctx->pc = 0x1B1E14u;
label_1b1e14:
    // 0x1b1e14: 0x0  nop
    ctx->pc = 0x1b1e14u;
    // NOP
label_1b1e18:
    // 0x1b1e18: 0xc065d00  jal         func_197400
label_1b1e1c:
    if (ctx->pc == 0x1B1E1Cu) {
        ctx->pc = 0x1B1E20u;
        goto label_1b1e20;
    }
    ctx->pc = 0x1B1E18u;
    SET_GPR_U32(ctx, 31, 0x1B1E20u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E20u; }
        if (ctx->pc != 0x1B1E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E20u; }
        if (ctx->pc != 0x1B1E20u) { return; }
    }
    ctx->pc = 0x1B1E20u;
label_1b1e20:
    // 0x1b1e20: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
label_1b1e24:
    if (ctx->pc == 0x1B1E24u) {
        ctx->pc = 0x1B1E28u;
        goto label_1b1e28;
    }
    ctx->pc = 0x1B1E20u;
    {
        const bool branch_taken_0x1b1e20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b1e20) {
            ctx->pc = 0x1B1E80u;
            goto label_1b1e80;
        }
    }
    ctx->pc = 0x1B1E28u;
label_1b1e28:
    // 0x1b1e28: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1e2c:
    // 0x1b1e2c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b1e30:
    // 0x1b1e30: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_1b1e34:
    if (ctx->pc == 0x1B1E34u) {
        ctx->pc = 0x1B1E38u;
        goto label_1b1e38;
    }
    ctx->pc = 0x1B1E30u;
    {
        const bool branch_taken_0x1b1e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1e30) {
            ctx->pc = 0x1B1E80u;
            goto label_1b1e80;
        }
    }
    ctx->pc = 0x1B1E38u;
label_1b1e38:
    // 0x1b1e38: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1e3c:
    // 0x1b1e3c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1b1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1b1e40:
    // 0x1b1e40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1e44:
    // 0x1b1e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1e48:
    // 0x1b1e48: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1b1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_1b1e4c:
    // 0x1b1e4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1e50:
    // 0x1b1e50: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b1e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b1e54:
    // 0x1b1e54: 0xc065478  jal         func_1951E0
label_1b1e58:
    if (ctx->pc == 0x1B1E58u) {
        ctx->pc = 0x1B1E58u;
            // 0x1b1e58: 0x2465ffec  addiu       $a1, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->pc = 0x1B1E5Cu;
        goto label_1b1e5c;
    }
    ctx->pc = 0x1B1E54u;
    SET_GPR_U32(ctx, 31, 0x1B1E5Cu);
    ctx->pc = 0x1B1E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E54u;
            // 0x1b1e58: 0x2465ffec  addiu       $a1, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E5Cu; }
        if (ctx->pc != 0x1B1E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E5Cu; }
        if (ctx->pc != 0x1B1E5Cu) { return; }
    }
    ctx->pc = 0x1B1E5Cu;
label_1b1e5c:
    // 0x1b1e5c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1e60:
    // 0x1b1e60: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1b1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_1b1e64:
    // 0x1b1e64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1e68:
    // 0x1b1e68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1e6c:
    // 0x1b1e6c: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x1b1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
label_1b1e70:
    // 0x1b1e70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1e74:
    // 0x1b1e74: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b1e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b1e78:
    // 0x1b1e78: 0xc065478  jal         func_1951E0
label_1b1e7c:
    if (ctx->pc == 0x1B1E7Cu) {
        ctx->pc = 0x1B1E7Cu;
            // 0x1b1e7c: 0x2465ffec  addiu       $a1, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->pc = 0x1B1E80u;
        goto label_1b1e80;
    }
    ctx->pc = 0x1B1E78u;
    SET_GPR_U32(ctx, 31, 0x1B1E80u);
    ctx->pc = 0x1B1E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E78u;
            // 0x1b1e7c: 0x2465ffec  addiu       $a1, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E80u; }
        if (ctx->pc != 0x1B1E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1E80u; }
        if (ctx->pc != 0x1B1E80u) { return; }
    }
    ctx->pc = 0x1B1E80u;
label_1b1e80:
    // 0x1b1e80: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b1e84:
    // 0x1b1e84: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1b1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1b1e88:
    // 0x1b1e88: 0x146203fd  bne         $v1, $v0, . + 4 + (0x3FD << 2)
label_1b1e8c:
    if (ctx->pc == 0x1B1E8Cu) {
        ctx->pc = 0x1B1E90u;
        goto label_1b1e90;
    }
    ctx->pc = 0x1B1E88u;
    {
        const bool branch_taken_0x1b1e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1e88) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1E90u;
label_1b1e90:
    // 0x1b1e90: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1e94:
    // 0x1b1e94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1e98:
    // 0x1b1e98: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b1e9c:
    // 0x1b1e9c: 0xc065590  jal         func_195640
label_1b1ea0:
    if (ctx->pc == 0x1B1EA0u) {
        ctx->pc = 0x1B1EA0u;
            // 0x1b1ea0: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B1EA4u;
        goto label_1b1ea4;
    }
    ctx->pc = 0x1B1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1EA4u);
    ctx->pc = 0x1B1EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E9Cu;
            // 0x1b1ea0: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EA4u; }
        if (ctx->pc != 0x1B1EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EA4u; }
        if (ctx->pc != 0x1B1EA4u) { return; }
    }
    ctx->pc = 0x1B1EA4u;
label_1b1ea4:
    // 0x1b1ea4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b1ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1ea8:
    // 0x1b1ea8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1eac:
    // 0x1b1eac: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b1eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b1eb0:
    // 0x1b1eb0: 0xc065590  jal         func_195640
label_1b1eb4:
    if (ctx->pc == 0x1B1EB4u) {
        ctx->pc = 0x1B1EB4u;
            // 0x1b1eb4: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B1EB8u;
        goto label_1b1eb8;
    }
    ctx->pc = 0x1B1EB0u;
    SET_GPR_U32(ctx, 31, 0x1B1EB8u);
    ctx->pc = 0x1B1EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EB0u;
            // 0x1b1eb4: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EB8u; }
        if (ctx->pc != 0x1B1EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EB8u; }
        if (ctx->pc != 0x1B1EB8u) { return; }
    }
    ctx->pc = 0x1B1EB8u;
label_1b1eb8:
    // 0x1b1eb8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b1ebc:
    // 0x1b1ebc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b1ec0:
    // 0x1b1ec0: 0xae63010c  sw          $v1, 0x10C($s3)
    ctx->pc = 0x1b1ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
label_1b1ec4:
    // 0x1b1ec4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1ec8:
    // 0x1b1ec8: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b1ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b1ecc:
    // 0x1b1ecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1ed0:
    // 0x1b1ed0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b1ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1ed4:
    // 0x1b1ed4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1ed8:
    // 0x1b1ed8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b1edc:
    // 0x1b1edc: 0xc0655dc  jal         func_195770
label_1b1ee0:
    if (ctx->pc == 0x1B1EE0u) {
        ctx->pc = 0x1B1EE0u;
            // 0x1b1ee0: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->pc = 0x1B1EE4u;
        goto label_1b1ee4;
    }
    ctx->pc = 0x1B1EDCu;
    SET_GPR_U32(ctx, 31, 0x1B1EE4u);
    ctx->pc = 0x1B1EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EDCu;
            // 0x1b1ee0: 0x2445ffc4  addiu       $a1, $v0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EE4u; }
        if (ctx->pc != 0x1B1EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1EE4u; }
        if (ctx->pc != 0x1B1EE4u) { return; }
    }
    ctx->pc = 0x1B1EE4u;
label_1b1ee4:
    // 0x1b1ee4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1ee8:
    // 0x1b1ee8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b1eec:
    // 0x1b1eec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1ef0:
    // 0x1b1ef0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1ef4:
    // 0x1b1ef4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1ef8:
    // 0x1b1ef8: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b1ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b1efc:
    // 0x1b1efc: 0xc0655dc  jal         func_195770
label_1b1f00:
    if (ctx->pc == 0x1B1F00u) {
        ctx->pc = 0x1B1F00u;
            // 0x1b1f00: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B1F04u;
        goto label_1b1f04;
    }
    ctx->pc = 0x1B1EFCu;
    SET_GPR_U32(ctx, 31, 0x1B1F04u);
    ctx->pc = 0x1B1F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1EFCu;
            // 0x1b1f00: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F04u; }
        if (ctx->pc != 0x1B1F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F04u; }
        if (ctx->pc != 0x1B1F04u) { return; }
    }
    ctx->pc = 0x1B1F04u;
label_1b1f04:
    // 0x1b1f04: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1f08:
    // 0x1b1f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b1f0c:
    // 0x1b1f0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1f10:
    // 0x1b1f10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1f14:
    // 0x1b1f14: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b1f18:
    // 0x1b1f18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1f18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b1f1c:
    // 0x1b1f1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1f20:
    // 0x1b1f20: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b1f24:
    // 0x1b1f24: 0xc0655dc  jal         func_195770
label_1b1f28:
    if (ctx->pc == 0x1B1F28u) {
        ctx->pc = 0x1B1F28u;
            // 0x1b1f28: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B1F2Cu;
        goto label_1b1f2c;
    }
    ctx->pc = 0x1B1F24u;
    SET_GPR_U32(ctx, 31, 0x1B1F2Cu);
    ctx->pc = 0x1B1F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F24u;
            // 0x1b1f28: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F2Cu; }
        if (ctx->pc != 0x1B1F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F2Cu; }
        if (ctx->pc != 0x1B1F2Cu) { return; }
    }
    ctx->pc = 0x1B1F2Cu;
label_1b1f2c:
    // 0x1b1f2c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1f30:
    // 0x1b1f30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b1f34:
    // 0x1b1f34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1f38:
    // 0x1b1f38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1f3c:
    // 0x1b1f3c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b1f40:
    // 0x1b1f40: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1f40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b1f44:
    // 0x1b1f44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1f48:
    // 0x1b1f48: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b1f4c:
    // 0x1b1f4c: 0xc0655dc  jal         func_195770
label_1b1f50:
    if (ctx->pc == 0x1B1F50u) {
        ctx->pc = 0x1B1F50u;
            // 0x1b1f50: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B1F54u;
        goto label_1b1f54;
    }
    ctx->pc = 0x1B1F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1F54u);
    ctx->pc = 0x1B1F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F4Cu;
            // 0x1b1f50: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F54u; }
        if (ctx->pc != 0x1B1F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F54u; }
        if (ctx->pc != 0x1B1F54u) { return; }
    }
    ctx->pc = 0x1B1F54u;
label_1b1f54:
    // 0x1b1f54: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1f58:
    // 0x1b1f58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b1f5c:
    // 0x1b1f5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1f60:
    // 0x1b1f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1f64:
    // 0x1b1f64: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b1f68:
    // 0x1b1f68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1f68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b1f6c:
    // 0x1b1f6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1f70:
    // 0x1b1f70: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b1f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b1f74:
    // 0x1b1f74: 0xc0655dc  jal         func_195770
label_1b1f78:
    if (ctx->pc == 0x1B1F78u) {
        ctx->pc = 0x1B1F78u;
            // 0x1b1f78: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B1F7Cu;
        goto label_1b1f7c;
    }
    ctx->pc = 0x1B1F74u;
    SET_GPR_U32(ctx, 31, 0x1B1F7Cu);
    ctx->pc = 0x1B1F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F74u;
            // 0x1b1f78: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F7Cu; }
        if (ctx->pc != 0x1B1F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1F7Cu; }
        if (ctx->pc != 0x1B1F7Cu) { return; }
    }
    ctx->pc = 0x1B1F7Cu;
label_1b1f7c:
    // 0x1b1f7c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1f80:
    // 0x1b1f80: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b1f84:
    // 0x1b1f84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1f88:
    // 0x1b1f88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1f8c:
    // 0x1b1f8c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b1f90:
    // 0x1b1f90: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1f90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b1f94:
    // 0x1b1f94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1f98:
    // 0x1b1f98: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b1f9c:
    // 0x1b1f9c: 0xc0655dc  jal         func_195770
label_1b1fa0:
    if (ctx->pc == 0x1B1FA0u) {
        ctx->pc = 0x1B1FA0u;
            // 0x1b1fa0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B1FA4u;
        goto label_1b1fa4;
    }
    ctx->pc = 0x1B1F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B1FA4u);
    ctx->pc = 0x1B1FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1F9Cu;
            // 0x1b1fa0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FA4u; }
        if (ctx->pc != 0x1B1FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FA4u; }
        if (ctx->pc != 0x1B1FA4u) { return; }
    }
    ctx->pc = 0x1B1FA4u;
label_1b1fa4:
    // 0x1b1fa4: 0xc065d00  jal         func_197400
label_1b1fa8:
    if (ctx->pc == 0x1B1FA8u) {
        ctx->pc = 0x1B1FACu;
        goto label_1b1fac;
    }
    ctx->pc = 0x1B1FA4u;
    SET_GPR_U32(ctx, 31, 0x1B1FACu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FACu; }
        if (ctx->pc != 0x1B1FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FACu; }
        if (ctx->pc != 0x1B1FACu) { return; }
    }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b1facu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b1fb0:
    // 0x1b1fb0: 0x142003b3  bnez        $at, . + 4 + (0x3B3 << 2)
label_1b1fb4:
    if (ctx->pc == 0x1B1FB4u) {
        ctx->pc = 0x1B1FB8u;
        goto label_1b1fb8;
    }
    ctx->pc = 0x1B1FB0u;
    {
        const bool branch_taken_0x1b1fb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fb0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B1FB8u;
label_1b1fb8:
    // 0x1b1fb8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b1fbc:
    // 0x1b1fbc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1fc0:
    // 0x1b1fc0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1fc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b1fc4:
    // 0x1b1fc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1fc8:
    // 0x1b1fc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1fcc:
    // 0x1b1fcc: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b1fd0:
    // 0x1b1fd0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b1fd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b1fd4:
    // 0x1b1fd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b1fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b1fd8:
    // 0x1b1fd8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b1fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b1fdc:
    // 0x1b1fdc: 0xc0655dc  jal         func_195770
label_1b1fe0:
    if (ctx->pc == 0x1B1FE0u) {
        ctx->pc = 0x1B1FE0u;
            // 0x1b1fe0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B1FE4u;
        goto label_1b1fe4;
    }
    ctx->pc = 0x1B1FDCu;
    SET_GPR_U32(ctx, 31, 0x1B1FE4u);
    ctx->pc = 0x1B1FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1FDCu;
            // 0x1b1fe0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FE4u; }
        if (ctx->pc != 0x1B1FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1FE4u; }
        if (ctx->pc != 0x1B1FE4u) { return; }
    }
    ctx->pc = 0x1B1FE4u;
label_1b1fe4:
    // 0x1b1fe4: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b1fe8:
    // 0x1b1fe8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b1fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b1fec:
    // 0x1b1fec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b1fecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b1ff0:
    // 0x1b1ff0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b1ff4:
    // 0x1b1ff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b1ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1ff8:
    // 0x1b1ff8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b1ffc:
    // 0x1b1ffc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b1ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2000:
    // 0x1b2000: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2004:
    // 0x1b2004: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2008:
    // 0x1b2008: 0xc0655dc  jal         func_195770
label_1b200c:
    if (ctx->pc == 0x1B200Cu) {
        ctx->pc = 0x1B200Cu;
            // 0x1b200c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2010u;
        goto label_1b2010;
    }
    ctx->pc = 0x1B2008u;
    SET_GPR_U32(ctx, 31, 0x1B2010u);
    ctx->pc = 0x1B200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2008u;
            // 0x1b200c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2010u; }
        if (ctx->pc != 0x1B2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2010u; }
        if (ctx->pc != 0x1B2010u) { return; }
    }
    ctx->pc = 0x1B2010u;
label_1b2010:
    // 0x1b2010: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2014:
    // 0x1b2014: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2018:
    // 0x1b2018: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2018u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b201c:
    // 0x1b201c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2020:
    // 0x1b2020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2024:
    // 0x1b2024: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2028:
    // 0x1b2028: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2028u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b202c:
    // 0x1b202c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b202cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2030:
    // 0x1b2030: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2034:
    // 0x1b2034: 0xc0655dc  jal         func_195770
label_1b2038:
    if (ctx->pc == 0x1B2038u) {
        ctx->pc = 0x1B2038u;
            // 0x1b2038: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B203Cu;
        goto label_1b203c;
    }
    ctx->pc = 0x1B2034u;
    SET_GPR_U32(ctx, 31, 0x1B203Cu);
    ctx->pc = 0x1B2038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2034u;
            // 0x1b2038: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B203Cu; }
        if (ctx->pc != 0x1B203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B203Cu; }
        if (ctx->pc != 0x1B203Cu) { return; }
    }
    ctx->pc = 0x1B203Cu;
label_1b203c:
    // 0x1b203c: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2040:
    // 0x1b2040: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2044:
    // 0x1b2044: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2044u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2048:
    // 0x1b2048: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b204c:
    // 0x1b204c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2050:
    // 0x1b2050: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2054:
    // 0x1b2054: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2054u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2058:
    // 0x1b2058: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b205c:
    // 0x1b205c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2060:
    // 0x1b2060: 0xc0655dc  jal         func_195770
label_1b2064:
    if (ctx->pc == 0x1B2064u) {
        ctx->pc = 0x1B2064u;
            // 0x1b2064: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2068u;
        goto label_1b2068;
    }
    ctx->pc = 0x1B2060u;
    SET_GPR_U32(ctx, 31, 0x1B2068u);
    ctx->pc = 0x1B2064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2060u;
            // 0x1b2064: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2068u; }
        if (ctx->pc != 0x1B2068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2068u; }
        if (ctx->pc != 0x1B2068u) { return; }
    }
    ctx->pc = 0x1B2068u;
label_1b2068:
    // 0x1b2068: 0x10000385  b           . + 4 + (0x385 << 2)
label_1b206c:
    if (ctx->pc == 0x1B206Cu) {
        ctx->pc = 0x1B2070u;
        goto label_1b2070;
    }
    ctx->pc = 0x1B2068u;
    {
        const bool branch_taken_0x1b2068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2068) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2070u;
label_1b2070:
    // 0x1b2070: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b2070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b2074:
    // 0x1b2074: 0x14e20382  bne         $a3, $v0, . + 4 + (0x382 << 2)
label_1b2078:
    if (ctx->pc == 0x1B2078u) {
        ctx->pc = 0x1B207Cu;
        goto label_1b207c;
    }
    ctx->pc = 0x1B2074u;
    {
        const bool branch_taken_0x1b2074 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2074) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B207Cu;
label_1b207c:
    // 0x1b207c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2080:
    // 0x1b2080: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b2084:
    if (ctx->pc == 0x1B2084u) {
        ctx->pc = 0x1B2084u;
            // 0x1b2084: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1B2088u;
        goto label_1b2088;
    }
    ctx->pc = 0x1B2080u;
    {
        const bool branch_taken_0x1b2080 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2080u;
            // 0x1b2084: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2080) {
            ctx->pc = 0x1B2094u;
            goto label_1b2094;
        }
    }
    ctx->pc = 0x1B2088u;
label_1b2088:
    // 0x1b2088: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b208c:
    if (ctx->pc == 0x1B208Cu) {
        ctx->pc = 0x1B2090u;
        goto label_1b2090;
    }
    ctx->pc = 0x1B2088u;
    {
        const bool branch_taken_0x1b2088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2088) {
            ctx->pc = 0x1B2094u;
            goto label_1b2094;
        }
    }
    ctx->pc = 0x1B2090u;
label_1b2090:
    // 0x1b2090: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b2094:
    // 0x1b2094: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b2098:
    if (ctx->pc == 0x1B2098u) {
        ctx->pc = 0x1B209Cu;
        goto label_1b209c;
    }
    ctx->pc = 0x1B2094u;
    {
        const bool branch_taken_0x1b2094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2094) {
            ctx->pc = 0x1B20C8u;
            goto label_1b20c8;
        }
    }
    ctx->pc = 0x1B209Cu;
label_1b209c:
    // 0x1b209c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b20a0:
    // 0x1b20a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b20a4:
    // 0x1b20a4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b20a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b20a8:
    // 0x1b20a8: 0xc0655a0  jal         func_195680
label_1b20ac:
    if (ctx->pc == 0x1B20ACu) {
        ctx->pc = 0x1B20ACu;
            // 0x1b20ac: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B20B0u;
        goto label_1b20b0;
    }
    ctx->pc = 0x1B20A8u;
    SET_GPR_U32(ctx, 31, 0x1B20B0u);
    ctx->pc = 0x1B20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20A8u;
            // 0x1b20ac: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20B0u; }
        if (ctx->pc != 0x1B20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20B0u; }
        if (ctx->pc != 0x1B20B0u) { return; }
    }
    ctx->pc = 0x1B20B0u;
label_1b20b0:
    // 0x1b20b0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b20b4:
    // 0x1b20b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b20b8:
    // 0x1b20b8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b20bc:
    // 0x1b20bc: 0xc0655a0  jal         func_195680
label_1b20c0:
    if (ctx->pc == 0x1B20C0u) {
        ctx->pc = 0x1B20C0u;
            // 0x1b20c0: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B20C4u;
        goto label_1b20c4;
    }
    ctx->pc = 0x1B20BCu;
    SET_GPR_U32(ctx, 31, 0x1B20C4u);
    ctx->pc = 0x1B20C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20BCu;
            // 0x1b20c0: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20C4u; }
        if (ctx->pc != 0x1B20C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20C4u; }
        if (ctx->pc != 0x1B20C4u) { return; }
    }
    ctx->pc = 0x1B20C4u;
label_1b20c4:
    // 0x1b20c4: 0x0  nop
    ctx->pc = 0x1b20c4u;
    // NOP
label_1b20c8:
    // 0x1b20c8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1b20cc:
    // 0x1b20cc: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x1b20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b20d0:
    // 0x1b20d0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b20d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b20d4:
    // 0x1b20d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b20d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b20d8:
    // 0x1b20d8: 0x0  nop
    ctx->pc = 0x1b20d8u;
    // NOP
label_1b20dc:
    // 0x1b20dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b20dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b20e0:
    // 0x1b20e0: 0xc065d00  jal         func_197400
label_1b20e4:
    if (ctx->pc == 0x1B20E4u) {
        ctx->pc = 0x1B20E4u;
            // 0x1b20e4: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->pc = 0x1B20E8u;
        goto label_1b20e8;
    }
    ctx->pc = 0x1B20E0u;
    SET_GPR_U32(ctx, 31, 0x1B20E8u);
    ctx->pc = 0x1B20E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20E0u;
            // 0x1b20e4: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20E8u; }
        if (ctx->pc != 0x1B20E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20E8u; }
        if (ctx->pc != 0x1B20E8u) { return; }
    }
    ctx->pc = 0x1B20E8u;
label_1b20e8:
    // 0x1b20e8: 0x18400365  blez        $v0, . + 4 + (0x365 << 2)
label_1b20ec:
    if (ctx->pc == 0x1B20ECu) {
        ctx->pc = 0x1B20F0u;
        goto label_1b20f0;
    }
    ctx->pc = 0x1B20E8u;
    {
        const bool branch_taken_0x1b20e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b20e8) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B20F0u;
label_1b20f0:
    // 0x1b20f0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b20f4:
    // 0x1b20f4: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x1b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1b20f8:
    // 0x1b20f8: 0x14620361  bne         $v1, $v0, . + 4 + (0x361 << 2)
label_1b20fc:
    if (ctx->pc == 0x1B20FCu) {
        ctx->pc = 0x1B2100u;
        goto label_1b2100;
    }
    ctx->pc = 0x1B20F8u;
    {
        const bool branch_taken_0x1b20f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b20f8) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2100u;
label_1b2100:
    // 0x1b2100: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2104:
    // 0x1b2104: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b2104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b2108:
    // 0x1b2108: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b210c:
    // 0x1b210c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b210cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2110:
    // 0x1b2110: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2114:
    // 0x1b2114: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2118:
    // 0x1b2118: 0xc0655dc  jal         func_195770
label_1b211c:
    if (ctx->pc == 0x1B211Cu) {
        ctx->pc = 0x1B211Cu;
            // 0x1b211c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2120u;
        goto label_1b2120;
    }
    ctx->pc = 0x1B2118u;
    SET_GPR_U32(ctx, 31, 0x1B2120u);
    ctx->pc = 0x1B211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2118u;
            // 0x1b211c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2120u; }
        if (ctx->pc != 0x1B2120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2120u; }
        if (ctx->pc != 0x1B2120u) { return; }
    }
    ctx->pc = 0x1B2120u;
label_1b2120:
    // 0x1b2120: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2124:
    // 0x1b2124: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b2124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b2128:
    // 0x1b2128: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b212c:
    // 0x1b212c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b212cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2130:
    // 0x1b2130: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2134:
    // 0x1b2134: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2138:
    // 0x1b2138: 0xc0655dc  jal         func_195770
label_1b213c:
    if (ctx->pc == 0x1B213Cu) {
        ctx->pc = 0x1B213Cu;
            // 0x1b213c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2140u;
        goto label_1b2140;
    }
    ctx->pc = 0x1B2138u;
    SET_GPR_U32(ctx, 31, 0x1B2140u);
    ctx->pc = 0x1B213Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2138u;
            // 0x1b213c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2140u; }
        if (ctx->pc != 0x1B2140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2140u; }
        if (ctx->pc != 0x1B2140u) { return; }
    }
    ctx->pc = 0x1B2140u;
label_1b2140:
    // 0x1b2140: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2144:
    // 0x1b2144: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2148:
    // 0x1b2148: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b214c:
    // 0x1b214c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2150:
    // 0x1b2150: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2154:
    // 0x1b2154: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2158:
    // 0x1b2158: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b215c:
    // 0x1b215c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2160:
    // 0x1b2160: 0xc0655dc  jal         func_195770
label_1b2164:
    if (ctx->pc == 0x1B2164u) {
        ctx->pc = 0x1B2164u;
            // 0x1b2164: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2168u;
        goto label_1b2168;
    }
    ctx->pc = 0x1B2160u;
    SET_GPR_U32(ctx, 31, 0x1B2168u);
    ctx->pc = 0x1B2164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2160u;
            // 0x1b2164: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2168u; }
        if (ctx->pc != 0x1B2168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2168u; }
        if (ctx->pc != 0x1B2168u) { return; }
    }
    ctx->pc = 0x1B2168u;
label_1b2168:
    // 0x1b2168: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b216c:
    // 0x1b216c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2170:
    // 0x1b2170: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2174:
    // 0x1b2174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2178:
    // 0x1b2178: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b217c:
    // 0x1b217c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b217cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2180:
    // 0x1b2180: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2184:
    // 0x1b2184: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2188:
    // 0x1b2188: 0xc0655dc  jal         func_195770
label_1b218c:
    if (ctx->pc == 0x1B218Cu) {
        ctx->pc = 0x1B218Cu;
            // 0x1b218c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2190u;
        goto label_1b2190;
    }
    ctx->pc = 0x1B2188u;
    SET_GPR_U32(ctx, 31, 0x1B2190u);
    ctx->pc = 0x1B218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2188u;
            // 0x1b218c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2190u; }
        if (ctx->pc != 0x1B2190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2190u; }
        if (ctx->pc != 0x1B2190u) { return; }
    }
    ctx->pc = 0x1B2190u;
label_1b2190:
    // 0x1b2190: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2194:
    // 0x1b2194: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b2194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2198:
    // 0x1b2198: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b219c:
    // 0x1b219c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b219cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b21a0:
    // 0x1b21a0: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b21a4:
    // 0x1b21a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b21a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b21a8:
    // 0x1b21a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b21a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b21ac:
    // 0x1b21ac: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b21acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b21b0:
    // 0x1b21b0: 0xc0655dc  jal         func_195770
label_1b21b4:
    if (ctx->pc == 0x1B21B4u) {
        ctx->pc = 0x1B21B4u;
            // 0x1b21b4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B21B8u;
        goto label_1b21b8;
    }
    ctx->pc = 0x1B21B0u;
    SET_GPR_U32(ctx, 31, 0x1B21B8u);
    ctx->pc = 0x1B21B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21B0u;
            // 0x1b21b4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21B8u; }
        if (ctx->pc != 0x1B21B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21B8u; }
        if (ctx->pc != 0x1B21B8u) { return; }
    }
    ctx->pc = 0x1B21B8u;
label_1b21b8:
    // 0x1b21b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b21bc:
    // 0x1b21bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b21c0:
    // 0x1b21c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b21c4:
    // 0x1b21c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b21c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b21c8:
    // 0x1b21c8: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b21cc:
    // 0x1b21cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b21ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b21d0:
    // 0x1b21d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b21d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b21d4:
    // 0x1b21d4: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b21d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b21d8:
    // 0x1b21d8: 0xc0655dc  jal         func_195770
label_1b21dc:
    if (ctx->pc == 0x1B21DCu) {
        ctx->pc = 0x1B21DCu;
            // 0x1b21dc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B21E0u;
        goto label_1b21e0;
    }
    ctx->pc = 0x1B21D8u;
    SET_GPR_U32(ctx, 31, 0x1B21E0u);
    ctx->pc = 0x1B21DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21D8u;
            // 0x1b21dc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E0u; }
        if (ctx->pc != 0x1B21E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E0u; }
        if (ctx->pc != 0x1B21E0u) { return; }
    }
    ctx->pc = 0x1B21E0u;
label_1b21e0:
    // 0x1b21e0: 0xc065d00  jal         func_197400
label_1b21e4:
    if (ctx->pc == 0x1B21E4u) {
        ctx->pc = 0x1B21E8u;
        goto label_1b21e8;
    }
    ctx->pc = 0x1B21E0u;
    SET_GPR_U32(ctx, 31, 0x1B21E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E8u; }
        if (ctx->pc != 0x1B21E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E8u; }
        if (ctx->pc != 0x1B21E8u) { return; }
    }
    ctx->pc = 0x1B21E8u;
label_1b21e8:
    // 0x1b21e8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b21e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b21ec:
    // 0x1b21ec: 0x14200324  bnez        $at, . + 4 + (0x324 << 2)
label_1b21f0:
    if (ctx->pc == 0x1B21F0u) {
        ctx->pc = 0x1B21F4u;
        goto label_1b21f4;
    }
    ctx->pc = 0x1B21ECu;
    {
        const bool branch_taken_0x1b21ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b21ec) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B21F4u;
label_1b21f4:
    // 0x1b21f4: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b21f8:
    // 0x1b21f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b21fc:
    // 0x1b21fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b21fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2200:
    // 0x1b2200: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2204:
    // 0x1b2204: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2208:
    // 0x1b2208: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b220c:
    // 0x1b220c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b220cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2210:
    // 0x1b2210: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2214:
    // 0x1b2214: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2218:
    // 0x1b2218: 0xc0655dc  jal         func_195770
label_1b221c:
    if (ctx->pc == 0x1B221Cu) {
        ctx->pc = 0x1B221Cu;
            // 0x1b221c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2220u;
        goto label_1b2220;
    }
    ctx->pc = 0x1B2218u;
    SET_GPR_U32(ctx, 31, 0x1B2220u);
    ctx->pc = 0x1B221Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2218u;
            // 0x1b221c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2220u; }
        if (ctx->pc != 0x1B2220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2220u; }
        if (ctx->pc != 0x1B2220u) { return; }
    }
    ctx->pc = 0x1B2220u;
label_1b2220:
    // 0x1b2220: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2224:
    // 0x1b2224: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2228:
    // 0x1b2228: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2228u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b222c:
    // 0x1b222c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b222cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2230:
    // 0x1b2230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2234:
    // 0x1b2234: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2238:
    // 0x1b2238: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2238u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b223c:
    // 0x1b223c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b223cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2240:
    // 0x1b2240: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2244:
    // 0x1b2244: 0xc0655dc  jal         func_195770
label_1b2248:
    if (ctx->pc == 0x1B2248u) {
        ctx->pc = 0x1B2248u;
            // 0x1b2248: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B224Cu;
        goto label_1b224c;
    }
    ctx->pc = 0x1B2244u;
    SET_GPR_U32(ctx, 31, 0x1B224Cu);
    ctx->pc = 0x1B2248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2244u;
            // 0x1b2248: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B224Cu; }
        if (ctx->pc != 0x1B224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B224Cu; }
        if (ctx->pc != 0x1B224Cu) { return; }
    }
    ctx->pc = 0x1B224Cu;
label_1b224c:
    // 0x1b224c: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2250:
    // 0x1b2250: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2254:
    // 0x1b2254: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2254u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2258:
    // 0x1b2258: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b225c:
    // 0x1b225c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b225cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2260:
    // 0x1b2260: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2264:
    // 0x1b2264: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2264u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2268:
    // 0x1b2268: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b226c:
    // 0x1b226c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2270:
    // 0x1b2270: 0xc0655dc  jal         func_195770
label_1b2274:
    if (ctx->pc == 0x1B2274u) {
        ctx->pc = 0x1B2274u;
            // 0x1b2274: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2278u;
        goto label_1b2278;
    }
    ctx->pc = 0x1B2270u;
    SET_GPR_U32(ctx, 31, 0x1B2278u);
    ctx->pc = 0x1B2274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2270u;
            // 0x1b2274: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2278u; }
        if (ctx->pc != 0x1B2278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2278u; }
        if (ctx->pc != 0x1B2278u) { return; }
    }
    ctx->pc = 0x1B2278u;
label_1b2278:
    // 0x1b2278: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b227c:
    // 0x1b227c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b227cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2280:
    // 0x1b2280: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2280u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2284:
    // 0x1b2284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2288:
    // 0x1b2288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b228c:
    // 0x1b228c: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2290:
    // 0x1b2290: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2290u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2294:
    // 0x1b2294: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2298:
    // 0x1b2298: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b229c:
    // 0x1b229c: 0xc0655dc  jal         func_195770
label_1b22a0:
    if (ctx->pc == 0x1B22A0u) {
        ctx->pc = 0x1B22A0u;
            // 0x1b22a0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B22A4u;
        goto label_1b22a4;
    }
    ctx->pc = 0x1B229Cu;
    SET_GPR_U32(ctx, 31, 0x1B22A4u);
    ctx->pc = 0x1B22A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B229Cu;
            // 0x1b22a0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22A4u; }
        if (ctx->pc != 0x1B22A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22A4u; }
        if (ctx->pc != 0x1B22A4u) { return; }
    }
    ctx->pc = 0x1B22A4u;
label_1b22a4:
    // 0x1b22a4: 0x100002f6  b           . + 4 + (0x2F6 << 2)
label_1b22a8:
    if (ctx->pc == 0x1B22A8u) {
        ctx->pc = 0x1B22ACu;
        goto label_1b22ac;
    }
    ctx->pc = 0x1B22A4u;
    {
        const bool branch_taken_0x1b22a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b22a4) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B22ACu;
label_1b22ac:
    // 0x1b22ac: 0x0  nop
    ctx->pc = 0x1b22acu;
    // NOP
label_1b22b0:
    // 0x1b22b0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x1b22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1b22b4:
    // 0x1b22b4: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_1b22b8:
    if (ctx->pc == 0x1B22B8u) {
        ctx->pc = 0x1B22BCu;
        goto label_1b22bc;
    }
    ctx->pc = 0x1B22B4u;
    {
        const bool branch_taken_0x1b22b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b22b4) {
            ctx->pc = 0x1B22F8u;
            goto label_1b22f8;
        }
    }
    ctx->pc = 0x1B22BCu;
label_1b22bc:
    // 0x1b22bc: 0xc050bb4  jal         func_142ED0
label_1b22c0:
    if (ctx->pc == 0x1B22C0u) {
        ctx->pc = 0x1B22C0u;
            // 0x1b22c0: 0xae63010c  sw          $v1, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
        ctx->pc = 0x1B22C4u;
        goto label_1b22c4;
    }
    ctx->pc = 0x1B22BCu;
    SET_GPR_U32(ctx, 31, 0x1B22C4u);
    ctx->pc = 0x1B22C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22BCu;
            // 0x1b22c0: 0xae63010c  sw          $v1, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22C4u; }
        if (ctx->pc != 0x1B22C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B22C4u; }
        if (ctx->pc != 0x1B22C4u) { return; }
    }
    ctx->pc = 0x1B22C4u;
label_1b22c4:
    // 0x1b22c4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b22c8:
    // 0x1b22c8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b22cc:
    // 0x1b22cc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b22ccu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b22d0:
    // 0x1b22d0: 0x0  nop
    ctx->pc = 0x1b22d0u;
    // NOP
label_1b22d4:
    // 0x1b22d4: 0x0  nop
    ctx->pc = 0x1b22d4u;
    // NOP
label_1b22d8:
    // 0x1b22d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b22d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b22dc:
    // 0x1b22dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b22e0:
    // 0x1b22e0: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x1b22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_1b22e4:
    // 0x1b22e4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1b22e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1b22e8:
    // 0x1b22e8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b22e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1b22ec:
    // 0x1b22ec: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b22ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b22f0:
    // 0x1b22f0: 0x100002e3  b           . + 4 + (0x2E3 << 2)
label_1b22f4:
    if (ctx->pc == 0x1B22F4u) {
        ctx->pc = 0x1B22F4u;
            // 0x1b22f4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B22F8u;
        goto label_1b22f8;
    }
    ctx->pc = 0x1B22F0u;
    {
        const bool branch_taken_0x1b22f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B22F0u;
            // 0x1b22f4: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22f0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B22F8u;
label_1b22f8:
    // 0x1b22f8: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_1b22fc:
    if (ctx->pc == 0x1B22FCu) {
        ctx->pc = 0x1B2300u;
        goto label_1b2300;
    }
    ctx->pc = 0x1B22F8u;
    {
        const bool branch_taken_0x1b22f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b22f8) {
            ctx->pc = 0x1B2388u;
            goto label_1b2388;
        }
    }
    ctx->pc = 0x1B2300u;
label_1b2300:
    // 0x1b2300: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2304:
    // 0x1b2304: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b2308:
    // 0x1b2308: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b2308u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b230c:
    // 0x1b230c: 0x0  nop
    ctx->pc = 0x1b230cu;
    // NOP
label_1b2310:
    // 0x1b2310: 0x0  nop
    ctx->pc = 0x1b2310u;
    // NOP
label_1b2314:
    // 0x1b2314: 0x1010  mfhi        $v0
    ctx->pc = 0x1b2314u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b2318:
    // 0x1b2318: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1b231c:
    if (ctx->pc == 0x1B231Cu) {
        ctx->pc = 0x1B2320u;
        goto label_1b2320;
    }
    ctx->pc = 0x1B2318u;
    {
        const bool branch_taken_0x1b2318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2318) {
            ctx->pc = 0x1B2368u;
            goto label_1b2368;
        }
    }
    ctx->pc = 0x1B2320u;
label_1b2320:
    // 0x1b2320: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2324:
    // 0x1b2324: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2328:
    // 0x1b2328: 0xc06560c  jal         func_195830
label_1b232c:
    if (ctx->pc == 0x1B232Cu) {
        ctx->pc = 0x1B232Cu;
            // 0x1b232c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B2330u;
        goto label_1b2330;
    }
    ctx->pc = 0x1B2328u;
    SET_GPR_U32(ctx, 31, 0x1B2330u);
    ctx->pc = 0x1B232Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2328u;
            // 0x1b232c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2330u; }
        if (ctx->pc != 0x1B2330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2330u; }
        if (ctx->pc != 0x1B2330u) { return; }
    }
    ctx->pc = 0x1B2330u;
label_1b2330:
    // 0x1b2330: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2334:
    // 0x1b2334: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2338:
    // 0x1b2338: 0xc06560c  jal         func_195830
label_1b233c:
    if (ctx->pc == 0x1B233Cu) {
        ctx->pc = 0x1B233Cu;
            // 0x1b233c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B2340u;
        goto label_1b2340;
    }
    ctx->pc = 0x1B2338u;
    SET_GPR_U32(ctx, 31, 0x1B2340u);
    ctx->pc = 0x1B233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2338u;
            // 0x1b233c: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2340u; }
        if (ctx->pc != 0x1B2340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2340u; }
        if (ctx->pc != 0x1B2340u) { return; }
    }
    ctx->pc = 0x1B2340u;
label_1b2340:
    // 0x1b2340: 0xc065d00  jal         func_197400
label_1b2344:
    if (ctx->pc == 0x1B2344u) {
        ctx->pc = 0x1B2348u;
        goto label_1b2348;
    }
    ctx->pc = 0x1B2340u;
    SET_GPR_U32(ctx, 31, 0x1B2348u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2348u; }
        if (ctx->pc != 0x1B2348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2348u; }
        if (ctx->pc != 0x1B2348u) { return; }
    }
    ctx->pc = 0x1B2348u;
label_1b2348:
    // 0x1b2348: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1b234c:
    if (ctx->pc == 0x1B234Cu) {
        ctx->pc = 0x1B2350u;
        goto label_1b2350;
    }
    ctx->pc = 0x1B2348u;
    {
        const bool branch_taken_0x1b2348 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b2348) {
            ctx->pc = 0x1B2368u;
            goto label_1b2368;
        }
    }
    ctx->pc = 0x1B2350u;
label_1b2350:
    // 0x1b2350: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2354:
    // 0x1b2354: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2358:
    // 0x1b2358: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b235c:
    // 0x1b235c: 0xc0655b0  jal         func_1956C0
label_1b2360:
    if (ctx->pc == 0x1B2360u) {
        ctx->pc = 0x1B2360u;
            // 0x1b2360: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B2364u;
        goto label_1b2364;
    }
    ctx->pc = 0x1B235Cu;
    SET_GPR_U32(ctx, 31, 0x1B2364u);
    ctx->pc = 0x1B2360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B235Cu;
            // 0x1b2360: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2364u; }
        if (ctx->pc != 0x1B2364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2364u; }
        if (ctx->pc != 0x1B2364u) { return; }
    }
    ctx->pc = 0x1B2364u;
label_1b2364:
    // 0x1b2364: 0x0  nop
    ctx->pc = 0x1b2364u;
    // NOP
label_1b2368:
    // 0x1b2368: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b236c:
    // 0x1b236c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1b236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1b2370:
    // 0x1b2370: 0x146202c3  bne         $v1, $v0, . + 4 + (0x2C3 << 2)
label_1b2374:
    if (ctx->pc == 0x1B2374u) {
        ctx->pc = 0x1B2374u;
            // 0x1b2374: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1B2378u;
        goto label_1b2378;
    }
    ctx->pc = 0x1B2370u;
    {
        const bool branch_taken_0x1b2370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2370u;
            // 0x1b2374: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2370) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2378u;
label_1b2378:
    // 0x1b2378: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1b2378u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1b237c:
    // 0x1b237c: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_1b2380:
    if (ctx->pc == 0x1B2380u) {
        ctx->pc = 0x1B2380u;
            // 0x1b2380: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2384u;
        goto label_1b2384;
    }
    ctx->pc = 0x1B237Cu;
    {
        const bool branch_taken_0x1b237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B237Cu;
            // 0x1b2380: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b237c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2384u;
label_1b2384:
    // 0x1b2384: 0x0  nop
    ctx->pc = 0x1b2384u;
    // NOP
label_1b2388:
    // 0x1b2388: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b2388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b238c:
    // 0x1b238c: 0x148200a2  bne         $a0, $v0, . + 4 + (0xA2 << 2)
label_1b2390:
    if (ctx->pc == 0x1B2390u) {
        ctx->pc = 0x1B2394u;
        goto label_1b2394;
    }
    ctx->pc = 0x1B238Cu;
    {
        const bool branch_taken_0x1b238c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b238c) {
            ctx->pc = 0x1B2618u;
            goto label_1b2618;
        }
    }
    ctx->pc = 0x1B2394u;
label_1b2394:
    // 0x1b2394: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2398:
    // 0x1b2398: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b2398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b239c:
    // 0x1b239c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b239cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b23a0:
    // 0x1b23a0: 0x0  nop
    ctx->pc = 0x1b23a0u;
    // NOP
label_1b23a4:
    // 0x1b23a4: 0x0  nop
    ctx->pc = 0x1b23a4u;
    // NOP
label_1b23a8:
    // 0x1b23a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b23a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b23ac:
    // 0x1b23ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1b23b0:
    if (ctx->pc == 0x1B23B0u) {
        ctx->pc = 0x1B23B4u;
        goto label_1b23b4;
    }
    ctx->pc = 0x1B23ACu;
    {
        const bool branch_taken_0x1b23ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b23ac) {
            ctx->pc = 0x1B23F8u;
            goto label_1b23f8;
        }
    }
    ctx->pc = 0x1B23B4u;
label_1b23b4:
    // 0x1b23b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b23b8:
    // 0x1b23b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b23b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b23bc:
    // 0x1b23bc: 0xc06560c  jal         func_195830
label_1b23c0:
    if (ctx->pc == 0x1B23C0u) {
        ctx->pc = 0x1B23C0u;
            // 0x1b23c0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B23C4u;
        goto label_1b23c4;
    }
    ctx->pc = 0x1B23BCu;
    SET_GPR_U32(ctx, 31, 0x1B23C4u);
    ctx->pc = 0x1B23C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23BCu;
            // 0x1b23c0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23C4u; }
        if (ctx->pc != 0x1B23C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23C4u; }
        if (ctx->pc != 0x1B23C4u) { return; }
    }
    ctx->pc = 0x1B23C4u;
label_1b23c4:
    // 0x1b23c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b23c8:
    // 0x1b23c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b23cc:
    // 0x1b23cc: 0xc06560c  jal         func_195830
label_1b23d0:
    if (ctx->pc == 0x1B23D0u) {
        ctx->pc = 0x1B23D0u;
            // 0x1b23d0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B23D4u;
        goto label_1b23d4;
    }
    ctx->pc = 0x1B23CCu;
    SET_GPR_U32(ctx, 31, 0x1B23D4u);
    ctx->pc = 0x1B23D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23CCu;
            // 0x1b23d0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23D4u; }
        if (ctx->pc != 0x1B23D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23D4u; }
        if (ctx->pc != 0x1B23D4u) { return; }
    }
    ctx->pc = 0x1B23D4u;
label_1b23d4:
    // 0x1b23d4: 0xc065d00  jal         func_197400
label_1b23d8:
    if (ctx->pc == 0x1B23D8u) {
        ctx->pc = 0x1B23DCu;
        goto label_1b23dc;
    }
    ctx->pc = 0x1B23D4u;
    SET_GPR_U32(ctx, 31, 0x1B23DCu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23DCu; }
        if (ctx->pc != 0x1B23DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23DCu; }
        if (ctx->pc != 0x1B23DCu) { return; }
    }
    ctx->pc = 0x1B23DCu;
label_1b23dc:
    // 0x1b23dc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_1b23e0:
    if (ctx->pc == 0x1B23E0u) {
        ctx->pc = 0x1B23E4u;
        goto label_1b23e4;
    }
    ctx->pc = 0x1B23DCu;
    {
        const bool branch_taken_0x1b23dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b23dc) {
            ctx->pc = 0x1B23F8u;
            goto label_1b23f8;
        }
    }
    ctx->pc = 0x1B23E4u;
label_1b23e4:
    // 0x1b23e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b23e8:
    // 0x1b23e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b23e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b23ec:
    // 0x1b23ec: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b23f0:
    // 0x1b23f0: 0xc0655b0  jal         func_1956C0
label_1b23f4:
    if (ctx->pc == 0x1B23F4u) {
        ctx->pc = 0x1B23F4u;
            // 0x1b23f4: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B23F8u;
        goto label_1b23f8;
    }
    ctx->pc = 0x1B23F0u;
    SET_GPR_U32(ctx, 31, 0x1B23F8u);
    ctx->pc = 0x1B23F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B23F0u;
            // 0x1b23f4: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23F8u; }
        if (ctx->pc != 0x1B23F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B23F8u; }
        if (ctx->pc != 0x1B23F8u) { return; }
    }
    ctx->pc = 0x1B23F8u;
label_1b23f8:
    // 0x1b23f8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b23fc:
    // 0x1b23fc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b2400:
    // 0x1b2400: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b2400u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b2404:
    // 0x1b2404: 0x0  nop
    ctx->pc = 0x1b2404u;
    // NOP
label_1b2408:
    // 0x1b2408: 0x0  nop
    ctx->pc = 0x1b2408u;
    // NOP
label_1b240c:
    // 0x1b240c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b240cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b2410:
    // 0x1b2410: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_1b2414:
    if (ctx->pc == 0x1B2414u) {
        ctx->pc = 0x1B2418u;
        goto label_1b2418;
    }
    ctx->pc = 0x1B2410u;
    {
        const bool branch_taken_0x1b2410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2410) {
            ctx->pc = 0x1B25D0u;
            goto label_1b25d0;
        }
    }
    ctx->pc = 0x1B2418u;
label_1b2418:
    // 0x1b2418: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b241c:
    // 0x1b241c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b241cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b2420:
    // 0x1b2420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2424:
    // 0x1b2424: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2428:
    // 0x1b2428: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b242c:
    // 0x1b242c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b242cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2430:
    // 0x1b2430: 0xc0655dc  jal         func_195770
label_1b2434:
    if (ctx->pc == 0x1B2434u) {
        ctx->pc = 0x1B2434u;
            // 0x1b2434: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2438u;
        goto label_1b2438;
    }
    ctx->pc = 0x1B2430u;
    SET_GPR_U32(ctx, 31, 0x1B2438u);
    ctx->pc = 0x1B2434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2430u;
            // 0x1b2434: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2438u; }
        if (ctx->pc != 0x1B2438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2438u; }
        if (ctx->pc != 0x1B2438u) { return; }
    }
    ctx->pc = 0x1B2438u;
label_1b2438:
    // 0x1b2438: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b243c:
    // 0x1b243c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b243cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b2440:
    // 0x1b2440: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2444:
    // 0x1b2444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2448:
    // 0x1b2448: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b244c:
    // 0x1b244c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2450:
    // 0x1b2450: 0xc0655dc  jal         func_195770
label_1b2454:
    if (ctx->pc == 0x1B2454u) {
        ctx->pc = 0x1B2454u;
            // 0x1b2454: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2458u;
        goto label_1b2458;
    }
    ctx->pc = 0x1B2450u;
    SET_GPR_U32(ctx, 31, 0x1B2458u);
    ctx->pc = 0x1B2454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2450u;
            // 0x1b2454: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2458u; }
        if (ctx->pc != 0x1B2458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2458u; }
        if (ctx->pc != 0x1B2458u) { return; }
    }
    ctx->pc = 0x1B2458u;
label_1b2458:
    // 0x1b2458: 0xc065d00  jal         func_197400
label_1b245c:
    if (ctx->pc == 0x1B245Cu) {
        ctx->pc = 0x1B2460u;
        goto label_1b2460;
    }
    ctx->pc = 0x1B2458u;
    SET_GPR_U32(ctx, 31, 0x1B2460u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2460u; }
        if (ctx->pc != 0x1B2460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2460u; }
        if (ctx->pc != 0x1B2460u) { return; }
    }
    ctx->pc = 0x1B2460u;
label_1b2460:
    // 0x1b2460: 0x1840005b  blez        $v0, . + 4 + (0x5B << 2)
label_1b2464:
    if (ctx->pc == 0x1B2464u) {
        ctx->pc = 0x1B2468u;
        goto label_1b2468;
    }
    ctx->pc = 0x1B2460u;
    {
        const bool branch_taken_0x1b2460 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b2460) {
            ctx->pc = 0x1B25D0u;
            goto label_1b25d0;
        }
    }
    ctx->pc = 0x1B2468u;
label_1b2468:
    // 0x1b2468: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b246c:
    // 0x1b246c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2470:
    // 0x1b2470: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2474:
    // 0x1b2474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2478:
    // 0x1b2478: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b247c:
    // 0x1b247c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b247cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2480:
    // 0x1b2480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2484:
    // 0x1b2484: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2488:
    // 0x1b2488: 0xc0655dc  jal         func_195770
label_1b248c:
    if (ctx->pc == 0x1B248Cu) {
        ctx->pc = 0x1B248Cu;
            // 0x1b248c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2490u;
        goto label_1b2490;
    }
    ctx->pc = 0x1B2488u;
    SET_GPR_U32(ctx, 31, 0x1B2490u);
    ctx->pc = 0x1B248Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2488u;
            // 0x1b248c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2490u; }
        if (ctx->pc != 0x1B2490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2490u; }
        if (ctx->pc != 0x1B2490u) { return; }
    }
    ctx->pc = 0x1B2490u;
label_1b2490:
    // 0x1b2490: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2494:
    // 0x1b2494: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2498:
    // 0x1b2498: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b249c:
    // 0x1b249c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b249cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b24a0:
    // 0x1b24a0: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b24a4:
    // 0x1b24a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b24a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b24a8:
    // 0x1b24a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b24a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b24ac:
    // 0x1b24ac: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b24acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b24b0:
    // 0x1b24b0: 0xc0655dc  jal         func_195770
label_1b24b4:
    if (ctx->pc == 0x1B24B4u) {
        ctx->pc = 0x1B24B4u;
            // 0x1b24b4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B24B8u;
        goto label_1b24b8;
    }
    ctx->pc = 0x1B24B0u;
    SET_GPR_U32(ctx, 31, 0x1B24B8u);
    ctx->pc = 0x1B24B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24B0u;
            // 0x1b24b4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24B8u; }
        if (ctx->pc != 0x1B24B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24B8u; }
        if (ctx->pc != 0x1B24B8u) { return; }
    }
    ctx->pc = 0x1B24B8u;
label_1b24b8:
    // 0x1b24b8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b24b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b24bc:
    // 0x1b24bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b24c0:
    // 0x1b24c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b24c4:
    // 0x1b24c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b24c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b24c8:
    // 0x1b24c8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b24cc:
    // 0x1b24cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b24ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b24d0:
    // 0x1b24d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b24d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b24d4:
    // 0x1b24d4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b24d8:
    // 0x1b24d8: 0xc0655dc  jal         func_195770
label_1b24dc:
    if (ctx->pc == 0x1B24DCu) {
        ctx->pc = 0x1B24DCu;
            // 0x1b24dc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B24E0u;
        goto label_1b24e0;
    }
    ctx->pc = 0x1B24D8u;
    SET_GPR_U32(ctx, 31, 0x1B24E0u);
    ctx->pc = 0x1B24DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24D8u;
            // 0x1b24dc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24E0u; }
        if (ctx->pc != 0x1B24E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B24E0u; }
        if (ctx->pc != 0x1B24E0u) { return; }
    }
    ctx->pc = 0x1B24E0u;
label_1b24e0:
    // 0x1b24e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b24e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b24e4:
    // 0x1b24e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b24e8:
    // 0x1b24e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b24ec:
    // 0x1b24ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b24ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b24f0:
    // 0x1b24f0: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b24f4:
    // 0x1b24f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b24f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b24f8:
    // 0x1b24f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b24f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b24fc:
    // 0x1b24fc: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2500:
    // 0x1b2500: 0xc0655dc  jal         func_195770
label_1b2504:
    if (ctx->pc == 0x1B2504u) {
        ctx->pc = 0x1B2504u;
            // 0x1b2504: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2508u;
        goto label_1b2508;
    }
    ctx->pc = 0x1B2500u;
    SET_GPR_U32(ctx, 31, 0x1B2508u);
    ctx->pc = 0x1B2504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2500u;
            // 0x1b2504: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2508u; }
        if (ctx->pc != 0x1B2508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2508u; }
        if (ctx->pc != 0x1B2508u) { return; }
    }
    ctx->pc = 0x1B2508u;
label_1b2508:
    // 0x1b2508: 0xc065d00  jal         func_197400
label_1b250c:
    if (ctx->pc == 0x1B250Cu) {
        ctx->pc = 0x1B2510u;
        goto label_1b2510;
    }
    ctx->pc = 0x1B2508u;
    SET_GPR_U32(ctx, 31, 0x1B2510u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2510u; }
        if (ctx->pc != 0x1B2510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2510u; }
        if (ctx->pc != 0x1B2510u) { return; }
    }
    ctx->pc = 0x1B2510u;
label_1b2510:
    // 0x1b2510: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b2510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b2514:
    // 0x1b2514: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_1b2518:
    if (ctx->pc == 0x1B2518u) {
        ctx->pc = 0x1B251Cu;
        goto label_1b251c;
    }
    ctx->pc = 0x1B2514u;
    {
        const bool branch_taken_0x1b2514 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2514) {
            ctx->pc = 0x1B25D0u;
            goto label_1b25d0;
        }
    }
    ctx->pc = 0x1B251Cu;
label_1b251c:
    // 0x1b251c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b251cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2520:
    // 0x1b2520: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2524:
    // 0x1b2524: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2524u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2528:
    // 0x1b2528: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b252c:
    // 0x1b252c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b252cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2530:
    // 0x1b2530: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2534:
    // 0x1b2534: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2534u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2538:
    // 0x1b2538: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b253c:
    // 0x1b253c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2540:
    // 0x1b2540: 0xc0655dc  jal         func_195770
label_1b2544:
    if (ctx->pc == 0x1B2544u) {
        ctx->pc = 0x1B2544u;
            // 0x1b2544: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2548u;
        goto label_1b2548;
    }
    ctx->pc = 0x1B2540u;
    SET_GPR_U32(ctx, 31, 0x1B2548u);
    ctx->pc = 0x1B2544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2540u;
            // 0x1b2544: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2548u; }
        if (ctx->pc != 0x1B2548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2548u; }
        if (ctx->pc != 0x1B2548u) { return; }
    }
    ctx->pc = 0x1B2548u;
label_1b2548:
    // 0x1b2548: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b254c:
    // 0x1b254c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2550:
    // 0x1b2550: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2550u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2554:
    // 0x1b2554: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2558:
    // 0x1b2558: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b255c:
    // 0x1b255c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2560:
    // 0x1b2560: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2560u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2564:
    // 0x1b2564: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2568:
    // 0x1b2568: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b256c:
    // 0x1b256c: 0xc0655dc  jal         func_195770
label_1b2570:
    if (ctx->pc == 0x1B2570u) {
        ctx->pc = 0x1B2570u;
            // 0x1b2570: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2574u;
        goto label_1b2574;
    }
    ctx->pc = 0x1B256Cu;
    SET_GPR_U32(ctx, 31, 0x1B2574u);
    ctx->pc = 0x1B2570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B256Cu;
            // 0x1b2570: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2574u; }
        if (ctx->pc != 0x1B2574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2574u; }
        if (ctx->pc != 0x1B2574u) { return; }
    }
    ctx->pc = 0x1B2574u;
label_1b2574:
    // 0x1b2574: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2578:
    // 0x1b2578: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b257c:
    // 0x1b257c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b257cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2580:
    // 0x1b2580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2584:
    // 0x1b2584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2588:
    // 0x1b2588: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b258c:
    // 0x1b258c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b258cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2590:
    // 0x1b2590: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2594:
    // 0x1b2594: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2598:
    // 0x1b2598: 0xc0655dc  jal         func_195770
label_1b259c:
    if (ctx->pc == 0x1B259Cu) {
        ctx->pc = 0x1B259Cu;
            // 0x1b259c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B25A0u;
        goto label_1b25a0;
    }
    ctx->pc = 0x1B2598u;
    SET_GPR_U32(ctx, 31, 0x1B25A0u);
    ctx->pc = 0x1B259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2598u;
            // 0x1b259c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25A0u; }
        if (ctx->pc != 0x1B25A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25A0u; }
        if (ctx->pc != 0x1B25A0u) { return; }
    }
    ctx->pc = 0x1B25A0u;
label_1b25a0:
    // 0x1b25a0: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b25a4:
    // 0x1b25a4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b25a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b25a8:
    // 0x1b25a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b25a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b25ac:
    // 0x1b25ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b25acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b25b0:
    // 0x1b25b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b25b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b25b4:
    // 0x1b25b4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b25b8:
    // 0x1b25b8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b25b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b25bc:
    // 0x1b25bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b25bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b25c0:
    // 0x1b25c0: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b25c4:
    // 0x1b25c4: 0xc0655dc  jal         func_195770
label_1b25c8:
    if (ctx->pc == 0x1B25C8u) {
        ctx->pc = 0x1B25C8u;
            // 0x1b25c8: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B25CCu;
        goto label_1b25cc;
    }
    ctx->pc = 0x1B25C4u;
    SET_GPR_U32(ctx, 31, 0x1B25CCu);
    ctx->pc = 0x1B25C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25C4u;
            // 0x1b25c8: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25CCu; }
        if (ctx->pc != 0x1B25CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25CCu; }
        if (ctx->pc != 0x1B25CCu) { return; }
    }
    ctx->pc = 0x1B25CCu;
label_1b25cc:
    // 0x1b25cc: 0x0  nop
    ctx->pc = 0x1b25ccu;
    // NOP
label_1b25d0:
    // 0x1b25d0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b25d4:
    // 0x1b25d4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1b25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1b25d8:
    // 0x1b25d8: 0x14620229  bne         $v1, $v0, . + 4 + (0x229 << 2)
label_1b25dc:
    if (ctx->pc == 0x1B25DCu) {
        ctx->pc = 0x1B25DCu;
            // 0x1b25dc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1B25E0u;
        goto label_1b25e0;
    }
    ctx->pc = 0x1B25D8u;
    {
        const bool branch_taken_0x1b25d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B25DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25D8u;
            // 0x1b25dc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25d8) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B25E0u;
label_1b25e0:
    // 0x1b25e0: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1b25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1b25e4:
    // 0x1b25e4: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b25e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b25e8:
    // 0x1b25e8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b25e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b25ec:
    // 0x1b25ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b25f0:
    // 0x1b25f0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b25f4:
    // 0x1b25f4: 0xc065590  jal         func_195640
label_1b25f8:
    if (ctx->pc == 0x1B25F8u) {
        ctx->pc = 0x1B25F8u;
            // 0x1b25f8: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B25FCu;
        goto label_1b25fc;
    }
    ctx->pc = 0x1B25F4u;
    SET_GPR_U32(ctx, 31, 0x1B25FCu);
    ctx->pc = 0x1B25F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B25F4u;
            // 0x1b25f8: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25FCu; }
        if (ctx->pc != 0x1B25FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B25FCu; }
        if (ctx->pc != 0x1B25FCu) { return; }
    }
    ctx->pc = 0x1B25FCu;
label_1b25fc:
    // 0x1b25fc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2600:
    // 0x1b2600: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2604:
    // 0x1b2604: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b2604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b2608:
    // 0x1b2608: 0xc065590  jal         func_195640
label_1b260c:
    if (ctx->pc == 0x1B260Cu) {
        ctx->pc = 0x1B260Cu;
            // 0x1b260c: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2610u;
        goto label_1b2610;
    }
    ctx->pc = 0x1B2608u;
    SET_GPR_U32(ctx, 31, 0x1B2610u);
    ctx->pc = 0x1B260Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2608u;
            // 0x1b260c: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2610u; }
        if (ctx->pc != 0x1B2610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2610u; }
        if (ctx->pc != 0x1B2610u) { return; }
    }
    ctx->pc = 0x1B2610u;
label_1b2610:
    // 0x1b2610: 0x1000021b  b           . + 4 + (0x21B << 2)
label_1b2614:
    if (ctx->pc == 0x1B2614u) {
        ctx->pc = 0x1B2618u;
        goto label_1b2618;
    }
    ctx->pc = 0x1B2610u;
    {
        const bool branch_taken_0x1b2610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2610) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2618u;
label_1b2618:
    // 0x1b2618: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b261c:
    // 0x1b261c: 0x14820218  bne         $a0, $v0, . + 4 + (0x218 << 2)
label_1b2620:
    if (ctx->pc == 0x1B2620u) {
        ctx->pc = 0x1B2624u;
        goto label_1b2624;
    }
    ctx->pc = 0x1B261Cu;
    {
        const bool branch_taken_0x1b261c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b261c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2624u;
label_1b2624:
    // 0x1b2624: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x1b2624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2628:
    // 0x1b2628: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b2628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1b262c:
    // 0x1b262c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b262cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b2630:
    // 0x1b2630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2634:
    // 0x1b2634: 0x0  nop
    ctx->pc = 0x1b2634u;
    // NOP
label_1b2638:
    // 0x1b2638: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b2638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b263c:
    // 0x1b263c: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x1b263cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1b2640:
    // 0x1b2640: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2644:
    // 0x1b2644: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b2648:
    if (ctx->pc == 0x1B2648u) {
        ctx->pc = 0x1B2648u;
            // 0x1b2648: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1B264Cu;
        goto label_1b264c;
    }
    ctx->pc = 0x1B2644u;
    {
        const bool branch_taken_0x1b2644 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2644u;
            // 0x1b2648: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2644) {
            ctx->pc = 0x1B2658u;
            goto label_1b2658;
        }
    }
    ctx->pc = 0x1B264Cu;
label_1b264c:
    // 0x1b264c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b2650:
    if (ctx->pc == 0x1B2650u) {
        ctx->pc = 0x1B2654u;
        goto label_1b2654;
    }
    ctx->pc = 0x1B264Cu;
    {
        const bool branch_taken_0x1b264c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b264c) {
            ctx->pc = 0x1B2658u;
            goto label_1b2658;
        }
    }
    ctx->pc = 0x1B2654u;
label_1b2654:
    // 0x1b2654: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b2654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b2658:
    // 0x1b2658: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b265c:
    if (ctx->pc == 0x1B265Cu) {
        ctx->pc = 0x1B2660u;
        goto label_1b2660;
    }
    ctx->pc = 0x1B2658u;
    {
        const bool branch_taken_0x1b2658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2658) {
            ctx->pc = 0x1B2688u;
            goto label_1b2688;
        }
    }
    ctx->pc = 0x1B2660u;
label_1b2660:
    // 0x1b2660: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b2660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2664:
    // 0x1b2664: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2668:
    // 0x1b2668: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b266c:
    // 0x1b266c: 0xc0655a0  jal         func_195680
label_1b2670:
    if (ctx->pc == 0x1B2670u) {
        ctx->pc = 0x1B2670u;
            // 0x1b2670: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2674u;
        goto label_1b2674;
    }
    ctx->pc = 0x1B266Cu;
    SET_GPR_U32(ctx, 31, 0x1B2674u);
    ctx->pc = 0x1B2670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B266Cu;
            // 0x1b2670: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2674u; }
        if (ctx->pc != 0x1B2674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2674u; }
        if (ctx->pc != 0x1B2674u) { return; }
    }
    ctx->pc = 0x1B2674u;
label_1b2674:
    // 0x1b2674: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b2674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2678:
    // 0x1b2678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b267c:
    // 0x1b267c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b2680:
    // 0x1b2680: 0xc0655a0  jal         func_195680
label_1b2684:
    if (ctx->pc == 0x1B2684u) {
        ctx->pc = 0x1B2684u;
            // 0x1b2684: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2688u;
        goto label_1b2688;
    }
    ctx->pc = 0x1B2680u;
    SET_GPR_U32(ctx, 31, 0x1B2688u);
    ctx->pc = 0x1B2684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2680u;
            // 0x1b2684: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2688u; }
        if (ctx->pc != 0x1B2688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2688u; }
        if (ctx->pc != 0x1B2688u) { return; }
    }
    ctx->pc = 0x1B2688u;
label_1b2688:
    // 0x1b2688: 0xc065d00  jal         func_197400
label_1b268c:
    if (ctx->pc == 0x1B268Cu) {
        ctx->pc = 0x1B2690u;
        goto label_1b2690;
    }
    ctx->pc = 0x1B2688u;
    SET_GPR_U32(ctx, 31, 0x1B2690u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2690u; }
        if (ctx->pc != 0x1B2690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2690u; }
        if (ctx->pc != 0x1B2690u) { return; }
    }
    ctx->pc = 0x1B2690u;
label_1b2690:
    // 0x1b2690: 0x184001fb  blez        $v0, . + 4 + (0x1FB << 2)
label_1b2694:
    if (ctx->pc == 0x1B2694u) {
        ctx->pc = 0x1B2698u;
        goto label_1b2698;
    }
    ctx->pc = 0x1B2690u;
    {
        const bool branch_taken_0x1b2690 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b2690) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2698u;
label_1b2698:
    // 0x1b2698: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b269c:
    // 0x1b269c: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x1b269cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1b26a0:
    // 0x1b26a0: 0x146201f7  bne         $v1, $v0, . + 4 + (0x1F7 << 2)
label_1b26a4:
    if (ctx->pc == 0x1B26A4u) {
        ctx->pc = 0x1B26A8u;
        goto label_1b26a8;
    }
    ctx->pc = 0x1B26A0u;
    {
        const bool branch_taken_0x1b26a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b26a0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B26A8u;
label_1b26a8:
    // 0x1b26a8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b26a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b26ac:
    // 0x1b26ac: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b26acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b26b0:
    // 0x1b26b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b26b4:
    // 0x1b26b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b26b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b26b8:
    // 0x1b26b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b26b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b26bc:
    // 0x1b26bc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b26bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b26c0:
    // 0x1b26c0: 0xc0655dc  jal         func_195770
label_1b26c4:
    if (ctx->pc == 0x1B26C4u) {
        ctx->pc = 0x1B26C4u;
            // 0x1b26c4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B26C8u;
        goto label_1b26c8;
    }
    ctx->pc = 0x1B26C0u;
    SET_GPR_U32(ctx, 31, 0x1B26C8u);
    ctx->pc = 0x1B26C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26C0u;
            // 0x1b26c4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26C8u; }
        if (ctx->pc != 0x1B26C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26C8u; }
        if (ctx->pc != 0x1B26C8u) { return; }
    }
    ctx->pc = 0x1B26C8u;
label_1b26c8:
    // 0x1b26c8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b26cc:
    // 0x1b26cc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b26d0:
    // 0x1b26d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b26d4:
    // 0x1b26d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b26d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b26d8:
    // 0x1b26d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b26d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b26dc:
    // 0x1b26dc: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b26dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b26e0:
    // 0x1b26e0: 0xc0655dc  jal         func_195770
label_1b26e4:
    if (ctx->pc == 0x1B26E4u) {
        ctx->pc = 0x1B26E4u;
            // 0x1b26e4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B26E8u;
        goto label_1b26e8;
    }
    ctx->pc = 0x1B26E0u;
    SET_GPR_U32(ctx, 31, 0x1B26E8u);
    ctx->pc = 0x1B26E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B26E0u;
            // 0x1b26e4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26E8u; }
        if (ctx->pc != 0x1B26E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B26E8u; }
        if (ctx->pc != 0x1B26E8u) { return; }
    }
    ctx->pc = 0x1B26E8u;
label_1b26e8:
    // 0x1b26e8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b26ec:
    // 0x1b26ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b26ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b26f0:
    // 0x1b26f0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b26f4:
    // 0x1b26f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b26f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b26f8:
    // 0x1b26f8: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b26f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b26fc:
    // 0x1b26fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b26fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2700:
    // 0x1b2700: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2704:
    // 0x1b2704: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2708:
    // 0x1b2708: 0xc0655dc  jal         func_195770
label_1b270c:
    if (ctx->pc == 0x1B270Cu) {
        ctx->pc = 0x1B270Cu;
            // 0x1b270c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2710u;
        goto label_1b2710;
    }
    ctx->pc = 0x1B2708u;
    SET_GPR_U32(ctx, 31, 0x1B2710u);
    ctx->pc = 0x1B270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2708u;
            // 0x1b270c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2710u; }
        if (ctx->pc != 0x1B2710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2710u; }
        if (ctx->pc != 0x1B2710u) { return; }
    }
    ctx->pc = 0x1B2710u;
label_1b2710:
    // 0x1b2710: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2714:
    // 0x1b2714: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2718:
    // 0x1b2718: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b271c:
    // 0x1b271c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b271cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2720:
    // 0x1b2720: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2724:
    // 0x1b2724: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2724u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2728:
    // 0x1b2728: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b272c:
    // 0x1b272c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2730:
    // 0x1b2730: 0xc0655dc  jal         func_195770
label_1b2734:
    if (ctx->pc == 0x1B2734u) {
        ctx->pc = 0x1B2734u;
            // 0x1b2734: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2738u;
        goto label_1b2738;
    }
    ctx->pc = 0x1B2730u;
    SET_GPR_U32(ctx, 31, 0x1B2738u);
    ctx->pc = 0x1B2734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2730u;
            // 0x1b2734: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2738u; }
        if (ctx->pc != 0x1B2738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2738u; }
        if (ctx->pc != 0x1B2738u) { return; }
    }
    ctx->pc = 0x1B2738u;
label_1b2738:
    // 0x1b2738: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b273c:
    // 0x1b273c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2740:
    // 0x1b2740: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2744:
    // 0x1b2744: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2748:
    // 0x1b2748: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b274c:
    // 0x1b274c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b274cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2750:
    // 0x1b2750: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2754:
    // 0x1b2754: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2758:
    // 0x1b2758: 0xc0655dc  jal         func_195770
label_1b275c:
    if (ctx->pc == 0x1B275Cu) {
        ctx->pc = 0x1B275Cu;
            // 0x1b275c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2760u;
        goto label_1b2760;
    }
    ctx->pc = 0x1B2758u;
    SET_GPR_U32(ctx, 31, 0x1B2760u);
    ctx->pc = 0x1B275Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2758u;
            // 0x1b275c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2760u; }
        if (ctx->pc != 0x1B2760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2760u; }
        if (ctx->pc != 0x1B2760u) { return; }
    }
    ctx->pc = 0x1B2760u;
label_1b2760:
    // 0x1b2760: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2764:
    // 0x1b2764: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b2764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2768:
    // 0x1b2768: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b276c:
    // 0x1b276c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b276cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2770:
    // 0x1b2770: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2774:
    // 0x1b2774: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2774u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2778:
    // 0x1b2778: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b277c:
    // 0x1b277c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2780:
    // 0x1b2780: 0xc0655dc  jal         func_195770
label_1b2784:
    if (ctx->pc == 0x1B2784u) {
        ctx->pc = 0x1B2784u;
            // 0x1b2784: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2788u;
        goto label_1b2788;
    }
    ctx->pc = 0x1B2780u;
    SET_GPR_U32(ctx, 31, 0x1B2788u);
    ctx->pc = 0x1B2784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2780u;
            // 0x1b2784: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2788u; }
        if (ctx->pc != 0x1B2788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2788u; }
        if (ctx->pc != 0x1B2788u) { return; }
    }
    ctx->pc = 0x1B2788u;
label_1b2788:
    // 0x1b2788: 0xc065d00  jal         func_197400
label_1b278c:
    if (ctx->pc == 0x1B278Cu) {
        ctx->pc = 0x1B2790u;
        goto label_1b2790;
    }
    ctx->pc = 0x1B2788u;
    SET_GPR_U32(ctx, 31, 0x1B2790u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2790u; }
        if (ctx->pc != 0x1B2790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2790u; }
        if (ctx->pc != 0x1B2790u) { return; }
    }
    ctx->pc = 0x1B2790u;
label_1b2790:
    // 0x1b2790: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b2790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b2794:
    // 0x1b2794: 0x142001ba  bnez        $at, . + 4 + (0x1BA << 2)
label_1b2798:
    if (ctx->pc == 0x1B2798u) {
        ctx->pc = 0x1B279Cu;
        goto label_1b279c;
    }
    ctx->pc = 0x1B2794u;
    {
        const bool branch_taken_0x1b2794 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2794) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B279Cu;
label_1b279c:
    // 0x1b279c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b279cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b27a0:
    // 0x1b27a0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b27a4:
    // 0x1b27a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b27a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b27a8:
    // 0x1b27a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b27ac:
    // 0x1b27ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b27acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b27b0:
    // 0x1b27b0: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b27b4:
    // 0x1b27b4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b27b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b27b8:
    // 0x1b27b8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b27b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b27bc:
    // 0x1b27bc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b27c0:
    // 0x1b27c0: 0xc0655dc  jal         func_195770
label_1b27c4:
    if (ctx->pc == 0x1B27C4u) {
        ctx->pc = 0x1B27C4u;
            // 0x1b27c4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B27C8u;
        goto label_1b27c8;
    }
    ctx->pc = 0x1B27C0u;
    SET_GPR_U32(ctx, 31, 0x1B27C8u);
    ctx->pc = 0x1B27C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27C0u;
            // 0x1b27c4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27C8u; }
        if (ctx->pc != 0x1B27C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27C8u; }
        if (ctx->pc != 0x1B27C8u) { return; }
    }
    ctx->pc = 0x1B27C8u;
label_1b27c8:
    // 0x1b27c8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b27cc:
    // 0x1b27cc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b27d0:
    // 0x1b27d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b27d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b27d4:
    // 0x1b27d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b27d8:
    // 0x1b27d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b27d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b27dc:
    // 0x1b27dc: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b27e0:
    // 0x1b27e0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b27e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b27e4:
    // 0x1b27e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b27e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b27e8:
    // 0x1b27e8: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b27e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b27ec:
    // 0x1b27ec: 0xc0655dc  jal         func_195770
label_1b27f0:
    if (ctx->pc == 0x1B27F0u) {
        ctx->pc = 0x1B27F0u;
            // 0x1b27f0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B27F4u;
        goto label_1b27f4;
    }
    ctx->pc = 0x1B27ECu;
    SET_GPR_U32(ctx, 31, 0x1B27F4u);
    ctx->pc = 0x1B27F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27ECu;
            // 0x1b27f0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27F4u; }
        if (ctx->pc != 0x1B27F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27F4u; }
        if (ctx->pc != 0x1B27F4u) { return; }
    }
    ctx->pc = 0x1B27F4u;
label_1b27f4:
    // 0x1b27f4: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b27f8:
    // 0x1b27f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b27fc:
    // 0x1b27fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b27fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2800:
    // 0x1b2800: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2804:
    // 0x1b2804: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2808:
    // 0x1b2808: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b280c:
    // 0x1b280c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b280cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2810:
    // 0x1b2810: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2814:
    // 0x1b2814: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2818:
    // 0x1b2818: 0xc0655dc  jal         func_195770
label_1b281c:
    if (ctx->pc == 0x1B281Cu) {
        ctx->pc = 0x1B281Cu;
            // 0x1b281c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2820u;
        goto label_1b2820;
    }
    ctx->pc = 0x1B2818u;
    SET_GPR_U32(ctx, 31, 0x1B2820u);
    ctx->pc = 0x1B281Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2818u;
            // 0x1b281c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2820u; }
        if (ctx->pc != 0x1B2820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2820u; }
        if (ctx->pc != 0x1B2820u) { return; }
    }
    ctx->pc = 0x1B2820u;
label_1b2820:
    // 0x1b2820: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2824:
    // 0x1b2824: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2828:
    // 0x1b2828: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2828u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b282c:
    // 0x1b282c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2830:
    // 0x1b2830: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2834:
    // 0x1b2834: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2838:
    // 0x1b2838: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2838u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b283c:
    // 0x1b283c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b283cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2840:
    // 0x1b2840: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2844:
    // 0x1b2844: 0xc0655dc  jal         func_195770
label_1b2848:
    if (ctx->pc == 0x1B2848u) {
        ctx->pc = 0x1B2848u;
            // 0x1b2848: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B284Cu;
        goto label_1b284c;
    }
    ctx->pc = 0x1B2844u;
    SET_GPR_U32(ctx, 31, 0x1B284Cu);
    ctx->pc = 0x1B2848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2844u;
            // 0x1b2848: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B284Cu; }
        if (ctx->pc != 0x1B284Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B284Cu; }
        if (ctx->pc != 0x1B284Cu) { return; }
    }
    ctx->pc = 0x1B284Cu;
label_1b284c:
    // 0x1b284c: 0x1000018c  b           . + 4 + (0x18C << 2)
label_1b2850:
    if (ctx->pc == 0x1B2850u) {
        ctx->pc = 0x1B2854u;
        goto label_1b2854;
    }
    ctx->pc = 0x1B284Cu;
    {
        const bool branch_taken_0x1b284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b284c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2854u;
label_1b2854:
    // 0x1b2854: 0x0  nop
    ctx->pc = 0x1b2854u;
    // NOP
label_1b2858:
    // 0x1b2858: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x1b2858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1b285c:
    // 0x1b285c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1b2860:
    if (ctx->pc == 0x1B2860u) {
        ctx->pc = 0x1B2860u;
            // 0x1b2860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B2864u;
        goto label_1b2864;
    }
    ctx->pc = 0x1B285Cu;
    {
        const bool branch_taken_0x1b285c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B285Cu;
            // 0x1b2860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b285c) {
            ctx->pc = 0x1B28A0u;
            goto label_1b28a0;
        }
    }
    ctx->pc = 0x1B2864u;
label_1b2864:
    // 0x1b2864: 0xc050bb4  jal         func_142ED0
label_1b2868:
    if (ctx->pc == 0x1B2868u) {
        ctx->pc = 0x1B2868u;
            // 0x1b2868: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1B286Cu;
        goto label_1b286c;
    }
    ctx->pc = 0x1B2864u;
    SET_GPR_U32(ctx, 31, 0x1B286Cu);
    ctx->pc = 0x1B2868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2864u;
            // 0x1b2868: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B286Cu; }
        if (ctx->pc != 0x1B286Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B286Cu; }
        if (ctx->pc != 0x1B286Cu) { return; }
    }
    ctx->pc = 0x1B286Cu;
label_1b286c:
    // 0x1b286c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b286cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b2870:
    // 0x1b2870: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b2870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b2874:
    // 0x1b2874: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b2874u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b2878:
    // 0x1b2878: 0x0  nop
    ctx->pc = 0x1b2878u;
    // NOP
label_1b287c:
    // 0x1b287c: 0x0  nop
    ctx->pc = 0x1b287cu;
    // NOP
label_1b2880:
    // 0x1b2880: 0x1010  mfhi        $v0
    ctx->pc = 0x1b2880u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b2884:
    // 0x1b2884: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b2884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b2888:
    // 0x1b2888: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x1b2888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_1b288c:
    // 0x1b288c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1b288cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1b2890:
    // 0x1b2890: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b2890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1b2894:
    // 0x1b2894: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b2894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b2898:
    // 0x1b2898: 0x10000179  b           . + 4 + (0x179 << 2)
label_1b289c:
    if (ctx->pc == 0x1B289Cu) {
        ctx->pc = 0x1B289Cu;
            // 0x1b289c: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B28A0u;
        goto label_1b28a0;
    }
    ctx->pc = 0x1B2898u;
    {
        const bool branch_taken_0x1b2898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2898u;
            // 0x1b289c: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2898) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B28A0u;
label_1b28a0:
    // 0x1b28a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b28a4:
    // 0x1b28a4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_1b28a8:
    if (ctx->pc == 0x1B28A8u) {
        ctx->pc = 0x1B28ACu;
        goto label_1b28ac;
    }
    ctx->pc = 0x1B28A4u;
    {
        const bool branch_taken_0x1b28a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b28a4) {
            ctx->pc = 0x1B2938u;
            goto label_1b2938;
        }
    }
    ctx->pc = 0x1B28ACu;
label_1b28ac:
    // 0x1b28ac: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b28acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b28b0:
    // 0x1b28b0: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1b28b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
label_1b28b4:
    // 0x1b28b4: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_1b28b8:
    if (ctx->pc == 0x1B28B8u) {
        ctx->pc = 0x1B28B8u;
            // 0x1b28b8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1B28BCu;
        goto label_1b28bc;
    }
    ctx->pc = 0x1B28B4u;
    {
        const bool branch_taken_0x1b28b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B28B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28B4u;
            // 0x1b28b8: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28b4) {
            ctx->pc = 0x1B2918u;
            goto label_1b2918;
        }
    }
    ctx->pc = 0x1B28BCu;
label_1b28bc:
    // 0x1b28bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b28bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b28c0:
    // 0x1b28c0: 0x0  nop
    ctx->pc = 0x1b28c0u;
    // NOP
label_1b28c4:
    // 0x1b28c4: 0x0  nop
    ctx->pc = 0x1b28c4u;
    // NOP
label_1b28c8:
    // 0x1b28c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b28c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b28cc:
    // 0x1b28cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1b28d0:
    if (ctx->pc == 0x1B28D0u) {
        ctx->pc = 0x1B28D4u;
        goto label_1b28d4;
    }
    ctx->pc = 0x1B28CCu;
    {
        const bool branch_taken_0x1b28cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b28cc) {
            ctx->pc = 0x1B2918u;
            goto label_1b2918;
        }
    }
    ctx->pc = 0x1B28D4u;
label_1b28d4:
    // 0x1b28d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b28d8:
    // 0x1b28d8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b28dc:
    // 0x1b28dc: 0xc06560c  jal         func_195830
label_1b28e0:
    if (ctx->pc == 0x1B28E0u) {
        ctx->pc = 0x1B28E0u;
            // 0x1b28e0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B28E4u;
        goto label_1b28e4;
    }
    ctx->pc = 0x1B28DCu;
    SET_GPR_U32(ctx, 31, 0x1B28E4u);
    ctx->pc = 0x1B28E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28DCu;
            // 0x1b28e0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E4u; }
        if (ctx->pc != 0x1B28E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28E4u; }
        if (ctx->pc != 0x1B28E4u) { return; }
    }
    ctx->pc = 0x1B28E4u;
label_1b28e4:
    // 0x1b28e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b28e8:
    // 0x1b28e8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b28ec:
    // 0x1b28ec: 0xc06560c  jal         func_195830
label_1b28f0:
    if (ctx->pc == 0x1B28F0u) {
        ctx->pc = 0x1B28F0u;
            // 0x1b28f0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B28F4u;
        goto label_1b28f4;
    }
    ctx->pc = 0x1B28ECu;
    SET_GPR_U32(ctx, 31, 0x1B28F4u);
    ctx->pc = 0x1B28F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28ECu;
            // 0x1b28f0: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F4u; }
        if (ctx->pc != 0x1B28F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F4u; }
        if (ctx->pc != 0x1B28F4u) { return; }
    }
    ctx->pc = 0x1B28F4u;
label_1b28f4:
    // 0x1b28f4: 0xc065d00  jal         func_197400
label_1b28f8:
    if (ctx->pc == 0x1B28F8u) {
        ctx->pc = 0x1B28FCu;
        goto label_1b28fc;
    }
    ctx->pc = 0x1B28F4u;
    SET_GPR_U32(ctx, 31, 0x1B28FCu);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28FCu; }
        if (ctx->pc != 0x1B28FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28FCu; }
        if (ctx->pc != 0x1B28FCu) { return; }
    }
    ctx->pc = 0x1B28FCu;
label_1b28fc:
    // 0x1b28fc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_1b2900:
    if (ctx->pc == 0x1B2900u) {
        ctx->pc = 0x1B2904u;
        goto label_1b2904;
    }
    ctx->pc = 0x1B28FCu;
    {
        const bool branch_taken_0x1b28fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b28fc) {
            ctx->pc = 0x1B2918u;
            goto label_1b2918;
        }
    }
    ctx->pc = 0x1B2904u;
label_1b2904:
    // 0x1b2904: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2908:
    // 0x1b2908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b290c:
    // 0x1b290c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2910:
    // 0x1b2910: 0xc0655b0  jal         func_1956C0
label_1b2914:
    if (ctx->pc == 0x1B2914u) {
        ctx->pc = 0x1B2914u;
            // 0x1b2914: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B2918u;
        goto label_1b2918;
    }
    ctx->pc = 0x1B2910u;
    SET_GPR_U32(ctx, 31, 0x1B2918u);
    ctx->pc = 0x1B2914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2910u;
            // 0x1b2914: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2918u; }
        if (ctx->pc != 0x1B2918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2918u; }
        if (ctx->pc != 0x1B2918u) { return; }
    }
    ctx->pc = 0x1B2918u;
label_1b2918:
    // 0x1b2918: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b291c:
    // 0x1b291c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x1b291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1b2920:
    // 0x1b2920: 0x14620157  bne         $v1, $v0, . + 4 + (0x157 << 2)
label_1b2924:
    if (ctx->pc == 0x1B2924u) {
        ctx->pc = 0x1B2924u;
            // 0x1b2924: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1B2928u;
        goto label_1b2928;
    }
    ctx->pc = 0x1B2920u;
    {
        const bool branch_taken_0x1b2920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2920u;
            // 0x1b2924: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2920) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2928u;
label_1b2928:
    // 0x1b2928: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1b2928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1b292c:
    // 0x1b292c: 0x10000154  b           . + 4 + (0x154 << 2)
label_1b2930:
    if (ctx->pc == 0x1B2930u) {
        ctx->pc = 0x1B2930u;
            // 0x1b2930: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2934u;
        goto label_1b2934;
    }
    ctx->pc = 0x1B292Cu;
    {
        const bool branch_taken_0x1b292c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B292Cu;
            // 0x1b2930: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b292c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2934u;
label_1b2934:
    // 0x1b2934: 0x0  nop
    ctx->pc = 0x1b2934u;
    // NOP
label_1b2938:
    // 0x1b2938: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b2938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b293c:
    // 0x1b293c: 0x146200c2  bne         $v1, $v0, . + 4 + (0xC2 << 2)
label_1b2940:
    if (ctx->pc == 0x1B2940u) {
        ctx->pc = 0x1B2940u;
            // 0x1b2940: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B2944u;
        goto label_1b2944;
    }
    ctx->pc = 0x1B293Cu;
    {
        const bool branch_taken_0x1b293c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B293Cu;
            // 0x1b2940: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b293c) {
            ctx->pc = 0x1B2C48u;
            goto label_1b2c48;
        }
    }
    ctx->pc = 0x1B2944u;
label_1b2944:
    // 0x1b2944: 0x14e20010  bne         $a3, $v0, . + 4 + (0x10 << 2)
label_1b2948:
    if (ctx->pc == 0x1B2948u) {
        ctx->pc = 0x1B294Cu;
        goto label_1b294c;
    }
    ctx->pc = 0x1B2944u;
    {
        const bool branch_taken_0x1b2944 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2944) {
            ctx->pc = 0x1B2988u;
            goto label_1b2988;
        }
    }
    ctx->pc = 0x1B294Cu;
label_1b294c:
    // 0x1b294c: 0xc040d72  jal         func_1035C8
label_1b2950:
    if (ctx->pc == 0x1B2950u) {
        ctx->pc = 0x1B2950u;
            // 0x1b2950: 0xc66c00d0  lwc1        $f12, 0xD0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B2954u;
        goto label_1b2954;
    }
    ctx->pc = 0x1B294Cu;
    SET_GPR_U32(ctx, 31, 0x1B2954u);
    ctx->pc = 0x1B2950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B294Cu;
            // 0x1b2950: 0xc66c00d0  lwc1        $f12, 0xD0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2954u; }
        if (ctx->pc != 0x1B2954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2954u; }
        if (ctx->pc != 0x1B2954u) { return; }
    }
    ctx->pc = 0x1B2954u;
label_1b2954:
    // 0x1b2954: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2958:
    // 0x1b2958: 0xc040084  jal         func_100210
label_1b295c:
    if (ctx->pc == 0x1B295Cu) {
        ctx->pc = 0x1B295Cu;
            // 0x1b295c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2960u;
        goto label_1b2960;
    }
    ctx->pc = 0x1B2958u;
    SET_GPR_U32(ctx, 31, 0x1B2960u);
    ctx->pc = 0x1B295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2958u;
            // 0x1b295c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2960u; }
        if (ctx->pc != 0x1B2960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2960u; }
        if (ctx->pc != 0x1B2960u) { return; }
    }
    ctx->pc = 0x1B2960u;
label_1b2960:
    // 0x1b2960: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1b2964:
    if (ctx->pc == 0x1B2964u) {
        ctx->pc = 0x1B2968u;
        goto label_1b2968;
    }
    ctx->pc = 0x1B2960u;
    {
        const bool branch_taken_0x1b2960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2960) {
            ctx->pc = 0x1B29C0u;
            goto label_1b29c0;
        }
    }
    ctx->pc = 0x1B2968u;
label_1b2968:
    // 0x1b2968: 0xc66100d0  lwc1        $f1, 0xD0($s3)
    ctx->pc = 0x1b2968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b296c:
    // 0x1b296c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1b2970:
    // 0x1b2970: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b2970u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b2974:
    // 0x1b2974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2978:
    // 0x1b2978: 0x0  nop
    ctx->pc = 0x1b2978u;
    // NOP
label_1b297c:
    // 0x1b297c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b297cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b2980:
    // 0x1b2980: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b2984:
    if (ctx->pc == 0x1B2984u) {
        ctx->pc = 0x1B2984u;
            // 0x1b2984: 0xe66000d0  swc1        $f0, 0xD0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
        ctx->pc = 0x1B2988u;
        goto label_1b2988;
    }
    ctx->pc = 0x1B2980u;
    {
        const bool branch_taken_0x1b2980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2980u;
            // 0x1b2984: 0xe66000d0  swc1        $f0, 0xD0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2980) {
            ctx->pc = 0x1B29C0u;
            goto label_1b29c0;
        }
    }
    ctx->pc = 0x1B2988u;
label_1b2988:
    // 0x1b2988: 0xc040d72  jal         func_1035C8
label_1b298c:
    if (ctx->pc == 0x1B298Cu) {
        ctx->pc = 0x1B298Cu;
            // 0x1b298c: 0xc66c00d0  lwc1        $f12, 0xD0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B2990u;
        goto label_1b2990;
    }
    ctx->pc = 0x1B2988u;
    SET_GPR_U32(ctx, 31, 0x1B2990u);
    ctx->pc = 0x1B298Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2988u;
            // 0x1b298c: 0xc66c00d0  lwc1        $f12, 0xD0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2990u; }
        if (ctx->pc != 0x1B2990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2990u; }
        if (ctx->pc != 0x1B2990u) { return; }
    }
    ctx->pc = 0x1B2990u;
label_1b2990:
    // 0x1b2990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2994:
    // 0x1b2994: 0xc040098  jal         func_100260
label_1b2998:
    if (ctx->pc == 0x1B2998u) {
        ctx->pc = 0x1B2998u;
            // 0x1b2998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B299Cu;
        goto label_1b299c;
    }
    ctx->pc = 0x1B2994u;
    SET_GPR_U32(ctx, 31, 0x1B299Cu);
    ctx->pc = 0x1B2998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2994u;
            // 0x1b2998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B299Cu; }
        if (ctx->pc != 0x1B299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B299Cu; }
        if (ctx->pc != 0x1B299Cu) { return; }
    }
    ctx->pc = 0x1B299Cu;
label_1b299c:
    // 0x1b299c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b29a0:
    if (ctx->pc == 0x1B29A0u) {
        ctx->pc = 0x1B29A4u;
        goto label_1b29a4;
    }
    ctx->pc = 0x1B299Cu;
    {
        const bool branch_taken_0x1b299c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b299c) {
            ctx->pc = 0x1B29C0u;
            goto label_1b29c0;
        }
    }
    ctx->pc = 0x1B29A4u;
label_1b29a4:
    // 0x1b29a4: 0xc66100d0  lwc1        $f1, 0xD0($s3)
    ctx->pc = 0x1b29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b29a8:
    // 0x1b29a8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1b29ac:
    // 0x1b29ac: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b29acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b29b0:
    // 0x1b29b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b29b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b29b4:
    // 0x1b29b4: 0x0  nop
    ctx->pc = 0x1b29b4u;
    // NOP
label_1b29b8:
    // 0x1b29b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b29b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b29bc:
    // 0x1b29bc: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x1b29bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_1b29c0:
    // 0x1b29c0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b29c4:
    // 0x1b29c4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b29c8:
    // 0x1b29c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b29c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b29cc:
    // 0x1b29cc: 0x0  nop
    ctx->pc = 0x1b29ccu;
    // NOP
label_1b29d0:
    // 0x1b29d0: 0x0  nop
    ctx->pc = 0x1b29d0u;
    // NOP
label_1b29d4:
    // 0x1b29d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b29d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b29d8:
    // 0x1b29d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1b29dc:
    if (ctx->pc == 0x1B29DCu) {
        ctx->pc = 0x1B29E0u;
        goto label_1b29e0;
    }
    ctx->pc = 0x1B29D8u;
    {
        const bool branch_taken_0x1b29d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b29d8) {
            ctx->pc = 0x1B2A28u;
            goto label_1b2a28;
        }
    }
    ctx->pc = 0x1B29E0u;
label_1b29e0:
    // 0x1b29e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b29e4:
    // 0x1b29e4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b29e8:
    // 0x1b29e8: 0xc06560c  jal         func_195830
label_1b29ec:
    if (ctx->pc == 0x1B29ECu) {
        ctx->pc = 0x1B29ECu;
            // 0x1b29ec: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B29F0u;
        goto label_1b29f0;
    }
    ctx->pc = 0x1B29E8u;
    SET_GPR_U32(ctx, 31, 0x1B29F0u);
    ctx->pc = 0x1B29ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29E8u;
            // 0x1b29ec: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29F0u; }
        if (ctx->pc != 0x1B29F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B29F0u; }
        if (ctx->pc != 0x1B29F0u) { return; }
    }
    ctx->pc = 0x1B29F0u;
label_1b29f0:
    // 0x1b29f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b29f4:
    // 0x1b29f4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b29f8:
    // 0x1b29f8: 0xc06560c  jal         func_195830
label_1b29fc:
    if (ctx->pc == 0x1B29FCu) {
        ctx->pc = 0x1B29FCu;
            // 0x1b29fc: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B2A00u;
        goto label_1b2a00;
    }
    ctx->pc = 0x1B29F8u;
    SET_GPR_U32(ctx, 31, 0x1B2A00u);
    ctx->pc = 0x1B29FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29F8u;
            // 0x1b29fc: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A00u; }
        if (ctx->pc != 0x1B2A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A00u; }
        if (ctx->pc != 0x1B2A00u) { return; }
    }
    ctx->pc = 0x1B2A00u;
label_1b2a00:
    // 0x1b2a00: 0xc065d00  jal         func_197400
label_1b2a04:
    if (ctx->pc == 0x1B2A04u) {
        ctx->pc = 0x1B2A08u;
        goto label_1b2a08;
    }
    ctx->pc = 0x1B2A00u;
    SET_GPR_U32(ctx, 31, 0x1B2A08u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A08u; }
        if (ctx->pc != 0x1B2A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A08u; }
        if (ctx->pc != 0x1B2A08u) { return; }
    }
    ctx->pc = 0x1B2A08u;
label_1b2a08:
    // 0x1b2a08: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1b2a0c:
    if (ctx->pc == 0x1B2A0Cu) {
        ctx->pc = 0x1B2A10u;
        goto label_1b2a10;
    }
    ctx->pc = 0x1B2A08u;
    {
        const bool branch_taken_0x1b2a08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b2a08) {
            ctx->pc = 0x1B2A28u;
            goto label_1b2a28;
        }
    }
    ctx->pc = 0x1B2A10u;
label_1b2a10:
    // 0x1b2a10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2a14:
    // 0x1b2a14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2a18:
    // 0x1b2a18: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2a1c:
    // 0x1b2a1c: 0xc0655b0  jal         func_1956C0
label_1b2a20:
    if (ctx->pc == 0x1B2A20u) {
        ctx->pc = 0x1B2A20u;
            // 0x1b2a20: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->pc = 0x1B2A24u;
        goto label_1b2a24;
    }
    ctx->pc = 0x1B2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A24u);
    ctx->pc = 0x1B2A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A1Cu;
            // 0x1b2a20: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A24u; }
        if (ctx->pc != 0x1B2A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A24u; }
        if (ctx->pc != 0x1B2A24u) { return; }
    }
    ctx->pc = 0x1B2A24u;
label_1b2a24:
    // 0x1b2a24: 0x0  nop
    ctx->pc = 0x1b2a24u;
    // NOP
label_1b2a28:
    // 0x1b2a28: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2a2c:
    // 0x1b2a2c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b2a30:
    // 0x1b2a30: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b2a30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b2a34:
    // 0x1b2a34: 0x0  nop
    ctx->pc = 0x1b2a34u;
    // NOP
label_1b2a38:
    // 0x1b2a38: 0x0  nop
    ctx->pc = 0x1b2a38u;
    // NOP
label_1b2a3c:
    // 0x1b2a3c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b2a3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b2a40:
    // 0x1b2a40: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_1b2a44:
    if (ctx->pc == 0x1B2A44u) {
        ctx->pc = 0x1B2A48u;
        goto label_1b2a48;
    }
    ctx->pc = 0x1B2A40u;
    {
        const bool branch_taken_0x1b2a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a40) {
            ctx->pc = 0x1B2C00u;
            goto label_1b2c00;
        }
    }
    ctx->pc = 0x1B2A48u;
label_1b2a48:
    // 0x1b2a48: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2a4c:
    // 0x1b2a4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b2a50:
    // 0x1b2a50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2a54:
    // 0x1b2a54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2a58:
    // 0x1b2a58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2a5c:
    // 0x1b2a5c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2a60:
    // 0x1b2a60: 0xc0655dc  jal         func_195770
label_1b2a64:
    if (ctx->pc == 0x1B2A64u) {
        ctx->pc = 0x1B2A64u;
            // 0x1b2a64: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2A68u;
        goto label_1b2a68;
    }
    ctx->pc = 0x1B2A60u;
    SET_GPR_U32(ctx, 31, 0x1B2A68u);
    ctx->pc = 0x1B2A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A60u;
            // 0x1b2a64: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A68u; }
        if (ctx->pc != 0x1B2A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A68u; }
        if (ctx->pc != 0x1B2A68u) { return; }
    }
    ctx->pc = 0x1B2A68u;
label_1b2a68:
    // 0x1b2a68: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2a6c:
    // 0x1b2a6c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b2a70:
    // 0x1b2a70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2a74:
    // 0x1b2a74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2a78:
    // 0x1b2a78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2a7c:
    // 0x1b2a7c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2a80:
    // 0x1b2a80: 0xc0655dc  jal         func_195770
label_1b2a84:
    if (ctx->pc == 0x1B2A84u) {
        ctx->pc = 0x1B2A84u;
            // 0x1b2a84: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2A88u;
        goto label_1b2a88;
    }
    ctx->pc = 0x1B2A80u;
    SET_GPR_U32(ctx, 31, 0x1B2A88u);
    ctx->pc = 0x1B2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A80u;
            // 0x1b2a84: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A88u; }
        if (ctx->pc != 0x1B2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A88u; }
        if (ctx->pc != 0x1B2A88u) { return; }
    }
    ctx->pc = 0x1B2A88u;
label_1b2a88:
    // 0x1b2a88: 0xc065d00  jal         func_197400
label_1b2a8c:
    if (ctx->pc == 0x1B2A8Cu) {
        ctx->pc = 0x1B2A90u;
        goto label_1b2a90;
    }
    ctx->pc = 0x1B2A88u;
    SET_GPR_U32(ctx, 31, 0x1B2A90u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A90u; }
        if (ctx->pc != 0x1B2A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A90u; }
        if (ctx->pc != 0x1B2A90u) { return; }
    }
    ctx->pc = 0x1B2A90u;
label_1b2a90:
    // 0x1b2a90: 0x1840005b  blez        $v0, . + 4 + (0x5B << 2)
label_1b2a94:
    if (ctx->pc == 0x1B2A94u) {
        ctx->pc = 0x1B2A98u;
        goto label_1b2a98;
    }
    ctx->pc = 0x1B2A90u;
    {
        const bool branch_taken_0x1b2a90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b2a90) {
            ctx->pc = 0x1B2C00u;
            goto label_1b2c00;
        }
    }
    ctx->pc = 0x1B2A98u;
label_1b2a98:
    // 0x1b2a98: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2a9c:
    // 0x1b2a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2aa0:
    // 0x1b2aa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2aa4:
    // 0x1b2aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2aa8:
    // 0x1b2aa8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2aac:
    // 0x1b2aac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2aacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2ab0:
    // 0x1b2ab0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2ab4:
    // 0x1b2ab4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2ab8:
    // 0x1b2ab8: 0xc0655dc  jal         func_195770
label_1b2abc:
    if (ctx->pc == 0x1B2ABCu) {
        ctx->pc = 0x1B2ABCu;
            // 0x1b2abc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2AC0u;
        goto label_1b2ac0;
    }
    ctx->pc = 0x1B2AB8u;
    SET_GPR_U32(ctx, 31, 0x1B2AC0u);
    ctx->pc = 0x1B2ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AB8u;
            // 0x1b2abc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AC0u; }
        if (ctx->pc != 0x1B2AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AC0u; }
        if (ctx->pc != 0x1B2AC0u) { return; }
    }
    ctx->pc = 0x1B2AC0u;
label_1b2ac0:
    // 0x1b2ac0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2ac4:
    // 0x1b2ac4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2ac8:
    // 0x1b2ac8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2acc:
    // 0x1b2acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2ad0:
    // 0x1b2ad0: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2ad4:
    // 0x1b2ad4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2ad4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2ad8:
    // 0x1b2ad8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2adc:
    // 0x1b2adc: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2ae0:
    // 0x1b2ae0: 0xc0655dc  jal         func_195770
label_1b2ae4:
    if (ctx->pc == 0x1B2AE4u) {
        ctx->pc = 0x1B2AE4u;
            // 0x1b2ae4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2AE8u;
        goto label_1b2ae8;
    }
    ctx->pc = 0x1B2AE0u;
    SET_GPR_U32(ctx, 31, 0x1B2AE8u);
    ctx->pc = 0x1B2AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AE0u;
            // 0x1b2ae4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AE8u; }
        if (ctx->pc != 0x1B2AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AE8u; }
        if (ctx->pc != 0x1B2AE8u) { return; }
    }
    ctx->pc = 0x1B2AE8u;
label_1b2ae8:
    // 0x1b2ae8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2aec:
    // 0x1b2aec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2af0:
    // 0x1b2af0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2af4:
    // 0x1b2af4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2af8:
    // 0x1b2af8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2afc:
    // 0x1b2afc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2afcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2b00:
    // 0x1b2b00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2b04:
    // 0x1b2b04: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2b08:
    // 0x1b2b08: 0xc0655dc  jal         func_195770
label_1b2b0c:
    if (ctx->pc == 0x1B2B0Cu) {
        ctx->pc = 0x1B2B0Cu;
            // 0x1b2b0c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2B10u;
        goto label_1b2b10;
    }
    ctx->pc = 0x1B2B08u;
    SET_GPR_U32(ctx, 31, 0x1B2B10u);
    ctx->pc = 0x1B2B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B08u;
            // 0x1b2b0c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B10u; }
        if (ctx->pc != 0x1B2B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B10u; }
        if (ctx->pc != 0x1B2B10u) { return; }
    }
    ctx->pc = 0x1B2B10u;
label_1b2b10:
    // 0x1b2b10: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2b14:
    // 0x1b2b14: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2b18:
    // 0x1b2b18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2b1c:
    // 0x1b2b1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2b20:
    // 0x1b2b20: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2b24:
    // 0x1b2b24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2b24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2b28:
    // 0x1b2b28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2b2c:
    // 0x1b2b2c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2b30:
    // 0x1b2b30: 0xc0655dc  jal         func_195770
label_1b2b34:
    if (ctx->pc == 0x1B2B34u) {
        ctx->pc = 0x1B2B34u;
            // 0x1b2b34: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2B38u;
        goto label_1b2b38;
    }
    ctx->pc = 0x1B2B30u;
    SET_GPR_U32(ctx, 31, 0x1B2B38u);
    ctx->pc = 0x1B2B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B30u;
            // 0x1b2b34: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B38u; }
        if (ctx->pc != 0x1B2B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B38u; }
        if (ctx->pc != 0x1B2B38u) { return; }
    }
    ctx->pc = 0x1B2B38u;
label_1b2b38:
    // 0x1b2b38: 0xc065d00  jal         func_197400
label_1b2b3c:
    if (ctx->pc == 0x1B2B3Cu) {
        ctx->pc = 0x1B2B40u;
        goto label_1b2b40;
    }
    ctx->pc = 0x1B2B38u;
    SET_GPR_U32(ctx, 31, 0x1B2B40u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B40u; }
        if (ctx->pc != 0x1B2B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B40u; }
        if (ctx->pc != 0x1B2B40u) { return; }
    }
    ctx->pc = 0x1B2B40u;
label_1b2b40:
    // 0x1b2b40: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b2b44:
    // 0x1b2b44: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_1b2b48:
    if (ctx->pc == 0x1B2B48u) {
        ctx->pc = 0x1B2B4Cu;
        goto label_1b2b4c;
    }
    ctx->pc = 0x1B2B44u;
    {
        const bool branch_taken_0x1b2b44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b44) {
            ctx->pc = 0x1B2C00u;
            goto label_1b2c00;
        }
    }
    ctx->pc = 0x1B2B4Cu;
label_1b2b4c:
    // 0x1b2b4c: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2b50:
    // 0x1b2b50: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2b54:
    // 0x1b2b54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2b54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2b58:
    // 0x1b2b58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2b5c:
    // 0x1b2b5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2b60:
    // 0x1b2b60: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2b64:
    // 0x1b2b64: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2b64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2b68:
    // 0x1b2b68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2b6c:
    // 0x1b2b6c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2b70:
    // 0x1b2b70: 0xc0655dc  jal         func_195770
label_1b2b74:
    if (ctx->pc == 0x1B2B74u) {
        ctx->pc = 0x1B2B74u;
            // 0x1b2b74: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2B78u;
        goto label_1b2b78;
    }
    ctx->pc = 0x1B2B70u;
    SET_GPR_U32(ctx, 31, 0x1B2B78u);
    ctx->pc = 0x1B2B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B70u;
            // 0x1b2b74: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B78u; }
        if (ctx->pc != 0x1B2B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B78u; }
        if (ctx->pc != 0x1B2B78u) { return; }
    }
    ctx->pc = 0x1B2B78u;
label_1b2b78:
    // 0x1b2b78: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2b7c:
    // 0x1b2b7c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2b80:
    // 0x1b2b80: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2b80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2b84:
    // 0x1b2b84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2b88:
    // 0x1b2b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2b8c:
    // 0x1b2b8c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2b90:
    // 0x1b2b90: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2b90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2b94:
    // 0x1b2b94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2b98:
    // 0x1b2b98: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2b9c:
    // 0x1b2b9c: 0xc0655dc  jal         func_195770
label_1b2ba0:
    if (ctx->pc == 0x1B2BA0u) {
        ctx->pc = 0x1B2BA0u;
            // 0x1b2ba0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2BA4u;
        goto label_1b2ba4;
    }
    ctx->pc = 0x1B2B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B2BA4u);
    ctx->pc = 0x1B2BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B9Cu;
            // 0x1b2ba0: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BA4u; }
        if (ctx->pc != 0x1B2BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BA4u; }
        if (ctx->pc != 0x1B2BA4u) { return; }
    }
    ctx->pc = 0x1B2BA4u;
label_1b2ba4:
    // 0x1b2ba4: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2ba8:
    // 0x1b2ba8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2bac:
    // 0x1b2bac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2bacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2bb0:
    // 0x1b2bb0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2bb4:
    // 0x1b2bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2bb8:
    // 0x1b2bb8: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2bbc:
    // 0x1b2bbc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2bbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2bc0:
    // 0x1b2bc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2bc4:
    // 0x1b2bc4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2bc8:
    // 0x1b2bc8: 0xc0655dc  jal         func_195770
label_1b2bcc:
    if (ctx->pc == 0x1B2BCCu) {
        ctx->pc = 0x1B2BCCu;
            // 0x1b2bcc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2BD0u;
        goto label_1b2bd0;
    }
    ctx->pc = 0x1B2BC8u;
    SET_GPR_U32(ctx, 31, 0x1B2BD0u);
    ctx->pc = 0x1B2BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC8u;
            // 0x1b2bcc: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BD0u; }
        if (ctx->pc != 0x1B2BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BD0u; }
        if (ctx->pc != 0x1B2BD0u) { return; }
    }
    ctx->pc = 0x1B2BD0u;
label_1b2bd0:
    // 0x1b2bd0: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2bd4:
    // 0x1b2bd4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2bd8:
    // 0x1b2bd8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2bd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2bdc:
    // 0x1b2bdc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2be0:
    // 0x1b2be0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2be4:
    // 0x1b2be4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1b2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1b2be8:
    // 0x1b2be8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2be8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2bec:
    // 0x1b2bec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2bf0:
    // 0x1b2bf0: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2bf4:
    // 0x1b2bf4: 0xc0655dc  jal         func_195770
label_1b2bf8:
    if (ctx->pc == 0x1B2BF8u) {
        ctx->pc = 0x1B2BF8u;
            // 0x1b2bf8: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2BFCu;
        goto label_1b2bfc;
    }
    ctx->pc = 0x1B2BF4u;
    SET_GPR_U32(ctx, 31, 0x1B2BFCu);
    ctx->pc = 0x1B2BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BF4u;
            // 0x1b2bf8: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BFCu; }
        if (ctx->pc != 0x1B2BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BFCu; }
        if (ctx->pc != 0x1B2BFCu) { return; }
    }
    ctx->pc = 0x1B2BFCu;
label_1b2bfc:
    // 0x1b2bfc: 0x0  nop
    ctx->pc = 0x1b2bfcu;
    // NOP
label_1b2c00:
    // 0x1b2c00: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2c04:
    // 0x1b2c04: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1b2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1b2c08:
    // 0x1b2c08: 0x1462009d  bne         $v1, $v0, . + 4 + (0x9D << 2)
label_1b2c0c:
    if (ctx->pc == 0x1B2C0Cu) {
        ctx->pc = 0x1B2C0Cu;
            // 0x1b2c0c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1B2C10u;
        goto label_1b2c10;
    }
    ctx->pc = 0x1B2C08u;
    {
        const bool branch_taken_0x1b2c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C08u;
            // 0x1b2c0c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c08) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2C10u;
label_1b2c10:
    // 0x1b2c10: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1b2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1b2c14:
    // 0x1b2c14: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b2c18:
    // 0x1b2c18: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2c1c:
    // 0x1b2c1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2c20:
    // 0x1b2c20: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b2c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b2c24:
    // 0x1b2c24: 0xc065590  jal         func_195640
label_1b2c28:
    if (ctx->pc == 0x1B2C28u) {
        ctx->pc = 0x1B2C28u;
            // 0x1b2c28: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2C2Cu;
        goto label_1b2c2c;
    }
    ctx->pc = 0x1B2C24u;
    SET_GPR_U32(ctx, 31, 0x1B2C2Cu);
    ctx->pc = 0x1B2C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C24u;
            // 0x1b2c28: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C2Cu; }
        if (ctx->pc != 0x1B2C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C2Cu; }
        if (ctx->pc != 0x1B2C2Cu) { return; }
    }
    ctx->pc = 0x1B2C2Cu;
label_1b2c2c:
    // 0x1b2c2c: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2c30:
    // 0x1b2c30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2c34:
    // 0x1b2c34: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b2c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b2c38:
    // 0x1b2c38: 0xc065590  jal         func_195640
label_1b2c3c:
    if (ctx->pc == 0x1B2C3Cu) {
        ctx->pc = 0x1B2C3Cu;
            // 0x1b2c3c: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2C40u;
        goto label_1b2c40;
    }
    ctx->pc = 0x1B2C38u;
    SET_GPR_U32(ctx, 31, 0x1B2C40u);
    ctx->pc = 0x1B2C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C38u;
            // 0x1b2c3c: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C40u; }
        if (ctx->pc != 0x1B2C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C40u; }
        if (ctx->pc != 0x1B2C40u) { return; }
    }
    ctx->pc = 0x1B2C40u;
label_1b2c40:
    // 0x1b2c40: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1b2c44:
    if (ctx->pc == 0x1B2C44u) {
        ctx->pc = 0x1B2C48u;
        goto label_1b2c48;
    }
    ctx->pc = 0x1B2C40u;
    {
        const bool branch_taken_0x1b2c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c40) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2C48u;
label_1b2c48:
    // 0x1b2c48: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b2c4c:
    // 0x1b2c4c: 0x1462008c  bne         $v1, $v0, . + 4 + (0x8C << 2)
label_1b2c50:
    if (ctx->pc == 0x1B2C50u) {
        ctx->pc = 0x1B2C54u;
        goto label_1b2c54;
    }
    ctx->pc = 0x1B2C4Cu;
    {
        const bool branch_taken_0x1b2c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2c4c) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2C54u;
label_1b2c54:
    // 0x1b2c54: 0xc66100d4  lwc1        $f1, 0xD4($s3)
    ctx->pc = 0x1b2c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2c58:
    // 0x1b2c58: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1b2c5c:
    // 0x1b2c5c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b2c5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b2c60:
    // 0x1b2c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2c64:
    // 0x1b2c64: 0x0  nop
    ctx->pc = 0x1b2c64u;
    // NOP
label_1b2c68:
    // 0x1b2c68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b2c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b2c6c:
    // 0x1b2c6c: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x1b2c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1b2c70:
    // 0x1b2c70: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2c74:
    // 0x1b2c74: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1b2c78:
    if (ctx->pc == 0x1B2C78u) {
        ctx->pc = 0x1B2C78u;
            // 0x1b2c78: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1B2C7Cu;
        goto label_1b2c7c;
    }
    ctx->pc = 0x1B2C74u;
    {
        const bool branch_taken_0x1b2c74 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C74u;
            // 0x1b2c78: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c74) {
            ctx->pc = 0x1B2C88u;
            goto label_1b2c88;
        }
    }
    ctx->pc = 0x1B2C7Cu;
label_1b2c7c:
    // 0x1b2c7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b2c80:
    if (ctx->pc == 0x1B2C80u) {
        ctx->pc = 0x1B2C84u;
        goto label_1b2c84;
    }
    ctx->pc = 0x1B2C7Cu;
    {
        const bool branch_taken_0x1b2c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c7c) {
            ctx->pc = 0x1B2C88u;
            goto label_1b2c88;
        }
    }
    ctx->pc = 0x1B2C84u;
label_1b2c84:
    // 0x1b2c84: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1b2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1b2c88:
    // 0x1b2c88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b2c8c:
    if (ctx->pc == 0x1B2C8Cu) {
        ctx->pc = 0x1B2C90u;
        goto label_1b2c90;
    }
    ctx->pc = 0x1B2C88u;
    {
        const bool branch_taken_0x1b2c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c88) {
            ctx->pc = 0x1B2CB8u;
            goto label_1b2cb8;
        }
    }
    ctx->pc = 0x1B2C90u;
label_1b2c90:
    // 0x1b2c90: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2c94:
    // 0x1b2c94: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2c98:
    // 0x1b2c98: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1b2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1b2c9c:
    // 0x1b2c9c: 0xc0655a0  jal         func_195680
label_1b2ca0:
    if (ctx->pc == 0x1B2CA0u) {
        ctx->pc = 0x1B2CA0u;
            // 0x1b2ca0: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2CA4u;
        goto label_1b2ca4;
    }
    ctx->pc = 0x1B2C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B2CA4u);
    ctx->pc = 0x1B2CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C9Cu;
            // 0x1b2ca0: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CA4u; }
        if (ctx->pc != 0x1B2CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CA4u; }
        if (ctx->pc != 0x1B2CA4u) { return; }
    }
    ctx->pc = 0x1B2CA4u;
label_1b2ca4:
    // 0x1b2ca4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2ca8:
    // 0x1b2ca8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2cac:
    // 0x1b2cac: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1b2cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_1b2cb0:
    // 0x1b2cb0: 0xc0655a0  jal         func_195680
label_1b2cb4:
    if (ctx->pc == 0x1B2CB4u) {
        ctx->pc = 0x1B2CB4u;
            // 0x1b2cb4: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->pc = 0x1B2CB8u;
        goto label_1b2cb8;
    }
    ctx->pc = 0x1B2CB0u;
    SET_GPR_U32(ctx, 31, 0x1B2CB8u);
    ctx->pc = 0x1B2CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CB0u;
            // 0x1b2cb4: 0x2445ff9c  addiu       $a1, $v0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CB8u; }
        if (ctx->pc != 0x1B2CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CB8u; }
        if (ctx->pc != 0x1B2CB8u) { return; }
    }
    ctx->pc = 0x1B2CB8u;
label_1b2cb8:
    // 0x1b2cb8: 0xc065d00  jal         func_197400
label_1b2cbc:
    if (ctx->pc == 0x1B2CBCu) {
        ctx->pc = 0x1B2CC0u;
        goto label_1b2cc0;
    }
    ctx->pc = 0x1B2CB8u;
    SET_GPR_U32(ctx, 31, 0x1B2CC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CC0u; }
        if (ctx->pc != 0x1B2CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CC0u; }
        if (ctx->pc != 0x1B2CC0u) { return; }
    }
    ctx->pc = 0x1B2CC0u;
label_1b2cc0:
    // 0x1b2cc0: 0x1840006f  blez        $v0, . + 4 + (0x6F << 2)
label_1b2cc4:
    if (ctx->pc == 0x1B2CC4u) {
        ctx->pc = 0x1B2CC8u;
        goto label_1b2cc8;
    }
    ctx->pc = 0x1B2CC0u;
    {
        const bool branch_taken_0x1b2cc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b2cc0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2CC8u;
label_1b2cc8:
    // 0x1b2cc8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2ccc:
    // 0x1b2ccc: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x1b2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1b2cd0:
    // 0x1b2cd0: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
label_1b2cd4:
    if (ctx->pc == 0x1B2CD4u) {
        ctx->pc = 0x1B2CD8u;
        goto label_1b2cd8;
    }
    ctx->pc = 0x1B2CD0u;
    {
        const bool branch_taken_0x1b2cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2cd0) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2CD8u;
label_1b2cd8:
    // 0x1b2cd8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2cdc:
    // 0x1b2cdc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b2ce0:
    // 0x1b2ce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2ce4:
    // 0x1b2ce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2ce8:
    // 0x1b2ce8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2cec:
    // 0x1b2cec: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2cf0:
    // 0x1b2cf0: 0xc0655dc  jal         func_195770
label_1b2cf4:
    if (ctx->pc == 0x1B2CF4u) {
        ctx->pc = 0x1B2CF4u;
            // 0x1b2cf4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2CF8u;
        goto label_1b2cf8;
    }
    ctx->pc = 0x1B2CF0u;
    SET_GPR_U32(ctx, 31, 0x1B2CF8u);
    ctx->pc = 0x1B2CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CF0u;
            // 0x1b2cf4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CF8u; }
        if (ctx->pc != 0x1B2CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CF8u; }
        if (ctx->pc != 0x1B2CF8u) { return; }
    }
    ctx->pc = 0x1B2CF8u;
label_1b2cf8:
    // 0x1b2cf8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2cfc:
    // 0x1b2cfc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b2d00:
    // 0x1b2d00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2d04:
    // 0x1b2d04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2d08:
    // 0x1b2d08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2d0c:
    // 0x1b2d0c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2d10:
    // 0x1b2d10: 0xc0655dc  jal         func_195770
label_1b2d14:
    if (ctx->pc == 0x1B2D14u) {
        ctx->pc = 0x1B2D14u;
            // 0x1b2d14: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2D18u;
        goto label_1b2d18;
    }
    ctx->pc = 0x1B2D10u;
    SET_GPR_U32(ctx, 31, 0x1B2D18u);
    ctx->pc = 0x1B2D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D10u;
            // 0x1b2d14: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D18u; }
        if (ctx->pc != 0x1B2D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D18u; }
        if (ctx->pc != 0x1B2D18u) { return; }
    }
    ctx->pc = 0x1B2D18u;
label_1b2d18:
    // 0x1b2d18: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2d1c:
    // 0x1b2d1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2d20:
    // 0x1b2d20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2d24:
    // 0x1b2d24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2d28:
    // 0x1b2d28: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2d2c:
    // 0x1b2d2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2d2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2d30:
    // 0x1b2d30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2d34:
    // 0x1b2d34: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2d38:
    // 0x1b2d38: 0xc0655dc  jal         func_195770
label_1b2d3c:
    if (ctx->pc == 0x1B2D3Cu) {
        ctx->pc = 0x1B2D3Cu;
            // 0x1b2d3c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2D40u;
        goto label_1b2d40;
    }
    ctx->pc = 0x1B2D38u;
    SET_GPR_U32(ctx, 31, 0x1B2D40u);
    ctx->pc = 0x1B2D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D38u;
            // 0x1b2d3c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D40u; }
        if (ctx->pc != 0x1B2D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D40u; }
        if (ctx->pc != 0x1B2D40u) { return; }
    }
    ctx->pc = 0x1B2D40u;
label_1b2d40:
    // 0x1b2d40: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2d44:
    // 0x1b2d44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2d48:
    // 0x1b2d48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2d4c:
    // 0x1b2d4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2d50:
    // 0x1b2d50: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2d54:
    // 0x1b2d54: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2d54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2d58:
    // 0x1b2d58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2d5c:
    // 0x1b2d5c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2d60:
    // 0x1b2d60: 0xc0655dc  jal         func_195770
label_1b2d64:
    if (ctx->pc == 0x1B2D64u) {
        ctx->pc = 0x1B2D64u;
            // 0x1b2d64: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2D68u;
        goto label_1b2d68;
    }
    ctx->pc = 0x1B2D60u;
    SET_GPR_U32(ctx, 31, 0x1B2D68u);
    ctx->pc = 0x1B2D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D60u;
            // 0x1b2d64: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D68u; }
        if (ctx->pc != 0x1B2D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D68u; }
        if (ctx->pc != 0x1B2D68u) { return; }
    }
    ctx->pc = 0x1B2D68u;
label_1b2d68:
    // 0x1b2d68: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2d6c:
    // 0x1b2d6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2d70:
    // 0x1b2d70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2d74:
    // 0x1b2d74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2d78:
    // 0x1b2d78: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2d7c:
    // 0x1b2d7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2d7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2d80:
    // 0x1b2d80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2d84:
    // 0x1b2d84: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2d88:
    // 0x1b2d88: 0xc0655dc  jal         func_195770
label_1b2d8c:
    if (ctx->pc == 0x1B2D8Cu) {
        ctx->pc = 0x1B2D8Cu;
            // 0x1b2d8c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2D90u;
        goto label_1b2d90;
    }
    ctx->pc = 0x1B2D88u;
    SET_GPR_U32(ctx, 31, 0x1B2D90u);
    ctx->pc = 0x1B2D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D88u;
            // 0x1b2d8c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D90u; }
        if (ctx->pc != 0x1B2D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D90u; }
        if (ctx->pc != 0x1B2D90u) { return; }
    }
    ctx->pc = 0x1B2D90u;
label_1b2d90:
    // 0x1b2d90: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2d94:
    // 0x1b2d94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b2d98:
    // 0x1b2d98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2d9c:
    // 0x1b2d9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2da0:
    // 0x1b2da0: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2da4:
    // 0x1b2da4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2da4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2da8:
    // 0x1b2da8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2dac:
    // 0x1b2dac: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2db0:
    // 0x1b2db0: 0xc0655dc  jal         func_195770
label_1b2db4:
    if (ctx->pc == 0x1B2DB4u) {
        ctx->pc = 0x1B2DB4u;
            // 0x1b2db4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2DB8u;
        goto label_1b2db8;
    }
    ctx->pc = 0x1B2DB0u;
    SET_GPR_U32(ctx, 31, 0x1B2DB8u);
    ctx->pc = 0x1B2DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DB0u;
            // 0x1b2db4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DB8u; }
        if (ctx->pc != 0x1B2DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DB8u; }
        if (ctx->pc != 0x1B2DB8u) { return; }
    }
    ctx->pc = 0x1B2DB8u;
label_1b2db8:
    // 0x1b2db8: 0xc065d00  jal         func_197400
label_1b2dbc:
    if (ctx->pc == 0x1B2DBCu) {
        ctx->pc = 0x1B2DC0u;
        goto label_1b2dc0;
    }
    ctx->pc = 0x1B2DB8u;
    SET_GPR_U32(ctx, 31, 0x1B2DC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DC0u; }
        if (ctx->pc != 0x1B2DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DC0u; }
        if (ctx->pc != 0x1B2DC0u) { return; }
    }
    ctx->pc = 0x1B2DC0u;
label_1b2dc0:
    // 0x1b2dc0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b2dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b2dc4:
    // 0x1b2dc4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_1b2dc8:
    if (ctx->pc == 0x1B2DC8u) {
        ctx->pc = 0x1B2DCCu;
        goto label_1b2dcc;
    }
    ctx->pc = 0x1B2DC4u;
    {
        const bool branch_taken_0x1b2dc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2dc4) {
            ctx->pc = 0x1B2E80u;
            goto label_1b2e80;
        }
    }
    ctx->pc = 0x1B2DCCu;
label_1b2dcc:
    // 0x1b2dcc: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2dd0:
    // 0x1b2dd0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2dd4:
    // 0x1b2dd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2dd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2dd8:
    // 0x1b2dd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2ddc:
    // 0x1b2ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2de0:
    // 0x1b2de0: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2de4:
    // 0x1b2de4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2de4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2de8:
    // 0x1b2de8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2dec:
    // 0x1b2dec: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2df0:
    // 0x1b2df0: 0xc0655dc  jal         func_195770
label_1b2df4:
    if (ctx->pc == 0x1B2DF4u) {
        ctx->pc = 0x1B2DF4u;
            // 0x1b2df4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2DF8u;
        goto label_1b2df8;
    }
    ctx->pc = 0x1B2DF0u;
    SET_GPR_U32(ctx, 31, 0x1B2DF8u);
    ctx->pc = 0x1B2DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DF0u;
            // 0x1b2df4: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DF8u; }
        if (ctx->pc != 0x1B2DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DF8u; }
        if (ctx->pc != 0x1B2DF8u) { return; }
    }
    ctx->pc = 0x1B2DF8u;
label_1b2df8:
    // 0x1b2df8: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x1b2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
label_1b2dfc:
    // 0x1b2dfc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2e00:
    // 0x1b2e00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2e00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2e04:
    // 0x1b2e04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2e08:
    // 0x1b2e08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2e0c:
    // 0x1b2e0c: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2e10:
    // 0x1b2e10: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2e10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2e14:
    // 0x1b2e14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2e18:
    // 0x1b2e18: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2e1c:
    // 0x1b2e1c: 0xc0655dc  jal         func_195770
label_1b2e20:
    if (ctx->pc == 0x1B2E20u) {
        ctx->pc = 0x1B2E20u;
            // 0x1b2e20: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2E24u;
        goto label_1b2e24;
    }
    ctx->pc = 0x1B2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E24u);
    ctx->pc = 0x1B2E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E1Cu;
            // 0x1b2e20: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E24u; }
        if (ctx->pc != 0x1B2E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E24u; }
        if (ctx->pc != 0x1B2E24u) { return; }
    }
    ctx->pc = 0x1B2E24u;
label_1b2e24:
    // 0x1b2e24: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2e28:
    // 0x1b2e28: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2e2c:
    // 0x1b2e2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2e2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2e30:
    // 0x1b2e30: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2e34:
    // 0x1b2e34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2e38:
    // 0x1b2e38: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2e3c:
    // 0x1b2e3c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2e3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2e40:
    // 0x1b2e40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2e44:
    // 0x1b2e44: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1b2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_1b2e48:
    // 0x1b2e48: 0xc0655dc  jal         func_195770
label_1b2e4c:
    if (ctx->pc == 0x1B2E4Cu) {
        ctx->pc = 0x1B2E4Cu;
            // 0x1b2e4c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2E50u;
        goto label_1b2e50;
    }
    ctx->pc = 0x1B2E48u;
    SET_GPR_U32(ctx, 31, 0x1B2E50u);
    ctx->pc = 0x1B2E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E48u;
            // 0x1b2e4c: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E50u; }
        if (ctx->pc != 0x1B2E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E50u; }
        if (ctx->pc != 0x1B2E50u) { return; }
    }
    ctx->pc = 0x1B2E50u;
label_1b2e50:
    // 0x1b2e50: 0x3c02bfcc  lui         $v0, 0xBFCC
    ctx->pc = 0x1b2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49100 << 16));
label_1b2e54:
    // 0x1b2e54: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1b2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b2e58:
    // 0x1b2e58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b2e58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1b2e5c:
    // 0x1b2e5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1b2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b2e60:
    // 0x1b2e60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b2e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2e64:
    // 0x1b2e64: 0x3c02bf99  lui         $v0, 0xBF99
    ctx->pc = 0x1b2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49049 << 16));
label_1b2e68:
    // 0x1b2e68: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1b2e68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
label_1b2e6c:
    // 0x1b2e6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2e70:
    // 0x1b2e70: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1b2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_1b2e74:
    // 0x1b2e74: 0xc0655dc  jal         func_195770
label_1b2e78:
    if (ctx->pc == 0x1B2E78u) {
        ctx->pc = 0x1B2E78u;
            // 0x1b2e78: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->pc = 0x1B2E7Cu;
        goto label_1b2e7c;
    }
    ctx->pc = 0x1B2E74u;
    SET_GPR_U32(ctx, 31, 0x1B2E7Cu);
    ctx->pc = 0x1B2E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E74u;
            // 0x1b2e78: 0x2465ffc4  addiu       $a1, $v1, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E7Cu; }
        if (ctx->pc != 0x1B2E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E7Cu; }
        if (ctx->pc != 0x1B2E7Cu) { return; }
    }
    ctx->pc = 0x1B2E7Cu;
label_1b2e7c:
    // 0x1b2e7c: 0x0  nop
    ctx->pc = 0x1b2e7cu;
    // NOP
label_1b2e80:
    // 0x1b2e80: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b2e84:
    // 0x1b2e84: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1b2e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2e88:
    // 0x1b2e88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b2e88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b2e8c:
    // 0x1b2e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2e90:
    // 0x1b2e90: 0x0  nop
    ctx->pc = 0x1b2e90u;
    // NOP
label_1b2e94:
    // 0x1b2e94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2e98:
    // 0x1b2e98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b2e9c:
    if (ctx->pc == 0x1B2E9Cu) {
        ctx->pc = 0x1B2EA0u;
        goto label_1b2ea0;
    }
    ctx->pc = 0x1B2E98u;
    {
        const bool branch_taken_0x1b2e98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2e98) {
            ctx->pc = 0x1B2EA8u;
            goto label_1b2ea8;
        }
    }
    ctx->pc = 0x1B2EA0u;
label_1b2ea0:
    // 0x1b2ea0: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1b2ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1b2ea4:
    // 0x1b2ea4: 0x0  nop
    ctx->pc = 0x1b2ea4u;
    // NOP
label_1b2ea8:
    // 0x1b2ea8: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b2eac:
    // 0x1b2eac: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1b2eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2eb0:
    // 0x1b2eb0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b2eb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b2eb4:
    // 0x1b2eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2eb8:
    // 0x1b2eb8: 0x0  nop
    ctx->pc = 0x1b2eb8u;
    // NOP
label_1b2ebc:
    // 0x1b2ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2ec0:
    // 0x1b2ec0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1b2ec4:
    if (ctx->pc == 0x1B2EC4u) {
        ctx->pc = 0x1B2EC8u;
        goto label_1b2ec8;
    }
    ctx->pc = 0x1B2EC0u;
    {
        const bool branch_taken_0x1b2ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2ec0) {
            ctx->pc = 0x1B2ED0u;
            goto label_1b2ed0;
        }
    }
    ctx->pc = 0x1B2EC8u;
label_1b2ec8:
    // 0x1b2ec8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1b2ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1b2ecc:
    // 0x1b2ecc: 0x0  nop
    ctx->pc = 0x1b2eccu;
    // NOP
label_1b2ed0:
    // 0x1b2ed0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b2ed4:
    // 0x1b2ed4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b2ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2ed8:
    // 0x1b2ed8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b2ed8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b2edc:
    // 0x1b2edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2ee0:
    // 0x1b2ee0: 0x0  nop
    ctx->pc = 0x1b2ee0u;
    // NOP
label_1b2ee4:
    // 0x1b2ee4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b2ee8:
    // 0x1b2ee8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1b2eec:
    if (ctx->pc == 0x1B2EECu) {
        ctx->pc = 0x1B2EF0u;
        goto label_1b2ef0;
    }
    ctx->pc = 0x1B2EE8u;
    {
        const bool branch_taken_0x1b2ee8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2ee8) {
            ctx->pc = 0x1B2EF8u;
            goto label_1b2ef8;
        }
    }
    ctx->pc = 0x1B2EF0u;
label_1b2ef0:
    // 0x1b2ef0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1b2ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1b2ef4:
    // 0x1b2ef4: 0x0  nop
    ctx->pc = 0x1b2ef4u;
    // NOP
label_1b2ef8:
    // 0x1b2ef8: 0xc04b788  jal         func_12DE20
label_1b2efc:
    if (ctx->pc == 0x1B2EFCu) {
        ctx->pc = 0x1B2EFCu;
            // 0x1b2efc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1B2F00u;
        goto label_1b2f00;
    }
    ctx->pc = 0x1B2EF8u;
    SET_GPR_U32(ctx, 31, 0x1B2F00u);
    ctx->pc = 0x1B2EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EF8u;
            // 0x1b2efc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F00u; }
        if (ctx->pc != 0x1B2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F00u; }
        if (ctx->pc != 0x1B2F00u) { return; }
    }
    ctx->pc = 0x1B2F00u;
label_1b2f00:
    // 0x1b2f00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b2f04:
    // 0x1b2f04: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2f08:
    // 0x1b2f08: 0xc04b7da  jal         func_12DF68
label_1b2f0c:
    if (ctx->pc == 0x1B2F0Cu) {
        ctx->pc = 0x1B2F0Cu;
            // 0x1b2f0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F10u;
        goto label_1b2f10;
    }
    ctx->pc = 0x1B2F08u;
    SET_GPR_U32(ctx, 31, 0x1B2F10u);
    ctx->pc = 0x1B2F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F08u;
            // 0x1b2f0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F10u; }
        if (ctx->pc != 0x1B2F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F10u; }
        if (ctx->pc != 0x1B2F10u) { return; }
    }
    ctx->pc = 0x1B2F10u;
label_1b2f10:
    // 0x1b2f10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b2f14:
    // 0x1b2f14: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b2f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2f18:
    // 0x1b2f18: 0xc04b804  jal         func_12E010
label_1b2f1c:
    if (ctx->pc == 0x1B2F1Cu) {
        ctx->pc = 0x1B2F1Cu;
            // 0x1b2f1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F20u;
        goto label_1b2f20;
    }
    ctx->pc = 0x1B2F18u;
    SET_GPR_U32(ctx, 31, 0x1B2F20u);
    ctx->pc = 0x1B2F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F18u;
            // 0x1b2f1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F20u; }
        if (ctx->pc != 0x1B2F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F20u; }
        if (ctx->pc != 0x1B2F20u) { return; }
    }
    ctx->pc = 0x1B2F20u;
label_1b2f20:
    // 0x1b2f20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b2f24:
    // 0x1b2f24: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b2f28:
    // 0x1b2f28: 0xc04b7b0  jal         func_12DEC0
label_1b2f2c:
    if (ctx->pc == 0x1B2F2Cu) {
        ctx->pc = 0x1B2F2Cu;
            // 0x1b2f2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F30u;
        goto label_1b2f30;
    }
    ctx->pc = 0x1B2F28u;
    SET_GPR_U32(ctx, 31, 0x1B2F30u);
    ctx->pc = 0x1B2F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F28u;
            // 0x1b2f2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F30u; }
        if (ctx->pc != 0x1B2F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F30u; }
        if (ctx->pc != 0x1B2F30u) { return; }
    }
    ctx->pc = 0x1B2F30u;
label_1b2f30:
    // 0x1b2f30: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1b2f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b2f34:
    // 0x1b2f34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b2f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2f38:
    // 0x1b2f38: 0xc04b75e  jal         func_12DD78
label_1b2f3c:
    if (ctx->pc == 0x1B2F3Cu) {
        ctx->pc = 0x1B2F3Cu;
            // 0x1b2f3c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1B2F40u;
        goto label_1b2f40;
    }
    ctx->pc = 0x1B2F38u;
    SET_GPR_U32(ctx, 31, 0x1B2F40u);
    ctx->pc = 0x1B2F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F38u;
            // 0x1b2f3c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F40u; }
        if (ctx->pc != 0x1B2F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F40u; }
        if (ctx->pc != 0x1B2F40u) { return; }
    }
    ctx->pc = 0x1B2F40u;
label_1b2f40:
    // 0x1b2f40: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1b2f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b2f44:
    // 0x1b2f44: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1b2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1b2f48:
    // 0x1b2f48: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b2f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b2f4c:
    // 0x1b2f4c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1b2f50:
    if (ctx->pc == 0x1B2F50u) {
        ctx->pc = 0x1B2F54u;
        goto label_1b2f54;
    }
    ctx->pc = 0x1B2F4Cu;
    {
        const bool branch_taken_0x1b2f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f4c) {
            ctx->pc = 0x1B2FA0u;
            goto label_1b2fa0;
        }
    }
    ctx->pc = 0x1B2F54u;
label_1b2f54:
    // 0x1b2f54: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1b2f58:
    // 0x1b2f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b2f5c:
    if (ctx->pc == 0x1B2F5Cu) {
        ctx->pc = 0x1B2F60u;
        goto label_1b2f60;
    }
    ctx->pc = 0x1B2F58u;
    {
        const bool branch_taken_0x1b2f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f58) {
            ctx->pc = 0x1B2F70u;
            goto label_1b2f70;
        }
    }
    ctx->pc = 0x1B2F60u;
label_1b2f60:
    // 0x1b2f60: 0xc0604f0  jal         func_1813C0
label_1b2f64:
    if (ctx->pc == 0x1B2F64u) {
        ctx->pc = 0x1B2F64u;
            // 0x1b2f64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1B2F68u;
        goto label_1b2f68;
    }
    ctx->pc = 0x1B2F60u;
    SET_GPR_U32(ctx, 31, 0x1B2F68u);
    ctx->pc = 0x1B2F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F60u;
            // 0x1b2f64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F68u; }
        if (ctx->pc != 0x1B2F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F68u; }
        if (ctx->pc != 0x1B2F68u) { return; }
    }
    ctx->pc = 0x1B2F68u;
label_1b2f68:
    // 0x1b2f68: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2f6c:
    if (ctx->pc == 0x1B2F6Cu) {
        ctx->pc = 0x1B2F70u;
        goto label_1b2f70;
    }
    ctx->pc = 0x1B2F68u;
    {
        const bool branch_taken_0x1b2f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f68) {
            ctx->pc = 0x1B2F78u;
            goto label_1b2f78;
        }
    }
    ctx->pc = 0x1B2F70u;
label_1b2f70:
    // 0x1b2f70: 0xc0604dc  jal         func_181370
label_1b2f74:
    if (ctx->pc == 0x1B2F74u) {
        ctx->pc = 0x1B2F74u;
            // 0x1b2f74: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1B2F78u;
        goto label_1b2f78;
    }
    ctx->pc = 0x1B2F70u;
    SET_GPR_U32(ctx, 31, 0x1B2F78u);
    ctx->pc = 0x1B2F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F70u;
            // 0x1b2f74: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F78u; }
        if (ctx->pc != 0x1B2F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F78u; }
        if (ctx->pc != 0x1B2F78u) { return; }
    }
    ctx->pc = 0x1B2F78u;
label_1b2f78:
    // 0x1b2f78: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x1b2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1b2f7c:
    // 0x1b2f7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b2f80:
    if (ctx->pc == 0x1B2F80u) {
        ctx->pc = 0x1B2F84u;
        goto label_1b2f84;
    }
    ctx->pc = 0x1B2F7Cu;
    {
        const bool branch_taken_0x1b2f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f7c) {
            ctx->pc = 0x1B2F90u;
            goto label_1b2f90;
        }
    }
    ctx->pc = 0x1B2F84u;
label_1b2f84:
    // 0x1b2f84: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b2f88:
    if (ctx->pc == 0x1B2F88u) {
        ctx->pc = 0x1B2F88u;
            // 0x1b2f88: 0xae600110  sw          $zero, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1B2F8Cu;
        goto label_1b2f8c;
    }
    ctx->pc = 0x1B2F84u;
    {
        const bool branch_taken_0x1b2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F84u;
            // 0x1b2f88: 0xae600110  sw          $zero, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f84) {
            ctx->pc = 0x1B3010u;
            goto label_1b3010;
        }
    }
    ctx->pc = 0x1B2F8Cu;
label_1b2f8c:
    // 0x1b2f8c: 0x0  nop
    ctx->pc = 0x1b2f8cu;
    // NOP
label_1b2f90:
    // 0x1b2f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2f94:
    // 0x1b2f94: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b2f98:
    if (ctx->pc == 0x1B2F98u) {
        ctx->pc = 0x1B2F98u;
            // 0x1b2f98: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1B2F9Cu;
        goto label_1b2f9c;
    }
    ctx->pc = 0x1B2F94u;
    {
        const bool branch_taken_0x1b2f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F94u;
            // 0x1b2f98: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f94) {
            ctx->pc = 0x1B3010u;
            goto label_1b3010;
        }
    }
    ctx->pc = 0x1B2F9Cu;
label_1b2f9c:
    // 0x1b2f9c: 0x0  nop
    ctx->pc = 0x1b2f9cu;
    // NOP
label_1b2fa0:
    // 0x1b2fa0: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x1b2fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
label_1b2fa4:
    // 0x1b2fa4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1b2fa8:
    if (ctx->pc == 0x1B2FA8u) {
        ctx->pc = 0x1B2FACu;
        goto label_1b2fac;
    }
    ctx->pc = 0x1B2FA4u;
    {
        const bool branch_taken_0x1b2fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2fa4) {
            ctx->pc = 0x1B3000u;
            goto label_1b3000;
        }
    }
    ctx->pc = 0x1B2FACu;
label_1b2fac:
    // 0x1b2fac: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1b2facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b2fb0:
    // 0x1b2fb0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b2fb4:
    // 0x1b2fb4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b2fb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b2fb8:
    // 0x1b2fb8: 0x0  nop
    ctx->pc = 0x1b2fb8u;
    // NOP
label_1b2fbc:
    // 0x1b2fbc: 0x0  nop
    ctx->pc = 0x1b2fbcu;
    // NOP
label_1b2fc0:
    // 0x1b2fc0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b2fc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b2fc4:
    // 0x1b2fc4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1b2fc8:
    if (ctx->pc == 0x1B2FC8u) {
        ctx->pc = 0x1B2FCCu;
        goto label_1b2fcc;
    }
    ctx->pc = 0x1B2FC4u;
    {
        const bool branch_taken_0x1b2fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2fc4) {
            ctx->pc = 0x1B3000u;
            goto label_1b3000;
        }
    }
    ctx->pc = 0x1B2FCCu;
label_1b2fcc:
    // 0x1b2fcc: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1b2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b2fd0:
    // 0x1b2fd0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1b2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1b2fd4:
    // 0x1b2fd4: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1b2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_1b2fd8:
    // 0x1b2fd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b2fdc:
    // 0x1b2fdc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b2fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b2fe0:
    // 0x1b2fe0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b2fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b2fe4:
    // 0x1b2fe4: 0xc0536d8  jal         func_14DB60
label_1b2fe8:
    if (ctx->pc == 0x1B2FE8u) {
        ctx->pc = 0x1B2FE8u;
            // 0x1b2fe8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B2FECu;
        goto label_1b2fec;
    }
    ctx->pc = 0x1B2FE4u;
    SET_GPR_U32(ctx, 31, 0x1B2FECu);
    ctx->pc = 0x1B2FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FE4u;
            // 0x1b2fe8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FECu; }
        if (ctx->pc != 0x1B2FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FECu; }
        if (ctx->pc != 0x1B2FECu) { return; }
    }
    ctx->pc = 0x1B2FECu;
label_1b2fec:
    // 0x1b2fec: 0xc060500  jal         func_181400
label_1b2ff0:
    if (ctx->pc == 0x1B2FF0u) {
        ctx->pc = 0x1B2FF0u;
            // 0x1b2ff0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1B2FF4u;
        goto label_1b2ff4;
    }
    ctx->pc = 0x1B2FECu;
    SET_GPR_U32(ctx, 31, 0x1B2FF4u);
    ctx->pc = 0x1B2FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FECu;
            // 0x1b2ff0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FF4u; }
        if (ctx->pc != 0x1B2FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FF4u; }
        if (ctx->pc != 0x1B2FF4u) { return; }
    }
    ctx->pc = 0x1B2FF4u;
label_1b2ff4:
    // 0x1b2ff4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b2ff8:
    if (ctx->pc == 0x1B2FF8u) {
        ctx->pc = 0x1B2FFCu;
        goto label_1b2ffc;
    }
    ctx->pc = 0x1B2FF4u;
    {
        const bool branch_taken_0x1b2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ff4) {
            ctx->pc = 0x1B3008u;
            goto label_1b3008;
        }
    }
    ctx->pc = 0x1B2FFCu;
label_1b2ffc:
    // 0x1b2ffc: 0x0  nop
    ctx->pc = 0x1b2ffcu;
    // NOP
label_1b3000:
    // 0x1b3000: 0xc0604dc  jal         func_181370
label_1b3004:
    if (ctx->pc == 0x1B3004u) {
        ctx->pc = 0x1B3004u;
            // 0x1b3004: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1B3008u;
        goto label_1b3008;
    }
    ctx->pc = 0x1B3000u;
    SET_GPR_U32(ctx, 31, 0x1B3008u);
    ctx->pc = 0x1B3004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3000u;
            // 0x1b3004: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3008u; }
        if (ctx->pc != 0x1B3008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3008u; }
        if (ctx->pc != 0x1B3008u) { return; }
    }
    ctx->pc = 0x1B3008u;
label_1b3008:
    // 0x1b3008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b300c:
    // 0x1b300c: 0xae620110  sw          $v0, 0x110($s3)
    ctx->pc = 0x1b300cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
label_1b3010:
    // 0x1b3010: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1b3010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b3014:
    // 0x1b3014: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1b3014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1b3018:
    // 0x1b3018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b301c:
    // 0x1b301c: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1b301cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_1b3020:
    // 0x1b3020: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b3020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b3024:
    // 0x1b3024: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1b3024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1b3028:
    // 0x1b3028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b302c:
    // 0x1b302c: 0x0  nop
    ctx->pc = 0x1b302cu;
    // NOP
label_1b3030:
    // 0x1b3030: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b3034:
    // 0x1b3034: 0xe661002c  swc1        $f1, 0x2C($s3)
    ctx->pc = 0x1b3034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_1b3038:
    // 0x1b3038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b303c:
    // 0x1b303c: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
label_1b3040:
    // 0x1b3040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3044:
    // 0x1b3044: 0x0  nop
    ctx->pc = 0x1b3044u;
    // NOP
label_1b3048:
    // 0x1b3048: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b304c:
    // 0x1b304c: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x1b304cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_1b3050:
    // 0x1b3050: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1b3054:
    // 0x1b3054: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1b3054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1b3058:
    // 0x1b3058: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b305c:
    // 0x1b305c: 0x0  nop
    ctx->pc = 0x1b305cu;
    // NOP
label_1b3060:
    // 0x1b3060: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b3064:
    // 0x1b3064: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x1b3064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_1b3068:
    // 0x1b3068: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1b3068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1b306c:
    // 0x1b306c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1b306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1b3070:
    // 0x1b3070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3074:
    // 0x1b3074: 0x0  nop
    ctx->pc = 0x1b3074u;
    // NOP
label_1b3078:
    // 0x1b3078: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b307c:
    // 0x1b307c: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x1b307cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_1b3080:
    // 0x1b3080: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1b3084:
    // 0x1b3084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b3084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b3088:
    // 0x1b3088: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1b3088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_1b308c:
    // 0x1b308c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b3090:
    // 0x1b3090: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3094:
    // 0x1b3094: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3098:
    // 0x1b3098: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b309c:
    if (ctx->pc == 0x1B309Cu) {
        ctx->pc = 0x1B309Cu;
            // 0x1b309c: 0x3c02c2a0  lui         $v0, 0xC2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
        ctx->pc = 0x1B30A0u;
        goto label_1b30a0;
    }
    ctx->pc = 0x1B3098u;
    {
        const bool branch_taken_0x1b3098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3098u;
            // 0x1b309c: 0x3c02c2a0  lui         $v0, 0xC2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3098) {
            ctx->pc = 0x1B30B8u;
            goto label_1b30b8;
        }
    }
    ctx->pc = 0x1B30A0u;
label_1b30a0:
    // 0x1b30a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b30a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b30a4:
    // 0x1b30a4: 0x0  nop
    ctx->pc = 0x1b30a4u;
    // NOP
label_1b30a8:
    // 0x1b30a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b30a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b30ac:
    // 0x1b30ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b30b0:
    if (ctx->pc == 0x1B30B0u) {
        ctx->pc = 0x1B30B4u;
        goto label_1b30b4;
    }
    ctx->pc = 0x1B30ACu;
    {
        const bool branch_taken_0x1b30ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b30ac) {
            ctx->pc = 0x1B30D0u;
            goto label_1b30d0;
        }
    }
    ctx->pc = 0x1B30B4u;
label_1b30b4:
    // 0x1b30b4: 0x0  nop
    ctx->pc = 0x1b30b4u;
    // NOP
label_1b30b8:
    // 0x1b30b8: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x1b30b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_1b30bc:
    // 0x1b30bc: 0x40f809  jalr        $v0
label_1b30c0:
    if (ctx->pc == 0x1B30C0u) {
        ctx->pc = 0x1B30C0u;
            // 0x1b30c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B30C4u;
        goto label_1b30c4;
    }
    ctx->pc = 0x1B30BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B30C4u);
        ctx->pc = 0x1B30C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30BCu;
            // 0x1b30c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1820u: goto label_1b1820;
            case 0x1B1824u: goto label_1b1824;
            case 0x1B1828u: goto label_1b1828;
            case 0x1B182Cu: goto label_1b182c;
            case 0x1B1830u: goto label_1b1830;
            case 0x1B1834u: goto label_1b1834;
            case 0x1B1838u: goto label_1b1838;
            case 0x1B183Cu: goto label_1b183c;
            case 0x1B1840u: goto label_1b1840;
            case 0x1B1844u: goto label_1b1844;
            case 0x1B1848u: goto label_1b1848;
            case 0x1B184Cu: goto label_1b184c;
            case 0x1B1850u: goto label_1b1850;
            case 0x1B1854u: goto label_1b1854;
            case 0x1B1858u: goto label_1b1858;
            case 0x1B185Cu: goto label_1b185c;
            case 0x1B1860u: goto label_1b1860;
            case 0x1B1864u: goto label_1b1864;
            case 0x1B1868u: goto label_1b1868;
            case 0x1B186Cu: goto label_1b186c;
            case 0x1B1870u: goto label_1b1870;
            case 0x1B1874u: goto label_1b1874;
            case 0x1B1878u: goto label_1b1878;
            case 0x1B187Cu: goto label_1b187c;
            case 0x1B1880u: goto label_1b1880;
            case 0x1B1884u: goto label_1b1884;
            case 0x1B1888u: goto label_1b1888;
            case 0x1B188Cu: goto label_1b188c;
            case 0x1B1890u: goto label_1b1890;
            case 0x1B1894u: goto label_1b1894;
            case 0x1B1898u: goto label_1b1898;
            case 0x1B189Cu: goto label_1b189c;
            case 0x1B18A0u: goto label_1b18a0;
            case 0x1B18A4u: goto label_1b18a4;
            case 0x1B18A8u: goto label_1b18a8;
            case 0x1B18ACu: goto label_1b18ac;
            case 0x1B18B0u: goto label_1b18b0;
            case 0x1B18B4u: goto label_1b18b4;
            case 0x1B18B8u: goto label_1b18b8;
            case 0x1B18BCu: goto label_1b18bc;
            case 0x1B18C0u: goto label_1b18c0;
            case 0x1B18C4u: goto label_1b18c4;
            case 0x1B18C8u: goto label_1b18c8;
            case 0x1B18CCu: goto label_1b18cc;
            case 0x1B18D0u: goto label_1b18d0;
            case 0x1B18D4u: goto label_1b18d4;
            case 0x1B18D8u: goto label_1b18d8;
            case 0x1B18DCu: goto label_1b18dc;
            case 0x1B18E0u: goto label_1b18e0;
            case 0x1B18E4u: goto label_1b18e4;
            case 0x1B18E8u: goto label_1b18e8;
            case 0x1B18ECu: goto label_1b18ec;
            case 0x1B18F0u: goto label_1b18f0;
            case 0x1B18F4u: goto label_1b18f4;
            case 0x1B18F8u: goto label_1b18f8;
            case 0x1B18FCu: goto label_1b18fc;
            case 0x1B1900u: goto label_1b1900;
            case 0x1B1904u: goto label_1b1904;
            case 0x1B1908u: goto label_1b1908;
            case 0x1B190Cu: goto label_1b190c;
            case 0x1B1910u: goto label_1b1910;
            case 0x1B1914u: goto label_1b1914;
            case 0x1B1918u: goto label_1b1918;
            case 0x1B191Cu: goto label_1b191c;
            case 0x1B1920u: goto label_1b1920;
            case 0x1B1924u: goto label_1b1924;
            case 0x1B1928u: goto label_1b1928;
            case 0x1B192Cu: goto label_1b192c;
            case 0x1B1930u: goto label_1b1930;
            case 0x1B1934u: goto label_1b1934;
            case 0x1B1938u: goto label_1b1938;
            case 0x1B193Cu: goto label_1b193c;
            case 0x1B1940u: goto label_1b1940;
            case 0x1B1944u: goto label_1b1944;
            case 0x1B1948u: goto label_1b1948;
            case 0x1B194Cu: goto label_1b194c;
            case 0x1B1950u: goto label_1b1950;
            case 0x1B1954u: goto label_1b1954;
            case 0x1B1958u: goto label_1b1958;
            case 0x1B195Cu: goto label_1b195c;
            case 0x1B1960u: goto label_1b1960;
            case 0x1B1964u: goto label_1b1964;
            case 0x1B1968u: goto label_1b1968;
            case 0x1B196Cu: goto label_1b196c;
            case 0x1B1970u: goto label_1b1970;
            case 0x1B1974u: goto label_1b1974;
            case 0x1B1978u: goto label_1b1978;
            case 0x1B197Cu: goto label_1b197c;
            case 0x1B1980u: goto label_1b1980;
            case 0x1B1984u: goto label_1b1984;
            case 0x1B1988u: goto label_1b1988;
            case 0x1B198Cu: goto label_1b198c;
            case 0x1B1990u: goto label_1b1990;
            case 0x1B1994u: goto label_1b1994;
            case 0x1B1998u: goto label_1b1998;
            case 0x1B199Cu: goto label_1b199c;
            case 0x1B19A0u: goto label_1b19a0;
            case 0x1B19A4u: goto label_1b19a4;
            case 0x1B19A8u: goto label_1b19a8;
            case 0x1B19ACu: goto label_1b19ac;
            case 0x1B19B0u: goto label_1b19b0;
            case 0x1B19B4u: goto label_1b19b4;
            case 0x1B19B8u: goto label_1b19b8;
            case 0x1B19BCu: goto label_1b19bc;
            case 0x1B19C0u: goto label_1b19c0;
            case 0x1B19C4u: goto label_1b19c4;
            case 0x1B19C8u: goto label_1b19c8;
            case 0x1B19CCu: goto label_1b19cc;
            case 0x1B19D0u: goto label_1b19d0;
            case 0x1B19D4u: goto label_1b19d4;
            case 0x1B19D8u: goto label_1b19d8;
            case 0x1B19DCu: goto label_1b19dc;
            case 0x1B19E0u: goto label_1b19e0;
            case 0x1B19E4u: goto label_1b19e4;
            case 0x1B19E8u: goto label_1b19e8;
            case 0x1B19ECu: goto label_1b19ec;
            case 0x1B19F0u: goto label_1b19f0;
            case 0x1B19F4u: goto label_1b19f4;
            case 0x1B19F8u: goto label_1b19f8;
            case 0x1B19FCu: goto label_1b19fc;
            case 0x1B1A00u: goto label_1b1a00;
            case 0x1B1A04u: goto label_1b1a04;
            case 0x1B1A08u: goto label_1b1a08;
            case 0x1B1A0Cu: goto label_1b1a0c;
            case 0x1B1A10u: goto label_1b1a10;
            case 0x1B1A14u: goto label_1b1a14;
            case 0x1B1A18u: goto label_1b1a18;
            case 0x1B1A1Cu: goto label_1b1a1c;
            case 0x1B1A20u: goto label_1b1a20;
            case 0x1B1A24u: goto label_1b1a24;
            case 0x1B1A28u: goto label_1b1a28;
            case 0x1B1A2Cu: goto label_1b1a2c;
            case 0x1B1A30u: goto label_1b1a30;
            case 0x1B1A34u: goto label_1b1a34;
            case 0x1B1A38u: goto label_1b1a38;
            case 0x1B1A3Cu: goto label_1b1a3c;
            case 0x1B1A40u: goto label_1b1a40;
            case 0x1B1A44u: goto label_1b1a44;
            case 0x1B1A48u: goto label_1b1a48;
            case 0x1B1A4Cu: goto label_1b1a4c;
            case 0x1B1A50u: goto label_1b1a50;
            case 0x1B1A54u: goto label_1b1a54;
            case 0x1B1A58u: goto label_1b1a58;
            case 0x1B1A5Cu: goto label_1b1a5c;
            case 0x1B1A60u: goto label_1b1a60;
            case 0x1B1A64u: goto label_1b1a64;
            case 0x1B1A68u: goto label_1b1a68;
            case 0x1B1A6Cu: goto label_1b1a6c;
            case 0x1B1A70u: goto label_1b1a70;
            case 0x1B1A74u: goto label_1b1a74;
            case 0x1B1A78u: goto label_1b1a78;
            case 0x1B1A7Cu: goto label_1b1a7c;
            case 0x1B1A80u: goto label_1b1a80;
            case 0x1B1A84u: goto label_1b1a84;
            case 0x1B1A88u: goto label_1b1a88;
            case 0x1B1A8Cu: goto label_1b1a8c;
            case 0x1B1A90u: goto label_1b1a90;
            case 0x1B1A94u: goto label_1b1a94;
            case 0x1B1A98u: goto label_1b1a98;
            case 0x1B1A9Cu: goto label_1b1a9c;
            case 0x1B1AA0u: goto label_1b1aa0;
            case 0x1B1AA4u: goto label_1b1aa4;
            case 0x1B1AA8u: goto label_1b1aa8;
            case 0x1B1AACu: goto label_1b1aac;
            case 0x1B1AB0u: goto label_1b1ab0;
            case 0x1B1AB4u: goto label_1b1ab4;
            case 0x1B1AB8u: goto label_1b1ab8;
            case 0x1B1ABCu: goto label_1b1abc;
            case 0x1B1AC0u: goto label_1b1ac0;
            case 0x1B1AC4u: goto label_1b1ac4;
            case 0x1B1AC8u: goto label_1b1ac8;
            case 0x1B1ACCu: goto label_1b1acc;
            case 0x1B1AD0u: goto label_1b1ad0;
            case 0x1B1AD4u: goto label_1b1ad4;
            case 0x1B1AD8u: goto label_1b1ad8;
            case 0x1B1ADCu: goto label_1b1adc;
            case 0x1B1AE0u: goto label_1b1ae0;
            case 0x1B1AE4u: goto label_1b1ae4;
            case 0x1B1AE8u: goto label_1b1ae8;
            case 0x1B1AECu: goto label_1b1aec;
            case 0x1B1AF0u: goto label_1b1af0;
            case 0x1B1AF4u: goto label_1b1af4;
            case 0x1B1AF8u: goto label_1b1af8;
            case 0x1B1AFCu: goto label_1b1afc;
            case 0x1B1B00u: goto label_1b1b00;
            case 0x1B1B04u: goto label_1b1b04;
            case 0x1B1B08u: goto label_1b1b08;
            case 0x1B1B0Cu: goto label_1b1b0c;
            case 0x1B1B10u: goto label_1b1b10;
            case 0x1B1B14u: goto label_1b1b14;
            case 0x1B1B18u: goto label_1b1b18;
            case 0x1B1B1Cu: goto label_1b1b1c;
            case 0x1B1B20u: goto label_1b1b20;
            case 0x1B1B24u: goto label_1b1b24;
            case 0x1B1B28u: goto label_1b1b28;
            case 0x1B1B2Cu: goto label_1b1b2c;
            case 0x1B1B30u: goto label_1b1b30;
            case 0x1B1B34u: goto label_1b1b34;
            case 0x1B1B38u: goto label_1b1b38;
            case 0x1B1B3Cu: goto label_1b1b3c;
            case 0x1B1B40u: goto label_1b1b40;
            case 0x1B1B44u: goto label_1b1b44;
            case 0x1B1B48u: goto label_1b1b48;
            case 0x1B1B4Cu: goto label_1b1b4c;
            case 0x1B1B50u: goto label_1b1b50;
            case 0x1B1B54u: goto label_1b1b54;
            case 0x1B1B58u: goto label_1b1b58;
            case 0x1B1B5Cu: goto label_1b1b5c;
            case 0x1B1B60u: goto label_1b1b60;
            case 0x1B1B64u: goto label_1b1b64;
            case 0x1B1B68u: goto label_1b1b68;
            case 0x1B1B6Cu: goto label_1b1b6c;
            case 0x1B1B70u: goto label_1b1b70;
            case 0x1B1B74u: goto label_1b1b74;
            case 0x1B1B78u: goto label_1b1b78;
            case 0x1B1B7Cu: goto label_1b1b7c;
            case 0x1B1B80u: goto label_1b1b80;
            case 0x1B1B84u: goto label_1b1b84;
            case 0x1B1B88u: goto label_1b1b88;
            case 0x1B1B8Cu: goto label_1b1b8c;
            case 0x1B1B90u: goto label_1b1b90;
            case 0x1B1B94u: goto label_1b1b94;
            case 0x1B1B98u: goto label_1b1b98;
            case 0x1B1B9Cu: goto label_1b1b9c;
            case 0x1B1BA0u: goto label_1b1ba0;
            case 0x1B1BA4u: goto label_1b1ba4;
            case 0x1B1BA8u: goto label_1b1ba8;
            case 0x1B1BACu: goto label_1b1bac;
            case 0x1B1BB0u: goto label_1b1bb0;
            case 0x1B1BB4u: goto label_1b1bb4;
            case 0x1B1BB8u: goto label_1b1bb8;
            case 0x1B1BBCu: goto label_1b1bbc;
            case 0x1B1BC0u: goto label_1b1bc0;
            case 0x1B1BC4u: goto label_1b1bc4;
            case 0x1B1BC8u: goto label_1b1bc8;
            case 0x1B1BCCu: goto label_1b1bcc;
            case 0x1B1BD0u: goto label_1b1bd0;
            case 0x1B1BD4u: goto label_1b1bd4;
            case 0x1B1BD8u: goto label_1b1bd8;
            case 0x1B1BDCu: goto label_1b1bdc;
            case 0x1B1BE0u: goto label_1b1be0;
            case 0x1B1BE4u: goto label_1b1be4;
            case 0x1B1BE8u: goto label_1b1be8;
            case 0x1B1BECu: goto label_1b1bec;
            case 0x1B1BF0u: goto label_1b1bf0;
            case 0x1B1BF4u: goto label_1b1bf4;
            case 0x1B1BF8u: goto label_1b1bf8;
            case 0x1B1BFCu: goto label_1b1bfc;
            case 0x1B1C00u: goto label_1b1c00;
            case 0x1B1C04u: goto label_1b1c04;
            case 0x1B1C08u: goto label_1b1c08;
            case 0x1B1C0Cu: goto label_1b1c0c;
            case 0x1B1C10u: goto label_1b1c10;
            case 0x1B1C14u: goto label_1b1c14;
            case 0x1B1C18u: goto label_1b1c18;
            case 0x1B1C1Cu: goto label_1b1c1c;
            case 0x1B1C20u: goto label_1b1c20;
            case 0x1B1C24u: goto label_1b1c24;
            case 0x1B1C28u: goto label_1b1c28;
            case 0x1B1C2Cu: goto label_1b1c2c;
            case 0x1B1C30u: goto label_1b1c30;
            case 0x1B1C34u: goto label_1b1c34;
            case 0x1B1C38u: goto label_1b1c38;
            case 0x1B1C3Cu: goto label_1b1c3c;
            case 0x1B1C40u: goto label_1b1c40;
            case 0x1B1C44u: goto label_1b1c44;
            case 0x1B1C48u: goto label_1b1c48;
            case 0x1B1C4Cu: goto label_1b1c4c;
            case 0x1B1C50u: goto label_1b1c50;
            case 0x1B1C54u: goto label_1b1c54;
            case 0x1B1C58u: goto label_1b1c58;
            case 0x1B1C5Cu: goto label_1b1c5c;
            case 0x1B1C60u: goto label_1b1c60;
            case 0x1B1C64u: goto label_1b1c64;
            case 0x1B1C68u: goto label_1b1c68;
            case 0x1B1C6Cu: goto label_1b1c6c;
            case 0x1B1C70u: goto label_1b1c70;
            case 0x1B1C74u: goto label_1b1c74;
            case 0x1B1C78u: goto label_1b1c78;
            case 0x1B1C7Cu: goto label_1b1c7c;
            case 0x1B1C80u: goto label_1b1c80;
            case 0x1B1C84u: goto label_1b1c84;
            case 0x1B1C88u: goto label_1b1c88;
            case 0x1B1C8Cu: goto label_1b1c8c;
            case 0x1B1C90u: goto label_1b1c90;
            case 0x1B1C94u: goto label_1b1c94;
            case 0x1B1C98u: goto label_1b1c98;
            case 0x1B1C9Cu: goto label_1b1c9c;
            case 0x1B1CA0u: goto label_1b1ca0;
            case 0x1B1CA4u: goto label_1b1ca4;
            case 0x1B1CA8u: goto label_1b1ca8;
            case 0x1B1CACu: goto label_1b1cac;
            case 0x1B1CB0u: goto label_1b1cb0;
            case 0x1B1CB4u: goto label_1b1cb4;
            case 0x1B1CB8u: goto label_1b1cb8;
            case 0x1B1CBCu: goto label_1b1cbc;
            case 0x1B1CC0u: goto label_1b1cc0;
            case 0x1B1CC4u: goto label_1b1cc4;
            case 0x1B1CC8u: goto label_1b1cc8;
            case 0x1B1CCCu: goto label_1b1ccc;
            case 0x1B1CD0u: goto label_1b1cd0;
            case 0x1B1CD4u: goto label_1b1cd4;
            case 0x1B1CD8u: goto label_1b1cd8;
            case 0x1B1CDCu: goto label_1b1cdc;
            case 0x1B1CE0u: goto label_1b1ce0;
            case 0x1B1CE4u: goto label_1b1ce4;
            case 0x1B1CE8u: goto label_1b1ce8;
            case 0x1B1CECu: goto label_1b1cec;
            case 0x1B1CF0u: goto label_1b1cf0;
            case 0x1B1CF4u: goto label_1b1cf4;
            case 0x1B1CF8u: goto label_1b1cf8;
            case 0x1B1CFCu: goto label_1b1cfc;
            case 0x1B1D00u: goto label_1b1d00;
            case 0x1B1D04u: goto label_1b1d04;
            case 0x1B1D08u: goto label_1b1d08;
            case 0x1B1D0Cu: goto label_1b1d0c;
            case 0x1B1D10u: goto label_1b1d10;
            case 0x1B1D14u: goto label_1b1d14;
            case 0x1B1D18u: goto label_1b1d18;
            case 0x1B1D1Cu: goto label_1b1d1c;
            case 0x1B1D20u: goto label_1b1d20;
            case 0x1B1D24u: goto label_1b1d24;
            case 0x1B1D28u: goto label_1b1d28;
            case 0x1B1D2Cu: goto label_1b1d2c;
            case 0x1B1D30u: goto label_1b1d30;
            case 0x1B1D34u: goto label_1b1d34;
            case 0x1B1D38u: goto label_1b1d38;
            case 0x1B1D3Cu: goto label_1b1d3c;
            case 0x1B1D40u: goto label_1b1d40;
            case 0x1B1D44u: goto label_1b1d44;
            case 0x1B1D48u: goto label_1b1d48;
            case 0x1B1D4Cu: goto label_1b1d4c;
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D54u: goto label_1b1d54;
            case 0x1B1D58u: goto label_1b1d58;
            case 0x1B1D5Cu: goto label_1b1d5c;
            case 0x1B1D60u: goto label_1b1d60;
            case 0x1B1D64u: goto label_1b1d64;
            case 0x1B1D68u: goto label_1b1d68;
            case 0x1B1D6Cu: goto label_1b1d6c;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D74u: goto label_1b1d74;
            case 0x1B1D78u: goto label_1b1d78;
            case 0x1B1D7Cu: goto label_1b1d7c;
            case 0x1B1D80u: goto label_1b1d80;
            case 0x1B1D84u: goto label_1b1d84;
            case 0x1B1D88u: goto label_1b1d88;
            case 0x1B1D8Cu: goto label_1b1d8c;
            case 0x1B1D90u: goto label_1b1d90;
            case 0x1B1D94u: goto label_1b1d94;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1D9Cu: goto label_1b1d9c;
            case 0x1B1DA0u: goto label_1b1da0;
            case 0x1B1DA4u: goto label_1b1da4;
            case 0x1B1DA8u: goto label_1b1da8;
            case 0x1B1DACu: goto label_1b1dac;
            case 0x1B1DB0u: goto label_1b1db0;
            case 0x1B1DB4u: goto label_1b1db4;
            case 0x1B1DB8u: goto label_1b1db8;
            case 0x1B1DBCu: goto label_1b1dbc;
            case 0x1B1DC0u: goto label_1b1dc0;
            case 0x1B1DC4u: goto label_1b1dc4;
            case 0x1B1DC8u: goto label_1b1dc8;
            case 0x1B1DCCu: goto label_1b1dcc;
            case 0x1B1DD0u: goto label_1b1dd0;
            case 0x1B1DD4u: goto label_1b1dd4;
            case 0x1B1DD8u: goto label_1b1dd8;
            case 0x1B1DDCu: goto label_1b1ddc;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1DE4u: goto label_1b1de4;
            case 0x1B1DE8u: goto label_1b1de8;
            case 0x1B1DECu: goto label_1b1dec;
            case 0x1B1DF0u: goto label_1b1df0;
            case 0x1B1DF4u: goto label_1b1df4;
            case 0x1B1DF8u: goto label_1b1df8;
            case 0x1B1DFCu: goto label_1b1dfc;
            case 0x1B1E00u: goto label_1b1e00;
            case 0x1B1E04u: goto label_1b1e04;
            case 0x1B1E08u: goto label_1b1e08;
            case 0x1B1E0Cu: goto label_1b1e0c;
            case 0x1B1E10u: goto label_1b1e10;
            case 0x1B1E14u: goto label_1b1e14;
            case 0x1B1E18u: goto label_1b1e18;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E20u: goto label_1b1e20;
            case 0x1B1E24u: goto label_1b1e24;
            case 0x1B1E28u: goto label_1b1e28;
            case 0x1B1E2Cu: goto label_1b1e2c;
            case 0x1B1E30u: goto label_1b1e30;
            case 0x1B1E34u: goto label_1b1e34;
            case 0x1B1E38u: goto label_1b1e38;
            case 0x1B1E3Cu: goto label_1b1e3c;
            case 0x1B1E40u: goto label_1b1e40;
            case 0x1B1E44u: goto label_1b1e44;
            case 0x1B1E48u: goto label_1b1e48;
            case 0x1B1E4Cu: goto label_1b1e4c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E58u: goto label_1b1e58;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E60u: goto label_1b1e60;
            case 0x1B1E64u: goto label_1b1e64;
            case 0x1B1E68u: goto label_1b1e68;
            case 0x1B1E6Cu: goto label_1b1e6c;
            case 0x1B1E70u: goto label_1b1e70;
            case 0x1B1E74u: goto label_1b1e74;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1E7Cu: goto label_1b1e7c;
            case 0x1B1E80u: goto label_1b1e80;
            case 0x1B1E84u: goto label_1b1e84;
            case 0x1B1E88u: goto label_1b1e88;
            case 0x1B1E8Cu: goto label_1b1e8c;
            case 0x1B1E90u: goto label_1b1e90;
            case 0x1B1E94u: goto label_1b1e94;
            case 0x1B1E98u: goto label_1b1e98;
            case 0x1B1E9Cu: goto label_1b1e9c;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EA4u: goto label_1b1ea4;
            case 0x1B1EA8u: goto label_1b1ea8;
            case 0x1B1EACu: goto label_1b1eac;
            case 0x1B1EB0u: goto label_1b1eb0;
            case 0x1B1EB4u: goto label_1b1eb4;
            case 0x1B1EB8u: goto label_1b1eb8;
            case 0x1B1EBCu: goto label_1b1ebc;
            case 0x1B1EC0u: goto label_1b1ec0;
            case 0x1B1EC4u: goto label_1b1ec4;
            case 0x1B1EC8u: goto label_1b1ec8;
            case 0x1B1ECCu: goto label_1b1ecc;
            case 0x1B1ED0u: goto label_1b1ed0;
            case 0x1B1ED4u: goto label_1b1ed4;
            case 0x1B1ED8u: goto label_1b1ed8;
            case 0x1B1EDCu: goto label_1b1edc;
            case 0x1B1EE0u: goto label_1b1ee0;
            case 0x1B1EE4u: goto label_1b1ee4;
            case 0x1B1EE8u: goto label_1b1ee8;
            case 0x1B1EECu: goto label_1b1eec;
            case 0x1B1EF0u: goto label_1b1ef0;
            case 0x1B1EF4u: goto label_1b1ef4;
            case 0x1B1EF8u: goto label_1b1ef8;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F00u: goto label_1b1f00;
            case 0x1B1F04u: goto label_1b1f04;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F0Cu: goto label_1b1f0c;
            case 0x1B1F10u: goto label_1b1f10;
            case 0x1B1F14u: goto label_1b1f14;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F1Cu: goto label_1b1f1c;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F24u: goto label_1b1f24;
            case 0x1B1F28u: goto label_1b1f28;
            case 0x1B1F2Cu: goto label_1b1f2c;
            case 0x1B1F30u: goto label_1b1f30;
            case 0x1B1F34u: goto label_1b1f34;
            case 0x1B1F38u: goto label_1b1f38;
            case 0x1B1F3Cu: goto label_1b1f3c;
            case 0x1B1F40u: goto label_1b1f40;
            case 0x1B1F44u: goto label_1b1f44;
            case 0x1B1F48u: goto label_1b1f48;
            case 0x1B1F4Cu: goto label_1b1f4c;
            case 0x1B1F50u: goto label_1b1f50;
            case 0x1B1F54u: goto label_1b1f54;
            case 0x1B1F58u: goto label_1b1f58;
            case 0x1B1F5Cu: goto label_1b1f5c;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1F64u: goto label_1b1f64;
            case 0x1B1F68u: goto label_1b1f68;
            case 0x1B1F6Cu: goto label_1b1f6c;
            case 0x1B1F70u: goto label_1b1f70;
            case 0x1B1F74u: goto label_1b1f74;
            case 0x1B1F78u: goto label_1b1f78;
            case 0x1B1F7Cu: goto label_1b1f7c;
            case 0x1B1F80u: goto label_1b1f80;
            case 0x1B1F84u: goto label_1b1f84;
            case 0x1B1F88u: goto label_1b1f88;
            case 0x1B1F8Cu: goto label_1b1f8c;
            case 0x1B1F90u: goto label_1b1f90;
            case 0x1B1F94u: goto label_1b1f94;
            case 0x1B1F98u: goto label_1b1f98;
            case 0x1B1F9Cu: goto label_1b1f9c;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FA8u: goto label_1b1fa8;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FB0u: goto label_1b1fb0;
            case 0x1B1FB4u: goto label_1b1fb4;
            case 0x1B1FB8u: goto label_1b1fb8;
            case 0x1B1FBCu: goto label_1b1fbc;
            case 0x1B1FC0u: goto label_1b1fc0;
            case 0x1B1FC4u: goto label_1b1fc4;
            case 0x1B1FC8u: goto label_1b1fc8;
            case 0x1B1FCCu: goto label_1b1fcc;
            case 0x1B1FD0u: goto label_1b1fd0;
            case 0x1B1FD4u: goto label_1b1fd4;
            case 0x1B1FD8u: goto label_1b1fd8;
            case 0x1B1FDCu: goto label_1b1fdc;
            case 0x1B1FE0u: goto label_1b1fe0;
            case 0x1B1FE4u: goto label_1b1fe4;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B1FECu: goto label_1b1fec;
            case 0x1B1FF0u: goto label_1b1ff0;
            case 0x1B1FF4u: goto label_1b1ff4;
            case 0x1B1FF8u: goto label_1b1ff8;
            case 0x1B1FFCu: goto label_1b1ffc;
            case 0x1B2000u: goto label_1b2000;
            case 0x1B2004u: goto label_1b2004;
            case 0x1B2008u: goto label_1b2008;
            case 0x1B200Cu: goto label_1b200c;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2014u: goto label_1b2014;
            case 0x1B2018u: goto label_1b2018;
            case 0x1B201Cu: goto label_1b201c;
            case 0x1B2020u: goto label_1b2020;
            case 0x1B2024u: goto label_1b2024;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2030u: goto label_1b2030;
            case 0x1B2034u: goto label_1b2034;
            case 0x1B2038u: goto label_1b2038;
            case 0x1B203Cu: goto label_1b203c;
            case 0x1B2040u: goto label_1b2040;
            case 0x1B2044u: goto label_1b2044;
            case 0x1B2048u: goto label_1b2048;
            case 0x1B204Cu: goto label_1b204c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2054u: goto label_1b2054;
            case 0x1B2058u: goto label_1b2058;
            case 0x1B205Cu: goto label_1b205c;
            case 0x1B2060u: goto label_1b2060;
            case 0x1B2064u: goto label_1b2064;
            case 0x1B2068u: goto label_1b2068;
            case 0x1B206Cu: goto label_1b206c;
            case 0x1B2070u: goto label_1b2070;
            case 0x1B2074u: goto label_1b2074;
            case 0x1B2078u: goto label_1b2078;
            case 0x1B207Cu: goto label_1b207c;
            case 0x1B2080u: goto label_1b2080;
            case 0x1B2084u: goto label_1b2084;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B208Cu: goto label_1b208c;
            case 0x1B2090u: goto label_1b2090;
            case 0x1B2094u: goto label_1b2094;
            case 0x1B2098u: goto label_1b2098;
            case 0x1B209Cu: goto label_1b209c;
            case 0x1B20A0u: goto label_1b20a0;
            case 0x1B20A4u: goto label_1b20a4;
            case 0x1B20A8u: goto label_1b20a8;
            case 0x1B20ACu: goto label_1b20ac;
            case 0x1B20B0u: goto label_1b20b0;
            case 0x1B20B4u: goto label_1b20b4;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20BCu: goto label_1b20bc;
            case 0x1B20C0u: goto label_1b20c0;
            case 0x1B20C4u: goto label_1b20c4;
            case 0x1B20C8u: goto label_1b20c8;
            case 0x1B20CCu: goto label_1b20cc;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B20D4u: goto label_1b20d4;
            case 0x1B20D8u: goto label_1b20d8;
            case 0x1B20DCu: goto label_1b20dc;
            case 0x1B20E0u: goto label_1b20e0;
            case 0x1B20E4u: goto label_1b20e4;
            case 0x1B20E8u: goto label_1b20e8;
            case 0x1B20ECu: goto label_1b20ec;
            case 0x1B20F0u: goto label_1b20f0;
            case 0x1B20F4u: goto label_1b20f4;
            case 0x1B20F8u: goto label_1b20f8;
            case 0x1B20FCu: goto label_1b20fc;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2108u: goto label_1b2108;
            case 0x1B210Cu: goto label_1b210c;
            case 0x1B2110u: goto label_1b2110;
            case 0x1B2114u: goto label_1b2114;
            case 0x1B2118u: goto label_1b2118;
            case 0x1B211Cu: goto label_1b211c;
            case 0x1B2120u: goto label_1b2120;
            case 0x1B2124u: goto label_1b2124;
            case 0x1B2128u: goto label_1b2128;
            case 0x1B212Cu: goto label_1b212c;
            case 0x1B2130u: goto label_1b2130;
            case 0x1B2134u: goto label_1b2134;
            case 0x1B2138u: goto label_1b2138;
            case 0x1B213Cu: goto label_1b213c;
            case 0x1B2140u: goto label_1b2140;
            case 0x1B2144u: goto label_1b2144;
            case 0x1B2148u: goto label_1b2148;
            case 0x1B214Cu: goto label_1b214c;
            case 0x1B2150u: goto label_1b2150;
            case 0x1B2154u: goto label_1b2154;
            case 0x1B2158u: goto label_1b2158;
            case 0x1B215Cu: goto label_1b215c;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2164u: goto label_1b2164;
            case 0x1B2168u: goto label_1b2168;
            case 0x1B216Cu: goto label_1b216c;
            case 0x1B2170u: goto label_1b2170;
            case 0x1B2174u: goto label_1b2174;
            case 0x1B2178u: goto label_1b2178;
            case 0x1B217Cu: goto label_1b217c;
            case 0x1B2180u: goto label_1b2180;
            case 0x1B2184u: goto label_1b2184;
            case 0x1B2188u: goto label_1b2188;
            case 0x1B218Cu: goto label_1b218c;
            case 0x1B2190u: goto label_1b2190;
            case 0x1B2194u: goto label_1b2194;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21A0u: goto label_1b21a0;
            case 0x1B21A4u: goto label_1b21a4;
            case 0x1B21A8u: goto label_1b21a8;
            case 0x1B21ACu: goto label_1b21ac;
            case 0x1B21B0u: goto label_1b21b0;
            case 0x1B21B4u: goto label_1b21b4;
            case 0x1B21B8u: goto label_1b21b8;
            case 0x1B21BCu: goto label_1b21bc;
            case 0x1B21C0u: goto label_1b21c0;
            case 0x1B21C4u: goto label_1b21c4;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21CCu: goto label_1b21cc;
            case 0x1B21D0u: goto label_1b21d0;
            case 0x1B21D4u: goto label_1b21d4;
            case 0x1B21D8u: goto label_1b21d8;
            case 0x1B21DCu: goto label_1b21dc;
            case 0x1B21E0u: goto label_1b21e0;
            case 0x1B21E4u: goto label_1b21e4;
            case 0x1B21E8u: goto label_1b21e8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F0u: goto label_1b21f0;
            case 0x1B21F4u: goto label_1b21f4;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B21FCu: goto label_1b21fc;
            case 0x1B2200u: goto label_1b2200;
            case 0x1B2204u: goto label_1b2204;
            case 0x1B2208u: goto label_1b2208;
            case 0x1B220Cu: goto label_1b220c;
            case 0x1B2210u: goto label_1b2210;
            case 0x1B2214u: goto label_1b2214;
            case 0x1B2218u: goto label_1b2218;
            case 0x1B221Cu: goto label_1b221c;
            case 0x1B2220u: goto label_1b2220;
            case 0x1B2224u: goto label_1b2224;
            case 0x1B2228u: goto label_1b2228;
            case 0x1B222Cu: goto label_1b222c;
            case 0x1B2230u: goto label_1b2230;
            case 0x1B2234u: goto label_1b2234;
            case 0x1B2238u: goto label_1b2238;
            case 0x1B223Cu: goto label_1b223c;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2244u: goto label_1b2244;
            case 0x1B2248u: goto label_1b2248;
            case 0x1B224Cu: goto label_1b224c;
            case 0x1B2250u: goto label_1b2250;
            case 0x1B2254u: goto label_1b2254;
            case 0x1B2258u: goto label_1b2258;
            case 0x1B225Cu: goto label_1b225c;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2264u: goto label_1b2264;
            case 0x1B2268u: goto label_1b2268;
            case 0x1B226Cu: goto label_1b226c;
            case 0x1B2270u: goto label_1b2270;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2278u: goto label_1b2278;
            case 0x1B227Cu: goto label_1b227c;
            case 0x1B2280u: goto label_1b2280;
            case 0x1B2284u: goto label_1b2284;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B228Cu: goto label_1b228c;
            case 0x1B2290u: goto label_1b2290;
            case 0x1B2294u: goto label_1b2294;
            case 0x1B2298u: goto label_1b2298;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22A0u: goto label_1b22a0;
            case 0x1B22A4u: goto label_1b22a4;
            case 0x1B22A8u: goto label_1b22a8;
            case 0x1B22ACu: goto label_1b22ac;
            case 0x1B22B0u: goto label_1b22b0;
            case 0x1B22B4u: goto label_1b22b4;
            case 0x1B22B8u: goto label_1b22b8;
            case 0x1B22BCu: goto label_1b22bc;
            case 0x1B22C0u: goto label_1b22c0;
            case 0x1B22C4u: goto label_1b22c4;
            case 0x1B22C8u: goto label_1b22c8;
            case 0x1B22CCu: goto label_1b22cc;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22D4u: goto label_1b22d4;
            case 0x1B22D8u: goto label_1b22d8;
            case 0x1B22DCu: goto label_1b22dc;
            case 0x1B22E0u: goto label_1b22e0;
            case 0x1B22E4u: goto label_1b22e4;
            case 0x1B22E8u: goto label_1b22e8;
            case 0x1B22ECu: goto label_1b22ec;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B22F4u: goto label_1b22f4;
            case 0x1B22F8u: goto label_1b22f8;
            case 0x1B22FCu: goto label_1b22fc;
            case 0x1B2300u: goto label_1b2300;
            case 0x1B2304u: goto label_1b2304;
            case 0x1B2308u: goto label_1b2308;
            case 0x1B230Cu: goto label_1b230c;
            case 0x1B2310u: goto label_1b2310;
            case 0x1B2314u: goto label_1b2314;
            case 0x1B2318u: goto label_1b2318;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2324u: goto label_1b2324;
            case 0x1B2328u: goto label_1b2328;
            case 0x1B232Cu: goto label_1b232c;
            case 0x1B2330u: goto label_1b2330;
            case 0x1B2334u: goto label_1b2334;
            case 0x1B2338u: goto label_1b2338;
            case 0x1B233Cu: goto label_1b233c;
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            case 0x1B2790u: goto label_1b2790;
            case 0x1B2794u: goto label_1b2794;
            case 0x1B2798u: goto label_1b2798;
            case 0x1B279Cu: goto label_1b279c;
            case 0x1B27A0u: goto label_1b27a0;
            case 0x1B27A4u: goto label_1b27a4;
            case 0x1B27A8u: goto label_1b27a8;
            case 0x1B27ACu: goto label_1b27ac;
            case 0x1B27B0u: goto label_1b27b0;
            case 0x1B27B4u: goto label_1b27b4;
            case 0x1B27B8u: goto label_1b27b8;
            case 0x1B27BCu: goto label_1b27bc;
            case 0x1B27C0u: goto label_1b27c0;
            case 0x1B27C4u: goto label_1b27c4;
            case 0x1B27C8u: goto label_1b27c8;
            case 0x1B27CCu: goto label_1b27cc;
            case 0x1B27D0u: goto label_1b27d0;
            case 0x1B27D4u: goto label_1b27d4;
            case 0x1B27D8u: goto label_1b27d8;
            case 0x1B27DCu: goto label_1b27dc;
            case 0x1B27E0u: goto label_1b27e0;
            case 0x1B27E4u: goto label_1b27e4;
            case 0x1B27E8u: goto label_1b27e8;
            case 0x1B27ECu: goto label_1b27ec;
            case 0x1B27F0u: goto label_1b27f0;
            case 0x1B27F4u: goto label_1b27f4;
            case 0x1B27F8u: goto label_1b27f8;
            case 0x1B27FCu: goto label_1b27fc;
            case 0x1B2800u: goto label_1b2800;
            case 0x1B2804u: goto label_1b2804;
            case 0x1B2808u: goto label_1b2808;
            case 0x1B280Cu: goto label_1b280c;
            case 0x1B2810u: goto label_1b2810;
            case 0x1B2814u: goto label_1b2814;
            case 0x1B2818u: goto label_1b2818;
            case 0x1B281Cu: goto label_1b281c;
            case 0x1B2820u: goto label_1b2820;
            case 0x1B2824u: goto label_1b2824;
            case 0x1B2828u: goto label_1b2828;
            case 0x1B282Cu: goto label_1b282c;
            case 0x1B2830u: goto label_1b2830;
            case 0x1B2834u: goto label_1b2834;
            case 0x1B2838u: goto label_1b2838;
            case 0x1B283Cu: goto label_1b283c;
            case 0x1B2840u: goto label_1b2840;
            case 0x1B2844u: goto label_1b2844;
            case 0x1B2848u: goto label_1b2848;
            case 0x1B284Cu: goto label_1b284c;
            case 0x1B2850u: goto label_1b2850;
            case 0x1B2854u: goto label_1b2854;
            case 0x1B2858u: goto label_1b2858;
            case 0x1B285Cu: goto label_1b285c;
            case 0x1B2860u: goto label_1b2860;
            case 0x1B2864u: goto label_1b2864;
            case 0x1B2868u: goto label_1b2868;
            case 0x1B286Cu: goto label_1b286c;
            case 0x1B2870u: goto label_1b2870;
            case 0x1B2874u: goto label_1b2874;
            case 0x1B2878u: goto label_1b2878;
            case 0x1B287Cu: goto label_1b287c;
            case 0x1B2880u: goto label_1b2880;
            case 0x1B2884u: goto label_1b2884;
            case 0x1B2888u: goto label_1b2888;
            case 0x1B288Cu: goto label_1b288c;
            case 0x1B2890u: goto label_1b2890;
            case 0x1B2894u: goto label_1b2894;
            case 0x1B2898u: goto label_1b2898;
            case 0x1B289Cu: goto label_1b289c;
            case 0x1B28A0u: goto label_1b28a0;
            case 0x1B28A4u: goto label_1b28a4;
            case 0x1B28A8u: goto label_1b28a8;
            case 0x1B28ACu: goto label_1b28ac;
            case 0x1B28B0u: goto label_1b28b0;
            case 0x1B28B4u: goto label_1b28b4;
            case 0x1B28B8u: goto label_1b28b8;
            case 0x1B28BCu: goto label_1b28bc;
            case 0x1B28C0u: goto label_1b28c0;
            case 0x1B28C4u: goto label_1b28c4;
            case 0x1B28C8u: goto label_1b28c8;
            case 0x1B28CCu: goto label_1b28cc;
            case 0x1B28D0u: goto label_1b28d0;
            case 0x1B28D4u: goto label_1b28d4;
            case 0x1B28D8u: goto label_1b28d8;
            case 0x1B28DCu: goto label_1b28dc;
            case 0x1B28E0u: goto label_1b28e0;
            case 0x1B28E4u: goto label_1b28e4;
            case 0x1B28E8u: goto label_1b28e8;
            case 0x1B28ECu: goto label_1b28ec;
            case 0x1B28F0u: goto label_1b28f0;
            case 0x1B28F4u: goto label_1b28f4;
            case 0x1B28F8u: goto label_1b28f8;
            case 0x1B28FCu: goto label_1b28fc;
            case 0x1B2900u: goto label_1b2900;
            case 0x1B2904u: goto label_1b2904;
            case 0x1B2908u: goto label_1b2908;
            case 0x1B290Cu: goto label_1b290c;
            case 0x1B2910u: goto label_1b2910;
            case 0x1B2914u: goto label_1b2914;
            case 0x1B2918u: goto label_1b2918;
            case 0x1B291Cu: goto label_1b291c;
            case 0x1B2920u: goto label_1b2920;
            case 0x1B2924u: goto label_1b2924;
            case 0x1B2928u: goto label_1b2928;
            case 0x1B292Cu: goto label_1b292c;
            case 0x1B2930u: goto label_1b2930;
            case 0x1B2934u: goto label_1b2934;
            case 0x1B2938u: goto label_1b2938;
            case 0x1B293Cu: goto label_1b293c;
            case 0x1B2940u: goto label_1b2940;
            case 0x1B2944u: goto label_1b2944;
            case 0x1B2948u: goto label_1b2948;
            case 0x1B294Cu: goto label_1b294c;
            case 0x1B2950u: goto label_1b2950;
            case 0x1B2954u: goto label_1b2954;
            case 0x1B2958u: goto label_1b2958;
            case 0x1B295Cu: goto label_1b295c;
            case 0x1B2960u: goto label_1b2960;
            case 0x1B2964u: goto label_1b2964;
            case 0x1B2968u: goto label_1b2968;
            case 0x1B296Cu: goto label_1b296c;
            case 0x1B2970u: goto label_1b2970;
            case 0x1B2974u: goto label_1b2974;
            case 0x1B2978u: goto label_1b2978;
            case 0x1B297Cu: goto label_1b297c;
            case 0x1B2980u: goto label_1b2980;
            case 0x1B2984u: goto label_1b2984;
            case 0x1B2988u: goto label_1b2988;
            case 0x1B298Cu: goto label_1b298c;
            case 0x1B2990u: goto label_1b2990;
            case 0x1B2994u: goto label_1b2994;
            case 0x1B2998u: goto label_1b2998;
            case 0x1B299Cu: goto label_1b299c;
            case 0x1B29A0u: goto label_1b29a0;
            case 0x1B29A4u: goto label_1b29a4;
            case 0x1B29A8u: goto label_1b29a8;
            case 0x1B29ACu: goto label_1b29ac;
            case 0x1B29B0u: goto label_1b29b0;
            case 0x1B29B4u: goto label_1b29b4;
            case 0x1B29B8u: goto label_1b29b8;
            case 0x1B29BCu: goto label_1b29bc;
            case 0x1B29C0u: goto label_1b29c0;
            case 0x1B29C4u: goto label_1b29c4;
            case 0x1B29C8u: goto label_1b29c8;
            case 0x1B29CCu: goto label_1b29cc;
            case 0x1B29D0u: goto label_1b29d0;
            case 0x1B29D4u: goto label_1b29d4;
            case 0x1B29D8u: goto label_1b29d8;
            case 0x1B29DCu: goto label_1b29dc;
            case 0x1B29E0u: goto label_1b29e0;
            case 0x1B29E4u: goto label_1b29e4;
            case 0x1B29E8u: goto label_1b29e8;
            case 0x1B29ECu: goto label_1b29ec;
            case 0x1B29F0u: goto label_1b29f0;
            case 0x1B29F4u: goto label_1b29f4;
            case 0x1B29F8u: goto label_1b29f8;
            case 0x1B29FCu: goto label_1b29fc;
            case 0x1B2A00u: goto label_1b2a00;
            case 0x1B2A04u: goto label_1b2a04;
            case 0x1B2A08u: goto label_1b2a08;
            case 0x1B2A0Cu: goto label_1b2a0c;
            case 0x1B2A10u: goto label_1b2a10;
            case 0x1B2A14u: goto label_1b2a14;
            case 0x1B2A18u: goto label_1b2a18;
            case 0x1B2A1Cu: goto label_1b2a1c;
            case 0x1B2A20u: goto label_1b2a20;
            case 0x1B2A24u: goto label_1b2a24;
            case 0x1B2A28u: goto label_1b2a28;
            case 0x1B2A2Cu: goto label_1b2a2c;
            case 0x1B2A30u: goto label_1b2a30;
            case 0x1B2A34u: goto label_1b2a34;
            case 0x1B2A38u: goto label_1b2a38;
            case 0x1B2A3Cu: goto label_1b2a3c;
            case 0x1B2A40u: goto label_1b2a40;
            case 0x1B2A44u: goto label_1b2a44;
            case 0x1B2A48u: goto label_1b2a48;
            case 0x1B2A4Cu: goto label_1b2a4c;
            case 0x1B2A50u: goto label_1b2a50;
            case 0x1B2A54u: goto label_1b2a54;
            case 0x1B2A58u: goto label_1b2a58;
            case 0x1B2A5Cu: goto label_1b2a5c;
            case 0x1B2A60u: goto label_1b2a60;
            case 0x1B2A64u: goto label_1b2a64;
            case 0x1B2A68u: goto label_1b2a68;
            case 0x1B2A6Cu: goto label_1b2a6c;
            case 0x1B2A70u: goto label_1b2a70;
            case 0x1B2A74u: goto label_1b2a74;
            case 0x1B2A78u: goto label_1b2a78;
            case 0x1B2A7Cu: goto label_1b2a7c;
            case 0x1B2A80u: goto label_1b2a80;
            case 0x1B2A84u: goto label_1b2a84;
            case 0x1B2A88u: goto label_1b2a88;
            case 0x1B2A8Cu: goto label_1b2a8c;
            case 0x1B2A90u: goto label_1b2a90;
            case 0x1B2A94u: goto label_1b2a94;
            case 0x1B2A98u: goto label_1b2a98;
            case 0x1B2A9Cu: goto label_1b2a9c;
            case 0x1B2AA0u: goto label_1b2aa0;
            case 0x1B2AA4u: goto label_1b2aa4;
            case 0x1B2AA8u: goto label_1b2aa8;
            case 0x1B2AACu: goto label_1b2aac;
            case 0x1B2AB0u: goto label_1b2ab0;
            case 0x1B2AB4u: goto label_1b2ab4;
            case 0x1B2AB8u: goto label_1b2ab8;
            case 0x1B2ABCu: goto label_1b2abc;
            case 0x1B2AC0u: goto label_1b2ac0;
            case 0x1B2AC4u: goto label_1b2ac4;
            case 0x1B2AC8u: goto label_1b2ac8;
            case 0x1B2ACCu: goto label_1b2acc;
            case 0x1B2AD0u: goto label_1b2ad0;
            case 0x1B2AD4u: goto label_1b2ad4;
            case 0x1B2AD8u: goto label_1b2ad8;
            case 0x1B2ADCu: goto label_1b2adc;
            case 0x1B2AE0u: goto label_1b2ae0;
            case 0x1B2AE4u: goto label_1b2ae4;
            case 0x1B2AE8u: goto label_1b2ae8;
            case 0x1B2AECu: goto label_1b2aec;
            case 0x1B2AF0u: goto label_1b2af0;
            case 0x1B2AF4u: goto label_1b2af4;
            case 0x1B2AF8u: goto label_1b2af8;
            case 0x1B2AFCu: goto label_1b2afc;
            case 0x1B2B00u: goto label_1b2b00;
            case 0x1B2B04u: goto label_1b2b04;
            case 0x1B2B08u: goto label_1b2b08;
            case 0x1B2B0Cu: goto label_1b2b0c;
            case 0x1B2B10u: goto label_1b2b10;
            case 0x1B2B14u: goto label_1b2b14;
            case 0x1B2B18u: goto label_1b2b18;
            case 0x1B2B1Cu: goto label_1b2b1c;
            case 0x1B2B20u: goto label_1b2b20;
            case 0x1B2B24u: goto label_1b2b24;
            case 0x1B2B28u: goto label_1b2b28;
            case 0x1B2B2Cu: goto label_1b2b2c;
            case 0x1B2B30u: goto label_1b2b30;
            case 0x1B2B34u: goto label_1b2b34;
            case 0x1B2B38u: goto label_1b2b38;
            case 0x1B2B3Cu: goto label_1b2b3c;
            case 0x1B2B40u: goto label_1b2b40;
            case 0x1B2B44u: goto label_1b2b44;
            case 0x1B2B48u: goto label_1b2b48;
            case 0x1B2B4Cu: goto label_1b2b4c;
            case 0x1B2B50u: goto label_1b2b50;
            case 0x1B2B54u: goto label_1b2b54;
            case 0x1B2B58u: goto label_1b2b58;
            case 0x1B2B5Cu: goto label_1b2b5c;
            case 0x1B2B60u: goto label_1b2b60;
            case 0x1B2B64u: goto label_1b2b64;
            case 0x1B2B68u: goto label_1b2b68;
            case 0x1B2B6Cu: goto label_1b2b6c;
            case 0x1B2B70u: goto label_1b2b70;
            case 0x1B2B74u: goto label_1b2b74;
            case 0x1B2B78u: goto label_1b2b78;
            case 0x1B2B7Cu: goto label_1b2b7c;
            case 0x1B2B80u: goto label_1b2b80;
            case 0x1B2B84u: goto label_1b2b84;
            case 0x1B2B88u: goto label_1b2b88;
            case 0x1B2B8Cu: goto label_1b2b8c;
            case 0x1B2B90u: goto label_1b2b90;
            case 0x1B2B94u: goto label_1b2b94;
            case 0x1B2B98u: goto label_1b2b98;
            case 0x1B2B9Cu: goto label_1b2b9c;
            case 0x1B2BA0u: goto label_1b2ba0;
            case 0x1B2BA4u: goto label_1b2ba4;
            case 0x1B2BA8u: goto label_1b2ba8;
            case 0x1B2BACu: goto label_1b2bac;
            case 0x1B2BB0u: goto label_1b2bb0;
            case 0x1B2BB4u: goto label_1b2bb4;
            case 0x1B2BB8u: goto label_1b2bb8;
            case 0x1B2BBCu: goto label_1b2bbc;
            case 0x1B2BC0u: goto label_1b2bc0;
            case 0x1B2BC4u: goto label_1b2bc4;
            case 0x1B2BC8u: goto label_1b2bc8;
            case 0x1B2BCCu: goto label_1b2bcc;
            case 0x1B2BD0u: goto label_1b2bd0;
            case 0x1B2BD4u: goto label_1b2bd4;
            case 0x1B2BD8u: goto label_1b2bd8;
            case 0x1B2BDCu: goto label_1b2bdc;
            case 0x1B2BE0u: goto label_1b2be0;
            case 0x1B2BE4u: goto label_1b2be4;
            case 0x1B2BE8u: goto label_1b2be8;
            case 0x1B2BECu: goto label_1b2bec;
            case 0x1B2BF0u: goto label_1b2bf0;
            case 0x1B2BF4u: goto label_1b2bf4;
            case 0x1B2BF8u: goto label_1b2bf8;
            case 0x1B2BFCu: goto label_1b2bfc;
            case 0x1B2C00u: goto label_1b2c00;
            case 0x1B2C04u: goto label_1b2c04;
            case 0x1B2C08u: goto label_1b2c08;
            case 0x1B2C0Cu: goto label_1b2c0c;
            case 0x1B2C10u: goto label_1b2c10;
            case 0x1B2C14u: goto label_1b2c14;
            case 0x1B2C18u: goto label_1b2c18;
            case 0x1B2C1Cu: goto label_1b2c1c;
            case 0x1B2C20u: goto label_1b2c20;
            case 0x1B2C24u: goto label_1b2c24;
            case 0x1B2C28u: goto label_1b2c28;
            case 0x1B2C2Cu: goto label_1b2c2c;
            case 0x1B2C30u: goto label_1b2c30;
            case 0x1B2C34u: goto label_1b2c34;
            case 0x1B2C38u: goto label_1b2c38;
            case 0x1B2C3Cu: goto label_1b2c3c;
            case 0x1B2C40u: goto label_1b2c40;
            case 0x1B2C44u: goto label_1b2c44;
            case 0x1B2C48u: goto label_1b2c48;
            case 0x1B2C4Cu: goto label_1b2c4c;
            case 0x1B2C50u: goto label_1b2c50;
            case 0x1B2C54u: goto label_1b2c54;
            case 0x1B2C58u: goto label_1b2c58;
            case 0x1B2C5Cu: goto label_1b2c5c;
            case 0x1B2C60u: goto label_1b2c60;
            case 0x1B2C64u: goto label_1b2c64;
            case 0x1B2C68u: goto label_1b2c68;
            case 0x1B2C6Cu: goto label_1b2c6c;
            case 0x1B2C70u: goto label_1b2c70;
            case 0x1B2C74u: goto label_1b2c74;
            case 0x1B2C78u: goto label_1b2c78;
            case 0x1B2C7Cu: goto label_1b2c7c;
            case 0x1B2C80u: goto label_1b2c80;
            case 0x1B2C84u: goto label_1b2c84;
            case 0x1B2C88u: goto label_1b2c88;
            case 0x1B2C8Cu: goto label_1b2c8c;
            case 0x1B2C90u: goto label_1b2c90;
            case 0x1B2C94u: goto label_1b2c94;
            case 0x1B2C98u: goto label_1b2c98;
            case 0x1B2C9Cu: goto label_1b2c9c;
            case 0x1B2CA0u: goto label_1b2ca0;
            case 0x1B2CA4u: goto label_1b2ca4;
            case 0x1B2CA8u: goto label_1b2ca8;
            case 0x1B2CACu: goto label_1b2cac;
            case 0x1B2CB0u: goto label_1b2cb0;
            case 0x1B2CB4u: goto label_1b2cb4;
            case 0x1B2CB8u: goto label_1b2cb8;
            case 0x1B2CBCu: goto label_1b2cbc;
            case 0x1B2CC0u: goto label_1b2cc0;
            case 0x1B2CC4u: goto label_1b2cc4;
            case 0x1B2CC8u: goto label_1b2cc8;
            case 0x1B2CCCu: goto label_1b2ccc;
            case 0x1B2CD0u: goto label_1b2cd0;
            case 0x1B2CD4u: goto label_1b2cd4;
            case 0x1B2CD8u: goto label_1b2cd8;
            case 0x1B2CDCu: goto label_1b2cdc;
            case 0x1B2CE0u: goto label_1b2ce0;
            case 0x1B2CE4u: goto label_1b2ce4;
            case 0x1B2CE8u: goto label_1b2ce8;
            case 0x1B2CECu: goto label_1b2cec;
            case 0x1B2CF0u: goto label_1b2cf0;
            case 0x1B2CF4u: goto label_1b2cf4;
            case 0x1B2CF8u: goto label_1b2cf8;
            case 0x1B2CFCu: goto label_1b2cfc;
            case 0x1B2D00u: goto label_1b2d00;
            case 0x1B2D04u: goto label_1b2d04;
            case 0x1B2D08u: goto label_1b2d08;
            case 0x1B2D0Cu: goto label_1b2d0c;
            case 0x1B2D10u: goto label_1b2d10;
            case 0x1B2D14u: goto label_1b2d14;
            case 0x1B2D18u: goto label_1b2d18;
            case 0x1B2D1Cu: goto label_1b2d1c;
            case 0x1B2D20u: goto label_1b2d20;
            case 0x1B2D24u: goto label_1b2d24;
            case 0x1B2D28u: goto label_1b2d28;
            case 0x1B2D2Cu: goto label_1b2d2c;
            case 0x1B2D30u: goto label_1b2d30;
            case 0x1B2D34u: goto label_1b2d34;
            case 0x1B2D38u: goto label_1b2d38;
            case 0x1B2D3Cu: goto label_1b2d3c;
            case 0x1B2D40u: goto label_1b2d40;
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D48u: goto label_1b2d48;
            case 0x1B2D4Cu: goto label_1b2d4c;
            case 0x1B2D50u: goto label_1b2d50;
            case 0x1B2D54u: goto label_1b2d54;
            case 0x1B2D58u: goto label_1b2d58;
            case 0x1B2D5Cu: goto label_1b2d5c;
            case 0x1B2D60u: goto label_1b2d60;
            case 0x1B2D64u: goto label_1b2d64;
            case 0x1B2D68u: goto label_1b2d68;
            case 0x1B2D6Cu: goto label_1b2d6c;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2D74u: goto label_1b2d74;
            case 0x1B2D78u: goto label_1b2d78;
            case 0x1B2D7Cu: goto label_1b2d7c;
            case 0x1B2D80u: goto label_1b2d80;
            case 0x1B2D84u: goto label_1b2d84;
            case 0x1B2D88u: goto label_1b2d88;
            case 0x1B2D8Cu: goto label_1b2d8c;
            case 0x1B2D90u: goto label_1b2d90;
            case 0x1B2D94u: goto label_1b2d94;
            case 0x1B2D98u: goto label_1b2d98;
            case 0x1B2D9Cu: goto label_1b2d9c;
            case 0x1B2DA0u: goto label_1b2da0;
            case 0x1B2DA4u: goto label_1b2da4;
            case 0x1B2DA8u: goto label_1b2da8;
            case 0x1B2DACu: goto label_1b2dac;
            case 0x1B2DB0u: goto label_1b2db0;
            case 0x1B2DB4u: goto label_1b2db4;
            case 0x1B2DB8u: goto label_1b2db8;
            case 0x1B2DBCu: goto label_1b2dbc;
            case 0x1B2DC0u: goto label_1b2dc0;
            case 0x1B2DC4u: goto label_1b2dc4;
            case 0x1B2DC8u: goto label_1b2dc8;
            case 0x1B2DCCu: goto label_1b2dcc;
            case 0x1B2DD0u: goto label_1b2dd0;
            case 0x1B2DD4u: goto label_1b2dd4;
            case 0x1B2DD8u: goto label_1b2dd8;
            case 0x1B2DDCu: goto label_1b2ddc;
            case 0x1B2DE0u: goto label_1b2de0;
            case 0x1B2DE4u: goto label_1b2de4;
            case 0x1B2DE8u: goto label_1b2de8;
            case 0x1B2DECu: goto label_1b2dec;
            case 0x1B2DF0u: goto label_1b2df0;
            case 0x1B2DF4u: goto label_1b2df4;
            case 0x1B2DF8u: goto label_1b2df8;
            case 0x1B2DFCu: goto label_1b2dfc;
            case 0x1B2E00u: goto label_1b2e00;
            case 0x1B2E04u: goto label_1b2e04;
            case 0x1B2E08u: goto label_1b2e08;
            case 0x1B2E0Cu: goto label_1b2e0c;
            case 0x1B2E10u: goto label_1b2e10;
            case 0x1B2E14u: goto label_1b2e14;
            case 0x1B2E18u: goto label_1b2e18;
            case 0x1B2E1Cu: goto label_1b2e1c;
            case 0x1B2E20u: goto label_1b2e20;
            case 0x1B2E24u: goto label_1b2e24;
            case 0x1B2E28u: goto label_1b2e28;
            case 0x1B2E2Cu: goto label_1b2e2c;
            case 0x1B2E30u: goto label_1b2e30;
            case 0x1B2E34u: goto label_1b2e34;
            case 0x1B2E38u: goto label_1b2e38;
            case 0x1B2E3Cu: goto label_1b2e3c;
            case 0x1B2E40u: goto label_1b2e40;
            case 0x1B2E44u: goto label_1b2e44;
            case 0x1B2E48u: goto label_1b2e48;
            case 0x1B2E4Cu: goto label_1b2e4c;
            case 0x1B2E50u: goto label_1b2e50;
            case 0x1B2E54u: goto label_1b2e54;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E5Cu: goto label_1b2e5c;
            case 0x1B2E60u: goto label_1b2e60;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2E68u: goto label_1b2e68;
            case 0x1B2E6Cu: goto label_1b2e6c;
            case 0x1B2E70u: goto label_1b2e70;
            case 0x1B2E74u: goto label_1b2e74;
            case 0x1B2E78u: goto label_1b2e78;
            case 0x1B2E7Cu: goto label_1b2e7c;
            case 0x1B2E80u: goto label_1b2e80;
            case 0x1B2E84u: goto label_1b2e84;
            case 0x1B2E88u: goto label_1b2e88;
            case 0x1B2E8Cu: goto label_1b2e8c;
            case 0x1B2E90u: goto label_1b2e90;
            case 0x1B2E94u: goto label_1b2e94;
            case 0x1B2E98u: goto label_1b2e98;
            case 0x1B2E9Cu: goto label_1b2e9c;
            case 0x1B2EA0u: goto label_1b2ea0;
            case 0x1B2EA4u: goto label_1b2ea4;
            case 0x1B2EA8u: goto label_1b2ea8;
            case 0x1B2EACu: goto label_1b2eac;
            case 0x1B2EB0u: goto label_1b2eb0;
            case 0x1B2EB4u: goto label_1b2eb4;
            case 0x1B2EB8u: goto label_1b2eb8;
            case 0x1B2EBCu: goto label_1b2ebc;
            case 0x1B2EC0u: goto label_1b2ec0;
            case 0x1B2EC4u: goto label_1b2ec4;
            case 0x1B2EC8u: goto label_1b2ec8;
            case 0x1B2ECCu: goto label_1b2ecc;
            case 0x1B2ED0u: goto label_1b2ed0;
            case 0x1B2ED4u: goto label_1b2ed4;
            case 0x1B2ED8u: goto label_1b2ed8;
            case 0x1B2EDCu: goto label_1b2edc;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2EE4u: goto label_1b2ee4;
            case 0x1B2EE8u: goto label_1b2ee8;
            case 0x1B2EECu: goto label_1b2eec;
            case 0x1B2EF0u: goto label_1b2ef0;
            case 0x1B2EF4u: goto label_1b2ef4;
            case 0x1B2EF8u: goto label_1b2ef8;
            case 0x1B2EFCu: goto label_1b2efc;
            case 0x1B2F00u: goto label_1b2f00;
            case 0x1B2F04u: goto label_1b2f04;
            case 0x1B2F08u: goto label_1b2f08;
            case 0x1B2F0Cu: goto label_1b2f0c;
            case 0x1B2F10u: goto label_1b2f10;
            case 0x1B2F14u: goto label_1b2f14;
            case 0x1B2F18u: goto label_1b2f18;
            case 0x1B2F1Cu: goto label_1b2f1c;
            case 0x1B2F20u: goto label_1b2f20;
            case 0x1B2F24u: goto label_1b2f24;
            case 0x1B2F28u: goto label_1b2f28;
            case 0x1B2F2Cu: goto label_1b2f2c;
            case 0x1B2F30u: goto label_1b2f30;
            case 0x1B2F34u: goto label_1b2f34;
            case 0x1B2F38u: goto label_1b2f38;
            case 0x1B2F3Cu: goto label_1b2f3c;
            case 0x1B2F40u: goto label_1b2f40;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F48u: goto label_1b2f48;
            case 0x1B2F4Cu: goto label_1b2f4c;
            case 0x1B2F50u: goto label_1b2f50;
            case 0x1B2F54u: goto label_1b2f54;
            case 0x1B2F58u: goto label_1b2f58;
            case 0x1B2F5Cu: goto label_1b2f5c;
            case 0x1B2F60u: goto label_1b2f60;
            case 0x1B2F64u: goto label_1b2f64;
            case 0x1B2F68u: goto label_1b2f68;
            case 0x1B2F6Cu: goto label_1b2f6c;
            case 0x1B2F70u: goto label_1b2f70;
            case 0x1B2F74u: goto label_1b2f74;
            case 0x1B2F78u: goto label_1b2f78;
            case 0x1B2F7Cu: goto label_1b2f7c;
            case 0x1B2F80u: goto label_1b2f80;
            case 0x1B2F84u: goto label_1b2f84;
            case 0x1B2F88u: goto label_1b2f88;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F90u: goto label_1b2f90;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2F98u: goto label_1b2f98;
            case 0x1B2F9Cu: goto label_1b2f9c;
            case 0x1B2FA0u: goto label_1b2fa0;
            case 0x1B2FA4u: goto label_1b2fa4;
            case 0x1B2FA8u: goto label_1b2fa8;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FB4u: goto label_1b2fb4;
            case 0x1B2FB8u: goto label_1b2fb8;
            case 0x1B2FBCu: goto label_1b2fbc;
            case 0x1B2FC0u: goto label_1b2fc0;
            case 0x1B2FC4u: goto label_1b2fc4;
            case 0x1B2FC8u: goto label_1b2fc8;
            case 0x1B2FCCu: goto label_1b2fcc;
            case 0x1B2FD0u: goto label_1b2fd0;
            case 0x1B2FD4u: goto label_1b2fd4;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B2FDCu: goto label_1b2fdc;
            case 0x1B2FE0u: goto label_1b2fe0;
            case 0x1B2FE4u: goto label_1b2fe4;
            case 0x1B2FE8u: goto label_1b2fe8;
            case 0x1B2FECu: goto label_1b2fec;
            case 0x1B2FF0u: goto label_1b2ff0;
            case 0x1B2FF4u: goto label_1b2ff4;
            case 0x1B2FF8u: goto label_1b2ff8;
            case 0x1B2FFCu: goto label_1b2ffc;
            case 0x1B3000u: goto label_1b3000;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B3008u: goto label_1b3008;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3010u: goto label_1b3010;
            case 0x1B3014u: goto label_1b3014;
            case 0x1B3018u: goto label_1b3018;
            case 0x1B301Cu: goto label_1b301c;
            case 0x1B3020u: goto label_1b3020;
            case 0x1B3024u: goto label_1b3024;
            case 0x1B3028u: goto label_1b3028;
            case 0x1B302Cu: goto label_1b302c;
            case 0x1B3030u: goto label_1b3030;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B303Cu: goto label_1b303c;
            case 0x1B3040u: goto label_1b3040;
            case 0x1B3044u: goto label_1b3044;
            case 0x1B3048u: goto label_1b3048;
            case 0x1B304Cu: goto label_1b304c;
            case 0x1B3050u: goto label_1b3050;
            case 0x1B3054u: goto label_1b3054;
            case 0x1B3058u: goto label_1b3058;
            case 0x1B305Cu: goto label_1b305c;
            case 0x1B3060u: goto label_1b3060;
            case 0x1B3064u: goto label_1b3064;
            case 0x1B3068u: goto label_1b3068;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3070u: goto label_1b3070;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B3078u: goto label_1b3078;
            case 0x1B307Cu: goto label_1b307c;
            case 0x1B3080u: goto label_1b3080;
            case 0x1B3084u: goto label_1b3084;
            case 0x1B3088u: goto label_1b3088;
            case 0x1B308Cu: goto label_1b308c;
            case 0x1B3090u: goto label_1b3090;
            case 0x1B3094u: goto label_1b3094;
            case 0x1B3098u: goto label_1b3098;
            case 0x1B309Cu: goto label_1b309c;
            case 0x1B30A0u: goto label_1b30a0;
            case 0x1B30A4u: goto label_1b30a4;
            case 0x1B30A8u: goto label_1b30a8;
            case 0x1B30ACu: goto label_1b30ac;
            case 0x1B30B0u: goto label_1b30b0;
            case 0x1B30B4u: goto label_1b30b4;
            case 0x1B30B8u: goto label_1b30b8;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C0u: goto label_1b30c0;
            case 0x1B30C4u: goto label_1b30c4;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B30CCu: goto label_1b30cc;
            case 0x1B30D0u: goto label_1b30d0;
            case 0x1B30D4u: goto label_1b30d4;
            case 0x1B30D8u: goto label_1b30d8;
            case 0x1B30DCu: goto label_1b30dc;
            case 0x1B30E0u: goto label_1b30e0;
            case 0x1B30E4u: goto label_1b30e4;
            case 0x1B30E8u: goto label_1b30e8;
            case 0x1B30ECu: goto label_1b30ec;
            case 0x1B30F0u: goto label_1b30f0;
            case 0x1B30F4u: goto label_1b30f4;
            case 0x1B30F8u: goto label_1b30f8;
            case 0x1B30FCu: goto label_1b30fc;
            case 0x1B3100u: goto label_1b3100;
            case 0x1B3104u: goto label_1b3104;
            case 0x1B3108u: goto label_1b3108;
            case 0x1B310Cu: goto label_1b310c;
            case 0x1B3110u: goto label_1b3110;
            case 0x1B3114u: goto label_1b3114;
            case 0x1B3118u: goto label_1b3118;
            case 0x1B311Cu: goto label_1b311c;
            case 0x1B3120u: goto label_1b3120;
            case 0x1B3124u: goto label_1b3124;
            case 0x1B3128u: goto label_1b3128;
            case 0x1B312Cu: goto label_1b312c;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3134u: goto label_1b3134;
            case 0x1B3138u: goto label_1b3138;
            case 0x1B313Cu: goto label_1b313c;
            case 0x1B3140u: goto label_1b3140;
            case 0x1B3144u: goto label_1b3144;
            case 0x1B3148u: goto label_1b3148;
            case 0x1B314Cu: goto label_1b314c;
            case 0x1B3150u: goto label_1b3150;
            case 0x1B3154u: goto label_1b3154;
            case 0x1B3158u: goto label_1b3158;
            case 0x1B315Cu: goto label_1b315c;
            case 0x1B3160u: goto label_1b3160;
            case 0x1B3164u: goto label_1b3164;
            case 0x1B3168u: goto label_1b3168;
            case 0x1B316Cu: goto label_1b316c;
            case 0x1B3170u: goto label_1b3170;
            case 0x1B3174u: goto label_1b3174;
            case 0x1B3178u: goto label_1b3178;
            case 0x1B317Cu: goto label_1b317c;
            case 0x1B3180u: goto label_1b3180;
            case 0x1B3184u: goto label_1b3184;
            case 0x1B3188u: goto label_1b3188;
            case 0x1B318Cu: goto label_1b318c;
            case 0x1B3190u: goto label_1b3190;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B3198u: goto label_1b3198;
            case 0x1B319Cu: goto label_1b319c;
            case 0x1B31A0u: goto label_1b31a0;
            case 0x1B31A4u: goto label_1b31a4;
            case 0x1B31A8u: goto label_1b31a8;
            case 0x1B31ACu: goto label_1b31ac;
            case 0x1B31B0u: goto label_1b31b0;
            case 0x1B31B4u: goto label_1b31b4;
            case 0x1B31B8u: goto label_1b31b8;
            case 0x1B31BCu: goto label_1b31bc;
            case 0x1B31C0u: goto label_1b31c0;
            case 0x1B31C4u: goto label_1b31c4;
            case 0x1B31C8u: goto label_1b31c8;
            case 0x1B31CCu: goto label_1b31cc;
            case 0x1B31D0u: goto label_1b31d0;
            case 0x1B31D4u: goto label_1b31d4;
            case 0x1B31D8u: goto label_1b31d8;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E0u: goto label_1b31e0;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31E8u: goto label_1b31e8;
            case 0x1B31ECu: goto label_1b31ec;
            case 0x1B31F0u: goto label_1b31f0;
            case 0x1B31F4u: goto label_1b31f4;
            case 0x1B31F8u: goto label_1b31f8;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3204u: goto label_1b3204;
            case 0x1B3208u: goto label_1b3208;
            case 0x1B320Cu: goto label_1b320c;
            case 0x1B3210u: goto label_1b3210;
            case 0x1B3214u: goto label_1b3214;
            case 0x1B3218u: goto label_1b3218;
            case 0x1B321Cu: goto label_1b321c;
            case 0x1B3220u: goto label_1b3220;
            case 0x1B3224u: goto label_1b3224;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B322Cu: goto label_1b322c;
            case 0x1B3230u: goto label_1b3230;
            case 0x1B3234u: goto label_1b3234;
            case 0x1B3238u: goto label_1b3238;
            case 0x1B323Cu: goto label_1b323c;
            case 0x1B3240u: goto label_1b3240;
            case 0x1B3244u: goto label_1b3244;
            case 0x1B3248u: goto label_1b3248;
            case 0x1B324Cu: goto label_1b324c;
            case 0x1B3250u: goto label_1b3250;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B3258u: goto label_1b3258;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3260u: goto label_1b3260;
            case 0x1B3264u: goto label_1b3264;
            case 0x1B3268u: goto label_1b3268;
            case 0x1B326Cu: goto label_1b326c;
            case 0x1B3270u: goto label_1b3270;
            case 0x1B3274u: goto label_1b3274;
            case 0x1B3278u: goto label_1b3278;
            case 0x1B327Cu: goto label_1b327c;
            case 0x1B3280u: goto label_1b3280;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B328Cu: goto label_1b328c;
            case 0x1B3290u: goto label_1b3290;
            case 0x1B3294u: goto label_1b3294;
            case 0x1B3298u: goto label_1b3298;
            case 0x1B329Cu: goto label_1b329c;
            case 0x1B32A0u: goto label_1b32a0;
            case 0x1B32A4u: goto label_1b32a4;
            case 0x1B32A8u: goto label_1b32a8;
            case 0x1B32ACu: goto label_1b32ac;
            case 0x1B32B0u: goto label_1b32b0;
            case 0x1B32B4u: goto label_1b32b4;
            case 0x1B32B8u: goto label_1b32b8;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C0u: goto label_1b32c0;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B32C8u: goto label_1b32c8;
            case 0x1B32CCu: goto label_1b32cc;
            case 0x1B32D0u: goto label_1b32d0;
            case 0x1B32D4u: goto label_1b32d4;
            case 0x1B32D8u: goto label_1b32d8;
            case 0x1B32DCu: goto label_1b32dc;
            case 0x1B32E0u: goto label_1b32e0;
            case 0x1B32E4u: goto label_1b32e4;
            case 0x1B32E8u: goto label_1b32e8;
            case 0x1B32ECu: goto label_1b32ec;
            case 0x1B32F0u: goto label_1b32f0;
            case 0x1B32F4u: goto label_1b32f4;
            case 0x1B32F8u: goto label_1b32f8;
            case 0x1B32FCu: goto label_1b32fc;
            case 0x1B3300u: goto label_1b3300;
            case 0x1B3304u: goto label_1b3304;
            case 0x1B3308u: goto label_1b3308;
            case 0x1B330Cu: goto label_1b330c;
            case 0x1B3310u: goto label_1b3310;
            case 0x1B3314u: goto label_1b3314;
            case 0x1B3318u: goto label_1b3318;
            case 0x1B331Cu: goto label_1b331c;
            case 0x1B3320u: goto label_1b3320;
            case 0x1B3324u: goto label_1b3324;
            case 0x1B3328u: goto label_1b3328;
            case 0x1B332Cu: goto label_1b332c;
            case 0x1B3330u: goto label_1b3330;
            case 0x1B3334u: goto label_1b3334;
            case 0x1B3338u: goto label_1b3338;
            case 0x1B333Cu: goto label_1b333c;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B3344u: goto label_1b3344;
            case 0x1B3348u: goto label_1b3348;
            case 0x1B334Cu: goto label_1b334c;
            case 0x1B3350u: goto label_1b3350;
            case 0x1B3354u: goto label_1b3354;
            case 0x1B3358u: goto label_1b3358;
            case 0x1B335Cu: goto label_1b335c;
            case 0x1B3360u: goto label_1b3360;
            case 0x1B3364u: goto label_1b3364;
            case 0x1B3368u: goto label_1b3368;
            case 0x1B336Cu: goto label_1b336c;
            case 0x1B3370u: goto label_1b3370;
            case 0x1B3374u: goto label_1b3374;
            case 0x1B3378u: goto label_1b3378;
            case 0x1B337Cu: goto label_1b337c;
            case 0x1B3380u: goto label_1b3380;
            case 0x1B3384u: goto label_1b3384;
            case 0x1B3388u: goto label_1b3388;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            case 0x1B3394u: goto label_1b3394;
            case 0x1B3398u: goto label_1b3398;
            case 0x1B339Cu: goto label_1b339c;
            case 0x1B33A0u: goto label_1b33a0;
            case 0x1B33A4u: goto label_1b33a4;
            case 0x1B33A8u: goto label_1b33a8;
            case 0x1B33ACu: goto label_1b33ac;
            case 0x1B33B0u: goto label_1b33b0;
            case 0x1B33B4u: goto label_1b33b4;
            case 0x1B33B8u: goto label_1b33b8;
            case 0x1B33BCu: goto label_1b33bc;
            case 0x1B33C0u: goto label_1b33c0;
            case 0x1B33C4u: goto label_1b33c4;
            case 0x1B33C8u: goto label_1b33c8;
            case 0x1B33CCu: goto label_1b33cc;
            case 0x1B33D0u: goto label_1b33d0;
            case 0x1B33D4u: goto label_1b33d4;
            case 0x1B33D8u: goto label_1b33d8;
            case 0x1B33DCu: goto label_1b33dc;
            case 0x1B33E0u: goto label_1b33e0;
            case 0x1B33E4u: goto label_1b33e4;
            case 0x1B33E8u: goto label_1b33e8;
            case 0x1B33ECu: goto label_1b33ec;
            case 0x1B33F0u: goto label_1b33f0;
            case 0x1B33F4u: goto label_1b33f4;
            case 0x1B33F8u: goto label_1b33f8;
            case 0x1B33FCu: goto label_1b33fc;
            case 0x1B3400u: goto label_1b3400;
            case 0x1B3404u: goto label_1b3404;
            case 0x1B3408u: goto label_1b3408;
            case 0x1B340Cu: goto label_1b340c;
            case 0x1B3410u: goto label_1b3410;
            case 0x1B3414u: goto label_1b3414;
            case 0x1B3418u: goto label_1b3418;
            case 0x1B341Cu: goto label_1b341c;
            case 0x1B3420u: goto label_1b3420;
            case 0x1B3424u: goto label_1b3424;
            case 0x1B3428u: goto label_1b3428;
            case 0x1B342Cu: goto label_1b342c;
            case 0x1B3430u: goto label_1b3430;
            case 0x1B3434u: goto label_1b3434;
            case 0x1B3438u: goto label_1b3438;
            case 0x1B343Cu: goto label_1b343c;
            case 0x1B3440u: goto label_1b3440;
            case 0x1B3444u: goto label_1b3444;
            case 0x1B3448u: goto label_1b3448;
            case 0x1B344Cu: goto label_1b344c;
            case 0x1B3450u: goto label_1b3450;
            case 0x1B3454u: goto label_1b3454;
            case 0x1B3458u: goto label_1b3458;
            case 0x1B345Cu: goto label_1b345c;
            case 0x1B3460u: goto label_1b3460;
            case 0x1B3464u: goto label_1b3464;
            case 0x1B3468u: goto label_1b3468;
            case 0x1B346Cu: goto label_1b346c;
            case 0x1B3470u: goto label_1b3470;
            case 0x1B3474u: goto label_1b3474;
            case 0x1B3478u: goto label_1b3478;
            case 0x1B347Cu: goto label_1b347c;
            case 0x1B3480u: goto label_1b3480;
            case 0x1B3484u: goto label_1b3484;
            case 0x1B3488u: goto label_1b3488;
            case 0x1B348Cu: goto label_1b348c;
            case 0x1B3490u: goto label_1b3490;
            case 0x1B3494u: goto label_1b3494;
            case 0x1B3498u: goto label_1b3498;
            case 0x1B349Cu: goto label_1b349c;
            case 0x1B34A0u: goto label_1b34a0;
            case 0x1B34A4u: goto label_1b34a4;
            case 0x1B34A8u: goto label_1b34a8;
            case 0x1B34ACu: goto label_1b34ac;
            case 0x1B34B0u: goto label_1b34b0;
            case 0x1B34B4u: goto label_1b34b4;
            case 0x1B34B8u: goto label_1b34b8;
            case 0x1B34BCu: goto label_1b34bc;
            case 0x1B34C0u: goto label_1b34c0;
            case 0x1B34C4u: goto label_1b34c4;
            case 0x1B34C8u: goto label_1b34c8;
            case 0x1B34CCu: goto label_1b34cc;
            case 0x1B34D0u: goto label_1b34d0;
            case 0x1B34D4u: goto label_1b34d4;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34DCu: goto label_1b34dc;
            case 0x1B34E0u: goto label_1b34e0;
            case 0x1B34E4u: goto label_1b34e4;
            case 0x1B34E8u: goto label_1b34e8;
            case 0x1B34ECu: goto label_1b34ec;
            case 0x1B34F0u: goto label_1b34f0;
            case 0x1B34F4u: goto label_1b34f4;
            case 0x1B34F8u: goto label_1b34f8;
            case 0x1B34FCu: goto label_1b34fc;
            case 0x1B3500u: goto label_1b3500;
            case 0x1B3504u: goto label_1b3504;
            case 0x1B3508u: goto label_1b3508;
            case 0x1B350Cu: goto label_1b350c;
            case 0x1B3510u: goto label_1b3510;
            case 0x1B3514u: goto label_1b3514;
            case 0x1B3518u: goto label_1b3518;
            case 0x1B351Cu: goto label_1b351c;
            case 0x1B3520u: goto label_1b3520;
            case 0x1B3524u: goto label_1b3524;
            case 0x1B3528u: goto label_1b3528;
            case 0x1B352Cu: goto label_1b352c;
            case 0x1B3530u: goto label_1b3530;
            case 0x1B3534u: goto label_1b3534;
            case 0x1B3538u: goto label_1b3538;
            case 0x1B353Cu: goto label_1b353c;
            case 0x1B3540u: goto label_1b3540;
            case 0x1B3544u: goto label_1b3544;
            case 0x1B3548u: goto label_1b3548;
            case 0x1B354Cu: goto label_1b354c;
            case 0x1B3550u: goto label_1b3550;
            case 0x1B3554u: goto label_1b3554;
            case 0x1B3558u: goto label_1b3558;
            case 0x1B355Cu: goto label_1b355c;
            case 0x1B3560u: goto label_1b3560;
            case 0x1B3564u: goto label_1b3564;
            case 0x1B3568u: goto label_1b3568;
            case 0x1B356Cu: goto label_1b356c;
            case 0x1B3570u: goto label_1b3570;
            case 0x1B3574u: goto label_1b3574;
            case 0x1B3578u: goto label_1b3578;
            case 0x1B357Cu: goto label_1b357c;
            case 0x1B3580u: goto label_1b3580;
            case 0x1B3584u: goto label_1b3584;
            case 0x1B3588u: goto label_1b3588;
            case 0x1B358Cu: goto label_1b358c;
            case 0x1B3590u: goto label_1b3590;
            case 0x1B3594u: goto label_1b3594;
            case 0x1B3598u: goto label_1b3598;
            case 0x1B359Cu: goto label_1b359c;
            case 0x1B35A0u: goto label_1b35a0;
            case 0x1B35A4u: goto label_1b35a4;
            case 0x1B35A8u: goto label_1b35a8;
            case 0x1B35ACu: goto label_1b35ac;
            case 0x1B35B0u: goto label_1b35b0;
            case 0x1B35B4u: goto label_1b35b4;
            case 0x1B35B8u: goto label_1b35b8;
            case 0x1B35BCu: goto label_1b35bc;
            case 0x1B35C0u: goto label_1b35c0;
            case 0x1B35C4u: goto label_1b35c4;
            case 0x1B35C8u: goto label_1b35c8;
            case 0x1B35CCu: goto label_1b35cc;
            case 0x1B35D0u: goto label_1b35d0;
            case 0x1B35D4u: goto label_1b35d4;
            case 0x1B35D8u: goto label_1b35d8;
            case 0x1B35DCu: goto label_1b35dc;
            case 0x1B35E0u: goto label_1b35e0;
            case 0x1B35E4u: goto label_1b35e4;
            case 0x1B35E8u: goto label_1b35e8;
            case 0x1B35ECu: goto label_1b35ec;
            case 0x1B35F0u: goto label_1b35f0;
            case 0x1B35F4u: goto label_1b35f4;
            case 0x1B35F8u: goto label_1b35f8;
            case 0x1B35FCu: goto label_1b35fc;
            case 0x1B3600u: goto label_1b3600;
            case 0x1B3604u: goto label_1b3604;
            case 0x1B3608u: goto label_1b3608;
            case 0x1B360Cu: goto label_1b360c;
            case 0x1B3610u: goto label_1b3610;
            case 0x1B3614u: goto label_1b3614;
            case 0x1B3618u: goto label_1b3618;
            case 0x1B361Cu: goto label_1b361c;
            case 0x1B3620u: goto label_1b3620;
            case 0x1B3624u: goto label_1b3624;
            case 0x1B3628u: goto label_1b3628;
            case 0x1B362Cu: goto label_1b362c;
            case 0x1B3630u: goto label_1b3630;
            case 0x1B3634u: goto label_1b3634;
            case 0x1B3638u: goto label_1b3638;
            case 0x1B363Cu: goto label_1b363c;
            case 0x1B3640u: goto label_1b3640;
            case 0x1B3644u: goto label_1b3644;
            case 0x1B3648u: goto label_1b3648;
            case 0x1B364Cu: goto label_1b364c;
            case 0x1B3650u: goto label_1b3650;
            case 0x1B3654u: goto label_1b3654;
            case 0x1B3658u: goto label_1b3658;
            case 0x1B365Cu: goto label_1b365c;
            case 0x1B3660u: goto label_1b3660;
            case 0x1B3664u: goto label_1b3664;
            case 0x1B3668u: goto label_1b3668;
            case 0x1B366Cu: goto label_1b366c;
            case 0x1B3670u: goto label_1b3670;
            case 0x1B3674u: goto label_1b3674;
            case 0x1B3678u: goto label_1b3678;
            case 0x1B367Cu: goto label_1b367c;
            case 0x1B3680u: goto label_1b3680;
            case 0x1B3684u: goto label_1b3684;
            case 0x1B3688u: goto label_1b3688;
            case 0x1B368Cu: goto label_1b368c;
            case 0x1B3690u: goto label_1b3690;
            case 0x1B3694u: goto label_1b3694;
            case 0x1B3698u: goto label_1b3698;
            case 0x1B369Cu: goto label_1b369c;
            case 0x1B36A0u: goto label_1b36a0;
            case 0x1B36A4u: goto label_1b36a4;
            case 0x1B36A8u: goto label_1b36a8;
            case 0x1B36ACu: goto label_1b36ac;
            case 0x1B36B0u: goto label_1b36b0;
            case 0x1B36B4u: goto label_1b36b4;
            case 0x1B36B8u: goto label_1b36b8;
            case 0x1B36BCu: goto label_1b36bc;
            case 0x1B36C0u: goto label_1b36c0;
            case 0x1B36C4u: goto label_1b36c4;
            case 0x1B36C8u: goto label_1b36c8;
            case 0x1B36CCu: goto label_1b36cc;
            case 0x1B36D0u: goto label_1b36d0;
            case 0x1B36D4u: goto label_1b36d4;
            case 0x1B36D8u: goto label_1b36d8;
            case 0x1B36DCu: goto label_1b36dc;
            case 0x1B36E0u: goto label_1b36e0;
            case 0x1B36E4u: goto label_1b36e4;
            case 0x1B36E8u: goto label_1b36e8;
            case 0x1B36ECu: goto label_1b36ec;
            case 0x1B36F0u: goto label_1b36f0;
            case 0x1B36F4u: goto label_1b36f4;
            case 0x1B36F8u: goto label_1b36f8;
            case 0x1B36FCu: goto label_1b36fc;
            case 0x1B3700u: goto label_1b3700;
            case 0x1B3704u: goto label_1b3704;
            case 0x1B3708u: goto label_1b3708;
            case 0x1B370Cu: goto label_1b370c;
            case 0x1B3710u: goto label_1b3710;
            case 0x1B3714u: goto label_1b3714;
            case 0x1B3718u: goto label_1b3718;
            case 0x1B371Cu: goto label_1b371c;
            case 0x1B3720u: goto label_1b3720;
            case 0x1B3724u: goto label_1b3724;
            case 0x1B3728u: goto label_1b3728;
            case 0x1B372Cu: goto label_1b372c;
            case 0x1B3730u: goto label_1b3730;
            case 0x1B3734u: goto label_1b3734;
            case 0x1B3738u: goto label_1b3738;
            case 0x1B373Cu: goto label_1b373c;
            case 0x1B3740u: goto label_1b3740;
            case 0x1B3744u: goto label_1b3744;
            case 0x1B3748u: goto label_1b3748;
            case 0x1B374Cu: goto label_1b374c;
            case 0x1B3750u: goto label_1b3750;
            case 0x1B3754u: goto label_1b3754;
            case 0x1B3758u: goto label_1b3758;
            case 0x1B375Cu: goto label_1b375c;
            case 0x1B3760u: goto label_1b3760;
            case 0x1B3764u: goto label_1b3764;
            case 0x1B3768u: goto label_1b3768;
            case 0x1B376Cu: goto label_1b376c;
            case 0x1B3770u: goto label_1b3770;
            case 0x1B3774u: goto label_1b3774;
            case 0x1B3778u: goto label_1b3778;
            case 0x1B377Cu: goto label_1b377c;
            case 0x1B3780u: goto label_1b3780;
            case 0x1B3784u: goto label_1b3784;
            case 0x1B3788u: goto label_1b3788;
            case 0x1B378Cu: goto label_1b378c;
            case 0x1B3790u: goto label_1b3790;
            case 0x1B3794u: goto label_1b3794;
            case 0x1B3798u: goto label_1b3798;
            case 0x1B379Cu: goto label_1b379c;
            case 0x1B37A0u: goto label_1b37a0;
            case 0x1B37A4u: goto label_1b37a4;
            case 0x1B37A8u: goto label_1b37a8;
            case 0x1B37ACu: goto label_1b37ac;
            case 0x1B37B0u: goto label_1b37b0;
            case 0x1B37B4u: goto label_1b37b4;
            case 0x1B37B8u: goto label_1b37b8;
            case 0x1B37BCu: goto label_1b37bc;
            case 0x1B37C0u: goto label_1b37c0;
            case 0x1B37C4u: goto label_1b37c4;
            case 0x1B37C8u: goto label_1b37c8;
            case 0x1B37CCu: goto label_1b37cc;
            case 0x1B37D0u: goto label_1b37d0;
            case 0x1B37D4u: goto label_1b37d4;
            case 0x1B37D8u: goto label_1b37d8;
            case 0x1B37DCu: goto label_1b37dc;
            case 0x1B37E0u: goto label_1b37e0;
            case 0x1B37E4u: goto label_1b37e4;
            case 0x1B37E8u: goto label_1b37e8;
            case 0x1B37ECu: goto label_1b37ec;
            case 0x1B37F0u: goto label_1b37f0;
            case 0x1B37F4u: goto label_1b37f4;
            case 0x1B37F8u: goto label_1b37f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B30C4u; }
            if (ctx->pc != 0x1B30C4u) { return; }
        }
    }
    ctx->pc = 0x1B30C4u;
label_1b30c4:
    // 0x1b30c4: 0x100001c6  b           . + 4 + (0x1C6 << 2)
label_1b30c8:
    if (ctx->pc == 0x1B30C8u) {
        ctx->pc = 0x1B30CCu;
        goto label_1b30cc;
    }
    ctx->pc = 0x1B30C4u;
    {
        const bool branch_taken_0x1b30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b30c4) {
            ctx->pc = 0x1B37E0u;
            goto label_1b37e0;
        }
    }
    ctx->pc = 0x1B30CCu;
label_1b30cc:
    // 0x1b30cc: 0x0  nop
    ctx->pc = 0x1b30ccu;
    // NOP
label_1b30d0:
    // 0x1b30d0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b30d4:
    // 0x1b30d4: 0x1c4001ba  bgtz        $v0, . + 4 + (0x1BA << 2)
label_1b30d8:
    if (ctx->pc == 0x1B30D8u) {
        ctx->pc = 0x1B30DCu;
        goto label_1b30dc;
    }
    ctx->pc = 0x1B30D4u;
    {
        const bool branch_taken_0x1b30d4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b30d4) {
            ctx->pc = 0x1B37C0u;
            goto label_1b37c0;
        }
    }
    ctx->pc = 0x1B30DCu;
label_1b30dc:
    // 0x1b30dc: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b30e0:
    // 0x1b30e0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1b30e4:
    // 0x1b30e4: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1b30e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b30e8:
    // 0x1b30e8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b30e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b30ec:
    // 0x1b30ec: 0xc05d080  jal         func_174200
label_1b30f0:
    if (ctx->pc == 0x1B30F0u) {
        ctx->pc = 0x1B30F0u;
            // 0x1b30f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B30F4u;
        goto label_1b30f4;
    }
    ctx->pc = 0x1B30ECu;
    SET_GPR_U32(ctx, 31, 0x1B30F4u);
    ctx->pc = 0x1B30F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30ECu;
            // 0x1b30f0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B30F4u; }
        if (ctx->pc != 0x1B30F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B30F4u; }
        if (ctx->pc != 0x1B30F4u) { return; }
    }
    ctx->pc = 0x1B30F4u;
label_1b30f4:
    // 0x1b30f4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b30f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b30f8:
    // 0x1b30f8: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1b30fc:
    // 0x1b30fc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1b30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3100:
    // 0x1b3100: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b3100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b3104:
    // 0x1b3104: 0xc05d080  jal         func_174200
label_1b3108:
    if (ctx->pc == 0x1B3108u) {
        ctx->pc = 0x1B3108u;
            // 0x1b3108: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B310Cu;
        goto label_1b310c;
    }
    ctx->pc = 0x1B3104u;
    SET_GPR_U32(ctx, 31, 0x1B310Cu);
    ctx->pc = 0x1B3108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3104u;
            // 0x1b3108: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B310Cu; }
        if (ctx->pc != 0x1B310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B310Cu; }
        if (ctx->pc != 0x1B310Cu) { return; }
    }
    ctx->pc = 0x1B310Cu;
label_1b310c:
    // 0x1b310c: 0xc050bb4  jal         func_142ED0
label_1b3110:
    if (ctx->pc == 0x1B3110u) {
        ctx->pc = 0x1B3114u;
        goto label_1b3114;
    }
    ctx->pc = 0x1B310Cu;
    SET_GPR_U32(ctx, 31, 0x1B3114u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3114u; }
        if (ctx->pc != 0x1B3114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3114u; }
        if (ctx->pc != 0x1B3114u) { return; }
    }
    ctx->pc = 0x1B3114u;
label_1b3114:
    // 0x1b3114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b3114u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b3118:
    // 0x1b3118: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b311c:
    if (ctx->pc == 0x1B311Cu) {
        ctx->pc = 0x1B3120u;
        goto label_1b3120;
    }
    ctx->pc = 0x1B3118u;
    {
        const bool branch_taken_0x1b3118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3118) {
            ctx->pc = 0x1B3138u;
            goto label_1b3138;
        }
    }
    ctx->pc = 0x1B3120u;
label_1b3120:
    // 0x1b3120: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3124:
    // 0x1b3124: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1b3124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1b3128:
    // 0x1b3128: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1b3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b312c:
    // 0x1b312c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b312cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b3130:
    // 0x1b3130: 0xc05d080  jal         func_174200
label_1b3134:
    if (ctx->pc == 0x1B3134u) {
        ctx->pc = 0x1B3134u;
            // 0x1b3134: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B3138u;
        goto label_1b3138;
    }
    ctx->pc = 0x1B3130u;
    SET_GPR_U32(ctx, 31, 0x1B3138u);
    ctx->pc = 0x1B3134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3130u;
            // 0x1b3134: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3138u; }
        if (ctx->pc != 0x1B3138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3138u; }
        if (ctx->pc != 0x1B3138u) { return; }
    }
    ctx->pc = 0x1B3138u;
label_1b3138:
    // 0x1b3138: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b313c:
    // 0x1b313c: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3140:
    // 0x1b3140: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1b3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3144:
    // 0x1b3144: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b3144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b3148:
    // 0x1b3148: 0xc05d080  jal         func_174200
label_1b314c:
    if (ctx->pc == 0x1B314Cu) {
        ctx->pc = 0x1B314Cu;
            // 0x1b314c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B3150u;
        goto label_1b3150;
    }
    ctx->pc = 0x1B3148u;
    SET_GPR_U32(ctx, 31, 0x1B3150u);
    ctx->pc = 0x1B314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3148u;
            // 0x1b314c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3150u; }
        if (ctx->pc != 0x1B3150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3150u; }
        if (ctx->pc != 0x1B3150u) { return; }
    }
    ctx->pc = 0x1B3150u;
label_1b3150:
    // 0x1b3150: 0xc050bb4  jal         func_142ED0
label_1b3154:
    if (ctx->pc == 0x1B3154u) {
        ctx->pc = 0x1B3158u;
        goto label_1b3158;
    }
    ctx->pc = 0x1B3150u;
    SET_GPR_U32(ctx, 31, 0x1B3158u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3158u; }
        if (ctx->pc != 0x1B3158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3158u; }
        if (ctx->pc != 0x1B3158u) { return; }
    }
    ctx->pc = 0x1B3158u;
label_1b3158:
    // 0x1b3158: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b3158u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b315c:
    // 0x1b315c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b3160:
    if (ctx->pc == 0x1B3160u) {
        ctx->pc = 0x1B3164u;
        goto label_1b3164;
    }
    ctx->pc = 0x1B315Cu;
    {
        const bool branch_taken_0x1b315c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b315c) {
            ctx->pc = 0x1B3180u;
            goto label_1b3180;
        }
    }
    ctx->pc = 0x1B3164u;
label_1b3164:
    // 0x1b3164: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1b3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3168:
    // 0x1b3168: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1b3168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1b316c:
    // 0x1b316c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1b316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3170:
    // 0x1b3170: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b3170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b3174:
    // 0x1b3174: 0xc05d080  jal         func_174200
label_1b3178:
    if (ctx->pc == 0x1B3178u) {
        ctx->pc = 0x1B3178u;
            // 0x1b3178: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B317Cu;
        goto label_1b317c;
    }
    ctx->pc = 0x1B3174u;
    SET_GPR_U32(ctx, 31, 0x1B317Cu);
    ctx->pc = 0x1B3178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3174u;
            // 0x1b3178: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B317Cu; }
        if (ctx->pc != 0x1B317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B317Cu; }
        if (ctx->pc != 0x1B317Cu) { return; }
    }
    ctx->pc = 0x1B317Cu;
label_1b317c:
    // 0x1b317c: 0x0  nop
    ctx->pc = 0x1b317cu;
    // NOP
label_1b3180:
    // 0x1b3180: 0xc056f84  jal         func_15BE10
label_1b3184:
    if (ctx->pc == 0x1B3184u) {
        ctx->pc = 0x1B3184u;
            // 0x1b3184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3188u;
        goto label_1b3188;
    }
    ctx->pc = 0x1B3180u;
    SET_GPR_U32(ctx, 31, 0x1B3188u);
    ctx->pc = 0x1B3184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3180u;
            // 0x1b3184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3188u; }
        if (ctx->pc != 0x1B3188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3188u; }
        if (ctx->pc != 0x1B3188u) { return; }
    }
    ctx->pc = 0x1B3188u;
label_1b3188:
    // 0x1b3188: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b318c:
    if (ctx->pc == 0x1B318Cu) {
        ctx->pc = 0x1B318Cu;
            // 0x1b318c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B3190u;
        goto label_1b3190;
    }
    ctx->pc = 0x1B3188u;
    {
        const bool branch_taken_0x1b3188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3188u;
            // 0x1b318c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3188) {
            ctx->pc = 0x1B3198u;
            goto label_1b3198;
        }
    }
    ctx->pc = 0x1B3190u;
label_1b3190:
    // 0x1b3190: 0xc055124  jal         func_154490
label_1b3194:
    if (ctx->pc == 0x1B3194u) {
        ctx->pc = 0x1B3194u;
            // 0x1b3194: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1B3198u;
        goto label_1b3198;
    }
    ctx->pc = 0x1B3190u;
    SET_GPR_U32(ctx, 31, 0x1B3198u);
    ctx->pc = 0x1B3194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3190u;
            // 0x1b3194: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3198u; }
        if (ctx->pc != 0x1B3198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3198u; }
        if (ctx->pc != 0x1B3198u) { return; }
    }
    ctx->pc = 0x1B3198u;
label_1b3198:
    // 0x1b3198: 0xc056f84  jal         func_15BE10
label_1b319c:
    if (ctx->pc == 0x1B319Cu) {
        ctx->pc = 0x1B319Cu;
            // 0x1b319c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B31A0u;
        goto label_1b31a0;
    }
    ctx->pc = 0x1B3198u;
    SET_GPR_U32(ctx, 31, 0x1B31A0u);
    ctx->pc = 0x1B319Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3198u;
            // 0x1b319c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31A0u; }
        if (ctx->pc != 0x1B31A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31A0u; }
        if (ctx->pc != 0x1B31A0u) { return; }
    }
    ctx->pc = 0x1B31A0u;
label_1b31a0:
    // 0x1b31a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b31a4:
    if (ctx->pc == 0x1B31A4u) {
        ctx->pc = 0x1B31A4u;
            // 0x1b31a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B31A8u;
        goto label_1b31a8;
    }
    ctx->pc = 0x1B31A0u;
    {
        const bool branch_taken_0x1b31a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31A0u;
            // 0x1b31a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31a0) {
            ctx->pc = 0x1B31B0u;
            goto label_1b31b0;
        }
    }
    ctx->pc = 0x1B31A8u;
label_1b31a8:
    // 0x1b31a8: 0xc055124  jal         func_154490
label_1b31ac:
    if (ctx->pc == 0x1B31ACu) {
        ctx->pc = 0x1B31ACu;
            // 0x1b31ac: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1B31B0u;
        goto label_1b31b0;
    }
    ctx->pc = 0x1B31A8u;
    SET_GPR_U32(ctx, 31, 0x1B31B0u);
    ctx->pc = 0x1B31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31A8u;
            // 0x1b31ac: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31B0u; }
        if (ctx->pc != 0x1B31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31B0u; }
        if (ctx->pc != 0x1B31B0u) { return; }
    }
    ctx->pc = 0x1B31B0u;
label_1b31b0:
    // 0x1b31b0: 0xc060718  jal         func_181C60
label_1b31b4:
    if (ctx->pc == 0x1B31B4u) {
        ctx->pc = 0x1B31B4u;
            // 0x1b31b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B31B8u;
        goto label_1b31b8;
    }
    ctx->pc = 0x1B31B0u;
    SET_GPR_U32(ctx, 31, 0x1B31B8u);
    ctx->pc = 0x1B31B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31B0u;
            // 0x1b31b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31B8u; }
        if (ctx->pc != 0x1B31B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31B8u; }
        if (ctx->pc != 0x1B31B8u) { return; }
    }
    ctx->pc = 0x1B31B8u;
label_1b31b8:
    // 0x1b31b8: 0xc0656b4  jal         func_195AD0
label_1b31bc:
    if (ctx->pc == 0x1B31BCu) {
        ctx->pc = 0x1B31C0u;
        goto label_1b31c0;
    }
    ctx->pc = 0x1B31B8u;
    SET_GPR_U32(ctx, 31, 0x1B31C0u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31C0u; }
        if (ctx->pc != 0x1B31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31C0u; }
        if (ctx->pc != 0x1B31C0u) { return; }
    }
    ctx->pc = 0x1B31C0u;
label_1b31c0:
    // 0x1b31c0: 0xc050bb4  jal         func_142ED0
label_1b31c4:
    if (ctx->pc == 0x1B31C4u) {
        ctx->pc = 0x1B31C8u;
        goto label_1b31c8;
    }
    ctx->pc = 0x1B31C0u;
    SET_GPR_U32(ctx, 31, 0x1B31C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31C8u; }
        if (ctx->pc != 0x1B31C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31C8u; }
        if (ctx->pc != 0x1B31C8u) { return; }
    }
    ctx->pc = 0x1B31C8u;
label_1b31c8:
    // 0x1b31c8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b31cc:
    // 0x1b31cc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b31d0:
    // 0x1b31d0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b31d0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b31d4:
    // 0x1b31d4: 0x0  nop
    ctx->pc = 0x1b31d4u;
    // NOP
label_1b31d8:
    // 0x1b31d8: 0x0  nop
    ctx->pc = 0x1b31d8u;
    // NOP
label_1b31dc:
    // 0x1b31dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b31dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b31e0:
    // 0x1b31e0: 0xc050bb4  jal         func_142ED0
label_1b31e4:
    if (ctx->pc == 0x1B31E4u) {
        ctx->pc = 0x1B31E4u;
            // 0x1b31e4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B31E8u;
        goto label_1b31e8;
    }
    ctx->pc = 0x1B31E0u;
    SET_GPR_U32(ctx, 31, 0x1B31E8u);
    ctx->pc = 0x1B31E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31E0u;
            // 0x1b31e4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31E8u; }
        if (ctx->pc != 0x1B31E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31E8u; }
        if (ctx->pc != 0x1B31E8u) { return; }
    }
    ctx->pc = 0x1B31E8u;
label_1b31e8:
    // 0x1b31e8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b31ec:
    // 0x1b31ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b31f0:
    // 0x1b31f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b31f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b31f4:
    // 0x1b31f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b31f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b31f8:
    // 0x1b31f8: 0x0  nop
    ctx->pc = 0x1b31f8u;
    // NOP
label_1b31fc:
    // 0x1b31fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b31fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3200:
    // 0x1b3200: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1b3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3204:
    // 0x1b3204: 0x1810  mfhi        $v1
    ctx->pc = 0x1b3204u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b3208:
    // 0x1b3208: 0xc053740  jal         func_14DD00
label_1b320c:
    if (ctx->pc == 0x1B320Cu) {
        ctx->pc = 0x1B320Cu;
            // 0x1b320c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B3210u;
        goto label_1b3210;
    }
    ctx->pc = 0x1B3208u;
    SET_GPR_U32(ctx, 31, 0x1B3210u);
    ctx->pc = 0x1B320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3208u;
            // 0x1b320c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3210u; }
        if (ctx->pc != 0x1B3210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3210u; }
        if (ctx->pc != 0x1B3210u) { return; }
    }
    ctx->pc = 0x1B3210u;
label_1b3210:
    // 0x1b3210: 0xc050bb4  jal         func_142ED0
label_1b3214:
    if (ctx->pc == 0x1B3214u) {
        ctx->pc = 0x1B3218u;
        goto label_1b3218;
    }
    ctx->pc = 0x1B3210u;
    SET_GPR_U32(ctx, 31, 0x1B3218u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3218u; }
        if (ctx->pc != 0x1B3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3218u; }
        if (ctx->pc != 0x1B3218u) { return; }
    }
    ctx->pc = 0x1B3218u;
label_1b3218:
    // 0x1b3218: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b321c:
    // 0x1b321c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3220:
    // 0x1b3220: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3220u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3224:
    // 0x1b3224: 0x0  nop
    ctx->pc = 0x1b3224u;
    // NOP
label_1b3228:
    // 0x1b3228: 0x0  nop
    ctx->pc = 0x1b3228u;
    // NOP
label_1b322c:
    // 0x1b322c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b322cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3230:
    // 0x1b3230: 0xc050bb4  jal         func_142ED0
label_1b3234:
    if (ctx->pc == 0x1B3234u) {
        ctx->pc = 0x1B3234u;
            // 0x1b3234: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3238u;
        goto label_1b3238;
    }
    ctx->pc = 0x1B3230u;
    SET_GPR_U32(ctx, 31, 0x1B3238u);
    ctx->pc = 0x1B3234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3230u;
            // 0x1b3234: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3238u; }
        if (ctx->pc != 0x1B3238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3238u; }
        if (ctx->pc != 0x1B3238u) { return; }
    }
    ctx->pc = 0x1B3238u;
label_1b3238:
    // 0x1b3238: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b323c:
    // 0x1b323c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3240:
    // 0x1b3240: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3244:
    // 0x1b3244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b3244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3248:
    // 0x1b3248: 0x0  nop
    ctx->pc = 0x1b3248u;
    // NOP
label_1b324c:
    // 0x1b324c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b324cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3250:
    // 0x1b3250: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1b3250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3254:
    // 0x1b3254: 0x1810  mfhi        $v1
    ctx->pc = 0x1b3254u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b3258:
    // 0x1b3258: 0xc053740  jal         func_14DD00
label_1b325c:
    if (ctx->pc == 0x1B325Cu) {
        ctx->pc = 0x1B325Cu;
            // 0x1b325c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1B3260u;
        goto label_1b3260;
    }
    ctx->pc = 0x1B3258u;
    SET_GPR_U32(ctx, 31, 0x1B3260u);
    ctx->pc = 0x1B325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3258u;
            // 0x1b325c: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3260u; }
        if (ctx->pc != 0x1B3260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3260u; }
        if (ctx->pc != 0x1B3260u) { return; }
    }
    ctx->pc = 0x1B3260u;
label_1b3260:
    // 0x1b3260: 0xc050bb4  jal         func_142ED0
label_1b3264:
    if (ctx->pc == 0x1B3264u) {
        ctx->pc = 0x1B3268u;
        goto label_1b3268;
    }
    ctx->pc = 0x1B3260u;
    SET_GPR_U32(ctx, 31, 0x1B3268u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3268u; }
        if (ctx->pc != 0x1B3268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3268u; }
        if (ctx->pc != 0x1B3268u) { return; }
    }
    ctx->pc = 0x1B3268u;
label_1b3268:
    // 0x1b3268: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b326c:
    // 0x1b326c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3270:
    // 0x1b3270: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3270u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3274:
    // 0x1b3274: 0x0  nop
    ctx->pc = 0x1b3274u;
    // NOP
label_1b3278:
    // 0x1b3278: 0x0  nop
    ctx->pc = 0x1b3278u;
    // NOP
label_1b327c:
    // 0x1b327c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b327cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3280:
    // 0x1b3280: 0xc050bb4  jal         func_142ED0
label_1b3284:
    if (ctx->pc == 0x1B3284u) {
        ctx->pc = 0x1B3284u;
            // 0x1b3284: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3288u;
        goto label_1b3288;
    }
    ctx->pc = 0x1B3280u;
    SET_GPR_U32(ctx, 31, 0x1B3288u);
    ctx->pc = 0x1B3284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3280u;
            // 0x1b3284: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3288u; }
        if (ctx->pc != 0x1B3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3288u; }
        if (ctx->pc != 0x1B3288u) { return; }
    }
    ctx->pc = 0x1B3288u;
label_1b3288:
    // 0x1b3288: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b328c:
    // 0x1b328c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b328cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3290:
    // 0x1b3290: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3290u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3294:
    // 0x1b3294: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b3298:
    // 0x1b3298: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b329c:
    // 0x1b329c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b329cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b32a0:
    // 0x1b32a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b32a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b32a4:
    // 0x1b32a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b32a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b32a8:
    // 0x1b32a8: 0xc053740  jal         func_14DD00
label_1b32ac:
    if (ctx->pc == 0x1B32ACu) {
        ctx->pc = 0x1B32ACu;
            // 0x1b32ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B32B0u;
        goto label_1b32b0;
    }
    ctx->pc = 0x1B32A8u;
    SET_GPR_U32(ctx, 31, 0x1B32B0u);
    ctx->pc = 0x1B32ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32A8u;
            // 0x1b32ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32B0u; }
        if (ctx->pc != 0x1B32B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32B0u; }
        if (ctx->pc != 0x1B32B0u) { return; }
    }
    ctx->pc = 0x1B32B0u;
label_1b32b0:
    // 0x1b32b0: 0xc050bb4  jal         func_142ED0
label_1b32b4:
    if (ctx->pc == 0x1B32B4u) {
        ctx->pc = 0x1B32B8u;
        goto label_1b32b8;
    }
    ctx->pc = 0x1B32B0u;
    SET_GPR_U32(ctx, 31, 0x1B32B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32B8u; }
        if (ctx->pc != 0x1B32B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32B8u; }
        if (ctx->pc != 0x1B32B8u) { return; }
    }
    ctx->pc = 0x1B32B8u;
label_1b32b8:
    // 0x1b32b8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b32bc:
    // 0x1b32bc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b32c0:
    // 0x1b32c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b32c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b32c4:
    // 0x1b32c4: 0x0  nop
    ctx->pc = 0x1b32c4u;
    // NOP
label_1b32c8:
    // 0x1b32c8: 0x0  nop
    ctx->pc = 0x1b32c8u;
    // NOP
label_1b32cc:
    // 0x1b32cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1b32ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b32d0:
    // 0x1b32d0: 0xc050bb4  jal         func_142ED0
label_1b32d4:
    if (ctx->pc == 0x1B32D4u) {
        ctx->pc = 0x1B32D4u;
            // 0x1b32d4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B32D8u;
        goto label_1b32d8;
    }
    ctx->pc = 0x1B32D0u;
    SET_GPR_U32(ctx, 31, 0x1B32D8u);
    ctx->pc = 0x1B32D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32D0u;
            // 0x1b32d4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32D8u; }
        if (ctx->pc != 0x1B32D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B32D8u; }
        if (ctx->pc != 0x1B32D8u) { return; }
    }
    ctx->pc = 0x1B32D8u;
label_1b32d8:
    // 0x1b32d8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b32d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b32dc:
    // 0x1b32dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b32e0:
    // 0x1b32e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b32e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b32e4:
    // 0x1b32e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b32e8:
    // 0x1b32e8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b32e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b32ec:
    // 0x1b32ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b32ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b32f0:
    // 0x1b32f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b32f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b32f4:
    // 0x1b32f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b32f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b32f8:
    // 0x1b32f8: 0xc053740  jal         func_14DD00
label_1b32fc:
    if (ctx->pc == 0x1B32FCu) {
        ctx->pc = 0x1B32FCu;
            // 0x1b32fc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3300u;
        goto label_1b3300;
    }
    ctx->pc = 0x1B32F8u;
    SET_GPR_U32(ctx, 31, 0x1B3300u);
    ctx->pc = 0x1B32FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B32F8u;
            // 0x1b32fc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3300u; }
        if (ctx->pc != 0x1B3300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3300u; }
        if (ctx->pc != 0x1B3300u) { return; }
    }
    ctx->pc = 0x1B3300u;
label_1b3300:
    // 0x1b3300: 0xc050bb4  jal         func_142ED0
label_1b3304:
    if (ctx->pc == 0x1B3304u) {
        ctx->pc = 0x1B3308u;
        goto label_1b3308;
    }
    ctx->pc = 0x1B3300u;
    SET_GPR_U32(ctx, 31, 0x1B3308u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3308u; }
        if (ctx->pc != 0x1B3308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3308u; }
        if (ctx->pc != 0x1B3308u) { return; }
    }
    ctx->pc = 0x1B3308u;
label_1b3308:
    // 0x1b3308: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b330c:
    // 0x1b330c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3310:
    // 0x1b3310: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3310u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3314:
    // 0x1b3314: 0x0  nop
    ctx->pc = 0x1b3314u;
    // NOP
label_1b3318:
    // 0x1b3318: 0x0  nop
    ctx->pc = 0x1b3318u;
    // NOP
label_1b331c:
    // 0x1b331c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b331cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3320:
    // 0x1b3320: 0xc050bb4  jal         func_142ED0
label_1b3324:
    if (ctx->pc == 0x1B3324u) {
        ctx->pc = 0x1B3324u;
            // 0x1b3324: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3328u;
        goto label_1b3328;
    }
    ctx->pc = 0x1B3320u;
    SET_GPR_U32(ctx, 31, 0x1B3328u);
    ctx->pc = 0x1B3324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3320u;
            // 0x1b3324: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3328u; }
        if (ctx->pc != 0x1B3328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3328u; }
        if (ctx->pc != 0x1B3328u) { return; }
    }
    ctx->pc = 0x1B3328u;
label_1b3328:
    // 0x1b3328: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b332c:
    // 0x1b332c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3330:
    // 0x1b3330: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3330u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3334:
    // 0x1b3334: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b3334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b3338:
    // 0x1b3338: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b333c:
    // 0x1b333c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b333cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3340:
    // 0x1b3340: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3340u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3344:
    // 0x1b3344: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b3344u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3348:
    // 0x1b3348: 0xc053740  jal         func_14DD00
label_1b334c:
    if (ctx->pc == 0x1B334Cu) {
        ctx->pc = 0x1B334Cu;
            // 0x1b334c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3350u;
        goto label_1b3350;
    }
    ctx->pc = 0x1B3348u;
    SET_GPR_U32(ctx, 31, 0x1B3350u);
    ctx->pc = 0x1B334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3348u;
            // 0x1b334c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3350u; }
        if (ctx->pc != 0x1B3350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3350u; }
        if (ctx->pc != 0x1B3350u) { return; }
    }
    ctx->pc = 0x1B3350u;
label_1b3350:
    // 0x1b3350: 0xc050bb4  jal         func_142ED0
label_1b3354:
    if (ctx->pc == 0x1B3354u) {
        ctx->pc = 0x1B3358u;
        goto label_1b3358;
    }
    ctx->pc = 0x1B3350u;
    SET_GPR_U32(ctx, 31, 0x1B3358u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3358u; }
        if (ctx->pc != 0x1B3358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3358u; }
        if (ctx->pc != 0x1B3358u) { return; }
    }
    ctx->pc = 0x1B3358u;
label_1b3358:
    // 0x1b3358: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b335c:
    // 0x1b335c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b335cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3360:
    // 0x1b3360: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3360u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3364:
    // 0x1b3364: 0x0  nop
    ctx->pc = 0x1b3364u;
    // NOP
label_1b3368:
    // 0x1b3368: 0x0  nop
    ctx->pc = 0x1b3368u;
    // NOP
label_1b336c:
    // 0x1b336c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b336cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3370:
    // 0x1b3370: 0xc050bb4  jal         func_142ED0
label_1b3374:
    if (ctx->pc == 0x1B3374u) {
        ctx->pc = 0x1B3374u;
            // 0x1b3374: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3378u;
        goto label_1b3378;
    }
    ctx->pc = 0x1B3370u;
    SET_GPR_U32(ctx, 31, 0x1B3378u);
    ctx->pc = 0x1B3374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3370u;
            // 0x1b3374: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3378u; }
        if (ctx->pc != 0x1B3378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3378u; }
        if (ctx->pc != 0x1B3378u) { return; }
    }
    ctx->pc = 0x1B3378u;
label_1b3378:
    // 0x1b3378: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b337c:
    // 0x1b337c: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3380:
    // 0x1b3380: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3380u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3384:
    // 0x1b3384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3388:
    // 0x1b3388: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1b3388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1b338c:
    // 0x1b338c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1b338cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1b3390:
    // 0x1b3390: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b3390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b3394:
    // 0x1b3394: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b3394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3398:
    // 0x1b3398: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3398u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b339c:
    // 0x1b339c: 0xc053740  jal         func_14DD00
label_1b33a0:
    if (ctx->pc == 0x1B33A0u) {
        ctx->pc = 0x1B33A0u;
            // 0x1b33a0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B33A4u;
        goto label_1b33a4;
    }
    ctx->pc = 0x1B339Cu;
    SET_GPR_U32(ctx, 31, 0x1B33A4u);
    ctx->pc = 0x1B33A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B339Cu;
            // 0x1b33a0: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33A4u; }
        if (ctx->pc != 0x1B33A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33A4u; }
        if (ctx->pc != 0x1B33A4u) { return; }
    }
    ctx->pc = 0x1B33A4u;
label_1b33a4:
    // 0x1b33a4: 0xc050bb4  jal         func_142ED0
label_1b33a8:
    if (ctx->pc == 0x1B33A8u) {
        ctx->pc = 0x1B33ACu;
        goto label_1b33ac;
    }
    ctx->pc = 0x1B33A4u;
    SET_GPR_U32(ctx, 31, 0x1B33ACu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33ACu; }
        if (ctx->pc != 0x1B33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33ACu; }
        if (ctx->pc != 0x1B33ACu) { return; }
    }
    ctx->pc = 0x1B33ACu;
label_1b33ac:
    // 0x1b33ac: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b33acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b33b0:
    // 0x1b33b0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b33b4:
    // 0x1b33b4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b33b4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b33b8:
    // 0x1b33b8: 0x0  nop
    ctx->pc = 0x1b33b8u;
    // NOP
label_1b33bc:
    // 0x1b33bc: 0x0  nop
    ctx->pc = 0x1b33bcu;
    // NOP
label_1b33c0:
    // 0x1b33c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1b33c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b33c4:
    // 0x1b33c4: 0xc050bb4  jal         func_142ED0
label_1b33c8:
    if (ctx->pc == 0x1B33C8u) {
        ctx->pc = 0x1B33C8u;
            // 0x1b33c8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B33CCu;
        goto label_1b33cc;
    }
    ctx->pc = 0x1B33C4u;
    SET_GPR_U32(ctx, 31, 0x1B33CCu);
    ctx->pc = 0x1B33C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33C4u;
            // 0x1b33c8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33CCu; }
        if (ctx->pc != 0x1B33CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33CCu; }
        if (ctx->pc != 0x1B33CCu) { return; }
    }
    ctx->pc = 0x1B33CCu;
label_1b33cc:
    // 0x1b33cc: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b33d0:
    // 0x1b33d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b33d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b33d4:
    // 0x1b33d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b33d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b33d8:
    // 0x1b33d8: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1b33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1b33dc:
    // 0x1b33dc: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b33e0:
    // 0x1b33e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b33e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b33e4:
    // 0x1b33e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b33e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b33e8:
    // 0x1b33e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b33e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b33ec:
    // 0x1b33ec: 0xc053740  jal         func_14DD00
label_1b33f0:
    if (ctx->pc == 0x1B33F0u) {
        ctx->pc = 0x1B33F0u;
            // 0x1b33f0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B33F4u;
        goto label_1b33f4;
    }
    ctx->pc = 0x1B33ECu;
    SET_GPR_U32(ctx, 31, 0x1B33F4u);
    ctx->pc = 0x1B33F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33ECu;
            // 0x1b33f0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33F4u; }
        if (ctx->pc != 0x1B33F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33F4u; }
        if (ctx->pc != 0x1B33F4u) { return; }
    }
    ctx->pc = 0x1B33F4u;
label_1b33f4:
    // 0x1b33f4: 0xc050bb4  jal         func_142ED0
label_1b33f8:
    if (ctx->pc == 0x1B33F8u) {
        ctx->pc = 0x1B33FCu;
        goto label_1b33fc;
    }
    ctx->pc = 0x1B33F4u;
    SET_GPR_U32(ctx, 31, 0x1B33FCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33FCu; }
        if (ctx->pc != 0x1B33FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B33FCu; }
        if (ctx->pc != 0x1B33FCu) { return; }
    }
    ctx->pc = 0x1B33FCu;
label_1b33fc:
    // 0x1b33fc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b3400:
    // 0x1b3400: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b3400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3404:
    // 0x1b3404: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3404u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3408:
    // 0x1b3408: 0x0  nop
    ctx->pc = 0x1b3408u;
    // NOP
label_1b340c:
    // 0x1b340c: 0x0  nop
    ctx->pc = 0x1b340cu;
    // NOP
label_1b3410:
    // 0x1b3410: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3410u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3414:
    // 0x1b3414: 0xc050bb4  jal         func_142ED0
label_1b3418:
    if (ctx->pc == 0x1B3418u) {
        ctx->pc = 0x1B3418u;
            // 0x1b3418: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B341Cu;
        goto label_1b341c;
    }
    ctx->pc = 0x1B3414u;
    SET_GPR_U32(ctx, 31, 0x1B341Cu);
    ctx->pc = 0x1B3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3414u;
            // 0x1b3418: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B341Cu; }
        if (ctx->pc != 0x1B341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B341Cu; }
        if (ctx->pc != 0x1B341Cu) { return; }
    }
    ctx->pc = 0x1B341Cu;
label_1b341c:
    // 0x1b341c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b341cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b3420:
    // 0x1b3420: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b3420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3424:
    // 0x1b3424: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3424u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3428:
    // 0x1b3428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b342c:
    // 0x1b342c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1b3430:
    // 0x1b3430: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x1b3430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_1b3434:
    // 0x1b3434: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b3434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b3438:
    // 0x1b3438: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b3438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b343c:
    // 0x1b343c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b343cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3440:
    // 0x1b3440: 0xc053740  jal         func_14DD00
label_1b3444:
    if (ctx->pc == 0x1B3444u) {
        ctx->pc = 0x1B3444u;
            // 0x1b3444: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3448u;
        goto label_1b3448;
    }
    ctx->pc = 0x1B3440u;
    SET_GPR_U32(ctx, 31, 0x1B3448u);
    ctx->pc = 0x1B3444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3440u;
            // 0x1b3444: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3448u; }
        if (ctx->pc != 0x1B3448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3448u; }
        if (ctx->pc != 0x1B3448u) { return; }
    }
    ctx->pc = 0x1B3448u;
label_1b3448:
    // 0x1b3448: 0xc050bb4  jal         func_142ED0
label_1b344c:
    if (ctx->pc == 0x1B344Cu) {
        ctx->pc = 0x1B3450u;
        goto label_1b3450;
    }
    ctx->pc = 0x1B3448u;
    SET_GPR_U32(ctx, 31, 0x1B3450u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3450u; }
        if (ctx->pc != 0x1B3450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3450u; }
        if (ctx->pc != 0x1B3450u) { return; }
    }
    ctx->pc = 0x1B3450u;
label_1b3450:
    // 0x1b3450: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b3454:
    // 0x1b3454: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3458:
    // 0x1b3458: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3458u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b345c:
    // 0x1b345c: 0x0  nop
    ctx->pc = 0x1b345cu;
    // NOP
label_1b3460:
    // 0x1b3460: 0x0  nop
    ctx->pc = 0x1b3460u;
    // NOP
label_1b3464:
    // 0x1b3464: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3464u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3468:
    // 0x1b3468: 0xc050bb4  jal         func_142ED0
label_1b346c:
    if (ctx->pc == 0x1B346Cu) {
        ctx->pc = 0x1B346Cu;
            // 0x1b346c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3470u;
        goto label_1b3470;
    }
    ctx->pc = 0x1B3468u;
    SET_GPR_U32(ctx, 31, 0x1B3470u);
    ctx->pc = 0x1B346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3468u;
            // 0x1b346c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3470u; }
        if (ctx->pc != 0x1B3470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3470u; }
        if (ctx->pc != 0x1B3470u) { return; }
    }
    ctx->pc = 0x1B3470u;
label_1b3470:
    // 0x1b3470: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b3474:
    // 0x1b3474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3478:
    // 0x1b3478: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3478u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b347c:
    // 0x1b347c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1b347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1b3480:
    // 0x1b3480: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3484:
    // 0x1b3484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3488:
    // 0x1b3488: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3488u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b348c:
    // 0x1b348c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b348cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3490:
    // 0x1b3490: 0xc053740  jal         func_14DD00
label_1b3494:
    if (ctx->pc == 0x1B3494u) {
        ctx->pc = 0x1B3494u;
            // 0x1b3494: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3498u;
        goto label_1b3498;
    }
    ctx->pc = 0x1B3490u;
    SET_GPR_U32(ctx, 31, 0x1B3498u);
    ctx->pc = 0x1B3494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3490u;
            // 0x1b3494: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3498u; }
        if (ctx->pc != 0x1B3498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3498u; }
        if (ctx->pc != 0x1B3498u) { return; }
    }
    ctx->pc = 0x1B3498u;
label_1b3498:
    // 0x1b3498: 0xc050bb4  jal         func_142ED0
label_1b349c:
    if (ctx->pc == 0x1B349Cu) {
        ctx->pc = 0x1B34A0u;
        goto label_1b34a0;
    }
    ctx->pc = 0x1B3498u;
    SET_GPR_U32(ctx, 31, 0x1B34A0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34A0u; }
        if (ctx->pc != 0x1B34A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34A0u; }
        if (ctx->pc != 0x1B34A0u) { return; }
    }
    ctx->pc = 0x1B34A0u;
label_1b34a0:
    // 0x1b34a0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b34a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b34a4:
    // 0x1b34a4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b34a8:
    // 0x1b34a8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b34a8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b34ac:
    // 0x1b34ac: 0x0  nop
    ctx->pc = 0x1b34acu;
    // NOP
label_1b34b0:
    // 0x1b34b0: 0x0  nop
    ctx->pc = 0x1b34b0u;
    // NOP
label_1b34b4:
    // 0x1b34b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b34b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b34b8:
    // 0x1b34b8: 0xc050bb4  jal         func_142ED0
label_1b34bc:
    if (ctx->pc == 0x1B34BCu) {
        ctx->pc = 0x1B34BCu;
            // 0x1b34bc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B34C0u;
        goto label_1b34c0;
    }
    ctx->pc = 0x1B34B8u;
    SET_GPR_U32(ctx, 31, 0x1B34C0u);
    ctx->pc = 0x1B34BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34B8u;
            // 0x1b34bc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34C0u; }
        if (ctx->pc != 0x1B34C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34C0u; }
        if (ctx->pc != 0x1B34C0u) { return; }
    }
    ctx->pc = 0x1B34C0u;
label_1b34c0:
    // 0x1b34c0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b34c4:
    // 0x1b34c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b34c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b34c8:
    // 0x1b34c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b34c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b34cc:
    // 0x1b34cc: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1b34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1b34d0:
    // 0x1b34d0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b34d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b34d4:
    // 0x1b34d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b34d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b34d8:
    // 0x1b34d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b34d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b34dc:
    // 0x1b34dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b34dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b34e0:
    // 0x1b34e0: 0xc053740  jal         func_14DD00
label_1b34e4:
    if (ctx->pc == 0x1B34E4u) {
        ctx->pc = 0x1B34E4u;
            // 0x1b34e4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B34E8u;
        goto label_1b34e8;
    }
    ctx->pc = 0x1B34E0u;
    SET_GPR_U32(ctx, 31, 0x1B34E8u);
    ctx->pc = 0x1B34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34E0u;
            // 0x1b34e4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34E8u; }
        if (ctx->pc != 0x1B34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34E8u; }
        if (ctx->pc != 0x1B34E8u) { return; }
    }
    ctx->pc = 0x1B34E8u;
label_1b34e8:
    // 0x1b34e8: 0xc050bb4  jal         func_142ED0
label_1b34ec:
    if (ctx->pc == 0x1B34ECu) {
        ctx->pc = 0x1B34F0u;
        goto label_1b34f0;
    }
    ctx->pc = 0x1B34E8u;
    SET_GPR_U32(ctx, 31, 0x1B34F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34F0u; }
        if (ctx->pc != 0x1B34F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B34F0u; }
        if (ctx->pc != 0x1B34F0u) { return; }
    }
    ctx->pc = 0x1B34F0u;
label_1b34f0:
    // 0x1b34f0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b34f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b34f4:
    // 0x1b34f4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b34f8:
    // 0x1b34f8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b34f8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b34fc:
    // 0x1b34fc: 0x0  nop
    ctx->pc = 0x1b34fcu;
    // NOP
label_1b3500:
    // 0x1b3500: 0x0  nop
    ctx->pc = 0x1b3500u;
    // NOP
label_1b3504:
    // 0x1b3504: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3504u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3508:
    // 0x1b3508: 0xc050bb4  jal         func_142ED0
label_1b350c:
    if (ctx->pc == 0x1B350Cu) {
        ctx->pc = 0x1B350Cu;
            // 0x1b350c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3510u;
        goto label_1b3510;
    }
    ctx->pc = 0x1B3508u;
    SET_GPR_U32(ctx, 31, 0x1B3510u);
    ctx->pc = 0x1B350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3508u;
            // 0x1b350c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3510u; }
        if (ctx->pc != 0x1B3510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3510u; }
        if (ctx->pc != 0x1B3510u) { return; }
    }
    ctx->pc = 0x1B3510u;
label_1b3510:
    // 0x1b3510: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b3514:
    // 0x1b3514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3518:
    // 0x1b3518: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3518u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b351c:
    // 0x1b351c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1b3520:
    // 0x1b3520: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3524:
    // 0x1b3524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3528:
    // 0x1b3528: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3528u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b352c:
    // 0x1b352c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b352cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3530:
    // 0x1b3530: 0xc053740  jal         func_14DD00
label_1b3534:
    if (ctx->pc == 0x1B3534u) {
        ctx->pc = 0x1B3534u;
            // 0x1b3534: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3538u;
        goto label_1b3538;
    }
    ctx->pc = 0x1B3530u;
    SET_GPR_U32(ctx, 31, 0x1B3538u);
    ctx->pc = 0x1B3534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3530u;
            // 0x1b3534: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3538u; }
        if (ctx->pc != 0x1B3538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3538u; }
        if (ctx->pc != 0x1B3538u) { return; }
    }
    ctx->pc = 0x1B3538u;
label_1b3538:
    // 0x1b3538: 0xc050bb4  jal         func_142ED0
label_1b353c:
    if (ctx->pc == 0x1B353Cu) {
        ctx->pc = 0x1B3540u;
        goto label_1b3540;
    }
    ctx->pc = 0x1B3538u;
    SET_GPR_U32(ctx, 31, 0x1B3540u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3540u; }
        if (ctx->pc != 0x1B3540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3540u; }
        if (ctx->pc != 0x1B3540u) { return; }
    }
    ctx->pc = 0x1B3540u;
label_1b3540:
    // 0x1b3540: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b3544:
    // 0x1b3544: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b3544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3548:
    // 0x1b3548: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3548u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b354c:
    // 0x1b354c: 0x0  nop
    ctx->pc = 0x1b354cu;
    // NOP
label_1b3550:
    // 0x1b3550: 0x0  nop
    ctx->pc = 0x1b3550u;
    // NOP
label_1b3554:
    // 0x1b3554: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3558:
    // 0x1b3558: 0xc050bb4  jal         func_142ED0
label_1b355c:
    if (ctx->pc == 0x1B355Cu) {
        ctx->pc = 0x1B355Cu;
            // 0x1b355c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3560u;
        goto label_1b3560;
    }
    ctx->pc = 0x1B3558u;
    SET_GPR_U32(ctx, 31, 0x1B3560u);
    ctx->pc = 0x1B355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3558u;
            // 0x1b355c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3560u; }
        if (ctx->pc != 0x1B3560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3560u; }
        if (ctx->pc != 0x1B3560u) { return; }
    }
    ctx->pc = 0x1B3560u;
label_1b3560:
    // 0x1b3560: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b3564:
    // 0x1b3564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3568:
    // 0x1b3568: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3568u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b356c:
    // 0x1b356c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b356cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1b3570:
    // 0x1b3570: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3574:
    // 0x1b3574: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3578:
    // 0x1b3578: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b357c:
    // 0x1b357c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b357cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3580:
    // 0x1b3580: 0xc053740  jal         func_14DD00
label_1b3584:
    if (ctx->pc == 0x1B3584u) {
        ctx->pc = 0x1B3584u;
            // 0x1b3584: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3588u;
        goto label_1b3588;
    }
    ctx->pc = 0x1B3580u;
    SET_GPR_U32(ctx, 31, 0x1B3588u);
    ctx->pc = 0x1B3584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3580u;
            // 0x1b3584: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3588u; }
        if (ctx->pc != 0x1B3588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3588u; }
        if (ctx->pc != 0x1B3588u) { return; }
    }
    ctx->pc = 0x1B3588u;
label_1b3588:
    // 0x1b3588: 0xc050bb4  jal         func_142ED0
label_1b358c:
    if (ctx->pc == 0x1B358Cu) {
        ctx->pc = 0x1B3590u;
        goto label_1b3590;
    }
    ctx->pc = 0x1B3588u;
    SET_GPR_U32(ctx, 31, 0x1B3590u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3590u; }
        if (ctx->pc != 0x1B3590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3590u; }
        if (ctx->pc != 0x1B3590u) { return; }
    }
    ctx->pc = 0x1B3590u;
label_1b3590:
    // 0x1b3590: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b3594:
    // 0x1b3594: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b3594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3598:
    // 0x1b3598: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3598u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b359c:
    // 0x1b359c: 0x0  nop
    ctx->pc = 0x1b359cu;
    // NOP
label_1b35a0:
    // 0x1b35a0: 0x0  nop
    ctx->pc = 0x1b35a0u;
    // NOP
label_1b35a4:
    // 0x1b35a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b35a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b35a8:
    // 0x1b35a8: 0xc050bb4  jal         func_142ED0
label_1b35ac:
    if (ctx->pc == 0x1B35ACu) {
        ctx->pc = 0x1B35ACu;
            // 0x1b35ac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B35B0u;
        goto label_1b35b0;
    }
    ctx->pc = 0x1B35A8u;
    SET_GPR_U32(ctx, 31, 0x1B35B0u);
    ctx->pc = 0x1B35ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35A8u;
            // 0x1b35ac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35B0u; }
        if (ctx->pc != 0x1B35B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35B0u; }
        if (ctx->pc != 0x1B35B0u) { return; }
    }
    ctx->pc = 0x1B35B0u;
label_1b35b0:
    // 0x1b35b0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b35b4:
    // 0x1b35b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b35b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b35b8:
    // 0x1b35b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b35b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b35bc:
    // 0x1b35bc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b35bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1b35c0:
    // 0x1b35c0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b35c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b35c4:
    // 0x1b35c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b35c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b35c8:
    // 0x1b35c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b35c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b35cc:
    // 0x1b35cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b35ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b35d0:
    // 0x1b35d0: 0xc053740  jal         func_14DD00
label_1b35d4:
    if (ctx->pc == 0x1B35D4u) {
        ctx->pc = 0x1B35D4u;
            // 0x1b35d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B35D8u;
        goto label_1b35d8;
    }
    ctx->pc = 0x1B35D0u;
    SET_GPR_U32(ctx, 31, 0x1B35D8u);
    ctx->pc = 0x1B35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35D0u;
            // 0x1b35d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35D8u; }
        if (ctx->pc != 0x1B35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35D8u; }
        if (ctx->pc != 0x1B35D8u) { return; }
    }
    ctx->pc = 0x1B35D8u;
label_1b35d8:
    // 0x1b35d8: 0xc050bb4  jal         func_142ED0
label_1b35dc:
    if (ctx->pc == 0x1B35DCu) {
        ctx->pc = 0x1B35E0u;
        goto label_1b35e0;
    }
    ctx->pc = 0x1B35D8u;
    SET_GPR_U32(ctx, 31, 0x1B35E0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35E0u; }
        if (ctx->pc != 0x1B35E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B35E0u; }
        if (ctx->pc != 0x1B35E0u) { return; }
    }
    ctx->pc = 0x1B35E0u;
label_1b35e0:
    // 0x1b35e0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b35e4:
    // 0x1b35e4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b35e8:
    // 0x1b35e8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b35e8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b35ec:
    // 0x1b35ec: 0x0  nop
    ctx->pc = 0x1b35ecu;
    // NOP
label_1b35f0:
    // 0x1b35f0: 0x0  nop
    ctx->pc = 0x1b35f0u;
    // NOP
label_1b35f4:
    // 0x1b35f4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b35f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b35f8:
    // 0x1b35f8: 0xc050bb4  jal         func_142ED0
label_1b35fc:
    if (ctx->pc == 0x1B35FCu) {
        ctx->pc = 0x1B35FCu;
            // 0x1b35fc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3600u;
        goto label_1b3600;
    }
    ctx->pc = 0x1B35F8u;
    SET_GPR_U32(ctx, 31, 0x1B3600u);
    ctx->pc = 0x1B35FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35F8u;
            // 0x1b35fc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3600u; }
        if (ctx->pc != 0x1B3600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3600u; }
        if (ctx->pc != 0x1B3600u) { return; }
    }
    ctx->pc = 0x1B3600u;
label_1b3600:
    // 0x1b3600: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b3604:
    // 0x1b3604: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b3604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3608:
    // 0x1b3608: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3608u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b360c:
    // 0x1b360c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3610:
    // 0x1b3610: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1b3614:
    // 0x1b3614: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1b3614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1b3618:
    // 0x1b3618: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b3618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b361c:
    // 0x1b361c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b361cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3620:
    // 0x1b3620: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3624:
    // 0x1b3624: 0xc053740  jal         func_14DD00
label_1b3628:
    if (ctx->pc == 0x1B3628u) {
        ctx->pc = 0x1B3628u;
            // 0x1b3628: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B362Cu;
        goto label_1b362c;
    }
    ctx->pc = 0x1B3624u;
    SET_GPR_U32(ctx, 31, 0x1B362Cu);
    ctx->pc = 0x1B3628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3624u;
            // 0x1b3628: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B362Cu; }
        if (ctx->pc != 0x1B362Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B362Cu; }
        if (ctx->pc != 0x1B362Cu) { return; }
    }
    ctx->pc = 0x1B362Cu;
label_1b362c:
    // 0x1b362c: 0xc050bb4  jal         func_142ED0
label_1b3630:
    if (ctx->pc == 0x1B3630u) {
        ctx->pc = 0x1B3634u;
        goto label_1b3634;
    }
    ctx->pc = 0x1B362Cu;
    SET_GPR_U32(ctx, 31, 0x1B3634u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3634u; }
        if (ctx->pc != 0x1B3634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3634u; }
        if (ctx->pc != 0x1B3634u) { return; }
    }
    ctx->pc = 0x1B3634u;
label_1b3634:
    // 0x1b3634: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b3638:
    // 0x1b3638: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b363c:
    // 0x1b363c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b363cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3640:
    // 0x1b3640: 0x0  nop
    ctx->pc = 0x1b3640u;
    // NOP
label_1b3644:
    // 0x1b3644: 0x0  nop
    ctx->pc = 0x1b3644u;
    // NOP
label_1b3648:
    // 0x1b3648: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3648u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b364c:
    // 0x1b364c: 0xc050bb4  jal         func_142ED0
label_1b3650:
    if (ctx->pc == 0x1B3650u) {
        ctx->pc = 0x1B3650u;
            // 0x1b3650: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3654u;
        goto label_1b3654;
    }
    ctx->pc = 0x1B364Cu;
    SET_GPR_U32(ctx, 31, 0x1B3654u);
    ctx->pc = 0x1B3650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B364Cu;
            // 0x1b3650: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3654u; }
        if (ctx->pc != 0x1B3654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3654u; }
        if (ctx->pc != 0x1B3654u) { return; }
    }
    ctx->pc = 0x1B3654u;
label_1b3654:
    // 0x1b3654: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b3658:
    // 0x1b3658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b365c:
    // 0x1b365c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b365cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3660:
    // 0x1b3660: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1b3660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1b3664:
    // 0x1b3664: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3668:
    // 0x1b3668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b366c:
    // 0x1b366c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b366cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3670:
    // 0x1b3670: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b3670u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3674:
    // 0x1b3674: 0xc053740  jal         func_14DD00
label_1b3678:
    if (ctx->pc == 0x1B3678u) {
        ctx->pc = 0x1B3678u;
            // 0x1b3678: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B367Cu;
        goto label_1b367c;
    }
    ctx->pc = 0x1B3674u;
    SET_GPR_U32(ctx, 31, 0x1B367Cu);
    ctx->pc = 0x1B3678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3674u;
            // 0x1b3678: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B367Cu; }
        if (ctx->pc != 0x1B367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B367Cu; }
        if (ctx->pc != 0x1B367Cu) { return; }
    }
    ctx->pc = 0x1B367Cu;
label_1b367c:
    // 0x1b367c: 0xc050bb4  jal         func_142ED0
label_1b3680:
    if (ctx->pc == 0x1B3680u) {
        ctx->pc = 0x1B3684u;
        goto label_1b3684;
    }
    ctx->pc = 0x1B367Cu;
    SET_GPR_U32(ctx, 31, 0x1B3684u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3684u; }
        if (ctx->pc != 0x1B3684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3684u; }
        if (ctx->pc != 0x1B3684u) { return; }
    }
    ctx->pc = 0x1B3684u;
label_1b3684:
    // 0x1b3684: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b3688:
    // 0x1b3688: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b3688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b368c:
    // 0x1b368c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b368cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3690:
    // 0x1b3690: 0x0  nop
    ctx->pc = 0x1b3690u;
    // NOP
label_1b3694:
    // 0x1b3694: 0x0  nop
    ctx->pc = 0x1b3694u;
    // NOP
label_1b3698:
    // 0x1b3698: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3698u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b369c:
    // 0x1b369c: 0xc050bb4  jal         func_142ED0
label_1b36a0:
    if (ctx->pc == 0x1B36A0u) {
        ctx->pc = 0x1B36A0u;
            // 0x1b36a0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B36A4u;
        goto label_1b36a4;
    }
    ctx->pc = 0x1B369Cu;
    SET_GPR_U32(ctx, 31, 0x1B36A4u);
    ctx->pc = 0x1B36A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B369Cu;
            // 0x1b36a0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36A4u; }
        if (ctx->pc != 0x1B36A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36A4u; }
        if (ctx->pc != 0x1B36A4u) { return; }
    }
    ctx->pc = 0x1B36A4u;
label_1b36a4:
    // 0x1b36a4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b36a8:
    // 0x1b36a8: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1b36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b36ac:
    // 0x1b36ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b36acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b36b0:
    // 0x1b36b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b36b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b36b4:
    // 0x1b36b4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1b36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1b36b8:
    // 0x1b36b8: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x1b36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_1b36bc:
    // 0x1b36bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b36bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b36c0:
    // 0x1b36c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b36c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b36c4:
    // 0x1b36c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b36c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b36c8:
    // 0x1b36c8: 0xc053740  jal         func_14DD00
label_1b36cc:
    if (ctx->pc == 0x1B36CCu) {
        ctx->pc = 0x1B36CCu;
            // 0x1b36cc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B36D0u;
        goto label_1b36d0;
    }
    ctx->pc = 0x1B36C8u;
    SET_GPR_U32(ctx, 31, 0x1B36D0u);
    ctx->pc = 0x1B36CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36C8u;
            // 0x1b36cc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36D0u; }
        if (ctx->pc != 0x1B36D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36D0u; }
        if (ctx->pc != 0x1B36D0u) { return; }
    }
    ctx->pc = 0x1B36D0u;
label_1b36d0:
    // 0x1b36d0: 0xc050bb4  jal         func_142ED0
label_1b36d4:
    if (ctx->pc == 0x1B36D4u) {
        ctx->pc = 0x1B36D8u;
        goto label_1b36d8;
    }
    ctx->pc = 0x1B36D0u;
    SET_GPR_U32(ctx, 31, 0x1B36D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36D8u; }
        if (ctx->pc != 0x1B36D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36D8u; }
        if (ctx->pc != 0x1B36D8u) { return; }
    }
    ctx->pc = 0x1B36D8u;
label_1b36d8:
    // 0x1b36d8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b36d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b36dc:
    // 0x1b36dc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b36e0:
    // 0x1b36e0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b36e0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b36e4:
    // 0x1b36e4: 0x0  nop
    ctx->pc = 0x1b36e4u;
    // NOP
label_1b36e8:
    // 0x1b36e8: 0x0  nop
    ctx->pc = 0x1b36e8u;
    // NOP
label_1b36ec:
    // 0x1b36ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1b36ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b36f0:
    // 0x1b36f0: 0xc050bb4  jal         func_142ED0
label_1b36f4:
    if (ctx->pc == 0x1B36F4u) {
        ctx->pc = 0x1B36F4u;
            // 0x1b36f4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B36F8u;
        goto label_1b36f8;
    }
    ctx->pc = 0x1B36F0u;
    SET_GPR_U32(ctx, 31, 0x1B36F8u);
    ctx->pc = 0x1B36F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B36F0u;
            // 0x1b36f4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36F8u; }
        if (ctx->pc != 0x1B36F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B36F8u; }
        if (ctx->pc != 0x1B36F8u) { return; }
    }
    ctx->pc = 0x1B36F8u;
label_1b36f8:
    // 0x1b36f8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b36f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b36fc:
    // 0x1b36fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b36fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3700:
    // 0x1b3700: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3700u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3704:
    // 0x1b3704: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1b3704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1b3708:
    // 0x1b3708: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b370c:
    // 0x1b370c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b370cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3710:
    // 0x1b3710: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3710u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3714:
    // 0x1b3714: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b3714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3718:
    // 0x1b3718: 0xc053740  jal         func_14DD00
label_1b371c:
    if (ctx->pc == 0x1B371Cu) {
        ctx->pc = 0x1B371Cu;
            // 0x1b371c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3720u;
        goto label_1b3720;
    }
    ctx->pc = 0x1B3718u;
    SET_GPR_U32(ctx, 31, 0x1B3720u);
    ctx->pc = 0x1B371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3718u;
            // 0x1b371c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3720u; }
        if (ctx->pc != 0x1B3720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3720u; }
        if (ctx->pc != 0x1B3720u) { return; }
    }
    ctx->pc = 0x1B3720u;
label_1b3720:
    // 0x1b3720: 0xc050bb4  jal         func_142ED0
label_1b3724:
    if (ctx->pc == 0x1B3724u) {
        ctx->pc = 0x1B3728u;
        goto label_1b3728;
    }
    ctx->pc = 0x1B3720u;
    SET_GPR_U32(ctx, 31, 0x1B3728u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3728u; }
        if (ctx->pc != 0x1B3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3728u; }
        if (ctx->pc != 0x1B3728u) { return; }
    }
    ctx->pc = 0x1B3728u;
label_1b3728:
    // 0x1b3728: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1b3728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b372c:
    // 0x1b372c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1b372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3730:
    // 0x1b3730: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1b3730u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3734:
    // 0x1b3734: 0x0  nop
    ctx->pc = 0x1b3734u;
    // NOP
label_1b3738:
    // 0x1b3738: 0x0  nop
    ctx->pc = 0x1b3738u;
    // NOP
label_1b373c:
    // 0x1b373c: 0x1010  mfhi        $v0
    ctx->pc = 0x1b373cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3740:
    // 0x1b3740: 0xc050bb4  jal         func_142ED0
label_1b3744:
    if (ctx->pc == 0x1B3744u) {
        ctx->pc = 0x1B3744u;
            // 0x1b3744: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3748u;
        goto label_1b3748;
    }
    ctx->pc = 0x1B3740u;
    SET_GPR_U32(ctx, 31, 0x1B3748u);
    ctx->pc = 0x1B3744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3740u;
            // 0x1b3744: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3748u; }
        if (ctx->pc != 0x1B3748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3748u; }
        if (ctx->pc != 0x1B3748u) { return; }
    }
    ctx->pc = 0x1B3748u;
label_1b3748:
    // 0x1b3748: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1b3748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b374c:
    // 0x1b374c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b374cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3750:
    // 0x1b3750: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b3750u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b3754:
    // 0x1b3754: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1b3754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1b3758:
    // 0x1b3758: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1b3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b375c:
    // 0x1b375c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b375cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3760:
    // 0x1b3760: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3760u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b3764:
    // 0x1b3764: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b3764u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b3768:
    // 0x1b3768: 0xc053740  jal         func_14DD00
label_1b376c:
    if (ctx->pc == 0x1B376Cu) {
        ctx->pc = 0x1B376Cu;
            // 0x1b376c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B3770u;
        goto label_1b3770;
    }
    ctx->pc = 0x1B3768u;
    SET_GPR_U32(ctx, 31, 0x1B3770u);
    ctx->pc = 0x1B376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3768u;
            // 0x1b376c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3770u; }
        if (ctx->pc != 0x1B3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3770u; }
        if (ctx->pc != 0x1B3770u) { return; }
    }
    ctx->pc = 0x1B3770u;
label_1b3770:
    // 0x1b3770: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1b3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3774:
    // 0x1b3774: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b3774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b3778:
    // 0x1b3778: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1b3778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b377c:
    // 0x1b377c: 0xc07b0ac  jal         func_1EC2B0
label_1b3780:
    if (ctx->pc == 0x1B3780u) {
        ctx->pc = 0x1B3780u;
            // 0x1b3780: 0x2446ffe2  addiu       $a2, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->pc = 0x1B3784u;
        goto label_1b3784;
    }
    ctx->pc = 0x1B377Cu;
    SET_GPR_U32(ctx, 31, 0x1B3784u);
    ctx->pc = 0x1B3780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B377Cu;
            // 0x1b3780: 0x2446ffe2  addiu       $a2, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3784u; }
        if (ctx->pc != 0x1B3784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3784u; }
        if (ctx->pc != 0x1B3784u) { return; }
    }
    ctx->pc = 0x1B3784u;
label_1b3784:
    // 0x1b3784: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1b3784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b3788:
    // 0x1b3788: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x1b3788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b378c:
    // 0x1b378c: 0xc07b0ac  jal         func_1EC2B0
label_1b3790:
    if (ctx->pc == 0x1B3790u) {
        ctx->pc = 0x1B3790u;
            // 0x1b3790: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1B3794u;
        goto label_1b3794;
    }
    ctx->pc = 0x1B378Cu;
    SET_GPR_U32(ctx, 31, 0x1B3794u);
    ctx->pc = 0x1B3790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B378Cu;
            // 0x1b3790: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3794u; }
        if (ctx->pc != 0x1B3794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3794u; }
        if (ctx->pc != 0x1B3794u) { return; }
    }
    ctx->pc = 0x1B3794u;
label_1b3794:
    // 0x1b3794: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1b3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b3798:
    // 0x1b3798: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b379c:
    // 0x1b379c: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1b379cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b37a0:
    // 0x1b37a0: 0xc07b0ac  jal         func_1EC2B0
label_1b37a4:
    if (ctx->pc == 0x1B37A4u) {
        ctx->pc = 0x1B37A4u;
            // 0x1b37a4: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->pc = 0x1B37A8u;
        goto label_1b37a8;
    }
    ctx->pc = 0x1B37A0u;
    SET_GPR_U32(ctx, 31, 0x1B37A8u);
    ctx->pc = 0x1B37A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37A0u;
            // 0x1b37a4: 0x2446001e  addiu       $a2, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37A8u; }
        if (ctx->pc != 0x1B37A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37A8u; }
        if (ctx->pc != 0x1B37A8u) { return; }
    }
    ctx->pc = 0x1B37A8u;
label_1b37a8:
    // 0x1b37a8: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x1b37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_1b37ac:
    // 0x1b37ac: 0x40f809  jalr        $v0
label_1b37b0:
    if (ctx->pc == 0x1B37B0u) {
        ctx->pc = 0x1B37B0u;
            // 0x1b37b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B37B4u;
        goto label_1b37b4;
    }
    ctx->pc = 0x1B37ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B37B4u);
        ctx->pc = 0x1B37B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37ACu;
            // 0x1b37b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1820u: goto label_1b1820;
            case 0x1B1824u: goto label_1b1824;
            case 0x1B1828u: goto label_1b1828;
            case 0x1B182Cu: goto label_1b182c;
            case 0x1B1830u: goto label_1b1830;
            case 0x1B1834u: goto label_1b1834;
            case 0x1B1838u: goto label_1b1838;
            case 0x1B183Cu: goto label_1b183c;
            case 0x1B1840u: goto label_1b1840;
            case 0x1B1844u: goto label_1b1844;
            case 0x1B1848u: goto label_1b1848;
            case 0x1B184Cu: goto label_1b184c;
            case 0x1B1850u: goto label_1b1850;
            case 0x1B1854u: goto label_1b1854;
            case 0x1B1858u: goto label_1b1858;
            case 0x1B185Cu: goto label_1b185c;
            case 0x1B1860u: goto label_1b1860;
            case 0x1B1864u: goto label_1b1864;
            case 0x1B1868u: goto label_1b1868;
            case 0x1B186Cu: goto label_1b186c;
            case 0x1B1870u: goto label_1b1870;
            case 0x1B1874u: goto label_1b1874;
            case 0x1B1878u: goto label_1b1878;
            case 0x1B187Cu: goto label_1b187c;
            case 0x1B1880u: goto label_1b1880;
            case 0x1B1884u: goto label_1b1884;
            case 0x1B1888u: goto label_1b1888;
            case 0x1B188Cu: goto label_1b188c;
            case 0x1B1890u: goto label_1b1890;
            case 0x1B1894u: goto label_1b1894;
            case 0x1B1898u: goto label_1b1898;
            case 0x1B189Cu: goto label_1b189c;
            case 0x1B18A0u: goto label_1b18a0;
            case 0x1B18A4u: goto label_1b18a4;
            case 0x1B18A8u: goto label_1b18a8;
            case 0x1B18ACu: goto label_1b18ac;
            case 0x1B18B0u: goto label_1b18b0;
            case 0x1B18B4u: goto label_1b18b4;
            case 0x1B18B8u: goto label_1b18b8;
            case 0x1B18BCu: goto label_1b18bc;
            case 0x1B18C0u: goto label_1b18c0;
            case 0x1B18C4u: goto label_1b18c4;
            case 0x1B18C8u: goto label_1b18c8;
            case 0x1B18CCu: goto label_1b18cc;
            case 0x1B18D0u: goto label_1b18d0;
            case 0x1B18D4u: goto label_1b18d4;
            case 0x1B18D8u: goto label_1b18d8;
            case 0x1B18DCu: goto label_1b18dc;
            case 0x1B18E0u: goto label_1b18e0;
            case 0x1B18E4u: goto label_1b18e4;
            case 0x1B18E8u: goto label_1b18e8;
            case 0x1B18ECu: goto label_1b18ec;
            case 0x1B18F0u: goto label_1b18f0;
            case 0x1B18F4u: goto label_1b18f4;
            case 0x1B18F8u: goto label_1b18f8;
            case 0x1B18FCu: goto label_1b18fc;
            case 0x1B1900u: goto label_1b1900;
            case 0x1B1904u: goto label_1b1904;
            case 0x1B1908u: goto label_1b1908;
            case 0x1B190Cu: goto label_1b190c;
            case 0x1B1910u: goto label_1b1910;
            case 0x1B1914u: goto label_1b1914;
            case 0x1B1918u: goto label_1b1918;
            case 0x1B191Cu: goto label_1b191c;
            case 0x1B1920u: goto label_1b1920;
            case 0x1B1924u: goto label_1b1924;
            case 0x1B1928u: goto label_1b1928;
            case 0x1B192Cu: goto label_1b192c;
            case 0x1B1930u: goto label_1b1930;
            case 0x1B1934u: goto label_1b1934;
            case 0x1B1938u: goto label_1b1938;
            case 0x1B193Cu: goto label_1b193c;
            case 0x1B1940u: goto label_1b1940;
            case 0x1B1944u: goto label_1b1944;
            case 0x1B1948u: goto label_1b1948;
            case 0x1B194Cu: goto label_1b194c;
            case 0x1B1950u: goto label_1b1950;
            case 0x1B1954u: goto label_1b1954;
            case 0x1B1958u: goto label_1b1958;
            case 0x1B195Cu: goto label_1b195c;
            case 0x1B1960u: goto label_1b1960;
            case 0x1B1964u: goto label_1b1964;
            case 0x1B1968u: goto label_1b1968;
            case 0x1B196Cu: goto label_1b196c;
            case 0x1B1970u: goto label_1b1970;
            case 0x1B1974u: goto label_1b1974;
            case 0x1B1978u: goto label_1b1978;
            case 0x1B197Cu: goto label_1b197c;
            case 0x1B1980u: goto label_1b1980;
            case 0x1B1984u: goto label_1b1984;
            case 0x1B1988u: goto label_1b1988;
            case 0x1B198Cu: goto label_1b198c;
            case 0x1B1990u: goto label_1b1990;
            case 0x1B1994u: goto label_1b1994;
            case 0x1B1998u: goto label_1b1998;
            case 0x1B199Cu: goto label_1b199c;
            case 0x1B19A0u: goto label_1b19a0;
            case 0x1B19A4u: goto label_1b19a4;
            case 0x1B19A8u: goto label_1b19a8;
            case 0x1B19ACu: goto label_1b19ac;
            case 0x1B19B0u: goto label_1b19b0;
            case 0x1B19B4u: goto label_1b19b4;
            case 0x1B19B8u: goto label_1b19b8;
            case 0x1B19BCu: goto label_1b19bc;
            case 0x1B19C0u: goto label_1b19c0;
            case 0x1B19C4u: goto label_1b19c4;
            case 0x1B19C8u: goto label_1b19c8;
            case 0x1B19CCu: goto label_1b19cc;
            case 0x1B19D0u: goto label_1b19d0;
            case 0x1B19D4u: goto label_1b19d4;
            case 0x1B19D8u: goto label_1b19d8;
            case 0x1B19DCu: goto label_1b19dc;
            case 0x1B19E0u: goto label_1b19e0;
            case 0x1B19E4u: goto label_1b19e4;
            case 0x1B19E8u: goto label_1b19e8;
            case 0x1B19ECu: goto label_1b19ec;
            case 0x1B19F0u: goto label_1b19f0;
            case 0x1B19F4u: goto label_1b19f4;
            case 0x1B19F8u: goto label_1b19f8;
            case 0x1B19FCu: goto label_1b19fc;
            case 0x1B1A00u: goto label_1b1a00;
            case 0x1B1A04u: goto label_1b1a04;
            case 0x1B1A08u: goto label_1b1a08;
            case 0x1B1A0Cu: goto label_1b1a0c;
            case 0x1B1A10u: goto label_1b1a10;
            case 0x1B1A14u: goto label_1b1a14;
            case 0x1B1A18u: goto label_1b1a18;
            case 0x1B1A1Cu: goto label_1b1a1c;
            case 0x1B1A20u: goto label_1b1a20;
            case 0x1B1A24u: goto label_1b1a24;
            case 0x1B1A28u: goto label_1b1a28;
            case 0x1B1A2Cu: goto label_1b1a2c;
            case 0x1B1A30u: goto label_1b1a30;
            case 0x1B1A34u: goto label_1b1a34;
            case 0x1B1A38u: goto label_1b1a38;
            case 0x1B1A3Cu: goto label_1b1a3c;
            case 0x1B1A40u: goto label_1b1a40;
            case 0x1B1A44u: goto label_1b1a44;
            case 0x1B1A48u: goto label_1b1a48;
            case 0x1B1A4Cu: goto label_1b1a4c;
            case 0x1B1A50u: goto label_1b1a50;
            case 0x1B1A54u: goto label_1b1a54;
            case 0x1B1A58u: goto label_1b1a58;
            case 0x1B1A5Cu: goto label_1b1a5c;
            case 0x1B1A60u: goto label_1b1a60;
            case 0x1B1A64u: goto label_1b1a64;
            case 0x1B1A68u: goto label_1b1a68;
            case 0x1B1A6Cu: goto label_1b1a6c;
            case 0x1B1A70u: goto label_1b1a70;
            case 0x1B1A74u: goto label_1b1a74;
            case 0x1B1A78u: goto label_1b1a78;
            case 0x1B1A7Cu: goto label_1b1a7c;
            case 0x1B1A80u: goto label_1b1a80;
            case 0x1B1A84u: goto label_1b1a84;
            case 0x1B1A88u: goto label_1b1a88;
            case 0x1B1A8Cu: goto label_1b1a8c;
            case 0x1B1A90u: goto label_1b1a90;
            case 0x1B1A94u: goto label_1b1a94;
            case 0x1B1A98u: goto label_1b1a98;
            case 0x1B1A9Cu: goto label_1b1a9c;
            case 0x1B1AA0u: goto label_1b1aa0;
            case 0x1B1AA4u: goto label_1b1aa4;
            case 0x1B1AA8u: goto label_1b1aa8;
            case 0x1B1AACu: goto label_1b1aac;
            case 0x1B1AB0u: goto label_1b1ab0;
            case 0x1B1AB4u: goto label_1b1ab4;
            case 0x1B1AB8u: goto label_1b1ab8;
            case 0x1B1ABCu: goto label_1b1abc;
            case 0x1B1AC0u: goto label_1b1ac0;
            case 0x1B1AC4u: goto label_1b1ac4;
            case 0x1B1AC8u: goto label_1b1ac8;
            case 0x1B1ACCu: goto label_1b1acc;
            case 0x1B1AD0u: goto label_1b1ad0;
            case 0x1B1AD4u: goto label_1b1ad4;
            case 0x1B1AD8u: goto label_1b1ad8;
            case 0x1B1ADCu: goto label_1b1adc;
            case 0x1B1AE0u: goto label_1b1ae0;
            case 0x1B1AE4u: goto label_1b1ae4;
            case 0x1B1AE8u: goto label_1b1ae8;
            case 0x1B1AECu: goto label_1b1aec;
            case 0x1B1AF0u: goto label_1b1af0;
            case 0x1B1AF4u: goto label_1b1af4;
            case 0x1B1AF8u: goto label_1b1af8;
            case 0x1B1AFCu: goto label_1b1afc;
            case 0x1B1B00u: goto label_1b1b00;
            case 0x1B1B04u: goto label_1b1b04;
            case 0x1B1B08u: goto label_1b1b08;
            case 0x1B1B0Cu: goto label_1b1b0c;
            case 0x1B1B10u: goto label_1b1b10;
            case 0x1B1B14u: goto label_1b1b14;
            case 0x1B1B18u: goto label_1b1b18;
            case 0x1B1B1Cu: goto label_1b1b1c;
            case 0x1B1B20u: goto label_1b1b20;
            case 0x1B1B24u: goto label_1b1b24;
            case 0x1B1B28u: goto label_1b1b28;
            case 0x1B1B2Cu: goto label_1b1b2c;
            case 0x1B1B30u: goto label_1b1b30;
            case 0x1B1B34u: goto label_1b1b34;
            case 0x1B1B38u: goto label_1b1b38;
            case 0x1B1B3Cu: goto label_1b1b3c;
            case 0x1B1B40u: goto label_1b1b40;
            case 0x1B1B44u: goto label_1b1b44;
            case 0x1B1B48u: goto label_1b1b48;
            case 0x1B1B4Cu: goto label_1b1b4c;
            case 0x1B1B50u: goto label_1b1b50;
            case 0x1B1B54u: goto label_1b1b54;
            case 0x1B1B58u: goto label_1b1b58;
            case 0x1B1B5Cu: goto label_1b1b5c;
            case 0x1B1B60u: goto label_1b1b60;
            case 0x1B1B64u: goto label_1b1b64;
            case 0x1B1B68u: goto label_1b1b68;
            case 0x1B1B6Cu: goto label_1b1b6c;
            case 0x1B1B70u: goto label_1b1b70;
            case 0x1B1B74u: goto label_1b1b74;
            case 0x1B1B78u: goto label_1b1b78;
            case 0x1B1B7Cu: goto label_1b1b7c;
            case 0x1B1B80u: goto label_1b1b80;
            case 0x1B1B84u: goto label_1b1b84;
            case 0x1B1B88u: goto label_1b1b88;
            case 0x1B1B8Cu: goto label_1b1b8c;
            case 0x1B1B90u: goto label_1b1b90;
            case 0x1B1B94u: goto label_1b1b94;
            case 0x1B1B98u: goto label_1b1b98;
            case 0x1B1B9Cu: goto label_1b1b9c;
            case 0x1B1BA0u: goto label_1b1ba0;
            case 0x1B1BA4u: goto label_1b1ba4;
            case 0x1B1BA8u: goto label_1b1ba8;
            case 0x1B1BACu: goto label_1b1bac;
            case 0x1B1BB0u: goto label_1b1bb0;
            case 0x1B1BB4u: goto label_1b1bb4;
            case 0x1B1BB8u: goto label_1b1bb8;
            case 0x1B1BBCu: goto label_1b1bbc;
            case 0x1B1BC0u: goto label_1b1bc0;
            case 0x1B1BC4u: goto label_1b1bc4;
            case 0x1B1BC8u: goto label_1b1bc8;
            case 0x1B1BCCu: goto label_1b1bcc;
            case 0x1B1BD0u: goto label_1b1bd0;
            case 0x1B1BD4u: goto label_1b1bd4;
            case 0x1B1BD8u: goto label_1b1bd8;
            case 0x1B1BDCu: goto label_1b1bdc;
            case 0x1B1BE0u: goto label_1b1be0;
            case 0x1B1BE4u: goto label_1b1be4;
            case 0x1B1BE8u: goto label_1b1be8;
            case 0x1B1BECu: goto label_1b1bec;
            case 0x1B1BF0u: goto label_1b1bf0;
            case 0x1B1BF4u: goto label_1b1bf4;
            case 0x1B1BF8u: goto label_1b1bf8;
            case 0x1B1BFCu: goto label_1b1bfc;
            case 0x1B1C00u: goto label_1b1c00;
            case 0x1B1C04u: goto label_1b1c04;
            case 0x1B1C08u: goto label_1b1c08;
            case 0x1B1C0Cu: goto label_1b1c0c;
            case 0x1B1C10u: goto label_1b1c10;
            case 0x1B1C14u: goto label_1b1c14;
            case 0x1B1C18u: goto label_1b1c18;
            case 0x1B1C1Cu: goto label_1b1c1c;
            case 0x1B1C20u: goto label_1b1c20;
            case 0x1B1C24u: goto label_1b1c24;
            case 0x1B1C28u: goto label_1b1c28;
            case 0x1B1C2Cu: goto label_1b1c2c;
            case 0x1B1C30u: goto label_1b1c30;
            case 0x1B1C34u: goto label_1b1c34;
            case 0x1B1C38u: goto label_1b1c38;
            case 0x1B1C3Cu: goto label_1b1c3c;
            case 0x1B1C40u: goto label_1b1c40;
            case 0x1B1C44u: goto label_1b1c44;
            case 0x1B1C48u: goto label_1b1c48;
            case 0x1B1C4Cu: goto label_1b1c4c;
            case 0x1B1C50u: goto label_1b1c50;
            case 0x1B1C54u: goto label_1b1c54;
            case 0x1B1C58u: goto label_1b1c58;
            case 0x1B1C5Cu: goto label_1b1c5c;
            case 0x1B1C60u: goto label_1b1c60;
            case 0x1B1C64u: goto label_1b1c64;
            case 0x1B1C68u: goto label_1b1c68;
            case 0x1B1C6Cu: goto label_1b1c6c;
            case 0x1B1C70u: goto label_1b1c70;
            case 0x1B1C74u: goto label_1b1c74;
            case 0x1B1C78u: goto label_1b1c78;
            case 0x1B1C7Cu: goto label_1b1c7c;
            case 0x1B1C80u: goto label_1b1c80;
            case 0x1B1C84u: goto label_1b1c84;
            case 0x1B1C88u: goto label_1b1c88;
            case 0x1B1C8Cu: goto label_1b1c8c;
            case 0x1B1C90u: goto label_1b1c90;
            case 0x1B1C94u: goto label_1b1c94;
            case 0x1B1C98u: goto label_1b1c98;
            case 0x1B1C9Cu: goto label_1b1c9c;
            case 0x1B1CA0u: goto label_1b1ca0;
            case 0x1B1CA4u: goto label_1b1ca4;
            case 0x1B1CA8u: goto label_1b1ca8;
            case 0x1B1CACu: goto label_1b1cac;
            case 0x1B1CB0u: goto label_1b1cb0;
            case 0x1B1CB4u: goto label_1b1cb4;
            case 0x1B1CB8u: goto label_1b1cb8;
            case 0x1B1CBCu: goto label_1b1cbc;
            case 0x1B1CC0u: goto label_1b1cc0;
            case 0x1B1CC4u: goto label_1b1cc4;
            case 0x1B1CC8u: goto label_1b1cc8;
            case 0x1B1CCCu: goto label_1b1ccc;
            case 0x1B1CD0u: goto label_1b1cd0;
            case 0x1B1CD4u: goto label_1b1cd4;
            case 0x1B1CD8u: goto label_1b1cd8;
            case 0x1B1CDCu: goto label_1b1cdc;
            case 0x1B1CE0u: goto label_1b1ce0;
            case 0x1B1CE4u: goto label_1b1ce4;
            case 0x1B1CE8u: goto label_1b1ce8;
            case 0x1B1CECu: goto label_1b1cec;
            case 0x1B1CF0u: goto label_1b1cf0;
            case 0x1B1CF4u: goto label_1b1cf4;
            case 0x1B1CF8u: goto label_1b1cf8;
            case 0x1B1CFCu: goto label_1b1cfc;
            case 0x1B1D00u: goto label_1b1d00;
            case 0x1B1D04u: goto label_1b1d04;
            case 0x1B1D08u: goto label_1b1d08;
            case 0x1B1D0Cu: goto label_1b1d0c;
            case 0x1B1D10u: goto label_1b1d10;
            case 0x1B1D14u: goto label_1b1d14;
            case 0x1B1D18u: goto label_1b1d18;
            case 0x1B1D1Cu: goto label_1b1d1c;
            case 0x1B1D20u: goto label_1b1d20;
            case 0x1B1D24u: goto label_1b1d24;
            case 0x1B1D28u: goto label_1b1d28;
            case 0x1B1D2Cu: goto label_1b1d2c;
            case 0x1B1D30u: goto label_1b1d30;
            case 0x1B1D34u: goto label_1b1d34;
            case 0x1B1D38u: goto label_1b1d38;
            case 0x1B1D3Cu: goto label_1b1d3c;
            case 0x1B1D40u: goto label_1b1d40;
            case 0x1B1D44u: goto label_1b1d44;
            case 0x1B1D48u: goto label_1b1d48;
            case 0x1B1D4Cu: goto label_1b1d4c;
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D54u: goto label_1b1d54;
            case 0x1B1D58u: goto label_1b1d58;
            case 0x1B1D5Cu: goto label_1b1d5c;
            case 0x1B1D60u: goto label_1b1d60;
            case 0x1B1D64u: goto label_1b1d64;
            case 0x1B1D68u: goto label_1b1d68;
            case 0x1B1D6Cu: goto label_1b1d6c;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D74u: goto label_1b1d74;
            case 0x1B1D78u: goto label_1b1d78;
            case 0x1B1D7Cu: goto label_1b1d7c;
            case 0x1B1D80u: goto label_1b1d80;
            case 0x1B1D84u: goto label_1b1d84;
            case 0x1B1D88u: goto label_1b1d88;
            case 0x1B1D8Cu: goto label_1b1d8c;
            case 0x1B1D90u: goto label_1b1d90;
            case 0x1B1D94u: goto label_1b1d94;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1D9Cu: goto label_1b1d9c;
            case 0x1B1DA0u: goto label_1b1da0;
            case 0x1B1DA4u: goto label_1b1da4;
            case 0x1B1DA8u: goto label_1b1da8;
            case 0x1B1DACu: goto label_1b1dac;
            case 0x1B1DB0u: goto label_1b1db0;
            case 0x1B1DB4u: goto label_1b1db4;
            case 0x1B1DB8u: goto label_1b1db8;
            case 0x1B1DBCu: goto label_1b1dbc;
            case 0x1B1DC0u: goto label_1b1dc0;
            case 0x1B1DC4u: goto label_1b1dc4;
            case 0x1B1DC8u: goto label_1b1dc8;
            case 0x1B1DCCu: goto label_1b1dcc;
            case 0x1B1DD0u: goto label_1b1dd0;
            case 0x1B1DD4u: goto label_1b1dd4;
            case 0x1B1DD8u: goto label_1b1dd8;
            case 0x1B1DDCu: goto label_1b1ddc;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1DE4u: goto label_1b1de4;
            case 0x1B1DE8u: goto label_1b1de8;
            case 0x1B1DECu: goto label_1b1dec;
            case 0x1B1DF0u: goto label_1b1df0;
            case 0x1B1DF4u: goto label_1b1df4;
            case 0x1B1DF8u: goto label_1b1df8;
            case 0x1B1DFCu: goto label_1b1dfc;
            case 0x1B1E00u: goto label_1b1e00;
            case 0x1B1E04u: goto label_1b1e04;
            case 0x1B1E08u: goto label_1b1e08;
            case 0x1B1E0Cu: goto label_1b1e0c;
            case 0x1B1E10u: goto label_1b1e10;
            case 0x1B1E14u: goto label_1b1e14;
            case 0x1B1E18u: goto label_1b1e18;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E20u: goto label_1b1e20;
            case 0x1B1E24u: goto label_1b1e24;
            case 0x1B1E28u: goto label_1b1e28;
            case 0x1B1E2Cu: goto label_1b1e2c;
            case 0x1B1E30u: goto label_1b1e30;
            case 0x1B1E34u: goto label_1b1e34;
            case 0x1B1E38u: goto label_1b1e38;
            case 0x1B1E3Cu: goto label_1b1e3c;
            case 0x1B1E40u: goto label_1b1e40;
            case 0x1B1E44u: goto label_1b1e44;
            case 0x1B1E48u: goto label_1b1e48;
            case 0x1B1E4Cu: goto label_1b1e4c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E58u: goto label_1b1e58;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E60u: goto label_1b1e60;
            case 0x1B1E64u: goto label_1b1e64;
            case 0x1B1E68u: goto label_1b1e68;
            case 0x1B1E6Cu: goto label_1b1e6c;
            case 0x1B1E70u: goto label_1b1e70;
            case 0x1B1E74u: goto label_1b1e74;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1E7Cu: goto label_1b1e7c;
            case 0x1B1E80u: goto label_1b1e80;
            case 0x1B1E84u: goto label_1b1e84;
            case 0x1B1E88u: goto label_1b1e88;
            case 0x1B1E8Cu: goto label_1b1e8c;
            case 0x1B1E90u: goto label_1b1e90;
            case 0x1B1E94u: goto label_1b1e94;
            case 0x1B1E98u: goto label_1b1e98;
            case 0x1B1E9Cu: goto label_1b1e9c;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EA4u: goto label_1b1ea4;
            case 0x1B1EA8u: goto label_1b1ea8;
            case 0x1B1EACu: goto label_1b1eac;
            case 0x1B1EB0u: goto label_1b1eb0;
            case 0x1B1EB4u: goto label_1b1eb4;
            case 0x1B1EB8u: goto label_1b1eb8;
            case 0x1B1EBCu: goto label_1b1ebc;
            case 0x1B1EC0u: goto label_1b1ec0;
            case 0x1B1EC4u: goto label_1b1ec4;
            case 0x1B1EC8u: goto label_1b1ec8;
            case 0x1B1ECCu: goto label_1b1ecc;
            case 0x1B1ED0u: goto label_1b1ed0;
            case 0x1B1ED4u: goto label_1b1ed4;
            case 0x1B1ED8u: goto label_1b1ed8;
            case 0x1B1EDCu: goto label_1b1edc;
            case 0x1B1EE0u: goto label_1b1ee0;
            case 0x1B1EE4u: goto label_1b1ee4;
            case 0x1B1EE8u: goto label_1b1ee8;
            case 0x1B1EECu: goto label_1b1eec;
            case 0x1B1EF0u: goto label_1b1ef0;
            case 0x1B1EF4u: goto label_1b1ef4;
            case 0x1B1EF8u: goto label_1b1ef8;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F00u: goto label_1b1f00;
            case 0x1B1F04u: goto label_1b1f04;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F0Cu: goto label_1b1f0c;
            case 0x1B1F10u: goto label_1b1f10;
            case 0x1B1F14u: goto label_1b1f14;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F1Cu: goto label_1b1f1c;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F24u: goto label_1b1f24;
            case 0x1B1F28u: goto label_1b1f28;
            case 0x1B1F2Cu: goto label_1b1f2c;
            case 0x1B1F30u: goto label_1b1f30;
            case 0x1B1F34u: goto label_1b1f34;
            case 0x1B1F38u: goto label_1b1f38;
            case 0x1B1F3Cu: goto label_1b1f3c;
            case 0x1B1F40u: goto label_1b1f40;
            case 0x1B1F44u: goto label_1b1f44;
            case 0x1B1F48u: goto label_1b1f48;
            case 0x1B1F4Cu: goto label_1b1f4c;
            case 0x1B1F50u: goto label_1b1f50;
            case 0x1B1F54u: goto label_1b1f54;
            case 0x1B1F58u: goto label_1b1f58;
            case 0x1B1F5Cu: goto label_1b1f5c;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1F64u: goto label_1b1f64;
            case 0x1B1F68u: goto label_1b1f68;
            case 0x1B1F6Cu: goto label_1b1f6c;
            case 0x1B1F70u: goto label_1b1f70;
            case 0x1B1F74u: goto label_1b1f74;
            case 0x1B1F78u: goto label_1b1f78;
            case 0x1B1F7Cu: goto label_1b1f7c;
            case 0x1B1F80u: goto label_1b1f80;
            case 0x1B1F84u: goto label_1b1f84;
            case 0x1B1F88u: goto label_1b1f88;
            case 0x1B1F8Cu: goto label_1b1f8c;
            case 0x1B1F90u: goto label_1b1f90;
            case 0x1B1F94u: goto label_1b1f94;
            case 0x1B1F98u: goto label_1b1f98;
            case 0x1B1F9Cu: goto label_1b1f9c;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FA8u: goto label_1b1fa8;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FB0u: goto label_1b1fb0;
            case 0x1B1FB4u: goto label_1b1fb4;
            case 0x1B1FB8u: goto label_1b1fb8;
            case 0x1B1FBCu: goto label_1b1fbc;
            case 0x1B1FC0u: goto label_1b1fc0;
            case 0x1B1FC4u: goto label_1b1fc4;
            case 0x1B1FC8u: goto label_1b1fc8;
            case 0x1B1FCCu: goto label_1b1fcc;
            case 0x1B1FD0u: goto label_1b1fd0;
            case 0x1B1FD4u: goto label_1b1fd4;
            case 0x1B1FD8u: goto label_1b1fd8;
            case 0x1B1FDCu: goto label_1b1fdc;
            case 0x1B1FE0u: goto label_1b1fe0;
            case 0x1B1FE4u: goto label_1b1fe4;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B1FECu: goto label_1b1fec;
            case 0x1B1FF0u: goto label_1b1ff0;
            case 0x1B1FF4u: goto label_1b1ff4;
            case 0x1B1FF8u: goto label_1b1ff8;
            case 0x1B1FFCu: goto label_1b1ffc;
            case 0x1B2000u: goto label_1b2000;
            case 0x1B2004u: goto label_1b2004;
            case 0x1B2008u: goto label_1b2008;
            case 0x1B200Cu: goto label_1b200c;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2014u: goto label_1b2014;
            case 0x1B2018u: goto label_1b2018;
            case 0x1B201Cu: goto label_1b201c;
            case 0x1B2020u: goto label_1b2020;
            case 0x1B2024u: goto label_1b2024;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2030u: goto label_1b2030;
            case 0x1B2034u: goto label_1b2034;
            case 0x1B2038u: goto label_1b2038;
            case 0x1B203Cu: goto label_1b203c;
            case 0x1B2040u: goto label_1b2040;
            case 0x1B2044u: goto label_1b2044;
            case 0x1B2048u: goto label_1b2048;
            case 0x1B204Cu: goto label_1b204c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2054u: goto label_1b2054;
            case 0x1B2058u: goto label_1b2058;
            case 0x1B205Cu: goto label_1b205c;
            case 0x1B2060u: goto label_1b2060;
            case 0x1B2064u: goto label_1b2064;
            case 0x1B2068u: goto label_1b2068;
            case 0x1B206Cu: goto label_1b206c;
            case 0x1B2070u: goto label_1b2070;
            case 0x1B2074u: goto label_1b2074;
            case 0x1B2078u: goto label_1b2078;
            case 0x1B207Cu: goto label_1b207c;
            case 0x1B2080u: goto label_1b2080;
            case 0x1B2084u: goto label_1b2084;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B208Cu: goto label_1b208c;
            case 0x1B2090u: goto label_1b2090;
            case 0x1B2094u: goto label_1b2094;
            case 0x1B2098u: goto label_1b2098;
            case 0x1B209Cu: goto label_1b209c;
            case 0x1B20A0u: goto label_1b20a0;
            case 0x1B20A4u: goto label_1b20a4;
            case 0x1B20A8u: goto label_1b20a8;
            case 0x1B20ACu: goto label_1b20ac;
            case 0x1B20B0u: goto label_1b20b0;
            case 0x1B20B4u: goto label_1b20b4;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20BCu: goto label_1b20bc;
            case 0x1B20C0u: goto label_1b20c0;
            case 0x1B20C4u: goto label_1b20c4;
            case 0x1B20C8u: goto label_1b20c8;
            case 0x1B20CCu: goto label_1b20cc;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B20D4u: goto label_1b20d4;
            case 0x1B20D8u: goto label_1b20d8;
            case 0x1B20DCu: goto label_1b20dc;
            case 0x1B20E0u: goto label_1b20e0;
            case 0x1B20E4u: goto label_1b20e4;
            case 0x1B20E8u: goto label_1b20e8;
            case 0x1B20ECu: goto label_1b20ec;
            case 0x1B20F0u: goto label_1b20f0;
            case 0x1B20F4u: goto label_1b20f4;
            case 0x1B20F8u: goto label_1b20f8;
            case 0x1B20FCu: goto label_1b20fc;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2108u: goto label_1b2108;
            case 0x1B210Cu: goto label_1b210c;
            case 0x1B2110u: goto label_1b2110;
            case 0x1B2114u: goto label_1b2114;
            case 0x1B2118u: goto label_1b2118;
            case 0x1B211Cu: goto label_1b211c;
            case 0x1B2120u: goto label_1b2120;
            case 0x1B2124u: goto label_1b2124;
            case 0x1B2128u: goto label_1b2128;
            case 0x1B212Cu: goto label_1b212c;
            case 0x1B2130u: goto label_1b2130;
            case 0x1B2134u: goto label_1b2134;
            case 0x1B2138u: goto label_1b2138;
            case 0x1B213Cu: goto label_1b213c;
            case 0x1B2140u: goto label_1b2140;
            case 0x1B2144u: goto label_1b2144;
            case 0x1B2148u: goto label_1b2148;
            case 0x1B214Cu: goto label_1b214c;
            case 0x1B2150u: goto label_1b2150;
            case 0x1B2154u: goto label_1b2154;
            case 0x1B2158u: goto label_1b2158;
            case 0x1B215Cu: goto label_1b215c;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2164u: goto label_1b2164;
            case 0x1B2168u: goto label_1b2168;
            case 0x1B216Cu: goto label_1b216c;
            case 0x1B2170u: goto label_1b2170;
            case 0x1B2174u: goto label_1b2174;
            case 0x1B2178u: goto label_1b2178;
            case 0x1B217Cu: goto label_1b217c;
            case 0x1B2180u: goto label_1b2180;
            case 0x1B2184u: goto label_1b2184;
            case 0x1B2188u: goto label_1b2188;
            case 0x1B218Cu: goto label_1b218c;
            case 0x1B2190u: goto label_1b2190;
            case 0x1B2194u: goto label_1b2194;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21A0u: goto label_1b21a0;
            case 0x1B21A4u: goto label_1b21a4;
            case 0x1B21A8u: goto label_1b21a8;
            case 0x1B21ACu: goto label_1b21ac;
            case 0x1B21B0u: goto label_1b21b0;
            case 0x1B21B4u: goto label_1b21b4;
            case 0x1B21B8u: goto label_1b21b8;
            case 0x1B21BCu: goto label_1b21bc;
            case 0x1B21C0u: goto label_1b21c0;
            case 0x1B21C4u: goto label_1b21c4;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21CCu: goto label_1b21cc;
            case 0x1B21D0u: goto label_1b21d0;
            case 0x1B21D4u: goto label_1b21d4;
            case 0x1B21D8u: goto label_1b21d8;
            case 0x1B21DCu: goto label_1b21dc;
            case 0x1B21E0u: goto label_1b21e0;
            case 0x1B21E4u: goto label_1b21e4;
            case 0x1B21E8u: goto label_1b21e8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F0u: goto label_1b21f0;
            case 0x1B21F4u: goto label_1b21f4;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B21FCu: goto label_1b21fc;
            case 0x1B2200u: goto label_1b2200;
            case 0x1B2204u: goto label_1b2204;
            case 0x1B2208u: goto label_1b2208;
            case 0x1B220Cu: goto label_1b220c;
            case 0x1B2210u: goto label_1b2210;
            case 0x1B2214u: goto label_1b2214;
            case 0x1B2218u: goto label_1b2218;
            case 0x1B221Cu: goto label_1b221c;
            case 0x1B2220u: goto label_1b2220;
            case 0x1B2224u: goto label_1b2224;
            case 0x1B2228u: goto label_1b2228;
            case 0x1B222Cu: goto label_1b222c;
            case 0x1B2230u: goto label_1b2230;
            case 0x1B2234u: goto label_1b2234;
            case 0x1B2238u: goto label_1b2238;
            case 0x1B223Cu: goto label_1b223c;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2244u: goto label_1b2244;
            case 0x1B2248u: goto label_1b2248;
            case 0x1B224Cu: goto label_1b224c;
            case 0x1B2250u: goto label_1b2250;
            case 0x1B2254u: goto label_1b2254;
            case 0x1B2258u: goto label_1b2258;
            case 0x1B225Cu: goto label_1b225c;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2264u: goto label_1b2264;
            case 0x1B2268u: goto label_1b2268;
            case 0x1B226Cu: goto label_1b226c;
            case 0x1B2270u: goto label_1b2270;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2278u: goto label_1b2278;
            case 0x1B227Cu: goto label_1b227c;
            case 0x1B2280u: goto label_1b2280;
            case 0x1B2284u: goto label_1b2284;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B228Cu: goto label_1b228c;
            case 0x1B2290u: goto label_1b2290;
            case 0x1B2294u: goto label_1b2294;
            case 0x1B2298u: goto label_1b2298;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22A0u: goto label_1b22a0;
            case 0x1B22A4u: goto label_1b22a4;
            case 0x1B22A8u: goto label_1b22a8;
            case 0x1B22ACu: goto label_1b22ac;
            case 0x1B22B0u: goto label_1b22b0;
            case 0x1B22B4u: goto label_1b22b4;
            case 0x1B22B8u: goto label_1b22b8;
            case 0x1B22BCu: goto label_1b22bc;
            case 0x1B22C0u: goto label_1b22c0;
            case 0x1B22C4u: goto label_1b22c4;
            case 0x1B22C8u: goto label_1b22c8;
            case 0x1B22CCu: goto label_1b22cc;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22D4u: goto label_1b22d4;
            case 0x1B22D8u: goto label_1b22d8;
            case 0x1B22DCu: goto label_1b22dc;
            case 0x1B22E0u: goto label_1b22e0;
            case 0x1B22E4u: goto label_1b22e4;
            case 0x1B22E8u: goto label_1b22e8;
            case 0x1B22ECu: goto label_1b22ec;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B22F4u: goto label_1b22f4;
            case 0x1B22F8u: goto label_1b22f8;
            case 0x1B22FCu: goto label_1b22fc;
            case 0x1B2300u: goto label_1b2300;
            case 0x1B2304u: goto label_1b2304;
            case 0x1B2308u: goto label_1b2308;
            case 0x1B230Cu: goto label_1b230c;
            case 0x1B2310u: goto label_1b2310;
            case 0x1B2314u: goto label_1b2314;
            case 0x1B2318u: goto label_1b2318;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2324u: goto label_1b2324;
            case 0x1B2328u: goto label_1b2328;
            case 0x1B232Cu: goto label_1b232c;
            case 0x1B2330u: goto label_1b2330;
            case 0x1B2334u: goto label_1b2334;
            case 0x1B2338u: goto label_1b2338;
            case 0x1B233Cu: goto label_1b233c;
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            case 0x1B2790u: goto label_1b2790;
            case 0x1B2794u: goto label_1b2794;
            case 0x1B2798u: goto label_1b2798;
            case 0x1B279Cu: goto label_1b279c;
            case 0x1B27A0u: goto label_1b27a0;
            case 0x1B27A4u: goto label_1b27a4;
            case 0x1B27A8u: goto label_1b27a8;
            case 0x1B27ACu: goto label_1b27ac;
            case 0x1B27B0u: goto label_1b27b0;
            case 0x1B27B4u: goto label_1b27b4;
            case 0x1B27B8u: goto label_1b27b8;
            case 0x1B27BCu: goto label_1b27bc;
            case 0x1B27C0u: goto label_1b27c0;
            case 0x1B27C4u: goto label_1b27c4;
            case 0x1B27C8u: goto label_1b27c8;
            case 0x1B27CCu: goto label_1b27cc;
            case 0x1B27D0u: goto label_1b27d0;
            case 0x1B27D4u: goto label_1b27d4;
            case 0x1B27D8u: goto label_1b27d8;
            case 0x1B27DCu: goto label_1b27dc;
            case 0x1B27E0u: goto label_1b27e0;
            case 0x1B27E4u: goto label_1b27e4;
            case 0x1B27E8u: goto label_1b27e8;
            case 0x1B27ECu: goto label_1b27ec;
            case 0x1B27F0u: goto label_1b27f0;
            case 0x1B27F4u: goto label_1b27f4;
            case 0x1B27F8u: goto label_1b27f8;
            case 0x1B27FCu: goto label_1b27fc;
            case 0x1B2800u: goto label_1b2800;
            case 0x1B2804u: goto label_1b2804;
            case 0x1B2808u: goto label_1b2808;
            case 0x1B280Cu: goto label_1b280c;
            case 0x1B2810u: goto label_1b2810;
            case 0x1B2814u: goto label_1b2814;
            case 0x1B2818u: goto label_1b2818;
            case 0x1B281Cu: goto label_1b281c;
            case 0x1B2820u: goto label_1b2820;
            case 0x1B2824u: goto label_1b2824;
            case 0x1B2828u: goto label_1b2828;
            case 0x1B282Cu: goto label_1b282c;
            case 0x1B2830u: goto label_1b2830;
            case 0x1B2834u: goto label_1b2834;
            case 0x1B2838u: goto label_1b2838;
            case 0x1B283Cu: goto label_1b283c;
            case 0x1B2840u: goto label_1b2840;
            case 0x1B2844u: goto label_1b2844;
            case 0x1B2848u: goto label_1b2848;
            case 0x1B284Cu: goto label_1b284c;
            case 0x1B2850u: goto label_1b2850;
            case 0x1B2854u: goto label_1b2854;
            case 0x1B2858u: goto label_1b2858;
            case 0x1B285Cu: goto label_1b285c;
            case 0x1B2860u: goto label_1b2860;
            case 0x1B2864u: goto label_1b2864;
            case 0x1B2868u: goto label_1b2868;
            case 0x1B286Cu: goto label_1b286c;
            case 0x1B2870u: goto label_1b2870;
            case 0x1B2874u: goto label_1b2874;
            case 0x1B2878u: goto label_1b2878;
            case 0x1B287Cu: goto label_1b287c;
            case 0x1B2880u: goto label_1b2880;
            case 0x1B2884u: goto label_1b2884;
            case 0x1B2888u: goto label_1b2888;
            case 0x1B288Cu: goto label_1b288c;
            case 0x1B2890u: goto label_1b2890;
            case 0x1B2894u: goto label_1b2894;
            case 0x1B2898u: goto label_1b2898;
            case 0x1B289Cu: goto label_1b289c;
            case 0x1B28A0u: goto label_1b28a0;
            case 0x1B28A4u: goto label_1b28a4;
            case 0x1B28A8u: goto label_1b28a8;
            case 0x1B28ACu: goto label_1b28ac;
            case 0x1B28B0u: goto label_1b28b0;
            case 0x1B28B4u: goto label_1b28b4;
            case 0x1B28B8u: goto label_1b28b8;
            case 0x1B28BCu: goto label_1b28bc;
            case 0x1B28C0u: goto label_1b28c0;
            case 0x1B28C4u: goto label_1b28c4;
            case 0x1B28C8u: goto label_1b28c8;
            case 0x1B28CCu: goto label_1b28cc;
            case 0x1B28D0u: goto label_1b28d0;
            case 0x1B28D4u: goto label_1b28d4;
            case 0x1B28D8u: goto label_1b28d8;
            case 0x1B28DCu: goto label_1b28dc;
            case 0x1B28E0u: goto label_1b28e0;
            case 0x1B28E4u: goto label_1b28e4;
            case 0x1B28E8u: goto label_1b28e8;
            case 0x1B28ECu: goto label_1b28ec;
            case 0x1B28F0u: goto label_1b28f0;
            case 0x1B28F4u: goto label_1b28f4;
            case 0x1B28F8u: goto label_1b28f8;
            case 0x1B28FCu: goto label_1b28fc;
            case 0x1B2900u: goto label_1b2900;
            case 0x1B2904u: goto label_1b2904;
            case 0x1B2908u: goto label_1b2908;
            case 0x1B290Cu: goto label_1b290c;
            case 0x1B2910u: goto label_1b2910;
            case 0x1B2914u: goto label_1b2914;
            case 0x1B2918u: goto label_1b2918;
            case 0x1B291Cu: goto label_1b291c;
            case 0x1B2920u: goto label_1b2920;
            case 0x1B2924u: goto label_1b2924;
            case 0x1B2928u: goto label_1b2928;
            case 0x1B292Cu: goto label_1b292c;
            case 0x1B2930u: goto label_1b2930;
            case 0x1B2934u: goto label_1b2934;
            case 0x1B2938u: goto label_1b2938;
            case 0x1B293Cu: goto label_1b293c;
            case 0x1B2940u: goto label_1b2940;
            case 0x1B2944u: goto label_1b2944;
            case 0x1B2948u: goto label_1b2948;
            case 0x1B294Cu: goto label_1b294c;
            case 0x1B2950u: goto label_1b2950;
            case 0x1B2954u: goto label_1b2954;
            case 0x1B2958u: goto label_1b2958;
            case 0x1B295Cu: goto label_1b295c;
            case 0x1B2960u: goto label_1b2960;
            case 0x1B2964u: goto label_1b2964;
            case 0x1B2968u: goto label_1b2968;
            case 0x1B296Cu: goto label_1b296c;
            case 0x1B2970u: goto label_1b2970;
            case 0x1B2974u: goto label_1b2974;
            case 0x1B2978u: goto label_1b2978;
            case 0x1B297Cu: goto label_1b297c;
            case 0x1B2980u: goto label_1b2980;
            case 0x1B2984u: goto label_1b2984;
            case 0x1B2988u: goto label_1b2988;
            case 0x1B298Cu: goto label_1b298c;
            case 0x1B2990u: goto label_1b2990;
            case 0x1B2994u: goto label_1b2994;
            case 0x1B2998u: goto label_1b2998;
            case 0x1B299Cu: goto label_1b299c;
            case 0x1B29A0u: goto label_1b29a0;
            case 0x1B29A4u: goto label_1b29a4;
            case 0x1B29A8u: goto label_1b29a8;
            case 0x1B29ACu: goto label_1b29ac;
            case 0x1B29B0u: goto label_1b29b0;
            case 0x1B29B4u: goto label_1b29b4;
            case 0x1B29B8u: goto label_1b29b8;
            case 0x1B29BCu: goto label_1b29bc;
            case 0x1B29C0u: goto label_1b29c0;
            case 0x1B29C4u: goto label_1b29c4;
            case 0x1B29C8u: goto label_1b29c8;
            case 0x1B29CCu: goto label_1b29cc;
            case 0x1B29D0u: goto label_1b29d0;
            case 0x1B29D4u: goto label_1b29d4;
            case 0x1B29D8u: goto label_1b29d8;
            case 0x1B29DCu: goto label_1b29dc;
            case 0x1B29E0u: goto label_1b29e0;
            case 0x1B29E4u: goto label_1b29e4;
            case 0x1B29E8u: goto label_1b29e8;
            case 0x1B29ECu: goto label_1b29ec;
            case 0x1B29F0u: goto label_1b29f0;
            case 0x1B29F4u: goto label_1b29f4;
            case 0x1B29F8u: goto label_1b29f8;
            case 0x1B29FCu: goto label_1b29fc;
            case 0x1B2A00u: goto label_1b2a00;
            case 0x1B2A04u: goto label_1b2a04;
            case 0x1B2A08u: goto label_1b2a08;
            case 0x1B2A0Cu: goto label_1b2a0c;
            case 0x1B2A10u: goto label_1b2a10;
            case 0x1B2A14u: goto label_1b2a14;
            case 0x1B2A18u: goto label_1b2a18;
            case 0x1B2A1Cu: goto label_1b2a1c;
            case 0x1B2A20u: goto label_1b2a20;
            case 0x1B2A24u: goto label_1b2a24;
            case 0x1B2A28u: goto label_1b2a28;
            case 0x1B2A2Cu: goto label_1b2a2c;
            case 0x1B2A30u: goto label_1b2a30;
            case 0x1B2A34u: goto label_1b2a34;
            case 0x1B2A38u: goto label_1b2a38;
            case 0x1B2A3Cu: goto label_1b2a3c;
            case 0x1B2A40u: goto label_1b2a40;
            case 0x1B2A44u: goto label_1b2a44;
            case 0x1B2A48u: goto label_1b2a48;
            case 0x1B2A4Cu: goto label_1b2a4c;
            case 0x1B2A50u: goto label_1b2a50;
            case 0x1B2A54u: goto label_1b2a54;
            case 0x1B2A58u: goto label_1b2a58;
            case 0x1B2A5Cu: goto label_1b2a5c;
            case 0x1B2A60u: goto label_1b2a60;
            case 0x1B2A64u: goto label_1b2a64;
            case 0x1B2A68u: goto label_1b2a68;
            case 0x1B2A6Cu: goto label_1b2a6c;
            case 0x1B2A70u: goto label_1b2a70;
            case 0x1B2A74u: goto label_1b2a74;
            case 0x1B2A78u: goto label_1b2a78;
            case 0x1B2A7Cu: goto label_1b2a7c;
            case 0x1B2A80u: goto label_1b2a80;
            case 0x1B2A84u: goto label_1b2a84;
            case 0x1B2A88u: goto label_1b2a88;
            case 0x1B2A8Cu: goto label_1b2a8c;
            case 0x1B2A90u: goto label_1b2a90;
            case 0x1B2A94u: goto label_1b2a94;
            case 0x1B2A98u: goto label_1b2a98;
            case 0x1B2A9Cu: goto label_1b2a9c;
            case 0x1B2AA0u: goto label_1b2aa0;
            case 0x1B2AA4u: goto label_1b2aa4;
            case 0x1B2AA8u: goto label_1b2aa8;
            case 0x1B2AACu: goto label_1b2aac;
            case 0x1B2AB0u: goto label_1b2ab0;
            case 0x1B2AB4u: goto label_1b2ab4;
            case 0x1B2AB8u: goto label_1b2ab8;
            case 0x1B2ABCu: goto label_1b2abc;
            case 0x1B2AC0u: goto label_1b2ac0;
            case 0x1B2AC4u: goto label_1b2ac4;
            case 0x1B2AC8u: goto label_1b2ac8;
            case 0x1B2ACCu: goto label_1b2acc;
            case 0x1B2AD0u: goto label_1b2ad0;
            case 0x1B2AD4u: goto label_1b2ad4;
            case 0x1B2AD8u: goto label_1b2ad8;
            case 0x1B2ADCu: goto label_1b2adc;
            case 0x1B2AE0u: goto label_1b2ae0;
            case 0x1B2AE4u: goto label_1b2ae4;
            case 0x1B2AE8u: goto label_1b2ae8;
            case 0x1B2AECu: goto label_1b2aec;
            case 0x1B2AF0u: goto label_1b2af0;
            case 0x1B2AF4u: goto label_1b2af4;
            case 0x1B2AF8u: goto label_1b2af8;
            case 0x1B2AFCu: goto label_1b2afc;
            case 0x1B2B00u: goto label_1b2b00;
            case 0x1B2B04u: goto label_1b2b04;
            case 0x1B2B08u: goto label_1b2b08;
            case 0x1B2B0Cu: goto label_1b2b0c;
            case 0x1B2B10u: goto label_1b2b10;
            case 0x1B2B14u: goto label_1b2b14;
            case 0x1B2B18u: goto label_1b2b18;
            case 0x1B2B1Cu: goto label_1b2b1c;
            case 0x1B2B20u: goto label_1b2b20;
            case 0x1B2B24u: goto label_1b2b24;
            case 0x1B2B28u: goto label_1b2b28;
            case 0x1B2B2Cu: goto label_1b2b2c;
            case 0x1B2B30u: goto label_1b2b30;
            case 0x1B2B34u: goto label_1b2b34;
            case 0x1B2B38u: goto label_1b2b38;
            case 0x1B2B3Cu: goto label_1b2b3c;
            case 0x1B2B40u: goto label_1b2b40;
            case 0x1B2B44u: goto label_1b2b44;
            case 0x1B2B48u: goto label_1b2b48;
            case 0x1B2B4Cu: goto label_1b2b4c;
            case 0x1B2B50u: goto label_1b2b50;
            case 0x1B2B54u: goto label_1b2b54;
            case 0x1B2B58u: goto label_1b2b58;
            case 0x1B2B5Cu: goto label_1b2b5c;
            case 0x1B2B60u: goto label_1b2b60;
            case 0x1B2B64u: goto label_1b2b64;
            case 0x1B2B68u: goto label_1b2b68;
            case 0x1B2B6Cu: goto label_1b2b6c;
            case 0x1B2B70u: goto label_1b2b70;
            case 0x1B2B74u: goto label_1b2b74;
            case 0x1B2B78u: goto label_1b2b78;
            case 0x1B2B7Cu: goto label_1b2b7c;
            case 0x1B2B80u: goto label_1b2b80;
            case 0x1B2B84u: goto label_1b2b84;
            case 0x1B2B88u: goto label_1b2b88;
            case 0x1B2B8Cu: goto label_1b2b8c;
            case 0x1B2B90u: goto label_1b2b90;
            case 0x1B2B94u: goto label_1b2b94;
            case 0x1B2B98u: goto label_1b2b98;
            case 0x1B2B9Cu: goto label_1b2b9c;
            case 0x1B2BA0u: goto label_1b2ba0;
            case 0x1B2BA4u: goto label_1b2ba4;
            case 0x1B2BA8u: goto label_1b2ba8;
            case 0x1B2BACu: goto label_1b2bac;
            case 0x1B2BB0u: goto label_1b2bb0;
            case 0x1B2BB4u: goto label_1b2bb4;
            case 0x1B2BB8u: goto label_1b2bb8;
            case 0x1B2BBCu: goto label_1b2bbc;
            case 0x1B2BC0u: goto label_1b2bc0;
            case 0x1B2BC4u: goto label_1b2bc4;
            case 0x1B2BC8u: goto label_1b2bc8;
            case 0x1B2BCCu: goto label_1b2bcc;
            case 0x1B2BD0u: goto label_1b2bd0;
            case 0x1B2BD4u: goto label_1b2bd4;
            case 0x1B2BD8u: goto label_1b2bd8;
            case 0x1B2BDCu: goto label_1b2bdc;
            case 0x1B2BE0u: goto label_1b2be0;
            case 0x1B2BE4u: goto label_1b2be4;
            case 0x1B2BE8u: goto label_1b2be8;
            case 0x1B2BECu: goto label_1b2bec;
            case 0x1B2BF0u: goto label_1b2bf0;
            case 0x1B2BF4u: goto label_1b2bf4;
            case 0x1B2BF8u: goto label_1b2bf8;
            case 0x1B2BFCu: goto label_1b2bfc;
            case 0x1B2C00u: goto label_1b2c00;
            case 0x1B2C04u: goto label_1b2c04;
            case 0x1B2C08u: goto label_1b2c08;
            case 0x1B2C0Cu: goto label_1b2c0c;
            case 0x1B2C10u: goto label_1b2c10;
            case 0x1B2C14u: goto label_1b2c14;
            case 0x1B2C18u: goto label_1b2c18;
            case 0x1B2C1Cu: goto label_1b2c1c;
            case 0x1B2C20u: goto label_1b2c20;
            case 0x1B2C24u: goto label_1b2c24;
            case 0x1B2C28u: goto label_1b2c28;
            case 0x1B2C2Cu: goto label_1b2c2c;
            case 0x1B2C30u: goto label_1b2c30;
            case 0x1B2C34u: goto label_1b2c34;
            case 0x1B2C38u: goto label_1b2c38;
            case 0x1B2C3Cu: goto label_1b2c3c;
            case 0x1B2C40u: goto label_1b2c40;
            case 0x1B2C44u: goto label_1b2c44;
            case 0x1B2C48u: goto label_1b2c48;
            case 0x1B2C4Cu: goto label_1b2c4c;
            case 0x1B2C50u: goto label_1b2c50;
            case 0x1B2C54u: goto label_1b2c54;
            case 0x1B2C58u: goto label_1b2c58;
            case 0x1B2C5Cu: goto label_1b2c5c;
            case 0x1B2C60u: goto label_1b2c60;
            case 0x1B2C64u: goto label_1b2c64;
            case 0x1B2C68u: goto label_1b2c68;
            case 0x1B2C6Cu: goto label_1b2c6c;
            case 0x1B2C70u: goto label_1b2c70;
            case 0x1B2C74u: goto label_1b2c74;
            case 0x1B2C78u: goto label_1b2c78;
            case 0x1B2C7Cu: goto label_1b2c7c;
            case 0x1B2C80u: goto label_1b2c80;
            case 0x1B2C84u: goto label_1b2c84;
            case 0x1B2C88u: goto label_1b2c88;
            case 0x1B2C8Cu: goto label_1b2c8c;
            case 0x1B2C90u: goto label_1b2c90;
            case 0x1B2C94u: goto label_1b2c94;
            case 0x1B2C98u: goto label_1b2c98;
            case 0x1B2C9Cu: goto label_1b2c9c;
            case 0x1B2CA0u: goto label_1b2ca0;
            case 0x1B2CA4u: goto label_1b2ca4;
            case 0x1B2CA8u: goto label_1b2ca8;
            case 0x1B2CACu: goto label_1b2cac;
            case 0x1B2CB0u: goto label_1b2cb0;
            case 0x1B2CB4u: goto label_1b2cb4;
            case 0x1B2CB8u: goto label_1b2cb8;
            case 0x1B2CBCu: goto label_1b2cbc;
            case 0x1B2CC0u: goto label_1b2cc0;
            case 0x1B2CC4u: goto label_1b2cc4;
            case 0x1B2CC8u: goto label_1b2cc8;
            case 0x1B2CCCu: goto label_1b2ccc;
            case 0x1B2CD0u: goto label_1b2cd0;
            case 0x1B2CD4u: goto label_1b2cd4;
            case 0x1B2CD8u: goto label_1b2cd8;
            case 0x1B2CDCu: goto label_1b2cdc;
            case 0x1B2CE0u: goto label_1b2ce0;
            case 0x1B2CE4u: goto label_1b2ce4;
            case 0x1B2CE8u: goto label_1b2ce8;
            case 0x1B2CECu: goto label_1b2cec;
            case 0x1B2CF0u: goto label_1b2cf0;
            case 0x1B2CF4u: goto label_1b2cf4;
            case 0x1B2CF8u: goto label_1b2cf8;
            case 0x1B2CFCu: goto label_1b2cfc;
            case 0x1B2D00u: goto label_1b2d00;
            case 0x1B2D04u: goto label_1b2d04;
            case 0x1B2D08u: goto label_1b2d08;
            case 0x1B2D0Cu: goto label_1b2d0c;
            case 0x1B2D10u: goto label_1b2d10;
            case 0x1B2D14u: goto label_1b2d14;
            case 0x1B2D18u: goto label_1b2d18;
            case 0x1B2D1Cu: goto label_1b2d1c;
            case 0x1B2D20u: goto label_1b2d20;
            case 0x1B2D24u: goto label_1b2d24;
            case 0x1B2D28u: goto label_1b2d28;
            case 0x1B2D2Cu: goto label_1b2d2c;
            case 0x1B2D30u: goto label_1b2d30;
            case 0x1B2D34u: goto label_1b2d34;
            case 0x1B2D38u: goto label_1b2d38;
            case 0x1B2D3Cu: goto label_1b2d3c;
            case 0x1B2D40u: goto label_1b2d40;
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D48u: goto label_1b2d48;
            case 0x1B2D4Cu: goto label_1b2d4c;
            case 0x1B2D50u: goto label_1b2d50;
            case 0x1B2D54u: goto label_1b2d54;
            case 0x1B2D58u: goto label_1b2d58;
            case 0x1B2D5Cu: goto label_1b2d5c;
            case 0x1B2D60u: goto label_1b2d60;
            case 0x1B2D64u: goto label_1b2d64;
            case 0x1B2D68u: goto label_1b2d68;
            case 0x1B2D6Cu: goto label_1b2d6c;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2D74u: goto label_1b2d74;
            case 0x1B2D78u: goto label_1b2d78;
            case 0x1B2D7Cu: goto label_1b2d7c;
            case 0x1B2D80u: goto label_1b2d80;
            case 0x1B2D84u: goto label_1b2d84;
            case 0x1B2D88u: goto label_1b2d88;
            case 0x1B2D8Cu: goto label_1b2d8c;
            case 0x1B2D90u: goto label_1b2d90;
            case 0x1B2D94u: goto label_1b2d94;
            case 0x1B2D98u: goto label_1b2d98;
            case 0x1B2D9Cu: goto label_1b2d9c;
            case 0x1B2DA0u: goto label_1b2da0;
            case 0x1B2DA4u: goto label_1b2da4;
            case 0x1B2DA8u: goto label_1b2da8;
            case 0x1B2DACu: goto label_1b2dac;
            case 0x1B2DB0u: goto label_1b2db0;
            case 0x1B2DB4u: goto label_1b2db4;
            case 0x1B2DB8u: goto label_1b2db8;
            case 0x1B2DBCu: goto label_1b2dbc;
            case 0x1B2DC0u: goto label_1b2dc0;
            case 0x1B2DC4u: goto label_1b2dc4;
            case 0x1B2DC8u: goto label_1b2dc8;
            case 0x1B2DCCu: goto label_1b2dcc;
            case 0x1B2DD0u: goto label_1b2dd0;
            case 0x1B2DD4u: goto label_1b2dd4;
            case 0x1B2DD8u: goto label_1b2dd8;
            case 0x1B2DDCu: goto label_1b2ddc;
            case 0x1B2DE0u: goto label_1b2de0;
            case 0x1B2DE4u: goto label_1b2de4;
            case 0x1B2DE8u: goto label_1b2de8;
            case 0x1B2DECu: goto label_1b2dec;
            case 0x1B2DF0u: goto label_1b2df0;
            case 0x1B2DF4u: goto label_1b2df4;
            case 0x1B2DF8u: goto label_1b2df8;
            case 0x1B2DFCu: goto label_1b2dfc;
            case 0x1B2E00u: goto label_1b2e00;
            case 0x1B2E04u: goto label_1b2e04;
            case 0x1B2E08u: goto label_1b2e08;
            case 0x1B2E0Cu: goto label_1b2e0c;
            case 0x1B2E10u: goto label_1b2e10;
            case 0x1B2E14u: goto label_1b2e14;
            case 0x1B2E18u: goto label_1b2e18;
            case 0x1B2E1Cu: goto label_1b2e1c;
            case 0x1B2E20u: goto label_1b2e20;
            case 0x1B2E24u: goto label_1b2e24;
            case 0x1B2E28u: goto label_1b2e28;
            case 0x1B2E2Cu: goto label_1b2e2c;
            case 0x1B2E30u: goto label_1b2e30;
            case 0x1B2E34u: goto label_1b2e34;
            case 0x1B2E38u: goto label_1b2e38;
            case 0x1B2E3Cu: goto label_1b2e3c;
            case 0x1B2E40u: goto label_1b2e40;
            case 0x1B2E44u: goto label_1b2e44;
            case 0x1B2E48u: goto label_1b2e48;
            case 0x1B2E4Cu: goto label_1b2e4c;
            case 0x1B2E50u: goto label_1b2e50;
            case 0x1B2E54u: goto label_1b2e54;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E5Cu: goto label_1b2e5c;
            case 0x1B2E60u: goto label_1b2e60;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2E68u: goto label_1b2e68;
            case 0x1B2E6Cu: goto label_1b2e6c;
            case 0x1B2E70u: goto label_1b2e70;
            case 0x1B2E74u: goto label_1b2e74;
            case 0x1B2E78u: goto label_1b2e78;
            case 0x1B2E7Cu: goto label_1b2e7c;
            case 0x1B2E80u: goto label_1b2e80;
            case 0x1B2E84u: goto label_1b2e84;
            case 0x1B2E88u: goto label_1b2e88;
            case 0x1B2E8Cu: goto label_1b2e8c;
            case 0x1B2E90u: goto label_1b2e90;
            case 0x1B2E94u: goto label_1b2e94;
            case 0x1B2E98u: goto label_1b2e98;
            case 0x1B2E9Cu: goto label_1b2e9c;
            case 0x1B2EA0u: goto label_1b2ea0;
            case 0x1B2EA4u: goto label_1b2ea4;
            case 0x1B2EA8u: goto label_1b2ea8;
            case 0x1B2EACu: goto label_1b2eac;
            case 0x1B2EB0u: goto label_1b2eb0;
            case 0x1B2EB4u: goto label_1b2eb4;
            case 0x1B2EB8u: goto label_1b2eb8;
            case 0x1B2EBCu: goto label_1b2ebc;
            case 0x1B2EC0u: goto label_1b2ec0;
            case 0x1B2EC4u: goto label_1b2ec4;
            case 0x1B2EC8u: goto label_1b2ec8;
            case 0x1B2ECCu: goto label_1b2ecc;
            case 0x1B2ED0u: goto label_1b2ed0;
            case 0x1B2ED4u: goto label_1b2ed4;
            case 0x1B2ED8u: goto label_1b2ed8;
            case 0x1B2EDCu: goto label_1b2edc;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2EE4u: goto label_1b2ee4;
            case 0x1B2EE8u: goto label_1b2ee8;
            case 0x1B2EECu: goto label_1b2eec;
            case 0x1B2EF0u: goto label_1b2ef0;
            case 0x1B2EF4u: goto label_1b2ef4;
            case 0x1B2EF8u: goto label_1b2ef8;
            case 0x1B2EFCu: goto label_1b2efc;
            case 0x1B2F00u: goto label_1b2f00;
            case 0x1B2F04u: goto label_1b2f04;
            case 0x1B2F08u: goto label_1b2f08;
            case 0x1B2F0Cu: goto label_1b2f0c;
            case 0x1B2F10u: goto label_1b2f10;
            case 0x1B2F14u: goto label_1b2f14;
            case 0x1B2F18u: goto label_1b2f18;
            case 0x1B2F1Cu: goto label_1b2f1c;
            case 0x1B2F20u: goto label_1b2f20;
            case 0x1B2F24u: goto label_1b2f24;
            case 0x1B2F28u: goto label_1b2f28;
            case 0x1B2F2Cu: goto label_1b2f2c;
            case 0x1B2F30u: goto label_1b2f30;
            case 0x1B2F34u: goto label_1b2f34;
            case 0x1B2F38u: goto label_1b2f38;
            case 0x1B2F3Cu: goto label_1b2f3c;
            case 0x1B2F40u: goto label_1b2f40;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F48u: goto label_1b2f48;
            case 0x1B2F4Cu: goto label_1b2f4c;
            case 0x1B2F50u: goto label_1b2f50;
            case 0x1B2F54u: goto label_1b2f54;
            case 0x1B2F58u: goto label_1b2f58;
            case 0x1B2F5Cu: goto label_1b2f5c;
            case 0x1B2F60u: goto label_1b2f60;
            case 0x1B2F64u: goto label_1b2f64;
            case 0x1B2F68u: goto label_1b2f68;
            case 0x1B2F6Cu: goto label_1b2f6c;
            case 0x1B2F70u: goto label_1b2f70;
            case 0x1B2F74u: goto label_1b2f74;
            case 0x1B2F78u: goto label_1b2f78;
            case 0x1B2F7Cu: goto label_1b2f7c;
            case 0x1B2F80u: goto label_1b2f80;
            case 0x1B2F84u: goto label_1b2f84;
            case 0x1B2F88u: goto label_1b2f88;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F90u: goto label_1b2f90;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2F98u: goto label_1b2f98;
            case 0x1B2F9Cu: goto label_1b2f9c;
            case 0x1B2FA0u: goto label_1b2fa0;
            case 0x1B2FA4u: goto label_1b2fa4;
            case 0x1B2FA8u: goto label_1b2fa8;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FB4u: goto label_1b2fb4;
            case 0x1B2FB8u: goto label_1b2fb8;
            case 0x1B2FBCu: goto label_1b2fbc;
            case 0x1B2FC0u: goto label_1b2fc0;
            case 0x1B2FC4u: goto label_1b2fc4;
            case 0x1B2FC8u: goto label_1b2fc8;
            case 0x1B2FCCu: goto label_1b2fcc;
            case 0x1B2FD0u: goto label_1b2fd0;
            case 0x1B2FD4u: goto label_1b2fd4;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B2FDCu: goto label_1b2fdc;
            case 0x1B2FE0u: goto label_1b2fe0;
            case 0x1B2FE4u: goto label_1b2fe4;
            case 0x1B2FE8u: goto label_1b2fe8;
            case 0x1B2FECu: goto label_1b2fec;
            case 0x1B2FF0u: goto label_1b2ff0;
            case 0x1B2FF4u: goto label_1b2ff4;
            case 0x1B2FF8u: goto label_1b2ff8;
            case 0x1B2FFCu: goto label_1b2ffc;
            case 0x1B3000u: goto label_1b3000;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B3008u: goto label_1b3008;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3010u: goto label_1b3010;
            case 0x1B3014u: goto label_1b3014;
            case 0x1B3018u: goto label_1b3018;
            case 0x1B301Cu: goto label_1b301c;
            case 0x1B3020u: goto label_1b3020;
            case 0x1B3024u: goto label_1b3024;
            case 0x1B3028u: goto label_1b3028;
            case 0x1B302Cu: goto label_1b302c;
            case 0x1B3030u: goto label_1b3030;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B303Cu: goto label_1b303c;
            case 0x1B3040u: goto label_1b3040;
            case 0x1B3044u: goto label_1b3044;
            case 0x1B3048u: goto label_1b3048;
            case 0x1B304Cu: goto label_1b304c;
            case 0x1B3050u: goto label_1b3050;
            case 0x1B3054u: goto label_1b3054;
            case 0x1B3058u: goto label_1b3058;
            case 0x1B305Cu: goto label_1b305c;
            case 0x1B3060u: goto label_1b3060;
            case 0x1B3064u: goto label_1b3064;
            case 0x1B3068u: goto label_1b3068;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3070u: goto label_1b3070;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B3078u: goto label_1b3078;
            case 0x1B307Cu: goto label_1b307c;
            case 0x1B3080u: goto label_1b3080;
            case 0x1B3084u: goto label_1b3084;
            case 0x1B3088u: goto label_1b3088;
            case 0x1B308Cu: goto label_1b308c;
            case 0x1B3090u: goto label_1b3090;
            case 0x1B3094u: goto label_1b3094;
            case 0x1B3098u: goto label_1b3098;
            case 0x1B309Cu: goto label_1b309c;
            case 0x1B30A0u: goto label_1b30a0;
            case 0x1B30A4u: goto label_1b30a4;
            case 0x1B30A8u: goto label_1b30a8;
            case 0x1B30ACu: goto label_1b30ac;
            case 0x1B30B0u: goto label_1b30b0;
            case 0x1B30B4u: goto label_1b30b4;
            case 0x1B30B8u: goto label_1b30b8;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C0u: goto label_1b30c0;
            case 0x1B30C4u: goto label_1b30c4;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B30CCu: goto label_1b30cc;
            case 0x1B30D0u: goto label_1b30d0;
            case 0x1B30D4u: goto label_1b30d4;
            case 0x1B30D8u: goto label_1b30d8;
            case 0x1B30DCu: goto label_1b30dc;
            case 0x1B30E0u: goto label_1b30e0;
            case 0x1B30E4u: goto label_1b30e4;
            case 0x1B30E8u: goto label_1b30e8;
            case 0x1B30ECu: goto label_1b30ec;
            case 0x1B30F0u: goto label_1b30f0;
            case 0x1B30F4u: goto label_1b30f4;
            case 0x1B30F8u: goto label_1b30f8;
            case 0x1B30FCu: goto label_1b30fc;
            case 0x1B3100u: goto label_1b3100;
            case 0x1B3104u: goto label_1b3104;
            case 0x1B3108u: goto label_1b3108;
            case 0x1B310Cu: goto label_1b310c;
            case 0x1B3110u: goto label_1b3110;
            case 0x1B3114u: goto label_1b3114;
            case 0x1B3118u: goto label_1b3118;
            case 0x1B311Cu: goto label_1b311c;
            case 0x1B3120u: goto label_1b3120;
            case 0x1B3124u: goto label_1b3124;
            case 0x1B3128u: goto label_1b3128;
            case 0x1B312Cu: goto label_1b312c;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3134u: goto label_1b3134;
            case 0x1B3138u: goto label_1b3138;
            case 0x1B313Cu: goto label_1b313c;
            case 0x1B3140u: goto label_1b3140;
            case 0x1B3144u: goto label_1b3144;
            case 0x1B3148u: goto label_1b3148;
            case 0x1B314Cu: goto label_1b314c;
            case 0x1B3150u: goto label_1b3150;
            case 0x1B3154u: goto label_1b3154;
            case 0x1B3158u: goto label_1b3158;
            case 0x1B315Cu: goto label_1b315c;
            case 0x1B3160u: goto label_1b3160;
            case 0x1B3164u: goto label_1b3164;
            case 0x1B3168u: goto label_1b3168;
            case 0x1B316Cu: goto label_1b316c;
            case 0x1B3170u: goto label_1b3170;
            case 0x1B3174u: goto label_1b3174;
            case 0x1B3178u: goto label_1b3178;
            case 0x1B317Cu: goto label_1b317c;
            case 0x1B3180u: goto label_1b3180;
            case 0x1B3184u: goto label_1b3184;
            case 0x1B3188u: goto label_1b3188;
            case 0x1B318Cu: goto label_1b318c;
            case 0x1B3190u: goto label_1b3190;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B3198u: goto label_1b3198;
            case 0x1B319Cu: goto label_1b319c;
            case 0x1B31A0u: goto label_1b31a0;
            case 0x1B31A4u: goto label_1b31a4;
            case 0x1B31A8u: goto label_1b31a8;
            case 0x1B31ACu: goto label_1b31ac;
            case 0x1B31B0u: goto label_1b31b0;
            case 0x1B31B4u: goto label_1b31b4;
            case 0x1B31B8u: goto label_1b31b8;
            case 0x1B31BCu: goto label_1b31bc;
            case 0x1B31C0u: goto label_1b31c0;
            case 0x1B31C4u: goto label_1b31c4;
            case 0x1B31C8u: goto label_1b31c8;
            case 0x1B31CCu: goto label_1b31cc;
            case 0x1B31D0u: goto label_1b31d0;
            case 0x1B31D4u: goto label_1b31d4;
            case 0x1B31D8u: goto label_1b31d8;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E0u: goto label_1b31e0;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31E8u: goto label_1b31e8;
            case 0x1B31ECu: goto label_1b31ec;
            case 0x1B31F0u: goto label_1b31f0;
            case 0x1B31F4u: goto label_1b31f4;
            case 0x1B31F8u: goto label_1b31f8;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3204u: goto label_1b3204;
            case 0x1B3208u: goto label_1b3208;
            case 0x1B320Cu: goto label_1b320c;
            case 0x1B3210u: goto label_1b3210;
            case 0x1B3214u: goto label_1b3214;
            case 0x1B3218u: goto label_1b3218;
            case 0x1B321Cu: goto label_1b321c;
            case 0x1B3220u: goto label_1b3220;
            case 0x1B3224u: goto label_1b3224;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B322Cu: goto label_1b322c;
            case 0x1B3230u: goto label_1b3230;
            case 0x1B3234u: goto label_1b3234;
            case 0x1B3238u: goto label_1b3238;
            case 0x1B323Cu: goto label_1b323c;
            case 0x1B3240u: goto label_1b3240;
            case 0x1B3244u: goto label_1b3244;
            case 0x1B3248u: goto label_1b3248;
            case 0x1B324Cu: goto label_1b324c;
            case 0x1B3250u: goto label_1b3250;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B3258u: goto label_1b3258;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3260u: goto label_1b3260;
            case 0x1B3264u: goto label_1b3264;
            case 0x1B3268u: goto label_1b3268;
            case 0x1B326Cu: goto label_1b326c;
            case 0x1B3270u: goto label_1b3270;
            case 0x1B3274u: goto label_1b3274;
            case 0x1B3278u: goto label_1b3278;
            case 0x1B327Cu: goto label_1b327c;
            case 0x1B3280u: goto label_1b3280;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B328Cu: goto label_1b328c;
            case 0x1B3290u: goto label_1b3290;
            case 0x1B3294u: goto label_1b3294;
            case 0x1B3298u: goto label_1b3298;
            case 0x1B329Cu: goto label_1b329c;
            case 0x1B32A0u: goto label_1b32a0;
            case 0x1B32A4u: goto label_1b32a4;
            case 0x1B32A8u: goto label_1b32a8;
            case 0x1B32ACu: goto label_1b32ac;
            case 0x1B32B0u: goto label_1b32b0;
            case 0x1B32B4u: goto label_1b32b4;
            case 0x1B32B8u: goto label_1b32b8;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C0u: goto label_1b32c0;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B32C8u: goto label_1b32c8;
            case 0x1B32CCu: goto label_1b32cc;
            case 0x1B32D0u: goto label_1b32d0;
            case 0x1B32D4u: goto label_1b32d4;
            case 0x1B32D8u: goto label_1b32d8;
            case 0x1B32DCu: goto label_1b32dc;
            case 0x1B32E0u: goto label_1b32e0;
            case 0x1B32E4u: goto label_1b32e4;
            case 0x1B32E8u: goto label_1b32e8;
            case 0x1B32ECu: goto label_1b32ec;
            case 0x1B32F0u: goto label_1b32f0;
            case 0x1B32F4u: goto label_1b32f4;
            case 0x1B32F8u: goto label_1b32f8;
            case 0x1B32FCu: goto label_1b32fc;
            case 0x1B3300u: goto label_1b3300;
            case 0x1B3304u: goto label_1b3304;
            case 0x1B3308u: goto label_1b3308;
            case 0x1B330Cu: goto label_1b330c;
            case 0x1B3310u: goto label_1b3310;
            case 0x1B3314u: goto label_1b3314;
            case 0x1B3318u: goto label_1b3318;
            case 0x1B331Cu: goto label_1b331c;
            case 0x1B3320u: goto label_1b3320;
            case 0x1B3324u: goto label_1b3324;
            case 0x1B3328u: goto label_1b3328;
            case 0x1B332Cu: goto label_1b332c;
            case 0x1B3330u: goto label_1b3330;
            case 0x1B3334u: goto label_1b3334;
            case 0x1B3338u: goto label_1b3338;
            case 0x1B333Cu: goto label_1b333c;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B3344u: goto label_1b3344;
            case 0x1B3348u: goto label_1b3348;
            case 0x1B334Cu: goto label_1b334c;
            case 0x1B3350u: goto label_1b3350;
            case 0x1B3354u: goto label_1b3354;
            case 0x1B3358u: goto label_1b3358;
            case 0x1B335Cu: goto label_1b335c;
            case 0x1B3360u: goto label_1b3360;
            case 0x1B3364u: goto label_1b3364;
            case 0x1B3368u: goto label_1b3368;
            case 0x1B336Cu: goto label_1b336c;
            case 0x1B3370u: goto label_1b3370;
            case 0x1B3374u: goto label_1b3374;
            case 0x1B3378u: goto label_1b3378;
            case 0x1B337Cu: goto label_1b337c;
            case 0x1B3380u: goto label_1b3380;
            case 0x1B3384u: goto label_1b3384;
            case 0x1B3388u: goto label_1b3388;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            case 0x1B3394u: goto label_1b3394;
            case 0x1B3398u: goto label_1b3398;
            case 0x1B339Cu: goto label_1b339c;
            case 0x1B33A0u: goto label_1b33a0;
            case 0x1B33A4u: goto label_1b33a4;
            case 0x1B33A8u: goto label_1b33a8;
            case 0x1B33ACu: goto label_1b33ac;
            case 0x1B33B0u: goto label_1b33b0;
            case 0x1B33B4u: goto label_1b33b4;
            case 0x1B33B8u: goto label_1b33b8;
            case 0x1B33BCu: goto label_1b33bc;
            case 0x1B33C0u: goto label_1b33c0;
            case 0x1B33C4u: goto label_1b33c4;
            case 0x1B33C8u: goto label_1b33c8;
            case 0x1B33CCu: goto label_1b33cc;
            case 0x1B33D0u: goto label_1b33d0;
            case 0x1B33D4u: goto label_1b33d4;
            case 0x1B33D8u: goto label_1b33d8;
            case 0x1B33DCu: goto label_1b33dc;
            case 0x1B33E0u: goto label_1b33e0;
            case 0x1B33E4u: goto label_1b33e4;
            case 0x1B33E8u: goto label_1b33e8;
            case 0x1B33ECu: goto label_1b33ec;
            case 0x1B33F0u: goto label_1b33f0;
            case 0x1B33F4u: goto label_1b33f4;
            case 0x1B33F8u: goto label_1b33f8;
            case 0x1B33FCu: goto label_1b33fc;
            case 0x1B3400u: goto label_1b3400;
            case 0x1B3404u: goto label_1b3404;
            case 0x1B3408u: goto label_1b3408;
            case 0x1B340Cu: goto label_1b340c;
            case 0x1B3410u: goto label_1b3410;
            case 0x1B3414u: goto label_1b3414;
            case 0x1B3418u: goto label_1b3418;
            case 0x1B341Cu: goto label_1b341c;
            case 0x1B3420u: goto label_1b3420;
            case 0x1B3424u: goto label_1b3424;
            case 0x1B3428u: goto label_1b3428;
            case 0x1B342Cu: goto label_1b342c;
            case 0x1B3430u: goto label_1b3430;
            case 0x1B3434u: goto label_1b3434;
            case 0x1B3438u: goto label_1b3438;
            case 0x1B343Cu: goto label_1b343c;
            case 0x1B3440u: goto label_1b3440;
            case 0x1B3444u: goto label_1b3444;
            case 0x1B3448u: goto label_1b3448;
            case 0x1B344Cu: goto label_1b344c;
            case 0x1B3450u: goto label_1b3450;
            case 0x1B3454u: goto label_1b3454;
            case 0x1B3458u: goto label_1b3458;
            case 0x1B345Cu: goto label_1b345c;
            case 0x1B3460u: goto label_1b3460;
            case 0x1B3464u: goto label_1b3464;
            case 0x1B3468u: goto label_1b3468;
            case 0x1B346Cu: goto label_1b346c;
            case 0x1B3470u: goto label_1b3470;
            case 0x1B3474u: goto label_1b3474;
            case 0x1B3478u: goto label_1b3478;
            case 0x1B347Cu: goto label_1b347c;
            case 0x1B3480u: goto label_1b3480;
            case 0x1B3484u: goto label_1b3484;
            case 0x1B3488u: goto label_1b3488;
            case 0x1B348Cu: goto label_1b348c;
            case 0x1B3490u: goto label_1b3490;
            case 0x1B3494u: goto label_1b3494;
            case 0x1B3498u: goto label_1b3498;
            case 0x1B349Cu: goto label_1b349c;
            case 0x1B34A0u: goto label_1b34a0;
            case 0x1B34A4u: goto label_1b34a4;
            case 0x1B34A8u: goto label_1b34a8;
            case 0x1B34ACu: goto label_1b34ac;
            case 0x1B34B0u: goto label_1b34b0;
            case 0x1B34B4u: goto label_1b34b4;
            case 0x1B34B8u: goto label_1b34b8;
            case 0x1B34BCu: goto label_1b34bc;
            case 0x1B34C0u: goto label_1b34c0;
            case 0x1B34C4u: goto label_1b34c4;
            case 0x1B34C8u: goto label_1b34c8;
            case 0x1B34CCu: goto label_1b34cc;
            case 0x1B34D0u: goto label_1b34d0;
            case 0x1B34D4u: goto label_1b34d4;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34DCu: goto label_1b34dc;
            case 0x1B34E0u: goto label_1b34e0;
            case 0x1B34E4u: goto label_1b34e4;
            case 0x1B34E8u: goto label_1b34e8;
            case 0x1B34ECu: goto label_1b34ec;
            case 0x1B34F0u: goto label_1b34f0;
            case 0x1B34F4u: goto label_1b34f4;
            case 0x1B34F8u: goto label_1b34f8;
            case 0x1B34FCu: goto label_1b34fc;
            case 0x1B3500u: goto label_1b3500;
            case 0x1B3504u: goto label_1b3504;
            case 0x1B3508u: goto label_1b3508;
            case 0x1B350Cu: goto label_1b350c;
            case 0x1B3510u: goto label_1b3510;
            case 0x1B3514u: goto label_1b3514;
            case 0x1B3518u: goto label_1b3518;
            case 0x1B351Cu: goto label_1b351c;
            case 0x1B3520u: goto label_1b3520;
            case 0x1B3524u: goto label_1b3524;
            case 0x1B3528u: goto label_1b3528;
            case 0x1B352Cu: goto label_1b352c;
            case 0x1B3530u: goto label_1b3530;
            case 0x1B3534u: goto label_1b3534;
            case 0x1B3538u: goto label_1b3538;
            case 0x1B353Cu: goto label_1b353c;
            case 0x1B3540u: goto label_1b3540;
            case 0x1B3544u: goto label_1b3544;
            case 0x1B3548u: goto label_1b3548;
            case 0x1B354Cu: goto label_1b354c;
            case 0x1B3550u: goto label_1b3550;
            case 0x1B3554u: goto label_1b3554;
            case 0x1B3558u: goto label_1b3558;
            case 0x1B355Cu: goto label_1b355c;
            case 0x1B3560u: goto label_1b3560;
            case 0x1B3564u: goto label_1b3564;
            case 0x1B3568u: goto label_1b3568;
            case 0x1B356Cu: goto label_1b356c;
            case 0x1B3570u: goto label_1b3570;
            case 0x1B3574u: goto label_1b3574;
            case 0x1B3578u: goto label_1b3578;
            case 0x1B357Cu: goto label_1b357c;
            case 0x1B3580u: goto label_1b3580;
            case 0x1B3584u: goto label_1b3584;
            case 0x1B3588u: goto label_1b3588;
            case 0x1B358Cu: goto label_1b358c;
            case 0x1B3590u: goto label_1b3590;
            case 0x1B3594u: goto label_1b3594;
            case 0x1B3598u: goto label_1b3598;
            case 0x1B359Cu: goto label_1b359c;
            case 0x1B35A0u: goto label_1b35a0;
            case 0x1B35A4u: goto label_1b35a4;
            case 0x1B35A8u: goto label_1b35a8;
            case 0x1B35ACu: goto label_1b35ac;
            case 0x1B35B0u: goto label_1b35b0;
            case 0x1B35B4u: goto label_1b35b4;
            case 0x1B35B8u: goto label_1b35b8;
            case 0x1B35BCu: goto label_1b35bc;
            case 0x1B35C0u: goto label_1b35c0;
            case 0x1B35C4u: goto label_1b35c4;
            case 0x1B35C8u: goto label_1b35c8;
            case 0x1B35CCu: goto label_1b35cc;
            case 0x1B35D0u: goto label_1b35d0;
            case 0x1B35D4u: goto label_1b35d4;
            case 0x1B35D8u: goto label_1b35d8;
            case 0x1B35DCu: goto label_1b35dc;
            case 0x1B35E0u: goto label_1b35e0;
            case 0x1B35E4u: goto label_1b35e4;
            case 0x1B35E8u: goto label_1b35e8;
            case 0x1B35ECu: goto label_1b35ec;
            case 0x1B35F0u: goto label_1b35f0;
            case 0x1B35F4u: goto label_1b35f4;
            case 0x1B35F8u: goto label_1b35f8;
            case 0x1B35FCu: goto label_1b35fc;
            case 0x1B3600u: goto label_1b3600;
            case 0x1B3604u: goto label_1b3604;
            case 0x1B3608u: goto label_1b3608;
            case 0x1B360Cu: goto label_1b360c;
            case 0x1B3610u: goto label_1b3610;
            case 0x1B3614u: goto label_1b3614;
            case 0x1B3618u: goto label_1b3618;
            case 0x1B361Cu: goto label_1b361c;
            case 0x1B3620u: goto label_1b3620;
            case 0x1B3624u: goto label_1b3624;
            case 0x1B3628u: goto label_1b3628;
            case 0x1B362Cu: goto label_1b362c;
            case 0x1B3630u: goto label_1b3630;
            case 0x1B3634u: goto label_1b3634;
            case 0x1B3638u: goto label_1b3638;
            case 0x1B363Cu: goto label_1b363c;
            case 0x1B3640u: goto label_1b3640;
            case 0x1B3644u: goto label_1b3644;
            case 0x1B3648u: goto label_1b3648;
            case 0x1B364Cu: goto label_1b364c;
            case 0x1B3650u: goto label_1b3650;
            case 0x1B3654u: goto label_1b3654;
            case 0x1B3658u: goto label_1b3658;
            case 0x1B365Cu: goto label_1b365c;
            case 0x1B3660u: goto label_1b3660;
            case 0x1B3664u: goto label_1b3664;
            case 0x1B3668u: goto label_1b3668;
            case 0x1B366Cu: goto label_1b366c;
            case 0x1B3670u: goto label_1b3670;
            case 0x1B3674u: goto label_1b3674;
            case 0x1B3678u: goto label_1b3678;
            case 0x1B367Cu: goto label_1b367c;
            case 0x1B3680u: goto label_1b3680;
            case 0x1B3684u: goto label_1b3684;
            case 0x1B3688u: goto label_1b3688;
            case 0x1B368Cu: goto label_1b368c;
            case 0x1B3690u: goto label_1b3690;
            case 0x1B3694u: goto label_1b3694;
            case 0x1B3698u: goto label_1b3698;
            case 0x1B369Cu: goto label_1b369c;
            case 0x1B36A0u: goto label_1b36a0;
            case 0x1B36A4u: goto label_1b36a4;
            case 0x1B36A8u: goto label_1b36a8;
            case 0x1B36ACu: goto label_1b36ac;
            case 0x1B36B0u: goto label_1b36b0;
            case 0x1B36B4u: goto label_1b36b4;
            case 0x1B36B8u: goto label_1b36b8;
            case 0x1B36BCu: goto label_1b36bc;
            case 0x1B36C0u: goto label_1b36c0;
            case 0x1B36C4u: goto label_1b36c4;
            case 0x1B36C8u: goto label_1b36c8;
            case 0x1B36CCu: goto label_1b36cc;
            case 0x1B36D0u: goto label_1b36d0;
            case 0x1B36D4u: goto label_1b36d4;
            case 0x1B36D8u: goto label_1b36d8;
            case 0x1B36DCu: goto label_1b36dc;
            case 0x1B36E0u: goto label_1b36e0;
            case 0x1B36E4u: goto label_1b36e4;
            case 0x1B36E8u: goto label_1b36e8;
            case 0x1B36ECu: goto label_1b36ec;
            case 0x1B36F0u: goto label_1b36f0;
            case 0x1B36F4u: goto label_1b36f4;
            case 0x1B36F8u: goto label_1b36f8;
            case 0x1B36FCu: goto label_1b36fc;
            case 0x1B3700u: goto label_1b3700;
            case 0x1B3704u: goto label_1b3704;
            case 0x1B3708u: goto label_1b3708;
            case 0x1B370Cu: goto label_1b370c;
            case 0x1B3710u: goto label_1b3710;
            case 0x1B3714u: goto label_1b3714;
            case 0x1B3718u: goto label_1b3718;
            case 0x1B371Cu: goto label_1b371c;
            case 0x1B3720u: goto label_1b3720;
            case 0x1B3724u: goto label_1b3724;
            case 0x1B3728u: goto label_1b3728;
            case 0x1B372Cu: goto label_1b372c;
            case 0x1B3730u: goto label_1b3730;
            case 0x1B3734u: goto label_1b3734;
            case 0x1B3738u: goto label_1b3738;
            case 0x1B373Cu: goto label_1b373c;
            case 0x1B3740u: goto label_1b3740;
            case 0x1B3744u: goto label_1b3744;
            case 0x1B3748u: goto label_1b3748;
            case 0x1B374Cu: goto label_1b374c;
            case 0x1B3750u: goto label_1b3750;
            case 0x1B3754u: goto label_1b3754;
            case 0x1B3758u: goto label_1b3758;
            case 0x1B375Cu: goto label_1b375c;
            case 0x1B3760u: goto label_1b3760;
            case 0x1B3764u: goto label_1b3764;
            case 0x1B3768u: goto label_1b3768;
            case 0x1B376Cu: goto label_1b376c;
            case 0x1B3770u: goto label_1b3770;
            case 0x1B3774u: goto label_1b3774;
            case 0x1B3778u: goto label_1b3778;
            case 0x1B377Cu: goto label_1b377c;
            case 0x1B3780u: goto label_1b3780;
            case 0x1B3784u: goto label_1b3784;
            case 0x1B3788u: goto label_1b3788;
            case 0x1B378Cu: goto label_1b378c;
            case 0x1B3790u: goto label_1b3790;
            case 0x1B3794u: goto label_1b3794;
            case 0x1B3798u: goto label_1b3798;
            case 0x1B379Cu: goto label_1b379c;
            case 0x1B37A0u: goto label_1b37a0;
            case 0x1B37A4u: goto label_1b37a4;
            case 0x1B37A8u: goto label_1b37a8;
            case 0x1B37ACu: goto label_1b37ac;
            case 0x1B37B0u: goto label_1b37b0;
            case 0x1B37B4u: goto label_1b37b4;
            case 0x1B37B8u: goto label_1b37b8;
            case 0x1B37BCu: goto label_1b37bc;
            case 0x1B37C0u: goto label_1b37c0;
            case 0x1B37C4u: goto label_1b37c4;
            case 0x1B37C8u: goto label_1b37c8;
            case 0x1B37CCu: goto label_1b37cc;
            case 0x1B37D0u: goto label_1b37d0;
            case 0x1B37D4u: goto label_1b37d4;
            case 0x1B37D8u: goto label_1b37d8;
            case 0x1B37DCu: goto label_1b37dc;
            case 0x1B37E0u: goto label_1b37e0;
            case 0x1B37E4u: goto label_1b37e4;
            case 0x1B37E8u: goto label_1b37e8;
            case 0x1B37ECu: goto label_1b37ec;
            case 0x1B37F0u: goto label_1b37f0;
            case 0x1B37F4u: goto label_1b37f4;
            case 0x1B37F8u: goto label_1b37f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B37B4u; }
            if (ctx->pc != 0x1B37B4u) { return; }
        }
    }
    ctx->pc = 0x1B37B4u;
label_1b37b4:
    // 0x1b37b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b37b8:
    if (ctx->pc == 0x1B37B8u) {
        ctx->pc = 0x1B37BCu;
        goto label_1b37bc;
    }
    ctx->pc = 0x1B37B4u;
    {
        const bool branch_taken_0x1b37b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37b4) {
            ctx->pc = 0x1B37E0u;
            goto label_1b37e0;
        }
    }
    ctx->pc = 0x1B37BCu;
label_1b37bc:
    // 0x1b37bc: 0x0  nop
    ctx->pc = 0x1b37bcu;
    // NOP
label_1b37c0:
    // 0x1b37c0: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b37c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1b37c4:
    // 0x1b37c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b37c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b37c8:
    // 0x1b37c8: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1b37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1b37cc:
    // 0x1b37cc: 0x24c61530  addiu       $a2, $a2, 0x1530
    ctx->pc = 0x1b37ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5424));
label_1b37d0:
    // 0x1b37d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b37d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b37d4:
    // 0x1b37d4: 0xc053ca4  jal         func_14F290
label_1b37d8:
    if (ctx->pc == 0x1B37D8u) {
        ctx->pc = 0x1B37D8u;
            // 0x1b37d8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B37DCu;
        goto label_1b37dc;
    }
    ctx->pc = 0x1B37D4u;
    SET_GPR_U32(ctx, 31, 0x1B37DCu);
    ctx->pc = 0x1B37D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37D4u;
            // 0x1b37d8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37DCu; }
        if (ctx->pc != 0x1B37DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B37DCu; }
        if (ctx->pc != 0x1B37DCu) { return; }
    }
    ctx->pc = 0x1B37DCu;
label_1b37dc:
    // 0x1b37dc: 0x0  nop
    ctx->pc = 0x1b37dcu;
    // NOP
label_1b37e0:
    // 0x1b37e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b37e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b37e4:
    // 0x1b37e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b37e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b37e8:
    // 0x1b37e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b37e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b37ec:
    // 0x1b37ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b37ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b37f0:
    // 0x1b37f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b37f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b37f4:
    // 0x1b37f4: 0x3e00008  jr          $ra
label_1b37f8:
    if (ctx->pc == 0x1B37F8u) {
        ctx->pc = 0x1B37F8u;
            // 0x1b37f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1B37FCu;
        goto label_fallthrough_0x1b37f4;
    }
    ctx->pc = 0x1B37F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B37F4u;
            // 0x1b37f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1820u: goto label_1b1820;
            case 0x1B1824u: goto label_1b1824;
            case 0x1B1828u: goto label_1b1828;
            case 0x1B182Cu: goto label_1b182c;
            case 0x1B1830u: goto label_1b1830;
            case 0x1B1834u: goto label_1b1834;
            case 0x1B1838u: goto label_1b1838;
            case 0x1B183Cu: goto label_1b183c;
            case 0x1B1840u: goto label_1b1840;
            case 0x1B1844u: goto label_1b1844;
            case 0x1B1848u: goto label_1b1848;
            case 0x1B184Cu: goto label_1b184c;
            case 0x1B1850u: goto label_1b1850;
            case 0x1B1854u: goto label_1b1854;
            case 0x1B1858u: goto label_1b1858;
            case 0x1B185Cu: goto label_1b185c;
            case 0x1B1860u: goto label_1b1860;
            case 0x1B1864u: goto label_1b1864;
            case 0x1B1868u: goto label_1b1868;
            case 0x1B186Cu: goto label_1b186c;
            case 0x1B1870u: goto label_1b1870;
            case 0x1B1874u: goto label_1b1874;
            case 0x1B1878u: goto label_1b1878;
            case 0x1B187Cu: goto label_1b187c;
            case 0x1B1880u: goto label_1b1880;
            case 0x1B1884u: goto label_1b1884;
            case 0x1B1888u: goto label_1b1888;
            case 0x1B188Cu: goto label_1b188c;
            case 0x1B1890u: goto label_1b1890;
            case 0x1B1894u: goto label_1b1894;
            case 0x1B1898u: goto label_1b1898;
            case 0x1B189Cu: goto label_1b189c;
            case 0x1B18A0u: goto label_1b18a0;
            case 0x1B18A4u: goto label_1b18a4;
            case 0x1B18A8u: goto label_1b18a8;
            case 0x1B18ACu: goto label_1b18ac;
            case 0x1B18B0u: goto label_1b18b0;
            case 0x1B18B4u: goto label_1b18b4;
            case 0x1B18B8u: goto label_1b18b8;
            case 0x1B18BCu: goto label_1b18bc;
            case 0x1B18C0u: goto label_1b18c0;
            case 0x1B18C4u: goto label_1b18c4;
            case 0x1B18C8u: goto label_1b18c8;
            case 0x1B18CCu: goto label_1b18cc;
            case 0x1B18D0u: goto label_1b18d0;
            case 0x1B18D4u: goto label_1b18d4;
            case 0x1B18D8u: goto label_1b18d8;
            case 0x1B18DCu: goto label_1b18dc;
            case 0x1B18E0u: goto label_1b18e0;
            case 0x1B18E4u: goto label_1b18e4;
            case 0x1B18E8u: goto label_1b18e8;
            case 0x1B18ECu: goto label_1b18ec;
            case 0x1B18F0u: goto label_1b18f0;
            case 0x1B18F4u: goto label_1b18f4;
            case 0x1B18F8u: goto label_1b18f8;
            case 0x1B18FCu: goto label_1b18fc;
            case 0x1B1900u: goto label_1b1900;
            case 0x1B1904u: goto label_1b1904;
            case 0x1B1908u: goto label_1b1908;
            case 0x1B190Cu: goto label_1b190c;
            case 0x1B1910u: goto label_1b1910;
            case 0x1B1914u: goto label_1b1914;
            case 0x1B1918u: goto label_1b1918;
            case 0x1B191Cu: goto label_1b191c;
            case 0x1B1920u: goto label_1b1920;
            case 0x1B1924u: goto label_1b1924;
            case 0x1B1928u: goto label_1b1928;
            case 0x1B192Cu: goto label_1b192c;
            case 0x1B1930u: goto label_1b1930;
            case 0x1B1934u: goto label_1b1934;
            case 0x1B1938u: goto label_1b1938;
            case 0x1B193Cu: goto label_1b193c;
            case 0x1B1940u: goto label_1b1940;
            case 0x1B1944u: goto label_1b1944;
            case 0x1B1948u: goto label_1b1948;
            case 0x1B194Cu: goto label_1b194c;
            case 0x1B1950u: goto label_1b1950;
            case 0x1B1954u: goto label_1b1954;
            case 0x1B1958u: goto label_1b1958;
            case 0x1B195Cu: goto label_1b195c;
            case 0x1B1960u: goto label_1b1960;
            case 0x1B1964u: goto label_1b1964;
            case 0x1B1968u: goto label_1b1968;
            case 0x1B196Cu: goto label_1b196c;
            case 0x1B1970u: goto label_1b1970;
            case 0x1B1974u: goto label_1b1974;
            case 0x1B1978u: goto label_1b1978;
            case 0x1B197Cu: goto label_1b197c;
            case 0x1B1980u: goto label_1b1980;
            case 0x1B1984u: goto label_1b1984;
            case 0x1B1988u: goto label_1b1988;
            case 0x1B198Cu: goto label_1b198c;
            case 0x1B1990u: goto label_1b1990;
            case 0x1B1994u: goto label_1b1994;
            case 0x1B1998u: goto label_1b1998;
            case 0x1B199Cu: goto label_1b199c;
            case 0x1B19A0u: goto label_1b19a0;
            case 0x1B19A4u: goto label_1b19a4;
            case 0x1B19A8u: goto label_1b19a8;
            case 0x1B19ACu: goto label_1b19ac;
            case 0x1B19B0u: goto label_1b19b0;
            case 0x1B19B4u: goto label_1b19b4;
            case 0x1B19B8u: goto label_1b19b8;
            case 0x1B19BCu: goto label_1b19bc;
            case 0x1B19C0u: goto label_1b19c0;
            case 0x1B19C4u: goto label_1b19c4;
            case 0x1B19C8u: goto label_1b19c8;
            case 0x1B19CCu: goto label_1b19cc;
            case 0x1B19D0u: goto label_1b19d0;
            case 0x1B19D4u: goto label_1b19d4;
            case 0x1B19D8u: goto label_1b19d8;
            case 0x1B19DCu: goto label_1b19dc;
            case 0x1B19E0u: goto label_1b19e0;
            case 0x1B19E4u: goto label_1b19e4;
            case 0x1B19E8u: goto label_1b19e8;
            case 0x1B19ECu: goto label_1b19ec;
            case 0x1B19F0u: goto label_1b19f0;
            case 0x1B19F4u: goto label_1b19f4;
            case 0x1B19F8u: goto label_1b19f8;
            case 0x1B19FCu: goto label_1b19fc;
            case 0x1B1A00u: goto label_1b1a00;
            case 0x1B1A04u: goto label_1b1a04;
            case 0x1B1A08u: goto label_1b1a08;
            case 0x1B1A0Cu: goto label_1b1a0c;
            case 0x1B1A10u: goto label_1b1a10;
            case 0x1B1A14u: goto label_1b1a14;
            case 0x1B1A18u: goto label_1b1a18;
            case 0x1B1A1Cu: goto label_1b1a1c;
            case 0x1B1A20u: goto label_1b1a20;
            case 0x1B1A24u: goto label_1b1a24;
            case 0x1B1A28u: goto label_1b1a28;
            case 0x1B1A2Cu: goto label_1b1a2c;
            case 0x1B1A30u: goto label_1b1a30;
            case 0x1B1A34u: goto label_1b1a34;
            case 0x1B1A38u: goto label_1b1a38;
            case 0x1B1A3Cu: goto label_1b1a3c;
            case 0x1B1A40u: goto label_1b1a40;
            case 0x1B1A44u: goto label_1b1a44;
            case 0x1B1A48u: goto label_1b1a48;
            case 0x1B1A4Cu: goto label_1b1a4c;
            case 0x1B1A50u: goto label_1b1a50;
            case 0x1B1A54u: goto label_1b1a54;
            case 0x1B1A58u: goto label_1b1a58;
            case 0x1B1A5Cu: goto label_1b1a5c;
            case 0x1B1A60u: goto label_1b1a60;
            case 0x1B1A64u: goto label_1b1a64;
            case 0x1B1A68u: goto label_1b1a68;
            case 0x1B1A6Cu: goto label_1b1a6c;
            case 0x1B1A70u: goto label_1b1a70;
            case 0x1B1A74u: goto label_1b1a74;
            case 0x1B1A78u: goto label_1b1a78;
            case 0x1B1A7Cu: goto label_1b1a7c;
            case 0x1B1A80u: goto label_1b1a80;
            case 0x1B1A84u: goto label_1b1a84;
            case 0x1B1A88u: goto label_1b1a88;
            case 0x1B1A8Cu: goto label_1b1a8c;
            case 0x1B1A90u: goto label_1b1a90;
            case 0x1B1A94u: goto label_1b1a94;
            case 0x1B1A98u: goto label_1b1a98;
            case 0x1B1A9Cu: goto label_1b1a9c;
            case 0x1B1AA0u: goto label_1b1aa0;
            case 0x1B1AA4u: goto label_1b1aa4;
            case 0x1B1AA8u: goto label_1b1aa8;
            case 0x1B1AACu: goto label_1b1aac;
            case 0x1B1AB0u: goto label_1b1ab0;
            case 0x1B1AB4u: goto label_1b1ab4;
            case 0x1B1AB8u: goto label_1b1ab8;
            case 0x1B1ABCu: goto label_1b1abc;
            case 0x1B1AC0u: goto label_1b1ac0;
            case 0x1B1AC4u: goto label_1b1ac4;
            case 0x1B1AC8u: goto label_1b1ac8;
            case 0x1B1ACCu: goto label_1b1acc;
            case 0x1B1AD0u: goto label_1b1ad0;
            case 0x1B1AD4u: goto label_1b1ad4;
            case 0x1B1AD8u: goto label_1b1ad8;
            case 0x1B1ADCu: goto label_1b1adc;
            case 0x1B1AE0u: goto label_1b1ae0;
            case 0x1B1AE4u: goto label_1b1ae4;
            case 0x1B1AE8u: goto label_1b1ae8;
            case 0x1B1AECu: goto label_1b1aec;
            case 0x1B1AF0u: goto label_1b1af0;
            case 0x1B1AF4u: goto label_1b1af4;
            case 0x1B1AF8u: goto label_1b1af8;
            case 0x1B1AFCu: goto label_1b1afc;
            case 0x1B1B00u: goto label_1b1b00;
            case 0x1B1B04u: goto label_1b1b04;
            case 0x1B1B08u: goto label_1b1b08;
            case 0x1B1B0Cu: goto label_1b1b0c;
            case 0x1B1B10u: goto label_1b1b10;
            case 0x1B1B14u: goto label_1b1b14;
            case 0x1B1B18u: goto label_1b1b18;
            case 0x1B1B1Cu: goto label_1b1b1c;
            case 0x1B1B20u: goto label_1b1b20;
            case 0x1B1B24u: goto label_1b1b24;
            case 0x1B1B28u: goto label_1b1b28;
            case 0x1B1B2Cu: goto label_1b1b2c;
            case 0x1B1B30u: goto label_1b1b30;
            case 0x1B1B34u: goto label_1b1b34;
            case 0x1B1B38u: goto label_1b1b38;
            case 0x1B1B3Cu: goto label_1b1b3c;
            case 0x1B1B40u: goto label_1b1b40;
            case 0x1B1B44u: goto label_1b1b44;
            case 0x1B1B48u: goto label_1b1b48;
            case 0x1B1B4Cu: goto label_1b1b4c;
            case 0x1B1B50u: goto label_1b1b50;
            case 0x1B1B54u: goto label_1b1b54;
            case 0x1B1B58u: goto label_1b1b58;
            case 0x1B1B5Cu: goto label_1b1b5c;
            case 0x1B1B60u: goto label_1b1b60;
            case 0x1B1B64u: goto label_1b1b64;
            case 0x1B1B68u: goto label_1b1b68;
            case 0x1B1B6Cu: goto label_1b1b6c;
            case 0x1B1B70u: goto label_1b1b70;
            case 0x1B1B74u: goto label_1b1b74;
            case 0x1B1B78u: goto label_1b1b78;
            case 0x1B1B7Cu: goto label_1b1b7c;
            case 0x1B1B80u: goto label_1b1b80;
            case 0x1B1B84u: goto label_1b1b84;
            case 0x1B1B88u: goto label_1b1b88;
            case 0x1B1B8Cu: goto label_1b1b8c;
            case 0x1B1B90u: goto label_1b1b90;
            case 0x1B1B94u: goto label_1b1b94;
            case 0x1B1B98u: goto label_1b1b98;
            case 0x1B1B9Cu: goto label_1b1b9c;
            case 0x1B1BA0u: goto label_1b1ba0;
            case 0x1B1BA4u: goto label_1b1ba4;
            case 0x1B1BA8u: goto label_1b1ba8;
            case 0x1B1BACu: goto label_1b1bac;
            case 0x1B1BB0u: goto label_1b1bb0;
            case 0x1B1BB4u: goto label_1b1bb4;
            case 0x1B1BB8u: goto label_1b1bb8;
            case 0x1B1BBCu: goto label_1b1bbc;
            case 0x1B1BC0u: goto label_1b1bc0;
            case 0x1B1BC4u: goto label_1b1bc4;
            case 0x1B1BC8u: goto label_1b1bc8;
            case 0x1B1BCCu: goto label_1b1bcc;
            case 0x1B1BD0u: goto label_1b1bd0;
            case 0x1B1BD4u: goto label_1b1bd4;
            case 0x1B1BD8u: goto label_1b1bd8;
            case 0x1B1BDCu: goto label_1b1bdc;
            case 0x1B1BE0u: goto label_1b1be0;
            case 0x1B1BE4u: goto label_1b1be4;
            case 0x1B1BE8u: goto label_1b1be8;
            case 0x1B1BECu: goto label_1b1bec;
            case 0x1B1BF0u: goto label_1b1bf0;
            case 0x1B1BF4u: goto label_1b1bf4;
            case 0x1B1BF8u: goto label_1b1bf8;
            case 0x1B1BFCu: goto label_1b1bfc;
            case 0x1B1C00u: goto label_1b1c00;
            case 0x1B1C04u: goto label_1b1c04;
            case 0x1B1C08u: goto label_1b1c08;
            case 0x1B1C0Cu: goto label_1b1c0c;
            case 0x1B1C10u: goto label_1b1c10;
            case 0x1B1C14u: goto label_1b1c14;
            case 0x1B1C18u: goto label_1b1c18;
            case 0x1B1C1Cu: goto label_1b1c1c;
            case 0x1B1C20u: goto label_1b1c20;
            case 0x1B1C24u: goto label_1b1c24;
            case 0x1B1C28u: goto label_1b1c28;
            case 0x1B1C2Cu: goto label_1b1c2c;
            case 0x1B1C30u: goto label_1b1c30;
            case 0x1B1C34u: goto label_1b1c34;
            case 0x1B1C38u: goto label_1b1c38;
            case 0x1B1C3Cu: goto label_1b1c3c;
            case 0x1B1C40u: goto label_1b1c40;
            case 0x1B1C44u: goto label_1b1c44;
            case 0x1B1C48u: goto label_1b1c48;
            case 0x1B1C4Cu: goto label_1b1c4c;
            case 0x1B1C50u: goto label_1b1c50;
            case 0x1B1C54u: goto label_1b1c54;
            case 0x1B1C58u: goto label_1b1c58;
            case 0x1B1C5Cu: goto label_1b1c5c;
            case 0x1B1C60u: goto label_1b1c60;
            case 0x1B1C64u: goto label_1b1c64;
            case 0x1B1C68u: goto label_1b1c68;
            case 0x1B1C6Cu: goto label_1b1c6c;
            case 0x1B1C70u: goto label_1b1c70;
            case 0x1B1C74u: goto label_1b1c74;
            case 0x1B1C78u: goto label_1b1c78;
            case 0x1B1C7Cu: goto label_1b1c7c;
            case 0x1B1C80u: goto label_1b1c80;
            case 0x1B1C84u: goto label_1b1c84;
            case 0x1B1C88u: goto label_1b1c88;
            case 0x1B1C8Cu: goto label_1b1c8c;
            case 0x1B1C90u: goto label_1b1c90;
            case 0x1B1C94u: goto label_1b1c94;
            case 0x1B1C98u: goto label_1b1c98;
            case 0x1B1C9Cu: goto label_1b1c9c;
            case 0x1B1CA0u: goto label_1b1ca0;
            case 0x1B1CA4u: goto label_1b1ca4;
            case 0x1B1CA8u: goto label_1b1ca8;
            case 0x1B1CACu: goto label_1b1cac;
            case 0x1B1CB0u: goto label_1b1cb0;
            case 0x1B1CB4u: goto label_1b1cb4;
            case 0x1B1CB8u: goto label_1b1cb8;
            case 0x1B1CBCu: goto label_1b1cbc;
            case 0x1B1CC0u: goto label_1b1cc0;
            case 0x1B1CC4u: goto label_1b1cc4;
            case 0x1B1CC8u: goto label_1b1cc8;
            case 0x1B1CCCu: goto label_1b1ccc;
            case 0x1B1CD0u: goto label_1b1cd0;
            case 0x1B1CD4u: goto label_1b1cd4;
            case 0x1B1CD8u: goto label_1b1cd8;
            case 0x1B1CDCu: goto label_1b1cdc;
            case 0x1B1CE0u: goto label_1b1ce0;
            case 0x1B1CE4u: goto label_1b1ce4;
            case 0x1B1CE8u: goto label_1b1ce8;
            case 0x1B1CECu: goto label_1b1cec;
            case 0x1B1CF0u: goto label_1b1cf0;
            case 0x1B1CF4u: goto label_1b1cf4;
            case 0x1B1CF8u: goto label_1b1cf8;
            case 0x1B1CFCu: goto label_1b1cfc;
            case 0x1B1D00u: goto label_1b1d00;
            case 0x1B1D04u: goto label_1b1d04;
            case 0x1B1D08u: goto label_1b1d08;
            case 0x1B1D0Cu: goto label_1b1d0c;
            case 0x1B1D10u: goto label_1b1d10;
            case 0x1B1D14u: goto label_1b1d14;
            case 0x1B1D18u: goto label_1b1d18;
            case 0x1B1D1Cu: goto label_1b1d1c;
            case 0x1B1D20u: goto label_1b1d20;
            case 0x1B1D24u: goto label_1b1d24;
            case 0x1B1D28u: goto label_1b1d28;
            case 0x1B1D2Cu: goto label_1b1d2c;
            case 0x1B1D30u: goto label_1b1d30;
            case 0x1B1D34u: goto label_1b1d34;
            case 0x1B1D38u: goto label_1b1d38;
            case 0x1B1D3Cu: goto label_1b1d3c;
            case 0x1B1D40u: goto label_1b1d40;
            case 0x1B1D44u: goto label_1b1d44;
            case 0x1B1D48u: goto label_1b1d48;
            case 0x1B1D4Cu: goto label_1b1d4c;
            case 0x1B1D50u: goto label_1b1d50;
            case 0x1B1D54u: goto label_1b1d54;
            case 0x1B1D58u: goto label_1b1d58;
            case 0x1B1D5Cu: goto label_1b1d5c;
            case 0x1B1D60u: goto label_1b1d60;
            case 0x1B1D64u: goto label_1b1d64;
            case 0x1B1D68u: goto label_1b1d68;
            case 0x1B1D6Cu: goto label_1b1d6c;
            case 0x1B1D70u: goto label_1b1d70;
            case 0x1B1D74u: goto label_1b1d74;
            case 0x1B1D78u: goto label_1b1d78;
            case 0x1B1D7Cu: goto label_1b1d7c;
            case 0x1B1D80u: goto label_1b1d80;
            case 0x1B1D84u: goto label_1b1d84;
            case 0x1B1D88u: goto label_1b1d88;
            case 0x1B1D8Cu: goto label_1b1d8c;
            case 0x1B1D90u: goto label_1b1d90;
            case 0x1B1D94u: goto label_1b1d94;
            case 0x1B1D98u: goto label_1b1d98;
            case 0x1B1D9Cu: goto label_1b1d9c;
            case 0x1B1DA0u: goto label_1b1da0;
            case 0x1B1DA4u: goto label_1b1da4;
            case 0x1B1DA8u: goto label_1b1da8;
            case 0x1B1DACu: goto label_1b1dac;
            case 0x1B1DB0u: goto label_1b1db0;
            case 0x1B1DB4u: goto label_1b1db4;
            case 0x1B1DB8u: goto label_1b1db8;
            case 0x1B1DBCu: goto label_1b1dbc;
            case 0x1B1DC0u: goto label_1b1dc0;
            case 0x1B1DC4u: goto label_1b1dc4;
            case 0x1B1DC8u: goto label_1b1dc8;
            case 0x1B1DCCu: goto label_1b1dcc;
            case 0x1B1DD0u: goto label_1b1dd0;
            case 0x1B1DD4u: goto label_1b1dd4;
            case 0x1B1DD8u: goto label_1b1dd8;
            case 0x1B1DDCu: goto label_1b1ddc;
            case 0x1B1DE0u: goto label_1b1de0;
            case 0x1B1DE4u: goto label_1b1de4;
            case 0x1B1DE8u: goto label_1b1de8;
            case 0x1B1DECu: goto label_1b1dec;
            case 0x1B1DF0u: goto label_1b1df0;
            case 0x1B1DF4u: goto label_1b1df4;
            case 0x1B1DF8u: goto label_1b1df8;
            case 0x1B1DFCu: goto label_1b1dfc;
            case 0x1B1E00u: goto label_1b1e00;
            case 0x1B1E04u: goto label_1b1e04;
            case 0x1B1E08u: goto label_1b1e08;
            case 0x1B1E0Cu: goto label_1b1e0c;
            case 0x1B1E10u: goto label_1b1e10;
            case 0x1B1E14u: goto label_1b1e14;
            case 0x1B1E18u: goto label_1b1e18;
            case 0x1B1E1Cu: goto label_1b1e1c;
            case 0x1B1E20u: goto label_1b1e20;
            case 0x1B1E24u: goto label_1b1e24;
            case 0x1B1E28u: goto label_1b1e28;
            case 0x1B1E2Cu: goto label_1b1e2c;
            case 0x1B1E30u: goto label_1b1e30;
            case 0x1B1E34u: goto label_1b1e34;
            case 0x1B1E38u: goto label_1b1e38;
            case 0x1B1E3Cu: goto label_1b1e3c;
            case 0x1B1E40u: goto label_1b1e40;
            case 0x1B1E44u: goto label_1b1e44;
            case 0x1B1E48u: goto label_1b1e48;
            case 0x1B1E4Cu: goto label_1b1e4c;
            case 0x1B1E50u: goto label_1b1e50;
            case 0x1B1E54u: goto label_1b1e54;
            case 0x1B1E58u: goto label_1b1e58;
            case 0x1B1E5Cu: goto label_1b1e5c;
            case 0x1B1E60u: goto label_1b1e60;
            case 0x1B1E64u: goto label_1b1e64;
            case 0x1B1E68u: goto label_1b1e68;
            case 0x1B1E6Cu: goto label_1b1e6c;
            case 0x1B1E70u: goto label_1b1e70;
            case 0x1B1E74u: goto label_1b1e74;
            case 0x1B1E78u: goto label_1b1e78;
            case 0x1B1E7Cu: goto label_1b1e7c;
            case 0x1B1E80u: goto label_1b1e80;
            case 0x1B1E84u: goto label_1b1e84;
            case 0x1B1E88u: goto label_1b1e88;
            case 0x1B1E8Cu: goto label_1b1e8c;
            case 0x1B1E90u: goto label_1b1e90;
            case 0x1B1E94u: goto label_1b1e94;
            case 0x1B1E98u: goto label_1b1e98;
            case 0x1B1E9Cu: goto label_1b1e9c;
            case 0x1B1EA0u: goto label_1b1ea0;
            case 0x1B1EA4u: goto label_1b1ea4;
            case 0x1B1EA8u: goto label_1b1ea8;
            case 0x1B1EACu: goto label_1b1eac;
            case 0x1B1EB0u: goto label_1b1eb0;
            case 0x1B1EB4u: goto label_1b1eb4;
            case 0x1B1EB8u: goto label_1b1eb8;
            case 0x1B1EBCu: goto label_1b1ebc;
            case 0x1B1EC0u: goto label_1b1ec0;
            case 0x1B1EC4u: goto label_1b1ec4;
            case 0x1B1EC8u: goto label_1b1ec8;
            case 0x1B1ECCu: goto label_1b1ecc;
            case 0x1B1ED0u: goto label_1b1ed0;
            case 0x1B1ED4u: goto label_1b1ed4;
            case 0x1B1ED8u: goto label_1b1ed8;
            case 0x1B1EDCu: goto label_1b1edc;
            case 0x1B1EE0u: goto label_1b1ee0;
            case 0x1B1EE4u: goto label_1b1ee4;
            case 0x1B1EE8u: goto label_1b1ee8;
            case 0x1B1EECu: goto label_1b1eec;
            case 0x1B1EF0u: goto label_1b1ef0;
            case 0x1B1EF4u: goto label_1b1ef4;
            case 0x1B1EF8u: goto label_1b1ef8;
            case 0x1B1EFCu: goto label_1b1efc;
            case 0x1B1F00u: goto label_1b1f00;
            case 0x1B1F04u: goto label_1b1f04;
            case 0x1B1F08u: goto label_1b1f08;
            case 0x1B1F0Cu: goto label_1b1f0c;
            case 0x1B1F10u: goto label_1b1f10;
            case 0x1B1F14u: goto label_1b1f14;
            case 0x1B1F18u: goto label_1b1f18;
            case 0x1B1F1Cu: goto label_1b1f1c;
            case 0x1B1F20u: goto label_1b1f20;
            case 0x1B1F24u: goto label_1b1f24;
            case 0x1B1F28u: goto label_1b1f28;
            case 0x1B1F2Cu: goto label_1b1f2c;
            case 0x1B1F30u: goto label_1b1f30;
            case 0x1B1F34u: goto label_1b1f34;
            case 0x1B1F38u: goto label_1b1f38;
            case 0x1B1F3Cu: goto label_1b1f3c;
            case 0x1B1F40u: goto label_1b1f40;
            case 0x1B1F44u: goto label_1b1f44;
            case 0x1B1F48u: goto label_1b1f48;
            case 0x1B1F4Cu: goto label_1b1f4c;
            case 0x1B1F50u: goto label_1b1f50;
            case 0x1B1F54u: goto label_1b1f54;
            case 0x1B1F58u: goto label_1b1f58;
            case 0x1B1F5Cu: goto label_1b1f5c;
            case 0x1B1F60u: goto label_1b1f60;
            case 0x1B1F64u: goto label_1b1f64;
            case 0x1B1F68u: goto label_1b1f68;
            case 0x1B1F6Cu: goto label_1b1f6c;
            case 0x1B1F70u: goto label_1b1f70;
            case 0x1B1F74u: goto label_1b1f74;
            case 0x1B1F78u: goto label_1b1f78;
            case 0x1B1F7Cu: goto label_1b1f7c;
            case 0x1B1F80u: goto label_1b1f80;
            case 0x1B1F84u: goto label_1b1f84;
            case 0x1B1F88u: goto label_1b1f88;
            case 0x1B1F8Cu: goto label_1b1f8c;
            case 0x1B1F90u: goto label_1b1f90;
            case 0x1B1F94u: goto label_1b1f94;
            case 0x1B1F98u: goto label_1b1f98;
            case 0x1B1F9Cu: goto label_1b1f9c;
            case 0x1B1FA0u: goto label_1b1fa0;
            case 0x1B1FA4u: goto label_1b1fa4;
            case 0x1B1FA8u: goto label_1b1fa8;
            case 0x1B1FACu: goto label_1b1fac;
            case 0x1B1FB0u: goto label_1b1fb0;
            case 0x1B1FB4u: goto label_1b1fb4;
            case 0x1B1FB8u: goto label_1b1fb8;
            case 0x1B1FBCu: goto label_1b1fbc;
            case 0x1B1FC0u: goto label_1b1fc0;
            case 0x1B1FC4u: goto label_1b1fc4;
            case 0x1B1FC8u: goto label_1b1fc8;
            case 0x1B1FCCu: goto label_1b1fcc;
            case 0x1B1FD0u: goto label_1b1fd0;
            case 0x1B1FD4u: goto label_1b1fd4;
            case 0x1B1FD8u: goto label_1b1fd8;
            case 0x1B1FDCu: goto label_1b1fdc;
            case 0x1B1FE0u: goto label_1b1fe0;
            case 0x1B1FE4u: goto label_1b1fe4;
            case 0x1B1FE8u: goto label_1b1fe8;
            case 0x1B1FECu: goto label_1b1fec;
            case 0x1B1FF0u: goto label_1b1ff0;
            case 0x1B1FF4u: goto label_1b1ff4;
            case 0x1B1FF8u: goto label_1b1ff8;
            case 0x1B1FFCu: goto label_1b1ffc;
            case 0x1B2000u: goto label_1b2000;
            case 0x1B2004u: goto label_1b2004;
            case 0x1B2008u: goto label_1b2008;
            case 0x1B200Cu: goto label_1b200c;
            case 0x1B2010u: goto label_1b2010;
            case 0x1B2014u: goto label_1b2014;
            case 0x1B2018u: goto label_1b2018;
            case 0x1B201Cu: goto label_1b201c;
            case 0x1B2020u: goto label_1b2020;
            case 0x1B2024u: goto label_1b2024;
            case 0x1B2028u: goto label_1b2028;
            case 0x1B202Cu: goto label_1b202c;
            case 0x1B2030u: goto label_1b2030;
            case 0x1B2034u: goto label_1b2034;
            case 0x1B2038u: goto label_1b2038;
            case 0x1B203Cu: goto label_1b203c;
            case 0x1B2040u: goto label_1b2040;
            case 0x1B2044u: goto label_1b2044;
            case 0x1B2048u: goto label_1b2048;
            case 0x1B204Cu: goto label_1b204c;
            case 0x1B2050u: goto label_1b2050;
            case 0x1B2054u: goto label_1b2054;
            case 0x1B2058u: goto label_1b2058;
            case 0x1B205Cu: goto label_1b205c;
            case 0x1B2060u: goto label_1b2060;
            case 0x1B2064u: goto label_1b2064;
            case 0x1B2068u: goto label_1b2068;
            case 0x1B206Cu: goto label_1b206c;
            case 0x1B2070u: goto label_1b2070;
            case 0x1B2074u: goto label_1b2074;
            case 0x1B2078u: goto label_1b2078;
            case 0x1B207Cu: goto label_1b207c;
            case 0x1B2080u: goto label_1b2080;
            case 0x1B2084u: goto label_1b2084;
            case 0x1B2088u: goto label_1b2088;
            case 0x1B208Cu: goto label_1b208c;
            case 0x1B2090u: goto label_1b2090;
            case 0x1B2094u: goto label_1b2094;
            case 0x1B2098u: goto label_1b2098;
            case 0x1B209Cu: goto label_1b209c;
            case 0x1B20A0u: goto label_1b20a0;
            case 0x1B20A4u: goto label_1b20a4;
            case 0x1B20A8u: goto label_1b20a8;
            case 0x1B20ACu: goto label_1b20ac;
            case 0x1B20B0u: goto label_1b20b0;
            case 0x1B20B4u: goto label_1b20b4;
            case 0x1B20B8u: goto label_1b20b8;
            case 0x1B20BCu: goto label_1b20bc;
            case 0x1B20C0u: goto label_1b20c0;
            case 0x1B20C4u: goto label_1b20c4;
            case 0x1B20C8u: goto label_1b20c8;
            case 0x1B20CCu: goto label_1b20cc;
            case 0x1B20D0u: goto label_1b20d0;
            case 0x1B20D4u: goto label_1b20d4;
            case 0x1B20D8u: goto label_1b20d8;
            case 0x1B20DCu: goto label_1b20dc;
            case 0x1B20E0u: goto label_1b20e0;
            case 0x1B20E4u: goto label_1b20e4;
            case 0x1B20E8u: goto label_1b20e8;
            case 0x1B20ECu: goto label_1b20ec;
            case 0x1B20F0u: goto label_1b20f0;
            case 0x1B20F4u: goto label_1b20f4;
            case 0x1B20F8u: goto label_1b20f8;
            case 0x1B20FCu: goto label_1b20fc;
            case 0x1B2100u: goto label_1b2100;
            case 0x1B2104u: goto label_1b2104;
            case 0x1B2108u: goto label_1b2108;
            case 0x1B210Cu: goto label_1b210c;
            case 0x1B2110u: goto label_1b2110;
            case 0x1B2114u: goto label_1b2114;
            case 0x1B2118u: goto label_1b2118;
            case 0x1B211Cu: goto label_1b211c;
            case 0x1B2120u: goto label_1b2120;
            case 0x1B2124u: goto label_1b2124;
            case 0x1B2128u: goto label_1b2128;
            case 0x1B212Cu: goto label_1b212c;
            case 0x1B2130u: goto label_1b2130;
            case 0x1B2134u: goto label_1b2134;
            case 0x1B2138u: goto label_1b2138;
            case 0x1B213Cu: goto label_1b213c;
            case 0x1B2140u: goto label_1b2140;
            case 0x1B2144u: goto label_1b2144;
            case 0x1B2148u: goto label_1b2148;
            case 0x1B214Cu: goto label_1b214c;
            case 0x1B2150u: goto label_1b2150;
            case 0x1B2154u: goto label_1b2154;
            case 0x1B2158u: goto label_1b2158;
            case 0x1B215Cu: goto label_1b215c;
            case 0x1B2160u: goto label_1b2160;
            case 0x1B2164u: goto label_1b2164;
            case 0x1B2168u: goto label_1b2168;
            case 0x1B216Cu: goto label_1b216c;
            case 0x1B2170u: goto label_1b2170;
            case 0x1B2174u: goto label_1b2174;
            case 0x1B2178u: goto label_1b2178;
            case 0x1B217Cu: goto label_1b217c;
            case 0x1B2180u: goto label_1b2180;
            case 0x1B2184u: goto label_1b2184;
            case 0x1B2188u: goto label_1b2188;
            case 0x1B218Cu: goto label_1b218c;
            case 0x1B2190u: goto label_1b2190;
            case 0x1B2194u: goto label_1b2194;
            case 0x1B2198u: goto label_1b2198;
            case 0x1B219Cu: goto label_1b219c;
            case 0x1B21A0u: goto label_1b21a0;
            case 0x1B21A4u: goto label_1b21a4;
            case 0x1B21A8u: goto label_1b21a8;
            case 0x1B21ACu: goto label_1b21ac;
            case 0x1B21B0u: goto label_1b21b0;
            case 0x1B21B4u: goto label_1b21b4;
            case 0x1B21B8u: goto label_1b21b8;
            case 0x1B21BCu: goto label_1b21bc;
            case 0x1B21C0u: goto label_1b21c0;
            case 0x1B21C4u: goto label_1b21c4;
            case 0x1B21C8u: goto label_1b21c8;
            case 0x1B21CCu: goto label_1b21cc;
            case 0x1B21D0u: goto label_1b21d0;
            case 0x1B21D4u: goto label_1b21d4;
            case 0x1B21D8u: goto label_1b21d8;
            case 0x1B21DCu: goto label_1b21dc;
            case 0x1B21E0u: goto label_1b21e0;
            case 0x1B21E4u: goto label_1b21e4;
            case 0x1B21E8u: goto label_1b21e8;
            case 0x1B21ECu: goto label_1b21ec;
            case 0x1B21F0u: goto label_1b21f0;
            case 0x1B21F4u: goto label_1b21f4;
            case 0x1B21F8u: goto label_1b21f8;
            case 0x1B21FCu: goto label_1b21fc;
            case 0x1B2200u: goto label_1b2200;
            case 0x1B2204u: goto label_1b2204;
            case 0x1B2208u: goto label_1b2208;
            case 0x1B220Cu: goto label_1b220c;
            case 0x1B2210u: goto label_1b2210;
            case 0x1B2214u: goto label_1b2214;
            case 0x1B2218u: goto label_1b2218;
            case 0x1B221Cu: goto label_1b221c;
            case 0x1B2220u: goto label_1b2220;
            case 0x1B2224u: goto label_1b2224;
            case 0x1B2228u: goto label_1b2228;
            case 0x1B222Cu: goto label_1b222c;
            case 0x1B2230u: goto label_1b2230;
            case 0x1B2234u: goto label_1b2234;
            case 0x1B2238u: goto label_1b2238;
            case 0x1B223Cu: goto label_1b223c;
            case 0x1B2240u: goto label_1b2240;
            case 0x1B2244u: goto label_1b2244;
            case 0x1B2248u: goto label_1b2248;
            case 0x1B224Cu: goto label_1b224c;
            case 0x1B2250u: goto label_1b2250;
            case 0x1B2254u: goto label_1b2254;
            case 0x1B2258u: goto label_1b2258;
            case 0x1B225Cu: goto label_1b225c;
            case 0x1B2260u: goto label_1b2260;
            case 0x1B2264u: goto label_1b2264;
            case 0x1B2268u: goto label_1b2268;
            case 0x1B226Cu: goto label_1b226c;
            case 0x1B2270u: goto label_1b2270;
            case 0x1B2274u: goto label_1b2274;
            case 0x1B2278u: goto label_1b2278;
            case 0x1B227Cu: goto label_1b227c;
            case 0x1B2280u: goto label_1b2280;
            case 0x1B2284u: goto label_1b2284;
            case 0x1B2288u: goto label_1b2288;
            case 0x1B228Cu: goto label_1b228c;
            case 0x1B2290u: goto label_1b2290;
            case 0x1B2294u: goto label_1b2294;
            case 0x1B2298u: goto label_1b2298;
            case 0x1B229Cu: goto label_1b229c;
            case 0x1B22A0u: goto label_1b22a0;
            case 0x1B22A4u: goto label_1b22a4;
            case 0x1B22A8u: goto label_1b22a8;
            case 0x1B22ACu: goto label_1b22ac;
            case 0x1B22B0u: goto label_1b22b0;
            case 0x1B22B4u: goto label_1b22b4;
            case 0x1B22B8u: goto label_1b22b8;
            case 0x1B22BCu: goto label_1b22bc;
            case 0x1B22C0u: goto label_1b22c0;
            case 0x1B22C4u: goto label_1b22c4;
            case 0x1B22C8u: goto label_1b22c8;
            case 0x1B22CCu: goto label_1b22cc;
            case 0x1B22D0u: goto label_1b22d0;
            case 0x1B22D4u: goto label_1b22d4;
            case 0x1B22D8u: goto label_1b22d8;
            case 0x1B22DCu: goto label_1b22dc;
            case 0x1B22E0u: goto label_1b22e0;
            case 0x1B22E4u: goto label_1b22e4;
            case 0x1B22E8u: goto label_1b22e8;
            case 0x1B22ECu: goto label_1b22ec;
            case 0x1B22F0u: goto label_1b22f0;
            case 0x1B22F4u: goto label_1b22f4;
            case 0x1B22F8u: goto label_1b22f8;
            case 0x1B22FCu: goto label_1b22fc;
            case 0x1B2300u: goto label_1b2300;
            case 0x1B2304u: goto label_1b2304;
            case 0x1B2308u: goto label_1b2308;
            case 0x1B230Cu: goto label_1b230c;
            case 0x1B2310u: goto label_1b2310;
            case 0x1B2314u: goto label_1b2314;
            case 0x1B2318u: goto label_1b2318;
            case 0x1B231Cu: goto label_1b231c;
            case 0x1B2320u: goto label_1b2320;
            case 0x1B2324u: goto label_1b2324;
            case 0x1B2328u: goto label_1b2328;
            case 0x1B232Cu: goto label_1b232c;
            case 0x1B2330u: goto label_1b2330;
            case 0x1B2334u: goto label_1b2334;
            case 0x1B2338u: goto label_1b2338;
            case 0x1B233Cu: goto label_1b233c;
            case 0x1B2340u: goto label_1b2340;
            case 0x1B2344u: goto label_1b2344;
            case 0x1B2348u: goto label_1b2348;
            case 0x1B234Cu: goto label_1b234c;
            case 0x1B2350u: goto label_1b2350;
            case 0x1B2354u: goto label_1b2354;
            case 0x1B2358u: goto label_1b2358;
            case 0x1B235Cu: goto label_1b235c;
            case 0x1B2360u: goto label_1b2360;
            case 0x1B2364u: goto label_1b2364;
            case 0x1B2368u: goto label_1b2368;
            case 0x1B236Cu: goto label_1b236c;
            case 0x1B2370u: goto label_1b2370;
            case 0x1B2374u: goto label_1b2374;
            case 0x1B2378u: goto label_1b2378;
            case 0x1B237Cu: goto label_1b237c;
            case 0x1B2380u: goto label_1b2380;
            case 0x1B2384u: goto label_1b2384;
            case 0x1B2388u: goto label_1b2388;
            case 0x1B238Cu: goto label_1b238c;
            case 0x1B2390u: goto label_1b2390;
            case 0x1B2394u: goto label_1b2394;
            case 0x1B2398u: goto label_1b2398;
            case 0x1B239Cu: goto label_1b239c;
            case 0x1B23A0u: goto label_1b23a0;
            case 0x1B23A4u: goto label_1b23a4;
            case 0x1B23A8u: goto label_1b23a8;
            case 0x1B23ACu: goto label_1b23ac;
            case 0x1B23B0u: goto label_1b23b0;
            case 0x1B23B4u: goto label_1b23b4;
            case 0x1B23B8u: goto label_1b23b8;
            case 0x1B23BCu: goto label_1b23bc;
            case 0x1B23C0u: goto label_1b23c0;
            case 0x1B23C4u: goto label_1b23c4;
            case 0x1B23C8u: goto label_1b23c8;
            case 0x1B23CCu: goto label_1b23cc;
            case 0x1B23D0u: goto label_1b23d0;
            case 0x1B23D4u: goto label_1b23d4;
            case 0x1B23D8u: goto label_1b23d8;
            case 0x1B23DCu: goto label_1b23dc;
            case 0x1B23E0u: goto label_1b23e0;
            case 0x1B23E4u: goto label_1b23e4;
            case 0x1B23E8u: goto label_1b23e8;
            case 0x1B23ECu: goto label_1b23ec;
            case 0x1B23F0u: goto label_1b23f0;
            case 0x1B23F4u: goto label_1b23f4;
            case 0x1B23F8u: goto label_1b23f8;
            case 0x1B23FCu: goto label_1b23fc;
            case 0x1B2400u: goto label_1b2400;
            case 0x1B2404u: goto label_1b2404;
            case 0x1B2408u: goto label_1b2408;
            case 0x1B240Cu: goto label_1b240c;
            case 0x1B2410u: goto label_1b2410;
            case 0x1B2414u: goto label_1b2414;
            case 0x1B2418u: goto label_1b2418;
            case 0x1B241Cu: goto label_1b241c;
            case 0x1B2420u: goto label_1b2420;
            case 0x1B2424u: goto label_1b2424;
            case 0x1B2428u: goto label_1b2428;
            case 0x1B242Cu: goto label_1b242c;
            case 0x1B2430u: goto label_1b2430;
            case 0x1B2434u: goto label_1b2434;
            case 0x1B2438u: goto label_1b2438;
            case 0x1B243Cu: goto label_1b243c;
            case 0x1B2440u: goto label_1b2440;
            case 0x1B2444u: goto label_1b2444;
            case 0x1B2448u: goto label_1b2448;
            case 0x1B244Cu: goto label_1b244c;
            case 0x1B2450u: goto label_1b2450;
            case 0x1B2454u: goto label_1b2454;
            case 0x1B2458u: goto label_1b2458;
            case 0x1B245Cu: goto label_1b245c;
            case 0x1B2460u: goto label_1b2460;
            case 0x1B2464u: goto label_1b2464;
            case 0x1B2468u: goto label_1b2468;
            case 0x1B246Cu: goto label_1b246c;
            case 0x1B2470u: goto label_1b2470;
            case 0x1B2474u: goto label_1b2474;
            case 0x1B2478u: goto label_1b2478;
            case 0x1B247Cu: goto label_1b247c;
            case 0x1B2480u: goto label_1b2480;
            case 0x1B2484u: goto label_1b2484;
            case 0x1B2488u: goto label_1b2488;
            case 0x1B248Cu: goto label_1b248c;
            case 0x1B2490u: goto label_1b2490;
            case 0x1B2494u: goto label_1b2494;
            case 0x1B2498u: goto label_1b2498;
            case 0x1B249Cu: goto label_1b249c;
            case 0x1B24A0u: goto label_1b24a0;
            case 0x1B24A4u: goto label_1b24a4;
            case 0x1B24A8u: goto label_1b24a8;
            case 0x1B24ACu: goto label_1b24ac;
            case 0x1B24B0u: goto label_1b24b0;
            case 0x1B24B4u: goto label_1b24b4;
            case 0x1B24B8u: goto label_1b24b8;
            case 0x1B24BCu: goto label_1b24bc;
            case 0x1B24C0u: goto label_1b24c0;
            case 0x1B24C4u: goto label_1b24c4;
            case 0x1B24C8u: goto label_1b24c8;
            case 0x1B24CCu: goto label_1b24cc;
            case 0x1B24D0u: goto label_1b24d0;
            case 0x1B24D4u: goto label_1b24d4;
            case 0x1B24D8u: goto label_1b24d8;
            case 0x1B24DCu: goto label_1b24dc;
            case 0x1B24E0u: goto label_1b24e0;
            case 0x1B24E4u: goto label_1b24e4;
            case 0x1B24E8u: goto label_1b24e8;
            case 0x1B24ECu: goto label_1b24ec;
            case 0x1B24F0u: goto label_1b24f0;
            case 0x1B24F4u: goto label_1b24f4;
            case 0x1B24F8u: goto label_1b24f8;
            case 0x1B24FCu: goto label_1b24fc;
            case 0x1B2500u: goto label_1b2500;
            case 0x1B2504u: goto label_1b2504;
            case 0x1B2508u: goto label_1b2508;
            case 0x1B250Cu: goto label_1b250c;
            case 0x1B2510u: goto label_1b2510;
            case 0x1B2514u: goto label_1b2514;
            case 0x1B2518u: goto label_1b2518;
            case 0x1B251Cu: goto label_1b251c;
            case 0x1B2520u: goto label_1b2520;
            case 0x1B2524u: goto label_1b2524;
            case 0x1B2528u: goto label_1b2528;
            case 0x1B252Cu: goto label_1b252c;
            case 0x1B2530u: goto label_1b2530;
            case 0x1B2534u: goto label_1b2534;
            case 0x1B2538u: goto label_1b2538;
            case 0x1B253Cu: goto label_1b253c;
            case 0x1B2540u: goto label_1b2540;
            case 0x1B2544u: goto label_1b2544;
            case 0x1B2548u: goto label_1b2548;
            case 0x1B254Cu: goto label_1b254c;
            case 0x1B2550u: goto label_1b2550;
            case 0x1B2554u: goto label_1b2554;
            case 0x1B2558u: goto label_1b2558;
            case 0x1B255Cu: goto label_1b255c;
            case 0x1B2560u: goto label_1b2560;
            case 0x1B2564u: goto label_1b2564;
            case 0x1B2568u: goto label_1b2568;
            case 0x1B256Cu: goto label_1b256c;
            case 0x1B2570u: goto label_1b2570;
            case 0x1B2574u: goto label_1b2574;
            case 0x1B2578u: goto label_1b2578;
            case 0x1B257Cu: goto label_1b257c;
            case 0x1B2580u: goto label_1b2580;
            case 0x1B2584u: goto label_1b2584;
            case 0x1B2588u: goto label_1b2588;
            case 0x1B258Cu: goto label_1b258c;
            case 0x1B2590u: goto label_1b2590;
            case 0x1B2594u: goto label_1b2594;
            case 0x1B2598u: goto label_1b2598;
            case 0x1B259Cu: goto label_1b259c;
            case 0x1B25A0u: goto label_1b25a0;
            case 0x1B25A4u: goto label_1b25a4;
            case 0x1B25A8u: goto label_1b25a8;
            case 0x1B25ACu: goto label_1b25ac;
            case 0x1B25B0u: goto label_1b25b0;
            case 0x1B25B4u: goto label_1b25b4;
            case 0x1B25B8u: goto label_1b25b8;
            case 0x1B25BCu: goto label_1b25bc;
            case 0x1B25C0u: goto label_1b25c0;
            case 0x1B25C4u: goto label_1b25c4;
            case 0x1B25C8u: goto label_1b25c8;
            case 0x1B25CCu: goto label_1b25cc;
            case 0x1B25D0u: goto label_1b25d0;
            case 0x1B25D4u: goto label_1b25d4;
            case 0x1B25D8u: goto label_1b25d8;
            case 0x1B25DCu: goto label_1b25dc;
            case 0x1B25E0u: goto label_1b25e0;
            case 0x1B25E4u: goto label_1b25e4;
            case 0x1B25E8u: goto label_1b25e8;
            case 0x1B25ECu: goto label_1b25ec;
            case 0x1B25F0u: goto label_1b25f0;
            case 0x1B25F4u: goto label_1b25f4;
            case 0x1B25F8u: goto label_1b25f8;
            case 0x1B25FCu: goto label_1b25fc;
            case 0x1B2600u: goto label_1b2600;
            case 0x1B2604u: goto label_1b2604;
            case 0x1B2608u: goto label_1b2608;
            case 0x1B260Cu: goto label_1b260c;
            case 0x1B2610u: goto label_1b2610;
            case 0x1B2614u: goto label_1b2614;
            case 0x1B2618u: goto label_1b2618;
            case 0x1B261Cu: goto label_1b261c;
            case 0x1B2620u: goto label_1b2620;
            case 0x1B2624u: goto label_1b2624;
            case 0x1B2628u: goto label_1b2628;
            case 0x1B262Cu: goto label_1b262c;
            case 0x1B2630u: goto label_1b2630;
            case 0x1B2634u: goto label_1b2634;
            case 0x1B2638u: goto label_1b2638;
            case 0x1B263Cu: goto label_1b263c;
            case 0x1B2640u: goto label_1b2640;
            case 0x1B2644u: goto label_1b2644;
            case 0x1B2648u: goto label_1b2648;
            case 0x1B264Cu: goto label_1b264c;
            case 0x1B2650u: goto label_1b2650;
            case 0x1B2654u: goto label_1b2654;
            case 0x1B2658u: goto label_1b2658;
            case 0x1B265Cu: goto label_1b265c;
            case 0x1B2660u: goto label_1b2660;
            case 0x1B2664u: goto label_1b2664;
            case 0x1B2668u: goto label_1b2668;
            case 0x1B266Cu: goto label_1b266c;
            case 0x1B2670u: goto label_1b2670;
            case 0x1B2674u: goto label_1b2674;
            case 0x1B2678u: goto label_1b2678;
            case 0x1B267Cu: goto label_1b267c;
            case 0x1B2680u: goto label_1b2680;
            case 0x1B2684u: goto label_1b2684;
            case 0x1B2688u: goto label_1b2688;
            case 0x1B268Cu: goto label_1b268c;
            case 0x1B2690u: goto label_1b2690;
            case 0x1B2694u: goto label_1b2694;
            case 0x1B2698u: goto label_1b2698;
            case 0x1B269Cu: goto label_1b269c;
            case 0x1B26A0u: goto label_1b26a0;
            case 0x1B26A4u: goto label_1b26a4;
            case 0x1B26A8u: goto label_1b26a8;
            case 0x1B26ACu: goto label_1b26ac;
            case 0x1B26B0u: goto label_1b26b0;
            case 0x1B26B4u: goto label_1b26b4;
            case 0x1B26B8u: goto label_1b26b8;
            case 0x1B26BCu: goto label_1b26bc;
            case 0x1B26C0u: goto label_1b26c0;
            case 0x1B26C4u: goto label_1b26c4;
            case 0x1B26C8u: goto label_1b26c8;
            case 0x1B26CCu: goto label_1b26cc;
            case 0x1B26D0u: goto label_1b26d0;
            case 0x1B26D4u: goto label_1b26d4;
            case 0x1B26D8u: goto label_1b26d8;
            case 0x1B26DCu: goto label_1b26dc;
            case 0x1B26E0u: goto label_1b26e0;
            case 0x1B26E4u: goto label_1b26e4;
            case 0x1B26E8u: goto label_1b26e8;
            case 0x1B26ECu: goto label_1b26ec;
            case 0x1B26F0u: goto label_1b26f0;
            case 0x1B26F4u: goto label_1b26f4;
            case 0x1B26F8u: goto label_1b26f8;
            case 0x1B26FCu: goto label_1b26fc;
            case 0x1B2700u: goto label_1b2700;
            case 0x1B2704u: goto label_1b2704;
            case 0x1B2708u: goto label_1b2708;
            case 0x1B270Cu: goto label_1b270c;
            case 0x1B2710u: goto label_1b2710;
            case 0x1B2714u: goto label_1b2714;
            case 0x1B2718u: goto label_1b2718;
            case 0x1B271Cu: goto label_1b271c;
            case 0x1B2720u: goto label_1b2720;
            case 0x1B2724u: goto label_1b2724;
            case 0x1B2728u: goto label_1b2728;
            case 0x1B272Cu: goto label_1b272c;
            case 0x1B2730u: goto label_1b2730;
            case 0x1B2734u: goto label_1b2734;
            case 0x1B2738u: goto label_1b2738;
            case 0x1B273Cu: goto label_1b273c;
            case 0x1B2740u: goto label_1b2740;
            case 0x1B2744u: goto label_1b2744;
            case 0x1B2748u: goto label_1b2748;
            case 0x1B274Cu: goto label_1b274c;
            case 0x1B2750u: goto label_1b2750;
            case 0x1B2754u: goto label_1b2754;
            case 0x1B2758u: goto label_1b2758;
            case 0x1B275Cu: goto label_1b275c;
            case 0x1B2760u: goto label_1b2760;
            case 0x1B2764u: goto label_1b2764;
            case 0x1B2768u: goto label_1b2768;
            case 0x1B276Cu: goto label_1b276c;
            case 0x1B2770u: goto label_1b2770;
            case 0x1B2774u: goto label_1b2774;
            case 0x1B2778u: goto label_1b2778;
            case 0x1B277Cu: goto label_1b277c;
            case 0x1B2780u: goto label_1b2780;
            case 0x1B2784u: goto label_1b2784;
            case 0x1B2788u: goto label_1b2788;
            case 0x1B278Cu: goto label_1b278c;
            case 0x1B2790u: goto label_1b2790;
            case 0x1B2794u: goto label_1b2794;
            case 0x1B2798u: goto label_1b2798;
            case 0x1B279Cu: goto label_1b279c;
            case 0x1B27A0u: goto label_1b27a0;
            case 0x1B27A4u: goto label_1b27a4;
            case 0x1B27A8u: goto label_1b27a8;
            case 0x1B27ACu: goto label_1b27ac;
            case 0x1B27B0u: goto label_1b27b0;
            case 0x1B27B4u: goto label_1b27b4;
            case 0x1B27B8u: goto label_1b27b8;
            case 0x1B27BCu: goto label_1b27bc;
            case 0x1B27C0u: goto label_1b27c0;
            case 0x1B27C4u: goto label_1b27c4;
            case 0x1B27C8u: goto label_1b27c8;
            case 0x1B27CCu: goto label_1b27cc;
            case 0x1B27D0u: goto label_1b27d0;
            case 0x1B27D4u: goto label_1b27d4;
            case 0x1B27D8u: goto label_1b27d8;
            case 0x1B27DCu: goto label_1b27dc;
            case 0x1B27E0u: goto label_1b27e0;
            case 0x1B27E4u: goto label_1b27e4;
            case 0x1B27E8u: goto label_1b27e8;
            case 0x1B27ECu: goto label_1b27ec;
            case 0x1B27F0u: goto label_1b27f0;
            case 0x1B27F4u: goto label_1b27f4;
            case 0x1B27F8u: goto label_1b27f8;
            case 0x1B27FCu: goto label_1b27fc;
            case 0x1B2800u: goto label_1b2800;
            case 0x1B2804u: goto label_1b2804;
            case 0x1B2808u: goto label_1b2808;
            case 0x1B280Cu: goto label_1b280c;
            case 0x1B2810u: goto label_1b2810;
            case 0x1B2814u: goto label_1b2814;
            case 0x1B2818u: goto label_1b2818;
            case 0x1B281Cu: goto label_1b281c;
            case 0x1B2820u: goto label_1b2820;
            case 0x1B2824u: goto label_1b2824;
            case 0x1B2828u: goto label_1b2828;
            case 0x1B282Cu: goto label_1b282c;
            case 0x1B2830u: goto label_1b2830;
            case 0x1B2834u: goto label_1b2834;
            case 0x1B2838u: goto label_1b2838;
            case 0x1B283Cu: goto label_1b283c;
            case 0x1B2840u: goto label_1b2840;
            case 0x1B2844u: goto label_1b2844;
            case 0x1B2848u: goto label_1b2848;
            case 0x1B284Cu: goto label_1b284c;
            case 0x1B2850u: goto label_1b2850;
            case 0x1B2854u: goto label_1b2854;
            case 0x1B2858u: goto label_1b2858;
            case 0x1B285Cu: goto label_1b285c;
            case 0x1B2860u: goto label_1b2860;
            case 0x1B2864u: goto label_1b2864;
            case 0x1B2868u: goto label_1b2868;
            case 0x1B286Cu: goto label_1b286c;
            case 0x1B2870u: goto label_1b2870;
            case 0x1B2874u: goto label_1b2874;
            case 0x1B2878u: goto label_1b2878;
            case 0x1B287Cu: goto label_1b287c;
            case 0x1B2880u: goto label_1b2880;
            case 0x1B2884u: goto label_1b2884;
            case 0x1B2888u: goto label_1b2888;
            case 0x1B288Cu: goto label_1b288c;
            case 0x1B2890u: goto label_1b2890;
            case 0x1B2894u: goto label_1b2894;
            case 0x1B2898u: goto label_1b2898;
            case 0x1B289Cu: goto label_1b289c;
            case 0x1B28A0u: goto label_1b28a0;
            case 0x1B28A4u: goto label_1b28a4;
            case 0x1B28A8u: goto label_1b28a8;
            case 0x1B28ACu: goto label_1b28ac;
            case 0x1B28B0u: goto label_1b28b0;
            case 0x1B28B4u: goto label_1b28b4;
            case 0x1B28B8u: goto label_1b28b8;
            case 0x1B28BCu: goto label_1b28bc;
            case 0x1B28C0u: goto label_1b28c0;
            case 0x1B28C4u: goto label_1b28c4;
            case 0x1B28C8u: goto label_1b28c8;
            case 0x1B28CCu: goto label_1b28cc;
            case 0x1B28D0u: goto label_1b28d0;
            case 0x1B28D4u: goto label_1b28d4;
            case 0x1B28D8u: goto label_1b28d8;
            case 0x1B28DCu: goto label_1b28dc;
            case 0x1B28E0u: goto label_1b28e0;
            case 0x1B28E4u: goto label_1b28e4;
            case 0x1B28E8u: goto label_1b28e8;
            case 0x1B28ECu: goto label_1b28ec;
            case 0x1B28F0u: goto label_1b28f0;
            case 0x1B28F4u: goto label_1b28f4;
            case 0x1B28F8u: goto label_1b28f8;
            case 0x1B28FCu: goto label_1b28fc;
            case 0x1B2900u: goto label_1b2900;
            case 0x1B2904u: goto label_1b2904;
            case 0x1B2908u: goto label_1b2908;
            case 0x1B290Cu: goto label_1b290c;
            case 0x1B2910u: goto label_1b2910;
            case 0x1B2914u: goto label_1b2914;
            case 0x1B2918u: goto label_1b2918;
            case 0x1B291Cu: goto label_1b291c;
            case 0x1B2920u: goto label_1b2920;
            case 0x1B2924u: goto label_1b2924;
            case 0x1B2928u: goto label_1b2928;
            case 0x1B292Cu: goto label_1b292c;
            case 0x1B2930u: goto label_1b2930;
            case 0x1B2934u: goto label_1b2934;
            case 0x1B2938u: goto label_1b2938;
            case 0x1B293Cu: goto label_1b293c;
            case 0x1B2940u: goto label_1b2940;
            case 0x1B2944u: goto label_1b2944;
            case 0x1B2948u: goto label_1b2948;
            case 0x1B294Cu: goto label_1b294c;
            case 0x1B2950u: goto label_1b2950;
            case 0x1B2954u: goto label_1b2954;
            case 0x1B2958u: goto label_1b2958;
            case 0x1B295Cu: goto label_1b295c;
            case 0x1B2960u: goto label_1b2960;
            case 0x1B2964u: goto label_1b2964;
            case 0x1B2968u: goto label_1b2968;
            case 0x1B296Cu: goto label_1b296c;
            case 0x1B2970u: goto label_1b2970;
            case 0x1B2974u: goto label_1b2974;
            case 0x1B2978u: goto label_1b2978;
            case 0x1B297Cu: goto label_1b297c;
            case 0x1B2980u: goto label_1b2980;
            case 0x1B2984u: goto label_1b2984;
            case 0x1B2988u: goto label_1b2988;
            case 0x1B298Cu: goto label_1b298c;
            case 0x1B2990u: goto label_1b2990;
            case 0x1B2994u: goto label_1b2994;
            case 0x1B2998u: goto label_1b2998;
            case 0x1B299Cu: goto label_1b299c;
            case 0x1B29A0u: goto label_1b29a0;
            case 0x1B29A4u: goto label_1b29a4;
            case 0x1B29A8u: goto label_1b29a8;
            case 0x1B29ACu: goto label_1b29ac;
            case 0x1B29B0u: goto label_1b29b0;
            case 0x1B29B4u: goto label_1b29b4;
            case 0x1B29B8u: goto label_1b29b8;
            case 0x1B29BCu: goto label_1b29bc;
            case 0x1B29C0u: goto label_1b29c0;
            case 0x1B29C4u: goto label_1b29c4;
            case 0x1B29C8u: goto label_1b29c8;
            case 0x1B29CCu: goto label_1b29cc;
            case 0x1B29D0u: goto label_1b29d0;
            case 0x1B29D4u: goto label_1b29d4;
            case 0x1B29D8u: goto label_1b29d8;
            case 0x1B29DCu: goto label_1b29dc;
            case 0x1B29E0u: goto label_1b29e0;
            case 0x1B29E4u: goto label_1b29e4;
            case 0x1B29E8u: goto label_1b29e8;
            case 0x1B29ECu: goto label_1b29ec;
            case 0x1B29F0u: goto label_1b29f0;
            case 0x1B29F4u: goto label_1b29f4;
            case 0x1B29F8u: goto label_1b29f8;
            case 0x1B29FCu: goto label_1b29fc;
            case 0x1B2A00u: goto label_1b2a00;
            case 0x1B2A04u: goto label_1b2a04;
            case 0x1B2A08u: goto label_1b2a08;
            case 0x1B2A0Cu: goto label_1b2a0c;
            case 0x1B2A10u: goto label_1b2a10;
            case 0x1B2A14u: goto label_1b2a14;
            case 0x1B2A18u: goto label_1b2a18;
            case 0x1B2A1Cu: goto label_1b2a1c;
            case 0x1B2A20u: goto label_1b2a20;
            case 0x1B2A24u: goto label_1b2a24;
            case 0x1B2A28u: goto label_1b2a28;
            case 0x1B2A2Cu: goto label_1b2a2c;
            case 0x1B2A30u: goto label_1b2a30;
            case 0x1B2A34u: goto label_1b2a34;
            case 0x1B2A38u: goto label_1b2a38;
            case 0x1B2A3Cu: goto label_1b2a3c;
            case 0x1B2A40u: goto label_1b2a40;
            case 0x1B2A44u: goto label_1b2a44;
            case 0x1B2A48u: goto label_1b2a48;
            case 0x1B2A4Cu: goto label_1b2a4c;
            case 0x1B2A50u: goto label_1b2a50;
            case 0x1B2A54u: goto label_1b2a54;
            case 0x1B2A58u: goto label_1b2a58;
            case 0x1B2A5Cu: goto label_1b2a5c;
            case 0x1B2A60u: goto label_1b2a60;
            case 0x1B2A64u: goto label_1b2a64;
            case 0x1B2A68u: goto label_1b2a68;
            case 0x1B2A6Cu: goto label_1b2a6c;
            case 0x1B2A70u: goto label_1b2a70;
            case 0x1B2A74u: goto label_1b2a74;
            case 0x1B2A78u: goto label_1b2a78;
            case 0x1B2A7Cu: goto label_1b2a7c;
            case 0x1B2A80u: goto label_1b2a80;
            case 0x1B2A84u: goto label_1b2a84;
            case 0x1B2A88u: goto label_1b2a88;
            case 0x1B2A8Cu: goto label_1b2a8c;
            case 0x1B2A90u: goto label_1b2a90;
            case 0x1B2A94u: goto label_1b2a94;
            case 0x1B2A98u: goto label_1b2a98;
            case 0x1B2A9Cu: goto label_1b2a9c;
            case 0x1B2AA0u: goto label_1b2aa0;
            case 0x1B2AA4u: goto label_1b2aa4;
            case 0x1B2AA8u: goto label_1b2aa8;
            case 0x1B2AACu: goto label_1b2aac;
            case 0x1B2AB0u: goto label_1b2ab0;
            case 0x1B2AB4u: goto label_1b2ab4;
            case 0x1B2AB8u: goto label_1b2ab8;
            case 0x1B2ABCu: goto label_1b2abc;
            case 0x1B2AC0u: goto label_1b2ac0;
            case 0x1B2AC4u: goto label_1b2ac4;
            case 0x1B2AC8u: goto label_1b2ac8;
            case 0x1B2ACCu: goto label_1b2acc;
            case 0x1B2AD0u: goto label_1b2ad0;
            case 0x1B2AD4u: goto label_1b2ad4;
            case 0x1B2AD8u: goto label_1b2ad8;
            case 0x1B2ADCu: goto label_1b2adc;
            case 0x1B2AE0u: goto label_1b2ae0;
            case 0x1B2AE4u: goto label_1b2ae4;
            case 0x1B2AE8u: goto label_1b2ae8;
            case 0x1B2AECu: goto label_1b2aec;
            case 0x1B2AF0u: goto label_1b2af0;
            case 0x1B2AF4u: goto label_1b2af4;
            case 0x1B2AF8u: goto label_1b2af8;
            case 0x1B2AFCu: goto label_1b2afc;
            case 0x1B2B00u: goto label_1b2b00;
            case 0x1B2B04u: goto label_1b2b04;
            case 0x1B2B08u: goto label_1b2b08;
            case 0x1B2B0Cu: goto label_1b2b0c;
            case 0x1B2B10u: goto label_1b2b10;
            case 0x1B2B14u: goto label_1b2b14;
            case 0x1B2B18u: goto label_1b2b18;
            case 0x1B2B1Cu: goto label_1b2b1c;
            case 0x1B2B20u: goto label_1b2b20;
            case 0x1B2B24u: goto label_1b2b24;
            case 0x1B2B28u: goto label_1b2b28;
            case 0x1B2B2Cu: goto label_1b2b2c;
            case 0x1B2B30u: goto label_1b2b30;
            case 0x1B2B34u: goto label_1b2b34;
            case 0x1B2B38u: goto label_1b2b38;
            case 0x1B2B3Cu: goto label_1b2b3c;
            case 0x1B2B40u: goto label_1b2b40;
            case 0x1B2B44u: goto label_1b2b44;
            case 0x1B2B48u: goto label_1b2b48;
            case 0x1B2B4Cu: goto label_1b2b4c;
            case 0x1B2B50u: goto label_1b2b50;
            case 0x1B2B54u: goto label_1b2b54;
            case 0x1B2B58u: goto label_1b2b58;
            case 0x1B2B5Cu: goto label_1b2b5c;
            case 0x1B2B60u: goto label_1b2b60;
            case 0x1B2B64u: goto label_1b2b64;
            case 0x1B2B68u: goto label_1b2b68;
            case 0x1B2B6Cu: goto label_1b2b6c;
            case 0x1B2B70u: goto label_1b2b70;
            case 0x1B2B74u: goto label_1b2b74;
            case 0x1B2B78u: goto label_1b2b78;
            case 0x1B2B7Cu: goto label_1b2b7c;
            case 0x1B2B80u: goto label_1b2b80;
            case 0x1B2B84u: goto label_1b2b84;
            case 0x1B2B88u: goto label_1b2b88;
            case 0x1B2B8Cu: goto label_1b2b8c;
            case 0x1B2B90u: goto label_1b2b90;
            case 0x1B2B94u: goto label_1b2b94;
            case 0x1B2B98u: goto label_1b2b98;
            case 0x1B2B9Cu: goto label_1b2b9c;
            case 0x1B2BA0u: goto label_1b2ba0;
            case 0x1B2BA4u: goto label_1b2ba4;
            case 0x1B2BA8u: goto label_1b2ba8;
            case 0x1B2BACu: goto label_1b2bac;
            case 0x1B2BB0u: goto label_1b2bb0;
            case 0x1B2BB4u: goto label_1b2bb4;
            case 0x1B2BB8u: goto label_1b2bb8;
            case 0x1B2BBCu: goto label_1b2bbc;
            case 0x1B2BC0u: goto label_1b2bc0;
            case 0x1B2BC4u: goto label_1b2bc4;
            case 0x1B2BC8u: goto label_1b2bc8;
            case 0x1B2BCCu: goto label_1b2bcc;
            case 0x1B2BD0u: goto label_1b2bd0;
            case 0x1B2BD4u: goto label_1b2bd4;
            case 0x1B2BD8u: goto label_1b2bd8;
            case 0x1B2BDCu: goto label_1b2bdc;
            case 0x1B2BE0u: goto label_1b2be0;
            case 0x1B2BE4u: goto label_1b2be4;
            case 0x1B2BE8u: goto label_1b2be8;
            case 0x1B2BECu: goto label_1b2bec;
            case 0x1B2BF0u: goto label_1b2bf0;
            case 0x1B2BF4u: goto label_1b2bf4;
            case 0x1B2BF8u: goto label_1b2bf8;
            case 0x1B2BFCu: goto label_1b2bfc;
            case 0x1B2C00u: goto label_1b2c00;
            case 0x1B2C04u: goto label_1b2c04;
            case 0x1B2C08u: goto label_1b2c08;
            case 0x1B2C0Cu: goto label_1b2c0c;
            case 0x1B2C10u: goto label_1b2c10;
            case 0x1B2C14u: goto label_1b2c14;
            case 0x1B2C18u: goto label_1b2c18;
            case 0x1B2C1Cu: goto label_1b2c1c;
            case 0x1B2C20u: goto label_1b2c20;
            case 0x1B2C24u: goto label_1b2c24;
            case 0x1B2C28u: goto label_1b2c28;
            case 0x1B2C2Cu: goto label_1b2c2c;
            case 0x1B2C30u: goto label_1b2c30;
            case 0x1B2C34u: goto label_1b2c34;
            case 0x1B2C38u: goto label_1b2c38;
            case 0x1B2C3Cu: goto label_1b2c3c;
            case 0x1B2C40u: goto label_1b2c40;
            case 0x1B2C44u: goto label_1b2c44;
            case 0x1B2C48u: goto label_1b2c48;
            case 0x1B2C4Cu: goto label_1b2c4c;
            case 0x1B2C50u: goto label_1b2c50;
            case 0x1B2C54u: goto label_1b2c54;
            case 0x1B2C58u: goto label_1b2c58;
            case 0x1B2C5Cu: goto label_1b2c5c;
            case 0x1B2C60u: goto label_1b2c60;
            case 0x1B2C64u: goto label_1b2c64;
            case 0x1B2C68u: goto label_1b2c68;
            case 0x1B2C6Cu: goto label_1b2c6c;
            case 0x1B2C70u: goto label_1b2c70;
            case 0x1B2C74u: goto label_1b2c74;
            case 0x1B2C78u: goto label_1b2c78;
            case 0x1B2C7Cu: goto label_1b2c7c;
            case 0x1B2C80u: goto label_1b2c80;
            case 0x1B2C84u: goto label_1b2c84;
            case 0x1B2C88u: goto label_1b2c88;
            case 0x1B2C8Cu: goto label_1b2c8c;
            case 0x1B2C90u: goto label_1b2c90;
            case 0x1B2C94u: goto label_1b2c94;
            case 0x1B2C98u: goto label_1b2c98;
            case 0x1B2C9Cu: goto label_1b2c9c;
            case 0x1B2CA0u: goto label_1b2ca0;
            case 0x1B2CA4u: goto label_1b2ca4;
            case 0x1B2CA8u: goto label_1b2ca8;
            case 0x1B2CACu: goto label_1b2cac;
            case 0x1B2CB0u: goto label_1b2cb0;
            case 0x1B2CB4u: goto label_1b2cb4;
            case 0x1B2CB8u: goto label_1b2cb8;
            case 0x1B2CBCu: goto label_1b2cbc;
            case 0x1B2CC0u: goto label_1b2cc0;
            case 0x1B2CC4u: goto label_1b2cc4;
            case 0x1B2CC8u: goto label_1b2cc8;
            case 0x1B2CCCu: goto label_1b2ccc;
            case 0x1B2CD0u: goto label_1b2cd0;
            case 0x1B2CD4u: goto label_1b2cd4;
            case 0x1B2CD8u: goto label_1b2cd8;
            case 0x1B2CDCu: goto label_1b2cdc;
            case 0x1B2CE0u: goto label_1b2ce0;
            case 0x1B2CE4u: goto label_1b2ce4;
            case 0x1B2CE8u: goto label_1b2ce8;
            case 0x1B2CECu: goto label_1b2cec;
            case 0x1B2CF0u: goto label_1b2cf0;
            case 0x1B2CF4u: goto label_1b2cf4;
            case 0x1B2CF8u: goto label_1b2cf8;
            case 0x1B2CFCu: goto label_1b2cfc;
            case 0x1B2D00u: goto label_1b2d00;
            case 0x1B2D04u: goto label_1b2d04;
            case 0x1B2D08u: goto label_1b2d08;
            case 0x1B2D0Cu: goto label_1b2d0c;
            case 0x1B2D10u: goto label_1b2d10;
            case 0x1B2D14u: goto label_1b2d14;
            case 0x1B2D18u: goto label_1b2d18;
            case 0x1B2D1Cu: goto label_1b2d1c;
            case 0x1B2D20u: goto label_1b2d20;
            case 0x1B2D24u: goto label_1b2d24;
            case 0x1B2D28u: goto label_1b2d28;
            case 0x1B2D2Cu: goto label_1b2d2c;
            case 0x1B2D30u: goto label_1b2d30;
            case 0x1B2D34u: goto label_1b2d34;
            case 0x1B2D38u: goto label_1b2d38;
            case 0x1B2D3Cu: goto label_1b2d3c;
            case 0x1B2D40u: goto label_1b2d40;
            case 0x1B2D44u: goto label_1b2d44;
            case 0x1B2D48u: goto label_1b2d48;
            case 0x1B2D4Cu: goto label_1b2d4c;
            case 0x1B2D50u: goto label_1b2d50;
            case 0x1B2D54u: goto label_1b2d54;
            case 0x1B2D58u: goto label_1b2d58;
            case 0x1B2D5Cu: goto label_1b2d5c;
            case 0x1B2D60u: goto label_1b2d60;
            case 0x1B2D64u: goto label_1b2d64;
            case 0x1B2D68u: goto label_1b2d68;
            case 0x1B2D6Cu: goto label_1b2d6c;
            case 0x1B2D70u: goto label_1b2d70;
            case 0x1B2D74u: goto label_1b2d74;
            case 0x1B2D78u: goto label_1b2d78;
            case 0x1B2D7Cu: goto label_1b2d7c;
            case 0x1B2D80u: goto label_1b2d80;
            case 0x1B2D84u: goto label_1b2d84;
            case 0x1B2D88u: goto label_1b2d88;
            case 0x1B2D8Cu: goto label_1b2d8c;
            case 0x1B2D90u: goto label_1b2d90;
            case 0x1B2D94u: goto label_1b2d94;
            case 0x1B2D98u: goto label_1b2d98;
            case 0x1B2D9Cu: goto label_1b2d9c;
            case 0x1B2DA0u: goto label_1b2da0;
            case 0x1B2DA4u: goto label_1b2da4;
            case 0x1B2DA8u: goto label_1b2da8;
            case 0x1B2DACu: goto label_1b2dac;
            case 0x1B2DB0u: goto label_1b2db0;
            case 0x1B2DB4u: goto label_1b2db4;
            case 0x1B2DB8u: goto label_1b2db8;
            case 0x1B2DBCu: goto label_1b2dbc;
            case 0x1B2DC0u: goto label_1b2dc0;
            case 0x1B2DC4u: goto label_1b2dc4;
            case 0x1B2DC8u: goto label_1b2dc8;
            case 0x1B2DCCu: goto label_1b2dcc;
            case 0x1B2DD0u: goto label_1b2dd0;
            case 0x1B2DD4u: goto label_1b2dd4;
            case 0x1B2DD8u: goto label_1b2dd8;
            case 0x1B2DDCu: goto label_1b2ddc;
            case 0x1B2DE0u: goto label_1b2de0;
            case 0x1B2DE4u: goto label_1b2de4;
            case 0x1B2DE8u: goto label_1b2de8;
            case 0x1B2DECu: goto label_1b2dec;
            case 0x1B2DF0u: goto label_1b2df0;
            case 0x1B2DF4u: goto label_1b2df4;
            case 0x1B2DF8u: goto label_1b2df8;
            case 0x1B2DFCu: goto label_1b2dfc;
            case 0x1B2E00u: goto label_1b2e00;
            case 0x1B2E04u: goto label_1b2e04;
            case 0x1B2E08u: goto label_1b2e08;
            case 0x1B2E0Cu: goto label_1b2e0c;
            case 0x1B2E10u: goto label_1b2e10;
            case 0x1B2E14u: goto label_1b2e14;
            case 0x1B2E18u: goto label_1b2e18;
            case 0x1B2E1Cu: goto label_1b2e1c;
            case 0x1B2E20u: goto label_1b2e20;
            case 0x1B2E24u: goto label_1b2e24;
            case 0x1B2E28u: goto label_1b2e28;
            case 0x1B2E2Cu: goto label_1b2e2c;
            case 0x1B2E30u: goto label_1b2e30;
            case 0x1B2E34u: goto label_1b2e34;
            case 0x1B2E38u: goto label_1b2e38;
            case 0x1B2E3Cu: goto label_1b2e3c;
            case 0x1B2E40u: goto label_1b2e40;
            case 0x1B2E44u: goto label_1b2e44;
            case 0x1B2E48u: goto label_1b2e48;
            case 0x1B2E4Cu: goto label_1b2e4c;
            case 0x1B2E50u: goto label_1b2e50;
            case 0x1B2E54u: goto label_1b2e54;
            case 0x1B2E58u: goto label_1b2e58;
            case 0x1B2E5Cu: goto label_1b2e5c;
            case 0x1B2E60u: goto label_1b2e60;
            case 0x1B2E64u: goto label_1b2e64;
            case 0x1B2E68u: goto label_1b2e68;
            case 0x1B2E6Cu: goto label_1b2e6c;
            case 0x1B2E70u: goto label_1b2e70;
            case 0x1B2E74u: goto label_1b2e74;
            case 0x1B2E78u: goto label_1b2e78;
            case 0x1B2E7Cu: goto label_1b2e7c;
            case 0x1B2E80u: goto label_1b2e80;
            case 0x1B2E84u: goto label_1b2e84;
            case 0x1B2E88u: goto label_1b2e88;
            case 0x1B2E8Cu: goto label_1b2e8c;
            case 0x1B2E90u: goto label_1b2e90;
            case 0x1B2E94u: goto label_1b2e94;
            case 0x1B2E98u: goto label_1b2e98;
            case 0x1B2E9Cu: goto label_1b2e9c;
            case 0x1B2EA0u: goto label_1b2ea0;
            case 0x1B2EA4u: goto label_1b2ea4;
            case 0x1B2EA8u: goto label_1b2ea8;
            case 0x1B2EACu: goto label_1b2eac;
            case 0x1B2EB0u: goto label_1b2eb0;
            case 0x1B2EB4u: goto label_1b2eb4;
            case 0x1B2EB8u: goto label_1b2eb8;
            case 0x1B2EBCu: goto label_1b2ebc;
            case 0x1B2EC0u: goto label_1b2ec0;
            case 0x1B2EC4u: goto label_1b2ec4;
            case 0x1B2EC8u: goto label_1b2ec8;
            case 0x1B2ECCu: goto label_1b2ecc;
            case 0x1B2ED0u: goto label_1b2ed0;
            case 0x1B2ED4u: goto label_1b2ed4;
            case 0x1B2ED8u: goto label_1b2ed8;
            case 0x1B2EDCu: goto label_1b2edc;
            case 0x1B2EE0u: goto label_1b2ee0;
            case 0x1B2EE4u: goto label_1b2ee4;
            case 0x1B2EE8u: goto label_1b2ee8;
            case 0x1B2EECu: goto label_1b2eec;
            case 0x1B2EF0u: goto label_1b2ef0;
            case 0x1B2EF4u: goto label_1b2ef4;
            case 0x1B2EF8u: goto label_1b2ef8;
            case 0x1B2EFCu: goto label_1b2efc;
            case 0x1B2F00u: goto label_1b2f00;
            case 0x1B2F04u: goto label_1b2f04;
            case 0x1B2F08u: goto label_1b2f08;
            case 0x1B2F0Cu: goto label_1b2f0c;
            case 0x1B2F10u: goto label_1b2f10;
            case 0x1B2F14u: goto label_1b2f14;
            case 0x1B2F18u: goto label_1b2f18;
            case 0x1B2F1Cu: goto label_1b2f1c;
            case 0x1B2F20u: goto label_1b2f20;
            case 0x1B2F24u: goto label_1b2f24;
            case 0x1B2F28u: goto label_1b2f28;
            case 0x1B2F2Cu: goto label_1b2f2c;
            case 0x1B2F30u: goto label_1b2f30;
            case 0x1B2F34u: goto label_1b2f34;
            case 0x1B2F38u: goto label_1b2f38;
            case 0x1B2F3Cu: goto label_1b2f3c;
            case 0x1B2F40u: goto label_1b2f40;
            case 0x1B2F44u: goto label_1b2f44;
            case 0x1B2F48u: goto label_1b2f48;
            case 0x1B2F4Cu: goto label_1b2f4c;
            case 0x1B2F50u: goto label_1b2f50;
            case 0x1B2F54u: goto label_1b2f54;
            case 0x1B2F58u: goto label_1b2f58;
            case 0x1B2F5Cu: goto label_1b2f5c;
            case 0x1B2F60u: goto label_1b2f60;
            case 0x1B2F64u: goto label_1b2f64;
            case 0x1B2F68u: goto label_1b2f68;
            case 0x1B2F6Cu: goto label_1b2f6c;
            case 0x1B2F70u: goto label_1b2f70;
            case 0x1B2F74u: goto label_1b2f74;
            case 0x1B2F78u: goto label_1b2f78;
            case 0x1B2F7Cu: goto label_1b2f7c;
            case 0x1B2F80u: goto label_1b2f80;
            case 0x1B2F84u: goto label_1b2f84;
            case 0x1B2F88u: goto label_1b2f88;
            case 0x1B2F8Cu: goto label_1b2f8c;
            case 0x1B2F90u: goto label_1b2f90;
            case 0x1B2F94u: goto label_1b2f94;
            case 0x1B2F98u: goto label_1b2f98;
            case 0x1B2F9Cu: goto label_1b2f9c;
            case 0x1B2FA0u: goto label_1b2fa0;
            case 0x1B2FA4u: goto label_1b2fa4;
            case 0x1B2FA8u: goto label_1b2fa8;
            case 0x1B2FACu: goto label_1b2fac;
            case 0x1B2FB0u: goto label_1b2fb0;
            case 0x1B2FB4u: goto label_1b2fb4;
            case 0x1B2FB8u: goto label_1b2fb8;
            case 0x1B2FBCu: goto label_1b2fbc;
            case 0x1B2FC0u: goto label_1b2fc0;
            case 0x1B2FC4u: goto label_1b2fc4;
            case 0x1B2FC8u: goto label_1b2fc8;
            case 0x1B2FCCu: goto label_1b2fcc;
            case 0x1B2FD0u: goto label_1b2fd0;
            case 0x1B2FD4u: goto label_1b2fd4;
            case 0x1B2FD8u: goto label_1b2fd8;
            case 0x1B2FDCu: goto label_1b2fdc;
            case 0x1B2FE0u: goto label_1b2fe0;
            case 0x1B2FE4u: goto label_1b2fe4;
            case 0x1B2FE8u: goto label_1b2fe8;
            case 0x1B2FECu: goto label_1b2fec;
            case 0x1B2FF0u: goto label_1b2ff0;
            case 0x1B2FF4u: goto label_1b2ff4;
            case 0x1B2FF8u: goto label_1b2ff8;
            case 0x1B2FFCu: goto label_1b2ffc;
            case 0x1B3000u: goto label_1b3000;
            case 0x1B3004u: goto label_1b3004;
            case 0x1B3008u: goto label_1b3008;
            case 0x1B300Cu: goto label_1b300c;
            case 0x1B3010u: goto label_1b3010;
            case 0x1B3014u: goto label_1b3014;
            case 0x1B3018u: goto label_1b3018;
            case 0x1B301Cu: goto label_1b301c;
            case 0x1B3020u: goto label_1b3020;
            case 0x1B3024u: goto label_1b3024;
            case 0x1B3028u: goto label_1b3028;
            case 0x1B302Cu: goto label_1b302c;
            case 0x1B3030u: goto label_1b3030;
            case 0x1B3034u: goto label_1b3034;
            case 0x1B3038u: goto label_1b3038;
            case 0x1B303Cu: goto label_1b303c;
            case 0x1B3040u: goto label_1b3040;
            case 0x1B3044u: goto label_1b3044;
            case 0x1B3048u: goto label_1b3048;
            case 0x1B304Cu: goto label_1b304c;
            case 0x1B3050u: goto label_1b3050;
            case 0x1B3054u: goto label_1b3054;
            case 0x1B3058u: goto label_1b3058;
            case 0x1B305Cu: goto label_1b305c;
            case 0x1B3060u: goto label_1b3060;
            case 0x1B3064u: goto label_1b3064;
            case 0x1B3068u: goto label_1b3068;
            case 0x1B306Cu: goto label_1b306c;
            case 0x1B3070u: goto label_1b3070;
            case 0x1B3074u: goto label_1b3074;
            case 0x1B3078u: goto label_1b3078;
            case 0x1B307Cu: goto label_1b307c;
            case 0x1B3080u: goto label_1b3080;
            case 0x1B3084u: goto label_1b3084;
            case 0x1B3088u: goto label_1b3088;
            case 0x1B308Cu: goto label_1b308c;
            case 0x1B3090u: goto label_1b3090;
            case 0x1B3094u: goto label_1b3094;
            case 0x1B3098u: goto label_1b3098;
            case 0x1B309Cu: goto label_1b309c;
            case 0x1B30A0u: goto label_1b30a0;
            case 0x1B30A4u: goto label_1b30a4;
            case 0x1B30A8u: goto label_1b30a8;
            case 0x1B30ACu: goto label_1b30ac;
            case 0x1B30B0u: goto label_1b30b0;
            case 0x1B30B4u: goto label_1b30b4;
            case 0x1B30B8u: goto label_1b30b8;
            case 0x1B30BCu: goto label_1b30bc;
            case 0x1B30C0u: goto label_1b30c0;
            case 0x1B30C4u: goto label_1b30c4;
            case 0x1B30C8u: goto label_1b30c8;
            case 0x1B30CCu: goto label_1b30cc;
            case 0x1B30D0u: goto label_1b30d0;
            case 0x1B30D4u: goto label_1b30d4;
            case 0x1B30D8u: goto label_1b30d8;
            case 0x1B30DCu: goto label_1b30dc;
            case 0x1B30E0u: goto label_1b30e0;
            case 0x1B30E4u: goto label_1b30e4;
            case 0x1B30E8u: goto label_1b30e8;
            case 0x1B30ECu: goto label_1b30ec;
            case 0x1B30F0u: goto label_1b30f0;
            case 0x1B30F4u: goto label_1b30f4;
            case 0x1B30F8u: goto label_1b30f8;
            case 0x1B30FCu: goto label_1b30fc;
            case 0x1B3100u: goto label_1b3100;
            case 0x1B3104u: goto label_1b3104;
            case 0x1B3108u: goto label_1b3108;
            case 0x1B310Cu: goto label_1b310c;
            case 0x1B3110u: goto label_1b3110;
            case 0x1B3114u: goto label_1b3114;
            case 0x1B3118u: goto label_1b3118;
            case 0x1B311Cu: goto label_1b311c;
            case 0x1B3120u: goto label_1b3120;
            case 0x1B3124u: goto label_1b3124;
            case 0x1B3128u: goto label_1b3128;
            case 0x1B312Cu: goto label_1b312c;
            case 0x1B3130u: goto label_1b3130;
            case 0x1B3134u: goto label_1b3134;
            case 0x1B3138u: goto label_1b3138;
            case 0x1B313Cu: goto label_1b313c;
            case 0x1B3140u: goto label_1b3140;
            case 0x1B3144u: goto label_1b3144;
            case 0x1B3148u: goto label_1b3148;
            case 0x1B314Cu: goto label_1b314c;
            case 0x1B3150u: goto label_1b3150;
            case 0x1B3154u: goto label_1b3154;
            case 0x1B3158u: goto label_1b3158;
            case 0x1B315Cu: goto label_1b315c;
            case 0x1B3160u: goto label_1b3160;
            case 0x1B3164u: goto label_1b3164;
            case 0x1B3168u: goto label_1b3168;
            case 0x1B316Cu: goto label_1b316c;
            case 0x1B3170u: goto label_1b3170;
            case 0x1B3174u: goto label_1b3174;
            case 0x1B3178u: goto label_1b3178;
            case 0x1B317Cu: goto label_1b317c;
            case 0x1B3180u: goto label_1b3180;
            case 0x1B3184u: goto label_1b3184;
            case 0x1B3188u: goto label_1b3188;
            case 0x1B318Cu: goto label_1b318c;
            case 0x1B3190u: goto label_1b3190;
            case 0x1B3194u: goto label_1b3194;
            case 0x1B3198u: goto label_1b3198;
            case 0x1B319Cu: goto label_1b319c;
            case 0x1B31A0u: goto label_1b31a0;
            case 0x1B31A4u: goto label_1b31a4;
            case 0x1B31A8u: goto label_1b31a8;
            case 0x1B31ACu: goto label_1b31ac;
            case 0x1B31B0u: goto label_1b31b0;
            case 0x1B31B4u: goto label_1b31b4;
            case 0x1B31B8u: goto label_1b31b8;
            case 0x1B31BCu: goto label_1b31bc;
            case 0x1B31C0u: goto label_1b31c0;
            case 0x1B31C4u: goto label_1b31c4;
            case 0x1B31C8u: goto label_1b31c8;
            case 0x1B31CCu: goto label_1b31cc;
            case 0x1B31D0u: goto label_1b31d0;
            case 0x1B31D4u: goto label_1b31d4;
            case 0x1B31D8u: goto label_1b31d8;
            case 0x1B31DCu: goto label_1b31dc;
            case 0x1B31E0u: goto label_1b31e0;
            case 0x1B31E4u: goto label_1b31e4;
            case 0x1B31E8u: goto label_1b31e8;
            case 0x1B31ECu: goto label_1b31ec;
            case 0x1B31F0u: goto label_1b31f0;
            case 0x1B31F4u: goto label_1b31f4;
            case 0x1B31F8u: goto label_1b31f8;
            case 0x1B31FCu: goto label_1b31fc;
            case 0x1B3200u: goto label_1b3200;
            case 0x1B3204u: goto label_1b3204;
            case 0x1B3208u: goto label_1b3208;
            case 0x1B320Cu: goto label_1b320c;
            case 0x1B3210u: goto label_1b3210;
            case 0x1B3214u: goto label_1b3214;
            case 0x1B3218u: goto label_1b3218;
            case 0x1B321Cu: goto label_1b321c;
            case 0x1B3220u: goto label_1b3220;
            case 0x1B3224u: goto label_1b3224;
            case 0x1B3228u: goto label_1b3228;
            case 0x1B322Cu: goto label_1b322c;
            case 0x1B3230u: goto label_1b3230;
            case 0x1B3234u: goto label_1b3234;
            case 0x1B3238u: goto label_1b3238;
            case 0x1B323Cu: goto label_1b323c;
            case 0x1B3240u: goto label_1b3240;
            case 0x1B3244u: goto label_1b3244;
            case 0x1B3248u: goto label_1b3248;
            case 0x1B324Cu: goto label_1b324c;
            case 0x1B3250u: goto label_1b3250;
            case 0x1B3254u: goto label_1b3254;
            case 0x1B3258u: goto label_1b3258;
            case 0x1B325Cu: goto label_1b325c;
            case 0x1B3260u: goto label_1b3260;
            case 0x1B3264u: goto label_1b3264;
            case 0x1B3268u: goto label_1b3268;
            case 0x1B326Cu: goto label_1b326c;
            case 0x1B3270u: goto label_1b3270;
            case 0x1B3274u: goto label_1b3274;
            case 0x1B3278u: goto label_1b3278;
            case 0x1B327Cu: goto label_1b327c;
            case 0x1B3280u: goto label_1b3280;
            case 0x1B3284u: goto label_1b3284;
            case 0x1B3288u: goto label_1b3288;
            case 0x1B328Cu: goto label_1b328c;
            case 0x1B3290u: goto label_1b3290;
            case 0x1B3294u: goto label_1b3294;
            case 0x1B3298u: goto label_1b3298;
            case 0x1B329Cu: goto label_1b329c;
            case 0x1B32A0u: goto label_1b32a0;
            case 0x1B32A4u: goto label_1b32a4;
            case 0x1B32A8u: goto label_1b32a8;
            case 0x1B32ACu: goto label_1b32ac;
            case 0x1B32B0u: goto label_1b32b0;
            case 0x1B32B4u: goto label_1b32b4;
            case 0x1B32B8u: goto label_1b32b8;
            case 0x1B32BCu: goto label_1b32bc;
            case 0x1B32C0u: goto label_1b32c0;
            case 0x1B32C4u: goto label_1b32c4;
            case 0x1B32C8u: goto label_1b32c8;
            case 0x1B32CCu: goto label_1b32cc;
            case 0x1B32D0u: goto label_1b32d0;
            case 0x1B32D4u: goto label_1b32d4;
            case 0x1B32D8u: goto label_1b32d8;
            case 0x1B32DCu: goto label_1b32dc;
            case 0x1B32E0u: goto label_1b32e0;
            case 0x1B32E4u: goto label_1b32e4;
            case 0x1B32E8u: goto label_1b32e8;
            case 0x1B32ECu: goto label_1b32ec;
            case 0x1B32F0u: goto label_1b32f0;
            case 0x1B32F4u: goto label_1b32f4;
            case 0x1B32F8u: goto label_1b32f8;
            case 0x1B32FCu: goto label_1b32fc;
            case 0x1B3300u: goto label_1b3300;
            case 0x1B3304u: goto label_1b3304;
            case 0x1B3308u: goto label_1b3308;
            case 0x1B330Cu: goto label_1b330c;
            case 0x1B3310u: goto label_1b3310;
            case 0x1B3314u: goto label_1b3314;
            case 0x1B3318u: goto label_1b3318;
            case 0x1B331Cu: goto label_1b331c;
            case 0x1B3320u: goto label_1b3320;
            case 0x1B3324u: goto label_1b3324;
            case 0x1B3328u: goto label_1b3328;
            case 0x1B332Cu: goto label_1b332c;
            case 0x1B3330u: goto label_1b3330;
            case 0x1B3334u: goto label_1b3334;
            case 0x1B3338u: goto label_1b3338;
            case 0x1B333Cu: goto label_1b333c;
            case 0x1B3340u: goto label_1b3340;
            case 0x1B3344u: goto label_1b3344;
            case 0x1B3348u: goto label_1b3348;
            case 0x1B334Cu: goto label_1b334c;
            case 0x1B3350u: goto label_1b3350;
            case 0x1B3354u: goto label_1b3354;
            case 0x1B3358u: goto label_1b3358;
            case 0x1B335Cu: goto label_1b335c;
            case 0x1B3360u: goto label_1b3360;
            case 0x1B3364u: goto label_1b3364;
            case 0x1B3368u: goto label_1b3368;
            case 0x1B336Cu: goto label_1b336c;
            case 0x1B3370u: goto label_1b3370;
            case 0x1B3374u: goto label_1b3374;
            case 0x1B3378u: goto label_1b3378;
            case 0x1B337Cu: goto label_1b337c;
            case 0x1B3380u: goto label_1b3380;
            case 0x1B3384u: goto label_1b3384;
            case 0x1B3388u: goto label_1b3388;
            case 0x1B338Cu: goto label_1b338c;
            case 0x1B3390u: goto label_1b3390;
            case 0x1B3394u: goto label_1b3394;
            case 0x1B3398u: goto label_1b3398;
            case 0x1B339Cu: goto label_1b339c;
            case 0x1B33A0u: goto label_1b33a0;
            case 0x1B33A4u: goto label_1b33a4;
            case 0x1B33A8u: goto label_1b33a8;
            case 0x1B33ACu: goto label_1b33ac;
            case 0x1B33B0u: goto label_1b33b0;
            case 0x1B33B4u: goto label_1b33b4;
            case 0x1B33B8u: goto label_1b33b8;
            case 0x1B33BCu: goto label_1b33bc;
            case 0x1B33C0u: goto label_1b33c0;
            case 0x1B33C4u: goto label_1b33c4;
            case 0x1B33C8u: goto label_1b33c8;
            case 0x1B33CCu: goto label_1b33cc;
            case 0x1B33D0u: goto label_1b33d0;
            case 0x1B33D4u: goto label_1b33d4;
            case 0x1B33D8u: goto label_1b33d8;
            case 0x1B33DCu: goto label_1b33dc;
            case 0x1B33E0u: goto label_1b33e0;
            case 0x1B33E4u: goto label_1b33e4;
            case 0x1B33E8u: goto label_1b33e8;
            case 0x1B33ECu: goto label_1b33ec;
            case 0x1B33F0u: goto label_1b33f0;
            case 0x1B33F4u: goto label_1b33f4;
            case 0x1B33F8u: goto label_1b33f8;
            case 0x1B33FCu: goto label_1b33fc;
            case 0x1B3400u: goto label_1b3400;
            case 0x1B3404u: goto label_1b3404;
            case 0x1B3408u: goto label_1b3408;
            case 0x1B340Cu: goto label_1b340c;
            case 0x1B3410u: goto label_1b3410;
            case 0x1B3414u: goto label_1b3414;
            case 0x1B3418u: goto label_1b3418;
            case 0x1B341Cu: goto label_1b341c;
            case 0x1B3420u: goto label_1b3420;
            case 0x1B3424u: goto label_1b3424;
            case 0x1B3428u: goto label_1b3428;
            case 0x1B342Cu: goto label_1b342c;
            case 0x1B3430u: goto label_1b3430;
            case 0x1B3434u: goto label_1b3434;
            case 0x1B3438u: goto label_1b3438;
            case 0x1B343Cu: goto label_1b343c;
            case 0x1B3440u: goto label_1b3440;
            case 0x1B3444u: goto label_1b3444;
            case 0x1B3448u: goto label_1b3448;
            case 0x1B344Cu: goto label_1b344c;
            case 0x1B3450u: goto label_1b3450;
            case 0x1B3454u: goto label_1b3454;
            case 0x1B3458u: goto label_1b3458;
            case 0x1B345Cu: goto label_1b345c;
            case 0x1B3460u: goto label_1b3460;
            case 0x1B3464u: goto label_1b3464;
            case 0x1B3468u: goto label_1b3468;
            case 0x1B346Cu: goto label_1b346c;
            case 0x1B3470u: goto label_1b3470;
            case 0x1B3474u: goto label_1b3474;
            case 0x1B3478u: goto label_1b3478;
            case 0x1B347Cu: goto label_1b347c;
            case 0x1B3480u: goto label_1b3480;
            case 0x1B3484u: goto label_1b3484;
            case 0x1B3488u: goto label_1b3488;
            case 0x1B348Cu: goto label_1b348c;
            case 0x1B3490u: goto label_1b3490;
            case 0x1B3494u: goto label_1b3494;
            case 0x1B3498u: goto label_1b3498;
            case 0x1B349Cu: goto label_1b349c;
            case 0x1B34A0u: goto label_1b34a0;
            case 0x1B34A4u: goto label_1b34a4;
            case 0x1B34A8u: goto label_1b34a8;
            case 0x1B34ACu: goto label_1b34ac;
            case 0x1B34B0u: goto label_1b34b0;
            case 0x1B34B4u: goto label_1b34b4;
            case 0x1B34B8u: goto label_1b34b8;
            case 0x1B34BCu: goto label_1b34bc;
            case 0x1B34C0u: goto label_1b34c0;
            case 0x1B34C4u: goto label_1b34c4;
            case 0x1B34C8u: goto label_1b34c8;
            case 0x1B34CCu: goto label_1b34cc;
            case 0x1B34D0u: goto label_1b34d0;
            case 0x1B34D4u: goto label_1b34d4;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34DCu: goto label_1b34dc;
            case 0x1B34E0u: goto label_1b34e0;
            case 0x1B34E4u: goto label_1b34e4;
            case 0x1B34E8u: goto label_1b34e8;
            case 0x1B34ECu: goto label_1b34ec;
            case 0x1B34F0u: goto label_1b34f0;
            case 0x1B34F4u: goto label_1b34f4;
            case 0x1B34F8u: goto label_1b34f8;
            case 0x1B34FCu: goto label_1b34fc;
            case 0x1B3500u: goto label_1b3500;
            case 0x1B3504u: goto label_1b3504;
            case 0x1B3508u: goto label_1b3508;
            case 0x1B350Cu: goto label_1b350c;
            case 0x1B3510u: goto label_1b3510;
            case 0x1B3514u: goto label_1b3514;
            case 0x1B3518u: goto label_1b3518;
            case 0x1B351Cu: goto label_1b351c;
            case 0x1B3520u: goto label_1b3520;
            case 0x1B3524u: goto label_1b3524;
            case 0x1B3528u: goto label_1b3528;
            case 0x1B352Cu: goto label_1b352c;
            case 0x1B3530u: goto label_1b3530;
            case 0x1B3534u: goto label_1b3534;
            case 0x1B3538u: goto label_1b3538;
            case 0x1B353Cu: goto label_1b353c;
            case 0x1B3540u: goto label_1b3540;
            case 0x1B3544u: goto label_1b3544;
            case 0x1B3548u: goto label_1b3548;
            case 0x1B354Cu: goto label_1b354c;
            case 0x1B3550u: goto label_1b3550;
            case 0x1B3554u: goto label_1b3554;
            case 0x1B3558u: goto label_1b3558;
            case 0x1B355Cu: goto label_1b355c;
            case 0x1B3560u: goto label_1b3560;
            case 0x1B3564u: goto label_1b3564;
            case 0x1B3568u: goto label_1b3568;
            case 0x1B356Cu: goto label_1b356c;
            case 0x1B3570u: goto label_1b3570;
            case 0x1B3574u: goto label_1b3574;
            case 0x1B3578u: goto label_1b3578;
            case 0x1B357Cu: goto label_1b357c;
            case 0x1B3580u: goto label_1b3580;
            case 0x1B3584u: goto label_1b3584;
            case 0x1B3588u: goto label_1b3588;
            case 0x1B358Cu: goto label_1b358c;
            case 0x1B3590u: goto label_1b3590;
            case 0x1B3594u: goto label_1b3594;
            case 0x1B3598u: goto label_1b3598;
            case 0x1B359Cu: goto label_1b359c;
            case 0x1B35A0u: goto label_1b35a0;
            case 0x1B35A4u: goto label_1b35a4;
            case 0x1B35A8u: goto label_1b35a8;
            case 0x1B35ACu: goto label_1b35ac;
            case 0x1B35B0u: goto label_1b35b0;
            case 0x1B35B4u: goto label_1b35b4;
            case 0x1B35B8u: goto label_1b35b8;
            case 0x1B35BCu: goto label_1b35bc;
            case 0x1B35C0u: goto label_1b35c0;
            case 0x1B35C4u: goto label_1b35c4;
            case 0x1B35C8u: goto label_1b35c8;
            case 0x1B35CCu: goto label_1b35cc;
            case 0x1B35D0u: goto label_1b35d0;
            case 0x1B35D4u: goto label_1b35d4;
            case 0x1B35D8u: goto label_1b35d8;
            case 0x1B35DCu: goto label_1b35dc;
            case 0x1B35E0u: goto label_1b35e0;
            case 0x1B35E4u: goto label_1b35e4;
            case 0x1B35E8u: goto label_1b35e8;
            case 0x1B35ECu: goto label_1b35ec;
            case 0x1B35F0u: goto label_1b35f0;
            case 0x1B35F4u: goto label_1b35f4;
            case 0x1B35F8u: goto label_1b35f8;
            case 0x1B35FCu: goto label_1b35fc;
            case 0x1B3600u: goto label_1b3600;
            case 0x1B3604u: goto label_1b3604;
            case 0x1B3608u: goto label_1b3608;
            case 0x1B360Cu: goto label_1b360c;
            case 0x1B3610u: goto label_1b3610;
            case 0x1B3614u: goto label_1b3614;
            case 0x1B3618u: goto label_1b3618;
            case 0x1B361Cu: goto label_1b361c;
            case 0x1B3620u: goto label_1b3620;
            case 0x1B3624u: goto label_1b3624;
            case 0x1B3628u: goto label_1b3628;
            case 0x1B362Cu: goto label_1b362c;
            case 0x1B3630u: goto label_1b3630;
            case 0x1B3634u: goto label_1b3634;
            case 0x1B3638u: goto label_1b3638;
            case 0x1B363Cu: goto label_1b363c;
            case 0x1B3640u: goto label_1b3640;
            case 0x1B3644u: goto label_1b3644;
            case 0x1B3648u: goto label_1b3648;
            case 0x1B364Cu: goto label_1b364c;
            case 0x1B3650u: goto label_1b3650;
            case 0x1B3654u: goto label_1b3654;
            case 0x1B3658u: goto label_1b3658;
            case 0x1B365Cu: goto label_1b365c;
            case 0x1B3660u: goto label_1b3660;
            case 0x1B3664u: goto label_1b3664;
            case 0x1B3668u: goto label_1b3668;
            case 0x1B366Cu: goto label_1b366c;
            case 0x1B3670u: goto label_1b3670;
            case 0x1B3674u: goto label_1b3674;
            case 0x1B3678u: goto label_1b3678;
            case 0x1B367Cu: goto label_1b367c;
            case 0x1B3680u: goto label_1b3680;
            case 0x1B3684u: goto label_1b3684;
            case 0x1B3688u: goto label_1b3688;
            case 0x1B368Cu: goto label_1b368c;
            case 0x1B3690u: goto label_1b3690;
            case 0x1B3694u: goto label_1b3694;
            case 0x1B3698u: goto label_1b3698;
            case 0x1B369Cu: goto label_1b369c;
            case 0x1B36A0u: goto label_1b36a0;
            case 0x1B36A4u: goto label_1b36a4;
            case 0x1B36A8u: goto label_1b36a8;
            case 0x1B36ACu: goto label_1b36ac;
            case 0x1B36B0u: goto label_1b36b0;
            case 0x1B36B4u: goto label_1b36b4;
            case 0x1B36B8u: goto label_1b36b8;
            case 0x1B36BCu: goto label_1b36bc;
            case 0x1B36C0u: goto label_1b36c0;
            case 0x1B36C4u: goto label_1b36c4;
            case 0x1B36C8u: goto label_1b36c8;
            case 0x1B36CCu: goto label_1b36cc;
            case 0x1B36D0u: goto label_1b36d0;
            case 0x1B36D4u: goto label_1b36d4;
            case 0x1B36D8u: goto label_1b36d8;
            case 0x1B36DCu: goto label_1b36dc;
            case 0x1B36E0u: goto label_1b36e0;
            case 0x1B36E4u: goto label_1b36e4;
            case 0x1B36E8u: goto label_1b36e8;
            case 0x1B36ECu: goto label_1b36ec;
            case 0x1B36F0u: goto label_1b36f0;
            case 0x1B36F4u: goto label_1b36f4;
            case 0x1B36F8u: goto label_1b36f8;
            case 0x1B36FCu: goto label_1b36fc;
            case 0x1B3700u: goto label_1b3700;
            case 0x1B3704u: goto label_1b3704;
            case 0x1B3708u: goto label_1b3708;
            case 0x1B370Cu: goto label_1b370c;
            case 0x1B3710u: goto label_1b3710;
            case 0x1B3714u: goto label_1b3714;
            case 0x1B3718u: goto label_1b3718;
            case 0x1B371Cu: goto label_1b371c;
            case 0x1B3720u: goto label_1b3720;
            case 0x1B3724u: goto label_1b3724;
            case 0x1B3728u: goto label_1b3728;
            case 0x1B372Cu: goto label_1b372c;
            case 0x1B3730u: goto label_1b3730;
            case 0x1B3734u: goto label_1b3734;
            case 0x1B3738u: goto label_1b3738;
            case 0x1B373Cu: goto label_1b373c;
            case 0x1B3740u: goto label_1b3740;
            case 0x1B3744u: goto label_1b3744;
            case 0x1B3748u: goto label_1b3748;
            case 0x1B374Cu: goto label_1b374c;
            case 0x1B3750u: goto label_1b3750;
            case 0x1B3754u: goto label_1b3754;
            case 0x1B3758u: goto label_1b3758;
            case 0x1B375Cu: goto label_1b375c;
            case 0x1B3760u: goto label_1b3760;
            case 0x1B3764u: goto label_1b3764;
            case 0x1B3768u: goto label_1b3768;
            case 0x1B376Cu: goto label_1b376c;
            case 0x1B3770u: goto label_1b3770;
            case 0x1B3774u: goto label_1b3774;
            case 0x1B3778u: goto label_1b3778;
            case 0x1B377Cu: goto label_1b377c;
            case 0x1B3780u: goto label_1b3780;
            case 0x1B3784u: goto label_1b3784;
            case 0x1B3788u: goto label_1b3788;
            case 0x1B378Cu: goto label_1b378c;
            case 0x1B3790u: goto label_1b3790;
            case 0x1B3794u: goto label_1b3794;
            case 0x1B3798u: goto label_1b3798;
            case 0x1B379Cu: goto label_1b379c;
            case 0x1B37A0u: goto label_1b37a0;
            case 0x1B37A4u: goto label_1b37a4;
            case 0x1B37A8u: goto label_1b37a8;
            case 0x1B37ACu: goto label_1b37ac;
            case 0x1B37B0u: goto label_1b37b0;
            case 0x1B37B4u: goto label_1b37b4;
            case 0x1B37B8u: goto label_1b37b8;
            case 0x1B37BCu: goto label_1b37bc;
            case 0x1B37C0u: goto label_1b37c0;
            case 0x1B37C4u: goto label_1b37c4;
            case 0x1B37C8u: goto label_1b37c8;
            case 0x1B37CCu: goto label_1b37cc;
            case 0x1B37D0u: goto label_1b37d0;
            case 0x1B37D4u: goto label_1b37d4;
            case 0x1B37D8u: goto label_1b37d8;
            case 0x1B37DCu: goto label_1b37dc;
            case 0x1B37E0u: goto label_1b37e0;
            case 0x1B37E4u: goto label_1b37e4;
            case 0x1B37E8u: goto label_1b37e8;
            case 0x1B37ECu: goto label_1b37ec;
            case 0x1B37F0u: goto label_1b37f0;
            case 0x1B37F4u: goto label_1b37f4;
            case 0x1B37F8u: goto label_1b37f8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1b37f4:
    ctx->pc = 0x1B37FCu;
}
