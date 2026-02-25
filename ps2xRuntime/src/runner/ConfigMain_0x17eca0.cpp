#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ConfigMain
// Address: 0x17eca0 - 0x17f8d8
void ConfigMain_0x17eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ConfigMain_0x17eca0");
#endif

    ctx->pc = 0x17eca0u;

    // 0x17eca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17eca4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x17eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x17eca8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17ecac: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x17ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x17ecb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ecb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ecb4: 0x24842820  addiu       $a0, $a0, 0x2820
    ctx->pc = 0x17ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    // 0x17ecb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ecbc: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x17ecc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ecc4: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x17ecc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17eccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ecd0: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x17ECD0u;
    SET_GPR_U32(ctx, 31, 0x17ECD8u);
    ctx->pc = 0x17ECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECD0u;
            // 0x17ecd4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECD8u; }
        if (ctx->pc != 0x17ECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECD8u; }
        if (ctx->pc != 0x17ECD8u) { return; }
    }
    ctx->pc = 0x17ECD8u;
label_17ecd8:
    // 0x17ecd8: 0xc060440  jal         func_181100
    ctx->pc = 0x17ECD8u;
    SET_GPR_U32(ctx, 31, 0x17ECE0u);
    ctx->pc = 0x181100u;
    if (runtime->hasFunction(0x181100u)) {
        auto targetFn = runtime->lookupFunction(0x181100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECE0u; }
        if (ctx->pc != 0x17ECE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        config_paramInit_0x181100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECE0u; }
        if (ctx->pc != 0x17ECE0u) { return; }
    }
    ctx->pc = 0x17ECE0u;
    // 0x17ece0: 0x122002d9  beqz        $s1, . + 4 + (0x2D9 << 2)
    ctx->pc = 0x17ECE0u;
    {
        const bool branch_taken_0x17ece0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ece0) {
            ctx->pc = 0x17F848u;
            goto label_17f848;
        }
    }
    ctx->pc = 0x17ECE8u;
label_17ece8:
    // 0x17ece8: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x17ECE8u;
    SET_GPR_U32(ctx, 31, 0x17ECF0u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECF0u; }
        if (ctx->pc != 0x17ECF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECF0u; }
        if (ctx->pc != 0x17ECF0u) { return; }
    }
    ctx->pc = 0x17ECF0u;
    // 0x17ecf0: 0xc06069c  jal         func_181A70
    ctx->pc = 0x17ECF0u;
    SET_GPR_U32(ctx, 31, 0x17ECF8u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECF8u; }
        if (ctx->pc != 0x17ECF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECF8u; }
        if (ctx->pc != 0x17ECF8u) { return; }
    }
    ctx->pc = 0x17ECF8u;
    // 0x17ecf8: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x17ECF8u;
    SET_GPR_U32(ctx, 31, 0x17ED00u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED00u; }
        if (ctx->pc != 0x17ED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED00u; }
        if (ctx->pc != 0x17ED00u) { return; }
    }
    ctx->pc = 0x17ED00u;
    // 0x17ed00: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed04: 0x90223c90  lbu         $v0, 0x3C90($at)
    ctx->pc = 0x17ed04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17ed08: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ED08u;
    {
        const bool branch_taken_0x17ed08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17ed08) {
            ctx->pc = 0x17ED20u;
            goto label_17ed20;
        }
    }
    ctx->pc = 0x17ED10u;
    // 0x17ed10: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17ed14: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed18: 0xa0223c90  sb          $v0, 0x3C90($at)
    ctx->pc = 0x17ed18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ed1c: 0x0  nop
    ctx->pc = 0x17ed1cu;
    // NOP
label_17ed20:
    // 0x17ed20: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed24: 0x90223c80  lbu         $v0, 0x3C80($at)
    ctx->pc = 0x17ed24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17ed28: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17ED28u;
    {
        const bool branch_taken_0x17ed28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17ed28) {
            ctx->pc = 0x17ED40u;
            goto label_17ed40;
        }
    }
    ctx->pc = 0x17ED30u;
    // 0x17ed30: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17ed34: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed38: 0xa0223c80  sb          $v0, 0x3C80($at)
    ctx->pc = 0x17ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15488), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ed3c: 0x0  nop
    ctx->pc = 0x17ed3cu;
    // NOP
label_17ed40:
    // 0x17ed40: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed44: 0x90223c88  lbu         $v0, 0x3C88($at)
    ctx->pc = 0x17ed44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17ed48: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x17ed48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17ed4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ED4Cu;
    {
        const bool branch_taken_0x17ed4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed4c) {
            ctx->pc = 0x17ED60u;
            goto label_17ed60;
        }
    }
    ctx->pc = 0x17ED54u;
    // 0x17ed54: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17ed58: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed5c: 0xa0223c88  sb          $v0, 0x3C88($at)
    ctx->pc = 0x17ed5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15496), (uint8_t)GPR_U32(ctx, 2));
label_17ed60:
    // 0x17ed60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ed64: 0x8c2323e8  lw          $v1, 0x23E8($at)
    ctx->pc = 0x17ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x17ed68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ed6c: 0x8c222378  lw          $v0, 0x2378($at)
    ctx->pc = 0x17ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x17ed70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ed70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ed74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17ED74u;
    {
        const bool branch_taken_0x17ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED74u;
            // 0x17ed78: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed74) {
            ctx->pc = 0x17EDB8u;
            goto label_17edb8;
        }
    }
    ctx->pc = 0x17ED7Cu;
    // 0x17ed7c: 0xc05d110  jal         func_174440
    ctx->pc = 0x17ED7Cu;
    SET_GPR_U32(ctx, 31, 0x17ED84u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED84u; }
        if (ctx->pc != 0x17ED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED84u; }
        if (ctx->pc != 0x17ED84u) { return; }
    }
    ctx->pc = 0x17ED84u;
    // 0x17ed84: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed88: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17ed8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17ed90: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed94: 0xac2227f0  sw          $v0, 0x27F0($at)
    ctx->pc = 0x17ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10224), GPR_U32(ctx, 2));
    // 0x17ed98: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ed98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ed9c: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17eda0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDA0u;
    {
        const bool branch_taken_0x17eda0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17EDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDA0u;
            // 0x17eda4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eda0) {
            ctx->pc = 0x17EDB0u;
            goto label_17edb0;
        }
    }
    ctx->pc = 0x17EDA8u;
    // 0x17eda8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17edac: 0xac2227f0  sw          $v0, 0x27F0($at)
    ctx->pc = 0x17edacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10224), GPR_U32(ctx, 2));
label_17edb0:
    // 0x17edb0: 0xc060440  jal         func_181100
    ctx->pc = 0x17EDB0u;
    SET_GPR_U32(ctx, 31, 0x17EDB8u);
    ctx->pc = 0x181100u;
    if (runtime->hasFunction(0x181100u)) {
        auto targetFn = runtime->lookupFunction(0x181100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDB8u; }
        if (ctx->pc != 0x17EDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        config_paramInit_0x181100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDB8u; }
        if (ctx->pc != 0x17EDB8u) { return; }
    }
    ctx->pc = 0x17EDB8u;
label_17edb8:
    // 0x17edb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17edb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17edbc: 0x8c2323e0  lw          $v1, 0x23E0($at)
    ctx->pc = 0x17edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x17edc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17edc4: 0x8c222370  lw          $v0, 0x2370($at)
    ctx->pc = 0x17edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x17edc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17edc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17edcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17EDCCu;
    {
        const bool branch_taken_0x17edcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDCCu;
            // 0x17edd0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edcc) {
            ctx->pc = 0x17EE10u;
            goto label_17ee10;
        }
    }
    ctx->pc = 0x17EDD4u;
    // 0x17edd4: 0xc05d110  jal         func_174440
    ctx->pc = 0x17EDD4u;
    SET_GPR_U32(ctx, 31, 0x17EDDCu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDDCu; }
        if (ctx->pc != 0x17EDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDDCu; }
        if (ctx->pc != 0x17EDDCu) { return; }
    }
    ctx->pc = 0x17EDDCu;
    // 0x17eddc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17eddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ede0: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17ede4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17ede8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ede8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17edec: 0xac2227f0  sw          $v0, 0x27F0($at)
    ctx->pc = 0x17edecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10224), GPR_U32(ctx, 2));
    // 0x17edf0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17edf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17edf4: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17edf8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x17edf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17edfc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17EDFCu;
    {
        const bool branch_taken_0x17edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDFCu;
            // 0x17ee00: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edfc) {
            ctx->pc = 0x17EE08u;
            goto label_17ee08;
        }
    }
    ctx->pc = 0x17EE04u;
    // 0x17ee04: 0xac2027f0  sw          $zero, 0x27F0($at)
    ctx->pc = 0x17ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10224), GPR_U32(ctx, 0));
label_17ee08:
    // 0x17ee08: 0xc060440  jal         func_181100
    ctx->pc = 0x17EE08u;
    SET_GPR_U32(ctx, 31, 0x17EE10u);
    ctx->pc = 0x181100u;
    if (runtime->hasFunction(0x181100u)) {
        auto targetFn = runtime->lookupFunction(0x181100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE10u; }
        if (ctx->pc != 0x17EE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        config_paramInit_0x181100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE10u; }
        if (ctx->pc != 0x17EE10u) { return; }
    }
    ctx->pc = 0x17EE10u;
label_17ee10:
    // 0x17ee10: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17ee10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17ee14: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17ee18: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x17ee18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17ee1c: 0x10200110  beqz        $at, . + 4 + (0x110 << 2)
    ctx->pc = 0x17EE1Cu;
    {
        const bool branch_taken_0x17ee1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE1Cu;
            // 0x17ee20: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee1c) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EE24u;
    // 0x17ee24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ee28: 0x24632020  addiu       $v1, $v1, 0x2020
    ctx->pc = 0x17ee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8224));
    // 0x17ee2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ee30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ee34: 0x400008  jr          $v0
    ctx->pc = 0x17EE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17EE40u: goto label_17ee40;
            case 0x17EEB8u: goto label_17eeb8;
            case 0x17EF90u: goto label_17ef90;
            case 0x17F088u: goto label_17f088;
            case 0x17F100u: goto label_17f100;
            case 0x17F178u: goto label_17f178;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F218u: goto label_17f218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17EE3Cu;
    // 0x17ee3c: 0x0  nop
    ctx->pc = 0x17ee3cu;
    // NOP
label_17ee40:
    // 0x17ee40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ee44: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x17ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x17ee48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ee48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ee4c: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x17ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x17ee50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ee50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ee54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EE54u;
    {
        const bool branch_taken_0x17ee54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE54u;
            // 0x17ee58: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee54) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EE5Cu;
    // 0x17ee5c: 0x8c221614  lw          $v0, 0x1614($at)
    ctx->pc = 0x17ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5652)));
    // 0x17ee60: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EE60u;
    {
        const bool branch_taken_0x17ee60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17ee60) {
            ctx->pc = 0x17EE78u;
            goto label_17ee78;
        }
    }
    ctx->pc = 0x17EE68u;
    // 0x17ee68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17ee6c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17ee6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17ee70: 0xac221614  sw          $v0, 0x1614($at)
    ctx->pc = 0x17ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5652), GPR_U32(ctx, 2));
    // 0x17ee74: 0x0  nop
    ctx->pc = 0x17ee74u;
    // NOP
label_17ee78:
    // 0x17ee78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ee78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ee7c: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x17ee80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ee80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ee84: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x17ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x17ee88: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ee88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ee8c: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x17EE8Cu;
    {
        const bool branch_taken_0x17ee8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE8Cu;
            // 0x17ee90: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee8c) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EE94u;
    // 0x17ee94: 0x8c221614  lw          $v0, 0x1614($at)
    ctx->pc = 0x17ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5652)));
    // 0x17ee98: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x17ee98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17ee9c: 0x102000f0  beqz        $at, . + 4 + (0xF0 << 2)
    ctx->pc = 0x17EE9Cu;
    {
        const bool branch_taken_0x17ee9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ee9c) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EEA4u;
    // 0x17eea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17eea8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17eeac: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x17EEACu;
    {
        const bool branch_taken_0x17eeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEACu;
            // 0x17eeb0: 0xac221614  sw          $v0, 0x1614($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eeac) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EEB4u;
    // 0x17eeb4: 0x0  nop
    ctx->pc = 0x17eeb4u;
    // NOP
label_17eeb8:
    // 0x17eeb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17eeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17eebc: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x17eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x17eec0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17eec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17eec4: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x17eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x17eec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17eec8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17eecc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17EECCu;
    {
        const bool branch_taken_0x17eecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EECCu;
            // 0x17eed0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eecc) {
            ctx->pc = 0x17EF20u;
            goto label_17ef20;
        }
    }
    ctx->pc = 0x17EED4u;
    // 0x17eed4: 0x8c22182c  lw          $v0, 0x182C($at)
    ctx->pc = 0x17eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6188)));
    // 0x17eed8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17EED8u;
    {
        const bool branch_taken_0x17eed8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17EEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EED8u;
            // 0x17eedc: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eed8) {
            ctx->pc = 0x17EF20u;
            goto label_17ef20;
        }
    }
    ctx->pc = 0x17EEE0u;
    // 0x17eee0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17eee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17eee4: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x17eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x17eee8: 0xac23182c  sw          $v1, 0x182C($at)
    ctx->pc = 0x17eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6188), GPR_U32(ctx, 3));
    // 0x17eeec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17eeecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17eef0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17eef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17eef4: 0xc05d080  jal         func_174200
    ctx->pc = 0x17EEF4u;
    SET_GPR_U32(ctx, 31, 0x17EEFCu);
    ctx->pc = 0x17EEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEF4u;
            // 0x17eef8: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEFCu; }
        if (ctx->pc != 0x17EEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEFCu; }
        if (ctx->pc != 0x17EEFCu) { return; }
    }
    ctx->pc = 0x17EEFCu;
    // 0x17eefc: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x17eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x17ef00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17ef00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ef04: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17ef04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17ef08: 0xc05d080  jal         func_174200
    ctx->pc = 0x17EF08u;
    SET_GPR_U32(ctx, 31, 0x17EF10u);
    ctx->pc = 0x17EF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF08u;
            // 0x17ef0c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        if (ctx->pc != 0x17EF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF10u; }
        if (ctx->pc != 0x17EF10u) { return; }
    }
    ctx->pc = 0x17EF10u;
    // 0x17ef10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17ef10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ef14: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x17ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x17ef18: 0xc05d080  jal         func_174200
    ctx->pc = 0x17EF18u;
    SET_GPR_U32(ctx, 31, 0x17EF20u);
    ctx->pc = 0x17EF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF18u;
            // 0x17ef1c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF20u; }
        if (ctx->pc != 0x17EF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF20u; }
        if (ctx->pc != 0x17EF20u) { return; }
    }
    ctx->pc = 0x17EF20u;
label_17ef20:
    // 0x17ef20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ef20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ef24: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x17ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x17ef28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ef28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ef2c: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x17ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x17ef30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17ef30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17ef34: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x17EF34u;
    {
        const bool branch_taken_0x17ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF34u;
            // 0x17ef38: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef34) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EF3Cu;
    // 0x17ef3c: 0x8c22182c  lw          $v0, 0x182C($at)
    ctx->pc = 0x17ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6188)));
    // 0x17ef40: 0x1c4000c7  bgtz        $v0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x17EF40u;
    {
        const bool branch_taken_0x17ef40 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17EF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF40u;
            // 0x17ef44: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef40) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EF48u;
    // 0x17ef48: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17ef48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17ef4c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x17ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x17ef50: 0xac23182c  sw          $v1, 0x182C($at)
    ctx->pc = 0x17ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6188), GPR_U32(ctx, 3));
    // 0x17ef54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17ef54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ef58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17ef58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17ef5c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17EF5Cu;
    SET_GPR_U32(ctx, 31, 0x17EF64u);
    ctx->pc = 0x17EF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF5Cu;
            // 0x17ef60: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF64u; }
        if (ctx->pc != 0x17EF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF64u; }
        if (ctx->pc != 0x17EF64u) { return; }
    }
    ctx->pc = 0x17EF64u;
    // 0x17ef64: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x17ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x17ef68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17ef68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ef6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17ef6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x17ef70: 0xc05d080  jal         func_174200
    ctx->pc = 0x17EF70u;
    SET_GPR_U32(ctx, 31, 0x17EF78u);
    ctx->pc = 0x17EF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF70u;
            // 0x17ef74: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF78u; }
        if (ctx->pc != 0x17EF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF78u; }
        if (ctx->pc != 0x17EF78u) { return; }
    }
    ctx->pc = 0x17EF78u;
    // 0x17ef78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17ef78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ef7c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x17ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x17ef80: 0xc05d080  jal         func_174200
    ctx->pc = 0x17EF80u;
    SET_GPR_U32(ctx, 31, 0x17EF88u);
    ctx->pc = 0x17EF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF80u;
            // 0x17ef84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF88u; }
        if (ctx->pc != 0x17EF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EF88u; }
        if (ctx->pc != 0x17EF88u) { return; }
    }
    ctx->pc = 0x17EF88u;
    // 0x17ef88: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x17EF88u;
    {
        const bool branch_taken_0x17ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef88) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EF90u;
label_17ef90:
    // 0x17ef90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17ef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17ef94: 0x8c2223f8  lw          $v0, 0x23F8($at)
    ctx->pc = 0x17ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x17ef98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17EF98u;
    {
        const bool branch_taken_0x17ef98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EF98u;
            // 0x17ef9c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef98) {
            ctx->pc = 0x17EFD0u;
            goto label_17efd0;
        }
    }
    ctx->pc = 0x17EFA0u;
    // 0x17efa0: 0x8c221830  lw          $v0, 0x1830($at)
    ctx->pc = 0x17efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6192)));
    // 0x17efa4: 0x184000ae  blez        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x17EFA4u;
    {
        const bool branch_taken_0x17efa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17efa4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EFACu;
    // 0x17efac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17efb0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17efb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17efb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17efb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17efb8: 0xac221830  sw          $v0, 0x1830($at)
    ctx->pc = 0x17efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6192), GPR_U32(ctx, 2));
    // 0x17efbc: 0xc055124  jal         func_154490
    ctx->pc = 0x17EFBCu;
    SET_GPR_U32(ctx, 31, 0x17EFC4u);
    ctx->pc = 0x17EFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFBCu;
            // 0x17efc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFC4u; }
        if (ctx->pc != 0x17EFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EFC4u; }
        if (ctx->pc != 0x17EFC4u) { return; }
    }
    ctx->pc = 0x17EFC4u;
    // 0x17efc4: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x17EFC4u;
    {
        const bool branch_taken_0x17efc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efc4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EFCCu;
    // 0x17efcc: 0x0  nop
    ctx->pc = 0x17efccu;
    // NOP
label_17efd0:
    // 0x17efd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17efd4: 0x8c2223f0  lw          $v0, 0x23F0($at)
    ctx->pc = 0x17efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x17efd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17EFD8u;
    {
        const bool branch_taken_0x17efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFD8u;
            // 0x17efdc: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efd8) {
            ctx->pc = 0x17F010u;
            goto label_17f010;
        }
    }
    ctx->pc = 0x17EFE0u;
    // 0x17efe0: 0x8c221830  lw          $v0, 0x1830($at)
    ctx->pc = 0x17efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6192)));
    // 0x17efe4: 0x1c40009e  bgtz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x17EFE4u;
    {
        const bool branch_taken_0x17efe4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x17efe4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17EFECu;
    // 0x17efec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17eff0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17eff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17eff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17eff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eff8: 0xac221830  sw          $v0, 0x1830($at)
    ctx->pc = 0x17eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6192), GPR_U32(ctx, 2));
    // 0x17effc: 0xc055124  jal         func_154490
    ctx->pc = 0x17EFFCu;
    SET_GPR_U32(ctx, 31, 0x17F004u);
    ctx->pc = 0x17F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EFFCu;
            // 0x17f000: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F004u; }
        if (ctx->pc != 0x17F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F004u; }
        if (ctx->pc != 0x17F004u) { return; }
    }
    ctx->pc = 0x17F004u;
    // 0x17f004: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x17F004u;
    {
        const bool branch_taken_0x17f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f004) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F00Cu;
    // 0x17f00c: 0x0  nop
    ctx->pc = 0x17f00cu;
    // NOP
label_17f010:
    // 0x17f010: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f014: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x17f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x17f018: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F018u;
    {
        const bool branch_taken_0x17f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F018u;
            // 0x17f01c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f018) {
            ctx->pc = 0x17F050u;
            goto label_17f050;
        }
    }
    ctx->pc = 0x17F020u;
    // 0x17f020: 0x8c221830  lw          $v0, 0x1830($at)
    ctx->pc = 0x17f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6192)));
    // 0x17f024: 0x1840008e  blez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x17F024u;
    {
        const bool branch_taken_0x17f024 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17f024) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F02Cu;
    // 0x17f02c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f030: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17f034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f038: 0xac221830  sw          $v0, 0x1830($at)
    ctx->pc = 0x17f038u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6192), GPR_U32(ctx, 2));
    // 0x17f03c: 0xc055124  jal         func_154490
    ctx->pc = 0x17F03Cu;
    SET_GPR_U32(ctx, 31, 0x17F044u);
    ctx->pc = 0x17F040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F03Cu;
            // 0x17f040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F044u; }
        if (ctx->pc != 0x17F044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F044u; }
        if (ctx->pc != 0x17F044u) { return; }
    }
    ctx->pc = 0x17F044u;
    // 0x17f044: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x17F044u;
    {
        const bool branch_taken_0x17f044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f044) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F04Cu;
    // 0x17f04c: 0x0  nop
    ctx->pc = 0x17f04cu;
    // NOP
label_17f050:
    // 0x17f050: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f054: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x17f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x17f058: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x17F058u;
    {
        const bool branch_taken_0x17f058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F058u;
            // 0x17f05c: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f058) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F060u;
    // 0x17f060: 0x8c221830  lw          $v0, 0x1830($at)
    ctx->pc = 0x17f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6192)));
    // 0x17f064: 0x1c40007e  bgtz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x17F064u;
    {
        const bool branch_taken_0x17f064 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x17F068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F064u;
            // 0x17f068: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f064) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F06Cu;
    // 0x17f06c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f070: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f074: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f078: 0xc055124  jal         func_154490
    ctx->pc = 0x17F078u;
    SET_GPR_U32(ctx, 31, 0x17F080u);
    ctx->pc = 0x17F07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F078u;
            // 0x17f07c: 0xac221830  sw          $v0, 0x1830($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F080u; }
        if (ctx->pc != 0x17F080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F080u; }
        if (ctx->pc != 0x17F080u) { return; }
    }
    ctx->pc = 0x17F080u;
    // 0x17f080: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x17F080u;
    {
        const bool branch_taken_0x17f080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f080) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F088u;
label_17f088:
    // 0x17f088: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f08c: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x17f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x17f090: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f094: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x17f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x17f098: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f098u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f09c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F09Cu;
    {
        const bool branch_taken_0x17f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F09Cu;
            // 0x17f0a0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f09c) {
            ctx->pc = 0x17F0C0u;
            goto label_17f0c0;
        }
    }
    ctx->pc = 0x17F0A4u;
    // 0x17f0a4: 0x8c221618  lw          $v0, 0x1618($at)
    ctx->pc = 0x17f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x17f0a8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F0A8u;
    {
        const bool branch_taken_0x17f0a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17f0a8) {
            ctx->pc = 0x17F0C0u;
            goto label_17f0c0;
        }
    }
    ctx->pc = 0x17F0B0u;
    // 0x17f0b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f0b4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f0b8: 0xac221618  sw          $v0, 0x1618($at)
    ctx->pc = 0x17f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5656), GPR_U32(ctx, 2));
    // 0x17f0bc: 0x0  nop
    ctx->pc = 0x17f0bcu;
    // NOP
label_17f0c0:
    // 0x17f0c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f0c4: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x17f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x17f0c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f0cc: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x17f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x17f0d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f0d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f0d4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x17F0D4u;
    {
        const bool branch_taken_0x17f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0D4u;
            // 0x17f0d8: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0d4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F0DCu;
    // 0x17f0dc: 0x8c221618  lw          $v0, 0x1618($at)
    ctx->pc = 0x17f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x17f0e0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x17f0e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17f0e4: 0x1020005e  beqz        $at, . + 4 + (0x5E << 2)
    ctx->pc = 0x17F0E4u;
    {
        const bool branch_taken_0x17f0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0e4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F0ECu;
    // 0x17f0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f0f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f0f4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17F0F4u;
    {
        const bool branch_taken_0x17f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F0F4u;
            // 0x17f0f8: 0xac221618  sw          $v0, 0x1618($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0f4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F0FCu;
    // 0x17f0fc: 0x0  nop
    ctx->pc = 0x17f0fcu;
    // NOP
label_17f100:
    // 0x17f100: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f104: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x17f104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x17f108: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f10c: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x17f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x17f110: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f110u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F114u;
    {
        const bool branch_taken_0x17f114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F114u;
            // 0x17f118: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f114) {
            ctx->pc = 0x17F138u;
            goto label_17f138;
        }
    }
    ctx->pc = 0x17F11Cu;
    // 0x17f11c: 0x8c22161c  lw          $v0, 0x161C($at)
    ctx->pc = 0x17f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x17f120: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F120u;
    {
        const bool branch_taken_0x17f120 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17f120) {
            ctx->pc = 0x17F138u;
            goto label_17f138;
        }
    }
    ctx->pc = 0x17F128u;
    // 0x17f128: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17f12c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f130: 0xac22161c  sw          $v0, 0x161C($at)
    ctx->pc = 0x17f130u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5660), GPR_U32(ctx, 2));
    // 0x17f134: 0x0  nop
    ctx->pc = 0x17f134u;
    // NOP
label_17f138:
    // 0x17f138: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f13c: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x17f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x17f140: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f144: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x17f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x17f148: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f148u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f14c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x17F14Cu;
    {
        const bool branch_taken_0x17f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F14Cu;
            // 0x17f150: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f14c) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F154u;
    // 0x17f154: 0x8c22161c  lw          $v0, 0x161C($at)
    ctx->pc = 0x17f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x17f158: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x17f158u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17f15c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x17F15Cu;
    {
        const bool branch_taken_0x17f15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f15c) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F164u;
    // 0x17f164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f168: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f16c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x17F16Cu;
    {
        const bool branch_taken_0x17f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F16Cu;
            // 0x17f170: 0xac22161c  sw          $v0, 0x161C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5660), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f16c) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F174u;
    // 0x17f174: 0x0  nop
    ctx->pc = 0x17f174u;
    // NOP
label_17f178:
    // 0x17f178: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f17c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17f180: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f184: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17f188: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f188u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f18c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F18Cu;
    {
        const bool branch_taken_0x17f18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F18Cu;
            // 0x17f190: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f18c) {
            ctx->pc = 0x17F1B0u;
            goto label_17f1b0;
        }
    }
    ctx->pc = 0x17F194u;
    // 0x17f194: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17f198: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f19c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17f1a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f1a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f1a4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x17F1A4u;
    {
        const bool branch_taken_0x17f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1a4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F1ACu;
    // 0x17f1ac: 0x0  nop
    ctx->pc = 0x17f1acu;
    // NOP
label_17f1b0:
    // 0x17f1b0: 0xc05d110  jal         func_174440
    ctx->pc = 0x17F1B0u;
    SET_GPR_U32(ctx, 31, 0x17F1B8u);
    ctx->pc = 0x17F1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1B0u;
            // 0x17f1b4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1B8u; }
        if (ctx->pc != 0x17F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F1B8u; }
        if (ctx->pc != 0x17F1B8u) { return; }
    }
    ctx->pc = 0x17F1B8u;
    // 0x17f1b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17F1BCu;
    {
        const bool branch_taken_0x17f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1BCu;
            // 0x17f1c0: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1bc) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F1C4u;
    // 0x17f1c4: 0x0  nop
    ctx->pc = 0x17f1c4u;
    // NOP
label_17f1c8:
    // 0x17f1c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f1cc: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17f1d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f1d4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17f1d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f1d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f1dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F1DCu;
    {
        const bool branch_taken_0x17f1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F1DCu;
            // 0x17f1e0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f1dc) {
            ctx->pc = 0x17F200u;
            goto label_17f200;
        }
    }
    ctx->pc = 0x17F1E4u;
    // 0x17f1e4: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17f1e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f1ec: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17f1f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f1f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f1f4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x17F1F4u;
    {
        const bool branch_taken_0x17f1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1f4) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F1FCu;
    // 0x17f1fc: 0x0  nop
    ctx->pc = 0x17f1fcu;
    // NOP
label_17f200:
    // 0x17f200: 0xc05d110  jal         func_174440
    ctx->pc = 0x17F200u;
    SET_GPR_U32(ctx, 31, 0x17F208u);
    ctx->pc = 0x17F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F200u;
            // 0x17f204: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F208u; }
        if (ctx->pc != 0x17F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F208u; }
        if (ctx->pc != 0x17F208u) { return; }
    }
    ctx->pc = 0x17F208u;
    // 0x17f208: 0xc065df8  jal         func_1977E0
    ctx->pc = 0x17F208u;
    SET_GPR_U32(ctx, 31, 0x17F210u);
    ctx->pc = 0x1977E0u;
    if (runtime->hasFunction(0x1977E0u)) {
        auto targetFn = runtime->lookupFunction(0x1977E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F210u; }
        if (ctx->pc != 0x17F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultOptions_0x1977e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F210u; }
        if (ctx->pc != 0x17F210u) { return; }
    }
    ctx->pc = 0x17F210u;
    // 0x17f210: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17F210u;
    {
        const bool branch_taken_0x17f210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f210) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F218u;
label_17f218:
    // 0x17f218: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f21c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17f220: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f224: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17f228: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f228u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f22c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F22Cu;
    {
        const bool branch_taken_0x17f22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F22Cu;
            // 0x17f230: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f22c) {
            ctx->pc = 0x17F250u;
            goto label_17f250;
        }
    }
    ctx->pc = 0x17F234u;
    // 0x17f234: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17f238: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f23c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17f240: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f240u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F244u;
    {
        const bool branch_taken_0x17f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f244) {
            ctx->pc = 0x17F260u;
            goto label_17f260;
        }
    }
    ctx->pc = 0x17F24Cu;
    // 0x17f24c: 0x0  nop
    ctx->pc = 0x17f24cu;
    // NOP
label_17f250:
    // 0x17f250: 0xc05d110  jal         func_174440
    ctx->pc = 0x17F250u;
    SET_GPR_U32(ctx, 31, 0x17F258u);
    ctx->pc = 0x17F254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F250u;
            // 0x17f254: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F258u; }
        if (ctx->pc != 0x17F258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F258u; }
        if (ctx->pc != 0x17F258u) { return; }
    }
    ctx->pc = 0x17F258u;
    // 0x17f258: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f25c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x17f25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17f260:
    // 0x17f260: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f264: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x17f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17f268: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17f268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17f26c: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17f270: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17f270u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17f274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17F274u;
    {
        const bool branch_taken_0x17f274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F274u;
            // 0x17f278: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f274) {
            ctx->pc = 0x17F290u;
            goto label_17f290;
        }
    }
    ctx->pc = 0x17F27Cu;
    // 0x17f27c: 0xc05d110  jal         func_174440
    ctx->pc = 0x17F27Cu;
    SET_GPR_U32(ctx, 31, 0x17F284u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F284u; }
        if (ctx->pc != 0x17F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F284u; }
        if (ctx->pc != 0x17F284u) { return; }
    }
    ctx->pc = 0x17F284u;
    // 0x17f284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f288: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x17f288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f28c: 0x0  nop
    ctx->pc = 0x17f28cu;
    // NOP
label_17f290:
    // 0x17f290: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17f290u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17f294: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17f298: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x17f298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x17f29c: 0x24c61dc8  addiu       $a2, $a2, 0x1DC8
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7624));
    // 0x17f2a0: 0xc060a44  jal         func_182910
    ctx->pc = 0x17F2A0u;
    SET_GPR_U32(ctx, 31, 0x17F2A8u);
    ctx->pc = 0x17F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2A0u;
            // 0x17f2a4: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2A8u; }
        if (ctx->pc != 0x17F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2A8u; }
        if (ctx->pc != 0x17F2A8u) { return; }
    }
    ctx->pc = 0x17F2A8u;
    // 0x17f2a8: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x17f2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x17f2ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17f2acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2b0: 0x2673a170  addiu       $s3, $s3, -0x5E90
    ctx->pc = 0x17f2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943088));
    // 0x17f2b4: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x17f2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_17f2b8:
    // 0x17f2b8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f2bc: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17f2c0: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F2C0u;
    {
        const bool branch_taken_0x17f2c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2C0u;
            // 0x17f2c4: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2c0) {
            ctx->pc = 0x17F2F8u;
            goto label_17f2f8;
        }
    }
    ctx->pc = 0x17F2C8u;
    // 0x17f2c8: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f2cc: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17f2ccu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17f2d0: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17f2d4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f2d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17f2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2dc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17f2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17f2e0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f2e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2e4: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F2E4u;
    SET_GPR_U32(ctx, 31, 0x17F2ECu);
    ctx->pc = 0x17F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F2E4u;
            // 0x17f2e8: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2ECu; }
        if (ctx->pc != 0x17F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F2ECu; }
        if (ctx->pc != 0x17F2ECu) { return; }
    }
    ctx->pc = 0x17F2ECu;
    // 0x17f2ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17F2ECu;
    {
        const bool branch_taken_0x17f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f2ec) {
            ctx->pc = 0x17F320u;
            goto label_17f320;
        }
    }
    ctx->pc = 0x17F2F4u;
    // 0x17f2f4: 0x0  nop
    ctx->pc = 0x17f2f4u;
    // NOP
label_17f2f8:
    // 0x17f2f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f2fc: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17f2fcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17f300: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f304: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17f304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17f308: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17f308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17f30c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17f30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f310: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17f310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17f314: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17f314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17f318: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F318u;
    SET_GPR_U32(ctx, 31, 0x17F320u);
    ctx->pc = 0x17F31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F318u;
            // 0x17f31c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F320u; }
        if (ctx->pc != 0x17F320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F320u; }
        if (ctx->pc != 0x17F320u) { return; }
    }
    ctx->pc = 0x17F320u;
label_17f320:
    // 0x17f320: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17f320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17f324: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x17f324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17f328: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x17f328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x17f32c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17F32Cu;
    {
        const bool branch_taken_0x17f32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F32Cu;
            // 0x17f330: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f32c) {
            ctx->pc = 0x17F2B8u;
            goto label_17f2b8;
        }
    }
    ctx->pc = 0x17F334u;
    // 0x17f334: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x17f334u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x17f338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17f338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f33c: 0x2694a190  addiu       $s4, $s4, -0x5E70
    ctx->pc = 0x17f33cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943120));
    // 0x17f340: 0x2413fff8  addiu       $s3, $zero, -0x8
    ctx->pc = 0x17f340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17f344: 0x0  nop
    ctx->pc = 0x17f344u;
    // NOP
label_17f348:
    // 0x17f348: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f34c: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17f350: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F350u;
    {
        const bool branch_taken_0x17f350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F350u;
            // 0x17f354: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f350) {
            ctx->pc = 0x17F388u;
            goto label_17f388;
        }
    }
    ctx->pc = 0x17F358u;
    // 0x17f358: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f35c: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f35cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f360: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f364: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17f364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f36c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f370: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f374: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F374u;
    SET_GPR_U32(ctx, 31, 0x17F37Cu);
    ctx->pc = 0x17F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F374u;
            // 0x17f378: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F37Cu; }
        if (ctx->pc != 0x17F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F37Cu; }
        if (ctx->pc != 0x17F37Cu) { return; }
    }
    ctx->pc = 0x17F37Cu;
    // 0x17f37c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17F37Cu;
    {
        const bool branch_taken_0x17f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f37c) {
            ctx->pc = 0x17F3B0u;
            goto label_17f3b0;
        }
    }
    ctx->pc = 0x17F384u;
    // 0x17f384: 0x0  nop
    ctx->pc = 0x17f384u;
    // NOP
label_17f388:
    // 0x17f388: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f38c: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f38cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f390: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f394: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f398: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f39c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3a0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f3a4: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17f3a8: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F3A8u;
    SET_GPR_U32(ctx, 31, 0x17F3B0u);
    ctx->pc = 0x17F3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3A8u;
            // 0x17f3ac: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3B0u; }
        if (ctx->pc != 0x17F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F3B0u; }
        if (ctx->pc != 0x17F3B0u) { return; }
    }
    ctx->pc = 0x17F3B0u;
label_17f3b0:
    // 0x17f3b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17f3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17f3b4: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x17f3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17f3b8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17f3bc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17F3BCu;
    {
        const bool branch_taken_0x17f3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3BCu;
            // 0x17f3c0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3bc) {
            ctx->pc = 0x17F348u;
            goto label_17f348;
        }
    }
    ctx->pc = 0x17F3C4u;
    // 0x17f3c4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f3c8: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17f3cc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F3CCu;
    {
        const bool branch_taken_0x17f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F3CCu;
            // 0x17f3d0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3cc) {
            ctx->pc = 0x17F418u;
            goto label_17f418;
        }
    }
    ctx->pc = 0x17F3D4u;
    // 0x17f3d4: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f3d8: 0x8c231614  lw          $v1, 0x1614($at)
    ctx->pc = 0x17f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5652)));
    // 0x17f3dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f3e0: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x17f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x17f3e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f3e8: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17f3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17f3ec: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f3f0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f3f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f3f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f400: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f400u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f404: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f408: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F408u;
    SET_GPR_U32(ctx, 31, 0x17F410u);
    ctx->pc = 0x17F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F408u;
            // 0x17f40c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F410u; }
        if (ctx->pc != 0x17F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F410u; }
        if (ctx->pc != 0x17F410u) { return; }
    }
    ctx->pc = 0x17F410u;
    // 0x17f410: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F410u;
    {
        const bool branch_taken_0x17f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f410) {
            ctx->pc = 0x17F458u;
            goto label_17f458;
        }
    }
    ctx->pc = 0x17F418u;
label_17f418:
    // 0x17f418: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f41c: 0x8c231614  lw          $v1, 0x1614($at)
    ctx->pc = 0x17f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5652)));
    // 0x17f420: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f424: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f428: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x17f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x17f42c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f430: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17f430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17f434: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f438: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f43c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f440: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f448: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f448u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f44c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f450: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F450u;
    SET_GPR_U32(ctx, 31, 0x17F458u);
    ctx->pc = 0x17F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F450u;
            // 0x17f454: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F458u; }
        if (ctx->pc != 0x17F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F458u; }
        if (ctx->pc != 0x17F458u) { return; }
    }
    ctx->pc = 0x17F458u;
label_17f458:
    // 0x17f458: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f45c: 0x8c2327f0  lw          $v1, 0x27F0($at)
    ctx->pc = 0x17f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17f460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f464: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F464u;
    {
        const bool branch_taken_0x17f464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F464u;
            // 0x17f468: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f464) {
            ctx->pc = 0x17F4B0u;
            goto label_17f4b0;
        }
    }
    ctx->pc = 0x17F46Cu;
    // 0x17f46c: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f470: 0x8c23182c  lw          $v1, 0x182C($at)
    ctx->pc = 0x17f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6188)));
    // 0x17f474: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f478: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x17f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x17f47c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f480: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x17f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17f484: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f488: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f490: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f498: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f498u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f49c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f4a0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F4A0u;
    SET_GPR_U32(ctx, 31, 0x17F4A8u);
    ctx->pc = 0x17F4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4A0u;
            // 0x17f4a4: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4A8u; }
        if (ctx->pc != 0x17F4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4A8u; }
        if (ctx->pc != 0x17F4A8u) { return; }
    }
    ctx->pc = 0x17F4A8u;
    // 0x17f4a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F4A8u;
    {
        const bool branch_taken_0x17f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f4a8) {
            ctx->pc = 0x17F4F0u;
            goto label_17f4f0;
        }
    }
    ctx->pc = 0x17F4B0u;
label_17f4b0:
    // 0x17f4b0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f4b4: 0x8c23182c  lw          $v1, 0x182C($at)
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6188)));
    // 0x17f4b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f4bc: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f4c0: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x17f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x17f4c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f4c8: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17f4cc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f4d0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f4d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f4d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f4e0: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f4e0u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f4e4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f4e8: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F4E8u;
    SET_GPR_U32(ctx, 31, 0x17F4F0u);
    ctx->pc = 0x17F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4E8u;
            // 0x17f4ec: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4F0u; }
        if (ctx->pc != 0x17F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4F0u; }
        if (ctx->pc != 0x17F4F0u) { return; }
    }
    ctx->pc = 0x17F4F0u;
label_17f4f0:
    // 0x17f4f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f4f4: 0x8c2327f0  lw          $v1, 0x27F0($at)
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17f4f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17f4fc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F4FCu;
    {
        const bool branch_taken_0x17f4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4FCu;
            // 0x17f500: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4fc) {
            ctx->pc = 0x17F548u;
            goto label_17f548;
        }
    }
    ctx->pc = 0x17F504u;
    // 0x17f504: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f508: 0x8c231830  lw          $v1, 0x1830($at)
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6192)));
    // 0x17f50c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f510: 0x2442a1c8  addiu       $v0, $v0, -0x5E38
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943176));
    // 0x17f514: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f518: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17f51c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f520: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f520u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f524: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f528: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f52c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f530: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f530u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f534: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f538: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F538u;
    SET_GPR_U32(ctx, 31, 0x17F540u);
    ctx->pc = 0x17F53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F538u;
            // 0x17f53c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F540u; }
        if (ctx->pc != 0x17F540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F540u; }
        if (ctx->pc != 0x17F540u) { return; }
    }
    ctx->pc = 0x17F540u;
    // 0x17f540: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F540u;
    {
        const bool branch_taken_0x17f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f540) {
            ctx->pc = 0x17F588u;
            goto label_17f588;
        }
    }
    ctx->pc = 0x17F548u;
label_17f548:
    // 0x17f548: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f54c: 0x8c231830  lw          $v1, 0x1830($at)
    ctx->pc = 0x17f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6192)));
    // 0x17f550: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f554: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f558: 0x2442a1c8  addiu       $v0, $v0, -0x5E38
    ctx->pc = 0x17f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943176));
    // 0x17f55c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f560: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x17f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17f564: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f568: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f56c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f570: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f578: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f578u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f57c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f580: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F580u;
    SET_GPR_U32(ctx, 31, 0x17F588u);
    ctx->pc = 0x17F584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F580u;
            // 0x17f584: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F588u; }
        if (ctx->pc != 0x17F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F588u; }
        if (ctx->pc != 0x17F588u) { return; }
    }
    ctx->pc = 0x17F588u;
label_17f588:
    // 0x17f588: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f58c: 0x8c2227f0  lw          $v0, 0x27F0($at)
    ctx->pc = 0x17f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17f590: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f594: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F594u;
    {
        const bool branch_taken_0x17f594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x17F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F594u;
            // 0x17f598: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f594) {
            ctx->pc = 0x17F5E0u;
            goto label_17f5e0;
        }
    }
    ctx->pc = 0x17F59Cu;
    // 0x17f59c: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f5a0: 0x8c231618  lw          $v1, 0x1618($at)
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x17f5a4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f5a8: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x17f5ac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x17f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17f5b0: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f5b4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f5bc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f5c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f5c4: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f5c4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f5c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f5cc: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F5CCu;
    SET_GPR_U32(ctx, 31, 0x17F5D4u);
    ctx->pc = 0x17F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5CCu;
            // 0x17f5d0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5D4u; }
        if (ctx->pc != 0x17F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5D4u; }
        if (ctx->pc != 0x17F5D4u) { return; }
    }
    ctx->pc = 0x17F5D4u;
    // 0x17f5d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17F5D4u;
    {
        const bool branch_taken_0x17f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f5d4) {
            ctx->pc = 0x17F620u;
            goto label_17f620;
        }
    }
    ctx->pc = 0x17F5DCu;
    // 0x17f5dc: 0x0  nop
    ctx->pc = 0x17f5dcu;
    // NOP
label_17f5e0:
    // 0x17f5e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f5e4: 0x8c231618  lw          $v1, 0x1618($at)
    ctx->pc = 0x17f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x17f5e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f5ec: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f5f0: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x17f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x17f5f4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x17f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x17f5f8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f5fc: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17f600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f604: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f60c: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f60cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f610: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f614: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F614u;
    SET_GPR_U32(ctx, 31, 0x17F61Cu);
    ctx->pc = 0x17F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F614u;
            // 0x17f618: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F61Cu; }
        if (ctx->pc != 0x17F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F61Cu; }
        if (ctx->pc != 0x17F61Cu) { return; }
    }
    ctx->pc = 0x17F61Cu;
    // 0x17f61c: 0x0  nop
    ctx->pc = 0x17f61cu;
    // NOP
label_17f620:
    // 0x17f620: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f624: 0x8c2327f0  lw          $v1, 0x27F0($at)
    ctx->pc = 0x17f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
    // 0x17f628: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f62c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F62Cu;
    {
        const bool branch_taken_0x17f62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F62Cu;
            // 0x17f630: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f62c) {
            ctx->pc = 0x17F678u;
            goto label_17f678;
        }
    }
    ctx->pc = 0x17F634u;
    // 0x17f634: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f638: 0x8c23161c  lw          $v1, 0x161C($at)
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x17f63c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f640: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x17f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x17f644: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f64c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f650: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f654: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f658: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f65c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f660: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f660u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f664: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f668: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F668u;
    SET_GPR_U32(ctx, 31, 0x17F670u);
    ctx->pc = 0x17F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F668u;
            // 0x17f66c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F670u; }
        if (ctx->pc != 0x17F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F670u; }
        if (ctx->pc != 0x17F670u) { return; }
    }
    ctx->pc = 0x17F670u;
    // 0x17f670: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17F670u;
    {
        const bool branch_taken_0x17f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f670) {
            ctx->pc = 0x17F6B8u;
            goto label_17f6b8;
        }
    }
    ctx->pc = 0x17F678u;
label_17f678:
    // 0x17f678: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x17f678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x17f67c: 0x8c23161c  lw          $v1, 0x161C($at)
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x17f680: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17f684: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f688: 0x2442a1f0  addiu       $v0, $v0, -0x5E10
    ctx->pc = 0x17f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943216));
    // 0x17f68c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17f690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f694: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f698: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f69c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f6a0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17f6a8: 0x902b3c88  lbu         $t3, 0x3C88($at)
    ctx->pc = 0x17f6a8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15496)));
    // 0x17f6ac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17f6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f6b0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F6B0u;
    SET_GPR_U32(ctx, 31, 0x17F6B8u);
    ctx->pc = 0x17F6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6B0u;
            // 0x17f6b4: 0x240a0060  addiu       $t2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6B8u; }
        if (ctx->pc != 0x17F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6B8u; }
        if (ctx->pc != 0x17F6B8u) { return; }
    }
    ctx->pc = 0x17F6B8u;
label_17f6b8:
    // 0x17f6b8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f6bc: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17f6bcu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17f6c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f6c4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17f6c8: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f6cc: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17f6d0: 0x24c61fd0  addiu       $a2, $a2, 0x1FD0
    ctx->pc = 0x17f6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8144));
    // 0x17f6d4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f6d8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f6d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6dc: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F6DCu;
    SET_GPR_U32(ctx, 31, 0x17F6E4u);
    ctx->pc = 0x17F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6DCu;
            // 0x17f6e0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6E4u; }
        if (ctx->pc != 0x17F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F6E4u; }
        if (ctx->pc != 0x17F6E4u) { return; }
    }
    ctx->pc = 0x17F6E4u;
    // 0x17f6e4: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x17f6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x17f6e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17f6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6ec: 0x2694a210  addiu       $s4, $s4, -0x5DF0
    ctx->pc = 0x17f6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943248));
    // 0x17f6f0: 0x2413fffa  addiu       $s3, $zero, -0x6
    ctx->pc = 0x17f6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x17f6f4: 0x0  nop
    ctx->pc = 0x17f6f4u;
    // NOP
label_17f6f8:
    // 0x17f6f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f6fc: 0x8c222808  lw          $v0, 0x2808($at)
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10248)));
    // 0x17f700: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F700u;
    {
        const bool branch_taken_0x17f700 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F700u;
            // 0x17f704: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f700) {
            ctx->pc = 0x17F738u;
            goto label_17f738;
        }
    }
    ctx->pc = 0x17F708u;
    // 0x17f708: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f70c: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17f70cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17f710: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f714: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17f714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f71c: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f720: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f724: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F724u;
    SET_GPR_U32(ctx, 31, 0x17F72Cu);
    ctx->pc = 0x17F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F724u;
            // 0x17f728: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F72Cu; }
        if (ctx->pc != 0x17F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F72Cu; }
        if (ctx->pc != 0x17F72Cu) { return; }
    }
    ctx->pc = 0x17F72Cu;
    // 0x17f72c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17F72Cu;
    {
        const bool branch_taken_0x17f72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f72c) {
            ctx->pc = 0x17F760u;
            goto label_17f760;
        }
    }
    ctx->pc = 0x17F734u;
    // 0x17f734: 0x0  nop
    ctx->pc = 0x17f734u;
    // NOP
label_17f738:
    // 0x17f738: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f73c: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17f73cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17f740: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f744: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f748: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17f74c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f750: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f754: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17f754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17f758: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F758u;
    SET_GPR_U32(ctx, 31, 0x17F760u);
    ctx->pc = 0x17F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F758u;
            // 0x17f75c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F760u; }
        if (ctx->pc != 0x17F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F760u; }
        if (ctx->pc != 0x17F760u) { return; }
    }
    ctx->pc = 0x17F760u;
label_17f760:
    // 0x17f760: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17f764: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x17f764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17f768: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17f76c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17F76Cu;
    {
        const bool branch_taken_0x17f76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F76Cu;
            // 0x17f770: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f76c) {
            ctx->pc = 0x17F6F8u;
            goto label_17f6f8;
        }
    }
    ctx->pc = 0x17F774u;
    // 0x17f774: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f778: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f77c: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17f77cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17f780: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17f780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17f784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f788: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x17f788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17f78c: 0x24c61fd8  addiu       $a2, $a2, 0x1FD8
    ctx->pc = 0x17f78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8152));
    // 0x17f790: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f794: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f798: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F798u;
    SET_GPR_U32(ctx, 31, 0x17F7A0u);
    ctx->pc = 0x17F79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F798u;
            // 0x17f79c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7A0u; }
        if (ctx->pc != 0x17F7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7A0u; }
        if (ctx->pc != 0x17F7A0u) { return; }
    }
    ctx->pc = 0x17F7A0u;
    // 0x17f7a0: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x17f7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x17f7a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17f7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7a8: 0x2694a210  addiu       $s4, $s4, -0x5DF0
    ctx->pc = 0x17f7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943248));
    // 0x17f7ac: 0x2413fffa  addiu       $s3, $zero, -0x6
    ctx->pc = 0x17f7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_17f7b0:
    // 0x17f7b0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f7b4: 0x8c222810  lw          $v0, 0x2810($at)
    ctx->pc = 0x17f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10256)));
    // 0x17f7b8: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17F7B8u;
    {
        const bool branch_taken_0x17f7b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7B8u;
            // 0x17f7bc: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7b8) {
            ctx->pc = 0x17F7F0u;
            goto label_17f7f0;
        }
    }
    ctx->pc = 0x17F7C0u;
    // 0x17f7c0: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17f7c4: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17f7c4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17f7c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7cc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17f7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f7d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7d4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f7d8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17f7d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7dc: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F7DCu;
    SET_GPR_U32(ctx, 31, 0x17F7E4u);
    ctx->pc = 0x17F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7DCu;
            // 0x17f7e0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7E4u; }
        if (ctx->pc != 0x17F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F7E4u; }
        if (ctx->pc != 0x17F7E4u) { return; }
    }
    ctx->pc = 0x17F7E4u;
    // 0x17f7e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17F7E4u;
    {
        const bool branch_taken_0x17f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7e4) {
            ctx->pc = 0x17F818u;
            goto label_17f818;
        }
    }
    ctx->pc = 0x17F7ECu;
    // 0x17f7ec: 0x0  nop
    ctx->pc = 0x17f7ecu;
    // NOP
label_17f7f0:
    // 0x17f7f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f7f4: 0x902b3c80  lbu         $t3, 0x3C80($at)
    ctx->pc = 0x17f7f4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15488)));
    // 0x17f7f8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17f7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17f7fc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17f800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f804: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f808: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f80c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17f80cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17f810: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17F810u;
    SET_GPR_U32(ctx, 31, 0x17F818u);
    ctx->pc = 0x17F814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F810u;
            // 0x17f814: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F818u; }
        if (ctx->pc != 0x17F818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F818u; }
        if (ctx->pc != 0x17F818u) { return; }
    }
    ctx->pc = 0x17F818u;
label_17f818:
    // 0x17f818: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17f81c: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x17f81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x17f820: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17f820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17f824: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17F824u;
    {
        const bool branch_taken_0x17f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F824u;
            // 0x17f828: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f824) {
            ctx->pc = 0x17F7B0u;
            goto label_17f7b0;
        }
    }
    ctx->pc = 0x17F82Cu;
    // 0x17f82c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f830: 0xc0602dc  jal         func_180B70
    ctx->pc = 0x17F830u;
    SET_GPR_U32(ctx, 31, 0x17F838u);
    ctx->pc = 0x17F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F830u;
            // 0x17f834: 0x8c2427f0  lw          $a0, 0x27F0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180B70u;
    if (runtime->hasFunction(0x180B70u)) {
        auto targetFn = runtime->lookupFunction(0x180B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F838u; }
        if (ctx->pc != 0x17F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw2_0x180b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F838u; }
        if (ctx->pc != 0x17F838u) { return; }
    }
    ctx->pc = 0x17F838u;
    // 0x17f838: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17F838u;
    SET_GPR_U32(ctx, 31, 0x17F840u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F840u; }
        if (ctx->pc != 0x17F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F840u; }
        if (ctx->pc != 0x17F840u) { return; }
    }
    ctx->pc = 0x17F840u;
    // 0x17f840: 0x1620fd29  bnez        $s1, . + 4 + (-0x2D7 << 2)
    ctx->pc = 0x17F840u;
    {
        const bool branch_taken_0x17f840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f840) {
            ctx->pc = 0x17ECE8u;
            goto label_17ece8;
        }
    }
    ctx->pc = 0x17F848u;
label_17f848:
    // 0x17f848: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17f84c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F84Cu;
    {
        const bool branch_taken_0x17f84c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x17f84c) {
            ctx->pc = 0x17F860u;
            goto label_17f860;
        }
    }
    ctx->pc = 0x17F854u;
    // 0x17f854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F854u;
    {
        const bool branch_taken_0x17f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f854) {
            ctx->pc = 0x17F880u;
            goto label_17f880;
        }
    }
    ctx->pc = 0x17F85Cu;
    // 0x17f85c: 0x0  nop
    ctx->pc = 0x17f85cu;
    // NOP
label_17f860:
    // 0x17f860: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f864: 0xac202808  sw          $zero, 0x2808($at)
    ctx->pc = 0x17f864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10248), GPR_U32(ctx, 0));
    // 0x17f868: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17f868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17f86c: 0xc05f834  jal         func_17E0D0
    ctx->pc = 0x17F86Cu;
    SET_GPR_U32(ctx, 31, 0x17F874u);
    ctx->pc = 0x17F870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F86Cu;
            // 0x17f870: 0xac202810  sw          $zero, 0x2810($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E0D0u;
    if (runtime->hasFunction(0x17E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x17E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F874u; }
        if (ctx->pc != 0x17F874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeySettingMain_0x17e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F874u; }
        if (ctx->pc != 0x17F874u) { return; }
    }
    ctx->pc = 0x17F874u;
    // 0x17f874: 0x1000fd18  b           . + 4 + (-0x2E8 << 2)
    ctx->pc = 0x17F874u;
    {
        const bool branch_taken_0x17f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F874u;
            // 0x17f878: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f874) {
            ctx->pc = 0x17ECD8u;
            goto label_17ecd8;
        }
    }
    ctx->pc = 0x17F87Cu;
    // 0x17f87c: 0x0  nop
    ctx->pc = 0x17f87cu;
    // NOP
label_17f880:
    // 0x17f880: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x17F880u;
    SET_GPR_U32(ctx, 31, 0x17F888u);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F888u; }
        if (ctx->pc != 0x17F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F888u; }
        if (ctx->pc != 0x17F888u) { return; }
    }
    ctx->pc = 0x17F888u;
    // 0x17f888: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17F888u;
    {
        const bool branch_taken_0x17f888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F888u;
            // 0x17f88c: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f888) {
            ctx->pc = 0x17F8B8u;
            goto label_17f8b8;
        }
    }
    ctx->pc = 0x17F890u;
    // 0x17f890: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x17f890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x17f894: 0x24842820  addiu       $a0, $a0, 0x2820
    ctx->pc = 0x17f894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    // 0x17f898: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x17f898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x17f89c: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x17F89Cu;
    SET_GPR_U32(ctx, 31, 0x17F8A4u);
    ctx->pc = 0x17F8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F89Cu;
            // 0x17f8a0: 0x240602e0  addiu       $a2, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8A4u; }
        if (ctx->pc != 0x17F8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8A4u; }
        if (ctx->pc != 0x17F8A4u) { return; }
    }
    ctx->pc = 0x17F8A4u;
    // 0x17f8a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F8A4u;
    {
        const bool branch_taken_0x17f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8A4u;
            // 0x17f8a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8a4) {
            ctx->pc = 0x17F8B8u;
            goto label_17f8b8;
        }
    }
    ctx->pc = 0x17F8ACu;
    // 0x17f8ac: 0xc060e5c  jal         func_183970
    ctx->pc = 0x17F8ACu;
    SET_GPR_U32(ctx, 31, 0x17F8B4u);
    ctx->pc = 0x183970u;
    if (runtime->hasFunction(0x183970u)) {
        auto targetFn = runtime->lookupFunction(0x183970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8B4u; }
        if (ctx->pc != 0x17F8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardSaveFunc_0x183970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F8B4u; }
        if (ctx->pc != 0x17F8B4u) { return; }
    }
    ctx->pc = 0x17F8B4u;
    // 0x17f8b4: 0x0  nop
    ctx->pc = 0x17f8b4u;
    // NOP
label_17f8b8:
    // 0x17f8b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17f8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f8bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f8bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f8c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f8c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8D0u;
            // 0x17f8d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17ECD8u: goto label_17ecd8;
            case 0x17ECE8u: goto label_17ece8;
            case 0x17ED20u: goto label_17ed20;
            case 0x17ED40u: goto label_17ed40;
            case 0x17ED60u: goto label_17ed60;
            case 0x17EDB0u: goto label_17edb0;
            case 0x17EDB8u: goto label_17edb8;
            case 0x17EE08u: goto label_17ee08;
            case 0x17EE10u: goto label_17ee10;
            case 0x17EE40u: goto label_17ee40;
            case 0x17EE78u: goto label_17ee78;
            case 0x17EEB8u: goto label_17eeb8;
            case 0x17EF20u: goto label_17ef20;
            case 0x17EF90u: goto label_17ef90;
            case 0x17EFD0u: goto label_17efd0;
            case 0x17F010u: goto label_17f010;
            case 0x17F050u: goto label_17f050;
            case 0x17F088u: goto label_17f088;
            case 0x17F0C0u: goto label_17f0c0;
            case 0x17F100u: goto label_17f100;
            case 0x17F138u: goto label_17f138;
            case 0x17F178u: goto label_17f178;
            case 0x17F1B0u: goto label_17f1b0;
            case 0x17F1C8u: goto label_17f1c8;
            case 0x17F200u: goto label_17f200;
            case 0x17F218u: goto label_17f218;
            case 0x17F250u: goto label_17f250;
            case 0x17F260u: goto label_17f260;
            case 0x17F290u: goto label_17f290;
            case 0x17F2B8u: goto label_17f2b8;
            case 0x17F2F8u: goto label_17f2f8;
            case 0x17F320u: goto label_17f320;
            case 0x17F348u: goto label_17f348;
            case 0x17F388u: goto label_17f388;
            case 0x17F3B0u: goto label_17f3b0;
            case 0x17F418u: goto label_17f418;
            case 0x17F458u: goto label_17f458;
            case 0x17F4B0u: goto label_17f4b0;
            case 0x17F4F0u: goto label_17f4f0;
            case 0x17F548u: goto label_17f548;
            case 0x17F588u: goto label_17f588;
            case 0x17F5E0u: goto label_17f5e0;
            case 0x17F620u: goto label_17f620;
            case 0x17F678u: goto label_17f678;
            case 0x17F6B8u: goto label_17f6b8;
            case 0x17F6F8u: goto label_17f6f8;
            case 0x17F738u: goto label_17f738;
            case 0x17F760u: goto label_17f760;
            case 0x17F7B0u: goto label_17f7b0;
            case 0x17F7F0u: goto label_17f7f0;
            case 0x17F818u: goto label_17f818;
            case 0x17F848u: goto label_17f848;
            case 0x17F860u: goto label_17f860;
            case 0x17F880u: goto label_17f880;
            case 0x17F8B8u: goto label_17f8b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17F8D8u;
}
