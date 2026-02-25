#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: selectbarDraw
// Address: 0x1864c0 - 0x1866c8
void selectbarDraw_0x1864c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("selectbarDraw_0x1864c0");
#endif

    ctx->pc = 0x1864c0u;

    // 0x1864c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1864c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1864c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1864c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1864c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1864c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1864cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1864ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864d0: 0xc421b618  lwc1        $f1, -0x49E8($at)
    ctx->pc = 0x1864d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1864d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1864d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1864d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1864D8u;
    {
        const bool branch_taken_0x1864d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1864DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1864D8u;
            // 0x1864dc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864d8) {
            ctx->pc = 0x1864E8u;
            goto label_1864e8;
        }
    }
    ctx->pc = 0x1864E0u;
    // 0x1864e0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1864e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1864e4: 0xac22a488  sw          $v0, -0x5B78($at)
    ctx->pc = 0x1864e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943880), GPR_U32(ctx, 2));
label_1864e8:
    // 0x1864e8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1864e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1864ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864f0: 0x0  nop
    ctx->pc = 0x1864f0u;
    // NOP
    // 0x1864f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1864f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1864F8u;
    {
        const bool branch_taken_0x1864f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1864FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1864F8u;
            // 0x1864fc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864f8) {
            ctx->pc = 0x186508u;
            goto label_186508;
        }
    }
    ctx->pc = 0x186500u;
    // 0x186500: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x186500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x186504: 0xac22a488  sw          $v0, -0x5B78($at)
    ctx->pc = 0x186504u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943880), GPR_U32(ctx, 2));
label_186508:
    // 0x186508: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18650c: 0xc424b618  lwc1        $f4, -0x49E8($at)
    ctx->pc = 0x18650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x186510: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x186510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x186514: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x186514u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186518: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x186518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x18651c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18651cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186520: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x186524: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186528: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x186528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x18652c: 0x2484b6c0  addiu       $a0, $a0, -0x4940
    ctx->pc = 0x18652cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948544));
    // 0x186530: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x186530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x186534: 0xc423a488  lwc1        $f3, -0x5B78($at)
    ctx->pc = 0x186534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186538: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x186538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18653c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18653cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186540: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186544: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x186544u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x186548: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x186548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x18654c: 0xac22b720  sw          $v0, -0x48E0($at)
    ctx->pc = 0x18654cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948640), GPR_U32(ctx, 2));
    // 0x186550: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186554: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x186554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x186558: 0xe423b618  swc1        $f3, -0x49E8($at)
    ctx->pc = 0x186558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948376), bits); }
    // 0x18655c: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x18655cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x186560: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x186560u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x186564: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186568: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x186568u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x18656c: 0xe42cb728  swc1        $f12, -0x48D8($at)
    ctx->pc = 0x18656cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948648), bits); }
    // 0x186570: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x186570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x186574: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186578: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x186578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18657c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x186580: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x186580u;
    SET_GPR_U32(ctx, 31, 0x186588u);
    ctx->pc = 0x186584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186580u;
            // 0x186584: 0xe420b620  swc1        $f0, -0x49E0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186588u; }
        if (ctx->pc != 0x186588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186588u; }
        if (ctx->pc != 0x186588u) { return; }
    }
    ctx->pc = 0x186588u;
    // 0x186588: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18658c: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x18658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x186590: 0xc42cb728  lwc1        $f12, -0x48D8($at)
    ctx->pc = 0x186590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186594: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x186594u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x186598: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18659c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18659cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1865a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1865a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1865a4: 0xc42db720  lwc1        $f13, -0x48E0($at)
    ctx->pc = 0x1865a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1865a8: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x1865A8u;
    SET_GPR_U32(ctx, 31, 0x1865B0u);
    ctx->pc = 0x1865ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865A8u;
            // 0x1865ac: 0x2484b6d0  addiu       $a0, $a0, -0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865B0u; }
        if (ctx->pc != 0x1865B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865B0u; }
        if (ctx->pc != 0x1865B0u) { return; }
    }
    ctx->pc = 0x1865B0u;
    // 0x1865b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1865b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1865b4: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1865b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1865b8: 0xc420b720  lwc1        $f0, -0x48E0($at)
    ctx->pc = 0x1865b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1865bc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1865bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1865c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1865c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1865c4: 0x2484b6e0  addiu       $a0, $a0, -0x4920
    ctx->pc = 0x1865c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948576));
    // 0x1865c8: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1865c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1865cc: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1865ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1865d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1865d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1865d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1865d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1865d8: 0xc42cb620  lwc1        $f12, -0x49E0($at)
    ctx->pc = 0x1865d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1865dc: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x1865DCu;
    SET_GPR_U32(ctx, 31, 0x1865E4u);
    ctx->pc = 0x1865E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1865DCu;
            // 0x1865e0: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865E4u; }
        if (ctx->pc != 0x1865E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1865E4u; }
        if (ctx->pc != 0x1865E4u) { return; }
    }
    ctx->pc = 0x1865E4u;
    // 0x1865e4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1865e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1865e8: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x1865e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x1865ec: 0xc42cb620  lwc1        $f12, -0x49E0($at)
    ctx->pc = 0x1865ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1865f0: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x1865f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x1865f4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1865f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1865f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1865f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1865fc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1865fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186600: 0xc42db720  lwc1        $f13, -0x48E0($at)
    ctx->pc = 0x186600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186604: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x186604u;
    SET_GPR_U32(ctx, 31, 0x18660Cu);
    ctx->pc = 0x186608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186604u;
            // 0x186608: 0x2484b6f0  addiu       $a0, $a0, -0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18660Cu; }
        if (ctx->pc != 0x18660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18660Cu; }
        if (ctx->pc != 0x18660Cu) { return; }
    }
    ctx->pc = 0x18660Cu;
    // 0x18660c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186610: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x186614: 0xc422b728  lwc1        $f2, -0x48D8($at)
    ctx->pc = 0x186614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186618: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18661c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x18661cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186620: 0x2484b700  addiu       $a0, $a0, -0x4900
    ctx->pc = 0x186620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    // 0x186624: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x186624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x186628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18662c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18662cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186630: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x186630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x186634: 0xc420b720  lwc1        $f0, -0x48E0($at)
    ctx->pc = 0x186634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186638: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x186638u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x18663c: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x18663cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x186640: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x186640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x186644: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x186644u;
    SET_GPR_U32(ctx, 31, 0x18664Cu);
    ctx->pc = 0x186648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186644u;
            // 0x186648: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18664Cu; }
        if (ctx->pc != 0x18664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18664Cu; }
        if (ctx->pc != 0x18664Cu) { return; }
    }
    ctx->pc = 0x18664Cu;
    // 0x18664c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186650: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x186650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x186654: 0xc420b728  lwc1        $f0, -0x48D8($at)
    ctx->pc = 0x186654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186658: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18665c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186660: 0x2484b710  addiu       $a0, $a0, -0x48F0
    ctx->pc = 0x186660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    // 0x186664: 0x3c024821  lui         $v0, 0x4821
    ctx->pc = 0x186664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18465 << 16));
    // 0x186668: 0x3442a7c0  ori         $v0, $v0, 0xA7C0
    ctx->pc = 0x186668u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)42944u)));
    // 0x18666c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x18666cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x186670: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186674: 0xc42db720  lwc1        $f13, -0x48E0($at)
    ctx->pc = 0x186674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186678: 0xc0619bc  jal         func_1866F0
    ctx->pc = 0x186678u;
    SET_GPR_U32(ctx, 31, 0x186680u);
    ctx->pc = 0x18667Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186678u;
            // 0x18667c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866F0u;
    if (runtime->hasFunction(0x1866F0u)) {
        auto targetFn = runtime->lookupFunction(0x1866F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186680u; }
        if (ctx->pc != 0x186680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1866f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186680u; }
        if (ctx->pc != 0x186680u) { return; }
    }
    ctx->pc = 0x186680u;
    // 0x186680: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x186680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x186684: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x186688: 0x2463b6c0  addiu       $v1, $v1, -0x4940
    ctx->pc = 0x186688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948544));
    // 0x18668c: 0x2442a3f0  addiu       $v0, $v0, -0x5C10
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943728));
    // 0x186690: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x186690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x186694: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x186694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x186698: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x186698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x18669c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18669cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1866a0: 0xc0619b8  jal         func_1866E0
    ctx->pc = 0x1866A0u;
    SET_GPR_U32(ctx, 31, 0x1866A8u);
    ctx->pc = 0x1866A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866A0u;
            // 0x1866a4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866E0u;
    if (runtime->hasFunction(0x1866E0u)) {
        auto targetFn = runtime->lookupFunction(0x1866E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A8u; }
        if (ctx->pc != 0x1866A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1866e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866A8u; }
        if (ctx->pc != 0x1866A8u) { return; }
    }
    ctx->pc = 0x1866A8u;
    // 0x1866a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1866a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1866ac: 0xc0619b4  jal         func_1866D0
    ctx->pc = 0x1866ACu;
    SET_GPR_U32(ctx, 31, 0x1866B4u);
    ctx->pc = 0x1866B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866ACu;
            // 0x1866b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1866D0u;
    if (runtime->hasFunction(0x1866D0u)) {
        auto targetFn = runtime->lookupFunction(0x1866D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866B4u; }
        if (ctx->pc != 0x1866B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1866d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866B4u; }
        if (ctx->pc != 0x1866B4u) { return; }
    }
    ctx->pc = 0x1866B4u;
    // 0x1866b4: 0xc05c2ac  jal         func_170AB0
    ctx->pc = 0x1866B4u;
    SET_GPR_U32(ctx, 31, 0x1866BCu);
    ctx->pc = 0x1866B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1866B4u;
            // 0x1866b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AB0u;
    if (runtime->hasFunction(0x170AB0u)) {
        auto targetFn = runtime->lookupFunction(0x170AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866BCu; }
        if (ctx->pc != 0x1866BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimTriStripG_0x170ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866BCu; }
        if (ctx->pc != 0x1866BCu) { return; }
    }
    ctx->pc = 0x1866BCu;
    // 0x1866bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1866bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1866c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1866C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1866C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1866C0u;
            // 0x1866c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1864E8u: goto label_1864e8;
            case 0x186508u: goto label_186508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1866C8u;
}
