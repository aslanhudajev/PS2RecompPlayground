#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: barDraw
// Address: 0x180da0 - 0x180fc8
void barDraw_0x180da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("barDraw_0x180da0");
#endif

    ctx->pc = 0x180da0u;

    // 0x180da0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180da4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180da8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180dac: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x180dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180db0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180db4: 0xc42227d8  lwc1        $f2, 0x27D8($at)
    ctx->pc = 0x180db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180db8: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x180db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180dbc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x180DBCu;
    {
        const bool branch_taken_0x180dbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DBCu;
            // 0x180dc0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180dbc) {
            ctx->pc = 0x180E08u;
            goto label_180e08;
        }
    }
    ctx->pc = 0x180DC4u;
    // 0x180dc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180dc8: 0xc4212b20  lwc1        $f1, 0x2B20($at)
    ctx->pc = 0x180dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180dd0: 0x0  nop
    ctx->pc = 0x180dd0u;
    // NOP
    // 0x180dd4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x180dd4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x180dd8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ddc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x180ddcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180de0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x180de0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x180de4: 0xe42227d8  swc1        $f2, 0x27D8($at)
    ctx->pc = 0x180de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180de8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180dec: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x180decu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180df0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x180DF0u;
    {
        const bool branch_taken_0x180df0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DF0u;
            // 0x180df4: 0xe4212b20  swc1        $f1, 0x2B20($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180df0) {
            ctx->pc = 0x180E18u;
            goto label_180e18;
        }
    }
    ctx->pc = 0x180DF8u;
    // 0x180df8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180dfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x180DFCu;
    {
        const bool branch_taken_0x180dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180DFCu;
            // 0x180e00: 0xe42c27d8  swc1        $f12, 0x27D8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180dfc) {
            ctx->pc = 0x180E18u;
            goto label_180e18;
        }
    }
    ctx->pc = 0x180E04u;
    // 0x180e04: 0x0  nop
    ctx->pc = 0x180e04u;
    // NOP
label_180e08:
    // 0x180e08: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180e0c: 0xe42c27d8  swc1        $f12, 0x27D8($at)
    ctx->pc = 0x180e0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180e10: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180e14: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x180e14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
label_180e18:
    // 0x180e18: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x180e1c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x180e1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180e20: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180e24: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180e28: 0x0  nop
    ctx->pc = 0x180e28u;
    // NOP
    // 0x180e2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x180e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x180e30: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180e34: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x180e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x180e38: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x180e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x180e3c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x180e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x180e40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180e44: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x180e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180e4c: 0x0  nop
    ctx->pc = 0x180e4cu;
    // NOP
    // 0x180e50: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x180e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x180e54: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180e58: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180e58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180e5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x180e5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180e60: 0xe4202b10  swc1        $f0, 0x2B10($at)
    ctx->pc = 0x180e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11024), bits); }
    // 0x180e64: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x180e64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x180e68: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180e6c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180E6Cu;
    SET_GPR_U32(ctx, 31, 0x180E74u);
    ctx->pc = 0x180E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E6Cu;
            // 0x180e70: 0x46001b40  add.s       $f13, $f3, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E74u; }
        if (ctx->pc != 0x180E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E74u; }
        if (ctx->pc != 0x180E74u) { return; }
    }
    ctx->pc = 0x180E74u;
    // 0x180e74: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180e78: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180e7c: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x180e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180e80: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180e80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180e84: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180e88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180e8c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180e90: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180e94: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180E94u;
    SET_GPR_U32(ctx, 31, 0x180E9Cu);
    ctx->pc = 0x180E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E94u;
            // 0x180e98: 0x24843d70  addiu       $a0, $a0, 0x3D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E9Cu; }
        if (ctx->pc != 0x180E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E9Cu; }
        if (ctx->pc != 0x180E9Cu) { return; }
    }
    ctx->pc = 0x180E9Cu;
    // 0x180e9c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ea0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x180ea4: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ea8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180eb0: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x180eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x180eb4: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180eb8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180eb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180ebc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180ec0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ec4: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180ec8: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180EC8u;
    SET_GPR_U32(ctx, 31, 0x180ED0u);
    ctx->pc = 0x180ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EC8u;
            // 0x180ecc: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180ED0u; }
        if (ctx->pc != 0x180ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180ED0u; }
        if (ctx->pc != 0x180ED0u) { return; }
    }
    ctx->pc = 0x180ED0u;
    // 0x180ed0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ed4: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180ed8: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180edc: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180edcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180ee0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180ee4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180ee8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180eec: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180ef0: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180EF0u;
    SET_GPR_U32(ctx, 31, 0x180EF8u);
    ctx->pc = 0x180EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180EF0u;
            // 0x180ef4: 0x24843d90  addiu       $a0, $a0, 0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EF8u; }
        if (ctx->pc != 0x180EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180EF8u; }
        if (ctx->pc != 0x180EF8u) { return; }
    }
    ctx->pc = 0x180EF8u;
    // 0x180ef8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180efc: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x180efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x180f00: 0xc4222b18  lwc1        $f2, 0x2B18($at)
    ctx->pc = 0x180f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180f04: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180f08: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180f0c: 0x24843da0  addiu       $a0, $a0, 0x3DA0
    ctx->pc = 0x180f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15776));
    // 0x180f10: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x180f14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180f18: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180f1c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180f20: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180f24: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180f24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180f28: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x180f28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180f2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180f30: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180F30u;
    SET_GPR_U32(ctx, 31, 0x180F38u);
    ctx->pc = 0x180F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F30u;
            // 0x180f34: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F38u; }
        if (ctx->pc != 0x180F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F38u; }
        if (ctx->pc != 0x180F38u) { return; }
    }
    ctx->pc = 0x180F38u;
    // 0x180f38: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180f3c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x180f40: 0xc4202b18  lwc1        $f0, 0x2B18($at)
    ctx->pc = 0x180f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180f44: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180f4c: 0x24843db0  addiu       $a0, $a0, 0x3DB0
    ctx->pc = 0x180f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15792));
    // 0x180f50: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180f54: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180f54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180f58: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180f5c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180f60: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180f64: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180F64u;
    SET_GPR_U32(ctx, 31, 0x180F6Cu);
    ctx->pc = 0x180F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180F64u;
            // 0x180f68: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F6Cu; }
        if (ctx->pc != 0x180F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180F6Cu; }
        if (ctx->pc != 0x180F6Cu) { return; }
    }
    ctx->pc = 0x180F6Cu;
    // 0x180f6c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180f70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x180f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x180f74: 0x90233c90  lbu         $v1, 0x3C90($at)
    ctx->pc = 0x180f74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x180f78: 0x24423d60  addiu       $v0, $v0, 0x3D60
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15712));
    // 0x180f7c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x180f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x180f80: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x180f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180f84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x180f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x180f88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180f8c: 0x2442a0a0  addiu       $v0, $v0, -0x5F60
    ctx->pc = 0x180f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x180f90: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x180f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x180f94: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x180f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x180f98: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180f9c: 0xa023a0ab  sb          $v1, -0x5F55($at)
    ctx->pc = 0x180f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942891), (uint8_t)GPR_U32(ctx, 3));
    // 0x180fa0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180fa4: 0xc05f818  jal         func_17E060
    ctx->pc = 0x180FA4u;
    SET_GPR_U32(ctx, 31, 0x180FACu);
    ctx->pc = 0x180FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FA4u;
            // 0x180fa8: 0xa023a0af  sb          $v1, -0x5F51($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942895), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FACu; }
        if (ctx->pc != 0x180FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FACu; }
        if (ctx->pc != 0x180FACu) { return; }
    }
    ctx->pc = 0x180FACu;
    // 0x180fac: 0xc05f814  jal         func_17E050
    ctx->pc = 0x180FACu;
    SET_GPR_U32(ctx, 31, 0x180FB4u);
    ctx->pc = 0x180FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FACu;
            // 0x180fb0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FB4u; }
        if (ctx->pc != 0x180FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FB4u; }
        if (ctx->pc != 0x180FB4u) { return; }
    }
    ctx->pc = 0x180FB4u;
    // 0x180fb4: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x180FB4u;
    SET_GPR_U32(ctx, 31, 0x180FBCu);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FBCu; }
        if (ctx->pc != 0x180FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180FBCu; }
        if (ctx->pc != 0x180FBCu) { return; }
    }
    ctx->pc = 0x180FBCu;
    // 0x180fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x180FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180FC0u;
            // 0x180fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180E08u: goto label_180e08;
            case 0x180E18u: goto label_180e18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180FC8u;
}
