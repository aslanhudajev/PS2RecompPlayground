#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: barDraw1p
// Address: 0x1804d0 - 0x180700
void barDraw1p_0x1804d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("barDraw1p_0x1804d0");
#endif

    ctx->pc = 0x1804d0u;

    // 0x1804d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1804d4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1804d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1804d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1804d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1804dc: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x1804dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1804e0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1804e4: 0xc42227d8  lwc1        $f2, 0x27D8($at)
    ctx->pc = 0x1804e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1804e8: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x1804e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1804ec: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1804ECu;
    {
        const bool branch_taken_0x1804ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1804F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804ECu;
            // 0x1804f0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804ec) {
            ctx->pc = 0x180538u;
            goto label_180538;
        }
    }
    ctx->pc = 0x1804F4u;
    // 0x1804f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1804f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1804f8: 0xc4212b20  lwc1        $f1, 0x2B20($at)
    ctx->pc = 0x1804f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1804fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1804fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180500: 0x0  nop
    ctx->pc = 0x180500u;
    // NOP
    // 0x180504: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x180504u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x180508: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18050c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18050cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180510: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x180510u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x180514: 0xe42227d8  swc1        $f2, 0x27D8($at)
    ctx->pc = 0x180514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180518: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18051c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x18051cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180520: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x180520u;
    {
        const bool branch_taken_0x180520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180520u;
            // 0x180524: 0xe4212b20  swc1        $f1, 0x2B20($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180520) {
            ctx->pc = 0x180548u;
            goto label_180548;
        }
    }
    ctx->pc = 0x180528u;
    // 0x180528: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18052c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18052Cu;
    {
        const bool branch_taken_0x18052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18052Cu;
            // 0x180530: 0xe42c27d8  swc1        $f12, 0x27D8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18052c) {
            ctx->pc = 0x180548u;
            goto label_180548;
        }
    }
    ctx->pc = 0x180534u;
    // 0x180534: 0x0  nop
    ctx->pc = 0x180534u;
    // NOP
label_180538:
    // 0x180538: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18053c: 0xe42c27d8  swc1        $f12, 0x27D8($at)
    ctx->pc = 0x18053cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180540: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180544: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x180544u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
label_180548:
    // 0x180548: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x18054c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x18054cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180550: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180554: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x180554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180558: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x180558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18055c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18055cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180560: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x180564: 0x24843d00  addiu       $a0, $a0, 0x3D00
    ctx->pc = 0x180564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15616));
    // 0x180568: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x180568u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18056c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18056cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180570: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x180570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x180574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180578: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x180578u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18057c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x18057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180580: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x180580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x180584: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x180584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x180588: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18058c: 0x0  nop
    ctx->pc = 0x18058cu;
    // NOP
    // 0x180590: 0xe4202b10  swc1        $f0, 0x2B10($at)
    ctx->pc = 0x180590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11024), bits); }
    // 0x180594: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x180594u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x180598: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x18059c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18059cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1805a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1805a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1805a4: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1805A4u;
    SET_GPR_U32(ctx, 31, 0x1805ACu);
    ctx->pc = 0x1805A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1805A4u;
            // 0x1805a8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805ACu; }
        if (ctx->pc != 0x1805ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805ACu; }
        if (ctx->pc != 0x1805ACu) { return; }
    }
    ctx->pc = 0x1805ACu;
    // 0x1805ac: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1805b0: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1805b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1805b4: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x1805b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1805b8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1805b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1805bc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1805c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1805c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1805c4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1805c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1805c8: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x1805c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1805cc: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1805CCu;
    SET_GPR_U32(ctx, 31, 0x1805D4u);
    ctx->pc = 0x1805D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1805CCu;
            // 0x1805d0: 0x24843d10  addiu       $a0, $a0, 0x3D10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805D4u; }
        if (ctx->pc != 0x1805D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1805D4u; }
        if (ctx->pc != 0x1805D4u) { return; }
    }
    ctx->pc = 0x1805D4u;
    // 0x1805d4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1805d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1805d8: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1805d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1805dc: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x1805dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1805e0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1805e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1805e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1805e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1805e8: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x1805e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x1805ec: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1805f0: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1805f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1805f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1805f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1805f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1805fc: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x1805fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180600: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180600u;
    SET_GPR_U32(ctx, 31, 0x180608u);
    ctx->pc = 0x180604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180600u;
            // 0x180604: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180608u; }
        if (ctx->pc != 0x180608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180608u; }
        if (ctx->pc != 0x180608u) { return; }
    }
    ctx->pc = 0x180608u;
    // 0x180608: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18060c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x18060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180610: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180614: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180614u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180618: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x18061c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18061cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180620: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180624: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180628: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180628u;
    SET_GPR_U32(ctx, 31, 0x180630u);
    ctx->pc = 0x18062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180628u;
            // 0x18062c: 0x24843d30  addiu       $a0, $a0, 0x3D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180630u; }
        if (ctx->pc != 0x180630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180630u; }
        if (ctx->pc != 0x180630u) { return; }
    }
    ctx->pc = 0x180630u;
    // 0x180630: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180634: 0x3c024362  lui         $v0, 0x4362
    ctx->pc = 0x180634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17250 << 16));
    // 0x180638: 0xc4222b18  lwc1        $f2, 0x2B18($at)
    ctx->pc = 0x180638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18063c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180640: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180644: 0x24843d40  addiu       $a0, $a0, 0x3D40
    ctx->pc = 0x180644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15680));
    // 0x180648: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x18064c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180650: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180654: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180658: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18065c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18065cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180660: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x180660u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180664: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180668: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180668u;
    SET_GPR_U32(ctx, 31, 0x180670u);
    ctx->pc = 0x18066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180668u;
            // 0x18066c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180670u; }
        if (ctx->pc != 0x180670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180670u; }
        if (ctx->pc != 0x180670u) { return; }
    }
    ctx->pc = 0x180670u;
    // 0x180670: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180674: 0x3c024362  lui         $v0, 0x4362
    ctx->pc = 0x180674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17250 << 16));
    // 0x180678: 0xc4202b18  lwc1        $f0, 0x2B18($at)
    ctx->pc = 0x180678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18067c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18067cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180684: 0x24843d50  addiu       $a0, $a0, 0x3D50
    ctx->pc = 0x180684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15696));
    // 0x180688: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x18068c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18068cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180690: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180694: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180698: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18069c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x18069Cu;
    SET_GPR_U32(ctx, 31, 0x1806A4u);
    ctx->pc = 0x1806A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18069Cu;
            // 0x1806a0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806A4u; }
        if (ctx->pc != 0x1806A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806A4u; }
        if (ctx->pc != 0x1806A4u) { return; }
    }
    ctx->pc = 0x1806A4u;
    // 0x1806a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1806a8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1806ac: 0x90233c80  lbu         $v1, 0x3C80($at)
    ctx->pc = 0x1806acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x1806b0: 0x24423d00  addiu       $v0, $v0, 0x3D00
    ctx->pc = 0x1806b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15616));
    // 0x1806b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1806b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1806b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1806bc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1806bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1806c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1806c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1806c4: 0x2442a0c0  addiu       $v0, $v0, -0x5F40
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942912));
    // 0x1806c8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1806c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1806cc: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1806ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1806d0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1806d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1806d4: 0xa023a0cb  sb          $v1, -0x5F35($at)
    ctx->pc = 0x1806d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 3));
    // 0x1806d8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1806d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1806dc: 0xc05f818  jal         func_17E060
    ctx->pc = 0x1806DCu;
    SET_GPR_U32(ctx, 31, 0x1806E4u);
    ctx->pc = 0x1806E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806DCu;
            // 0x1806e0: 0xa023a0cf  sb          $v1, -0x5F31($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942927), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806E4u; }
        if (ctx->pc != 0x1806E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806E4u; }
        if (ctx->pc != 0x1806E4u) { return; }
    }
    ctx->pc = 0x1806E4u;
    // 0x1806e4: 0xc05f814  jal         func_17E050
    ctx->pc = 0x1806E4u;
    SET_GPR_U32(ctx, 31, 0x1806ECu);
    ctx->pc = 0x1806E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1806E4u;
            // 0x1806e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806ECu; }
        if (ctx->pc != 0x1806ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806ECu; }
        if (ctx->pc != 0x1806ECu) { return; }
    }
    ctx->pc = 0x1806ECu;
    // 0x1806ec: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x1806ECu;
    SET_GPR_U32(ctx, 31, 0x1806F4u);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806F4u; }
        if (ctx->pc != 0x1806F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1806F4u; }
        if (ctx->pc != 0x1806F4u) { return; }
    }
    ctx->pc = 0x1806F4u;
    // 0x1806f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1806f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1806f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1806F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1806FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1806F8u;
            // 0x1806fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180538u: goto label_180538;
            case 0x180548u: goto label_180548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180700u;
}
