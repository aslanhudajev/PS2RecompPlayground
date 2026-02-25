#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MenuMain
// Address: 0x17fdd0 - 0x18029c
void MenuMain_0x17fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MenuMain_0x17fdd0");
#endif

    ctx->pc = 0x17fdd0u;

    // 0x17fdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17fdd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17fdd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17fddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fde0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fde4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fdec: 0xc060458  jal         func_181160
    ctx->pc = 0x17FDECu;
    SET_GPR_U32(ctx, 31, 0x17FDF4u);
    ctx->pc = 0x17FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDECu;
            // 0x17fdf0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181160u;
    if (runtime->hasFunction(0x181160u)) {
        auto targetFn = runtime->lookupFunction(0x181160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDF4u; }
        if (ctx->pc != 0x17FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInit_0x181160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDF4u; }
        if (ctx->pc != 0x17FDF4u) { return; }
    }
    ctx->pc = 0x17FDF4u;
    // 0x17fdf4: 0xc0607ac  jal         func_181EB0
    ctx->pc = 0x17FDF4u;
    SET_GPR_U32(ctx, 31, 0x17FDFCu);
    ctx->pc = 0x181EB0u;
    if (runtime->hasFunction(0x181EB0u)) {
        auto targetFn = runtime->lookupFunction(0x181EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDFCu; }
        if (ctx->pc != 0x17FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderInit_0x181eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FDFCu; }
        if (ctx->pc != 0x17FDFCu) { return; }
    }
    ctx->pc = 0x17FDFCu;
    // 0x17fdfc: 0xc060718  jal         func_181C60
    ctx->pc = 0x17FDFCu;
    SET_GPR_U32(ctx, 31, 0x17FE04u);
    ctx->pc = 0x17FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FDFCu;
            // 0x17fe00: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE04u; }
        if (ctx->pc != 0x17FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE04u; }
        if (ctx->pc != 0x17FE04u) { return; }
    }
    ctx->pc = 0x17FE04u;
    // 0x17fe04: 0x0  nop
    ctx->pc = 0x17fe04u;
    // NOP
label_17fe08:
    // 0x17fe08: 0xc06044c  jal         func_181130
    ctx->pc = 0x17FE08u;
    SET_GPR_U32(ctx, 31, 0x17FE10u);
    ctx->pc = 0x181130u;
    if (runtime->hasFunction(0x181130u)) {
        auto targetFn = runtime->lookupFunction(0x181130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE10u; }
        if (ctx->pc != 0x17FE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        paramInit_0x181130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE10u; }
        if (ctx->pc != 0x17FE10u) { return; }
    }
    ctx->pc = 0x17FE10u;
    // 0x17fe10: 0x12200099  beqz        $s1, . + 4 + (0x99 << 2)
    ctx->pc = 0x17FE10u;
    {
        const bool branch_taken_0x17fe10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe10) {
            ctx->pc = 0x180078u;
            goto label_180078;
        }
    }
    ctx->pc = 0x17FE18u;
label_17fe18:
    // 0x17fe18: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x17FE18u;
    SET_GPR_U32(ctx, 31, 0x17FE20u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE20u; }
        if (ctx->pc != 0x17FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE20u; }
        if (ctx->pc != 0x17FE20u) { return; }
    }
    ctx->pc = 0x17FE20u;
    // 0x17fe20: 0xc06069c  jal         func_181A70
    ctx->pc = 0x17FE20u;
    SET_GPR_U32(ctx, 31, 0x17FE28u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE28u; }
        if (ctx->pc != 0x17FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE28u; }
        if (ctx->pc != 0x17FE28u) { return; }
    }
    ctx->pc = 0x17FE28u;
    // 0x17fe28: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x17FE28u;
    SET_GPR_U32(ctx, 31, 0x17FE30u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE30u; }
        if (ctx->pc != 0x17FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE30u; }
        if (ctx->pc != 0x17FE30u) { return; }
    }
    ctx->pc = 0x17FE30u;
    // 0x17fe30: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fe34: 0x90223c90  lbu         $v0, 0x3C90($at)
    ctx->pc = 0x17fe34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17fe38: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x17fe38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17fe3c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FE3Cu;
    {
        const bool branch_taken_0x17fe3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fe3c) {
            ctx->pc = 0x17FE50u;
            goto label_17fe50;
        }
    }
    ctx->pc = 0x17FE44u;
    // 0x17fe44: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17fe48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fe48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fe4c: 0xa0223c90  sb          $v0, 0x3C90($at)
    ctx->pc = 0x17fe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 2));
label_17fe50:
    // 0x17fe50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fe50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fe54: 0x8c2323e8  lw          $v1, 0x23E8($at)
    ctx->pc = 0x17fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x17fe58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17fe5c: 0x8c222378  lw          $v0, 0x2378($at)
    ctx->pc = 0x17fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x17fe60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17fe60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17fe64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17FE64u;
    {
        const bool branch_taken_0x17fe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE64u;
            // 0x17fe68: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe64) {
            ctx->pc = 0x17FEA8u;
            goto label_17fea8;
        }
    }
    ctx->pc = 0x17FE6Cu;
    // 0x17fe6c: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FE6Cu;
    SET_GPR_U32(ctx, 31, 0x17FE74u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE74u; }
        if (ctx->pc != 0x17FE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FE74u; }
        if (ctx->pc != 0x17FE74u) { return; }
    }
    ctx->pc = 0x17FE74u;
    // 0x17fe74: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fe78: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17fe7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17fe80: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fe80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fe84: 0xac2227e8  sw          $v0, 0x27E8($at)
    ctx->pc = 0x17fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10216), GPR_U32(ctx, 2));
    // 0x17fe88: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fe88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fe8c: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17fe90: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FE90u;
    {
        const bool branch_taken_0x17fe90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FE90u;
            // 0x17fe94: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe90) {
            ctx->pc = 0x17FEA0u;
            goto label_17fea0;
        }
    }
    ctx->pc = 0x17FE98u;
    // 0x17fe98: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fe9c: 0xac2227e8  sw          $v0, 0x27E8($at)
    ctx->pc = 0x17fe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10216), GPR_U32(ctx, 2));
label_17fea0:
    // 0x17fea0: 0xc06044c  jal         func_181130
    ctx->pc = 0x17FEA0u;
    SET_GPR_U32(ctx, 31, 0x17FEA8u);
    ctx->pc = 0x181130u;
    if (runtime->hasFunction(0x181130u)) {
        auto targetFn = runtime->lookupFunction(0x181130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEA8u; }
        if (ctx->pc != 0x17FEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        paramInit_0x181130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FEA8u; }
        if (ctx->pc != 0x17FEA8u) { return; }
    }
    ctx->pc = 0x17FEA8u;
label_17fea8:
    // 0x17fea8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17fea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17feac: 0x8c2323e0  lw          $v1, 0x23E0($at)
    ctx->pc = 0x17feacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x17feb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17feb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17feb4: 0x8c222370  lw          $v0, 0x2370($at)
    ctx->pc = 0x17feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x17feb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17feb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17febc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17FEBCu;
    {
        const bool branch_taken_0x17febc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEBCu;
            // 0x17fec0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17febc) {
            ctx->pc = 0x17FF00u;
            goto label_17ff00;
        }
    }
    ctx->pc = 0x17FEC4u;
    // 0x17fec4: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FEC4u;
    SET_GPR_U32(ctx, 31, 0x17FECCu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FECCu; }
        if (ctx->pc != 0x17FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FECCu; }
        if (ctx->pc != 0x17FECCu) { return; }
    }
    ctx->pc = 0x17FECCu;
    // 0x17fecc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17feccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fed0: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17fed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17fed8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fedc: 0xac2227e8  sw          $v0, 0x27E8($at)
    ctx->pc = 0x17fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10216), GPR_U32(ctx, 2));
    // 0x17fee0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17fee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17fee4: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17fee8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x17fee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17feec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FEECu;
    {
        const bool branch_taken_0x17feec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FEECu;
            // 0x17fef0: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17feec) {
            ctx->pc = 0x17FEF8u;
            goto label_17fef8;
        }
    }
    ctx->pc = 0x17FEF4u;
    // 0x17fef4: 0xac2027e8  sw          $zero, 0x27E8($at)
    ctx->pc = 0x17fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10216), GPR_U32(ctx, 0));
label_17fef8:
    // 0x17fef8: 0xc06044c  jal         func_181130
    ctx->pc = 0x17FEF8u;
    SET_GPR_U32(ctx, 31, 0x17FF00u);
    ctx->pc = 0x181130u;
    if (runtime->hasFunction(0x181130u)) {
        auto targetFn = runtime->lookupFunction(0x181130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF00u; }
        if (ctx->pc != 0x17FF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        paramInit_0x181130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF00u; }
        if (ctx->pc != 0x17FF00u) { return; }
    }
    ctx->pc = 0x17FF00u;
label_17ff00:
    // 0x17ff00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ff04: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17ff08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ff0c: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17ff10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ff10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ff14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FF14u;
    {
        const bool branch_taken_0x17ff14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF14u;
            // 0x17ff18: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff14) {
            ctx->pc = 0x17FF38u;
            goto label_17ff38;
        }
    }
    ctx->pc = 0x17FF1Cu;
    // 0x17ff1c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17ff20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ff24: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17ff28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ff28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ff2c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17FF2Cu;
    {
        const bool branch_taken_0x17ff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff2c) {
            ctx->pc = 0x17FFA0u;
            goto label_17ffa0;
        }
    }
    ctx->pc = 0x17FF34u;
    // 0x17ff34: 0x0  nop
    ctx->pc = 0x17ff34u;
    // NOP
label_17ff38:
    // 0x17ff38: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FF38u;
    SET_GPR_U32(ctx, 31, 0x17FF40u);
    ctx->pc = 0x17FF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF38u;
            // 0x17ff3c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF40u; }
        if (ctx->pc != 0x17FF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF40u; }
        if (ctx->pc != 0x17FF40u) { return; }
    }
    ctx->pc = 0x17FF40u;
    // 0x17ff40: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ff44: 0x8c3027e8  lw          $s0, 0x27E8($at)
    ctx->pc = 0x17ff44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17ff48: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17FF48u;
    {
        const bool branch_taken_0x17ff48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF48u;
            // 0x17ff4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff48) {
            ctx->pc = 0x17FFA0u;
            goto label_17ffa0;
        }
    }
    ctx->pc = 0x17FF50u;
    // 0x17ff50: 0xc056f80  jal         func_15BE00
    ctx->pc = 0x17FF50u;
    SET_GPR_U32(ctx, 31, 0x17FF58u);
    ctx->pc = 0x17FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF50u;
            // 0x17ff54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE00u;
    if (runtime->hasFunction(0x15BE00u)) {
        auto targetFn = runtime->lookupFunction(0x15BE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF58u; }
        if (ctx->pc != 0x17FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGameMode_0x15be00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF58u; }
        if (ctx->pc != 0x17FF58u) { return; }
    }
    ctx->pc = 0x17FF58u;
    // 0x17ff58: 0xc056f78  jal         func_15BDE0
    ctx->pc = 0x17FF58u;
    SET_GPR_U32(ctx, 31, 0x17FF60u);
    ctx->pc = 0x17FF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF58u;
            // 0x17ff5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDE0u;
    if (runtime->hasFunction(0x15BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF60u; }
        if (ctx->pc != 0x17FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGameStage_0x15bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF60u; }
        if (ctx->pc != 0x17FF60u) { return; }
    }
    ctx->pc = 0x17FF60u;
    // 0x17ff60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ff60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ff64: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x17ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17ff68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FF68u;
    {
        const bool branch_taken_0x17ff68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF68u;
            // 0x17ff6c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff68) {
            ctx->pc = 0x17FF80u;
            goto label_17ff80;
        }
    }
    ctx->pc = 0x17FF70u;
    // 0x17ff70: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x17ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17ff74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FF74u;
    {
        const bool branch_taken_0x17ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff74) {
            ctx->pc = 0x17FF90u;
            goto label_17ff90;
        }
    }
    ctx->pc = 0x17FF7Cu;
    // 0x17ff7c: 0x0  nop
    ctx->pc = 0x17ff7cu;
    // NOP
label_17ff80:
    // 0x17ff80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ff84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ff88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17FF88u;
    {
        const bool branch_taken_0x17ff88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF88u;
            // 0x17ff8c: 0xac223530  sw          $v0, 0x3530($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff88) {
            ctx->pc = 0x17FFA0u;
            goto label_17ffa0;
        }
    }
    ctx->pc = 0x17FF90u;
label_17ff90:
    // 0x17ff90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ff94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ff94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ff98: 0xac223534  sw          $v0, 0x3534($at)
    ctx->pc = 0x17ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13620), GPR_U32(ctx, 2));
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
label_17ffa0:
    // 0x17ffa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ffa4: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17ffa8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ffac: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17ffb0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ffb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ffb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FFB4u;
    {
        const bool branch_taken_0x17ffb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFB4u;
            // 0x17ffb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffb4) {
            ctx->pc = 0x17FFD0u;
            goto label_17ffd0;
        }
    }
    ctx->pc = 0x17FFBCu;
    // 0x17ffbc: 0xc05d110  jal         func_174440
    ctx->pc = 0x17FFBCu;
    SET_GPR_U32(ctx, 31, 0x17FFC4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFC4u; }
        if (ctx->pc != 0x17FFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFC4u; }
        if (ctx->pc != 0x17FFC4u) { return; }
    }
    ctx->pc = 0x17FFC4u;
    // 0x17ffc4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x17ffc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ffc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17ffc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffcc: 0x0  nop
    ctx->pc = 0x17ffccu;
    // NOP
label_17ffd0:
    // 0x17ffd0: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x17ffd0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x17ffd4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17ffd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffd8: 0x2673a170  addiu       $s3, $s3, -0x5E90
    ctx->pc = 0x17ffd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943088));
    // 0x17ffdc: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x17ffdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_17ffe0:
    // 0x17ffe0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ffe4: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17ffe8: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17FFE8u;
    {
        const bool branch_taken_0x17ffe8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFE8u;
            // 0x17ffec: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffe8) {
            ctx->pc = 0x180020u;
            goto label_180020;
        }
    }
    ctx->pc = 0x17FFF0u;
    // 0x17fff0: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17fff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17fff4: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17fff4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17fff8: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17fffc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17fffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x180000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180004: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x180004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x180008: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x180008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18000c: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x18000Cu;
    SET_GPR_U32(ctx, 31, 0x180014u);
    ctx->pc = 0x180010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18000Cu;
            // 0x180010: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180014u; }
        if (ctx->pc != 0x180014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180014u; }
        if (ctx->pc != 0x180014u) { return; }
    }
    ctx->pc = 0x180014u;
    // 0x180014: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x180014u;
    {
        const bool branch_taken_0x180014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180014) {
            ctx->pc = 0x180048u;
            goto label_180048;
        }
    }
    ctx->pc = 0x18001Cu;
    // 0x18001c: 0x0  nop
    ctx->pc = 0x18001cu;
    // NOP
label_180020:
    // 0x180020: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180024: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x180024u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x180028: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x180028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x18002c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x18002cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x180030: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x180034: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180038: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x180038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18003c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x18003cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x180040: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x180040u;
    SET_GPR_U32(ctx, 31, 0x180048u);
    ctx->pc = 0x180044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180040u;
            // 0x180044: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180048u; }
        if (ctx->pc != 0x180048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180048u; }
        if (ctx->pc != 0x180048u) { return; }
    }
    ctx->pc = 0x180048u;
label_180048:
    // 0x180048: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x180048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18004c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x18004cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x180050: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x180050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x180054: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x180054u;
    {
        const bool branch_taken_0x180054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180054u;
            // 0x180058: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180054) {
            ctx->pc = 0x17FFE0u;
            goto label_17ffe0;
        }
    }
    ctx->pc = 0x18005Cu;
    // 0x18005c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180060: 0xc060368  jal         func_180DA0
    ctx->pc = 0x180060u;
    SET_GPR_U32(ctx, 31, 0x180068u);
    ctx->pc = 0x180064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180060u;
            // 0x180064: 0x8c2427e8  lw          $a0, 0x27E8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DA0u;
    if (runtime->hasFunction(0x180DA0u)) {
        auto targetFn = runtime->lookupFunction(0x180DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180068u; }
        if (ctx->pc != 0x180068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw_0x180da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180068u; }
        if (ctx->pc != 0x180068u) { return; }
    }
    ctx->pc = 0x180068u;
    // 0x180068: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x180068u;
    SET_GPR_U32(ctx, 31, 0x180070u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180070u; }
        if (ctx->pc != 0x180070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180070u; }
        if (ctx->pc != 0x180070u) { return; }
    }
    ctx->pc = 0x180070u;
    // 0x180070: 0x1620ff69  bnez        $s1, . + 4 + (-0x97 << 2)
    ctx->pc = 0x180070u;
    {
        const bool branch_taken_0x180070 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x180070) {
            ctx->pc = 0x17FE18u;
            goto label_17fe18;
        }
    }
    ctx->pc = 0x180078u;
label_180078:
    // 0x180078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18007c: 0x12020034  beq         $s0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x18007Cu;
    {
        const bool branch_taken_0x18007c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x180080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18007Cu;
            // 0x180080: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18007c) {
            ctx->pc = 0x180150u;
            goto label_180150;
        }
    }
    ctx->pc = 0x180084u;
    // 0x180084: 0x1202002e  beq         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x180084u;
    {
        const bool branch_taken_0x180084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x180084) {
            ctx->pc = 0x180140u;
            goto label_180140;
        }
    }
    ctx->pc = 0x18008Cu;
    // 0x18008c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18008cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180090: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x180090u;
    {
        const bool branch_taken_0x180090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x180094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180090u;
            // 0x180094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180090) {
            ctx->pc = 0x180128u;
            goto label_180128;
        }
    }
    ctx->pc = 0x180098u;
    // 0x180098: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180098u;
    {
        const bool branch_taken_0x180098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x180098) {
            ctx->pc = 0x1800A8u;
            goto label_1800a8;
        }
    }
    ctx->pc = 0x1800A0u;
    // 0x1800a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1800A0u;
    {
        const bool branch_taken_0x1800a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1800a0) {
            ctx->pc = 0x180168u;
            goto label_180168;
        }
    }
    ctx->pc = 0x1800A8u;
label_1800a8:
    // 0x1800a8: 0xc05fe38  jal         func_17F8E0
    ctx->pc = 0x1800A8u;
    SET_GPR_U32(ctx, 31, 0x1800B0u);
    ctx->pc = 0x17F8E0u;
    if (runtime->hasFunction(0x17F8E0u)) {
        auto targetFn = runtime->lookupFunction(0x17F8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B0u; }
        if (ctx->pc != 0x1800B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PracticeMain_0x17f8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800B0u; }
        if (ctx->pc != 0x1800B0u) { return; }
    }
    ctx->pc = 0x1800B0u;
    // 0x1800b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1800b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1800b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1800b8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1800B8u;
    {
        const bool branch_taken_0x1800b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1800BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1800B8u;
            // 0x1800bc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800b8) {
            ctx->pc = 0x1800C8u;
            goto label_1800c8;
        }
    }
    ctx->pc = 0x1800C0u;
    // 0x1800c0: 0x1000ff51  b           . + 4 + (-0xAF << 2)
    ctx->pc = 0x1800C0u;
    {
        const bool branch_taken_0x1800c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1800c0) {
            ctx->pc = 0x17FE08u;
            goto label_17fe08;
        }
    }
    ctx->pc = 0x1800C8u;
label_1800c8:
    // 0x1800c8: 0xc056f78  jal         func_15BDE0
    ctx->pc = 0x1800C8u;
    SET_GPR_U32(ctx, 31, 0x1800D0u);
    ctx->pc = 0x1800CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800C8u;
            // 0x1800cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDE0u;
    if (runtime->hasFunction(0x15BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D0u; }
        if (ctx->pc != 0x1800D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGameStage_0x15bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D0u; }
        if (ctx->pc != 0x1800D0u) { return; }
    }
    ctx->pc = 0x1800D0u;
    // 0x1800d0: 0xc056f80  jal         func_15BE00
    ctx->pc = 0x1800D0u;
    SET_GPR_U32(ctx, 31, 0x1800D8u);
    ctx->pc = 0x1800D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1800D0u;
            // 0x1800d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE00u;
    if (runtime->hasFunction(0x15BE00u)) {
        auto targetFn = runtime->lookupFunction(0x15BE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D8u; }
        if (ctx->pc != 0x1800D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGameMode_0x15be00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1800D8u; }
        if (ctx->pc != 0x1800D8u) { return; }
    }
    ctx->pc = 0x1800D8u;
    // 0x1800d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1800dc: 0x8c222418  lw          $v0, 0x2418($at)
    ctx->pc = 0x1800dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1800e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1800E0u;
    {
        const bool branch_taken_0x1800e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1800E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1800E0u;
            // 0x1800e4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800e0) {
            ctx->pc = 0x1800F8u;
            goto label_1800f8;
        }
    }
    ctx->pc = 0x1800E8u;
    // 0x1800e8: 0x8c222408  lw          $v0, 0x2408($at)
    ctx->pc = 0x1800e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x1800ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1800ECu;
    {
        const bool branch_taken_0x1800ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1800ec) {
            ctx->pc = 0x180108u;
            goto label_180108;
        }
    }
    ctx->pc = 0x1800F4u;
    // 0x1800f4: 0x0  nop
    ctx->pc = 0x1800f4u;
    // NOP
label_1800f8:
    // 0x1800f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1800f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1800fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1800fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x180100: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x180100u;
    {
        const bool branch_taken_0x180100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180100u;
            // 0x180104: 0xac223530  sw          $v0, 0x3530($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180100) {
            ctx->pc = 0x180118u;
            goto label_180118;
        }
    }
    ctx->pc = 0x180108u;
label_180108:
    // 0x180108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18010c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18010cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x180110: 0xac223534  sw          $v0, 0x3534($at)
    ctx->pc = 0x180110u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13620), GPR_U32(ctx, 2));
    // 0x180114: 0x0  nop
    ctx->pc = 0x180114u;
    // NOP
label_180118:
    // 0x180118: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18011c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18011Cu;
    {
        const bool branch_taken_0x18011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18011Cu;
            // 0x180120: 0x8c3027e8  lw          $s0, 0x27E8($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18011c) {
            ctx->pc = 0x180168u;
            goto label_180168;
        }
    }
    ctx->pc = 0x180124u;
    // 0x180124: 0x0  nop
    ctx->pc = 0x180124u;
    // NOP
label_180128:
    // 0x180128: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18012c: 0xc05f3f0  jal         func_17CFC0
    ctx->pc = 0x18012Cu;
    SET_GPR_U32(ctx, 31, 0x180134u);
    ctx->pc = 0x180130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18012Cu;
            // 0x180130: 0xac2027f8  sw          $zero, 0x27F8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CFC0u;
    if (runtime->hasFunction(0x17CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x17CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180134u; }
        if (ctx->pc != 0x180134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveLoadMain_0x17cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180134u; }
        if (ctx->pc != 0x180134u) { return; }
    }
    ctx->pc = 0x180134u;
    // 0x180134: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x180134u;
    {
        const bool branch_taken_0x180134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180134u;
            // 0x180138: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180134) {
            ctx->pc = 0x17FE08u;
            goto label_17fe08;
        }
    }
    ctx->pc = 0x18013Cu;
    // 0x18013c: 0x0  nop
    ctx->pc = 0x18013cu;
    // NOP
label_180140:
    // 0x180140: 0xc05f548  jal         func_17D520
    ctx->pc = 0x180140u;
    SET_GPR_U32(ctx, 31, 0x180148u);
    ctx->pc = 0x17D520u;
    if (runtime->hasFunction(0x17D520u)) {
        auto targetFn = runtime->lookupFunction(0x17D520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180148u; }
        if (ctx->pc != 0x180148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RankingMain_0x17d520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180148u; }
        if (ctx->pc != 0x180148u) { return; }
    }
    ctx->pc = 0x180148u;
    // 0x180148: 0x1000ff2f  b           . + 4 + (-0xD1 << 2)
    ctx->pc = 0x180148u;
    {
        const bool branch_taken_0x180148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18014Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180148u;
            // 0x18014c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180148) {
            ctx->pc = 0x17FE08u;
            goto label_17fe08;
        }
    }
    ctx->pc = 0x180150u;
label_180150:
    // 0x180150: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x180150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180154: 0xc05fb28  jal         func_17ECA0
    ctx->pc = 0x180154u;
    SET_GPR_U32(ctx, 31, 0x18015Cu);
    ctx->pc = 0x180158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180154u;
            // 0x180158: 0xac2027f0  sw          $zero, 0x27F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECA0u;
    if (runtime->hasFunction(0x17ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18015Cu; }
        if (ctx->pc != 0x18015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConfigMain_0x17eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18015Cu; }
        if (ctx->pc != 0x18015Cu) { return; }
    }
    ctx->pc = 0x18015Cu;
    // 0x18015c: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x18015Cu;
    {
        const bool branch_taken_0x18015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18015Cu;
            // 0x180160: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18015c) {
            ctx->pc = 0x17FE08u;
            goto label_17fe08;
        }
    }
    ctx->pc = 0x180164u;
    // 0x180164: 0x0  nop
    ctx->pc = 0x180164u;
    // NOP
label_180168:
    // 0x180168: 0xc060718  jal         func_181C60
    ctx->pc = 0x180168u;
    SET_GPR_U32(ctx, 31, 0x180170u);
    ctx->pc = 0x18016Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180168u;
            // 0x18016c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180170u; }
        if (ctx->pc != 0x180170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180170u; }
        if (ctx->pc != 0x180170u) { return; }
    }
    ctx->pc = 0x180170u;
    // 0x180170: 0xc0607cc  jal         func_181F30
    ctx->pc = 0x180170u;
    SET_GPR_U32(ctx, 31, 0x180178u);
    ctx->pc = 0x181F30u;
    if (runtime->hasFunction(0x181F30u)) {
        auto targetFn = runtime->lookupFunction(0x181F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180178u; }
        if (ctx->pc != 0x180178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFadeing_0x181f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180178u; }
        if (ctx->pc != 0x180178u) { return; }
    }
    ctx->pc = 0x180178u;
    // 0x180178: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x180178u;
    {
        const bool branch_taken_0x180178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180178) {
            ctx->pc = 0x180250u;
            goto label_180250;
        }
    }
    ctx->pc = 0x180180u;
label_180180:
    // 0x180180: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x180180u;
    SET_GPR_U32(ctx, 31, 0x180188u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180188u; }
        if (ctx->pc != 0x180188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180188u; }
        if (ctx->pc != 0x180188u) { return; }
    }
    ctx->pc = 0x180188u;
    // 0x180188: 0xc06069c  jal         func_181A70
    ctx->pc = 0x180188u;
    SET_GPR_U32(ctx, 31, 0x180190u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180190u; }
        if (ctx->pc != 0x180190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180190u; }
        if (ctx->pc != 0x180190u) { return; }
    }
    ctx->pc = 0x180190u;
    // 0x180190: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x180190u;
    SET_GPR_U32(ctx, 31, 0x180198u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180198u; }
        if (ctx->pc != 0x180198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180198u; }
        if (ctx->pc != 0x180198u) { return; }
    }
    ctx->pc = 0x180198u;
    // 0x180198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18019c: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x18019Cu;
    {
        const bool branch_taken_0x18019c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1801A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18019Cu;
            // 0x1801a0: 0x3c130022  lui         $s3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18019c) {
            ctx->pc = 0x180238u;
            goto label_180238;
        }
    }
    ctx->pc = 0x1801A4u;
    // 0x1801a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1801a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801a8: 0x2673a170  addiu       $s3, $s3, -0x5E90
    ctx->pc = 0x1801a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943088));
    // 0x1801ac: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_1801b0:
    // 0x1801b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1801b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1801b4: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x1801b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x1801b8: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1801B8u;
    {
        const bool branch_taken_0x1801b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1801BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1801B8u;
            // 0x1801bc: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801b8) {
            ctx->pc = 0x1801F0u;
            goto label_1801f0;
        }
    }
    ctx->pc = 0x1801C0u;
    // 0x1801c0: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1801c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1801c4: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x1801c4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x1801c8: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1801cc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1801ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1801d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1801d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801d4: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1801d8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1801d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801dc: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x1801DCu;
    SET_GPR_U32(ctx, 31, 0x1801E4u);
    ctx->pc = 0x1801E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1801DCu;
            // 0x1801e0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1801E4u; }
        if (ctx->pc != 0x1801E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1801E4u; }
        if (ctx->pc != 0x1801E4u) { return; }
    }
    ctx->pc = 0x1801E4u;
    // 0x1801e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1801E4u;
    {
        const bool branch_taken_0x1801e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1801e4) {
            ctx->pc = 0x180218u;
            goto label_180218;
        }
    }
    ctx->pc = 0x1801ECu;
    // 0x1801ec: 0x0  nop
    ctx->pc = 0x1801ecu;
    // NOP
label_1801f0:
    // 0x1801f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1801f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1801f4: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x1801f4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x1801f8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1801fc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1801fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x180200: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x180200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x180204: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x180204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180208: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18020c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x180210: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x180210u;
    SET_GPR_U32(ctx, 31, 0x180218u);
    ctx->pc = 0x180214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180210u;
            // 0x180214: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180218u; }
        if (ctx->pc != 0x180218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180218u; }
        if (ctx->pc != 0x180218u) { return; }
    }
    ctx->pc = 0x180218u;
label_180218:
    // 0x180218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18021c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x18021cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x180220: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x180220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x180224: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x180224u;
    {
        const bool branch_taken_0x180224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180224u;
            // 0x180228: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180224) {
            ctx->pc = 0x1801B0u;
            goto label_1801b0;
        }
    }
    ctx->pc = 0x18022Cu;
    // 0x18022c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x180230: 0xc060368  jal         func_180DA0
    ctx->pc = 0x180230u;
    SET_GPR_U32(ctx, 31, 0x180238u);
    ctx->pc = 0x180234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180230u;
            // 0x180234: 0x8c2427e8  lw          $a0, 0x27E8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180DA0u;
    if (runtime->hasFunction(0x180DA0u)) {
        auto targetFn = runtime->lookupFunction(0x180DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180238u; }
        if (ctx->pc != 0x180238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw_0x180da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180238u; }
        if (ctx->pc != 0x180238u) { return; }
    }
    ctx->pc = 0x180238u;
label_180238:
    // 0x180238: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x180238u;
    SET_GPR_U32(ctx, 31, 0x180240u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180240u; }
        if (ctx->pc != 0x180240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180240u; }
        if (ctx->pc != 0x180240u) { return; }
    }
    ctx->pc = 0x180240u;
    // 0x180240: 0xc0607cc  jal         func_181F30
    ctx->pc = 0x180240u;
    SET_GPR_U32(ctx, 31, 0x180248u);
    ctx->pc = 0x181F30u;
    if (runtime->hasFunction(0x181F30u)) {
        auto targetFn = runtime->lookupFunction(0x181F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180248u; }
        if (ctx->pc != 0x180248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFadeing_0x181f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180248u; }
        if (ctx->pc != 0x180248u) { return; }
    }
    ctx->pc = 0x180248u;
    // 0x180248: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x180248u;
    {
        const bool branch_taken_0x180248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180248) {
            ctx->pc = 0x180180u;
            goto label_180180;
        }
    }
    ctx->pc = 0x180250u;
label_180250:
    // 0x180250: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x180250u;
    SET_GPR_U32(ctx, 31, 0x180258u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180258u; }
        if (ctx->pc != 0x180258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180258u; }
        if (ctx->pc != 0x180258u) { return; }
    }
    ctx->pc = 0x180258u;
    // 0x180258: 0xc06069c  jal         func_181A70
    ctx->pc = 0x180258u;
    SET_GPR_U32(ctx, 31, 0x180260u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180260u; }
        if (ctx->pc != 0x180260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180260u; }
        if (ctx->pc != 0x180260u) { return; }
    }
    ctx->pc = 0x180260u;
    // 0x180260: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x180260u;
    SET_GPR_U32(ctx, 31, 0x180268u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180268u; }
        if (ctx->pc != 0x180268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180268u; }
        if (ctx->pc != 0x180268u) { return; }
    }
    ctx->pc = 0x180268u;
    // 0x180268: 0xc05cff0  jal         func_173FC0
    ctx->pc = 0x180268u;
    SET_GPR_U32(ctx, 31, 0x180270u);
    ctx->pc = 0x173FC0u;
    if (runtime->hasFunction(0x173FC0u)) {
        auto targetFn = runtime->lookupFunction(0x173FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180270u; }
        if (ctx->pc != 0x180270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stop_bgm_0x173fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180270u; }
        if (ctx->pc != 0x180270u) { return; }
    }
    ctx->pc = 0x180270u;
    // 0x180270: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x180270u;
    SET_GPR_U32(ctx, 31, 0x180278u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180278u; }
        if (ctx->pc != 0x180278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180278u; }
        if (ctx->pc != 0x180278u) { return; }
    }
    ctx->pc = 0x180278u;
    // 0x180278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18027c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180280: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x180280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180284: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x180284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18028c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18028cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180294: 0x3e00008  jr          $ra
    ctx->pc = 0x180294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180294u;
            // 0x180298: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FE08u: goto label_17fe08;
            case 0x17FE18u: goto label_17fe18;
            case 0x17FE50u: goto label_17fe50;
            case 0x17FEA0u: goto label_17fea0;
            case 0x17FEA8u: goto label_17fea8;
            case 0x17FEF8u: goto label_17fef8;
            case 0x17FF00u: goto label_17ff00;
            case 0x17FF38u: goto label_17ff38;
            case 0x17FF80u: goto label_17ff80;
            case 0x17FF90u: goto label_17ff90;
            case 0x17FFA0u: goto label_17ffa0;
            case 0x17FFD0u: goto label_17ffd0;
            case 0x17FFE0u: goto label_17ffe0;
            case 0x180020u: goto label_180020;
            case 0x180048u: goto label_180048;
            case 0x180078u: goto label_180078;
            case 0x1800A8u: goto label_1800a8;
            case 0x1800C8u: goto label_1800c8;
            case 0x1800F8u: goto label_1800f8;
            case 0x180108u: goto label_180108;
            case 0x180118u: goto label_180118;
            case 0x180128u: goto label_180128;
            case 0x180140u: goto label_180140;
            case 0x180150u: goto label_180150;
            case 0x180168u: goto label_180168;
            case 0x180180u: goto label_180180;
            case 0x1801B0u: goto label_1801b0;
            case 0x1801F0u: goto label_1801f0;
            case 0x180218u: goto label_180218;
            case 0x180238u: goto label_180238;
            case 0x180250u: goto label_180250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18029Cu;
}
