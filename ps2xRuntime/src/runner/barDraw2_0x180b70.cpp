#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: barDraw2
// Address: 0x180b70 - 0x180d9c
void barDraw2_0x180b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("barDraw2_0x180b70");
#endif

    ctx->pc = 0x180b70u;

    // 0x180b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180b74: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180b7c: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x180b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180b80: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180b84: 0xc42227d8  lwc1        $f2, 0x27D8($at)
    ctx->pc = 0x180b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180b88: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x180b88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180b8c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x180B8Cu;
    {
        const bool branch_taken_0x180b8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B8Cu;
            // 0x180b90: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b8c) {
            ctx->pc = 0x180BD8u;
            goto label_180bd8;
        }
    }
    ctx->pc = 0x180B94u;
    // 0x180b94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180b98: 0xc4212b20  lwc1        $f1, 0x2B20($at)
    ctx->pc = 0x180b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180ba0: 0x0  nop
    ctx->pc = 0x180ba0u;
    // NOP
    // 0x180ba4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x180ba4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x180ba8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180bac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x180bacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180bb0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x180bb0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x180bb4: 0xe42227d8  swc1        $f2, 0x27D8($at)
    ctx->pc = 0x180bb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180bb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180bbc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x180bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180bc0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x180BC0u;
    {
        const bool branch_taken_0x180bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180BC0u;
            // 0x180bc4: 0xe4212b20  swc1        $f1, 0x2B20($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bc0) {
            ctx->pc = 0x180BE8u;
            goto label_180be8;
        }
    }
    ctx->pc = 0x180BC8u;
    // 0x180bc8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180bcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x180BCCu;
    {
        const bool branch_taken_0x180bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180BCCu;
            // 0x180bd0: 0xe42c27d8  swc1        $f12, 0x27D8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bcc) {
            ctx->pc = 0x180BE8u;
            goto label_180be8;
        }
    }
    ctx->pc = 0x180BD4u;
    // 0x180bd4: 0x0  nop
    ctx->pc = 0x180bd4u;
    // NOP
label_180bd8:
    // 0x180bd8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180bdc: 0xe42c27d8  swc1        $f12, 0x27D8($at)
    ctx->pc = 0x180bdcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180be0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180be4: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x180be4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
label_180be8:
    // 0x180be8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x180be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x180bec: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x180becu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180bf0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180bf4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x180bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x180bf8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x180bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x180bfc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180c00: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x180c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x180c04: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x180c08: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x180c08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x180c0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x180c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x180c10: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x180c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x180c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180c18: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x180c18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x180c1c: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180c20: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x180c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x180c24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180c28: 0x0  nop
    ctx->pc = 0x180c28u;
    // NOP
    // 0x180c2c: 0xe4202b10  swc1        $f0, 0x2B10($at)
    ctx->pc = 0x180c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11024), bits); }
    // 0x180c30: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x180c30u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x180c34: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180c38: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180c38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180c3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180c40: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180C40u;
    SET_GPR_U32(ctx, 31, 0x180C48u);
    ctx->pc = 0x180C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C40u;
            // 0x180c44: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C48u; }
        if (ctx->pc != 0x180C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C48u; }
        if (ctx->pc != 0x180C48u) { return; }
    }
    ctx->pc = 0x180C48u;
    // 0x180c48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180c4c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180c50: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x180c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180c54: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180c54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180c58: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180c5c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180c60: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180c64: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180c68: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180C68u;
    SET_GPR_U32(ctx, 31, 0x180C70u);
    ctx->pc = 0x180C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C68u;
            // 0x180c6c: 0x24843d70  addiu       $a0, $a0, 0x3D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C70u; }
        if (ctx->pc != 0x180C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180C70u; }
        if (ctx->pc != 0x180C70u) { return; }
    }
    ctx->pc = 0x180C70u;
    // 0x180c70: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180c74: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180c78: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180c7c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180c80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180c84: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x180c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x180c88: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180c8c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180c8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180c90: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180c94: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180c98: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180c9c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180C9Cu;
    SET_GPR_U32(ctx, 31, 0x180CA4u);
    ctx->pc = 0x180CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180C9Cu;
            // 0x180ca0: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CA4u; }
        if (ctx->pc != 0x180CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CA4u; }
        if (ctx->pc != 0x180CA4u) { return; }
    }
    ctx->pc = 0x180CA4u;
    // 0x180ca4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ca8: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180cac: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180cb0: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180cb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180cb4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180cb8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180cbc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180cc0: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180cc4: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180CC4u;
    SET_GPR_U32(ctx, 31, 0x180CCCu);
    ctx->pc = 0x180CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180CC4u;
            // 0x180cc8: 0x24843d90  addiu       $a0, $a0, 0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CCCu; }
        if (ctx->pc != 0x180CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CCCu; }
        if (ctx->pc != 0x180CCCu) { return; }
    }
    ctx->pc = 0x180CCCu;
    // 0x180ccc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180cd0: 0x3c0243b2  lui         $v0, 0x43B2
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17330 << 16));
    // 0x180cd4: 0xc4222b18  lwc1        $f2, 0x2B18($at)
    ctx->pc = 0x180cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180cd8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180cdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180ce0: 0x24843da0  addiu       $a0, $a0, 0x3DA0
    ctx->pc = 0x180ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15776));
    // 0x180ce4: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180ce8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180cec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180cf0: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180cf4: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180cf8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180cf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180cfc: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x180cfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180d00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180d04: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180D04u;
    SET_GPR_U32(ctx, 31, 0x180D0Cu);
    ctx->pc = 0x180D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180D04u;
            // 0x180d08: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D0Cu; }
        if (ctx->pc != 0x180D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D0Cu; }
        if (ctx->pc != 0x180D0Cu) { return; }
    }
    ctx->pc = 0x180D0Cu;
    // 0x180d0c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180d10: 0x3c0243b2  lui         $v0, 0x43B2
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17330 << 16));
    // 0x180d14: 0xc4202b18  lwc1        $f0, 0x2B18($at)
    ctx->pc = 0x180d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180d18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180d20: 0x24843db0  addiu       $a0, $a0, 0x3DB0
    ctx->pc = 0x180d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15792));
    // 0x180d24: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180d28: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180d28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180d2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180d30: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180d34: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180d38: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180D38u;
    SET_GPR_U32(ctx, 31, 0x180D40u);
    ctx->pc = 0x180D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180D38u;
            // 0x180d3c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D40u; }
        if (ctx->pc != 0x180D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D40u; }
        if (ctx->pc != 0x180D40u) { return; }
    }
    ctx->pc = 0x180D40u;
    // 0x180d40: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180d44: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x180d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x180d48: 0x90233c88  lbu         $v1, 0x3C88($at)
    ctx->pc = 0x180d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x180d4c: 0x24423d60  addiu       $v0, $v0, 0x3D60
    ctx->pc = 0x180d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15712));
    // 0x180d50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x180d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x180d54: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x180d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180d58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x180d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180d60: 0x2442a0a0  addiu       $v0, $v0, -0x5F60
    ctx->pc = 0x180d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x180d64: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x180d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x180d68: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x180d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x180d6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180d70: 0xa023a0ab  sb          $v1, -0x5F55($at)
    ctx->pc = 0x180d70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942891), (uint8_t)GPR_U32(ctx, 3));
    // 0x180d74: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180d78: 0xc05f818  jal         func_17E060
    ctx->pc = 0x180D78u;
    SET_GPR_U32(ctx, 31, 0x180D80u);
    ctx->pc = 0x180D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180D78u;
            // 0x180d7c: 0xa023a0af  sb          $v1, -0x5F51($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942895), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D80u; }
        if (ctx->pc != 0x180D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D80u; }
        if (ctx->pc != 0x180D80u) { return; }
    }
    ctx->pc = 0x180D80u;
    // 0x180d80: 0xc05f814  jal         func_17E050
    ctx->pc = 0x180D80u;
    SET_GPR_U32(ctx, 31, 0x180D88u);
    ctx->pc = 0x180D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180D80u;
            // 0x180d84: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D88u; }
        if (ctx->pc != 0x180D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D88u; }
        if (ctx->pc != 0x180D88u) { return; }
    }
    ctx->pc = 0x180D88u;
    // 0x180d88: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x180D88u;
    SET_GPR_U32(ctx, 31, 0x180D90u);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D90u; }
        if (ctx->pc != 0x180D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180D90u; }
        if (ctx->pc != 0x180D90u) { return; }
    }
    ctx->pc = 0x180D90u;
    // 0x180d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180d94: 0x3e00008  jr          $ra
    ctx->pc = 0x180D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180D94u;
            // 0x180d98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180BD8u: goto label_180bd8;
            case 0x180BE8u: goto label_180be8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180D9Cu;
}
