#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: playQuiz
// Address: 0x100bc8 - 0x101394
void playQuiz_0x100bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x100bc8u;

    // 0x100bc8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x100bcc: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x100bd0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x100bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x100bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100bd8: 0x3c170013  lui         $s7, 0x13
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)19 << 16));
    // 0x100bdc: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x100bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x100be0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x100be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x100be4: 0x26e31320  addiu       $v1, $s7, 0x1320
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
    // 0x100be8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x100be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x100bec: 0x24a41300  addiu       $a0, $a1, 0x1300
    ctx->pc = 0x100becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x100bf0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x100bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x100bf4: 0x3c1e0013  lui         $fp, 0x13
    ctx->pc = 0x100bf4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)19 << 16));
    // 0x100bf8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x100bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x100bfc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x100bfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c00: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x100c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x100c04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x100c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x100c08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x100c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x100c0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x100c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x100c10: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x100c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x100c14: 0xa4600130  sh          $zero, 0x130($v1)
    ctx->pc = 0x100c14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x100c18: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x100c18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x100c1c: 0xa7c21458  sh          $v0, 0x1458($fp)
    ctx->pc = 0x100c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 5208), (uint16_t)GPR_U32(ctx, 2));
    // 0x100c20: 0xa7808108  sh          $zero, -0x7EF8($gp)
    ctx->pc = 0x100c20u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934792), (uint16_t)GPR_U32(ctx, 0));
    // 0x100c24: 0xa782810a  sh          $v0, -0x7EF6($gp)
    ctx->pc = 0x100c24u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934794), (uint16_t)GPR_U32(ctx, 2));
    // 0x100c28: 0xa780810c  sh          $zero, -0x7EF4($gp)
    ctx->pc = 0x100c28u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934796), (uint16_t)GPR_U32(ctx, 0));
    // 0x100c2c: 0xa782810e  sh          $v0, -0x7EF2($gp)
    ctx->pc = 0x100c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934798), (uint16_t)GPR_U32(ctx, 2));
    // 0x100c30: 0xc042510  jal         func_109440
    ctx->pc = 0x100C30u;
    SET_GPR_U32(ctx, 31, 0x100C38u);
    ctx->pc = 0x100C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C30u;
            // 0x100c34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109440u;
    if (runtime->hasFunction(0x109440u)) {
        auto targetFn = runtime->lookupFunction(0x109440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C38u; }
        if (ctx->pc != 0x100C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setRandomNumber_0x109440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C38u; }
        if (ctx->pc != 0x100C38u) { return; }
    }
    ctx->pc = 0x100C38u;
    // 0x100c38: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x100C38u;
    SET_GPR_U32(ctx, 31, 0x100C40u);
    ctx->pc = 0x100C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C38u;
            // 0x100c3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (runtime->hasFunction(0x10BF40u)) {
        auto targetFn = runtime->lookupFunction(0x10BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C40u; }
        if (ctx->pc != 0x100C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C40u; }
        if (ctx->pc != 0x100C40u) { return; }
    }
    ctx->pc = 0x100C40u;
    // 0x100c40: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x100c44: 0xaf8280b0  sw          $v0, -0x7F50($gp)
    ctx->pc = 0x100c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
    // 0x100c48: 0x84831468  lh          $v1, 0x1468($a0)
    ctx->pc = 0x100c48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5224)));
    // 0x100c4c: 0x186001c2  blez        $v1, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x100C4Cu;
    {
        const bool branch_taken_0x100c4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x100C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C4Cu;
            // 0x100c50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c4c) {
            ctx->pc = 0x101358u;
            goto label_101358;
        }
    }
    ctx->pc = 0x100C54u;
    // 0x100c54: 0x0  nop
    ctx->pc = 0x100c54u;
    // NOP
label_100c58:
    // 0x100c58: 0xc04292e  jal         func_10A4B8
    ctx->pc = 0x100C58u;
    SET_GPR_U32(ctx, 31, 0x100C60u);
    ctx->pc = 0x100C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C58u;
            // 0x100c5c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A4B8u;
    if (runtime->hasFunction(0x10A4B8u)) {
        auto targetFn = runtime->lookupFunction(0x10A4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C60u; }
        if (ctx->pc != 0x100C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memInit_0x10a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C60u; }
        if (ctx->pc != 0x100C60u) { return; }
    }
    ctx->pc = 0x100C60u;
    // 0x100c60: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x100c64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x100c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100c68: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x100c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x100c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100c70: 0x3c057f7f  lui         $a1, 0x7F7F
    ctx->pc = 0x100c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32639 << 16));
    // 0x100c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c78: 0x34a57f7f  ori         $a1, $a1, 0x7F7F
    ctx->pc = 0x100c78u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32639u)));
    // 0x100c7c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x100c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x100c80: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x100c80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x100c84: 0xc04003a  jal         func_1000E8
    ctx->pc = 0x100C84u;
    SET_GPR_U32(ctx, 31, 0x100C8Cu);
    ctx->pc = 0x100C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C84u;
            // 0x100c88: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000E8u;
    if (runtime->hasFunction(0x1000E8u)) {
        auto targetFn = runtime->lookupFunction(0x1000E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C8Cu; }
        if (ctx->pc != 0x100C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C8Cu; }
        if (ctx->pc != 0x100C8Cu) { return; }
    }
    ctx->pc = 0x100C8Cu;
    // 0x100c8c: 0x24020a28  addiu       $v0, $zero, 0xA28
    ctx->pc = 0x100c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x100c90: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x100c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x100c94: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x100c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100c98: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x100c98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x100c9c: 0x247214a0  addiu       $s2, $v1, 0x14A0
    ctx->pc = 0x100c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
label_100ca0:
    // 0x100ca0: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100CA0u;
    SET_GPR_U32(ctx, 31, 0x100CA8u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CA8u; }
        if (ctx->pc != 0x100CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CA8u; }
        if (ctx->pc != 0x100CA8u) { return; }
    }
    ctx->pc = 0x100CA8u;
    // 0x100ca8: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100CA8u;
    SET_GPR_U32(ctx, 31, 0x100CB0u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CB0u; }
        if (ctx->pc != 0x100CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CB0u; }
        if (ctx->pc != 0x100CB0u) { return; }
    }
    ctx->pc = 0x100CB0u;
    // 0x100cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cb8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100cbc: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x100cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100cc0: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x100cc4: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x100cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100cc8: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100CC8u;
    SET_GPR_U32(ctx, 31, 0x100CD0u);
    ctx->pc = 0x100CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100CC8u;
            // 0x100ccc: 0x2125021  addu        $t2, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CD0u; }
        if (ctx->pc != 0x100CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CD0u; }
        if (ctx->pc != 0x100CD0u) { return; }
    }
    ctx->pc = 0x100CD0u;
    // 0x100cd0: 0xc04295e  jal         func_10A578
    ctx->pc = 0x100CD0u;
    SET_GPR_U32(ctx, 31, 0x100CD8u);
    ctx->pc = 0x100CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100CD0u;
            // 0x100cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CD8u; }
        if (ctx->pc != 0x100CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CD8u; }
        if (ctx->pc != 0x100CD8u) { return; }
    }
    ctx->pc = 0x100CD8u;
    // 0x100cd8: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x100CD8u;
    SET_GPR_U32(ctx, 31, 0x100CE0u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CE0u; }
        if (ctx->pc != 0x100CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CE0u; }
        if (ctx->pc != 0x100CE0u) { return; }
    }
    ctx->pc = 0x100CE0u;
    // 0x100ce0: 0xc042378  jal         func_108DE0
    ctx->pc = 0x100CE0u;
    SET_GPR_U32(ctx, 31, 0x100CE8u);
    ctx->pc = 0x100CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100CE0u;
            // 0x100ce4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (runtime->hasFunction(0x108DE0u)) {
        auto targetFn = runtime->lookupFunction(0x108DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CE8u; }
        if (ctx->pc != 0x100CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CE8u; }
        if (ctx->pc != 0x100CE8u) { return; }
    }
    ctx->pc = 0x100CE8u;
    // 0x100ce8: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100CE8u;
    SET_GPR_U32(ctx, 31, 0x100CF0u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CF0u; }
        if (ctx->pc != 0x100CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CF0u; }
        if (ctx->pc != 0x100CF0u) { return; }
    }
    ctx->pc = 0x100CF0u;
    // 0x100cf0: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x100cf4: 0x2842007f  slti        $v0, $v0, 0x7F
    ctx->pc = 0x100cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x100cf8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x100CF8u;
    {
        const bool branch_taken_0x100cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100CF8u;
            // 0x100cfc: 0x24020a28  addiu       $v0, $zero, 0xA28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cf8) {
            ctx->pc = 0x100CA0u;
            goto label_100ca0;
        }
    }
    ctx->pc = 0x100D00u;
    // 0x100d00: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x100d04: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x100d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100d08: 0x247214a0  addiu       $s2, $v1, 0x14A0
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
    // 0x100d0c: 0x0  nop
    ctx->pc = 0x100d0cu;
    // NOP
label_100d10:
    // 0x100d10: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100D10u;
    SET_GPR_U32(ctx, 31, 0x100D18u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D18u; }
        if (ctx->pc != 0x100D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D18u; }
        if (ctx->pc != 0x100D18u) { return; }
    }
    ctx->pc = 0x100D18u;
    // 0x100d18: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100D18u;
    SET_GPR_U32(ctx, 31, 0x100D20u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D20u; }
        if (ctx->pc != 0x100D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D20u; }
        if (ctx->pc != 0x100D20u) { return; }
    }
    ctx->pc = 0x100D20u;
    // 0x100d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d28: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100d2c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100d30: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x100d34: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x100d34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100d38: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100D38u;
    SET_GPR_U32(ctx, 31, 0x100D40u);
    ctx->pc = 0x100D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100D38u;
            // 0x100d3c: 0x2125021  addu        $t2, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D40u; }
        if (ctx->pc != 0x100D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D40u; }
        if (ctx->pc != 0x100D40u) { return; }
    }
    ctx->pc = 0x100D40u;
    // 0x100d40: 0xc04295e  jal         func_10A578
    ctx->pc = 0x100D40u;
    SET_GPR_U32(ctx, 31, 0x100D48u);
    ctx->pc = 0x100D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100D40u;
            // 0x100d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D48u; }
        if (ctx->pc != 0x100D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D48u; }
        if (ctx->pc != 0x100D48u) { return; }
    }
    ctx->pc = 0x100D48u;
    // 0x100d48: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x100D48u;
    SET_GPR_U32(ctx, 31, 0x100D50u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D50u; }
        if (ctx->pc != 0x100D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D50u; }
        if (ctx->pc != 0x100D50u) { return; }
    }
    ctx->pc = 0x100D50u;
    // 0x100d50: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100D50u;
    SET_GPR_U32(ctx, 31, 0x100D58u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D58u; }
        if (ctx->pc != 0x100D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D58u; }
        if (ctx->pc != 0x100D58u) { return; }
    }
    ctx->pc = 0x100D58u;
    // 0x100d58: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x100d58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d5c: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x100d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x100d60: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x100D60u;
    {
        const bool branch_taken_0x100d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D60u;
            // 0x100d64: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d60) {
            ctx->pc = 0x100D10u;
            goto label_100d10;
        }
    }
    ctx->pc = 0x100D68u;
    // 0x100d68: 0x24020a28  addiu       $v0, $zero, 0xA28
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x100d6c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x100d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x100d70: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x100d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100d74: 0xaf83814c  sw          $v1, -0x7EB4($gp)
    ctx->pc = 0x100d74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 3));
    // 0x100d78: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x100d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x100d7c: 0x245114a0  addiu       $s1, $v0, 0x14A0
    ctx->pc = 0x100d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
label_100d80:
    // 0x100d80: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100D80u;
    SET_GPR_U32(ctx, 31, 0x100D88u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D88u; }
        if (ctx->pc != 0x100D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D88u; }
        if (ctx->pc != 0x100D88u) { return; }
    }
    ctx->pc = 0x100D88u;
    // 0x100d88: 0xc04297c  jal         func_10A5F0
    ctx->pc = 0x100D88u;
    SET_GPR_U32(ctx, 31, 0x100D90u);
    ctx->pc = 0x10A5F0u;
    if (runtime->hasFunction(0x10A5F0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D90u; }
        if (ctx->pc != 0x100D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D90u; }
        if (ctx->pc != 0x100D90u) { return; }
    }
    ctx->pc = 0x100D90u;
    // 0x100d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d98: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x100d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100d9c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x100d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x100da0: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x100da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x100da4: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x100da8: 0xc0426c4  jal         func_109B10
    ctx->pc = 0x100DA8u;
    SET_GPR_U32(ctx, 31, 0x100DB0u);
    ctx->pc = 0x100DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100DA8u;
            // 0x100dac: 0x2115021  addu        $t2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109B10u;
    if (runtime->hasFunction(0x109B10u)) {
        auto targetFn = runtime->lookupFunction(0x109B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DB0u; }
        if (ctx->pc != 0x100DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt2_0x109b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DB0u; }
        if (ctx->pc != 0x100DB0u) { return; }
    }
    ctx->pc = 0x100DB0u;
    // 0x100db0: 0xc04295e  jal         func_10A578
    ctx->pc = 0x100DB0u;
    SET_GPR_U32(ctx, 31, 0x100DB8u);
    ctx->pc = 0x100DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100DB0u;
            // 0x100db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A578u;
    if (runtime->hasFunction(0x10A578u)) {
        auto targetFn = runtime->lookupFunction(0x10A578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DB8u; }
        if (ctx->pc != 0x100DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DB8u; }
        if (ctx->pc != 0x100DB8u) { return; }
    }
    ctx->pc = 0x100DB8u;
    // 0x100db8: 0xc042970  jal         func_10A5C0
    ctx->pc = 0x100DB8u;
    SET_GPR_U32(ctx, 31, 0x100DC0u);
    ctx->pc = 0x10A5C0u;
    if (runtime->hasFunction(0x10A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x10A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DC0u; }
        if (ctx->pc != 0x100DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DC0u; }
        if (ctx->pc != 0x100DC0u) { return; }
    }
    ctx->pc = 0x100DC0u;
    // 0x100dc0: 0xc04238e  jal         func_108E38
    ctx->pc = 0x100DC0u;
    SET_GPR_U32(ctx, 31, 0x100DC8u);
    ctx->pc = 0x100DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100DC0u;
            // 0x100dc4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DC8u; }
        if (ctx->pc != 0x100DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DC8u; }
        if (ctx->pc != 0x100DC8u) { return; }
    }
    ctx->pc = 0x100DC8u;
    // 0x100dc8: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100DC8u;
    SET_GPR_U32(ctx, 31, 0x100DD0u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DD0u; }
        if (ctx->pc != 0x100DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DD0u; }
        if (ctx->pc != 0x100DD0u) { return; }
    }
    ctx->pc = 0x100DD0u;
    // 0x100dd0: 0x8f82814c  lw          $v0, -0x7EB4($gp)
    ctx->pc = 0x100dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x100dd4: 0x1c40ffea  bgtz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x100DD4u;
    {
        const bool branch_taken_0x100dd4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x100dd4) {
            ctx->pc = 0x100D80u;
            goto label_100d80;
        }
    }
    ctx->pc = 0x100DDCu;
    // 0x100ddc: 0xc042896  jal         func_10A258
    ctx->pc = 0x100DDCu;
    SET_GPR_U32(ctx, 31, 0x100DE4u);
    ctx->pc = 0x10A258u;
    if (runtime->hasFunction(0x10A258u)) {
        auto targetFn = runtime->lookupFunction(0x10A258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DE4u; }
        if (ctx->pc != 0x100DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memFree_0x10a258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DE4u; }
        if (ctx->pc != 0x100DE4u) { return; }
    }
    ctx->pc = 0x100DE4u;
    // 0x100de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100DE4u;
    {
        const bool branch_taken_0x100de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100DE4u;
            // 0x100de8: 0xaf80814c  sw          $zero, -0x7EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100de4) {
            ctx->pc = 0x100DF4u;
            goto label_100df4;
        }
    }
    ctx->pc = 0x100DECu;
    // 0x100dec: 0x0  nop
    ctx->pc = 0x100decu;
    // NOP
label_100df0:
    // 0x100df0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x100df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_100df4:
    // 0x100df4: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x100df8: 0x8f83814c  lw          $v1, -0x7EB4($gp)
    ctx->pc = 0x100df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x100dfc: 0x2450e120  addiu       $s0, $v0, -0x1EE0
    ctx->pc = 0x100dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959392));
    // 0x100e00: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x100e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100e04: 0x0  nop
    ctx->pc = 0x100e04u;
    // NOP
label_100e08:
    // 0x100e08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100e0c: 0xaf85816c  sw          $a1, -0x7E94($gp)
    ctx->pc = 0x100e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934892), GPR_U32(ctx, 5));
    // 0x100e10: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x100E10u;
    {
        const bool branch_taken_0x100e10 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x100E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E10u;
            // 0x100e14: 0xaf828170  sw          $v0, -0x7E90($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e10) {
            ctx->pc = 0x100E30u;
            goto label_100e30;
        }
    }
    ctx->pc = 0x100E18u;
    // 0x100e18: 0xc0410c6  jal         func_104318
    ctx->pc = 0x100E18u;
    SET_GPR_U32(ctx, 31, 0x100E20u);
    ctx->pc = 0x104318u;
    if (runtime->hasFunction(0x104318u)) {
        auto targetFn = runtime->lookupFunction(0x104318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E20u; }
        if (ctx->pc != 0x100E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadPackage_0x104318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E20u; }
        if (ctx->pc != 0x100E20u) { return; }
    }
    ctx->pc = 0x100E20u;
    // 0x100e20: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x100e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x100e24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x100e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100e28: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x100E28u;
    SET_GPR_U32(ctx, 31, 0x100E30u);
    ctx->pc = 0x100E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E28u;
            // 0x100e2c: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E30u; }
        if (ctx->pc != 0x100E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E30u; }
        if (ctx->pc != 0x100E30u) { return; }
    }
    ctx->pc = 0x100E30u;
label_100e30:
    // 0x100e30: 0x8f828118  lw          $v0, -0x7EE8($gp)
    ctx->pc = 0x100e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x100e34: 0x8f83811c  lw          $v1, -0x7EE4($gp)
    ctx->pc = 0x100e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x100e38: 0x8f848120  lw          $a0, -0x7EE0($gp)
    ctx->pc = 0x100e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x100e3c: 0x8f858124  lw          $a1, -0x7EDC($gp)
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
    // 0x100e40: 0xaf8282a4  sw          $v0, -0x7D5C($gp)
    ctx->pc = 0x100e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935204), GPR_U32(ctx, 2));
    // 0x100e44: 0xaf8382a8  sw          $v1, -0x7D58($gp)
    ctx->pc = 0x100e44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935208), GPR_U32(ctx, 3));
    // 0x100e48: 0xaf8482ac  sw          $a0, -0x7D54($gp)
    ctx->pc = 0x100e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935212), GPR_U32(ctx, 4));
    // 0x100e4c: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100E4Cu;
    SET_GPR_U32(ctx, 31, 0x100E54u);
    ctx->pc = 0x100E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E4Cu;
            // 0x100e50: 0xaf8582b0  sw          $a1, -0x7D50($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E54u; }
        if (ctx->pc != 0x100E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E54u; }
        if (ctx->pc != 0x100E54u) { return; }
    }
    ctx->pc = 0x100E54u;
    // 0x100e54: 0xc0416f2  jal         func_105BC8
    ctx->pc = 0x100E54u;
    SET_GPR_U32(ctx, 31, 0x100E5Cu);
    ctx->pc = 0x105BC8u;
    if (runtime->hasFunction(0x105BC8u)) {
        auto targetFn = runtime->lookupFunction(0x105BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E5Cu; }
        if (ctx->pc != 0x100E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizAnimate_0x105bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E5Cu; }
        if (ctx->pc != 0x100E5Cu) { return; }
    }
    ctx->pc = 0x100E5Cu;
    // 0x100e5c: 0xc041ba8  jal         func_106EA0
    ctx->pc = 0x100E5Cu;
    SET_GPR_U32(ctx, 31, 0x100E64u);
    ctx->pc = 0x106EA0u;
    if (runtime->hasFunction(0x106EA0u)) {
        auto targetFn = runtime->lookupFunction(0x106EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E64u; }
        if (ctx->pc != 0x100E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizDisplay_0x106ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E64u; }
        if (ctx->pc != 0x100E64u) { return; }
    }
    ctx->pc = 0x100E64u;
    // 0x100e64: 0xc042378  jal         func_108DE0
    ctx->pc = 0x100E64u;
    SET_GPR_U32(ctx, 31, 0x100E6Cu);
    ctx->pc = 0x100E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E64u;
            // 0x100e68: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108DE0u;
    if (runtime->hasFunction(0x108DE0u)) {
        auto targetFn = runtime->lookupFunction(0x108DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E6Cu; }
        if (ctx->pc != 0x100E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E6Cu; }
        if (ctx->pc != 0x100E6Cu) { return; }
    }
    ctx->pc = 0x100E6Cu;
    // 0x100e6c: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100E6Cu;
    SET_GPR_U32(ctx, 31, 0x100E74u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E74u; }
        if (ctx->pc != 0x100E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E74u; }
        if (ctx->pc != 0x100E74u) { return; }
    }
    ctx->pc = 0x100E74u;
    // 0x100e74: 0x8f83814c  lw          $v1, -0x7EB4($gp)
    ctx->pc = 0x100e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x100e78: 0x2862007f  slti        $v0, $v1, 0x7F
    ctx->pc = 0x100e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x100e7c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x100E7Cu;
    {
        const bool branch_taken_0x100e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100e7c) {
            ctx->pc = 0x100E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100E7Cu;
            // 0x100e80: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100E08u;
            goto label_100e08;
        }
    }
    ctx->pc = 0x100E84u;
    // 0x100e84: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x100E84u;
    SET_GPR_U32(ctx, 31, 0x100E8Cu);
    ctx->pc = 0x100E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E84u;
            // 0x100e88: 0x26f11320  addiu       $s1, $s7, 0x1320 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E8Cu; }
        if (ctx->pc != 0x100E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E8Cu; }
        if (ctx->pc != 0x100E8Cu) { return; }
    }
    ctx->pc = 0x100E8Cu;
    // 0x100e8c: 0xc0416f2  jal         func_105BC8
    ctx->pc = 0x100E8Cu;
    SET_GPR_U32(ctx, 31, 0x100E94u);
    ctx->pc = 0x100E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E8Cu;
            // 0x100e90: 0x26340064  addiu       $s4, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105BC8u;
    if (runtime->hasFunction(0x105BC8u)) {
        auto targetFn = runtime->lookupFunction(0x105BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E94u; }
        if (ctx->pc != 0x100E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizAnimate_0x105bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E94u; }
        if (ctx->pc != 0x100E94u) { return; }
    }
    ctx->pc = 0x100E94u;
    // 0x100e94: 0xc041ba8  jal         func_106EA0
    ctx->pc = 0x100E94u;
    SET_GPR_U32(ctx, 31, 0x100E9Cu);
    ctx->pc = 0x100E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E94u;
            // 0x100e98: 0x263500c8  addiu       $s5, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EA0u;
    if (runtime->hasFunction(0x106EA0u)) {
        auto targetFn = runtime->lookupFunction(0x106EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E9Cu; }
        if (ctx->pc != 0x100E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizDisplay_0x106ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E9Cu; }
        if (ctx->pc != 0x100E9Cu) { return; }
    }
    ctx->pc = 0x100E9Cu;
    // 0x100e9c: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x100e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x100ea0: 0x24030a28  addiu       $v1, $zero, 0xA28
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x100ea4: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x100ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100ea8: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x100ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100eac: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x100eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x100eb0: 0x24851504  addiu       $a1, $a0, 0x1504
    ctx->pc = 0x100eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5380));
    // 0x100eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100eb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100ebc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x100ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100ec0: 0xc04ae67  jal         func_12B99C
    ctx->pc = 0x100EC0u;
    SET_GPR_U32(ctx, 31, 0x100EC8u);
    ctx->pc = 0x100EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100EC0u;
            // 0x100ec4: 0x26050064  addiu       $a1, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B99Cu;
    if (runtime->hasFunction(0x12B99Cu)) {
        auto targetFn = runtime->lookupFunction(0x12B99Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EC8u; }
        if (ctx->pc != 0x100EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EC8u; }
        if (ctx->pc != 0x100EC8u) { return; }
    }
    ctx->pc = 0x100EC8u;
    // 0x100ec8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ecc: 0xc04ae67  jal         func_12B99C
    ctx->pc = 0x100ECCu;
    SET_GPR_U32(ctx, 31, 0x100ED4u);
    ctx->pc = 0x100ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100ECCu;
            // 0x100ed0: 0x260500c8  addiu       $a1, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B99Cu;
    if (runtime->hasFunction(0x12B99Cu)) {
        auto targetFn = runtime->lookupFunction(0x12B99Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100ED4u; }
        if (ctx->pc != 0x100ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100ED4u; }
        if (ctx->pc != 0x100ED4u) { return; }
    }
    ctx->pc = 0x100ED4u;
    // 0x100ed4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x100ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ed8: 0xc04ae67  jal         func_12B99C
    ctx->pc = 0x100ED8u;
    SET_GPR_U32(ctx, 31, 0x100EE0u);
    ctx->pc = 0x100EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100ED8u;
            // 0x100edc: 0x2605012c  addiu       $a1, $s0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B99Cu;
    if (runtime->hasFunction(0x12B99Cu)) {
        auto targetFn = runtime->lookupFunction(0x12B99Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE0u; }
        if (ctx->pc != 0x100EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE0u; }
        if (ctx->pc != 0x100EE0u) { return; }
    }
    ctx->pc = 0x100EE0u;
    // 0x100ee0: 0xc0414e2  jal         func_105388
    ctx->pc = 0x100EE0u;
    SET_GPR_U32(ctx, 31, 0x100EE8u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE8u; }
        if (ctx->pc != 0x100EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE8u; }
        if (ctx->pc != 0x100EE8u) { return; }
    }
    ctx->pc = 0x100EE8u;
    // 0x100ee8: 0xc0401e0  jal         func_100780
    ctx->pc = 0x100EE8u;
    SET_GPR_U32(ctx, 31, 0x100EF0u);
    ctx->pc = 0x100780u;
    if (runtime->hasFunction(0x100780u)) {
        auto targetFn = runtime->lookupFunction(0x100780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EF0u; }
        if (ctx->pc != 0x100EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizControl_0x100780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EF0u; }
        if (ctx->pc != 0x100EF0u) { return; }
    }
    ctx->pc = 0x100EF0u;
    // 0x100ef0: 0x97828112  lhu         $v0, -0x7EEE($gp)
    ctx->pc = 0x100ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x100ef4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x100ef4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)64u)));
    // 0x100ef8: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x100EF8u;
    {
        const bool branch_taken_0x100ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100EF8u;
            // 0x100efc: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef8) {
            ctx->pc = 0x10131Cu;
            goto label_10131c;
        }
    }
    ctx->pc = 0x100F00u;
    // 0x100f00: 0x24a21300  addiu       $v0, $a1, 0x1300
    ctx->pc = 0x100f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x100f04: 0x84430012  lh          $v1, 0x12($v0)
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x100f08: 0x14600105  bnez        $v1, . + 4 + (0x105 << 2)
    ctx->pc = 0x100F08u;
    {
        const bool branch_taken_0x100f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F08u;
            // 0x100f0c: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f08) {
            ctx->pc = 0x101320u;
            goto label_101320;
        }
    }
    ctx->pc = 0x100F10u;
    // 0x100f10: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x100F10u;
    SET_GPR_U32(ctx, 31, 0x100F18u);
    ctx->pc = 0x100F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F10u;
            // 0x100f14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (runtime->hasFunction(0x10BF40u)) {
        auto targetFn = runtime->lookupFunction(0x10BF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F18u; }
        if (ctx->pc != 0x100F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F18u; }
        if (ctx->pc != 0x100F18u) { return; }
    }
    ctx->pc = 0x100F18u;
    // 0x100f18: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x100f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x100f1c: 0xaf8280b0  sw          $v0, -0x7F50($gp)
    ctx->pc = 0x100f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
    // 0x100f20: 0x8c65e134  lw          $a1, -0x1ECC($v1)
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959412)));
    // 0x100f24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x100f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x100f28: 0xc042ca6  jal         func_10B298
    ctx->pc = 0x100F28u;
    SET_GPR_U32(ctx, 31, 0x100F30u);
    ctx->pc = 0x100F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F28u;
            // 0x100f2c: 0x24063fff  addiu       $a2, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (runtime->hasFunction(0x10B298u)) {
        auto targetFn = runtime->lookupFunction(0x10B298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F30u; }
        if (ctx->pc != 0x100F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F30u; }
        if (ctx->pc != 0x100F30u) { return; }
    }
    ctx->pc = 0x100F30u;
    // 0x100f30: 0x87c31458  lh          $v1, 0x1458($fp)
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
    // 0x100f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100f38: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x100F38u;
    {
        const bool branch_taken_0x100f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F38u;
            // 0x100f3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f38) {
            ctx->pc = 0x100FC4u;
            goto label_100fc4;
        }
    }
    ctx->pc = 0x100F40u;
    // 0x100f40: 0x8f848118  lw          $a0, -0x7EE8($gp)
    ctx->pc = 0x100f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x100f44: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x100f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x100f48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x100f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f4c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x100f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100f50: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x100F50u;
    SET_GPR_U32(ctx, 31, 0x100F58u);
    ctx->pc = 0x100F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F50u;
            // 0x100f54: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F58u; }
        if (ctx->pc != 0x100F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F58u; }
        if (ctx->pc != 0x100F58u) { return; }
    }
    ctx->pc = 0x100F58u;
    // 0x100f58: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x100F58u;
    {
        const bool branch_taken_0x100f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100f58) {
            ctx->pc = 0x100F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100F58u;
            // 0x100f5c: 0x8f848118  lw          $a0, -0x7EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100F70u;
            goto label_100f70;
        }
    }
    ctx->pc = 0x100F60u;
    // 0x100f60: 0x96220130  lhu         $v0, 0x130($s1)
    ctx->pc = 0x100f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x100f64: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x100f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x100f68: 0xa6220130  sh          $v0, 0x130($s1)
    ctx->pc = 0x100f68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x100f6c: 0x8f848118  lw          $a0, -0x7EE8($gp)
    ctx->pc = 0x100f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
label_100f70:
    // 0x100f70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x100f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f74: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x100f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100f78: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x100F78u;
    SET_GPR_U32(ctx, 31, 0x100F80u);
    ctx->pc = 0x100F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F78u;
            // 0x100f7c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F80u; }
        if (ctx->pc != 0x100F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F80u; }
        if (ctx->pc != 0x100F80u) { return; }
    }
    ctx->pc = 0x100F80u;
    // 0x100f80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x100F80u;
    {
        const bool branch_taken_0x100f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100f80) {
            ctx->pc = 0x100F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100F80u;
            // 0x100f84: 0x8f848118  lw          $a0, -0x7EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100F98u;
            goto label_100f98;
        }
    }
    ctx->pc = 0x100F88u;
    // 0x100f88: 0x96220130  lhu         $v0, 0x130($s1)
    ctx->pc = 0x100f88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x100f8c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x100f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x100f90: 0xa6220130  sh          $v0, 0x130($s1)
    ctx->pc = 0x100f90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x100f94: 0x8f848118  lw          $a0, -0x7EE8($gp)
    ctx->pc = 0x100f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
label_100f98:
    // 0x100f98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x100f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f9c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x100f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100fa0: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x100FA0u;
    SET_GPR_U32(ctx, 31, 0x100FA8u);
    ctx->pc = 0x100FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FA0u;
            // 0x100fa4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FA8u; }
        if (ctx->pc != 0x100FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FA8u; }
        if (ctx->pc != 0x100FA8u) { return; }
    }
    ctx->pc = 0x100FA8u;
    // 0x100fa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100FA8u;
    {
        const bool branch_taken_0x100fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100FA8u;
            // 0x100fac: 0x87c31458  lh          $v1, 0x1458($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fa8) {
            ctx->pc = 0x100FC0u;
            goto label_100fc0;
        }
    }
    ctx->pc = 0x100FB0u;
    // 0x100fb0: 0x96220130  lhu         $v0, 0x130($s1)
    ctx->pc = 0x100fb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x100fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x100fb8: 0xa6220130  sh          $v0, 0x130($s1)
    ctx->pc = 0x100fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x100fbc: 0x87c31458  lh          $v1, 0x1458($fp)
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
label_100fc0:
    // 0x100fc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_100fc4:
    // 0x100fc4: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x100FC4u;
    {
        const bool branch_taken_0x100fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100FC4u;
            // 0x100fc8: 0x87c31458  lh          $v1, 0x1458($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fc4) {
            ctx->pc = 0x101070u;
            goto label_101070;
        }
    }
    ctx->pc = 0x100FCCu;
    // 0x100fcc: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x100fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x100fd0: 0x24030a28  addiu       $v1, $zero, 0xA28
    ctx->pc = 0x100fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x100fd4: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x100fd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100fd8: 0x8f84811c  lw          $a0, -0x7EE4($gp)
    ctx->pc = 0x100fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x100fdc: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x100fdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100fe0: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x100fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x100fe4: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x100fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x100fe8: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x100fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x100fec: 0x24a61504  addiu       $a2, $a1, 0x1504
    ctx->pc = 0x100fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5380));
    // 0x100ff0: 0x26f01320  addiu       $s0, $s7, 0x1320
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
    // 0x100ff4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x100ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x100ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ffc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x100ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101000: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x101000u;
    SET_GPR_U32(ctx, 31, 0x101008u);
    ctx->pc = 0x101004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101000u;
            // 0x101004: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101008u; }
        if (ctx->pc != 0x101008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101008u; }
        if (ctx->pc != 0x101008u) { return; }
    }
    ctx->pc = 0x101008u;
    // 0x101008: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x101008u;
    {
        const bool branch_taken_0x101008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101008) {
            ctx->pc = 0x10100Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101008u;
            // 0x10100c: 0x8f84811c  lw          $a0, -0x7EE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101020u;
            goto label_101020;
        }
    }
    ctx->pc = 0x101010u;
    // 0x101010: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x101010u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x101014: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x101014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x101018: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x101018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x10101c: 0x8f84811c  lw          $a0, -0x7EE4($gp)
    ctx->pc = 0x10101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
label_101020:
    // 0x101020: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x101020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x101024: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x101024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101028: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x101028u;
    SET_GPR_U32(ctx, 31, 0x101030u);
    ctx->pc = 0x10102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101028u;
            // 0x10102c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101030u; }
        if (ctx->pc != 0x101030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101030u; }
        if (ctx->pc != 0x101030u) { return; }
    }
    ctx->pc = 0x101030u;
    // 0x101030: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x101030u;
    {
        const bool branch_taken_0x101030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101030) {
            ctx->pc = 0x101034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101030u;
            // 0x101034: 0x8f84811c  lw          $a0, -0x7EE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101048u;
            goto label_101048;
        }
    }
    ctx->pc = 0x101038u;
    // 0x101038: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x101038u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x10103c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x10103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x101040: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x101040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x101044: 0x8f84811c  lw          $a0, -0x7EE4($gp)
    ctx->pc = 0x101044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
label_101048:
    // 0x101048: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x10104c: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x10104cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101050: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x101050u;
    SET_GPR_U32(ctx, 31, 0x101058u);
    ctx->pc = 0x101054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101050u;
            // 0x101054: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101058u; }
        if (ctx->pc != 0x101058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101058u; }
        if (ctx->pc != 0x101058u) { return; }
    }
    ctx->pc = 0x101058u;
    // 0x101058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101058u;
    {
        const bool branch_taken_0x101058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101058u;
            // 0x10105c: 0x87c31458  lh          $v1, 0x1458($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101058) {
            ctx->pc = 0x101070u;
            goto label_101070;
        }
    }
    ctx->pc = 0x101060u;
    // 0x101060: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x101060u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x101064: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101068: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x101068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x10106c: 0x87c31458  lh          $v1, 0x1458($fp)
    ctx->pc = 0x10106cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
label_101070:
    // 0x101070: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x101070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x101074: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x101074u;
    {
        const bool branch_taken_0x101074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x101078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101074u;
            // 0x101078: 0x87c31458  lh          $v1, 0x1458($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101074) {
            ctx->pc = 0x101120u;
            goto label_101120;
        }
    }
    ctx->pc = 0x10107Cu;
    // 0x10107c: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x10107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x101080: 0x24030a28  addiu       $v1, $zero, 0xA28
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x101084: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x101084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101088: 0x8f848120  lw          $a0, -0x7EE0($gp)
    ctx->pc = 0x101088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x10108c: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x10108cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101090: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x101094: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x101094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x101098: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x101098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10109c: 0x24a61504  addiu       $a2, $a1, 0x1504
    ctx->pc = 0x10109cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5380));
    // 0x1010a0: 0x26f01320  addiu       $s0, $s7, 0x1320
    ctx->pc = 0x1010a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
    // 0x1010a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1010a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1010a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1010a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010ac: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1010acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1010b0: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x1010B0u;
    SET_GPR_U32(ctx, 31, 0x1010B8u);
    ctx->pc = 0x1010B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010B0u;
            // 0x1010b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010B8u; }
        if (ctx->pc != 0x1010B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010B8u; }
        if (ctx->pc != 0x1010B8u) { return; }
    }
    ctx->pc = 0x1010B8u;
    // 0x1010b8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1010B8u;
    {
        const bool branch_taken_0x1010b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1010b8) {
            ctx->pc = 0x1010BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1010B8u;
            // 0x1010bc: 0x8f848120  lw          $a0, -0x7EE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1010D0u;
            goto label_1010d0;
        }
    }
    ctx->pc = 0x1010C0u;
    // 0x1010c0: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x1010c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1010c4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1010c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1010c8: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x1010c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x1010cc: 0x8f848120  lw          $a0, -0x7EE0($gp)
    ctx->pc = 0x1010ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
label_1010d0:
    // 0x1010d0: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x1010d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1010d4: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x1010d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1010d8: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x1010D8u;
    SET_GPR_U32(ctx, 31, 0x1010E0u);
    ctx->pc = 0x1010DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010D8u;
            // 0x1010dc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010E0u; }
        if (ctx->pc != 0x1010E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010E0u; }
        if (ctx->pc != 0x1010E0u) { return; }
    }
    ctx->pc = 0x1010E0u;
    // 0x1010e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1010E0u;
    {
        const bool branch_taken_0x1010e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1010e0) {
            ctx->pc = 0x1010E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1010E0u;
            // 0x1010e4: 0x8f848120  lw          $a0, -0x7EE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1010F8u;
            goto label_1010f8;
        }
    }
    ctx->pc = 0x1010E8u;
    // 0x1010e8: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x1010e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1010ec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1010ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1010f0: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x1010f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x1010f4: 0x8f848120  lw          $a0, -0x7EE0($gp)
    ctx->pc = 0x1010f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
label_1010f8:
    // 0x1010f8: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x1010f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x1010fc: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x1010fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101100: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x101100u;
    SET_GPR_U32(ctx, 31, 0x101108u);
    ctx->pc = 0x101104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101100u;
            // 0x101104: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101108u; }
        if (ctx->pc != 0x101108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101108u; }
        if (ctx->pc != 0x101108u) { return; }
    }
    ctx->pc = 0x101108u;
    // 0x101108: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101108u;
    {
        const bool branch_taken_0x101108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101108u;
            // 0x10110c: 0x87c31458  lh          $v1, 0x1458($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101108) {
            ctx->pc = 0x101120u;
            goto label_101120;
        }
    }
    ctx->pc = 0x101110u;
    // 0x101110: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x101110u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x101114: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x101118: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x101118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x10111c: 0x87c31458  lh          $v1, 0x1458($fp)
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5208)));
label_101120:
    // 0x101120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x101120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x101124: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x101124u;
    {
        const bool branch_taken_0x101124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x101128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101124u;
            // 0x101128: 0x240201f4  addiu       $v0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101124) {
            ctx->pc = 0x1011C8u;
            goto label_1011c8;
        }
    }
    ctx->pc = 0x10112Cu;
    // 0x10112c: 0x24030a28  addiu       $v1, $zero, 0xA28
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x101130: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x101130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101134: 0x8f848124  lw          $a0, -0x7EDC($gp)
    ctx->pc = 0x101134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
    // 0x101138: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x101138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10113c: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x10113cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x101140: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x101140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x101144: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x101144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101148: 0x24a61504  addiu       $a2, $a1, 0x1504
    ctx->pc = 0x101148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5380));
    // 0x10114c: 0x26f01320  addiu       $s0, $s7, 0x1320
    ctx->pc = 0x10114cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
    // 0x101150: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x101150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x101154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101158: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x101158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10115c: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x10115Cu;
    SET_GPR_U32(ctx, 31, 0x101164u);
    ctx->pc = 0x101160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10115Cu;
            // 0x101160: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101164u; }
        if (ctx->pc != 0x101164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101164u; }
        if (ctx->pc != 0x101164u) { return; }
    }
    ctx->pc = 0x101164u;
    // 0x101164: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x101164u;
    {
        const bool branch_taken_0x101164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101164) {
            ctx->pc = 0x101168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101164u;
            // 0x101168: 0x8f848124  lw          $a0, -0x7EDC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10117Cu;
            goto label_10117c;
        }
    }
    ctx->pc = 0x10116Cu;
    // 0x10116c: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x10116cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x101170: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x101170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x101174: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x101174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x101178: 0x8f848124  lw          $a0, -0x7EDC($gp)
    ctx->pc = 0x101178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_10117c:
    // 0x10117c: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x10117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x101180: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x101180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x101184: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x101184u;
    SET_GPR_U32(ctx, 31, 0x10118Cu);
    ctx->pc = 0x101188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101184u;
            // 0x101188: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10118Cu; }
        if (ctx->pc != 0x10118Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10118Cu; }
        if (ctx->pc != 0x10118Cu) { return; }
    }
    ctx->pc = 0x10118Cu;
    // 0x10118c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10118Cu;
    {
        const bool branch_taken_0x10118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10118c) {
            ctx->pc = 0x101190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10118Cu;
            // 0x101190: 0x8f848124  lw          $a0, -0x7EDC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1011A4u;
            goto label_1011a4;
        }
    }
    ctx->pc = 0x101194u;
    // 0x101194: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x101194u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x101198: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x101198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x10119c: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x10119cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x1011a0: 0x8f848124  lw          $a0, -0x7EDC($gp)
    ctx->pc = 0x1011a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934820)));
label_1011a4:
    // 0x1011a4: 0x260500c8  addiu       $a1, $s0, 0xC8
    ctx->pc = 0x1011a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x1011a8: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x1011a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1011ac: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x1011ACu;
    SET_GPR_U32(ctx, 31, 0x1011B4u);
    ctx->pc = 0x1011B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1011ACu;
            // 0x1011b0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011B4u; }
        if (ctx->pc != 0x1011B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1011B4u; }
        if (ctx->pc != 0x1011B4u) { return; }
    }
    ctx->pc = 0x1011B4u;
    // 0x1011b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1011B4u;
    {
        const bool branch_taken_0x1011b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1011b4) {
            ctx->pc = 0x1011C8u;
            goto label_1011c8;
        }
    }
    ctx->pc = 0x1011BCu;
    // 0x1011bc: 0x96020130  lhu         $v0, 0x130($s0)
    ctx->pc = 0x1011bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1011c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1011c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1011c4: 0xa6020130  sh          $v0, 0x130($s0)
    ctx->pc = 0x1011c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 2));
label_1011c8:
    // 0x1011c8: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1011C8u;
    {
        const bool branch_taken_0x1011c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1011CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011C8u;
            // 0x1011cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011c8) {
            ctx->pc = 0x1011E0u;
            goto label_1011e0;
        }
    }
    ctx->pc = 0x1011D0u;
    // 0x1011d0: 0x26e21320  addiu       $v0, $s7, 0x1320
    ctx->pc = 0x1011d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
    // 0x1011d4: 0x84430130  lh          $v1, 0x130($v0)
    ctx->pc = 0x1011d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1011d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1011D8u;
    {
        const bool branch_taken_0x1011d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011D8u;
            // 0x1011dc: 0xaf8380c0  sw          $v1, -0x7F40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011d8) {
            ctx->pc = 0x101244u;
            goto label_101244;
        }
    }
    ctx->pc = 0x1011E0u;
label_1011e0:
    // 0x1011e0: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1011E0u;
    {
        const bool branch_taken_0x1011e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1011E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011E0u;
            // 0x1011e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011e0) {
            ctx->pc = 0x101200u;
            goto label_101200;
        }
    }
    ctx->pc = 0x1011E8u;
    // 0x1011e8: 0x26e21320  addiu       $v0, $s7, 0x1320
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
    // 0x1011ec: 0x8f8480c0  lw          $a0, -0x7F40($gp)
    ctx->pc = 0x1011ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x1011f0: 0x84430130  lh          $v1, 0x130($v0)
    ctx->pc = 0x1011f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1011f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1011f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1011f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1011F8u;
    {
        const bool branch_taken_0x1011f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011F8u;
            // 0x1011fc: 0xaf8380bc  sw          $v1, -0x7F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011f8) {
            ctx->pc = 0x101244u;
            goto label_101244;
        }
    }
    ctx->pc = 0x101200u;
label_101200:
    // 0x101200: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x101200u;
    {
        const bool branch_taken_0x101200 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x101204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101200u;
            // 0x101204: 0x26e31320  addiu       $v1, $s7, 0x1320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101200) {
            ctx->pc = 0x101224u;
            goto label_101224;
        }
    }
    ctx->pc = 0x101208u;
    // 0x101208: 0x8f8580c0  lw          $a1, -0x7F40($gp)
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x10120c: 0x84620130  lh          $v0, 0x130($v1)
    ctx->pc = 0x10120cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x101210: 0x8f8480bc  lw          $a0, -0x7F44($gp)
    ctx->pc = 0x101210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x101214: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x101214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101218: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x101218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10121c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10121Cu;
    {
        const bool branch_taken_0x10121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10121Cu;
            // 0x101220: 0xaf8280c8  sw          $v0, -0x7F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10121c) {
            ctx->pc = 0x101244u;
            goto label_101244;
        }
    }
    ctx->pc = 0x101224u;
label_101224:
    // 0x101224: 0x8f8480c0  lw          $a0, -0x7F40($gp)
    ctx->pc = 0x101224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x101228: 0x84620130  lh          $v0, 0x130($v1)
    ctx->pc = 0x101228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x10122c: 0x8f8580bc  lw          $a1, -0x7F44($gp)
    ctx->pc = 0x10122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x101230: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x101230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x101234: 0x8f8380c8  lw          $v1, -0x7F38($gp)
    ctx->pc = 0x101234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x101238: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x101238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10123c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10123cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101240: 0xaf8280c4  sw          $v0, -0x7F3C($gp)
    ctx->pc = 0x101240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 2));
label_101244:
    // 0x101244: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x101244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x101248: 0xc7948010  lwc1        $f20, -0x7FF0($gp)
    ctx->pc = 0x101248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10124c: 0xaf83814c  sw          $v1, -0x7EB4($gp)
    ctx->pc = 0x10124cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 3));
    // 0x101250: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101254: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101258:
    // 0x101258: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x101258u;
    SET_GPR_U32(ctx, 31, 0x101260u);
    ctx->pc = 0x10125Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101258u;
            // 0x10125c: 0xaf9080ac  sw          $s0, -0x7F54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101260u; }
        if (ctx->pc != 0x101260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101260u; }
        if (ctx->pc != 0x101260u) { return; }
    }
    ctx->pc = 0x101260u;
    // 0x101260: 0xc0416f2  jal         func_105BC8
    ctx->pc = 0x101260u;
    SET_GPR_U32(ctx, 31, 0x101268u);
    ctx->pc = 0x105BC8u;
    if (runtime->hasFunction(0x105BC8u)) {
        auto targetFn = runtime->lookupFunction(0x105BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101268u; }
        if (ctx->pc != 0x101268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizAnimate_0x105bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101268u; }
        if (ctx->pc != 0x101268u) { return; }
    }
    ctx->pc = 0x101268u;
    // 0x101268: 0xc041ba8  jal         func_106EA0
    ctx->pc = 0x101268u;
    SET_GPR_U32(ctx, 31, 0x101270u);
    ctx->pc = 0x106EA0u;
    if (runtime->hasFunction(0x106EA0u)) {
        auto targetFn = runtime->lookupFunction(0x106EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101270u; }
        if (ctx->pc != 0x101270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quizDisplay_0x106ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101270u; }
        if (ctx->pc != 0x101270u) { return; }
    }
    ctx->pc = 0x101270u;
    // 0x101270: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x101270u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x101274: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x101274u;
    SET_GPR_U32(ctx, 31, 0x10127Cu);
    ctx->pc = 0x101278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101274u;
            // 0x101278: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (runtime->hasFunction(0x10A4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10A4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10127Cu; }
        if (ctx->pc != 0x10127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetScale_0x10a4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10127Cu; }
        if (ctx->pc != 0x10127Cu) { return; }
    }
    ctx->pc = 0x10127Cu;
    // 0x10127c: 0xc04238e  jal         func_108E38
    ctx->pc = 0x10127Cu;
    SET_GPR_U32(ctx, 31, 0x101284u);
    ctx->pc = 0x101280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10127Cu;
            // 0x101280: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108E38u;
    if (runtime->hasFunction(0x108E38u)) {
        auto targetFn = runtime->lookupFunction(0x108E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101284u; }
        if (ctx->pc != 0x101284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101284u; }
        if (ctx->pc != 0x101284u) { return; }
    }
    ctx->pc = 0x101284u;
    // 0x101284: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101284u;
    SET_GPR_U32(ctx, 31, 0x10128Cu);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10128Cu; }
        if (ctx->pc != 0x10128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10128Cu; }
        if (ctx->pc != 0x10128Cu) { return; }
    }
    ctx->pc = 0x10128Cu;
    // 0x10128c: 0x8f83814c  lw          $v1, -0x7EB4($gp)
    ctx->pc = 0x10128cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101290: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x101290u;
    {
        const bool branch_taken_0x101290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x101290) {
            ctx->pc = 0x1012A4u;
            goto label_1012a4;
        }
    }
    ctx->pc = 0x101298u;
    // 0x101298: 0xc042c6e  jal         func_10B1B8
    ctx->pc = 0x101298u;
    SET_GPR_U32(ctx, 31, 0x1012A0u);
    ctx->pc = 0x10129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101298u;
            // 0x10129c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B1B8u;
    if (runtime->hasFunction(0x10B1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10B1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012A0u; }
        if (ctx->pc != 0x1012A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSound_0x10b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012A0u; }
        if (ctx->pc != 0x1012A0u) { return; }
    }
    ctx->pc = 0x1012A0u;
    // 0x1012a0: 0x8f83814c  lw          $v1, -0x7EB4($gp)
    ctx->pc = 0x1012a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
label_1012a4:
    // 0x1012a4: 0x1c60ffec  bgtz        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1012A4u;
    {
        const bool branch_taken_0x1012a4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1012A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1012A4u;
            // 0x1012a8: 0x3c040013  lui         $a0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012a4) {
            ctx->pc = 0x101258u;
            goto label_101258;
        }
    }
    ctx->pc = 0x1012ACu;
    // 0x1012ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1012acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1012b0: 0x24831300  addiu       $v1, $a0, 0x1300
    ctx->pc = 0x1012b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x1012b4: 0x2405044c  addiu       $a1, $zero, 0x44C
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
    // 0x1012b8: 0xa4620012  sh          $v0, 0x12($v1)
    ctx->pc = 0x1012b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1012bc: 0x24040384  addiu       $a0, $zero, 0x384
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x1012c0: 0x24060514  addiu       $a2, $zero, 0x514
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x1012c4: 0x240705dc  addiu       $a3, $zero, 0x5DC
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1012c8: 0x240806a4  addiu       $t0, $zero, 0x6A4
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1700));
    // 0x1012cc: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1012d0: 0x8fb60004  lw          $s6, 0x4($sp)
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1012d4: 0xa7c21458  sh          $v0, 0x1458($fp)
    ctx->pc = 0x1012d4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 5208), (uint16_t)GPR_U32(ctx, 2));
    // 0x1012d8: 0xaf848150  sw          $a0, -0x7EB0($gp)
    ctx->pc = 0x1012d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 4));
    // 0x1012dc: 0xaf858154  sw          $a1, -0x7EAC($gp)
    ctx->pc = 0x1012dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 5));
    // 0x1012e0: 0xaf868158  sw          $a2, -0x7EA8($gp)
    ctx->pc = 0x1012e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 6));
    // 0x1012e4: 0xaf87815c  sw          $a3, -0x7EA4($gp)
    ctx->pc = 0x1012e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 7));
    // 0x1012e8: 0xaf888160  sw          $t0, -0x7EA0($gp)
    ctx->pc = 0x1012e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 8));
    // 0x1012ec: 0xc042510  jal         func_109440
    ctx->pc = 0x1012ECu;
    SET_GPR_U32(ctx, 31, 0x1012F4u);
    ctx->pc = 0x1012F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1012ECu;
            // 0x1012f0: 0xaf898164  sw          $t1, -0x7E9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934884), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109440u;
    if (runtime->hasFunction(0x109440u)) {
        auto targetFn = runtime->lookupFunction(0x109440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012F4u; }
        if (ctx->pc != 0x1012F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setRandomNumber_0x109440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012F4u; }
        if (ctx->pc != 0x1012F4u) { return; }
    }
    ctx->pc = 0x1012F4u;
    // 0x1012f4: 0xaf80814c  sw          $zero, -0x7EB4($gp)
    ctx->pc = 0x1012f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
label_1012f8:
    // 0x1012f8: 0xc040c38  jal         func_1030E0
    ctx->pc = 0x1012F8u;
    SET_GPR_U32(ctx, 31, 0x101300u);
    ctx->pc = 0x1030E0u;
    if (runtime->hasFunction(0x1030E0u)) {
        auto targetFn = runtime->lookupFunction(0x1030E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101300u; }
        if (ctx->pc != 0x101300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101300u; }
        if (ctx->pc != 0x101300u) { return; }
    }
    ctx->pc = 0x101300u;
    // 0x101300: 0xc0414e2  jal         func_105388
    ctx->pc = 0x101300u;
    SET_GPR_U32(ctx, 31, 0x101308u);
    ctx->pc = 0x105388u;
    if (runtime->hasFunction(0x105388u)) {
        auto targetFn = runtime->lookupFunction(0x105388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101308u; }
        if (ctx->pc != 0x101308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101308u; }
        if (ctx->pc != 0x101308u) { return; }
    }
    ctx->pc = 0x101308u;
    // 0x101308: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x101308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10130c: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x10130cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x101310: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x101310u;
    {
        const bool branch_taken_0x101310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101310u;
            // 0x101314: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101310) {
            ctx->pc = 0x1012F8u;
            goto label_1012f8;
        }
    }
    ctx->pc = 0x101318u;
    // 0x101318: 0xaf8080ac  sw          $zero, -0x7F54($gp)
    ctx->pc = 0x101318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 0));
label_10131c:
    // 0x10131c: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
label_101320:
    // 0x101320: 0x24a31468  addiu       $v1, $a1, 0x1468
    ctx->pc = 0x101320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5224));
    // 0x101324: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x101328: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x101328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10132c: 0x1440feb0  bnez        $v0, . + 4 + (-0x150 << 2)
    ctx->pc = 0x10132Cu;
    {
        const bool branch_taken_0x10132c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10132Cu;
            // 0x101330: 0x26c40001  addiu       $a0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10132c) {
            ctx->pc = 0x100DF0u;
            goto label_100df0;
        }
    }
    ctx->pc = 0x101334u;
    // 0x101334: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x101334u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101338: 0xc042c6e  jal         func_10B1B8
    ctx->pc = 0x101338u;
    SET_GPR_U32(ctx, 31, 0x101340u);
    ctx->pc = 0x10133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101338u;
            // 0x10133c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B1B8u;
    if (runtime->hasFunction(0x10B1B8u)) {
        auto targetFn = runtime->lookupFunction(0x10B1B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101340u; }
        if (ctx->pc != 0x101340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSound_0x10b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101340u; }
        if (ctx->pc != 0x101340u) { return; }
    }
    ctx->pc = 0x101340u;
    // 0x101340: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x101344: 0x84621468  lh          $v0, 0x1468($v1)
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5224)));
    // 0x101348: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x101348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10134c: 0x1440fe42  bnez        $v0, . + 4 + (-0x1BE << 2)
    ctx->pc = 0x10134Cu;
    {
        const bool branch_taken_0x10134c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10134Cu;
            // 0x101350: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10134c) {
            ctx->pc = 0x100C58u;
            goto label_100c58;
        }
    }
    ctx->pc = 0x101354u;
    // 0x101354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x101354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_101358:
    // 0x101358: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x101358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x10135c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10135cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x101360: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x101360u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101364: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x101364u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101368: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x101368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10136c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10136cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101370: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x101370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101374: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x101374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101378: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x101378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10137c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10137cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101380: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x101380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101384: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x101384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101388: 0xa482dfc0  sh          $v0, -0x2040($a0)
    ctx->pc = 0x101388u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294959040), (uint16_t)GPR_U32(ctx, 2));
    // 0x10138c: 0x3e00008  jr          $ra
    ctx->pc = 0x10138Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10138Cu;
            // 0x101390: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100C58u: goto label_100c58;
            case 0x100CA0u: goto label_100ca0;
            case 0x100D10u: goto label_100d10;
            case 0x100D80u: goto label_100d80;
            case 0x100DF0u: goto label_100df0;
            case 0x100DF4u: goto label_100df4;
            case 0x100E08u: goto label_100e08;
            case 0x100E30u: goto label_100e30;
            case 0x100F70u: goto label_100f70;
            case 0x100F98u: goto label_100f98;
            case 0x100FC0u: goto label_100fc0;
            case 0x100FC4u: goto label_100fc4;
            case 0x101020u: goto label_101020;
            case 0x101048u: goto label_101048;
            case 0x101070u: goto label_101070;
            case 0x1010D0u: goto label_1010d0;
            case 0x1010F8u: goto label_1010f8;
            case 0x101120u: goto label_101120;
            case 0x10117Cu: goto label_10117c;
            case 0x1011A4u: goto label_1011a4;
            case 0x1011C8u: goto label_1011c8;
            case 0x1011E0u: goto label_1011e0;
            case 0x101200u: goto label_101200;
            case 0x101224u: goto label_101224;
            case 0x101244u: goto label_101244;
            case 0x101258u: goto label_101258;
            case 0x1012A4u: goto label_1012a4;
            case 0x1012F8u: goto label_1012f8;
            case 0x10131Cu: goto label_10131c;
            case 0x101320u: goto label_101320;
            case 0x101358u: goto label_101358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101394u;
}
