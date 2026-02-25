#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: barDraw4
// Address: 0x180700 - 0x180940
void barDraw4_0x180700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("barDraw4_0x180700");
#endif

    ctx->pc = 0x180700u;

    // 0x180700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180704: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18070c: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x18070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180710: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180714: 0xc42227d8  lwc1        $f2, 0x27D8($at)
    ctx->pc = 0x180714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180718: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x180718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18071c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x18071Cu;
    {
        const bool branch_taken_0x18071c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18071Cu;
            // 0x180720: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18071c) {
            ctx->pc = 0x180768u;
            goto label_180768;
        }
    }
    ctx->pc = 0x180724u;
    // 0x180724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180728: 0xc4212b20  lwc1        $f1, 0x2B20($at)
    ctx->pc = 0x180728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18072c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18072cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180730: 0x0  nop
    ctx->pc = 0x180730u;
    // NOP
    // 0x180734: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x180734u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x180738: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18073c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18073cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180740: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x180740u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x180744: 0xe42227d8  swc1        $f2, 0x27D8($at)
    ctx->pc = 0x180744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180748: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18074c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x18074cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180750: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x180750u;
    {
        const bool branch_taken_0x180750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180750u;
            // 0x180754: 0xe4212b20  swc1        $f1, 0x2B20($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180750) {
            ctx->pc = 0x180778u;
            goto label_180778;
        }
    }
    ctx->pc = 0x180758u;
    // 0x180758: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18075c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18075Cu;
    {
        const bool branch_taken_0x18075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18075Cu;
            // 0x180760: 0xe42c27d8  swc1        $f12, 0x27D8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18075c) {
            ctx->pc = 0x180778u;
            goto label_180778;
        }
    }
    ctx->pc = 0x180764u;
    // 0x180764: 0x0  nop
    ctx->pc = 0x180764u;
    // NOP
label_180768:
    // 0x180768: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18076c: 0xe42c27d8  swc1        $f12, 0x27D8($at)
    ctx->pc = 0x18076cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180770: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180774: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x180774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
label_180778:
    // 0x180778: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x18077c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x18077cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180780: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180784: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x180784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x180788: 0x0  nop
    ctx->pc = 0x180788u;
    // NOP
    // 0x18078c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x18078cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x180790: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180794: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x180798: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x18079c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x18079cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1807a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1807a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1807a4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1807a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1807a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1807a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1807ac: 0x0  nop
    ctx->pc = 0x1807acu;
    // NOP
    // 0x1807b0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1807b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1807b4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1807b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1807b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1807b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1807bc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1807bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1807c0: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1807c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1807c4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1807c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1807c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1807c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1807cc: 0x0  nop
    ctx->pc = 0x1807ccu;
    // NOP
    // 0x1807d0: 0xe4202b10  swc1        $f0, 0x2B10($at)
    ctx->pc = 0x1807d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11024), bits); }
    // 0x1807d4: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1807d4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1807d8: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1807dc: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1807dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1807e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1807e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1807e4: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1807E4u;
    SET_GPR_U32(ctx, 31, 0x1807ECu);
    ctx->pc = 0x1807E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1807E4u;
            // 0x1807e8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807ECu; }
        if (ctx->pc != 0x1807ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1807ECu; }
        if (ctx->pc != 0x1807ECu) { return; }
    }
    ctx->pc = 0x1807ECu;
    // 0x1807ec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1807f0: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1807f4: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x1807f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1807f8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1807f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1807fc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1807fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180800: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180804: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180808: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18080c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x18080Cu;
    SET_GPR_U32(ctx, 31, 0x180814u);
    ctx->pc = 0x180810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18080Cu;
            // 0x180810: 0x24843d70  addiu       $a0, $a0, 0x3D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180814u; }
        if (ctx->pc != 0x180814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180814u; }
        if (ctx->pc != 0x180814u) { return; }
    }
    ctx->pc = 0x180814u;
    // 0x180814: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180818: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x18081c: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x18081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180820: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180828: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x180828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x18082c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x18082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180830: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180830u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180834: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180838: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18083c: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x18083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180840: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180840u;
    SET_GPR_U32(ctx, 31, 0x180848u);
    ctx->pc = 0x180844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180840u;
            // 0x180844: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180848u; }
        if (ctx->pc != 0x180848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180848u; }
        if (ctx->pc != 0x180848u) { return; }
    }
    ctx->pc = 0x180848u;
    // 0x180848: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18084c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180850: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180854: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180854u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180858: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x18085c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18085cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180860: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180864: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180868: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180868u;
    SET_GPR_U32(ctx, 31, 0x180870u);
    ctx->pc = 0x18086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180868u;
            // 0x18086c: 0x24843d90  addiu       $a0, $a0, 0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180870u; }
        if (ctx->pc != 0x180870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180870u; }
        if (ctx->pc != 0x180870u) { return; }
    }
    ctx->pc = 0x180870u;
    // 0x180870: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180874: 0x3c024332  lui         $v0, 0x4332
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17202 << 16));
    // 0x180878: 0xc4222b18  lwc1        $f2, 0x2B18($at)
    ctx->pc = 0x180878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18087c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180880: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180884: 0x24843da0  addiu       $a0, $a0, 0x3DA0
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15776));
    // 0x180888: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x18088c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18088cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180890: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180894: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180898: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18089c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18089cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1808a0: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x1808a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1808a4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1808a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1808a8: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1808A8u;
    SET_GPR_U32(ctx, 31, 0x1808B0u);
    ctx->pc = 0x1808ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808A8u;
            // 0x1808ac: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808B0u; }
        if (ctx->pc != 0x1808B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808B0u; }
        if (ctx->pc != 0x1808B0u) { return; }
    }
    ctx->pc = 0x1808B0u;
    // 0x1808b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1808b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1808b4: 0x3c024332  lui         $v0, 0x4332
    ctx->pc = 0x1808b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17202 << 16));
    // 0x1808b8: 0xc4202b18  lwc1        $f0, 0x2B18($at)
    ctx->pc = 0x1808b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1808bc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1808bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1808c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1808c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1808c4: 0x24843db0  addiu       $a0, $a0, 0x3DB0
    ctx->pc = 0x1808c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15792));
    // 0x1808c8: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1808c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1808cc: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1808ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1808d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1808d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1808d4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1808d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1808d8: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x1808d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1808dc: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1808DCu;
    SET_GPR_U32(ctx, 31, 0x1808E4u);
    ctx->pc = 0x1808E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1808DCu;
            // 0x1808e0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808E4u; }
        if (ctx->pc != 0x1808E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1808E4u; }
        if (ctx->pc != 0x1808E4u) { return; }
    }
    ctx->pc = 0x1808E4u;
    // 0x1808e4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1808e8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x1808e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x1808ec: 0x90233c70  lbu         $v1, 0x3C70($at)
    ctx->pc = 0x1808ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15472)));
    // 0x1808f0: 0x24423d60  addiu       $v0, $v0, 0x3D60
    ctx->pc = 0x1808f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15712));
    // 0x1808f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1808f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1808f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1808fc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1808fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x180900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180904: 0x2442a100  addiu       $v0, $v0, -0x5F00
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942976));
    // 0x180908: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18090c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x18090cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x180910: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180914: 0xa023a0ab  sb          $v1, -0x5F55($at)
    ctx->pc = 0x180914u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942891), (uint8_t)GPR_U32(ctx, 3));
    // 0x180918: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x18091c: 0xc05f818  jal         func_17E060
    ctx->pc = 0x18091Cu;
    SET_GPR_U32(ctx, 31, 0x180924u);
    ctx->pc = 0x180920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18091Cu;
            // 0x180920: 0xa023a0af  sb          $v1, -0x5F51($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942895), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180924u; }
        if (ctx->pc != 0x180924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180924u; }
        if (ctx->pc != 0x180924u) { return; }
    }
    ctx->pc = 0x180924u;
    // 0x180924: 0xc05f814  jal         func_17E050
    ctx->pc = 0x180924u;
    SET_GPR_U32(ctx, 31, 0x18092Cu);
    ctx->pc = 0x180928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180924u;
            // 0x180928: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18092Cu; }
        if (ctx->pc != 0x18092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18092Cu; }
        if (ctx->pc != 0x18092Cu) { return; }
    }
    ctx->pc = 0x18092Cu;
    // 0x18092c: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x18092Cu;
    SET_GPR_U32(ctx, 31, 0x180934u);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180934u; }
        if (ctx->pc != 0x180934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180934u; }
        if (ctx->pc != 0x180934u) { return; }
    }
    ctx->pc = 0x180934u;
    // 0x180934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180938: 0x3e00008  jr          $ra
    ctx->pc = 0x180938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180938u;
            // 0x18093c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180768u: goto label_180768;
            case 0x180778u: goto label_180778;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180940u;
}
