#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreatePlayer
// Address: 0x18d680 - 0x18d814
void CreatePlayer_0x18d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreatePlayer_0x18d680");
#endif

    ctx->pc = 0x18d680u;

    // 0x18d680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18d684: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18d684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18d688: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18d68c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18d690: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18d690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18d694: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18d69c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18d6a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18d6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18d6a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18d6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d6ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18d6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d6b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18d6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d6bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18d6bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x18d6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d6c4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18d6c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6c8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x18d6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d6cc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d6d0: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x18d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x18d6d4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x18D6D4u;
    SET_GPR_U32(ctx, 31, 0x18D6DCu);
    ctx->pc = 0x18D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6D4u;
            // 0x18d6d8: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6DCu; }
        if (ctx->pc != 0x18D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6DCu; }
        if (ctx->pc != 0x18D6DCu) { return; }
    }
    ctx->pc = 0x18D6DCu;
    // 0x18d6dc: 0xae150070  sw          $s5, 0x70($s0)
    ctx->pc = 0x18d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 21));
    // 0x18d6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d6e4: 0xae140074  sw          $s4, 0x74($s0)
    ctx->pc = 0x18d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 20));
    // 0x18d6e8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x18d6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x18d6ec: 0xae13007c  sw          $s3, 0x7C($s0)
    ctx->pc = 0x18d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 19));
    // 0x18d6f0: 0xae110078  sw          $s1, 0x78($s0)
    ctx->pc = 0x18d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 17));
    // 0x18d6f4: 0xae120080  sw          $s2, 0x80($s0)
    ctx->pc = 0x18d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 18));
    // 0x18d6f8: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x18d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x18d6fc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x18d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x18d700: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x18d700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x18d704: 0x8c221618  lw          $v0, 0x1618($at)
    ctx->pc = 0x18d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x18d708: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x18d708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x18d70c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x18d70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x18d710: 0x8c22161c  lw          $v0, 0x161C($at)
    ctx->pc = 0x18d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x18d714: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x18d714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x18d718: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x18d718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18d71c: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x18d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x18d720: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18d720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18d724: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d728: 0xc060694  jal         func_181A50
    ctx->pc = 0x18D728u;
    SET_GPR_U32(ctx, 31, 0x18D730u);
    ctx->pc = 0x18D72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D728u;
            // 0x18d72c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D730u; }
        if (ctx->pc != 0x18D730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D730u; }
        if (ctx->pc != 0x18D730u) { return; }
    }
    ctx->pc = 0x18D730u;
    // 0x18d730: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18d730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18d734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d738: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x18d738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x18d73c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x18d740: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x18d740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x18d744: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x18d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x18d748: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x18d748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x18d74c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x18d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x18d750: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x18d750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x18d754: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x18d754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x18d758: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18d75c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D75Cu;
    {
        const bool branch_taken_0x18d75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d75c) {
            ctx->pc = 0x18D778u;
            goto label_18d778;
        }
    }
    ctx->pc = 0x18D764u;
    // 0x18d764: 0x3c023f42  lui         $v0, 0x3F42
    ctx->pc = 0x18d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16194 << 16));
    // 0x18d768: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x18d768u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
    // 0x18d76c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18D76Cu;
    {
        const bool branch_taken_0x18d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D76Cu;
            // 0x18d770: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d76c) {
            ctx->pc = 0x18D788u;
            goto label_18d788;
        }
    }
    ctx->pc = 0x18D774u;
    // 0x18d774: 0x0  nop
    ctx->pc = 0x18d774u;
    // NOP
label_18d778:
    // 0x18d778: 0x3c02bf42  lui         $v0, 0xBF42
    ctx->pc = 0x18d778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48962 << 16));
    // 0x18d77c: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x18d77cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
    // 0x18d780: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x18d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x18d784: 0x0  nop
    ctx->pc = 0x18d784u;
    // NOP
label_18d788:
    // 0x18d788: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x18D788u;
    SET_GPR_U32(ctx, 31, 0x18D790u);
    ctx->pc = 0x18D78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D788u;
            // 0x18d78c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D790u; }
        if (ctx->pc != 0x18D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D790u; }
        if (ctx->pc != 0x18D790u) { return; }
    }
    ctx->pc = 0x18D790u;
    // 0x18d790: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x18d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d794: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d798: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x18D798u;
    SET_GPR_U32(ctx, 31, 0x18D7A0u);
    ctx->pc = 0x18D79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D798u;
            // 0x18d79c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7A0u; }
        if (ctx->pc != 0x18D7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7A0u; }
        if (ctx->pc != 0x18D7A0u) { return; }
    }
    ctx->pc = 0x18D7A0u;
    // 0x18d7a0: 0xc60c0054  lwc1        $f12, 0x54($s0)
    ctx->pc = 0x18d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d7a4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d7a8: 0xc04b804  jal         func_12E010
    ctx->pc = 0x18D7A8u;
    SET_GPR_U32(ctx, 31, 0x18D7B0u);
    ctx->pc = 0x18D7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7A8u;
            // 0x18d7ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7B0u; }
        if (ctx->pc != 0x18D7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7B0u; }
        if (ctx->pc != 0x18D7B0u) { return; }
    }
    ctx->pc = 0x18D7B0u;
    // 0x18d7b0: 0xc60c0058  lwc1        $f12, 0x58($s0)
    ctx->pc = 0x18d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d7b4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d7b8: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x18D7B8u;
    SET_GPR_U32(ctx, 31, 0x18D7C0u);
    ctx->pc = 0x18D7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7B8u;
            // 0x18d7bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7C0u; }
        if (ctx->pc != 0x18D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7C0u; }
        if (ctx->pc != 0x18D7C0u) { return; }
    }
    ctx->pc = 0x18D7C0u;
    // 0x18d7c0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d7c4: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x18d7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x18d7c8: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x18D7C8u;
    SET_GPR_U32(ctx, 31, 0x18D7D0u);
    ctx->pc = 0x18D7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7C8u;
            // 0x18d7cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7D0u; }
        if (ctx->pc != 0x18D7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7D0u; }
        if (ctx->pc != 0x18D7D0u) { return; }
    }
    ctx->pc = 0x18D7D0u;
    // 0x18d7d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d7d4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x18d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18d7d8: 0xc04b76e  jal         func_12DDB8
    ctx->pc = 0x18D7D8u;
    SET_GPR_U32(ctx, 31, 0x18D7E0u);
    ctx->pc = 0x18D7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7D8u;
            // 0x18d7dc: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDB8u;
    if (runtime->hasFunction(0x12DDB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7E0u; }
        if (ctx->pc != 0x18D7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x12ddb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7E0u; }
        if (ctx->pc != 0x18D7E0u) { return; }
    }
    ctx->pc = 0x18D7E0u;
    // 0x18d7e0: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x18d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x18d7e4: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x18d7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18d7e8: 0xc063608  jal         func_18D820
    ctx->pc = 0x18D7E8u;
    SET_GPR_U32(ctx, 31, 0x18D7F0u);
    ctx->pc = 0x18D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D7E8u;
            // 0x18d7ec: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D820u;
    if (runtime->hasFunction(0x18D820u)) {
        auto targetFn = runtime->lookupFunction(0x18D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F0u; }
        if (ctx->pc != 0x18D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexChangePlayer_0x18d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F0u; }
        if (ctx->pc != 0x18D7F0u) { return; }
    }
    ctx->pc = 0x18D7F0u;
    // 0x18d7f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18d7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d7f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18d7f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d7f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18d7f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d7fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18d7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d800: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18d800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D80Cu;
            // 0x18d810: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D778u: goto label_18d778;
            case 0x18D788u: goto label_18d788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D814u;
}
