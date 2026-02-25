#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsAllocGsMemAll
// Address: 0x141090 - 0x141234
void wrsAllocGsMemAll_0x141090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsAllocGsMemAll_0x141090");
#endif

    ctx->pc = 0x141090u;

    // 0x141090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x141098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14109c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1410a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1410a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410a4: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1410a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x1410a8: 0x261077b0  addiu       $s0, $s0, 0x77B0
    ctx->pc = 0x1410a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30640));
    // 0x1410ac: 0x0  nop
    ctx->pc = 0x1410acu;
    // NOP
label_1410b0:
    // 0x1410b0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1410b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1410b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1410b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410b8: 0xc0444d4  jal         func_111350
    ctx->pc = 0x1410B8u;
    SET_GPR_U32(ctx, 31, 0x1410C0u);
    ctx->pc = 0x1410BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1410B8u;
            // 0x1410bc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111350u;
    if (runtime->hasFunction(0x111350u)) {
        auto targetFn = runtime->lookupFunction(0x111350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410C0u; }
        if (ctx->pc != 0x1410C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsBlockSize_0x111350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410C0u; }
        if (ctx->pc != 0x1410C0u) { return; }
    }
    ctx->pc = 0x1410C0u;
    // 0x1410c0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1410c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1410c4: 0xc044128  jal         func_1104A0
    ctx->pc = 0x1410C4u;
    SET_GPR_U32(ctx, 31, 0x1410CCu);
    ctx->pc = 0x1410C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1410C4u;
            // 0x1410c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1104A0u;
    if (runtime->hasFunction(0x1104A0u)) {
        auto targetFn = runtime->lookupFunction(0x1104A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410CCu; }
        if (ctx->pc != 0x1410CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsMemAlloc_0x1104a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1410CCu; }
        if (ctx->pc != 0x1410CCu) { return; }
    }
    ctx->pc = 0x1410CCu;
    // 0x1410cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1410ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1410d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1410d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1410d4: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1410d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1410d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1410D8u;
    {
        const bool branch_taken_0x1410d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1410DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1410D8u;
            // 0x1410dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1410d8) {
            ctx->pc = 0x1410B0u;
            goto label_1410b0;
        }
    }
    ctx->pc = 0x1410E0u;
    // 0x1410e0: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x1410e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x1410e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1410e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1410e8: 0x26317710  addiu       $s1, $s1, 0x7710
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30480));
    // 0x1410ec: 0x0  nop
    ctx->pc = 0x1410ecu;
    // NOP
label_1410f0:
    // 0x1410f0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1410f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1410f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1410f8: 0xc0444d4  jal         func_111350
    ctx->pc = 0x1410F8u;
    SET_GPR_U32(ctx, 31, 0x141100u);
    ctx->pc = 0x1410FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1410F8u;
            // 0x1410fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111350u;
    if (runtime->hasFunction(0x111350u)) {
        auto targetFn = runtime->lookupFunction(0x111350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141100u; }
        if (ctx->pc != 0x141100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsBlockSize_0x111350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141100u; }
        if (ctx->pc != 0x141100u) { return; }
    }
    ctx->pc = 0x141100u;
    // 0x141100: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x141100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x141104: 0xc044128  jal         func_1104A0
    ctx->pc = 0x141104u;
    SET_GPR_U32(ctx, 31, 0x14110Cu);
    ctx->pc = 0x141108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141104u;
            // 0x141108: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1104A0u;
    if (runtime->hasFunction(0x1104A0u)) {
        auto targetFn = runtime->lookupFunction(0x1104A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14110Cu; }
        if (ctx->pc != 0x14110Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsMemAlloc_0x1104a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14110Cu; }
        if (ctx->pc != 0x14110Cu) { return; }
    }
    ctx->pc = 0x14110Cu;
    // 0x14110c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14110cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x141110: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x141110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x141114: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x141114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x141118: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x141118u;
    {
        const bool branch_taken_0x141118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141118u;
            // 0x14111c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141118) {
            ctx->pc = 0x1410F0u;
            goto label_1410f0;
        }
    }
    ctx->pc = 0x141120u;
    // 0x141120: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141124: 0x8c2877b0  lw          $t0, 0x77B0($at)
    ctx->pc = 0x141124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30640)));
    // 0x141128: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14112c: 0x8c2777c0  lw          $a3, 0x77C0($at)
    ctx->pc = 0x14112cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30656)));
    // 0x141130: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141134: 0x8c2677d0  lw          $a2, 0x77D0($at)
    ctx->pc = 0x141134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30672)));
    // 0x141138: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14113c: 0x8c2577e0  lw          $a1, 0x77E0($at)
    ctx->pc = 0x14113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30688)));
    // 0x141140: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141144: 0x8c2477f0  lw          $a0, 0x77F0($at)
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30704)));
    // 0x141148: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14114c: 0x8c237800  lw          $v1, 0x7800($at)
    ctx->pc = 0x14114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30720)));
    // 0x141150: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141154: 0xac287830  sw          $t0, 0x7830($at)
    ctx->pc = 0x141154u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30768), GPR_U32(ctx, 8));
    // 0x141158: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14115c: 0xac277834  sw          $a3, 0x7834($at)
    ctx->pc = 0x14115cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30772), GPR_U32(ctx, 7));
    // 0x141160: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141164: 0xac267838  sw          $a2, 0x7838($at)
    ctx->pc = 0x141164u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30776), GPR_U32(ctx, 6));
    // 0x141168: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14116c: 0xac25783c  sw          $a1, 0x783C($at)
    ctx->pc = 0x14116cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30780), GPR_U32(ctx, 5));
    // 0x141170: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141174: 0xac247840  sw          $a0, 0x7840($at)
    ctx->pc = 0x141174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30784), GPR_U32(ctx, 4));
    // 0x141178: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14117c: 0xac237844  sw          $v1, 0x7844($at)
    ctx->pc = 0x14117cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30788), GPR_U32(ctx, 3));
    // 0x141180: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141184: 0x8c287810  lw          $t0, 0x7810($at)
    ctx->pc = 0x141184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30736)));
    // 0x141188: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14118c: 0x8c277820  lw          $a3, 0x7820($at)
    ctx->pc = 0x14118cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30752)));
    // 0x141190: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141194: 0x8c267710  lw          $a2, 0x7710($at)
    ctx->pc = 0x141194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30480)));
    // 0x141198: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14119c: 0x8c257720  lw          $a1, 0x7720($at)
    ctx->pc = 0x14119cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30496)));
    // 0x1411a0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411a4: 0x8c247730  lw          $a0, 0x7730($at)
    ctx->pc = 0x1411a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30512)));
    // 0x1411a8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411ac: 0x8c237740  lw          $v1, 0x7740($at)
    ctx->pc = 0x1411acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30528)));
    // 0x1411b0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411b4: 0xac287848  sw          $t0, 0x7848($at)
    ctx->pc = 0x1411b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30792), GPR_U32(ctx, 8));
    // 0x1411b8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411bc: 0xac27784c  sw          $a3, 0x784C($at)
    ctx->pc = 0x1411bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30796), GPR_U32(ctx, 7));
    // 0x1411c0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411c4: 0xac267790  sw          $a2, 0x7790($at)
    ctx->pc = 0x1411c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30608), GPR_U32(ctx, 6));
    // 0x1411c8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411cc: 0xac257794  sw          $a1, 0x7794($at)
    ctx->pc = 0x1411ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30612), GPR_U32(ctx, 5));
    // 0x1411d0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411d4: 0xac247798  sw          $a0, 0x7798($at)
    ctx->pc = 0x1411d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30616), GPR_U32(ctx, 4));
    // 0x1411d8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411dc: 0xac23779c  sw          $v1, 0x779C($at)
    ctx->pc = 0x1411dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30620), GPR_U32(ctx, 3));
    // 0x1411e0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411e4: 0x8c267750  lw          $a2, 0x7750($at)
    ctx->pc = 0x1411e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30544)));
    // 0x1411e8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411ec: 0x8c257760  lw          $a1, 0x7760($at)
    ctx->pc = 0x1411ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30560)));
    // 0x1411f0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411f4: 0x8c247770  lw          $a0, 0x7770($at)
    ctx->pc = 0x1411f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30576)));
    // 0x1411f8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1411f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1411fc: 0x8c237780  lw          $v1, 0x7780($at)
    ctx->pc = 0x1411fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30592)));
    // 0x141200: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141204: 0xac2677a0  sw          $a2, 0x77A0($at)
    ctx->pc = 0x141204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30624), GPR_U32(ctx, 6));
    // 0x141208: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14120c: 0xac2577a4  sw          $a1, 0x77A4($at)
    ctx->pc = 0x14120cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30628), GPR_U32(ctx, 5));
    // 0x141210: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x141214: 0xac2477a8  sw          $a0, 0x77A8($at)
    ctx->pc = 0x141214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30632), GPR_U32(ctx, 4));
    // 0x141218: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x141218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14121c: 0xac2377ac  sw          $v1, 0x77AC($at)
    ctx->pc = 0x14121cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30636), GPR_U32(ctx, 3));
    // 0x141220: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x141220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14122c: 0x3e00008  jr          $ra
    ctx->pc = 0x14122Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14122Cu;
            // 0x141230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1410B0u: goto label_1410b0;
            case 0x1410F0u: goto label_1410f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141234u;
}
