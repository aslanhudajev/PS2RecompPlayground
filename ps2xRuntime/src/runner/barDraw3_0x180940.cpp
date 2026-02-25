#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: barDraw3
// Address: 0x180940 - 0x180b6c
void barDraw3_0x180940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("barDraw3_0x180940");
#endif

    ctx->pc = 0x180940u;

    // 0x180940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180944: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18094c: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x18094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180950: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180954: 0xc42227d8  lwc1        $f2, 0x27D8($at)
    ctx->pc = 0x180954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180958: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x180958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18095c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x18095Cu;
    {
        const bool branch_taken_0x18095c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18095Cu;
            // 0x180960: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18095c) {
            ctx->pc = 0x1809A8u;
            goto label_1809a8;
        }
    }
    ctx->pc = 0x180964u;
    // 0x180964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x180964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x180968: 0xc4212b20  lwc1        $f1, 0x2B20($at)
    ctx->pc = 0x180968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18096c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18096cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180970: 0x0  nop
    ctx->pc = 0x180970u;
    // NOP
    // 0x180974: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x180974u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x180978: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18097c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18097cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x180980: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x180980u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x180984: 0xe42227d8  swc1        $f2, 0x27D8($at)
    ctx->pc = 0x180984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x180988: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18098c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x18098cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180990: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x180990u;
    {
        const bool branch_taken_0x180990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180990u;
            // 0x180994: 0xe4212b20  swc1        $f1, 0x2B20($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x180990) {
            ctx->pc = 0x1809B8u;
            goto label_1809b8;
        }
    }
    ctx->pc = 0x180998u;
    // 0x180998: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18099c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18099Cu;
    {
        const bool branch_taken_0x18099c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18099Cu;
            // 0x1809a0: 0xe42c27d8  swc1        $f12, 0x27D8($at) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18099c) {
            ctx->pc = 0x1809B8u;
            goto label_1809b8;
        }
    }
    ctx->pc = 0x1809A4u;
    // 0x1809a4: 0x0  nop
    ctx->pc = 0x1809a4u;
    // NOP
label_1809a8:
    // 0x1809a8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1809a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1809ac: 0xe42c27d8  swc1        $f12, 0x27D8($at)
    ctx->pc = 0x1809acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 10200), bits); }
    // 0x1809b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1809b4: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x1809b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
label_1809b8:
    // 0x1809b8: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1809b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1809bc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1809bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1809c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1809c4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1809c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1809c8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1809c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1809cc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x1809ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x1809d0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1809d4: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x1809d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x1809d8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1809d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1809dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1809dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1809e0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1809e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1809e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1809e8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1809e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1809ec: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1809ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1809f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1809f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1809f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1809f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1809f8: 0x0  nop
    ctx->pc = 0x1809f8u;
    // NOP
    // 0x1809fc: 0xe4202b10  swc1        $f0, 0x2B10($at)
    ctx->pc = 0x1809fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 11024), bits); }
    // 0x180a00: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x180a00u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x180a04: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180a08: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180a08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180a0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180a10: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180A10u;
    SET_GPR_U32(ctx, 31, 0x180A18u);
    ctx->pc = 0x180A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A10u;
            // 0x180a14: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A18u; }
        if (ctx->pc != 0x180A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A18u; }
        if (ctx->pc != 0x180A18u) { return; }
    }
    ctx->pc = 0x180A18u;
    // 0x180a18: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180a1c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180a20: 0xc42c2b18  lwc1        $f12, 0x2B18($at)
    ctx->pc = 0x180a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180a24: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180a24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180a28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180a2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180a30: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180a34: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a38: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180A38u;
    SET_GPR_U32(ctx, 31, 0x180A40u);
    ctx->pc = 0x180A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A38u;
            // 0x180a3c: 0x24843d70  addiu       $a0, $a0, 0x3D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A40u; }
        if (ctx->pc != 0x180A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A40u; }
        if (ctx->pc != 0x180A40u) { return; }
    }
    ctx->pc = 0x180A40u;
    // 0x180a40: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180a44: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180a48: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a4c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180a50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a54: 0x24843d80  addiu       $a0, $a0, 0x3D80
    ctx->pc = 0x180a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15744));
    // 0x180a58: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180a5c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180a5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180a60: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180a64: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180a68: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180a6c: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180A6Cu;
    SET_GPR_U32(ctx, 31, 0x180A74u);
    ctx->pc = 0x180A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A6Cu;
            // 0x180a70: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A74u; }
        if (ctx->pc != 0x180A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A74u; }
        if (ctx->pc != 0x180A74u) { return; }
    }
    ctx->pc = 0x180A74u;
    // 0x180a74: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180a78: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180a7c: 0xc42c27d8  lwc1        $f12, 0x27D8($at)
    ctx->pc = 0x180a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 10200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x180a80: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180a80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180a84: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180a88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180a8c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180a90: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180a94: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180A94u;
    SET_GPR_U32(ctx, 31, 0x180A9Cu);
    ctx->pc = 0x180A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A94u;
            // 0x180a98: 0x24843d90  addiu       $a0, $a0, 0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A9Cu; }
        if (ctx->pc != 0x180A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A9Cu; }
        if (ctx->pc != 0x180A9Cu) { return; }
    }
    ctx->pc = 0x180A9Cu;
    // 0x180a9c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180aa0: 0x3c0243b2  lui         $v0, 0x43B2
    ctx->pc = 0x180aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17330 << 16));
    // 0x180aa4: 0xc4222b18  lwc1        $f2, 0x2B18($at)
    ctx->pc = 0x180aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180aa8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180aac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x180aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x180ab0: 0x24843da0  addiu       $a0, $a0, 0x3DA0
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15776));
    // 0x180ab4: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x180ab8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180abc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ac0: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180ac4: 0xc4202b10  lwc1        $f0, 0x2B10($at)
    ctx->pc = 0x180ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ac8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180ac8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180acc: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x180accu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x180ad0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180ad4: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180AD4u;
    SET_GPR_U32(ctx, 31, 0x180ADCu);
    ctx->pc = 0x180AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180AD4u;
            // 0x180ad8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180ADCu; }
        if (ctx->pc != 0x180ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180ADCu; }
        if (ctx->pc != 0x180ADCu) { return; }
    }
    ctx->pc = 0x180ADCu;
    // 0x180adc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180ae0: 0x3c0243b2  lui         $v0, 0x43B2
    ctx->pc = 0x180ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17330 << 16));
    // 0x180ae4: 0xc4202b18  lwc1        $f0, 0x2B18($at)
    ctx->pc = 0x180ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ae8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x180aec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x180aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180af0: 0x24843db0  addiu       $a0, $a0, 0x3DB0
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15792));
    // 0x180af4: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x180af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x180af8: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x180af8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x180afc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x180afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x180b00: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180b04: 0xc42d2b10  lwc1        $f13, 0x2B10($at)
    ctx->pc = 0x180b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 11024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180b08: 0xc05f830  jal         func_17E0C0
    ctx->pc = 0x180B08u;
    SET_GPR_U32(ctx, 31, 0x180B10u);
    ctx->pc = 0x180B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B08u;
            // 0x180b0c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0C0u;
    if (runtime->hasFunction(0x17E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B10u; }
        if (ctx->pc != 0x180B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x17e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B10u; }
        if (ctx->pc != 0x180B10u) { return; }
    }
    ctx->pc = 0x180B10u;
    // 0x180b10: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180b14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x180b18: 0x90233c78  lbu         $v1, 0x3C78($at)
    ctx->pc = 0x180b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15480)));
    // 0x180b1c: 0x24423d60  addiu       $v0, $v0, 0x3D60
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15712));
    // 0x180b20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x180b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x180b24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x180b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x180b28: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x180b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x180b2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x180b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180b30: 0x2442a0a0  addiu       $v0, $v0, -0x5F60
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x180b34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x180b38: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x180b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x180b3c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180b40: 0xa023a0ab  sb          $v1, -0x5F55($at)
    ctx->pc = 0x180b40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942891), (uint8_t)GPR_U32(ctx, 3));
    // 0x180b44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x180b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x180b48: 0xc05f818  jal         func_17E060
    ctx->pc = 0x180B48u;
    SET_GPR_U32(ctx, 31, 0x180B50u);
    ctx->pc = 0x180B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B48u;
            // 0x180b4c: 0xa023a0af  sb          $v1, -0x5F51($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294942895), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B50u; }
        if (ctx->pc != 0x180B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B50u; }
        if (ctx->pc != 0x180B50u) { return; }
    }
    ctx->pc = 0x180B50u;
    // 0x180b50: 0xc05f814  jal         func_17E050
    ctx->pc = 0x180B50u;
    SET_GPR_U32(ctx, 31, 0x180B58u);
    ctx->pc = 0x180B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180B50u;
            // 0x180b54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B58u; }
        if (ctx->pc != 0x180B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B58u; }
        if (ctx->pc != 0x180B58u) { return; }
    }
    ctx->pc = 0x180B58u;
    // 0x180b58: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x180B58u;
    SET_GPR_U32(ctx, 31, 0x180B60u);
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B60u; }
        if (ctx->pc != 0x180B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180B60u; }
        if (ctx->pc != 0x180B60u) { return; }
    }
    ctx->pc = 0x180B60u;
    // 0x180b60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180b64: 0x3e00008  jr          $ra
    ctx->pc = 0x180B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180B64u;
            // 0x180b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1809A8u: goto label_1809a8;
            case 0x1809B8u: goto label_1809b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180B6Cu;
}
