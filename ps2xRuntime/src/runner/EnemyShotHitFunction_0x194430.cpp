#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotHitFunction
// Address: 0x194430 - 0x1944b8
void EnemyShotHitFunction_0x194430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotHitFunction_0x194430");
#endif

    ctx->pc = 0x194430u;

    // 0x194430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19443c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x19443cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x194440: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x194444: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x194444u;
    {
        const bool branch_taken_0x194444 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x194444) {
            ctx->pc = 0x1944A8u;
            goto label_1944a8;
        }
    }
    ctx->pc = 0x19444Cu;
    // 0x19444c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x19444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194450: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x194450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194454: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x194454u;
    {
        const bool branch_taken_0x194454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x194458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194454u;
            // 0x194458: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194454) {
            ctx->pc = 0x194470u;
            goto label_194470;
        }
    }
    ctx->pc = 0x19445Cu;
    // 0x19445c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19445Cu;
    {
        const bool branch_taken_0x19445c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19445c) {
            ctx->pc = 0x1944A8u;
            goto label_1944a8;
        }
    }
    ctx->pc = 0x194464u;
    // 0x194464: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x194464u;
    {
        const bool branch_taken_0x194464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194464) {
            ctx->pc = 0x194498u;
            goto label_194498;
        }
    }
    ctx->pc = 0x19446Cu;
    // 0x19446c: 0x0  nop
    ctx->pc = 0x19446cu;
    // NOP
label_194470:
    // 0x194470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x194470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194474: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x194474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194478: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x194478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19447c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19447cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x194480: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x194484: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x194488: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x194488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19448c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19448cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x194490: 0xc065944  jal         func_196510
    ctx->pc = 0x194490u;
    SET_GPR_U32(ctx, 31, 0x194498u);
    ctx->pc = 0x194494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194490u;
            // 0x194494: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194498u; }
        if (ctx->pc != 0x194498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194498u; }
        if (ctx->pc != 0x194498u) { return; }
    }
    ctx->pc = 0x194498u;
label_194498:
    // 0x194498: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x194498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19449c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1944a0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1944a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1944a4: 0x0  nop
    ctx->pc = 0x1944a4u;
    // NOP
label_1944a8:
    // 0x1944a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1944a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1944ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1944acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1944b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1944B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1944B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1944B0u;
            // 0x1944b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194470u: goto label_194470;
            case 0x194498u: goto label_194498;
            case 0x1944A8u: goto label_1944a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1944B8u;
}
