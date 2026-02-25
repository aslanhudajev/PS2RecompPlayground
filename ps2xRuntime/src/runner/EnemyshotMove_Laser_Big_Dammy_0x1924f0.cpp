#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Laser_Big_Dammy
// Address: 0x1924f0 - 0x1925e4
void EnemyshotMove_Laser_Big_Dammy_0x1924f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Laser_Big_Dammy_0x1924f0");
#endif

    ctx->pc = 0x1924f0u;

    // 0x1924f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1924f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1924f4: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x1924f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x1924f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1924f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1924fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1924fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192500: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192504: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x192508: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x192508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x19250c: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x19250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x192510: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x192510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192514: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x192514u;
    {
        const bool branch_taken_0x192514 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192514) {
            ctx->pc = 0x192550u;
            goto label_192550;
        }
    }
    ctx->pc = 0x19251Cu;
    // 0x19251c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x19251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192520: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x192524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192528: 0x0  nop
    ctx->pc = 0x192528u;
    // NOP
    // 0x19252c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19252cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192530: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x192530u;
    {
        const bool branch_taken_0x192530 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192530u;
            // 0x192534: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192530) {
            ctx->pc = 0x192550u;
            goto label_192550;
        }
    }
    ctx->pc = 0x192538u;
    // 0x192538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19253c: 0x0  nop
    ctx->pc = 0x19253cu;
    // NOP
    // 0x192540: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192544: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x192544u;
    {
        const bool branch_taken_0x192544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192544) {
            ctx->pc = 0x192560u;
            goto label_192560;
        }
    }
    ctx->pc = 0x19254Cu;
    // 0x19254c: 0x0  nop
    ctx->pc = 0x19254cu;
    // NOP
label_192550:
    // 0x192550: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192550u;
    SET_GPR_U32(ctx, 31, 0x192558u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192558u; }
        if (ctx->pc != 0x192558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192558u; }
        if (ctx->pc != 0x192558u) { return; }
    }
    ctx->pc = 0x192558u;
    // 0x192558: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x192558u;
    {
        const bool branch_taken_0x192558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192558) {
            ctx->pc = 0x1925D8u;
            goto label_1925d8;
        }
    }
    ctx->pc = 0x192560u;
label_192560:
    // 0x192560: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x192560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x192564: 0x1ca00006  bgtz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192564u;
    {
        const bool branch_taken_0x192564 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x192564) {
            ctx->pc = 0x192580u;
            goto label_192580;
        }
    }
    ctx->pc = 0x19256Cu;
    // 0x19256c: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x19256Cu;
    SET_GPR_U32(ctx, 31, 0x192574u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192574u; }
        if (ctx->pc != 0x192574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192574u; }
        if (ctx->pc != 0x192574u) { return; }
    }
    ctx->pc = 0x192574u;
    // 0x192574: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x192574u;
    {
        const bool branch_taken_0x192574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192574) {
            ctx->pc = 0x1925D8u;
            goto label_1925d8;
        }
    }
    ctx->pc = 0x19257Cu;
    // 0x19257c: 0x0  nop
    ctx->pc = 0x19257cu;
    // NOP
label_192580:
    // 0x192580: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x192580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x192584: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x192584u;
    {
        const bool branch_taken_0x192584 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x192584) {
            ctx->pc = 0x1925D8u;
            goto label_1925d8;
        }
    }
    ctx->pc = 0x19258Cu;
    // 0x19258c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19258cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192590: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x192590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x192594: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x192594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x192598: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x192598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x19259c: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19259cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1925a0: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1925a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1925a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1925a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1925a8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1925a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1925ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1925acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1925b0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1925b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1925b4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1925b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1925b8: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x1925b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1925bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1925bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1925c0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1925c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1925c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1925c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1925c8: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x1925c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1925cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1925ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1925d0: 0xc065198  jal         func_194660
    ctx->pc = 0x1925D0u;
    SET_GPR_U32(ctx, 31, 0x1925D8u);
    ctx->pc = 0x194660u;
    if (runtime->hasFunction(0x194660u)) {
        auto targetFn = runtime->lookupFunction(0x194660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925D8u; }
        if (ctx->pc != 0x1925D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Laser_Big_Dammy_0x194660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925D8u; }
        if (ctx->pc != 0x1925D8u) { return; }
    }
    ctx->pc = 0x1925D8u;
label_1925d8:
    // 0x1925d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1925d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1925dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1925DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1925DCu;
            // 0x1925e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192550u: goto label_192550;
            case 0x192560u: goto label_192560;
            case 0x192580u: goto label_192580;
            case 0x1925D8u: goto label_1925d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1925E4u;
}
