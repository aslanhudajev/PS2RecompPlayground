#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DrawBossInfomation
// Address: 0x1b3a90 - 0x1b3cb0
void DrawBossInfomation_0x1b3a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DrawBossInfomation_0x1b3a90");
#endif

    ctx->pc = 0x1b3a90u;

    // 0x1b3a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b3a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b3a94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b3a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b3a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3a9c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1b3a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3aa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b3aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b3aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b3aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b3aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3aac: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3AACu;
    {
        const bool branch_taken_0x1b3aac = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B3AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AACu;
            // 0x1b3ab0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3aac) {
            ctx->pc = 0x1B3AD0u;
            goto label_1b3ad0;
        }
    }
    ctx->pc = 0x1B3AB4u;
    // 0x1b3ab4: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1b3ab4u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1b3ab8: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1b3ab8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1b3abc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3ABCu;
    {
        const bool branch_taken_0x1b3abc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3abc) {
            ctx->pc = 0x1B3AD0u;
            goto label_1b3ad0;
        }
    }
    ctx->pc = 0x1B3AC4u;
    // 0x1b3ac4: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3AC4u;
    {
        const bool branch_taken_0x1b3ac4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b3ac4) {
            ctx->pc = 0x1B3AD8u;
            goto label_1b3ad8;
        }
    }
    ctx->pc = 0x1B3ACCu;
    // 0x1b3acc: 0x0  nop
    ctx->pc = 0x1b3accu;
    // NOP
label_1b3ad0:
    // 0x1b3ad0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1B3AD0u;
    {
        const bool branch_taken_0x1b3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ad0) {
            ctx->pc = 0x1B3C98u;
            goto label_1b3c98;
        }
    }
    ctx->pc = 0x1B3AD8u;
label_1b3ad8:
    // 0x1b3ad8: 0x3c02c340  lui         $v0, 0xC340
    ctx->pc = 0x1b3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49984 << 16));
    // 0x1b3adc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3ae0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3ae4: 0x3c02c33f  lui         $v0, 0xC33F
    ctx->pc = 0x1b3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49983 << 16));
    // 0x1b3ae8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1b3ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b3aec: 0x3c024930  lui         $v0, 0x4930
    ctx->pc = 0x1b3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18736 << 16));
    // 0x1b3af0: 0x34422d40  ori         $v0, $v0, 0x2D40
    ctx->pc = 0x1b3af0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11584u)));
    // 0x1b3af4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b3af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b3af8: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B3AF8u;
    SET_GPR_U32(ctx, 31, 0x1B3B00u);
    ctx->pc = 0x1B3AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AF8u;
            // 0x1b3afc: 0x24841b50  addiu       $a0, $a0, 0x1B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B00u; }
        if (ctx->pc != 0x1B3B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B00u; }
        if (ctx->pc != 0x1B3B00u) { return; }
    }
    ctx->pc = 0x1B3B00u;
    // 0x1b3b00: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x1b3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x1b3b04: 0x3c04c33a  lui         $a0, 0xC33A
    ctx->pc = 0x1b3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49978 << 16));
    // 0x1b3b08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3b0c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1b3b0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b3b10: 0x3c024930  lui         $v0, 0x4930
    ctx->pc = 0x1b3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18736 << 16));
    // 0x1b3b14: 0x34422d40  ori         $v0, $v0, 0x2D40
    ctx->pc = 0x1b3b14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)11584u)));
    // 0x1b3b18: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3b1c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b3b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b3b20: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B3B20u;
    SET_GPR_U32(ctx, 31, 0x1B3B28u);
    ctx->pc = 0x1B3B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B20u;
            // 0x1b3b24: 0x24841b60  addiu       $a0, $a0, 0x1B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B28u; }
        if (ctx->pc != 0x1B3B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B28u; }
        if (ctx->pc != 0x1B3B28u) { return; }
    }
    ctx->pc = 0x1B3B28u;
    // 0x1b3b28: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3b2c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1b3b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1b3b30: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1b3b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b3b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b3c: 0xc06ce98  jal         func_1B3A60
    ctx->pc = 0x1B3B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B3B44u);
    ctx->pc = 0x1B3B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B3Cu;
            // 0x1b3b40: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A60u;
    if (runtime->hasFunction(0x1B3A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B44u; }
        if (ctx->pc != 0x1B3B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1b3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B44u; }
        if (ctx->pc != 0x1B3B44u) { return; }
    }
    ctx->pc = 0x1B3B44u;
    // 0x1b3b44: 0x3c02c340  lui         $v0, 0xC340
    ctx->pc = 0x1b3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49984 << 16));
    // 0x1b3b48: 0x3c04c33f  lui         $a0, 0xC33F
    ctx->pc = 0x1b3b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49983 << 16));
    // 0x1b3b4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3b50: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1b3b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b3b54: 0x3c024935  lui         $v0, 0x4935
    ctx->pc = 0x1b3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18741 << 16));
    // 0x1b3b58: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x1b3b58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3904u)));
    // 0x1b3b5c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3b60: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b3b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b3b64: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B3B64u;
    SET_GPR_U32(ctx, 31, 0x1B3B6Cu);
    ctx->pc = 0x1B3B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B64u;
            // 0x1b3b68: 0x24841b70  addiu       $a0, $a0, 0x1B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B6Cu; }
        if (ctx->pc != 0x1B3B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B6Cu; }
        if (ctx->pc != 0x1B3B6Cu) { return; }
    }
    ctx->pc = 0x1B3B6Cu;
    // 0x1b3b6c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1b3b6cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3b70: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x1b3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x1b3b74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3b78: 0x3c05c33a  lui         $a1, 0xC33A
    ctx->pc = 0x1b3b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49978 << 16));
    // 0x1b3b7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3b7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3b80: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3b84: 0x3c024935  lui         $v0, 0x4935
    ctx->pc = 0x1b3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18741 << 16));
    // 0x1b3b88: 0x3c084280  lui         $t0, 0x4280
    ctx->pc = 0x1b3b88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17024 << 16));
    // 0x1b3b8c: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x1b3b8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3904u)));
    // 0x1b3b90: 0x3c064380  lui         $a2, 0x4380
    ctx->pc = 0x1b3b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17280 << 16));
    // 0x1b3b94: 0x24841b80  addiu       $a0, $a0, 0x1B80
    ctx->pc = 0x1b3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7040));
    // 0x1b3b98: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1b3b98u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x1b3b9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b3b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3ba0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1b3ba0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3ba4: 0x0  nop
    ctx->pc = 0x1b3ba4u;
    // NOP
    // 0x1b3ba8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b3ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b3bac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b3bacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3bb0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1b3bb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3bb4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b3bb4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3bb8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1b3bb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b3bbc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1b3bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b3bc0: 0xc06cea0  jal         func_1B3A80
    ctx->pc = 0x1B3BC0u;
    SET_GPR_U32(ctx, 31, 0x1B3BC8u);
    ctx->pc = 0x1B3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BC0u;
            // 0x1b3bc4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A80u;
    if (runtime->hasFunction(0x1B3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC8u; }
        if (ctx->pc != 0x1B3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1b3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC8u; }
        if (ctx->pc != 0x1B3BC8u) { return; }
    }
    ctx->pc = 0x1B3BC8u;
    // 0x1b3bc8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1b3bcc: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1b3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1b3bd0: 0x24841b44  addiu       $a0, $a0, 0x1B44
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6980));
    // 0x1b3bd4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1b3bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1b3bd8: 0xc06ce98  jal         func_1B3A60
    ctx->pc = 0x1B3BD8u;
    SET_GPR_U32(ctx, 31, 0x1B3BE0u);
    ctx->pc = 0x1B3BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BD8u;
            // 0x1b3bdc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A60u;
    if (runtime->hasFunction(0x1B3A60u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BE0u; }
        if (ctx->pc != 0x1B3BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1b3a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BE0u; }
        if (ctx->pc != 0x1B3BE0u) { return; }
    }
    ctx->pc = 0x1B3BE0u;
    // 0x1b3be0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b3be4: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x1b3be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1b3be8: 0x24421b70  addiu       $v0, $v0, 0x1B70
    ctx->pc = 0x1b3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7024));
    // 0x1b3bec: 0x27b2006c  addiu       $s2, $sp, 0x6C
    ctx->pc = 0x1b3becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b3bf0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b3bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b3bf4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b3bf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b3bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bfc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b3bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b3c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3c04: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B3C04u;
    SET_GPR_U32(ctx, 31, 0x1B3C0Cu);
    ctx->pc = 0x1B3C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C04u;
            // 0x1b3c08: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C0Cu; }
        if (ctx->pc != 0x1B3C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C0Cu; }
        if (ctx->pc != 0x1B3C0Cu) { return; }
    }
    ctx->pc = 0x1B3C0Cu;
    // 0x1b3c0c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1B3C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C14u);
    ctx->pc = 0x1B3C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C0Cu;
            // 0x1b3c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A40u;
    if (runtime->hasFunction(0x1B3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C14u; }
        if (ctx->pc != 0x1B3C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1b3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C14u; }
        if (ctx->pc != 0x1B3C14u) { return; }
    }
    ctx->pc = 0x1B3C14u;
    // 0x1b3c14: 0xc05c2a0  jal         func_170A80
    ctx->pc = 0x1B3C14u;
    SET_GPR_U32(ctx, 31, 0x1B3C1Cu);
    ctx->pc = 0x170A80u;
    if (runtime->hasFunction(0x170A80u)) {
        auto targetFn = runtime->lookupFunction(0x170A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C1Cu; }
        if (ctx->pc != 0x1B3C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteF_0x170a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C1Cu; }
        if (ctx->pc != 0x1B3C1Cu) { return; }
    }
    ctx->pc = 0x1B3C1Cu;
    // 0x1b3c1c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b3c20: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b3c24: 0x24631b50  addiu       $v1, $v1, 0x1B50
    ctx->pc = 0x1b3c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6992));
    // 0x1b3c28: 0x24421b40  addiu       $v0, $v0, 0x1B40
    ctx->pc = 0x1b3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1b3c2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1b3c30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3c34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b3c38: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b3c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b3c3c: 0xc06ce94  jal         func_1B3A50
    ctx->pc = 0x1B3C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C44u);
    ctx->pc = 0x1B3C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C3Cu;
            // 0x1b3c40: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A50u;
    if (runtime->hasFunction(0x1B3A50u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C44u; }
        if (ctx->pc != 0x1B3C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1b3a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C44u; }
        if (ctx->pc != 0x1B3C44u) { return; }
    }
    ctx->pc = 0x1B3C44u;
    // 0x1b3c44: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1B3C44u;
    SET_GPR_U32(ctx, 31, 0x1B3C4Cu);
    ctx->pc = 0x1B3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C44u;
            // 0x1b3c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3A40u;
    if (runtime->hasFunction(0x1B3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1B3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C4Cu; }
        if (ctx->pc != 0x1B3C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1b3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C4Cu; }
        if (ctx->pc != 0x1B3C4Cu) { return; }
    }
    ctx->pc = 0x1B3C4Cu;
    // 0x1b3c4c: 0xc05c2a0  jal         func_170A80
    ctx->pc = 0x1B3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C54u);
    ctx->pc = 0x170A80u;
    if (runtime->hasFunction(0x170A80u)) {
        auto targetFn = runtime->lookupFunction(0x170A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C54u; }
        if (ctx->pc != 0x1B3C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteF_0x170a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C54u; }
        if (ctx->pc != 0x1B3C54u) { return; }
    }
    ctx->pc = 0x1B3C54u;
    // 0x1b3c54: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1b3c58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b3c5c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1b3c5cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)34079u)));
    // 0x1b3c60: 0x111fc2  srl         $v1, $s1, 31
    ctx->pc = 0x1b3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x1b3c64: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x1b3c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b3c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3c6c: 0x24a52a40  addiu       $a1, $a1, 0x2A40
    ctx->pc = 0x1b3c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    // 0x1b3c70: 0x1010  mfhi        $v0
    ctx->pc = 0x1b3c70u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b3c74: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1b3c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1b3c78: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x1B3C78u;
    SET_GPR_U32(ctx, 31, 0x1B3C80u);
    ctx->pc = 0x1B3C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C78u;
            // 0x1b3c7c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C80u; }
        if (ctx->pc != 0x1B3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C80u; }
        if (ctx->pc != 0x1B3C80u) { return; }
    }
    ctx->pc = 0x1B3C80u;
    // 0x1b3c80: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b3c84: 0x2405fff5  addiu       $a1, $zero, -0xB
    ctx->pc = 0x1b3c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x1b3c88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b3c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b3c8c: 0xc060a44  jal         func_182910
    ctx->pc = 0x1B3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B3C94u);
    ctx->pc = 0x1B3C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C8Cu;
            // 0x1b3c90: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182910u;
    if (runtime->hasFunction(0x182910u)) {
        auto targetFn = runtime->lookupFunction(0x182910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C94u; }
        if (ctx->pc != 0x1B3C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrintAscii_0x182910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C94u; }
        if (ctx->pc != 0x1B3C94u) { return; }
    }
    ctx->pc = 0x1B3C94u;
    // 0x1b3c94: 0x0  nop
    ctx->pc = 0x1b3c94u;
    // NOP
label_1b3c98:
    // 0x1b3c98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b3c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3c9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b3ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CA8u;
            // 0x1b3cac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B3AD0u: goto label_1b3ad0;
            case 0x1B3AD8u: goto label_1b3ad8;
            case 0x1B3C98u: goto label_1b3c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3CB0u;
}
