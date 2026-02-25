#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: StaffRollMove
// Address: 0x19aeb0 - 0x19b03c
void StaffRollMove_0x19aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("StaffRollMove_0x19aeb0");
#endif

    ctx->pc = 0x19aeb0u;

    // 0x19aeb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19aeb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19aeb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19aeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19aebc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19aec0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19aec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19aec8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19aec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19aed0: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x19aed0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x19aed4: 0x26311a00  addiu       $s1, $s1, 0x1A00
    ctx->pc = 0x19aed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6656));
    // 0x19aed8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19aed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aedc: 0x0  nop
    ctx->pc = 0x19aedcu;
    // NOP
label_19aee0:
    // 0x19aee0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19aee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19aee4: 0xc421a8f0  lwc1        $f1, -0x5710($at)
    ctx->pc = 0x19aee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aee8: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x19aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x19aeec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19aeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19aef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aef4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x19aef4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aef8: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x19aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x19aefc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19aefcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19af00: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x19af00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x19af04: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19af08: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x19af08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19af0c: 0xc42ca8e8  lwc1        $f12, -0x5718($at)
    ctx->pc = 0x19af0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19af10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19af10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19af14: 0xc066c10  jal         func_19B040
    ctx->pc = 0x19AF14u;
    SET_GPR_U32(ctx, 31, 0x19AF1Cu);
    ctx->pc = 0x19AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF14u;
            // 0x19af18: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B040u;
    if (runtime->hasFunction(0x19B040u)) {
        auto targetFn = runtime->lookupFunction(0x19B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF1Cu; }
        if (ctx->pc != 0x19AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x19b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF1Cu; }
        if (ctx->pc != 0x19AF1Cu) { return; }
    }
    ctx->pc = 0x19AF1Cu;
    // 0x19af1c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19af1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19af20: 0x3c024460  lui         $v0, 0x4460
    ctx->pc = 0x19af20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17504 << 16));
    // 0x19af24: 0xc422a8f0  lwc1        $f2, -0x5710($at)
    ctx->pc = 0x19af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19af28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19af2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x19af2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19af30: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x19af30u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19af34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19af34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x19af38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19af38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19af3c: 0x24421a00  addiu       $v0, $v0, 0x1A00
    ctx->pc = 0x19af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6656));
    // 0x19af40: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x19af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19af44: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19af48: 0x3c0248a7  lui         $v0, 0x48A7
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18599 << 16));
    // 0x19af4c: 0x3442c880  ori         $v0, $v0, 0xC880
    ctx->pc = 0x19af4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)51328u)));
    // 0x19af50: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x19af50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x19af54: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x19af54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x19af58: 0x46011340  add.s       $f13, $f2, $f1
    ctx->pc = 0x19af58u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x19af5c: 0xc420a8e8  lwc1        $f0, -0x5718($at)
    ctx->pc = 0x19af5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19af60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19af60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19af64: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19af64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19af68: 0xc066c10  jal         func_19B040
    ctx->pc = 0x19AF68u;
    SET_GPR_U32(ctx, 31, 0x19AF70u);
    ctx->pc = 0x19AF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF68u;
            // 0x19af6c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B040u;
    if (runtime->hasFunction(0x19B040u)) {
        auto targetFn = runtime->lookupFunction(0x19B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF70u; }
        if (ctx->pc != 0x19AF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x19b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AF70u; }
        if (ctx->pc != 0x19AF70u) { return; }
    }
    ctx->pc = 0x19AF70u;
    // 0x19af70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19af70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19af74: 0x265201c0  addiu       $s2, $s2, 0x1C0
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x19af78: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x19af78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19af7c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x19af7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x19af80: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x19AF80u;
    {
        const bool branch_taken_0x19af80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AF80u;
            // 0x19af84: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af80) {
            ctx->pc = 0x19AEE0u;
            goto label_19aee0;
        }
    }
    ctx->pc = 0x19AF88u;
    // 0x19af88: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19af8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x19af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19af90: 0xc421a8f0  lwc1        $f1, -0x5710($at)
    ctx->pc = 0x19af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19af94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19af94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19af98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19af9c: 0x8c223540  lw          $v0, 0x3540($at)
    ctx->pc = 0x19af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13632)));
    // 0x19afa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19afa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19afa4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19afa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19afa8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19AFA8u;
    {
        const bool branch_taken_0x19afa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFA8u;
            // 0x19afac: 0xe420a8f0  swc1        $f0, -0x5710($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294945008), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa8) {
            ctx->pc = 0x19AFF8u;
            goto label_19aff8;
        }
    }
    ctx->pc = 0x19AFB0u;
    // 0x19afb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19afb4: 0x8c223544  lw          $v0, 0x3544($at)
    ctx->pc = 0x19afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13636)));
    // 0x19afb8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19AFB8u;
    {
        const bool branch_taken_0x19afb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AFB8u;
            // 0x19afbc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afb8) {
            ctx->pc = 0x19AFF8u;
            goto label_19aff8;
        }
    }
    ctx->pc = 0x19AFC0u;
    // 0x19afc0: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x19afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x19afc4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x19afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x19afc8: 0x8c222560  lw          $v0, 0x2560($at)
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x19afcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19afccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x19afd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19AFD0u;
    {
        const bool branch_taken_0x19afd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19afd0) {
            ctx->pc = 0x19AFF8u;
            goto label_19aff8;
        }
    }
    ctx->pc = 0x19AFD8u;
    // 0x19afd8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19afd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19afdc: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x19afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x19afe0: 0xc421a8f0  lwc1        $f1, -0x5710($at)
    ctx->pc = 0x19afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19afe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19afe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19afe8: 0x0  nop
    ctx->pc = 0x19afe8u;
    // NOP
    // 0x19afec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19afecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19aff0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19aff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19aff4: 0xe420a8f0  swc1        $f0, -0x5710($at)
    ctx->pc = 0x19aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294945008), bits); }
label_19aff8:
    // 0x19aff8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x19aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x19affc: 0xc421a8f0  lwc1        $f1, -0x5710($at)
    ctx->pc = 0x19affcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294945008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19b000: 0x3c02c528  lui         $v0, 0xC528
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50472 << 16));
    // 0x19b004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b008: 0x0  nop
    ctx->pc = 0x19b008u;
    // NOP
    // 0x19b00c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b00cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b010: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19B010u;
    {
        const bool branch_taken_0x19b010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B010u;
            // 0x19b014: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b010) {
            ctx->pc = 0x19B01Cu;
            goto label_19b01c;
        }
    }
    ctx->pc = 0x19B018u;
    // 0x19b018: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19b018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b01c:
    // 0x19b01c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b020: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x19b020u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x19b024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19b024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19b028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19b02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b034: 0x3e00008  jr          $ra
    ctx->pc = 0x19B034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B034u;
            // 0x19b038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AEE0u: goto label_19aee0;
            case 0x19AFF8u: goto label_19aff8;
            case 0x19B01Cu: goto label_19b01c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B03Cu;
}
