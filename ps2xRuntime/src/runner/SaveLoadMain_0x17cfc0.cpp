#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SaveLoadMain
// Address: 0x17cfc0 - 0x17d51c
void SaveLoadMain_0x17cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SaveLoadMain_0x17cfc0");
#endif

    ctx->pc = 0x17cfc0u;

    // 0x17cfc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17cfc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17cfc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17cfcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17cfd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17cfd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17cfd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cfdc: 0xc060434  jal         func_1810D0
    ctx->pc = 0x17CFDCu;
    SET_GPR_U32(ctx, 31, 0x17CFE4u);
    ctx->pc = 0x17CFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFDCu;
            // 0x17cfe0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1810D0u;
    if (runtime->hasFunction(0x1810D0u)) {
        auto targetFn = runtime->lookupFunction(0x1810D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFE4u; }
        if (ctx->pc != 0x17CFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        saveload_paramInit_0x1810d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFE4u; }
        if (ctx->pc != 0x17CFE4u) { return; }
    }
    ctx->pc = 0x17CFE4u;
    // 0x17cfe4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x17cfe8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x17cfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x17cfec: 0x24842820  addiu       $a0, $a0, 0x2820
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    // 0x17cff0: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x17cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x17cff4: 0xc04ed22  jal         func_13B488
    ctx->pc = 0x17CFF4u;
    SET_GPR_U32(ctx, 31, 0x17CFFCu);
    ctx->pc = 0x17CFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17CFF4u;
            // 0x17cff8: 0x240602e0  addiu       $a2, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFFCu; }
        if (ctx->pc != 0x17CFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CFFCu; }
        if (ctx->pc != 0x17CFFCu) { return; }
    }
    ctx->pc = 0x17CFFCu;
    // 0x17cffc: 0x0  nop
    ctx->pc = 0x17cffcu;
    // NOP
label_17d000:
    // 0x17d000: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x17D000u;
    SET_GPR_U32(ctx, 31, 0x17D008u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D008u; }
        if (ctx->pc != 0x17D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D008u; }
        if (ctx->pc != 0x17D008u) { return; }
    }
    ctx->pc = 0x17D008u;
    // 0x17d008: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d00c: 0x90223c90  lbu         $v0, 0x3C90($at)
    ctx->pc = 0x17d00cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17d010: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D010u;
    {
        const bool branch_taken_0x17d010 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17d010) {
            ctx->pc = 0x17D028u;
            goto label_17d028;
        }
    }
    ctx->pc = 0x17D018u;
    // 0x17d018: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x17d01c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d020: 0xa0223c90  sb          $v0, 0x3C90($at)
    ctx->pc = 0x17d020u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 15504), (uint8_t)GPR_U32(ctx, 2));
    // 0x17d024: 0x0  nop
    ctx->pc = 0x17d024u;
    // NOP
label_17d028:
    // 0x17d028: 0xc06069c  jal         func_181A70
    ctx->pc = 0x17D028u;
    SET_GPR_U32(ctx, 31, 0x17D030u);
    ctx->pc = 0x181A70u;
    if (runtime->hasFunction(0x181A70u)) {
        auto targetFn = runtime->lookupFunction(0x181A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D030u; }
        if (ctx->pc != 0x17D030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderRenderFunction_0x181a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D030u; }
        if (ctx->pc != 0x17D030u) { return; }
    }
    ctx->pc = 0x17D030u;
    // 0x17d030: 0xc0606bc  jal         func_181AF0
    ctx->pc = 0x17D030u;
    SET_GPR_U32(ctx, 31, 0x17D038u);
    ctx->pc = 0x181AF0u;
    if (runtime->hasFunction(0x181AF0u)) {
        auto targetFn = runtime->lookupFunction(0x181AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D038u; }
        if (ctx->pc != 0x17D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderMoveFunction_0x181af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D038u; }
        if (ctx->pc != 0x17D038u) { return; }
    }
    ctx->pc = 0x17D038u;
    // 0x17d038: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d03c: 0x8c2323e8  lw          $v1, 0x23E8($at)
    ctx->pc = 0x17d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x17d040: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d044: 0x8c222378  lw          $v0, 0x2378($at)
    ctx->pc = 0x17d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x17d048: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d048u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d04c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17D04Cu;
    {
        const bool branch_taken_0x17d04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D04Cu;
            // 0x17d050: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d04c) {
            ctx->pc = 0x17D090u;
            goto label_17d090;
        }
    }
    ctx->pc = 0x17D054u;
    // 0x17d054: 0xc05d110  jal         func_174440
    ctx->pc = 0x17D054u;
    SET_GPR_U32(ctx, 31, 0x17D05Cu);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D05Cu; }
        if (ctx->pc != 0x17D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D05Cu; }
        if (ctx->pc != 0x17D05Cu) { return; }
    }
    ctx->pc = 0x17D05Cu;
    // 0x17d05c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d060: 0x8c2227f8  lw          $v0, 0x27F8($at)
    ctx->pc = 0x17d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17d068: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d06c: 0xac2227f8  sw          $v0, 0x27F8($at)
    ctx->pc = 0x17d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10232), GPR_U32(ctx, 2));
    // 0x17d070: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d074: 0x8c2227f8  lw          $v0, 0x27F8($at)
    ctx->pc = 0x17d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d078: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D078u;
    {
        const bool branch_taken_0x17d078 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17D07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D078u;
            // 0x17d07c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d078) {
            ctx->pc = 0x17D088u;
            goto label_17d088;
        }
    }
    ctx->pc = 0x17D080u;
    // 0x17d080: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d084: 0xac2227f8  sw          $v0, 0x27F8($at)
    ctx->pc = 0x17d084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10232), GPR_U32(ctx, 2));
label_17d088:
    // 0x17d088: 0xc060434  jal         func_1810D0
    ctx->pc = 0x17D088u;
    SET_GPR_U32(ctx, 31, 0x17D090u);
    ctx->pc = 0x1810D0u;
    if (runtime->hasFunction(0x1810D0u)) {
        auto targetFn = runtime->lookupFunction(0x1810D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D090u; }
        if (ctx->pc != 0x17D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        saveload_paramInit_0x1810d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D090u; }
        if (ctx->pc != 0x17D090u) { return; }
    }
    ctx->pc = 0x17D090u;
label_17d090:
    // 0x17d090: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d094: 0x8c2323e0  lw          $v1, 0x23E0($at)
    ctx->pc = 0x17d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x17d098: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d09c: 0x8c222370  lw          $v0, 0x2370($at)
    ctx->pc = 0x17d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x17d0a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d0a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d0a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17D0A4u;
    {
        const bool branch_taken_0x17d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0A4u;
            // 0x17d0a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0a4) {
            ctx->pc = 0x17D0E8u;
            goto label_17d0e8;
        }
    }
    ctx->pc = 0x17D0ACu;
    // 0x17d0ac: 0xc05d110  jal         func_174440
    ctx->pc = 0x17D0ACu;
    SET_GPR_U32(ctx, 31, 0x17D0B4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0B4u; }
        if (ctx->pc != 0x17D0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0B4u; }
        if (ctx->pc != 0x17D0B4u) { return; }
    }
    ctx->pc = 0x17D0B4u;
    // 0x17d0b4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d0b8: 0x8c2227f8  lw          $v0, 0x27F8($at)
    ctx->pc = 0x17d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d0c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d0c4: 0xac2227f8  sw          $v0, 0x27F8($at)
    ctx->pc = 0x17d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10232), GPR_U32(ctx, 2));
    // 0x17d0c8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d0cc: 0x8c2227f8  lw          $v0, 0x27F8($at)
    ctx->pc = 0x17d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d0d0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x17d0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17d0d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D0D4u;
    {
        const bool branch_taken_0x17d0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0D4u;
            // 0x17d0d8: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0d4) {
            ctx->pc = 0x17D0E0u;
            goto label_17d0e0;
        }
    }
    ctx->pc = 0x17D0DCu;
    // 0x17d0dc: 0xac2027f8  sw          $zero, 0x27F8($at)
    ctx->pc = 0x17d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10232), GPR_U32(ctx, 0));
label_17d0e0:
    // 0x17d0e0: 0xc060434  jal         func_1810D0
    ctx->pc = 0x17D0E0u;
    SET_GPR_U32(ctx, 31, 0x17D0E8u);
    ctx->pc = 0x1810D0u;
    if (runtime->hasFunction(0x1810D0u)) {
        auto targetFn = runtime->lookupFunction(0x1810D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0E8u; }
        if (ctx->pc != 0x17D0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        saveload_paramInit_0x1810d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0E8u; }
        if (ctx->pc != 0x17D0E8u) { return; }
    }
    ctx->pc = 0x17D0E8u;
label_17d0e8:
    // 0x17d0e8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d0ec: 0x8c2327f8  lw          $v1, 0x27F8($at)
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d0f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d0f4: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x17D0F4u;
    {
        const bool branch_taken_0x17d0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D0F4u;
            // 0x17d0f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0f4) {
            ctx->pc = 0x17D258u;
            goto label_17d258;
        }
    }
    ctx->pc = 0x17D0FCu;
    // 0x17d0fc: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x17D0FCu;
    {
        const bool branch_taken_0x17d0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d0fc) {
            ctx->pc = 0x17D1C0u;
            goto label_17d1c0;
        }
    }
    ctx->pc = 0x17D104u;
    // 0x17d104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d108: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17D108u;
    {
        const bool branch_taken_0x17d108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d108) {
            ctx->pc = 0x17D170u;
            goto label_17d170;
        }
    }
    ctx->pc = 0x17D110u;
    // 0x17d110: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D110u;
    {
        const bool branch_taken_0x17d110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d110) {
            ctx->pc = 0x17D120u;
            goto label_17d120;
        }
    }
    ctx->pc = 0x17D118u;
    // 0x17d118: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x17D118u;
    {
        const bool branch_taken_0x17d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d118) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D120u;
label_17d120:
    // 0x17d120: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d124: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17d128: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d12c: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17d130: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d130u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d134: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D134u;
    {
        const bool branch_taken_0x17d134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D134u;
            // 0x17d138: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d134) {
            ctx->pc = 0x17D158u;
            goto label_17d158;
        }
    }
    ctx->pc = 0x17D13Cu;
    // 0x17d13c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17d140: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d144: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17d148: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d148u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d14c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x17D14Cu;
    {
        const bool branch_taken_0x17d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d14c) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D154u;
    // 0x17d154: 0x0  nop
    ctx->pc = 0x17d154u;
    // NOP
label_17d158:
    // 0x17d158: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17D158u;
    SET_GPR_U32(ctx, 31, 0x17D160u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D160u; }
        if (ctx->pc != 0x17D160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D160u; }
        if (ctx->pc != 0x17D160u) { return; }
    }
    ctx->pc = 0x17D160u;
    // 0x17d160: 0xc060e5c  jal         func_183970
    ctx->pc = 0x17D160u;
    SET_GPR_U32(ctx, 31, 0x17D168u);
    ctx->pc = 0x17D164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D160u;
            // 0x17d164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183970u;
    if (runtime->hasFunction(0x183970u)) {
        auto targetFn = runtime->lookupFunction(0x183970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D168u; }
        if (ctx->pc != 0x17D168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardSaveFunc_0x183970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D168u; }
        if (ctx->pc != 0x17D168u) { return; }
    }
    ctx->pc = 0x17D168u;
    // 0x17d168: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x17D168u;
    {
        const bool branch_taken_0x17d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d168) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D170u;
label_17d170:
    // 0x17d170: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d174: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17d178: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d17c: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17d180: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d180u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d184: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D184u;
    {
        const bool branch_taken_0x17d184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D184u;
            // 0x17d188: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d184) {
            ctx->pc = 0x17D1A8u;
            goto label_17d1a8;
        }
    }
    ctx->pc = 0x17D18Cu;
    // 0x17d18c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17d190: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d194: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17d198: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d198u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d19c: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x17D19Cu;
    {
        const bool branch_taken_0x17d19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d19c) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D1A4u;
    // 0x17d1a4: 0x0  nop
    ctx->pc = 0x17d1a4u;
    // NOP
label_17d1a8:
    // 0x17d1a8: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17D1A8u;
    SET_GPR_U32(ctx, 31, 0x17D1B0u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1B0u; }
        if (ctx->pc != 0x17D1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1B0u; }
        if (ctx->pc != 0x17D1B0u) { return; }
    }
    ctx->pc = 0x17D1B0u;
    // 0x17d1b0: 0xc060b90  jal         func_182E40
    ctx->pc = 0x17D1B0u;
    SET_GPR_U32(ctx, 31, 0x17D1B8u);
    ctx->pc = 0x182E40u;
    if (runtime->hasFunction(0x182E40u)) {
        auto targetFn = runtime->lookupFunction(0x182E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1B8u; }
        if (ctx->pc != 0x17D1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardLoadFunc_0x182e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1B8u; }
        if (ctx->pc != 0x17D1B8u) { return; }
    }
    ctx->pc = 0x17D1B8u;
    // 0x17d1b8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17D1B8u;
    {
        const bool branch_taken_0x17d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1b8) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D1C0u;
label_17d1c0:
    // 0x17d1c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d1c4: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x17d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x17d1c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d1cc: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x17d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x17d1d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d1d0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d1d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17D1D4u;
    {
        const bool branch_taken_0x17d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1d4) {
            ctx->pc = 0x17D208u;
            goto label_17d208;
        }
    }
    ctx->pc = 0x17D1DCu;
    // 0x17d1dc: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x17D1DCu;
    SET_GPR_U32(ctx, 31, 0x17D1E4u);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1E4u; }
        if (ctx->pc != 0x17D1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1E4u; }
        if (ctx->pc != 0x17D1E4u) { return; }
    }
    ctx->pc = 0x17D1E4u;
    // 0x17d1e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d1e8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D1E8u;
    {
        const bool branch_taken_0x17d1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17d1e8) {
            ctx->pc = 0x17D200u;
            goto label_17d200;
        }
    }
    ctx->pc = 0x17D1F0u;
    // 0x17d1f0: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x17D1F0u;
    SET_GPR_U32(ctx, 31, 0x17D1F8u);
    ctx->pc = 0x17D1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1F0u;
            // 0x17d1f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1F8u; }
        if (ctx->pc != 0x17D1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D1F8u; }
        if (ctx->pc != 0x17D1F8u) { return; }
    }
    ctx->pc = 0x17D1F8u;
    // 0x17d1f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D1F8u;
    {
        const bool branch_taken_0x17d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1f8) {
            ctx->pc = 0x17D208u;
            goto label_17d208;
        }
    }
    ctx->pc = 0x17D200u;
label_17d200:
    // 0x17d200: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x17D200u;
    SET_GPR_U32(ctx, 31, 0x17D208u);
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D208u; }
        if (ctx->pc != 0x17D208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D208u; }
        if (ctx->pc != 0x17D208u) { return; }
    }
    ctx->pc = 0x17D208u;
label_17d208:
    // 0x17d208: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d20c: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x17d210: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d214: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x17d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x17d218: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d218u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d21c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x17D21Cu;
    {
        const bool branch_taken_0x17d21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d21c) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D224u;
    // 0x17d224: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x17D224u;
    SET_GPR_U32(ctx, 31, 0x17D22Cu);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D22Cu; }
        if (ctx->pc != 0x17D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D22Cu; }
        if (ctx->pc != 0x17D22Cu) { return; }
    }
    ctx->pc = 0x17D22Cu;
    // 0x17d22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d230: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D230u;
    {
        const bool branch_taken_0x17d230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17d230) {
            ctx->pc = 0x17D248u;
            goto label_17d248;
        }
    }
    ctx->pc = 0x17D238u;
    // 0x17d238: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x17D238u;
    SET_GPR_U32(ctx, 31, 0x17D240u);
    ctx->pc = 0x17D23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D238u;
            // 0x17d23c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D240u; }
        if (ctx->pc != 0x17D240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D240u; }
        if (ctx->pc != 0x17D240u) { return; }
    }
    ctx->pc = 0x17D240u;
    // 0x17d240: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17D240u;
    {
        const bool branch_taken_0x17d240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d240) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D248u;
label_17d248:
    // 0x17d248: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x17D248u;
    SET_GPR_U32(ctx, 31, 0x17D250u);
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D250u; }
        if (ctx->pc != 0x17D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D250u; }
        if (ctx->pc != 0x17D250u) { return; }
    }
    ctx->pc = 0x17D250u;
    // 0x17d250: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17D250u;
    {
        const bool branch_taken_0x17d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d250) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D258u;
label_17d258:
    // 0x17d258: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d25c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x17d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x17d260: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d264: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x17d268: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d268u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d26c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D26Cu;
    {
        const bool branch_taken_0x17d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D26Cu;
            // 0x17d270: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d26c) {
            ctx->pc = 0x17D290u;
            goto label_17d290;
        }
    }
    ctx->pc = 0x17D274u;
    // 0x17d274: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x17d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x17d278: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d27c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x17d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x17d280: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d280u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D284u;
    {
        const bool branch_taken_0x17d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d284) {
            ctx->pc = 0x17D2A0u;
            goto label_17d2a0;
        }
    }
    ctx->pc = 0x17D28Cu;
    // 0x17d28c: 0x0  nop
    ctx->pc = 0x17d28cu;
    // NOP
label_17d290:
    // 0x17d290: 0xc05d110  jal         func_174440
    ctx->pc = 0x17D290u;
    SET_GPR_U32(ctx, 31, 0x17D298u);
    ctx->pc = 0x17D294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D290u;
            // 0x17d294: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D298u; }
        if (ctx->pc != 0x17D298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D298u; }
        if (ctx->pc != 0x17D298u) { return; }
    }
    ctx->pc = 0x17D298u;
    // 0x17d298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d29c: 0x0  nop
    ctx->pc = 0x17d29cu;
    // NOP
label_17d2a0:
    // 0x17d2a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d2a4: 0x8c232410  lw          $v1, 0x2410($at)
    ctx->pc = 0x17d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9232)));
    // 0x17d2a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x17d2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x17d2ac: 0x8c2223a0  lw          $v0, 0x23A0($at)
    ctx->pc = 0x17d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9120)));
    // 0x17d2b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x17d2b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x17d2b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D2B4u;
    {
        const bool branch_taken_0x17d2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2B4u;
            // 0x17d2b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2b4) {
            ctx->pc = 0x17D2C8u;
            goto label_17d2c8;
        }
    }
    ctx->pc = 0x17D2BCu;
    // 0x17d2bc: 0xc05d110  jal         func_174440
    ctx->pc = 0x17D2BCu;
    SET_GPR_U32(ctx, 31, 0x17D2C4u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2C4u; }
        if (ctx->pc != 0x17D2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2C4u; }
        if (ctx->pc != 0x17D2C4u) { return; }
    }
    ctx->pc = 0x17D2C4u;
    // 0x17d2c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17d2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d2c8:
    // 0x17d2c8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x17d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x17d2cc: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d2d0: 0x2405fff4  addiu       $a1, $zero, -0xC
    ctx->pc = 0x17d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x17d2d4: 0x24c61fb0  addiu       $a2, $a2, 0x1FB0
    ctx->pc = 0x17d2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8112));
    // 0x17d2d8: 0xc060a44  jal         func_182910
    ctx->pc = 0x17D2D8u;
    SET_GPR_U32(ctx, 31, 0x17D2E0u);
    ctx->pc = 0x17D2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2D8u;
            // 0x17d2dc: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2E0u; }
        if (ctx->pc != 0x17D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D2E0u; }
        if (ctx->pc != 0x17D2E0u) { return; }
    }
    ctx->pc = 0x17D2E0u;
    // 0x17d2e0: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x17d2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x17d2e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17d2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2e8: 0x2673a170  addiu       $s3, $s3, -0x5E90
    ctx->pc = 0x17d2e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943088));
    // 0x17d2ec: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x17d2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_17d2f0:
    // 0x17d2f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d2f4: 0x8c2227e8  lw          $v0, 0x27E8($at)
    ctx->pc = 0x17d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10216)));
    // 0x17d2f8: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D2F8u;
    {
        const bool branch_taken_0x17d2f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D2F8u;
            // 0x17d2fc: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2f8) {
            ctx->pc = 0x17D330u;
            goto label_17d330;
        }
    }
    ctx->pc = 0x17D300u;
    // 0x17d300: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17d300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17d304: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17d304u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17d308: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d30c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17d30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17d310: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d314: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17d314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17d318: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17d318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d31c: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D31Cu;
    SET_GPR_U32(ctx, 31, 0x17D324u);
    ctx->pc = 0x17D320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D31Cu;
            // 0x17d320: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D324u; }
        if (ctx->pc != 0x17D324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D324u; }
        if (ctx->pc != 0x17D324u) { return; }
    }
    ctx->pc = 0x17D324u;
    // 0x17d324: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17D324u;
    {
        const bool branch_taken_0x17d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d324) {
            ctx->pc = 0x17D358u;
            goto label_17d358;
        }
    }
    ctx->pc = 0x17D32Cu;
    // 0x17d32c: 0x0  nop
    ctx->pc = 0x17d32cu;
    // NOP
label_17d330:
    // 0x17d330: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d334: 0x902b3c90  lbu         $t3, 0x3C90($at)
    ctx->pc = 0x17d334u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15504)));
    // 0x17d338: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17d338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17d33c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x17d33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17d340: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17d344: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17d344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d348: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x17d348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17d34c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17d34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17d350: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D350u;
    SET_GPR_U32(ctx, 31, 0x17D358u);
    ctx->pc = 0x17D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D350u;
            // 0x17d354: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D358u; }
        if (ctx->pc != 0x17D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D358u; }
        if (ctx->pc != 0x17D358u) { return; }
    }
    ctx->pc = 0x17D358u;
label_17d358:
    // 0x17d358: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x17d35c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x17d35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17d360: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x17d360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x17d364: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17D364u;
    {
        const bool branch_taken_0x17d364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D364u;
            // 0x17d368: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d364) {
            ctx->pc = 0x17D2F0u;
            goto label_17d2f0;
        }
    }
    ctx->pc = 0x17D36Cu;
    // 0x17d36c: 0x3c140022  lui         $s4, 0x22
    ctx->pc = 0x17d36cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)34 << 16));
    // 0x17d370: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17d370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d374: 0x2694a230  addiu       $s4, $s4, -0x5DD0
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294943280));
    // 0x17d378: 0x2413fff8  addiu       $s3, $zero, -0x8
    ctx->pc = 0x17d378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x17d37c: 0x0  nop
    ctx->pc = 0x17d37cu;
    // NOP
label_17d380:
    // 0x17d380: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d384: 0x8c2227f8  lw          $v0, 0x27F8($at)
    ctx->pc = 0x17d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d388: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17D388u;
    {
        const bool branch_taken_0x17d388 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D388u;
            // 0x17d38c: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d388) {
            ctx->pc = 0x17D3C0u;
            goto label_17d3c0;
        }
    }
    ctx->pc = 0x17D390u;
    // 0x17d390: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17d390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17d394: 0x902b3c78  lbu         $t3, 0x3C78($at)
    ctx->pc = 0x17d394u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15480)));
    // 0x17d398: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17d398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17d39c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17d3a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17d3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3a4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17d3a8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17d3a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3ac: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D3ACu;
    SET_GPR_U32(ctx, 31, 0x17D3B4u);
    ctx->pc = 0x17D3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3ACu;
            // 0x17d3b0: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3B4u; }
        if (ctx->pc != 0x17D3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3B4u; }
        if (ctx->pc != 0x17D3B4u) { return; }
    }
    ctx->pc = 0x17D3B4u;
    // 0x17d3b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17D3B4u;
    {
        const bool branch_taken_0x17d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3b4) {
            ctx->pc = 0x17D3E8u;
            goto label_17d3e8;
        }
    }
    ctx->pc = 0x17D3BCu;
    // 0x17d3bc: 0x0  nop
    ctx->pc = 0x17d3bcu;
    // NOP
label_17d3c0:
    // 0x17d3c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d3c4: 0x902b3c78  lbu         $t3, 0x3C78($at)
    ctx->pc = 0x17d3c4u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15480)));
    // 0x17d3c8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17d3cc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x17d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17d3d0: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17d3d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3d8: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17d3dc: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17d3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17d3e0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D3E0u;
    SET_GPR_U32(ctx, 31, 0x17D3E8u);
    ctx->pc = 0x17D3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3E0u;
            // 0x17d3e4: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3E8u; }
        if (ctx->pc != 0x17D3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D3E8u; }
        if (ctx->pc != 0x17D3E8u) { return; }
    }
    ctx->pc = 0x17D3E8u;
label_17d3e8:
    // 0x17d3e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17d3ec: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17d3f0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x17d3f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x17d3f4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x17D3F4u;
    {
        const bool branch_taken_0x17d3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D3F4u;
            // 0x17d3f8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3f4) {
            ctx->pc = 0x17D380u;
            goto label_17d380;
        }
    }
    ctx->pc = 0x17D3FCu;
    // 0x17d3fc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d404: 0x8c2327f8  lw          $v1, 0x27F8($at)
    ctx->pc = 0x17d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
    // 0x17d408: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17D408u;
    {
        const bool branch_taken_0x17d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d408) {
            ctx->pc = 0x17D460u;
            goto label_17d460;
        }
    }
    ctx->pc = 0x17D410u;
    // 0x17d410: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x17D410u;
    SET_GPR_U32(ctx, 31, 0x17D418u);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D418u; }
        if (ctx->pc != 0x17D418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D418u; }
        if (ctx->pc != 0x17D418u) { return; }
    }
    ctx->pc = 0x17D418u;
    // 0x17d418: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x17d418u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17d41c: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x17d420: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17d420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17d424: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17d424u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x17d428: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x17d42c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d430: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d438: 0x902b3c78  lbu         $t3, 0x3C78($at)
    ctx->pc = 0x17d438u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15480)));
    // 0x17d43c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d440: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d444: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17d448: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17d44c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x17d44cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d450: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D450u;
    SET_GPR_U32(ctx, 31, 0x17D458u);
    ctx->pc = 0x17D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D450u;
            // 0x17d454: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D458u; }
        if (ctx->pc != 0x17D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D458u; }
        if (ctx->pc != 0x17D458u) { return; }
    }
    ctx->pc = 0x17D458u;
    // 0x17d458: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17D458u;
    {
        const bool branch_taken_0x17d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d458) {
            ctx->pc = 0x17D4A8u;
            goto label_17d4a8;
        }
    }
    ctx->pc = 0x17D460u;
label_17d460:
    // 0x17d460: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x17D460u;
    SET_GPR_U32(ctx, 31, 0x17D468u);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D468u; }
        if (ctx->pc != 0x17D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D468u; }
        if (ctx->pc != 0x17D468u) { return; }
    }
    ctx->pc = 0x17D468u;
    // 0x17d468: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x17d468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17d46c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d470: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x17d470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x17d474: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17d474u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x17d478: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x17d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x17d47c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d484: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x17d484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17d488: 0x902b3c78  lbu         $t3, 0x3C78($at)
    ctx->pc = 0x17d488u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15480)));
    // 0x17d48c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17d490: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17d490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d494: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17d498: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x17d498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17d49c: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x17d49cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x17d4a0: 0xc0608bc  jal         func_1822F0
    ctx->pc = 0x17D4A0u;
    SET_GPR_U32(ctx, 31, 0x17D4A8u);
    ctx->pc = 0x17D4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4A0u;
            // 0x17d4a4: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1822F0u;
    if (runtime->hasFunction(0x1822F0u)) {
        auto targetFn = runtime->lookupFunction(0x1822F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4A8u; }
        if (ctx->pc != 0x17D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAsciiRGBA_0x1822f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4A8u; }
        if (ctx->pc != 0x17D4A8u) { return; }
    }
    ctx->pc = 0x17D4A8u;
label_17d4a8:
    // 0x17d4a8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17d4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17d4ac: 0xc060250  jal         func_180940
    ctx->pc = 0x17D4ACu;
    SET_GPR_U32(ctx, 31, 0x17D4B4u);
    ctx->pc = 0x17D4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4ACu;
            // 0x17d4b0: 0x8c2427f8  lw          $a0, 0x27F8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180940u;
    if (runtime->hasFunction(0x180940u)) {
        auto targetFn = runtime->lookupFunction(0x180940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4B4u; }
        if (ctx->pc != 0x17D4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        barDraw3_0x180940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4B4u; }
        if (ctx->pc != 0x17D4B4u) { return; }
    }
    ctx->pc = 0x17D4B4u;
    // 0x17d4b4: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x17D4B4u;
    SET_GPR_U32(ctx, 31, 0x17D4BCu);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4BCu; }
        if (ctx->pc != 0x17D4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4BCu; }
        if (ctx->pc != 0x17D4BCu) { return; }
    }
    ctx->pc = 0x17D4BCu;
    // 0x17d4bc: 0x1620fed0  bnez        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x17D4BCu;
    {
        const bool branch_taken_0x17d4bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d4bc) {
            ctx->pc = 0x17D000u;
            goto label_17d000;
        }
    }
    ctx->pc = 0x17D4C4u;
    // 0x17d4c4: 0xc065cf8  jal         func_1973E0
    ctx->pc = 0x17D4C4u;
    SET_GPR_U32(ctx, 31, 0x17D4CCu);
    ctx->pc = 0x1973E0u;
    if (runtime->hasFunction(0x1973E0u)) {
        auto targetFn = runtime->lookupFunction(0x1973E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4CCu; }
        if (ctx->pc != 0x17D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAutoSave_0x1973e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4CCu; }
        if (ctx->pc != 0x17D4CCu) { return; }
    }
    ctx->pc = 0x17D4CCu;
    // 0x17d4cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17D4CCu;
    {
        const bool branch_taken_0x17d4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4CCu;
            // 0x17d4d0: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4cc) {
            ctx->pc = 0x17D4F8u;
            goto label_17d4f8;
        }
    }
    ctx->pc = 0x17D4D4u;
    // 0x17d4d4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x17d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x17d4d8: 0x24842820  addiu       $a0, $a0, 0x2820
    ctx->pc = 0x17d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    // 0x17d4dc: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x17d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x17d4e0: 0xc04ecfc  jal         func_13B3F0
    ctx->pc = 0x17D4E0u;
    SET_GPR_U32(ctx, 31, 0x17D4E8u);
    ctx->pc = 0x17D4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4E0u;
            // 0x17d4e4: 0x240602e0  addiu       $a2, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B3F0u;
    if (runtime->hasFunction(0x13B3F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4E8u; }
        if (ctx->pc != 0x17D4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x13b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4E8u; }
        if (ctx->pc != 0x17D4E8u) { return; }
    }
    ctx->pc = 0x17D4E8u;
    // 0x17d4e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D4E8u;
    {
        const bool branch_taken_0x17d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D4E8u;
            // 0x17d4ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d4e8) {
            ctx->pc = 0x17D4F8u;
            goto label_17d4f8;
        }
    }
    ctx->pc = 0x17D4F0u;
    // 0x17d4f0: 0xc060e5c  jal         func_183970
    ctx->pc = 0x17D4F0u;
    SET_GPR_U32(ctx, 31, 0x17D4F8u);
    ctx->pc = 0x183970u;
    if (runtime->hasFunction(0x183970u)) {
        auto targetFn = runtime->lookupFunction(0x183970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4F8u; }
        if (ctx->pc != 0x17D4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardSaveFunc_0x183970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D4F8u; }
        if (ctx->pc != 0x17D4F8u) { return; }
    }
    ctx->pc = 0x17D4F8u;
label_17d4f8:
    // 0x17d4f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d4fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17d4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d50c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d514: 0x3e00008  jr          $ra
    ctx->pc = 0x17D514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D514u;
            // 0x17d518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D000u: goto label_17d000;
            case 0x17D028u: goto label_17d028;
            case 0x17D088u: goto label_17d088;
            case 0x17D090u: goto label_17d090;
            case 0x17D0E0u: goto label_17d0e0;
            case 0x17D0E8u: goto label_17d0e8;
            case 0x17D120u: goto label_17d120;
            case 0x17D158u: goto label_17d158;
            case 0x17D170u: goto label_17d170;
            case 0x17D1A8u: goto label_17d1a8;
            case 0x17D1C0u: goto label_17d1c0;
            case 0x17D200u: goto label_17d200;
            case 0x17D208u: goto label_17d208;
            case 0x17D248u: goto label_17d248;
            case 0x17D258u: goto label_17d258;
            case 0x17D290u: goto label_17d290;
            case 0x17D2A0u: goto label_17d2a0;
            case 0x17D2C8u: goto label_17d2c8;
            case 0x17D2F0u: goto label_17d2f0;
            case 0x17D330u: goto label_17d330;
            case 0x17D358u: goto label_17d358;
            case 0x17D380u: goto label_17d380;
            case 0x17D3C0u: goto label_17d3c0;
            case 0x17D3E8u: goto label_17d3e8;
            case 0x17D460u: goto label_17d460;
            case 0x17D4A8u: goto label_17d4a8;
            case 0x17D4F8u: goto label_17d4f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17D51Cu;
}
