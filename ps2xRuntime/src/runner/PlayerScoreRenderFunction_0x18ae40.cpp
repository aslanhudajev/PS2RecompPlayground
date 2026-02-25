#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerScoreRenderFunction
// Address: 0x18ae40 - 0x18b13c
void PlayerScoreRenderFunction_0x18ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerScoreRenderFunction_0x18ae40");
#endif

    ctx->pc = 0x18ae40u;

    // 0x18ae40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18ae44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18ae48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ae48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ae4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ae50: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x18ae54: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x18AE54u;
    {
        const bool branch_taken_0x18ae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE54u;
            // 0x18ae58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae54) {
            ctx->pc = 0x18AFB8u;
            goto label_18afb8;
        }
    }
    ctx->pc = 0x18AE5Cu;
    // 0x18ae5c: 0x8e2600a8  lw          $a2, 0xA8($s1)
    ctx->pc = 0x18ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x18ae60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18ae60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18ae64: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ae68: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18AE68u;
    SET_GPR_U32(ctx, 31, 0x18AE70u);
    ctx->pc = 0x18AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE68u;
            // 0x18ae6c: 0x24a52728  addiu       $a1, $a1, 0x2728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE70u; }
        if (ctx->pc != 0x18AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE70u; }
        if (ctx->pc != 0x18AE70u) { return; }
    }
    ctx->pc = 0x18AE70u;
    // 0x18ae70: 0x2404ffec  addiu       $a0, $zero, -0x14
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x18ae74: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x18ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18ae78: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ae7c: 0xc060a44  jal         func_182910
    ctx->pc = 0x18AE7Cu;
    SET_GPR_U32(ctx, 31, 0x18AE84u);
    ctx->pc = 0x18AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE7Cu;
            // 0x18ae80: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE84u; }
        if (ctx->pc != 0x18AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE84u; }
        if (ctx->pc != 0x18AE84u) { return; }
    }
    ctx->pc = 0x18AE84u;
    // 0x18ae84: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x18ae84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x18ae88: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18ae8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ae90: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18AE90u;
    SET_GPR_U32(ctx, 31, 0x18AE98u);
    ctx->pc = 0x18AE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE90u;
            // 0x18ae94: 0x24a52730  addiu       $a1, $a1, 0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE98u; }
        if (ctx->pc != 0x18AE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AE98u; }
        if (ctx->pc != 0x18AE98u) { return; }
    }
    ctx->pc = 0x18AE98u;
    // 0x18ae98: 0x2404ff50  addiu       $a0, $zero, -0xB0
    ctx->pc = 0x18ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967120));
    // 0x18ae9c: 0x2405ff6d  addiu       $a1, $zero, -0x93
    ctx->pc = 0x18ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967149));
    // 0x18aea0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18aea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18aea4: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x18AEA4u;
    SET_GPR_U32(ctx, 31, 0x18AEACu);
    ctx->pc = 0x18AEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEA4u;
            // 0x18aea8: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (runtime->hasFunction(0x181F40u)) {
        auto targetFn = runtime->lookupFunction(0x181F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEACu; }
        if (ctx->pc != 0x18AEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_position_0x181f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEACu; }
        if (ctx->pc != 0x18AEACu) { return; }
    }
    ctx->pc = 0x18AEACu;
    // 0x18aeac: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x18aeacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x18aeb0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18aeb4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18aeb8: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18AEB8u;
    SET_GPR_U32(ctx, 31, 0x18AEC0u);
    ctx->pc = 0x18AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AEB8u;
            // 0x18aebc: 0x24a52730  addiu       $a1, $a1, 0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEC0u; }
        if (ctx->pc != 0x18AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AEC0u; }
        if (ctx->pc != 0x18AEC0u) { return; }
    }
    ctx->pc = 0x18AEC0u;
    // 0x18aec0: 0x2404ff8c  addiu       $a0, $zero, -0x74
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967180));
    // 0x18aec4: 0x2405ff6d  addiu       $a1, $zero, -0x93
    ctx->pc = 0x18aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967149));
    // 0x18aec8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18aecc: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x18AECCu;
    SET_GPR_U32(ctx, 31, 0x18AED4u);
    ctx->pc = 0x18AED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AECCu;
            // 0x18aed0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (runtime->hasFunction(0x181F40u)) {
        auto targetFn = runtime->lookupFunction(0x181F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AED4u; }
        if (ctx->pc != 0x18AED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_position_0x181f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AED4u; }
        if (ctx->pc != 0x18AED4u) { return; }
    }
    ctx->pc = 0x18AED4u;
    // 0x18aed4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18aed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aed8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18aed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aedc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18aedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18aee0:
    // 0x18aee0: 0x8d0700e4  lw          $a3, 0xE4($t0)
    ctx->pc = 0x18aee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 228)));
    // 0x18aee4: 0x8d0600e8  lw          $a2, 0xE8($t0)
    ctx->pc = 0x18aee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 232)));
    // 0x18aee8: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x18aee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x18aeec: 0x8d0500ec  lw          $a1, 0xEC($t0)
    ctx->pc = 0x18aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 236)));
    // 0x18aef0: 0x2922000a  slti        $v0, $t1, 0xA
    ctx->pc = 0x18aef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18aef4: 0x8d0400f0  lw          $a0, 0xF0($t0)
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 240)));
    // 0x18aef8: 0x8d0300f4  lw          $v1, 0xF4($t0)
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 244)));
    // 0x18aefc: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x18aefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x18af00: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x18af00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18af04: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x18af04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x18af08: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x18af08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18af0c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x18af0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18af10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18AF10u;
    {
        const bool branch_taken_0x18af10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF10u;
            // 0x18af14: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af10) {
            ctx->pc = 0x18AEE0u;
            goto label_18aee0;
        }
    }
    ctx->pc = 0x18AF18u;
    // 0x18af18: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x18af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x18af1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18af20: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18af20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18af24: 0x2442a530  addiu       $v0, $v0, -0x5AD0
    ctx->pc = 0x18af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x18af28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18af2c: 0x24a52738  addiu       $a1, $a1, 0x2738
    ctx->pc = 0x18af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10040));
    // 0x18af30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18af34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18af38: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x18af38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18af3c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18AF3Cu;
    SET_GPR_U32(ctx, 31, 0x18AF44u);
    ctx->pc = 0x18AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF3Cu;
            // 0x18af40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF44u; }
        if (ctx->pc != 0x18AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF44u; }
        if (ctx->pc != 0x18AF44u) { return; }
    }
    ctx->pc = 0x18AF44u;
    // 0x18af44: 0x2404ff2e  addiu       $a0, $zero, -0xD2
    ctx->pc = 0x18af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x18af48: 0x2405ff50  addiu       $a1, $zero, -0xB0
    ctx->pc = 0x18af48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967120));
    // 0x18af4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18af50: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x18AF50u;
    SET_GPR_U32(ctx, 31, 0x18AF58u);
    ctx->pc = 0x18AF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF50u;
            // 0x18af54: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (runtime->hasFunction(0x181F40u)) {
        auto targetFn = runtime->lookupFunction(0x181F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF58u; }
        if (ctx->pc != 0x18AF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_position_0x181f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AF58u; }
        if (ctx->pc != 0x18AF58u) { return; }
    }
    ctx->pc = 0x18AF58u;
    // 0x18af58: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x18af5c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18af60: 0x2463a530  addiu       $v1, $v1, -0x5AD0
    ctx->pc = 0x18af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x18af64: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18af64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18af68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18af68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18af6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18af70: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x18af70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18af74: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x18AF74u;
    {
        const bool branch_taken_0x18af74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF74u;
            // 0x18af78: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af74) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18AF7Cu;
    // 0x18af7c: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x18af7cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34463u)));
    // 0x18af80: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x18AF80u;
    {
        const bool branch_taken_0x18af80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18af80) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18AF88u;
    // 0x18af88: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x18af88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18af8c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x18af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x18af90: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x18af90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
    // 0x18af94: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x18af98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18af9c: 0xc05d110  jal         func_174440
    ctx->pc = 0x18AF9Cu;
    SET_GPR_U32(ctx, 31, 0x18AFA4u);
    ctx->pc = 0x18AFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AF9Cu;
            // 0x18afa0: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFA4u; }
        if (ctx->pc != 0x18AFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFA4u; }
        if (ctx->pc != 0x18AFA4u) { return; }
    }
    ctx->pc = 0x18AFA4u;
    // 0x18afa4: 0xc05d110  jal         func_174440
    ctx->pc = 0x18AFA4u;
    SET_GPR_U32(ctx, 31, 0x18AFACu);
    ctx->pc = 0x18AFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFA4u;
            // 0x18afa8: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFACu; }
        if (ctx->pc != 0x18AFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFACu; }
        if (ctx->pc != 0x18AFACu) { return; }
    }
    ctx->pc = 0x18AFACu;
    // 0x18afac: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x18AFACu;
    {
        const bool branch_taken_0x18afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18afac) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18AFB4u;
    // 0x18afb4: 0x0  nop
    ctx->pc = 0x18afb4u;
    // NOP
label_18afb8:
    // 0x18afb8: 0x8e2600a8  lw          $a2, 0xA8($s1)
    ctx->pc = 0x18afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x18afbc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18afc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18afc4: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18AFC4u;
    SET_GPR_U32(ctx, 31, 0x18AFCCu);
    ctx->pc = 0x18AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFC4u;
            // 0x18afc8: 0x24a52740  addiu       $a1, $a1, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFCCu; }
        if (ctx->pc != 0x18AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFCCu; }
        if (ctx->pc != 0x18AFCCu) { return; }
    }
    ctx->pc = 0x18AFCCu;
    // 0x18afcc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18afd0: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x18afd4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18afd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18afd8: 0xc060a44  jal         func_182910
    ctx->pc = 0x18AFD8u;
    SET_GPR_U32(ctx, 31, 0x18AFE0u);
    ctx->pc = 0x18AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFD8u;
            // 0x18afdc: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFE0u; }
        if (ctx->pc != 0x18AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFE0u; }
        if (ctx->pc != 0x18AFE0u) { return; }
    }
    ctx->pc = 0x18AFE0u;
    // 0x18afe0: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x18afe4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18afe8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18afec: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18AFECu;
    SET_GPR_U32(ctx, 31, 0x18AFF4u);
    ctx->pc = 0x18AFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AFECu;
            // 0x18aff0: 0x24a52730  addiu       $a1, $a1, 0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFF4u; }
        if (ctx->pc != 0x18AFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AFF4u; }
        if (ctx->pc != 0x18AFF4u) { return; }
    }
    ctx->pc = 0x18AFF4u;
    // 0x18aff4: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x18aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x18aff8: 0x2405ff6d  addiu       $a1, $zero, -0x93
    ctx->pc = 0x18aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967149));
    // 0x18affc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18affcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b000: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x18B000u;
    SET_GPR_U32(ctx, 31, 0x18B008u);
    ctx->pc = 0x18B004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B000u;
            // 0x18b004: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (runtime->hasFunction(0x181F40u)) {
        auto targetFn = runtime->lookupFunction(0x181F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B008u; }
        if (ctx->pc != 0x18B008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_position_0x181f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B008u; }
        if (ctx->pc != 0x18B008u) { return; }
    }
    ctx->pc = 0x18B008u;
    // 0x18b008: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x18b00c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b010: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b014: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18B014u;
    SET_GPR_U32(ctx, 31, 0x18B01Cu);
    ctx->pc = 0x18B018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B014u;
            // 0x18b018: 0x24a52730  addiu       $a1, $a1, 0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B01Cu; }
        if (ctx->pc != 0x18B01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B01Cu; }
        if (ctx->pc != 0x18B01Cu) { return; }
    }
    ctx->pc = 0x18B01Cu;
    // 0x18b01c: 0x240400ac  addiu       $a0, $zero, 0xAC
    ctx->pc = 0x18b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x18b020: 0x2405ff6d  addiu       $a1, $zero, -0x93
    ctx->pc = 0x18b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967149));
    // 0x18b024: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18b024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b028: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x18B028u;
    SET_GPR_U32(ctx, 31, 0x18B030u);
    ctx->pc = 0x18B02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B028u;
            // 0x18b02c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (runtime->hasFunction(0x181F40u)) {
        auto targetFn = runtime->lookupFunction(0x181F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B030u; }
        if (ctx->pc != 0x18B030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_position_0x181f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B030u; }
        if (ctx->pc != 0x18B030u) { return; }
    }
    ctx->pc = 0x18B030u;
    // 0x18b030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b038: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x18b038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b03c: 0x0  nop
    ctx->pc = 0x18b03cu;
    // NOP
label_18b040:
    // 0x18b040: 0x8d2700e4  lw          $a3, 0xE4($t1)
    ctx->pc = 0x18b040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 228)));
    // 0x18b044: 0x8d2600e8  lw          $a2, 0xE8($t1)
    ctx->pc = 0x18b044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x18b048: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x18b048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x18b04c: 0x8d2500ec  lw          $a1, 0xEC($t1)
    ctx->pc = 0x18b04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 236)));
    // 0x18b050: 0x2902000a  slti        $v0, $t0, 0xA
    ctx->pc = 0x18b050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18b054: 0x8d2400f0  lw          $a0, 0xF0($t1)
    ctx->pc = 0x18b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 240)));
    // 0x18b058: 0x8d2300f4  lw          $v1, 0xF4($t1)
    ctx->pc = 0x18b058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 244)));
    // 0x18b05c: 0x2078021  addu        $s0, $s0, $a3
    ctx->pc = 0x18b05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x18b060: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x18b060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18b064: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x18b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x18b068: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x18b068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x18b06c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18b070: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x18B070u;
    {
        const bool branch_taken_0x18b070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B070u;
            // 0x18b074: 0x25290014  addiu       $t1, $t1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b070) {
            ctx->pc = 0x18B040u;
            goto label_18b040;
        }
    }
    ctx->pc = 0x18B078u;
    // 0x18b078: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x18b078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x18b07c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x18b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x18b080: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b084: 0x2442a530  addiu       $v0, $v0, -0x5AD0
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x18b088: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18b088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b08c: 0x24a52738  addiu       $a1, $a1, 0x2738
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10040));
    // 0x18b090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b098: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x18b098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b09c: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x18B09Cu;
    SET_GPR_U32(ctx, 31, 0x18B0A4u);
    ctx->pc = 0x18B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B09Cu;
            // 0x18b0a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0A4u; }
        if (ctx->pc != 0x18B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0A4u; }
        if (ctx->pc != 0x18B0A4u) { return; }
    }
    ctx->pc = 0x18B0A4u;
    // 0x18b0a4: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x18B0A4u;
    SET_GPR_U32(ctx, 31, 0x18B0ACu);
    ctx->pc = 0x18B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0A4u;
            // 0x18b0a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0ACu; }
        if (ctx->pc != 0x18B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0ACu; }
        if (ctx->pc != 0x18B0ACu) { return; }
    }
    ctx->pc = 0x18B0ACu;
    // 0x18b0ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b0b0: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18b0b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b0b8: 0x2405ff50  addiu       $a1, $zero, -0xB0
    ctx->pc = 0x18b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967120));
    // 0x18b0bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18b0c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b0c4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x18b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18b0c8: 0xc0607d0  jal         func_181F40
    ctx->pc = 0x18B0C8u;
    SET_GPR_U32(ctx, 31, 0x18B0D0u);
    ctx->pc = 0x18B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0C8u;
            // 0x18b0cc: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181F40u;
    if (runtime->hasFunction(0x181F40u)) {
        auto targetFn = runtime->lookupFunction(0x181F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0D0u; }
        if (ctx->pc != 0x18B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_position_0x181f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B0D0u; }
        if (ctx->pc != 0x18B0D0u) { return; }
    }
    ctx->pc = 0x18B0D0u;
    // 0x18b0d0: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x18b0d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x18b0d8: 0x2463a530  addiu       $v1, $v1, -0x5AD0
    ctx->pc = 0x18b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944048));
    // 0x18b0dc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x18b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18b0e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b0e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b0e8: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x18b0e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18b0ec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18B0ECu;
    {
        const bool branch_taken_0x18b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B0ECu;
            // 0x18b0f0: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0ec) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18B0F4u;
    // 0x18b0f4: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x18b0f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)34463u)));
    // 0x18b0f8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18B0F8u;
    {
        const bool branch_taken_0x18b0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b0f8) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18B100u;
    // 0x18b100: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18b104: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x18b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x18b108: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x18b108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
    // 0x18b10c: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x18b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x18b110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b114: 0xc05d110  jal         func_174440
    ctx->pc = 0x18B114u;
    SET_GPR_U32(ctx, 31, 0x18B11Cu);
    ctx->pc = 0x18B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B114u;
            // 0x18b118: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B11Cu; }
        if (ctx->pc != 0x18B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B11Cu; }
        if (ctx->pc != 0x18B11Cu) { return; }
    }
    ctx->pc = 0x18B11Cu;
    // 0x18b11c: 0xc05d110  jal         func_174440
    ctx->pc = 0x18B11Cu;
    SET_GPR_U32(ctx, 31, 0x18B124u);
    ctx->pc = 0x18B120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B11Cu;
            // 0x18b120: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B124u; }
        if (ctx->pc != 0x18B124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B124u; }
        if (ctx->pc != 0x18B124u) { return; }
    }
    ctx->pc = 0x18B124u;
    // 0x18b124: 0x0  nop
    ctx->pc = 0x18b124u;
    // NOP
label_18b128:
    // 0x18b128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18b128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b134: 0x3e00008  jr          $ra
    ctx->pc = 0x18B134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B134u;
            // 0x18b138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AEE0u: goto label_18aee0;
            case 0x18AFB8u: goto label_18afb8;
            case 0x18B040u: goto label_18b040;
            case 0x18B128u: goto label_18b128;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B13Cu;
}
