#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GameInfomationDisp
// Address: 0x15ac50 - 0x15ba64
void GameInfomationDisp_0x15ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GameInfomationDisp_0x15ac50");
#endif

    ctx->pc = 0x15ac50u;

    // 0x15ac50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15ac54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15ac5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ac60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ac64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ac68: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x15AC68u;
    SET_GPR_U32(ctx, 31, 0x15AC70u);
    ctx->pc = 0x15AC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC68u;
            // 0x15ac6c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC70u; }
        if (ctx->pc != 0x15AC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC70u; }
        if (ctx->pc != 0x15AC70u) { return; }
    }
    ctx->pc = 0x15AC70u;
    // 0x15ac70: 0x104001b9  beqz        $v0, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x15AC70u;
    {
        const bool branch_taken_0x15ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC70u;
            // 0x15ac74: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac70) {
            ctx->pc = 0x15B358u;
            goto label_15b358;
        }
    }
    ctx->pc = 0x15AC78u;
    // 0x15ac78: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15ac7c: 0x8c233558  lw          $v1, 0x3558($at)
    ctx->pc = 0x15ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13656)));
    // 0x15ac80: 0x24429bd0  addiu       $v0, $v0, -0x6430
    ctx->pc = 0x15ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941648));
    // 0x15ac84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ac88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ac8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ac90: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15AC90u;
    SET_GPR_U32(ctx, 31, 0x15AC98u);
    ctx->pc = 0x15AC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC90u;
            // 0x15ac94: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC98u; }
        if (ctx->pc != 0x15AC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AC98u; }
        if (ctx->pc != 0x15AC98u) { return; }
    }
    ctx->pc = 0x15AC98u;
    // 0x15ac98: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15ac98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ac9c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15aca0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15aca0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15aca4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15aca8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15aca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15acac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15acacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15acb0: 0x248434c0  addiu       $a0, $a0, 0x34C0
    ctx->pc = 0x15acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    // 0x15acb4: 0x24c3ff22  addiu       $v1, $a2, -0xDE
    ctx->pc = 0x15acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967074));
    // 0x15acb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15acb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15acbc: 0x24a3ff78  addiu       $v1, $a1, -0x88
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
    // 0x15acc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15acc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15acc4: 0x0  nop
    ctx->pc = 0x15acc4u;
    // NOP
    // 0x15acc8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15acc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15accc: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15ACCCu;
    SET_GPR_U32(ctx, 31, 0x15ACD4u);
    ctx->pc = 0x15ACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACCCu;
            // 0x15acd0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACD4u; }
        if (ctx->pc != 0x15ACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ACD4u; }
        if (ctx->pc != 0x15ACD4u) { return; }
    }
    ctx->pc = 0x15ACD4u;
    // 0x15acd4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15acd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15acd8: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15acdc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15acdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15ace0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15ace0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15ace4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15ace4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ace8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15acec: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15acecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15acf0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15acf4: 0x248434d0  addiu       $a0, $a0, 0x34D0
    ctx->pc = 0x15acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13520));
    // 0x15acf8: 0x24e7ff22  addiu       $a3, $a3, -0xDE
    ctx->pc = 0x15acf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967074));
    // 0x15acfc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15ad00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15ad00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ad04: 0x24a5ff78  addiu       $a1, $a1, -0x88
    ctx->pc = 0x15ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
    // 0x15ad08: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ad08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ad0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15ad10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15ad10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ad14: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15AD14u;
    SET_GPR_U32(ctx, 31, 0x15AD1Cu);
    ctx->pc = 0x15AD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD14u;
            // 0x15ad18: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD1Cu; }
        if (ctx->pc != 0x15AD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD1Cu; }
        if (ctx->pc != 0x15AD1Cu) { return; }
    }
    ctx->pc = 0x15AD1Cu;
    // 0x15ad1c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15ad20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ad24: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ad28: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AD28u;
    SET_GPR_U32(ctx, 31, 0x15AD30u);
    ctx->pc = 0x15AD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD28u;
            // 0x15ad2c: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD30u; }
        if (ctx->pc != 0x15AD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD30u; }
        if (ctx->pc != 0x15AD30u) { return; }
    }
    ctx->pc = 0x15AD30u;
    // 0x15ad30: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15ad30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15ad34: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ad38: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15ad3c: 0x24843490  addiu       $a0, $a0, 0x3490
    ctx->pc = 0x15ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13456));
    // 0x15ad40: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ad44: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ad48: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15ad4c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AD4Cu;
    SET_GPR_U32(ctx, 31, 0x15AD54u);
    ctx->pc = 0x15AD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD4Cu;
            // 0x15ad50: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD54u; }
        if (ctx->pc != 0x15AD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD54u; }
        if (ctx->pc != 0x15AD54u) { return; }
    }
    ctx->pc = 0x15AD54u;
    // 0x15ad54: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15ad58: 0x27b30054  addiu       $s3, $sp, 0x54
    ctx->pc = 0x15ad58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x15ad5c: 0x244234c0  addiu       $v0, $v0, 0x34C0
    ctx->pc = 0x15ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x15ad60: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x15ad60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x15ad64: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15ad68: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x15ad6c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15ad70: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15ad74: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x15ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x15ad78: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x15ad78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ad7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x15ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x15ad80: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15ad84: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x15ad88: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15AD88u;
    SET_GPR_U32(ctx, 31, 0x15AD90u);
    ctx->pc = 0x15AD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD88u;
            // 0x15ad8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD90u; }
        if (ctx->pc != 0x15AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AD90u; }
        if (ctx->pc != 0x15AD90u) { return; }
    }
    ctx->pc = 0x15AD90u;
    // 0x15ad90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ad94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ad98: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15ad98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15ad9c: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15AD9Cu;
    SET_GPR_U32(ctx, 31, 0x15ADA4u);
    ctx->pc = 0x15ADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AD9Cu;
            // 0x15ada0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADA4u; }
        if (ctx->pc != 0x15ADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADA4u; }
        if (ctx->pc != 0x15ADA4u) { return; }
    }
    ctx->pc = 0x15ADA4u;
    // 0x15ada4: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15ADA4u;
    SET_GPR_U32(ctx, 31, 0x15ADACu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADACu; }
        if (ctx->pc != 0x15ADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADACu; }
        if (ctx->pc != 0x15ADACu) { return; }
    }
    ctx->pc = 0x15ADACu;
    // 0x15adac: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15ADACu;
    SET_GPR_U32(ctx, 31, 0x15ADB4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADB4u; }
        if (ctx->pc != 0x15ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADB4u; }
        if (ctx->pc != 0x15ADB4u) { return; }
    }
    ctx->pc = 0x15ADB4u;
    // 0x15adb4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15adb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15adb8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15adbc: 0x8c233548  lw          $v1, 0x3548($at)
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13640)));
    // 0x15adc0: 0x24429bf0  addiu       $v0, $v0, -0x6410
    ctx->pc = 0x15adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
    // 0x15adc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15adc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15adcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15adccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15add0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15ADD0u;
    SET_GPR_U32(ctx, 31, 0x15ADD8u);
    ctx->pc = 0x15ADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ADD0u;
            // 0x15add4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADD8u; }
        if (ctx->pc != 0x15ADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15ADD8u; }
        if (ctx->pc != 0x15ADD8u) { return; }
    }
    ctx->pc = 0x15ADD8u;
    // 0x15add8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15add8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15addc: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15ade0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15ade0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15ade4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ade8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15ade8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15adec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15adecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15adf0: 0x24843440  addiu       $a0, $a0, 0x3440
    ctx->pc = 0x15adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13376));
    // 0x15adf4: 0x24c3ff42  addiu       $v1, $a2, -0xBE
    ctx->pc = 0x15adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967106));
    // 0x15adf8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15adf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15adfc: 0x24a3ff72  addiu       $v1, $a1, -0x8E
    ctx->pc = 0x15adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15ae00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15ae00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ae04: 0x0  nop
    ctx->pc = 0x15ae04u;
    // NOP
    // 0x15ae08: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15ae08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ae0c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15AE0Cu;
    SET_GPR_U32(ctx, 31, 0x15AE14u);
    ctx->pc = 0x15AE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE0Cu;
            // 0x15ae10: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE14u; }
        if (ctx->pc != 0x15AE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE14u; }
        if (ctx->pc != 0x15AE14u) { return; }
    }
    ctx->pc = 0x15AE14u;
    // 0x15ae14: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15ae14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ae18: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15ae1c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15ae20: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15ae20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15ae24: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15ae24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15ae28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15ae28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ae2c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ae30: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15ae34: 0x24843450  addiu       $a0, $a0, 0x3450
    ctx->pc = 0x15ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13392));
    // 0x15ae38: 0x24e7ff42  addiu       $a3, $a3, -0xBE
    ctx->pc = 0x15ae38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967106));
    // 0x15ae3c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15ae3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15ae40: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15ae40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ae44: 0x24a5ff72  addiu       $a1, $a1, -0x8E
    ctx->pc = 0x15ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15ae48: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15ae48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15ae4c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15ae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15ae50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15ae50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ae54: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15AE54u;
    SET_GPR_U32(ctx, 31, 0x15AE5Cu);
    ctx->pc = 0x15AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE54u;
            // 0x15ae58: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE5Cu; }
        if (ctx->pc != 0x15AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE5Cu; }
        if (ctx->pc != 0x15AE5Cu) { return; }
    }
    ctx->pc = 0x15AE5Cu;
    // 0x15ae5c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15ae60: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ae64: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ae68: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AE68u;
    SET_GPR_U32(ctx, 31, 0x15AE70u);
    ctx->pc = 0x15AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE68u;
            // 0x15ae6c: 0x24843400  addiu       $a0, $a0, 0x3400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE70u; }
        if (ctx->pc != 0x15AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE70u; }
        if (ctx->pc != 0x15AE70u) { return; }
    }
    ctx->pc = 0x15AE70u;
    // 0x15ae70: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15ae70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15ae74: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15ae78: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15ae7c: 0x24843410  addiu       $a0, $a0, 0x3410
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13328));
    // 0x15ae80: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15ae84: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15ae88: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15ae8c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AE8Cu;
    SET_GPR_U32(ctx, 31, 0x15AE94u);
    ctx->pc = 0x15AE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AE8Cu;
            // 0x15ae90: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE94u; }
        if (ctx->pc != 0x15AE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AE94u; }
        if (ctx->pc != 0x15AE94u) { return; }
    }
    ctx->pc = 0x15AE94u;
    // 0x15ae94: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15ae98: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15ae9c: 0x24423440  addiu       $v0, $v0, 0x3440
    ctx->pc = 0x15ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13376));
    // 0x15aea0: 0x24639be8  addiu       $v1, $v1, -0x6418
    ctx->pc = 0x15aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941672));
    // 0x15aea4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15aea8: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15aeac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15aeb0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15aeb4: 0x24423400  addiu       $v0, $v0, 0x3400
    ctx->pc = 0x15aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x15aeb8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15AEB8u;
    SET_GPR_U32(ctx, 31, 0x15AEC0u);
    ctx->pc = 0x15AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEB8u;
            // 0x15aebc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEC0u; }
        if (ctx->pc != 0x15AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEC0u; }
        if (ctx->pc != 0x15AEC0u) { return; }
    }
    ctx->pc = 0x15AEC0u;
    // 0x15aec0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15aec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aec8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15aecc: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15AECCu;
    SET_GPR_U32(ctx, 31, 0x15AED4u);
    ctx->pc = 0x15AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AECCu;
            // 0x15aed0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AED4u; }
        if (ctx->pc != 0x15AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AED4u; }
        if (ctx->pc != 0x15AED4u) { return; }
    }
    ctx->pc = 0x15AED4u;
    // 0x15aed4: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15AED4u;
    SET_GPR_U32(ctx, 31, 0x15AEDCu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEDCu; }
        if (ctx->pc != 0x15AEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEDCu; }
        if (ctx->pc != 0x15AEDCu) { return; }
    }
    ctx->pc = 0x15AEDCu;
    // 0x15aedc: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15AEDCu;
    SET_GPR_U32(ctx, 31, 0x15AEE4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEE4u; }
        if (ctx->pc != 0x15AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEE4u; }
        if (ctx->pc != 0x15AEE4u) { return; }
    }
    ctx->pc = 0x15AEE4u;
    // 0x15aee4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x15aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x15aee8: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15AEE8u;
    SET_GPR_U32(ctx, 31, 0x15AEF0u);
    ctx->pc = 0x15AEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AEE8u;
            // 0x15aeec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEF0u; }
        if (ctx->pc != 0x15AEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AEF0u; }
        if (ctx->pc != 0x15AEF0u) { return; }
    }
    ctx->pc = 0x15AEF0u;
    // 0x15aef0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aef4: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15aef8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15aef8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15aefc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15af00: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15af00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15af04: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15af04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15af08: 0x248433c0  addiu       $a0, $a0, 0x33C0
    ctx->pc = 0x15af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13248));
    // 0x15af0c: 0x24c3ff80  addiu       $v1, $a2, -0x80
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x15af10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15af10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15af14: 0x24a3ff72  addiu       $v1, $a1, -0x8E
    ctx->pc = 0x15af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15af18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15af18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15af1c: 0x0  nop
    ctx->pc = 0x15af1cu;
    // NOP
    // 0x15af20: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15af20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15af24: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15AF24u;
    SET_GPR_U32(ctx, 31, 0x15AF2Cu);
    ctx->pc = 0x15AF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF24u;
            // 0x15af28: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF2Cu; }
        if (ctx->pc != 0x15AF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF2Cu; }
        if (ctx->pc != 0x15AF2Cu) { return; }
    }
    ctx->pc = 0x15AF2Cu;
    // 0x15af2c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15af2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15af30: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15af34: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15af34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15af38: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15af38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15af3c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15af3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15af40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15af44: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15af44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15af48: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15af4c: 0x248433d0  addiu       $a0, $a0, 0x33D0
    ctx->pc = 0x15af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13264));
    // 0x15af50: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x15af54: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15af58: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15af58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15af5c: 0x24a5ff72  addiu       $a1, $a1, -0x8E
    ctx->pc = 0x15af5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15af60: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15af60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15af64: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15af68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15af68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15af6c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15AF6Cu;
    SET_GPR_U32(ctx, 31, 0x15AF74u);
    ctx->pc = 0x15AF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF6Cu;
            // 0x15af70: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF74u; }
        if (ctx->pc != 0x15AF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF74u; }
        if (ctx->pc != 0x15AF74u) { return; }
    }
    ctx->pc = 0x15AF74u;
    // 0x15af74: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15af78: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15af78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15af7c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15af7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15af80: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AF80u;
    SET_GPR_U32(ctx, 31, 0x15AF88u);
    ctx->pc = 0x15AF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AF80u;
            // 0x15af84: 0x24843380  addiu       $a0, $a0, 0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF88u; }
        if (ctx->pc != 0x15AF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AF88u; }
        if (ctx->pc != 0x15AF88u) { return; }
    }
    ctx->pc = 0x15AF88u;
    // 0x15af88: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15af88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15af8c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15af90: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15af90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15af94: 0x24843390  addiu       $a0, $a0, 0x3390
    ctx->pc = 0x15af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13200));
    // 0x15af98: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15af9c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15afa0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15afa4: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15AFA4u;
    SET_GPR_U32(ctx, 31, 0x15AFACu);
    ctx->pc = 0x15AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFA4u;
            // 0x15afa8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFACu; }
        if (ctx->pc != 0x15AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFACu; }
        if (ctx->pc != 0x15AFACu) { return; }
    }
    ctx->pc = 0x15AFACu;
    // 0x15afac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15afb0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15afb4: 0x244233c0  addiu       $v0, $v0, 0x33C0
    ctx->pc = 0x15afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13248));
    // 0x15afb8: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x15afbc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15afc0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15afc4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15afc8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15afcc: 0x24423380  addiu       $v0, $v0, 0x3380
    ctx->pc = 0x15afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13184));
    // 0x15afd0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15AFD0u;
    SET_GPR_U32(ctx, 31, 0x15AFD8u);
    ctx->pc = 0x15AFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFD0u;
            // 0x15afd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFD8u; }
        if (ctx->pc != 0x15AFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFD8u; }
        if (ctx->pc != 0x15AFD8u) { return; }
    }
    ctx->pc = 0x15AFD8u;
    // 0x15afd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15afdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15afdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15afe0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15afe4: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15AFE4u;
    SET_GPR_U32(ctx, 31, 0x15AFECu);
    ctx->pc = 0x15AFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AFE4u;
            // 0x15afe8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFECu; }
        if (ctx->pc != 0x15AFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFECu; }
        if (ctx->pc != 0x15AFECu) { return; }
    }
    ctx->pc = 0x15AFECu;
    // 0x15afec: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15AFECu;
    SET_GPR_U32(ctx, 31, 0x15AFF4u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFF4u; }
        if (ctx->pc != 0x15AFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFF4u; }
        if (ctx->pc != 0x15AFF4u) { return; }
    }
    ctx->pc = 0x15AFF4u;
    // 0x15aff4: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15AFF4u;
    SET_GPR_U32(ctx, 31, 0x15AFFCu);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFFCu; }
        if (ctx->pc != 0x15AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15AFFCu; }
        if (ctx->pc != 0x15AFFCu) { return; }
    }
    ctx->pc = 0x15AFFCu;
    // 0x15affc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x15affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15b000: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B000u;
    SET_GPR_U32(ctx, 31, 0x15B008u);
    ctx->pc = 0x15B004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B000u;
            // 0x15b004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B008u; }
        if (ctx->pc != 0x15B008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B008u; }
        if (ctx->pc != 0x15B008u) { return; }
    }
    ctx->pc = 0x15B008u;
    // 0x15b008: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b00c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b010: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b010u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b014: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b018: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b01c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b020: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x15b024: 0x24c3ff28  addiu       $v1, $a2, -0xD8
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967080));
    // 0x15b028: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b02c: 0x24a3ff5a  addiu       $v1, $a1, -0xA6
    ctx->pc = 0x15b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967130));
    // 0x15b030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b034: 0x0  nop
    ctx->pc = 0x15b034u;
    // NOP
    // 0x15b038: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b03c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B03Cu;
    SET_GPR_U32(ctx, 31, 0x15B044u);
    ctx->pc = 0x15B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B03Cu;
            // 0x15b040: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B044u; }
        if (ctx->pc != 0x15B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B044u; }
        if (ctx->pc != 0x15B044u) { return; }
    }
    ctx->pc = 0x15B044u;
    // 0x15b044: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b044u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b048: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b04c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b050: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b050u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b054: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b058: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b05c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b060: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b064: 0x24843250  addiu       $a0, $a0, 0x3250
    ctx->pc = 0x15b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12880));
    // 0x15b068: 0x24e7ff28  addiu       $a3, $a3, -0xD8
    ctx->pc = 0x15b068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967080));
    // 0x15b06c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b070: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b070u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b074: 0x24a5ff5a  addiu       $a1, $a1, -0xA6
    ctx->pc = 0x15b074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967130));
    // 0x15b078: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b07c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b084: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B084u;
    SET_GPR_U32(ctx, 31, 0x15B08Cu);
    ctx->pc = 0x15B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B084u;
            // 0x15b088: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B08Cu; }
        if (ctx->pc != 0x15B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B08Cu; }
        if (ctx->pc != 0x15B08Cu) { return; }
    }
    ctx->pc = 0x15B08Cu;
    // 0x15b08c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b090: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b094: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b098: 0x24843200  addiu       $a0, $a0, 0x3200
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12800));
    // 0x15b09c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b0a0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B0A0u;
    SET_GPR_U32(ctx, 31, 0x15B0A8u);
    ctx->pc = 0x15B0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0A0u;
            // 0x15b0a4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0A8u; }
        if (ctx->pc != 0x15B0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0A8u; }
        if (ctx->pc != 0x15B0A8u) { return; }
    }
    ctx->pc = 0x15B0A8u;
    // 0x15b0a8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b0ac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b0b0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b0b4: 0x24843210  addiu       $a0, $a0, 0x3210
    ctx->pc = 0x15b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12816));
    // 0x15b0b8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b0bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15b0c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b0c4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b0c8: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B0C8u;
    SET_GPR_U32(ctx, 31, 0x15B0D0u);
    ctx->pc = 0x15B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0C8u;
            // 0x15b0cc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0D0u; }
        if (ctx->pc != 0x15B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0D0u; }
        if (ctx->pc != 0x15B0D0u) { return; }
    }
    ctx->pc = 0x15B0D0u;
    // 0x15b0d0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b0d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b0d8: 0x24423240  addiu       $v0, $v0, 0x3240
    ctx->pc = 0x15b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12864));
    // 0x15b0dc: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x15b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x15b0e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b0e4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15b0e8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b0ec: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b0f0: 0x24423200  addiu       $v0, $v0, 0x3200
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12800));
    // 0x15b0f4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B0F4u;
    SET_GPR_U32(ctx, 31, 0x15B0FCu);
    ctx->pc = 0x15B0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B0F4u;
            // 0x15b0f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0FCu; }
        if (ctx->pc != 0x15B0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B0FCu; }
        if (ctx->pc != 0x15B0FCu) { return; }
    }
    ctx->pc = 0x15B0FCu;
    // 0x15b0fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b104: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b108: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B108u;
    SET_GPR_U32(ctx, 31, 0x15B110u);
    ctx->pc = 0x15B10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B108u;
            // 0x15b10c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B110u; }
        if (ctx->pc != 0x15B110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B110u; }
        if (ctx->pc != 0x15B110u) { return; }
    }
    ctx->pc = 0x15B110u;
    // 0x15b110: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B110u;
    SET_GPR_U32(ctx, 31, 0x15B118u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B118u; }
        if (ctx->pc != 0x15B118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B118u; }
        if (ctx->pc != 0x15B118u) { return; }
    }
    ctx->pc = 0x15B118u;
    // 0x15b118: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B118u;
    SET_GPR_U32(ctx, 31, 0x15B120u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B120u; }
        if (ctx->pc != 0x15B120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B120u; }
        if (ctx->pc != 0x15B120u) { return; }
    }
    ctx->pc = 0x15B120u;
    // 0x15b120: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x15b120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b124: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B124u;
    SET_GPR_U32(ctx, 31, 0x15B12Cu);
    ctx->pc = 0x15B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B124u;
            // 0x15b128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B12Cu; }
        if (ctx->pc != 0x15B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B12Cu; }
        if (ctx->pc != 0x15B12Cu) { return; }
    }
    ctx->pc = 0x15B12Cu;
    // 0x15b12c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b130: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b134: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b134u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b138: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b13c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b140: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b144: 0x24843300  addiu       $a0, $a0, 0x3300
    ctx->pc = 0x15b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
    // 0x15b148: 0x24c3ff0e  addiu       $v1, $a2, -0xF2
    ctx->pc = 0x15b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967054));
    // 0x15b14c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b14cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b150: 0x24a3ff42  addiu       $v1, $a1, -0xBE
    ctx->pc = 0x15b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x15b154: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b158: 0x0  nop
    ctx->pc = 0x15b158u;
    // NOP
    // 0x15b15c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b160: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B160u;
    SET_GPR_U32(ctx, 31, 0x15B168u);
    ctx->pc = 0x15B164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B160u;
            // 0x15b164: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B168u; }
        if (ctx->pc != 0x15B168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B168u; }
        if (ctx->pc != 0x15B168u) { return; }
    }
    ctx->pc = 0x15B168u;
    // 0x15b168: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b16c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b170: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b174: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b174u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b178: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b17c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b180: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b184: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b188: 0x24843310  addiu       $a0, $a0, 0x3310
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    // 0x15b18c: 0x24e7ff0e  addiu       $a3, $a3, -0xF2
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967054));
    // 0x15b190: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b194: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b194u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b198: 0x24a5ff42  addiu       $a1, $a1, -0xBE
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x15b19c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b19cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b1a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b1a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b1a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b1a8: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B1A8u;
    SET_GPR_U32(ctx, 31, 0x15B1B0u);
    ctx->pc = 0x15B1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1A8u;
            // 0x15b1ac: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1B0u; }
        if (ctx->pc != 0x15B1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1B0u; }
        if (ctx->pc != 0x15B1B0u) { return; }
    }
    ctx->pc = 0x15B1B0u;
    // 0x15b1b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b1b4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b1b8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b1bc: 0x24843280  addiu       $a0, $a0, 0x3280
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
    // 0x15b1c0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B1C0u;
    SET_GPR_U32(ctx, 31, 0x15B1C8u);
    ctx->pc = 0x15B1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1C0u;
            // 0x15b1c4: 0x24650100  addiu       $a1, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1C8u; }
        if (ctx->pc != 0x15B1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1C8u; }
        if (ctx->pc != 0x15B1C8u) { return; }
    }
    ctx->pc = 0x15B1C8u;
    // 0x15b1c8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b1cc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b1d0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b1d4: 0x24843290  addiu       $a0, $a0, 0x3290
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12944));
    // 0x15b1d8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b1dc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b1e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b1e4: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x15b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x15b1e8: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B1E8u;
    SET_GPR_U32(ctx, 31, 0x15B1F0u);
    ctx->pc = 0x15B1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B1E8u;
            // 0x15b1ec: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1F0u; }
        if (ctx->pc != 0x15B1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B1F0u; }
        if (ctx->pc != 0x15B1F0u) { return; }
    }
    ctx->pc = 0x15B1F0u;
    // 0x15b1f0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b1f4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b1f8: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x15b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x15b1fc: 0x24639c10  addiu       $v1, $v1, -0x63F0
    ctx->pc = 0x15b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941712));
    // 0x15b200: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b204: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b208: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b20c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b210: 0x24423280  addiu       $v0, $v0, 0x3280
    ctx->pc = 0x15b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12928));
    // 0x15b214: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B214u;
    SET_GPR_U32(ctx, 31, 0x15B21Cu);
    ctx->pc = 0x15B218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B214u;
            // 0x15b218: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B21Cu; }
        if (ctx->pc != 0x15B21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B21Cu; }
        if (ctx->pc != 0x15B21Cu) { return; }
    }
    ctx->pc = 0x15B21Cu;
    // 0x15b21c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b224: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b228: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B228u;
    SET_GPR_U32(ctx, 31, 0x15B230u);
    ctx->pc = 0x15B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B228u;
            // 0x15b22c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B230u; }
        if (ctx->pc != 0x15B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B230u; }
        if (ctx->pc != 0x15B230u) { return; }
    }
    ctx->pc = 0x15B230u;
    // 0x15b230: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B230u;
    SET_GPR_U32(ctx, 31, 0x15B238u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B238u; }
        if (ctx->pc != 0x15B238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B238u; }
        if (ctx->pc != 0x15B238u) { return; }
    }
    ctx->pc = 0x15B238u;
    // 0x15b238: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B238u;
    SET_GPR_U32(ctx, 31, 0x15B240u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B240u; }
        if (ctx->pc != 0x15B240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B240u; }
        if (ctx->pc != 0x15B240u) { return; }
    }
    ctx->pc = 0x15B240u;
    // 0x15b240: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x15b240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b244: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B244u;
    SET_GPR_U32(ctx, 31, 0x15B24Cu);
    ctx->pc = 0x15B248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B244u;
            // 0x15b248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B24Cu; }
        if (ctx->pc != 0x15B24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B24Cu; }
        if (ctx->pc != 0x15B24Cu) { return; }
    }
    ctx->pc = 0x15B24Cu;
    // 0x15b24c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b250: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b254: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b254u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b258: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b25c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b25cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b260: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b264: 0x24843320  addiu       $a0, $a0, 0x3320
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    // 0x15b268: 0x24c3ff10  addiu       $v1, $a2, -0xF0
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967056));
    // 0x15b26c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b270: 0x24a3ff42  addiu       $v1, $a1, -0xBE
    ctx->pc = 0x15b270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x15b274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b278: 0x0  nop
    ctx->pc = 0x15b278u;
    // NOP
    // 0x15b27c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b27cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b280: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B280u;
    SET_GPR_U32(ctx, 31, 0x15B288u);
    ctx->pc = 0x15B284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B280u;
            // 0x15b284: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B288u; }
        if (ctx->pc != 0x15B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B288u; }
        if (ctx->pc != 0x15B288u) { return; }
    }
    ctx->pc = 0x15B288u;
    // 0x15b288: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b28c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b290: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b294: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b294u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b298: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b29c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b2a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b2a4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b2a8: 0x24843330  addiu       $a0, $a0, 0x3330
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
    // 0x15b2ac: 0x24e7ff10  addiu       $a3, $a3, -0xF0
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967056));
    // 0x15b2b0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b2b4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b2b4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b2b8: 0x24a5ff42  addiu       $a1, $a1, -0xBE
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x15b2bc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b2c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b2c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b2c8: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B2C8u;
    SET_GPR_U32(ctx, 31, 0x15B2D0u);
    ctx->pc = 0x15B2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2C8u;
            // 0x15b2cc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2D0u; }
        if (ctx->pc != 0x15B2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2D0u; }
        if (ctx->pc != 0x15B2D0u) { return; }
    }
    ctx->pc = 0x15B2D0u;
    // 0x15b2d0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b2d4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b2d8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b2dc: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B2DCu;
    SET_GPR_U32(ctx, 31, 0x15B2E4u);
    ctx->pc = 0x15B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B2DCu;
            // 0x15b2e0: 0x248432a0  addiu       $a0, $a0, 0x32A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2E4u; }
        if (ctx->pc != 0x15B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B2E4u; }
        if (ctx->pc != 0x15B2E4u) { return; }
    }
    ctx->pc = 0x15B2E4u;
    // 0x15b2e4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b2e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b2ec: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b2f0: 0x248432b0  addiu       $a0, $a0, 0x32B0
    ctx->pc = 0x15b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12976));
    // 0x15b2f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b2f8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b2fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b300: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B300u;
    SET_GPR_U32(ctx, 31, 0x15B308u);
    ctx->pc = 0x15B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B300u;
            // 0x15b304: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B308u; }
        if (ctx->pc != 0x15B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B308u; }
        if (ctx->pc != 0x15B308u) { return; }
    }
    ctx->pc = 0x15B308u;
    // 0x15b308: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b30c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b310: 0x24423320  addiu       $v0, $v0, 0x3320
    ctx->pc = 0x15b310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13088));
    // 0x15b314: 0x24639c14  addiu       $v1, $v1, -0x63EC
    ctx->pc = 0x15b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941716));
    // 0x15b318: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b31c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b320: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b324: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b328: 0x244232a0  addiu       $v0, $v0, 0x32A0
    ctx->pc = 0x15b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12960));
    // 0x15b32c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B32Cu;
    SET_GPR_U32(ctx, 31, 0x15B334u);
    ctx->pc = 0x15B330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B32Cu;
            // 0x15b330: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B334u; }
        if (ctx->pc != 0x15B334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B334u; }
        if (ctx->pc != 0x15B334u) { return; }
    }
    ctx->pc = 0x15B334u;
    // 0x15b334: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b338: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15b338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15b33c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b340: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B340u;
    SET_GPR_U32(ctx, 31, 0x15B348u);
    ctx->pc = 0x15B344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B340u;
            // 0x15b344: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B348u; }
        if (ctx->pc != 0x15B348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B348u; }
        if (ctx->pc != 0x15B348u) { return; }
    }
    ctx->pc = 0x15B348u;
    // 0x15b348: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B348u;
    SET_GPR_U32(ctx, 31, 0x15B350u);
    ctx->pc = 0x15B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B348u;
            // 0x15b34c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B350u; }
        if (ctx->pc != 0x15B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B350u; }
        if (ctx->pc != 0x15B350u) { return; }
    }
    ctx->pc = 0x15B350u;
    // 0x15b350: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B350u;
    SET_GPR_U32(ctx, 31, 0x15B358u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B358u; }
        if (ctx->pc != 0x15B358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B358u; }
        if (ctx->pc != 0x15B358u) { return; }
    }
    ctx->pc = 0x15B358u;
label_15b358:
    // 0x15b358: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x15B358u;
    SET_GPR_U32(ctx, 31, 0x15B360u);
    ctx->pc = 0x15B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B358u;
            // 0x15b35c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B360u; }
        if (ctx->pc != 0x15B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B360u; }
        if (ctx->pc != 0x15B360u) { return; }
    }
    ctx->pc = 0x15B360u;
    // 0x15b360: 0x104001b9  beqz        $v0, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x15B360u;
    {
        const bool branch_taken_0x15b360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B360u;
            // 0x15b364: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b360) {
            ctx->pc = 0x15BA48u;
            goto label_15ba48;
        }
    }
    ctx->pc = 0x15B368u;
    // 0x15b368: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15b36c: 0x8c23355c  lw          $v1, 0x355C($at)
    ctx->pc = 0x15b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13660)));
    // 0x15b370: 0x24429bd0  addiu       $v0, $v0, -0x6430
    ctx->pc = 0x15b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941648));
    // 0x15b374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15b378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b37c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b380: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B380u;
    SET_GPR_U32(ctx, 31, 0x15B388u);
    ctx->pc = 0x15B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B380u;
            // 0x15b384: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B388u; }
        if (ctx->pc != 0x15B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B388u; }
        if (ctx->pc != 0x15B388u) { return; }
    }
    ctx->pc = 0x15B388u;
    // 0x15b388: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b38c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b390: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b390u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b394: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b398: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b39c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b3a0: 0x248434e0  addiu       $a0, $a0, 0x34E0
    ctx->pc = 0x15b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13536));
    // 0x15b3a4: 0x24c300df  addiu       $v1, $a2, 0xDF
    ctx->pc = 0x15b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 223));
    // 0x15b3a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b3a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b3ac: 0x24a3ff78  addiu       $v1, $a1, -0x88
    ctx->pc = 0x15b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
    // 0x15b3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b3b4: 0x0  nop
    ctx->pc = 0x15b3b4u;
    // NOP
    // 0x15b3b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b3bc: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B3BCu;
    SET_GPR_U32(ctx, 31, 0x15B3C4u);
    ctx->pc = 0x15B3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B3BCu;
            // 0x15b3c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3C4u; }
        if (ctx->pc != 0x15B3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B3C4u; }
        if (ctx->pc != 0x15B3C4u) { return; }
    }
    ctx->pc = 0x15B3C4u;
    // 0x15b3c4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b3c8: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b3cc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b3d0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b3d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b3d4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b3d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b3dc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b3e0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b3e4: 0x248434f0  addiu       $a0, $a0, 0x34F0
    ctx->pc = 0x15b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13552));
    // 0x15b3e8: 0x24e700df  addiu       $a3, $a3, 0xDF
    ctx->pc = 0x15b3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 223));
    // 0x15b3ec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b3f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b3f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b3f4: 0x24a5ff78  addiu       $a1, $a1, -0x88
    ctx->pc = 0x15b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
    // 0x15b3f8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b3fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b404: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B404u;
    SET_GPR_U32(ctx, 31, 0x15B40Cu);
    ctx->pc = 0x15B408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B404u;
            // 0x15b408: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B40Cu; }
        if (ctx->pc != 0x15B40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B40Cu; }
        if (ctx->pc != 0x15B40Cu) { return; }
    }
    ctx->pc = 0x15B40Cu;
    // 0x15b40c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b410: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b414: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b418: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B418u;
    SET_GPR_U32(ctx, 31, 0x15B420u);
    ctx->pc = 0x15B41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B418u;
            // 0x15b41c: 0x248434a0  addiu       $a0, $a0, 0x34A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B420u; }
        if (ctx->pc != 0x15B420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B420u; }
        if (ctx->pc != 0x15B420u) { return; }
    }
    ctx->pc = 0x15B420u;
    // 0x15b420: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b424: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b428: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b42c: 0x248434b0  addiu       $a0, $a0, 0x34B0
    ctx->pc = 0x15b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13488));
    // 0x15b430: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b434: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b438: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b43c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B43Cu;
    SET_GPR_U32(ctx, 31, 0x15B444u);
    ctx->pc = 0x15B440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B43Cu;
            // 0x15b440: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B444u; }
        if (ctx->pc != 0x15B444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B444u; }
        if (ctx->pc != 0x15B444u) { return; }
    }
    ctx->pc = 0x15B444u;
    // 0x15b444: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b448: 0x27b30054  addiu       $s3, $sp, 0x54
    ctx->pc = 0x15b448u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x15b44c: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x15b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
    // 0x15b450: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x15b450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x15b454: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b458: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x15b45c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15b460: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15b464: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x15b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x15b468: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15b46c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x15b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x15b470: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b474: 0x244234a0  addiu       $v0, $v0, 0x34A0
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13472));
    // 0x15b478: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B478u;
    SET_GPR_U32(ctx, 31, 0x15B480u);
    ctx->pc = 0x15B47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B478u;
            // 0x15b47c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B480u; }
        if (ctx->pc != 0x15B480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B480u; }
        if (ctx->pc != 0x15B480u) { return; }
    }
    ctx->pc = 0x15B480u;
    // 0x15b480: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b488: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b48c: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B48Cu;
    SET_GPR_U32(ctx, 31, 0x15B494u);
    ctx->pc = 0x15B490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B48Cu;
            // 0x15b490: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B494u; }
        if (ctx->pc != 0x15B494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B494u; }
        if (ctx->pc != 0x15B494u) { return; }
    }
    ctx->pc = 0x15B494u;
    // 0x15b494: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B494u;
    SET_GPR_U32(ctx, 31, 0x15B49Cu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B49Cu; }
        if (ctx->pc != 0x15B49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B49Cu; }
        if (ctx->pc != 0x15B49Cu) { return; }
    }
    ctx->pc = 0x15B49Cu;
    // 0x15b49c: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B49Cu;
    SET_GPR_U32(ctx, 31, 0x15B4A4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4A4u; }
        if (ctx->pc != 0x15B4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4A4u; }
        if (ctx->pc != 0x15B4A4u) { return; }
    }
    ctx->pc = 0x15B4A4u;
    // 0x15b4a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15b4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15b4a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15b4ac: 0x8c23354c  lw          $v1, 0x354C($at)
    ctx->pc = 0x15b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13644)));
    // 0x15b4b0: 0x24429bf0  addiu       $v0, $v0, -0x6410
    ctx->pc = 0x15b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941680));
    // 0x15b4b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15b4b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b4bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b4c0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B4C0u;
    SET_GPR_U32(ctx, 31, 0x15B4C8u);
    ctx->pc = 0x15B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4C0u;
            // 0x15b4c4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C8u; }
        if (ctx->pc != 0x15B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B4C8u; }
        if (ctx->pc != 0x15B4C8u) { return; }
    }
    ctx->pc = 0x15B4C8u;
    // 0x15b4c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b4cc: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b4d0: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b4d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b4d4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b4d8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b4d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b4dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b4e0: 0x24843460  addiu       $a0, $a0, 0x3460
    ctx->pc = 0x15b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13408));
    // 0x15b4e4: 0x24c30061  addiu       $v1, $a2, 0x61
    ctx->pc = 0x15b4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 97));
    // 0x15b4e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b4ec: 0x24a3ff72  addiu       $v1, $a1, -0x8E
    ctx->pc = 0x15b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15b4f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b4f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b4f4: 0x0  nop
    ctx->pc = 0x15b4f4u;
    // NOP
    // 0x15b4f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b4fc: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B4FCu;
    SET_GPR_U32(ctx, 31, 0x15B504u);
    ctx->pc = 0x15B500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B4FCu;
            // 0x15b500: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B504u; }
        if (ctx->pc != 0x15B504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B504u; }
        if (ctx->pc != 0x15B504u) { return; }
    }
    ctx->pc = 0x15B504u;
    // 0x15b504: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b508: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b50c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b50cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b510: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b510u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b514: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b518: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b51c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b520: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b524: 0x24843470  addiu       $a0, $a0, 0x3470
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13424));
    // 0x15b528: 0x24e70061  addiu       $a3, $a3, 0x61
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 97));
    // 0x15b52c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b530: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b530u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b534: 0x24a5ff72  addiu       $a1, $a1, -0x8E
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15b538: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b53c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b544: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B544u;
    SET_GPR_U32(ctx, 31, 0x15B54Cu);
    ctx->pc = 0x15B548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B544u;
            // 0x15b548: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B54Cu; }
        if (ctx->pc != 0x15B54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B54Cu; }
        if (ctx->pc != 0x15B54Cu) { return; }
    }
    ctx->pc = 0x15B54Cu;
    // 0x15b54c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b550: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b554: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b558: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B558u;
    SET_GPR_U32(ctx, 31, 0x15B560u);
    ctx->pc = 0x15B55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B558u;
            // 0x15b55c: 0x24843420  addiu       $a0, $a0, 0x3420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B560u; }
        if (ctx->pc != 0x15B560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B560u; }
        if (ctx->pc != 0x15B560u) { return; }
    }
    ctx->pc = 0x15B560u;
    // 0x15b560: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b564: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b568: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b56c: 0x24843430  addiu       $a0, $a0, 0x3430
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13360));
    // 0x15b570: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b574: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b578: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b57c: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B57Cu;
    SET_GPR_U32(ctx, 31, 0x15B584u);
    ctx->pc = 0x15B580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B57Cu;
            // 0x15b580: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B584u; }
        if (ctx->pc != 0x15B584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B584u; }
        if (ctx->pc != 0x15B584u) { return; }
    }
    ctx->pc = 0x15B584u;
    // 0x15b584: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b588: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b58c: 0x24423460  addiu       $v0, $v0, 0x3460
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13408));
    // 0x15b590: 0x24639be8  addiu       $v1, $v1, -0x6418
    ctx->pc = 0x15b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941672));
    // 0x15b594: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b594u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b598: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15b59c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b5a0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b5a4: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x15b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x15b5a8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B5A8u;
    SET_GPR_U32(ctx, 31, 0x15B5B0u);
    ctx->pc = 0x15B5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5A8u;
            // 0x15b5ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5B0u; }
        if (ctx->pc != 0x15B5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5B0u; }
        if (ctx->pc != 0x15B5B0u) { return; }
    }
    ctx->pc = 0x15B5B0u;
    // 0x15b5b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b5b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b5b8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b5bc: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B5BCu;
    SET_GPR_U32(ctx, 31, 0x15B5C4u);
    ctx->pc = 0x15B5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5BCu;
            // 0x15b5c0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5C4u; }
        if (ctx->pc != 0x15B5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5C4u; }
        if (ctx->pc != 0x15B5C4u) { return; }
    }
    ctx->pc = 0x15B5C4u;
    // 0x15b5c4: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B5C4u;
    SET_GPR_U32(ctx, 31, 0x15B5CCu);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5CCu; }
        if (ctx->pc != 0x15B5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5CCu; }
        if (ctx->pc != 0x15B5CCu) { return; }
    }
    ctx->pc = 0x15B5CCu;
    // 0x15b5cc: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B5CCu;
    SET_GPR_U32(ctx, 31, 0x15B5D4u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5D4u; }
        if (ctx->pc != 0x15B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5D4u; }
        if (ctx->pc != 0x15B5D4u) { return; }
    }
    ctx->pc = 0x15B5D4u;
    // 0x15b5d4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x15b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x15b5d8: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B5D8u;
    SET_GPR_U32(ctx, 31, 0x15B5E0u);
    ctx->pc = 0x15B5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B5D8u;
            // 0x15b5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5E0u; }
        if (ctx->pc != 0x15B5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B5E0u; }
        if (ctx->pc != 0x15B5E0u) { return; }
    }
    ctx->pc = 0x15B5E0u;
    // 0x15b5e0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b5e4: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b5e8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b5e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b5ec: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b5f0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b5f4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b5f8: 0x248433e0  addiu       $a0, $a0, 0x33E0
    ctx->pc = 0x15b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13280));
    // 0x15b5fc: 0x24c300a0  addiu       $v1, $a2, 0xA0
    ctx->pc = 0x15b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x15b600: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b604: 0x24a3ff72  addiu       $v1, $a1, -0x8E
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15b608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b60c: 0x0  nop
    ctx->pc = 0x15b60cu;
    // NOP
    // 0x15b610: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b614: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B614u;
    SET_GPR_U32(ctx, 31, 0x15B61Cu);
    ctx->pc = 0x15B618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B614u;
            // 0x15b618: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B61Cu; }
        if (ctx->pc != 0x15B61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B61Cu; }
        if (ctx->pc != 0x15B61Cu) { return; }
    }
    ctx->pc = 0x15B61Cu;
    // 0x15b61c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b620: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b624: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b628: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b628u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b62c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b630: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b634: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b638: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b63c: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x15b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x15b640: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x15b644: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b648: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b648u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b64c: 0x24a5ff72  addiu       $a1, $a1, -0x8E
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967154));
    // 0x15b650: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b654: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b65c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B65Cu;
    SET_GPR_U32(ctx, 31, 0x15B664u);
    ctx->pc = 0x15B660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B65Cu;
            // 0x15b660: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B664u; }
        if (ctx->pc != 0x15B664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B664u; }
        if (ctx->pc != 0x15B664u) { return; }
    }
    ctx->pc = 0x15B664u;
    // 0x15b664: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b668: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b66c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b670: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B670u;
    SET_GPR_U32(ctx, 31, 0x15B678u);
    ctx->pc = 0x15B674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B670u;
            // 0x15b674: 0x248433a0  addiu       $a0, $a0, 0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B678u; }
        if (ctx->pc != 0x15B678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B678u; }
        if (ctx->pc != 0x15B678u) { return; }
    }
    ctx->pc = 0x15B678u;
    // 0x15b678: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b67c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b680: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b684: 0x248433b0  addiu       $a0, $a0, 0x33B0
    ctx->pc = 0x15b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    // 0x15b688: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b68c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b690: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b694: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B694u;
    SET_GPR_U32(ctx, 31, 0x15B69Cu);
    ctx->pc = 0x15B698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B694u;
            // 0x15b698: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B69Cu; }
        if (ctx->pc != 0x15B69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B69Cu; }
        if (ctx->pc != 0x15B69Cu) { return; }
    }
    ctx->pc = 0x15B69Cu;
    // 0x15b69c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b6a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b6a4: 0x244233e0  addiu       $v0, $v0, 0x33E0
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13280));
    // 0x15b6a8: 0x24639c00  addiu       $v1, $v1, -0x6400
    ctx->pc = 0x15b6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941696));
    // 0x15b6ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b6b0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15b6b4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b6b8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b6bc: 0x244233a0  addiu       $v0, $v0, 0x33A0
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13216));
    // 0x15b6c0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B6C0u;
    SET_GPR_U32(ctx, 31, 0x15B6C8u);
    ctx->pc = 0x15B6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6C0u;
            // 0x15b6c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6C8u; }
        if (ctx->pc != 0x15B6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6C8u; }
        if (ctx->pc != 0x15B6C8u) { return; }
    }
    ctx->pc = 0x15B6C8u;
    // 0x15b6c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b6cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b6d0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b6d4: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B6D4u;
    SET_GPR_U32(ctx, 31, 0x15B6DCu);
    ctx->pc = 0x15B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6D4u;
            // 0x15b6d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6DCu; }
        if (ctx->pc != 0x15B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6DCu; }
        if (ctx->pc != 0x15B6DCu) { return; }
    }
    ctx->pc = 0x15B6DCu;
    // 0x15b6dc: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B6DCu;
    SET_GPR_U32(ctx, 31, 0x15B6E4u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6E4u; }
        if (ctx->pc != 0x15B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6E4u; }
        if (ctx->pc != 0x15B6E4u) { return; }
    }
    ctx->pc = 0x15B6E4u;
    // 0x15b6e4: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B6E4u;
    SET_GPR_U32(ctx, 31, 0x15B6ECu);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6ECu; }
        if (ctx->pc != 0x15B6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6ECu; }
        if (ctx->pc != 0x15B6ECu) { return; }
    }
    ctx->pc = 0x15B6ECu;
    // 0x15b6ec: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x15b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15b6f0: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B6F0u;
    SET_GPR_U32(ctx, 31, 0x15B6F8u);
    ctx->pc = 0x15B6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6F0u;
            // 0x15b6f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6F8u; }
        if (ctx->pc != 0x15B6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B6F8u; }
        if (ctx->pc != 0x15B6F8u) { return; }
    }
    ctx->pc = 0x15B6F8u;
    // 0x15b6f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b6fc: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b700: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b700u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b704: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b708: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b70c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b710: 0x24843260  addiu       $a0, $a0, 0x3260
    ctx->pc = 0x15b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12896));
    // 0x15b714: 0x24c3006c  addiu       $v1, $a2, 0x6C
    ctx->pc = 0x15b714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x15b718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15b718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b71c: 0x24a3ff5a  addiu       $v1, $a1, -0xA6
    ctx->pc = 0x15b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967130));
    // 0x15b720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b724: 0x0  nop
    ctx->pc = 0x15b724u;
    // NOP
    // 0x15b728: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b72c: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B72Cu;
    SET_GPR_U32(ctx, 31, 0x15B734u);
    ctx->pc = 0x15B730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B72Cu;
            // 0x15b730: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B734u; }
        if (ctx->pc != 0x15B734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B734u; }
        if (ctx->pc != 0x15B734u) { return; }
    }
    ctx->pc = 0x15B734u;
    // 0x15b734: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x15b734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b738: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b73c: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x15b73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b740: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b740u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b744: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b748: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b74c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b750: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b754: 0x24843270  addiu       $a0, $a0, 0x3270
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12912));
    // 0x15b758: 0x24e7006c  addiu       $a3, $a3, 0x6C
    ctx->pc = 0x15b758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
    // 0x15b75c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b760: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b760u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b764: 0x24a5ff5a  addiu       $a1, $a1, -0xA6
    ctx->pc = 0x15b764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967130));
    // 0x15b768: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b76c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b774: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B774u;
    SET_GPR_U32(ctx, 31, 0x15B77Cu);
    ctx->pc = 0x15B778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B774u;
            // 0x15b778: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B77Cu; }
        if (ctx->pc != 0x15B77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B77Cu; }
        if (ctx->pc != 0x15B77Cu) { return; }
    }
    ctx->pc = 0x15B77Cu;
    // 0x15b77c: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b780: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b784: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b788: 0x24843220  addiu       $a0, $a0, 0x3220
    ctx->pc = 0x15b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12832));
    // 0x15b78c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b790: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B790u;
    SET_GPR_U32(ctx, 31, 0x15B798u);
    ctx->pc = 0x15B794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B790u;
            // 0x15b794: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B798u; }
        if (ctx->pc != 0x15B798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B798u; }
        if (ctx->pc != 0x15B798u) { return; }
    }
    ctx->pc = 0x15B798u;
    // 0x15b798: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b79c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b7a0: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b7a4: 0x24843230  addiu       $a0, $a0, 0x3230
    ctx->pc = 0x15b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12848));
    // 0x15b7a8: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b7ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15b7b0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b7b4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b7b8: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B7B8u;
    SET_GPR_U32(ctx, 31, 0x15B7C0u);
    ctx->pc = 0x15B7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7B8u;
            // 0x15b7bc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7C0u; }
        if (ctx->pc != 0x15B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7C0u; }
        if (ctx->pc != 0x15B7C0u) { return; }
    }
    ctx->pc = 0x15B7C0u;
    // 0x15b7c0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b7c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b7c8: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x15b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x15b7cc: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x15b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x15b7d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b7d4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15b7d8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b7dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b7e0: 0x24423220  addiu       $v0, $v0, 0x3220
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12832));
    // 0x15b7e4: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B7E4u;
    SET_GPR_U32(ctx, 31, 0x15B7ECu);
    ctx->pc = 0x15B7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7E4u;
            // 0x15b7e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7ECu; }
        if (ctx->pc != 0x15B7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B7ECu; }
        if (ctx->pc != 0x15B7ECu) { return; }
    }
    ctx->pc = 0x15B7ECu;
    // 0x15b7ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b7f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b7f4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b7f8: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B7F8u;
    SET_GPR_U32(ctx, 31, 0x15B800u);
    ctx->pc = 0x15B7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B7F8u;
            // 0x15b7fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B800u; }
        if (ctx->pc != 0x15B800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B800u; }
        if (ctx->pc != 0x15B800u) { return; }
    }
    ctx->pc = 0x15B800u;
    // 0x15b800: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B800u;
    SET_GPR_U32(ctx, 31, 0x15B808u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B808u; }
        if (ctx->pc != 0x15B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B808u; }
        if (ctx->pc != 0x15B808u) { return; }
    }
    ctx->pc = 0x15B808u;
    // 0x15b808: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B808u;
    SET_GPR_U32(ctx, 31, 0x15B810u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B810u; }
        if (ctx->pc != 0x15B810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B810u; }
        if (ctx->pc != 0x15B810u) { return; }
    }
    ctx->pc = 0x15B810u;
    // 0x15b810: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b814: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B814u;
    SET_GPR_U32(ctx, 31, 0x15B81Cu);
    ctx->pc = 0x15B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B814u;
            // 0x15b818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B81Cu; }
        if (ctx->pc != 0x15B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B81Cu; }
        if (ctx->pc != 0x15B81Cu) { return; }
    }
    ctx->pc = 0x15B81Cu;
    // 0x15b81c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b820: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b824: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b824u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b828: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b82c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b82cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b830: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b834: 0x24843340  addiu       $a0, $a0, 0x3340
    ctx->pc = 0x15b834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    // 0x15b838: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b83c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x15b83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x15b840: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b844: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x15b844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b848: 0x2463ff42  addiu       $v1, $v1, -0xBE
    ctx->pc = 0x15b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967106));
    // 0x15b84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b850: 0x0  nop
    ctx->pc = 0x15b850u;
    // NOP
    // 0x15b854: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b858: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B858u;
    SET_GPR_U32(ctx, 31, 0x15B860u);
    ctx->pc = 0x15B85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B858u;
            // 0x15b85c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B860u; }
        if (ctx->pc != 0x15B860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B860u; }
        if (ctx->pc != 0x15B860u) { return; }
    }
    ctx->pc = 0x15B860u;
    // 0x15b860: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b864: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b868: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b868u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b86c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b870: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b874: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b878: 0x24843350  addiu       $a0, $a0, 0x3350
    ctx->pc = 0x15b878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13136));
    // 0x15b87c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b880: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x15b884: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b884u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b888: 0x24a5ff42  addiu       $a1, $a1, -0xBE
    ctx->pc = 0x15b888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x15b88c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b88cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b890: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b898: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B898u;
    SET_GPR_U32(ctx, 31, 0x15B8A0u);
    ctx->pc = 0x15B89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B898u;
            // 0x15b89c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8A0u; }
        if (ctx->pc != 0x15B8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8A0u; }
        if (ctx->pc != 0x15B8A0u) { return; }
    }
    ctx->pc = 0x15B8A0u;
    // 0x15b8a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x15b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b8a4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b8a8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b8ac: 0x248432c0  addiu       $a0, $a0, 0x32C0
    ctx->pc = 0x15b8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12992));
    // 0x15b8b0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B8B0u;
    SET_GPR_U32(ctx, 31, 0x15B8B8u);
    ctx->pc = 0x15B8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8B0u;
            // 0x15b8b4: 0x24650100  addiu       $a1, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8B8u; }
        if (ctx->pc != 0x15B8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8B8u; }
        if (ctx->pc != 0x15B8B8u) { return; }
    }
    ctx->pc = 0x15B8B8u;
    // 0x15b8b8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b8bc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b8c0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b8c4: 0x248432d0  addiu       $a0, $a0, 0x32D0
    ctx->pc = 0x15b8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13008));
    // 0x15b8c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b8cc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b8d0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b8d4: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x15b8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x15b8d8: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B8D8u;
    SET_GPR_U32(ctx, 31, 0x15B8E0u);
    ctx->pc = 0x15B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8D8u;
            // 0x15b8dc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8E0u; }
        if (ctx->pc != 0x15B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8E0u; }
        if (ctx->pc != 0x15B8E0u) { return; }
    }
    ctx->pc = 0x15B8E0u;
    // 0x15b8e0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b8e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15b8e8: 0x24423340  addiu       $v0, $v0, 0x3340
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13120));
    // 0x15b8ec: 0x24639c18  addiu       $v1, $v1, -0x63E8
    ctx->pc = 0x15b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941720));
    // 0x15b8f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15b8f4: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15b8f8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b8fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15b900: 0x244232c0  addiu       $v0, $v0, 0x32C0
    ctx->pc = 0x15b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12992));
    // 0x15b904: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15B904u;
    SET_GPR_U32(ctx, 31, 0x15B90Cu);
    ctx->pc = 0x15B908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B904u;
            // 0x15b908: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B90Cu; }
        if (ctx->pc != 0x15B90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B90Cu; }
        if (ctx->pc != 0x15B90Cu) { return; }
    }
    ctx->pc = 0x15B90Cu;
    // 0x15b90c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15b90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15b910: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b914: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15b914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15b918: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15B918u;
    SET_GPR_U32(ctx, 31, 0x15B920u);
    ctx->pc = 0x15B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B918u;
            // 0x15b91c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B920u; }
        if (ctx->pc != 0x15B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B920u; }
        if (ctx->pc != 0x15B920u) { return; }
    }
    ctx->pc = 0x15B920u;
    // 0x15b920: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15B920u;
    SET_GPR_U32(ctx, 31, 0x15B928u);
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B928u; }
        if (ctx->pc != 0x15B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B928u; }
        if (ctx->pc != 0x15B928u) { return; }
    }
    ctx->pc = 0x15B928u;
    // 0x15b928: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15B928u;
    SET_GPR_U32(ctx, 31, 0x15B930u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B930u; }
        if (ctx->pc != 0x15B930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B930u; }
        if (ctx->pc != 0x15B930u) { return; }
    }
    ctx->pc = 0x15B930u;
    // 0x15b930: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x15b930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15b934: 0xc05c00c  jal         func_170030
    ctx->pc = 0x15B934u;
    SET_GPR_U32(ctx, 31, 0x15B93Cu);
    ctx->pc = 0x15B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B934u;
            // 0x15b938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170030u;
    if (runtime->hasFunction(0x170030u)) {
        auto targetFn = runtime->lookupFunction(0x170030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B93Cu; }
        if (ctx->pc != 0x15B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVinfo_0x170030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B93Cu; }
        if (ctx->pc != 0x15B93Cu) { return; }
    }
    ctx->pc = 0x15B93Cu;
    // 0x15b93c: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b940: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b944: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b944u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b948: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b94c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b950: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b954: 0x24843360  addiu       $a0, $a0, 0x3360
    ctx->pc = 0x15b954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13152));
    // 0x15b958: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b95c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x15b960: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b964: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x15b964u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15b968: 0x2463ff42  addiu       $v1, $v1, -0xBE
    ctx->pc = 0x15b968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967106));
    // 0x15b96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b970: 0x0  nop
    ctx->pc = 0x15b970u;
    // NOP
    // 0x15b974: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x15b974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b978: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B978u;
    SET_GPR_U32(ctx, 31, 0x15B980u);
    ctx->pc = 0x15B97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B978u;
            // 0x15b97c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B980u; }
        if (ctx->pc != 0x15B980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B980u; }
        if (ctx->pc != 0x15B980u) { return; }
    }
    ctx->pc = 0x15B980u;
    // 0x15b980: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x15b980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b984: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x15b984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x15b988: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x15b988u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)9216u)));
    // 0x15b98c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b990: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x15b990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15b994: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b998: 0x24843370  addiu       $a0, $a0, 0x3370
    ctx->pc = 0x15b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13168));
    // 0x15b99c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b9a0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x15b9a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15b9a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b9a8: 0x24a5ff42  addiu       $a1, $a1, -0xBE
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x15b9ac: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15b9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x15b9b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15b9b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15b9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b9b8: 0xc056038  jal         func_1580E0
    ctx->pc = 0x15B9B8u;
    SET_GPR_U32(ctx, 31, 0x15B9C0u);
    ctx->pc = 0x15B9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9B8u;
            // 0x15b9bc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580E0u;
    if (runtime->hasFunction(0x1580E0u)) {
        auto targetFn = runtime->lookupFunction(0x1580E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9C0u; }
        if (ctx->pc != 0x15B9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1580e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9C0u; }
        if (ctx->pc != 0x15B9C0u) { return; }
    }
    ctx->pc = 0x15B9C0u;
    // 0x15b9c0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x15b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b9c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b9c8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x15b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b9cc: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B9CCu;
    SET_GPR_U32(ctx, 31, 0x15B9D4u);
    ctx->pc = 0x15B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9CCu;
            // 0x15b9d0: 0x248432e0  addiu       $a0, $a0, 0x32E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9D4u; }
        if (ctx->pc != 0x15B9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9D4u; }
        if (ctx->pc != 0x15B9D4u) { return; }
    }
    ctx->pc = 0x15B9D4u;
    // 0x15b9d4: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15b9d8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x15b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x15b9dc: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x15b9e0: 0x248432f0  addiu       $a0, $a0, 0x32F0
    ctx->pc = 0x15b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13040));
    // 0x15b9e4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x15b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15b9e8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15b9ec: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x15b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15b9f0: 0xc056af4  jal         func_15ABD0
    ctx->pc = 0x15B9F0u;
    SET_GPR_U32(ctx, 31, 0x15B9F8u);
    ctx->pc = 0x15B9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9F0u;
            // 0x15b9f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABD0u;
    if (runtime->hasFunction(0x15ABD0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9F8u; }
        if (ctx->pc != 0x15B9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x15abd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B9F8u; }
        if (ctx->pc != 0x15B9F8u) { return; }
    }
    ctx->pc = 0x15B9F8u;
    // 0x15b9f8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15b9fc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15ba00: 0x24423360  addiu       $v0, $v0, 0x3360
    ctx->pc = 0x15ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13152));
    // 0x15ba04: 0x24639c1c  addiu       $v1, $v1, -0x63E4
    ctx->pc = 0x15ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941724));
    // 0x15ba08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x15ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x15ba0c: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x15ba10: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15ba14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x15ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x15ba18: 0x244232e0  addiu       $v0, $v0, 0x32E0
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13024));
    // 0x15ba1c: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15BA1Cu;
    SET_GPR_U32(ctx, 31, 0x15BA24u);
    ctx->pc = 0x15BA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA1Cu;
            // 0x15ba20: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA24u; }
        if (ctx->pc != 0x15BA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA24u; }
        if (ctx->pc != 0x15BA24u) { return; }
    }
    ctx->pc = 0x15BA24u;
    // 0x15ba24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ba28: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15ba2c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x15ba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15ba30: 0xc056034  jal         func_1580D0
    ctx->pc = 0x15BA30u;
    SET_GPR_U32(ctx, 31, 0x15BA38u);
    ctx->pc = 0x15BA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA30u;
            // 0x15ba34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580D0u;
    if (runtime->hasFunction(0x1580D0u)) {
        auto targetFn = runtime->lookupFunction(0x1580D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA38u; }
        if (ctx->pc != 0x15BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1580d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA38u; }
        if (ctx->pc != 0x15BA38u) { return; }
    }
    ctx->pc = 0x15BA38u;
    // 0x15ba38: 0xc056030  jal         func_1580C0
    ctx->pc = 0x15BA38u;
    SET_GPR_U32(ctx, 31, 0x15BA40u);
    ctx->pc = 0x15BA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA38u;
            // 0x15ba3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1580C0u;
    if (runtime->hasFunction(0x1580C0u)) {
        auto targetFn = runtime->lookupFunction(0x1580C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA40u; }
        if (ctx->pc != 0x15BA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1580c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA40u; }
        if (ctx->pc != 0x15BA40u) { return; }
    }
    ctx->pc = 0x15BA40u;
    // 0x15ba40: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x15BA40u;
    SET_GPR_U32(ctx, 31, 0x15BA48u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA48u; }
        if (ctx->pc != 0x15BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BA48u; }
        if (ctx->pc != 0x15BA48u) { return; }
    }
    ctx->pc = 0x15BA48u;
label_15ba48:
    // 0x15ba48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ba4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ba4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ba50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ba50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ba54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ba54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ba58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ba58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ba5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA5Cu;
            // 0x15ba60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B358u: goto label_15b358;
            case 0x15BA48u: goto label_15ba48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BA64u;
}
