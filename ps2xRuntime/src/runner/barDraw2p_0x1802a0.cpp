#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: barDraw2p
// Address: 0x1802a0 - 0x1804d0
void barDraw2p_0x1802a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("barDraw2p_0x1802a0");
#endif

    ctx->pc = 0x1802a0u;

    // 0x1802a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1802a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1802a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1802a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1802a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1802ac: 0xc42c2b00  lwc1        $f12, 0x2B00($at)
    ctx->pc = 0x1802acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1802b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1802b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1802b4: 0xc42227e0  lwc1        $f2, 0x27E0($at)
    ctx->pc = 0x1802b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1802b8: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x1802b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1802bc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1802BCu;
    {
        const bool branch_taken_0x1802bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1802C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802BCu;
            // 0x1802c0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802bc) {
            ctx->pc = 0x180308u;
            goto label_180308;
        }
    }
    ctx->pc = 0x1802C4u;
    // 0x1802c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1802c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1802c8: 0xc4212b08  lwc1        $f1, 0x2B08($at)
    ctx->pc = 0x1802c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1802cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1802ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1802d0: 0x0  nop
    ctx->pc = 0x1802d0u;
    // NOP
    // 0x1802d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1802d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1802d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1802d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1802dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1802dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1802e0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x1802e0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x1802e4: 0xe42227e0  swc1        $f2, 0x27E0($at)
    ctx->pc = 0x1802e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10208), bits); }
    // 0x1802e8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1802e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1802ec: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1802ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1802f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1802F0u;
    {
        const bool branch_taken_0x1802f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1802F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802F0u;
            // 0x1802f4: 0xe4212b08  swc1        $f1, 0x2B08($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802f0) {
            ctx->pc = 0x180318u;
            goto label_180318;
        }
    }
    ctx->pc = 0x1802F8u;
    // 0x1802f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1802fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1802FCu;
    {
        const bool branch_taken_0x1802fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1802FCu;
            // 0x180300: 0xe42c27e0  swc1        $f12, 0x27E0($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802fc) {
            ctx->pc = 0x180318u;
            goto label_180318;
        }
    }
    ctx->pc = 0x180304u;
    // 0x180304: 0x0  nop
    ctx->pc = 0x180304u;
    // NOP
label_180308:
    // 0x180308: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18030c: 0xe42c27e0  swc1        $f12, 0x27E0($at)
    ctx->pc = 0x18030cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10208), bits); }
    // 0x180310: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180314: 0xac202b08  sw          $zero, 0x2B08($at)
    ctx->pc = 0x180314u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11016), GPR_U32(ctx, 0));
label_180318:
    // 0x180318: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x18031c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x18031cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180320: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180324: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x180324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180328: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x180328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18032c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18032cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180330: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x180330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x180334: 0x24843ca0  addiu       $a0, $a0, 0x3CA0
    ctx->pc = 0x180334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15520));
    // 0x180338: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x180338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x18033c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180340: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x180344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180348: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x180348u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x18034c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x18034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180350: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x180350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x180354: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x180354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x180358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18035c: 0x0  nop
    ctx->pc = 0x18035cu;
    // NOP
    // 0x180360: 0xe4202b10  swc1        $f0, 0x2B10($at)
    ctx->pc = 0x180360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11024), bits); }
    // 0x180364: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x180364u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x180368: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x18036c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18036cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180370: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180374: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180374u;
    SET_GPR_U32(ctx, 31, 0x18037Cu);
    ctx->pc = 0x180378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180374u;
            // 0x180378: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18037Cu; }
        if (ctx->pc != 0x18037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18037Cu; }
        if (ctx->pc != 0x18037Cu) { return; }
    }
    ctx->pc = 0x18037Cu;
    // 0x18037c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x18037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180380: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180384: 0xc42c2b00  lwc1        $f12, 0x2B00($at)
    ctx->pc = 0x180384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180388: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180388u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x18038c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18038cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180390: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180394: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180398: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18039c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x18039Cu;
    SET_GPR_U32(ctx, 31, 0x1803A4u);
    ctx->pc = 0x1803A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18039Cu;
            // 0x1803a0: 0x24843cb0  addiu       $a0, $a0, 0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A4u; }
        if (ctx->pc != 0x1803A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803A4u; }
        if (ctx->pc != 0x1803A4u) { return; }
    }
    ctx->pc = 0x1803A4u;
    // 0x1803a4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1803a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1803a8: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1803a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1803ac: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x1803acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1803b0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1803b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1803b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1803b8: 0x24843cc0  addiu       $a0, $a0, 0x3CC0
    ctx->pc = 0x1803b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15552));
    // 0x1803bc: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1803bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1803c0: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1803c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1803c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1803c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1803c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1803c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1803cc: 0xc42c27e0  lwc1        $f12, 0x27E0($at)
    ctx->pc = 0x1803ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1803d0: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1803D0u;
    SET_GPR_U32(ctx, 31, 0x1803D8u);
    ctx->pc = 0x1803D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803D0u;
            // 0x1803d4: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803D8u; }
        if (ctx->pc != 0x1803D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1803D8u; }
        if (ctx->pc != 0x1803D8u) { return; }
    }
    ctx->pc = 0x1803D8u;
    // 0x1803d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1803d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1803dc: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1803e0: 0xc42c27e0  lwc1        $f12, 0x27E0($at)
    ctx->pc = 0x1803e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1803e4: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1803e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1803e8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1803e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1803ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1803ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1803f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1803f4: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x1803f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1803f8: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x1803F8u;
    SET_GPR_U32(ctx, 31, 0x180400u);
    ctx->pc = 0x1803FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1803F8u;
            // 0x1803fc: 0x24843cd0  addiu       $a0, $a0, 0x3CD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180400u; }
        if (ctx->pc != 0x180400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180400u; }
        if (ctx->pc != 0x180400u) { return; }
    }
    ctx->pc = 0x180400u;
    // 0x180400: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180404: 0x3c024362  lui         $v0, 0x4362
    ctx->pc = 0x180404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17250 << 16));
    // 0x180408: 0xc4222b00  lwc1        $f2, 0x2B00($at)
    ctx->pc = 0x180408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18040c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180410: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180414: 0x24843ce0  addiu       $a0, $a0, 0x3CE0
    ctx->pc = 0x180414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15584));
    // 0x180418: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x18041c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18041cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180420: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180424: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180428: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18042c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18042cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180430: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x180430u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180434: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180438: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180438u;
    SET_GPR_U32(ctx, 31, 0x180440u);
    ctx->pc = 0x18043Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180438u;
            // 0x18043c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180440u; }
        if (ctx->pc != 0x180440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180440u; }
        if (ctx->pc != 0x180440u) { return; }
    }
    ctx->pc = 0x180440u;
    // 0x180440: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180444: 0x3c024362  lui         $v0, 0x4362
    ctx->pc = 0x180444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17250 << 16));
    // 0x180448: 0xc4202b00  lwc1        $f0, 0x2B00($at)
    ctx->pc = 0x180448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18044c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x18044cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180454: 0x24843cf0  addiu       $a0, $a0, 0x3CF0
    ctx->pc = 0x180454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15600));
    // 0x180458: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x18045c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18045cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180460: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180464: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180468: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18046c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x18046Cu;
    SET_GPR_U32(ctx, 31, 0x180474u);
    ctx->pc = 0x180470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18046Cu;
            // 0x180470: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180474u; }
        if (ctx->pc != 0x180474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180474u; }
        if (ctx->pc != 0x180474u) { return; }
    }
    ctx->pc = 0x180474u;
    // 0x180474: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180478: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x18047c: 0x90233c80  lbu         $v1, 0x3C80($at)
    ctx->pc = 0x18047cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x180480: 0x24423ca0  addiu       $v0, $v0, 0x3CA0
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15520));
    // 0x180484: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x180484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x180488: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18048c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x180490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180494: 0x2442a0e0  addiu       $v0, $v0, -0x5F20
    ctx->pc = 0x180494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x180498: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18049c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x18049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1804a0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1804a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1804a4: 0xa023a0eb  sb          $v1, -0x5F15($at)
    ctx->pc = 0x1804a4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942955), (uint8_t)GPR_U32(ctx, 3));
    // 0x1804a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1804a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1804ac: 0xc05f818  jal         func_17E060
    ctx->pc = 0x1804ACu;
    SET_GPR_U32(ctx, 31, 0x1804B4u);
    ctx->pc = 0x1804B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804ACu;
            // 0x1804b0: 0xa023a0ef  sb          $v1, -0x5F11($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942959), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804B4u; }
        if (ctx->pc != 0x1804B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804B4u; }
        if (ctx->pc != 0x1804B4u) { return; }
    }
    ctx->pc = 0x1804B4u;
    // 0x1804b4: 0xc05f814  jal         func_17E050
    ctx->pc = 0x1804B4u;
    SET_GPR_U32(ctx, 31, 0x1804BCu);
    ctx->pc = 0x1804B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1804B4u;
            // 0x1804b8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804BCu; }
        if (ctx->pc != 0x1804BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804BCu; }
        if (ctx->pc != 0x1804BCu) { return; }
    }
    ctx->pc = 0x1804BCu;
    // 0x1804bc: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x1804BCu;
    SET_GPR_U32(ctx, 31, 0x1804C4u);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804C4u; }
        if (ctx->pc != 0x1804C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1804C4u; }
        if (ctx->pc != 0x1804C4u) { return; }
    }
    ctx->pc = 0x1804C4u;
    // 0x1804c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1804c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1804c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1804C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1804CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1804C8u;
            // 0x1804cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180308u: goto label_180308;
            case 0x180318u: goto label_180318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1804D0u;
}
