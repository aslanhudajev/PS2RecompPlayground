#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: quizAnimate
// Address: 0x105bc8 - 0x106e9c
void quizAnimate_0x105bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105bc8u;

    // 0x105bc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105bcc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x105bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x105bd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105bd4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x105bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x105bd8: 0x8f858300  lw          $a1, -0x7D00($gp)
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935296)));
    // 0x105bdc: 0x2454eb18  addiu       $s4, $v0, -0x14E8
    ctx->pc = 0x105bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961944));
    // 0x105be0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105be4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x105be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105be8: 0x8f838304  lw          $v1, -0x7CFC($gp)
    ctx->pc = 0x105be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x105bec: 0x8f848308  lw          $a0, -0x7CF8($gp)
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935304)));
    // 0x105bf0: 0x8f82830c  lw          $v0, -0x7CF4($gp)
    ctx->pc = 0x105bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935308)));
    // 0x105bf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x105bf8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x105bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x105bfc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x105bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x105c00: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x105c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105c04: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105c08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105c0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105c14: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x105c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x105c18: 0x8f918170  lw          $s1, -0x7E90($gp)
    ctx->pc = 0x105c18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x105c1c: 0xace5eb18  sw          $a1, -0x14E8($a3)
    ctx->pc = 0x105c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961944), GPR_U32(ctx, 5));
    // 0x105c20: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x105c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x105c24: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x105c24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
    // 0x105c28: 0x162600df  bne         $s1, $a2, . + 4 + (0xDF << 2)
    ctx->pc = 0x105C28u;
    {
        const bool branch_taken_0x105c28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x105C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C28u;
            // 0x105c2c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c28) {
            ctx->pc = 0x105FA8u;
            goto label_105fa8;
        }
    }
    ctx->pc = 0x105C30u;
    // 0x105c30: 0x8f9282e0  lw          $s2, -0x7D20($gp)
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x105c34: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x105c34u;
    SET_GPR_VEC(ctx, 21, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x105c38: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x105c38u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x105c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105C3Cu;
    {
        const bool branch_taken_0x105c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C3Cu;
            // 0x105c40: 0x2416007f  addiu       $s6, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105c3c) {
            ctx->pc = 0x105C50u;
            goto label_105c50;
        }
    }
    ctx->pc = 0x105C44u;
    // 0x105c44: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105c48: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105C48u;
    SET_GPR_U32(ctx, 31, 0x105C50u);
    ctx->pc = 0x105C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C48u;
            // 0x105c4c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C50u; }
        if (ctx->pc != 0x105C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C50u; }
        if (ctx->pc != 0x105C50u) { return; }
    }
    ctx->pc = 0x105C50u;
label_105c50:
    // 0x105c50: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x105c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x105c54: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x105c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x105c58: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x105c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x105c5c: 0x8f9382fc  lw          $s3, -0x7D04($gp)
    ctx->pc = 0x105c5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935292)));
    // 0x105c60: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x105c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105c64: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x105c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x105c68: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x105c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x105c6c: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x105c6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105c70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x105c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x105c74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x105c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x105c78: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x105c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105c7c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x105c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x105c80: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x105c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x105c84: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x105c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x105c88: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x105c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x105c8c: 0xae150054  sw          $s5, 0x54($s0)
    ctx->pc = 0x105c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 21));
    // 0x105c90: 0x3262003f  andi        $v0, $s3, 0x3F
    ctx->pc = 0x105c90u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)63u)));
    // 0x105c94: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x105c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x105c98: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x105c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x105c9c: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x105c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x105ca0: 0xae110060  sw          $s1, 0x60($s0)
    ctx->pc = 0x105ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    // 0x105ca4: 0xa216006c  sb          $s6, 0x6C($s0)
    ctx->pc = 0x105ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 22));
    // 0x105ca8: 0xe6140064  swc1        $f20, 0x64($s0)
    ctx->pc = 0x105ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x105cac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105CACu;
    {
        const bool branch_taken_0x105cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105CACu;
            // 0x105cb0: 0xe6140068  swc1        $f20, 0x68($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cac) {
            ctx->pc = 0x105CC0u;
            goto label_105cc0;
        }
    }
    ctx->pc = 0x105CB4u;
    // 0x105cb4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105cb8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105CB8u;
    SET_GPR_U32(ctx, 31, 0x105CC0u);
    ctx->pc = 0x105CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CB8u;
            // 0x105cbc: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CC0u; }
        if (ctx->pc != 0x105CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CC0u; }
        if (ctx->pc != 0x105CC0u) { return; }
    }
    ctx->pc = 0x105CC0u;
label_105cc0:
    // 0x105cc0: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x105cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x105cc4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x105cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105cc8: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x105cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x105ccc: 0x241e1800  addiu       $fp, $zero, 0x1800
    ctx->pc = 0x105cccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x105cd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105cd4: 0xae130088  sw          $s3, 0x88($s0)
    ctx->pc = 0x105cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 19));
    // 0x105cd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x105cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x105cdc: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x105cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x105ce0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x105ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x105ce4: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x105ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105ce8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x105ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105cec: 0x24027d70  addiu       $v0, $zero, 0x7D70
    ctx->pc = 0x105cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32112));
    // 0x105cf0: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x105cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x105cf4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x105cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x105cf8: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x105cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x105cfc: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x105cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x105d00: 0xae170094  sw          $s7, 0x94($s0)
    ctx->pc = 0x105d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 23));
    // 0x105d04: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x105d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x105d08: 0x24170300  addiu       $s7, $zero, 0x300
    ctx->pc = 0x105d08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x105d0c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x105d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x105d10: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x105d10u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x105d14: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x105d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x105d18: 0xae0700a0  sw          $a3, 0xA0($s0)
    ctx->pc = 0x105d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
    // 0x105d1c: 0xae1100a4  sw          $s1, 0xA4($s0)
    ctx->pc = 0x105d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 17));
    // 0x105d20: 0xa21600b0  sb          $s6, 0xB0($s0)
    ctx->pc = 0x105d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 22));
    // 0x105d24: 0xe61400a8  swc1        $f20, 0xA8($s0)
    ctx->pc = 0x105d24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x105d28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D28u;
    {
        const bool branch_taken_0x105d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D28u;
            // 0x105d2c: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d28) {
            ctx->pc = 0x105D3Cu;
            goto label_105d3c;
        }
    }
    ctx->pc = 0x105D30u;
    // 0x105d30: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105d34: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105D34u;
    SET_GPR_U32(ctx, 31, 0x105D3Cu);
    ctx->pc = 0x105D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D34u;
            // 0x105d38: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D3Cu; }
        if (ctx->pc != 0x105D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D3Cu; }
        if (ctx->pc != 0x105D3Cu) { return; }
    }
    ctx->pc = 0x105D3Cu;
label_105d3c:
    // 0x105d3c: 0x8f8282a8  lw          $v0, -0x7D58($gp)
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x105d40: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x105d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x105d44: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x105d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x105d48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105d4c: 0xae1200cc  sw          $s2, 0xCC($s0)
    ctx->pc = 0x105d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 18));
    // 0x105d50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x105d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x105d54: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x105d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x105d58: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x105d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x105d5c: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105d60: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105d64: 0x340282c0  ori         $v0, $zero, 0x82C0
    ctx->pc = 0x105d64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33472u)));
    // 0x105d68: 0xae1500d8  sw          $s5, 0xD8($s0)
    ctx->pc = 0x105d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 21));
    // 0x105d6c: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x105d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x105d70: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x105d70u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x105d74: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x105d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105d78: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x105d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x105d7c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x105d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x105d80: 0xae1e00e0  sw          $fp, 0xE0($s0)
    ctx->pc = 0x105d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 30));
    // 0x105d84: 0xae1700e4  sw          $s7, 0xE4($s0)
    ctx->pc = 0x105d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 23));
    // 0x105d88: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x105d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
    // 0x105d8c: 0xa21600f4  sb          $s6, 0xF4($s0)
    ctx->pc = 0x105d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 22));
    // 0x105d90: 0xe61400ec  swc1        $f20, 0xEC($s0)
    ctx->pc = 0x105d90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x105d94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D94u;
    {
        const bool branch_taken_0x105d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D94u;
            // 0x105d98: 0xe61400f0  swc1        $f20, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d94) {
            ctx->pc = 0x105DA8u;
            goto label_105da8;
        }
    }
    ctx->pc = 0x105D9Cu;
    // 0x105d9c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105da0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105DA0u;
    SET_GPR_U32(ctx, 31, 0x105DA8u);
    ctx->pc = 0x105DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DA0u;
            // 0x105da4: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DA8u; }
        if (ctx->pc != 0x105DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DA8u; }
        if (ctx->pc != 0x105DA8u) { return; }
    }
    ctx->pc = 0x105DA8u;
label_105da8:
    // 0x105da8: 0x8f8282ac  lw          $v0, -0x7D54($gp)
    ctx->pc = 0x105da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
    // 0x105dac: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x105dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x105db0: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x105db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x105db4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105db8: 0xae120110  sw          $s2, 0x110($s0)
    ctx->pc = 0x105db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 18));
    // 0x105dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x105dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x105dc0: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x105dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x105dc4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x105dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x105dc8: 0x3a900  sll         $s5, $v1, 4
    ctx->pc = 0x105dc8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105dcc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105dd0: 0x34028540  ori         $v0, $zero, 0x8540
    ctx->pc = 0x105dd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34112u)));
    // 0x105dd4: 0xae13011c  sw          $s3, 0x11C($s0)
    ctx->pc = 0x105dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 19));
    // 0x105dd8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x105dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x105ddc: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x105ddcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x105de0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x105de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105de4: 0xae070118  sw          $a3, 0x118($s0)
    ctx->pc = 0x105de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 7));
    // 0x105de8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x105de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x105dec: 0xae1e0124  sw          $fp, 0x124($s0)
    ctx->pc = 0x105decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 30));
    // 0x105df0: 0xae170128  sw          $s7, 0x128($s0)
    ctx->pc = 0x105df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 23));
    // 0x105df4: 0xae11012c  sw          $s1, 0x12C($s0)
    ctx->pc = 0x105df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 17));
    // 0x105df8: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x105df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x105dfc: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x105dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x105e00: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E00u;
    {
        const bool branch_taken_0x105e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E00u;
            // 0x105e04: 0xe6140134  swc1        $f20, 0x134($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e00) {
            ctx->pc = 0x105E14u;
            goto label_105e14;
        }
    }
    ctx->pc = 0x105E08u;
    // 0x105e08: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105e0c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105E0Cu;
    SET_GPR_U32(ctx, 31, 0x105E14u);
    ctx->pc = 0x105E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E0Cu;
            // 0x105e10: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E14u; }
        if (ctx->pc != 0x105E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E14u; }
        if (ctx->pc != 0x105E14u) { return; }
    }
    ctx->pc = 0x105E14u;
label_105e14:
    // 0x105e14: 0x8f8282b0  lw          $v0, -0x7D50($gp)
    ctx->pc = 0x105e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x105e18: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x105e1c: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x105e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x105e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105e24: 0xae120154  sw          $s2, 0x154($s0)
    ctx->pc = 0x105e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 18));
    // 0x105e28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x105e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x105e2c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x105e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x105e30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x105e34: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x105e34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105e38: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x105e38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x105e3c: 0x340287c0  ori         $v0, $zero, 0x87C0
    ctx->pc = 0x105e3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34752u)));
    // 0x105e40: 0xae150160  sw          $s5, 0x160($s0)
    ctx->pc = 0x105e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 21));
    // 0x105e44: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x105e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x105e48: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x105e48u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x105e4c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x105e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105e50: 0xae07015c  sw          $a3, 0x15C($s0)
    ctx->pc = 0x105e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 7));
    // 0x105e54: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x105e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x105e58: 0xae1e0168  sw          $fp, 0x168($s0)
    ctx->pc = 0x105e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 30));
    // 0x105e5c: 0xae17016c  sw          $s7, 0x16C($s0)
    ctx->pc = 0x105e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 23));
    // 0x105e60: 0xae110170  sw          $s1, 0x170($s0)
    ctx->pc = 0x105e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 17));
    // 0x105e64: 0xa216017c  sb          $s6, 0x17C($s0)
    ctx->pc = 0x105e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 380), (uint8_t)GPR_U32(ctx, 22));
    // 0x105e68: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x105e68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x105e6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E6Cu;
    {
        const bool branch_taken_0x105e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E6Cu;
            // 0x105e70: 0xe6140178  swc1        $f20, 0x178($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e6c) {
            ctx->pc = 0x105E80u;
            goto label_105e80;
        }
    }
    ctx->pc = 0x105E74u;
    // 0x105e74: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105e78: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105E78u;
    SET_GPR_U32(ctx, 31, 0x105E80u);
    ctx->pc = 0x105E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E78u;
            // 0x105e7c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E80u; }
        if (ctx->pc != 0x105E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E80u; }
        if (ctx->pc != 0x105E80u) { return; }
    }
    ctx->pc = 0x105E80u;
label_105e80:
    // 0x105e80: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x105e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
    // 0x105e84: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x105e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x105e88: 0x8f9382ec  lw          $s3, -0x7D14($gp)
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    // 0x105e8c: 0x248206c0  addiu       $v0, $a0, 0x6C0
    ctx->pc = 0x105e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    // 0x105e90: 0xae120198  sw          $s2, 0x198($s0)
    ctx->pc = 0x105e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 18));
    // 0x105e94: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x105e94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x105e98: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x105e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x105e9c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x105e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105ea0: 0x3263003f  andi        $v1, $s3, 0x3F
    ctx->pc = 0x105ea0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)63u)));
    // 0x105ea4: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x105ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x105ea8: 0x34028a40  ori         $v0, $zero, 0x8A40
    ctx->pc = 0x105ea8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)35392u)));
    // 0x105eac: 0xae1401a4  sw          $s4, 0x1A4($s0)
    ctx->pc = 0x105eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 20));
    // 0x105eb0: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x105eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x105eb4: 0xae1e01ac  sw          $fp, 0x1AC($s0)
    ctx->pc = 0x105eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 30));
    // 0x105eb8: 0xae1701b0  sw          $s7, 0x1B0($s0)
    ctx->pc = 0x105eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 23));
    // 0x105ebc: 0xae1101b4  sw          $s1, 0x1B4($s0)
    ctx->pc = 0x105ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 17));
    // 0x105ec0: 0xa21601c0  sb          $s6, 0x1C0($s0)
    ctx->pc = 0x105ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 22));
    // 0x105ec4: 0xe61401b8  swc1        $f20, 0x1B8($s0)
    ctx->pc = 0x105ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x105ec8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EC8u;
    {
        const bool branch_taken_0x105ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105EC8u;
            // 0x105ecc: 0xe61401bc  swc1        $f20, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ec8) {
            ctx->pc = 0x105EE0u;
            goto label_105ee0;
        }
    }
    ctx->pc = 0x105ED0u;
    // 0x105ed0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105ed4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105ED4u;
    SET_GPR_U32(ctx, 31, 0x105EDCu);
    ctx->pc = 0x105ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105ED4u;
            // 0x105ed8: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EDCu; }
        if (ctx->pc != 0x105EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EDCu; }
        if (ctx->pc != 0x105EDCu) { return; }
    }
    ctx->pc = 0x105EDCu;
    // 0x105edc: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x105edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
label_105ee0:
    // 0x105ee0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x105ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x105ee4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x105ee8: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x105ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x105eec: 0x2c830155  sltiu       $v1, $a0, 0x155
    ctx->pc = 0x105eecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x105ef0: 0x24027780  addiu       $v0, $zero, 0x7780
    ctx->pc = 0x105ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30592));
    // 0x105ef4: 0xae0701e0  sw          $a3, 0x1E0($s0)
    ctx->pc = 0x105ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 7));
    // 0x105ef8: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x105ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x105efc: 0x24072800  addiu       $a3, $zero, 0x2800
    ctx->pc = 0x105efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x105f00: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x105f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x105f04: 0xe6140200  swc1        $f20, 0x200($s0)
    ctx->pc = 0x105f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x105f08: 0xae1301dc  sw          $s3, 0x1DC($s0)
    ctx->pc = 0x105f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 19));
    // 0x105f0c: 0xae1201e8  sw          $s2, 0x1E8($s0)
    ctx->pc = 0x105f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 18));
    // 0x105f10: 0xae0701f0  sw          $a3, 0x1F0($s0)
    ctx->pc = 0x105f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 7));
    // 0x105f14: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x105f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x105f18: 0xae1101f8  sw          $s1, 0x1F8($s0)
    ctx->pc = 0x105f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 17));
    // 0x105f1c: 0xa2160204  sb          $s6, 0x204($s0)
    ctx->pc = 0x105f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 22));
    // 0x105f20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105F20u;
    {
        const bool branch_taken_0x105f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F20u;
            // 0x105f24: 0xe61401fc  swc1        $f20, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f20) {
            ctx->pc = 0x105F30u;
            goto label_105f30;
        }
    }
    ctx->pc = 0x105F28u;
    // 0x105f28: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x105f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x105f2c: 0xaf848164  sw          $a0, -0x7E9C($gp)
    ctx->pc = 0x105f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934884), GPR_U32(ctx, 4));
label_105f30:
    // 0x105f30: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x105f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x105f34: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x105f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x105f38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F38u;
    {
        const bool branch_taken_0x105f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f38) {
            ctx->pc = 0x105F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105F38u;
            // 0x105f3c: 0x8f838154  lw          $v1, -0x7EAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105F4Cu;
            goto label_105f4c;
        }
    }
    ctx->pc = 0x105F40u;
    // 0x105f40: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x105f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x105f44: 0xaf828150  sw          $v0, -0x7EB0($gp)
    ctx->pc = 0x105f44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 2));
    // 0x105f48: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x105f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
label_105f4c:
    // 0x105f4c: 0x2c62012d  sltiu       $v0, $v1, 0x12D
    ctx->pc = 0x105f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x105f50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F50u;
    {
        const bool branch_taken_0x105f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f50) {
            ctx->pc = 0x105F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105F50u;
            // 0x105f54: 0x8f838158  lw          $v1, -0x7EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105F64u;
            goto label_105f64;
        }
    }
    ctx->pc = 0x105F58u;
    // 0x105f58: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x105f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x105f5c: 0xaf828154  sw          $v0, -0x7EAC($gp)
    ctx->pc = 0x105f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
    // 0x105f60: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_105f64:
    // 0x105f64: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x105f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x105f68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F68u;
    {
        const bool branch_taken_0x105f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f68) {
            ctx->pc = 0x105F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105F68u;
            // 0x105f6c: 0x8f83815c  lw          $v1, -0x7EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105F7Cu;
            goto label_105f7c;
        }
    }
    ctx->pc = 0x105F70u;
    // 0x105f70: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x105f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x105f74: 0xaf828158  sw          $v0, -0x7EA8($gp)
    ctx->pc = 0x105f74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 2));
    // 0x105f78: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x105f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
label_105f7c:
    // 0x105f7c: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x105f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x105f80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F80u;
    {
        const bool branch_taken_0x105f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105f80) {
            ctx->pc = 0x105F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105F80u;
            // 0x105f84: 0x8f838160  lw          $v1, -0x7EA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105F94u;
            goto label_105f94;
        }
    }
    ctx->pc = 0x105F88u;
    // 0x105f88: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x105f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x105f8c: 0xaf82815c  sw          $v0, -0x7EA4($gp)
    ctx->pc = 0x105f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 2));
    // 0x105f90: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_105f94:
    // 0x105f94: 0x2c620169  sltiu       $v0, $v1, 0x169
    ctx->pc = 0x105f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)361) ? 1 : 0);
    // 0x105f98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105F98u;
    {
        const bool branch_taken_0x105f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F98u;
            // 0x105f9c: 0x8f918170  lw          $s1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f98) {
            ctx->pc = 0x105FA8u;
            goto label_105fa8;
        }
    }
    ctx->pc = 0x105FA0u;
    // 0x105fa0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x105fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x105fa4: 0xaf828160  sw          $v0, -0x7EA0($gp)
    ctx->pc = 0x105fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 2));
label_105fa8:
    // 0x105fa8: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x105fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x105fac: 0x8f858314  lw          $a1, -0x7CEC($gp)
    ctx->pc = 0x105facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x105fb0: 0x2473eb18  addiu       $s3, $v1, -0x14E8
    ctx->pc = 0x105fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961944));
    // 0x105fb4: 0x8f848318  lw          $a0, -0x7CE8($gp)
    ctx->pc = 0x105fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x105fb8: 0x8f82831c  lw          $v0, -0x7CE4($gp)
    ctx->pc = 0x105fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
    // 0x105fbc: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x105fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x105fc0: 0x8f838320  lw          $v1, -0x7CE0($gp)
    ctx->pc = 0x105fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935328)));
    // 0x105fc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x105fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105fc8: 0xace5eb18  sw          $a1, -0x14E8($a3)
    ctx->pc = 0x105fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961944), GPR_U32(ctx, 5));
    // 0x105fcc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x105fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x105fd0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x105fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x105fd4: 0x162600e0  bne         $s1, $a2, . + 4 + (0xE0 << 2)
    ctx->pc = 0x105FD4u;
    {
        const bool branch_taken_0x105fd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x105FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FD4u;
            // 0x105fd8: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fd4) {
            ctx->pc = 0x106358u;
            goto label_106358;
        }
    }
    ctx->pc = 0x105FDCu;
    // 0x105fdc: 0x8f9182e0  lw          $s1, -0x7D20($gp)
    ctx->pc = 0x105fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x105fe0: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x105fe0u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x105fe4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x105fe4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105fe8: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x105fe8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x105fec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FECu;
    {
        const bool branch_taken_0x105fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105FECu;
            // 0x105ff0: 0x2416007f  addiu       $s6, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fec) {
            ctx->pc = 0x106000u;
            goto label_106000;
        }
    }
    ctx->pc = 0x105FF4u;
    // 0x105ff4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x105ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x105ff8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x105FF8u;
    SET_GPR_U32(ctx, 31, 0x106000u);
    ctx->pc = 0x105FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105FF8u;
            // 0x105ffc: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106000u; }
        if (ctx->pc != 0x106000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106000u; }
        if (ctx->pc != 0x106000u) { return; }
    }
    ctx->pc = 0x106000u;
label_106000:
    // 0x106000: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x106000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x106004: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x106004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x106008: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x106008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x10600c: 0x8f928310  lw          $s2, -0x7CF0($gp)
    ctx->pc = 0x10600cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935312)));
    // 0x106010: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106014: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106018: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x106018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x10601c: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x10601cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106024: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x106024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106028: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10602c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x10602cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x106030: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x106030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x106034: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x106034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x106038: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x106038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x10603c: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x10603cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x106040: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x106040u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x106044: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x106044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x106048: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x106048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x10604c: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x10604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x106050: 0xae150060  sw          $s5, 0x60($s0)
    ctx->pc = 0x106050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 21));
    // 0x106054: 0xa216006c  sb          $s6, 0x6C($s0)
    ctx->pc = 0x106054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 22));
    // 0x106058: 0xe6140064  swc1        $f20, 0x64($s0)
    ctx->pc = 0x106058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x10605c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10605Cu;
    {
        const bool branch_taken_0x10605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10605Cu;
            // 0x106060: 0xe6140068  swc1        $f20, 0x68($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10605c) {
            ctx->pc = 0x106070u;
            goto label_106070;
        }
    }
    ctx->pc = 0x106064u;
    // 0x106064: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106068: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106068u;
    SET_GPR_U32(ctx, 31, 0x106070u);
    ctx->pc = 0x10606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106068u;
            // 0x10606c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106070u; }
        if (ctx->pc != 0x106070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106070u; }
        if (ctx->pc != 0x106070u) { return; }
    }
    ctx->pc = 0x106070u;
label_106070:
    // 0x106070: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x106070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x106074: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x106074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106078: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x106078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x10607c: 0x241e1800  addiu       $fp, $zero, 0x1800
    ctx->pc = 0x10607cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x106080: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106084: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x106084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x106088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10608c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x10608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106090: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106094: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x106094u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106098: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10609c: 0x24027d70  addiu       $v0, $zero, 0x7D70
    ctx->pc = 0x10609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32112));
    // 0x1060a0: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x1060a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x1060a4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1060a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1060a8: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x1060a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1060ac: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1060acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1060b0: 0xae170094  sw          $s7, 0x94($s0)
    ctx->pc = 0x1060b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 23));
    // 0x1060b4: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1060b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1060b8: 0x24170300  addiu       $s7, $zero, 0x300
    ctx->pc = 0x1060b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1060bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1060bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1060c0: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1060c0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1060c4: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1060c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x1060c8: 0xae0700a0  sw          $a3, 0xA0($s0)
    ctx->pc = 0x1060c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
    // 0x1060cc: 0xae1500a4  sw          $s5, 0xA4($s0)
    ctx->pc = 0x1060ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 21));
    // 0x1060d0: 0xa21600b0  sb          $s6, 0xB0($s0)
    ctx->pc = 0x1060d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 22));
    // 0x1060d4: 0xe61400a8  swc1        $f20, 0xA8($s0)
    ctx->pc = 0x1060d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x1060d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1060D8u;
    {
        const bool branch_taken_0x1060d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1060D8u;
            // 0x1060dc: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060d8) {
            ctx->pc = 0x1060ECu;
            goto label_1060ec;
        }
    }
    ctx->pc = 0x1060E0u;
    // 0x1060e0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1060e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1060e4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1060E4u;
    SET_GPR_U32(ctx, 31, 0x1060ECu);
    ctx->pc = 0x1060E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1060E4u;
            // 0x1060e8: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060ECu; }
        if (ctx->pc != 0x1060ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1060ECu; }
        if (ctx->pc != 0x1060ECu) { return; }
    }
    ctx->pc = 0x1060ECu;
label_1060ec:
    // 0x1060ec: 0x8f8282a8  lw          $v0, -0x7D58($gp)
    ctx->pc = 0x1060ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x1060f0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1060f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1060f4: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x1060f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1060fc: 0xae1100cc  sw          $s1, 0xCC($s0)
    ctx->pc = 0x1060fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 17));
    // 0x106100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106104: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106108: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10610c: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x10610cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106110: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106110u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106114: 0x340282c0  ori         $v0, $zero, 0x82C0
    ctx->pc = 0x106114u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33472u)));
    // 0x106118: 0xae1400d8  sw          $s4, 0xD8($s0)
    ctx->pc = 0x106118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 20));
    // 0x10611c: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x10611cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x106120: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106120u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106124: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106128: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x106128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x10612c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x10612cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x106130: 0xae1e00e0  sw          $fp, 0xE0($s0)
    ctx->pc = 0x106130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 30));
    // 0x106134: 0xae1700e4  sw          $s7, 0xE4($s0)
    ctx->pc = 0x106134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 23));
    // 0x106138: 0xae1500e8  sw          $s5, 0xE8($s0)
    ctx->pc = 0x106138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 21));
    // 0x10613c: 0xa21600f4  sb          $s6, 0xF4($s0)
    ctx->pc = 0x10613cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 22));
    // 0x106140: 0xe61400ec  swc1        $f20, 0xEC($s0)
    ctx->pc = 0x106140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x106144: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106144u;
    {
        const bool branch_taken_0x106144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106144u;
            // 0x106148: 0xe61400f0  swc1        $f20, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106144) {
            ctx->pc = 0x106158u;
            goto label_106158;
        }
    }
    ctx->pc = 0x10614Cu;
    // 0x10614c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106150: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106150u;
    SET_GPR_U32(ctx, 31, 0x106158u);
    ctx->pc = 0x106154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106150u;
            // 0x106154: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106158u; }
        if (ctx->pc != 0x106158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106158u; }
        if (ctx->pc != 0x106158u) { return; }
    }
    ctx->pc = 0x106158u;
label_106158:
    // 0x106158: 0x8f8282ac  lw          $v0, -0x7D54($gp)
    ctx->pc = 0x106158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
    // 0x10615c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x10615cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106160: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x106160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x106164: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106168: 0xae110110  sw          $s1, 0x110($s0)
    ctx->pc = 0x106168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
    // 0x10616c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106170: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106174: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106178: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x106178u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10617c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10617cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106180: 0x34028540  ori         $v0, $zero, 0x8540
    ctx->pc = 0x106180u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34112u)));
    // 0x106184: 0xae12011c  sw          $s2, 0x11C($s0)
    ctx->pc = 0x106184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 18));
    // 0x106188: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x106188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x10618c: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x10618cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106190: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106194: 0xae070118  sw          $a3, 0x118($s0)
    ctx->pc = 0x106194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 7));
    // 0x106198: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x106198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x10619c: 0xae1e0124  sw          $fp, 0x124($s0)
    ctx->pc = 0x10619cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 30));
    // 0x1061a0: 0xae170128  sw          $s7, 0x128($s0)
    ctx->pc = 0x1061a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 23));
    // 0x1061a4: 0xae15012c  sw          $s5, 0x12C($s0)
    ctx->pc = 0x1061a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 21));
    // 0x1061a8: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x1061a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x1061ac: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x1061acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x1061b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1061B0u;
    {
        const bool branch_taken_0x1061b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1061B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1061B0u;
            // 0x1061b4: 0xe6140134  swc1        $f20, 0x134($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1061b0) {
            ctx->pc = 0x1061C4u;
            goto label_1061c4;
        }
    }
    ctx->pc = 0x1061B8u;
    // 0x1061b8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1061b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1061bc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1061BCu;
    SET_GPR_U32(ctx, 31, 0x1061C4u);
    ctx->pc = 0x1061C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1061BCu;
            // 0x1061c0: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061C4u; }
        if (ctx->pc != 0x1061C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1061C4u; }
        if (ctx->pc != 0x1061C4u) { return; }
    }
    ctx->pc = 0x1061C4u;
label_1061c4:
    // 0x1061c4: 0x8f8282b0  lw          $v0, -0x7D50($gp)
    ctx->pc = 0x1061c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x1061c8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1061c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1061cc: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x1061ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x1061d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1061d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1061d4: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x1061d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
    // 0x1061d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1061d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1061dc: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1061dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x1061e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1061e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1061e4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1061e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1061e8: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x1061e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1061ec: 0x340287c0  ori         $v0, $zero, 0x87C0
    ctx->pc = 0x1061ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34752u)));
    // 0x1061f0: 0xae140160  sw          $s4, 0x160($s0)
    ctx->pc = 0x1061f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 20));
    // 0x1061f4: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x1061f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x1061f8: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1061f8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1061fc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1061fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106200: 0xae07015c  sw          $a3, 0x15C($s0)
    ctx->pc = 0x106200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 7));
    // 0x106204: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x106204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x106208: 0xae1e0168  sw          $fp, 0x168($s0)
    ctx->pc = 0x106208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 30));
    // 0x10620c: 0xae17016c  sw          $s7, 0x16C($s0)
    ctx->pc = 0x10620cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 23));
    // 0x106210: 0xae150170  sw          $s5, 0x170($s0)
    ctx->pc = 0x106210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 21));
    // 0x106214: 0xa216017c  sb          $s6, 0x17C($s0)
    ctx->pc = 0x106214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 380), (uint8_t)GPR_U32(ctx, 22));
    // 0x106218: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x106218u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x10621c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10621Cu;
    {
        const bool branch_taken_0x10621c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10621Cu;
            // 0x106220: 0xe6140178  swc1        $f20, 0x178($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10621c) {
            ctx->pc = 0x106230u;
            goto label_106230;
        }
    }
    ctx->pc = 0x106224u;
    // 0x106224: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106228: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106228u;
    SET_GPR_U32(ctx, 31, 0x106230u);
    ctx->pc = 0x10622Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106228u;
            // 0x10622c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106230u; }
        if (ctx->pc != 0x106230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106230u; }
        if (ctx->pc != 0x106230u) { return; }
    }
    ctx->pc = 0x106230u;
label_106230:
    // 0x106230: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x106230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
    // 0x106234: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x106234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106238: 0x8f9282ec  lw          $s2, -0x7D14($gp)
    ctx->pc = 0x106238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    // 0x10623c: 0x248206c0  addiu       $v0, $a0, 0x6C0
    ctx->pc = 0x10623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    // 0x106240: 0xae110198  sw          $s1, 0x198($s0)
    ctx->pc = 0x106240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 17));
    // 0x106244: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x106244u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x106248: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x106248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x10624c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106250: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x106250u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x106254: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x106254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x106258: 0x34028a40  ori         $v0, $zero, 0x8A40
    ctx->pc = 0x106258u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)35392u)));
    // 0x10625c: 0xae1301a4  sw          $s3, 0x1A4($s0)
    ctx->pc = 0x10625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 19));
    // 0x106260: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x106260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x106264: 0xae1e01ac  sw          $fp, 0x1AC($s0)
    ctx->pc = 0x106264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 30));
    // 0x106268: 0xae1701b0  sw          $s7, 0x1B0($s0)
    ctx->pc = 0x106268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 23));
    // 0x10626c: 0xae1501b4  sw          $s5, 0x1B4($s0)
    ctx->pc = 0x10626cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 21));
    // 0x106270: 0xa21601c0  sb          $s6, 0x1C0($s0)
    ctx->pc = 0x106270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 22));
    // 0x106274: 0xe61401b8  swc1        $f20, 0x1B8($s0)
    ctx->pc = 0x106274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x106278: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x106278u;
    {
        const bool branch_taken_0x106278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106278u;
            // 0x10627c: 0xe61401bc  swc1        $f20, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106278) {
            ctx->pc = 0x106290u;
            goto label_106290;
        }
    }
    ctx->pc = 0x106280u;
    // 0x106280: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106284: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106284u;
    SET_GPR_U32(ctx, 31, 0x10628Cu);
    ctx->pc = 0x106288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106284u;
            // 0x106288: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10628Cu; }
        if (ctx->pc != 0x10628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10628Cu; }
        if (ctx->pc != 0x10628Cu) { return; }
    }
    ctx->pc = 0x10628Cu;
    // 0x10628c: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x10628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
label_106290:
    // 0x106290: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x106290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x106294: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x106294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106298: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x106298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x10629c: 0x2c830155  sltiu       $v1, $a0, 0x155
    ctx->pc = 0x10629cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1062a0: 0x24027780  addiu       $v0, $zero, 0x7780
    ctx->pc = 0x1062a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30592));
    // 0x1062a4: 0xae0701e0  sw          $a3, 0x1E0($s0)
    ctx->pc = 0x1062a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 7));
    // 0x1062a8: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x1062a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x1062ac: 0x24072800  addiu       $a3, $zero, 0x2800
    ctx->pc = 0x1062acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x1062b0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1062b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1062b4: 0xe6140200  swc1        $f20, 0x200($s0)
    ctx->pc = 0x1062b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x1062b8: 0xae1201dc  sw          $s2, 0x1DC($s0)
    ctx->pc = 0x1062b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 18));
    // 0x1062bc: 0xae1101e8  sw          $s1, 0x1E8($s0)
    ctx->pc = 0x1062bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 17));
    // 0x1062c0: 0xae0701f0  sw          $a3, 0x1F0($s0)
    ctx->pc = 0x1062c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 7));
    // 0x1062c4: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x1062c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x1062c8: 0xae1501f8  sw          $s5, 0x1F8($s0)
    ctx->pc = 0x1062c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 21));
    // 0x1062cc: 0xa2160204  sb          $s6, 0x204($s0)
    ctx->pc = 0x1062ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 22));
    // 0x1062d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1062D0u;
    {
        const bool branch_taken_0x1062d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1062D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1062D0u;
            // 0x1062d4: 0xe61401fc  swc1        $f20, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1062d0) {
            ctx->pc = 0x1062E0u;
            goto label_1062e0;
        }
    }
    ctx->pc = 0x1062D8u;
    // 0x1062d8: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1062d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1062dc: 0xaf848164  sw          $a0, -0x7E9C($gp)
    ctx->pc = 0x1062dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934884), GPR_U32(ctx, 4));
label_1062e0:
    // 0x1062e0: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x1062e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x1062e4: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x1062e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x1062e8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1062E8u;
    {
        const bool branch_taken_0x1062e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1062e8) {
            ctx->pc = 0x1062ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1062E8u;
            // 0x1062ec: 0x8f838154  lw          $v1, -0x7EAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1062FCu;
            goto label_1062fc;
        }
    }
    ctx->pc = 0x1062F0u;
    // 0x1062f0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1062f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1062f4: 0xaf828150  sw          $v0, -0x7EB0($gp)
    ctx->pc = 0x1062f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 2));
    // 0x1062f8: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x1062f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
label_1062fc:
    // 0x1062fc: 0x2c62012d  sltiu       $v0, $v1, 0x12D
    ctx->pc = 0x1062fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x106300: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106300u;
    {
        const bool branch_taken_0x106300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106300) {
            ctx->pc = 0x106304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106300u;
            // 0x106304: 0x8f838158  lw          $v1, -0x7EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106314u;
            goto label_106314;
        }
    }
    ctx->pc = 0x106308u;
    // 0x106308: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x10630c: 0xaf828154  sw          $v0, -0x7EAC($gp)
    ctx->pc = 0x10630cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
    // 0x106310: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x106310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_106314:
    // 0x106314: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x106314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x106318: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106318u;
    {
        const bool branch_taken_0x106318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106318) {
            ctx->pc = 0x10631Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106318u;
            // 0x10631c: 0x8f83815c  lw          $v1, -0x7EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10632Cu;
            goto label_10632c;
        }
    }
    ctx->pc = 0x106320u;
    // 0x106320: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106324: 0xaf828158  sw          $v0, -0x7EA8($gp)
    ctx->pc = 0x106324u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 2));
    // 0x106328: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x106328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
label_10632c:
    // 0x10632c: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x10632cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x106330: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106330u;
    {
        const bool branch_taken_0x106330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106330) {
            ctx->pc = 0x106334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106330u;
            // 0x106334: 0x8f838160  lw          $v1, -0x7EA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106344u;
            goto label_106344;
        }
    }
    ctx->pc = 0x106338u;
    // 0x106338: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x10633c: 0xaf82815c  sw          $v0, -0x7EA4($gp)
    ctx->pc = 0x10633cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 2));
    // 0x106340: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x106340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_106344:
    // 0x106344: 0x2c620169  sltiu       $v0, $v1, 0x169
    ctx->pc = 0x106344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)361) ? 1 : 0);
    // 0x106348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106348u;
    {
        const bool branch_taken_0x106348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106348u;
            // 0x10634c: 0x8f918170  lw          $s1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106348) {
            ctx->pc = 0x106358u;
            goto label_106358;
        }
    }
    ctx->pc = 0x106350u;
    // 0x106350: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106354: 0xaf828160  sw          $v0, -0x7EA0($gp)
    ctx->pc = 0x106354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 2));
label_106358:
    // 0x106358: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x106358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x10635c: 0x8f858328  lw          $a1, -0x7CD8($gp)
    ctx->pc = 0x10635cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935336)));
    // 0x106360: 0x2473eb18  addiu       $s3, $v1, -0x14E8
    ctx->pc = 0x106360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961944));
    // 0x106364: 0x8f84832c  lw          $a0, -0x7CD4($gp)
    ctx->pc = 0x106364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935340)));
    // 0x106368: 0x8f828330  lw          $v0, -0x7CD0($gp)
    ctx->pc = 0x106368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x10636c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x10636cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x106370: 0x8f838334  lw          $v1, -0x7CCC($gp)
    ctx->pc = 0x106370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935348)));
    // 0x106374: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x106374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106378: 0xace5eb18  sw          $a1, -0x14E8($a3)
    ctx->pc = 0x106378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961944), GPR_U32(ctx, 5));
    // 0x10637c: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x10637cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x106380: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x106380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x106384: 0x162600e0  bne         $s1, $a2, . + 4 + (0xE0 << 2)
    ctx->pc = 0x106384u;
    {
        const bool branch_taken_0x106384 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x106388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106384u;
            // 0x106388: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106384) {
            ctx->pc = 0x106708u;
            goto label_106708;
        }
    }
    ctx->pc = 0x10638Cu;
    // 0x10638c: 0x8f9182e0  lw          $s1, -0x7D20($gp)
    ctx->pc = 0x10638cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x106390: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x106390u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x106394: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x106394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106398: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x106398u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x10639c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10639Cu;
    {
        const bool branch_taken_0x10639c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1063A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10639Cu;
            // 0x1063a0: 0x2416007f  addiu       $s6, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10639c) {
            ctx->pc = 0x1063B0u;
            goto label_1063b0;
        }
    }
    ctx->pc = 0x1063A4u;
    // 0x1063a4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1063a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1063a8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1063A8u;
    SET_GPR_U32(ctx, 31, 0x1063B0u);
    ctx->pc = 0x1063ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1063A8u;
            // 0x1063ac: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1063B0u; }
        if (ctx->pc != 0x1063B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1063B0u; }
        if (ctx->pc != 0x1063B0u) { return; }
    }
    ctx->pc = 0x1063B0u;
label_1063b0:
    // 0x1063b0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1063b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1063b4: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x1063b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x1063b8: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x1063bc: 0x8f928324  lw          $s2, -0x7CDC($gp)
    ctx->pc = 0x1063bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935332)));
    // 0x1063c0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1063c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1063c4: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1063c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x1063c8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1063c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1063cc: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x1063ccu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1063d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1063d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1063d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1063d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1063d8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1063d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1063dc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1063dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1063e0: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x1063e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x1063e4: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x1063e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1063e8: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x1063e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x1063ec: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x1063ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x1063f0: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x1063f0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x1063f4: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x1063f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x1063f8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1063f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1063fc: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x1063fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x106400: 0xae150060  sw          $s5, 0x60($s0)
    ctx->pc = 0x106400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 21));
    // 0x106404: 0xa216006c  sb          $s6, 0x6C($s0)
    ctx->pc = 0x106404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 22));
    // 0x106408: 0xe6140064  swc1        $f20, 0x64($s0)
    ctx->pc = 0x106408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x10640c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10640Cu;
    {
        const bool branch_taken_0x10640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10640Cu;
            // 0x106410: 0xe6140068  swc1        $f20, 0x68($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10640c) {
            ctx->pc = 0x106420u;
            goto label_106420;
        }
    }
    ctx->pc = 0x106414u;
    // 0x106414: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106418: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106418u;
    SET_GPR_U32(ctx, 31, 0x106420u);
    ctx->pc = 0x10641Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106418u;
            // 0x10641c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106420u; }
        if (ctx->pc != 0x106420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106420u; }
        if (ctx->pc != 0x106420u) { return; }
    }
    ctx->pc = 0x106420u;
label_106420:
    // 0x106420: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x106420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x106424: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x106424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106428: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x106428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x10642c: 0x241e1800  addiu       $fp, $zero, 0x1800
    ctx->pc = 0x10642cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x106430: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106434: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x106434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x106438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10643c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106440: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106444: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x106444u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106448: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106448u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10644c: 0x24027d70  addiu       $v0, $zero, 0x7D70
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32112));
    // 0x106450: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x106450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x106454: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x106454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x106458: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x106458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x10645c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x106460: 0xae170094  sw          $s7, 0x94($s0)
    ctx->pc = 0x106460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 23));
    // 0x106464: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x106464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x106468: 0x24170300  addiu       $s7, $zero, 0x300
    ctx->pc = 0x106468u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x10646c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x10646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x106470: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106470u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106474: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x106474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x106478: 0xae0700a0  sw          $a3, 0xA0($s0)
    ctx->pc = 0x106478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
    // 0x10647c: 0xae1500a4  sw          $s5, 0xA4($s0)
    ctx->pc = 0x10647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 21));
    // 0x106480: 0xa21600b0  sb          $s6, 0xB0($s0)
    ctx->pc = 0x106480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 22));
    // 0x106484: 0xe61400a8  swc1        $f20, 0xA8($s0)
    ctx->pc = 0x106484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x106488: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106488u;
    {
        const bool branch_taken_0x106488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106488u;
            // 0x10648c: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106488) {
            ctx->pc = 0x10649Cu;
            goto label_10649c;
        }
    }
    ctx->pc = 0x106490u;
    // 0x106490: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106494: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106494u;
    SET_GPR_U32(ctx, 31, 0x10649Cu);
    ctx->pc = 0x106498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106494u;
            // 0x106498: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10649Cu; }
        if (ctx->pc != 0x10649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10649Cu; }
        if (ctx->pc != 0x10649Cu) { return; }
    }
    ctx->pc = 0x10649Cu;
label_10649c:
    // 0x10649c: 0x8f8282a8  lw          $v0, -0x7D58($gp)
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x1064a0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1064a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1064a4: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x1064a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x1064a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1064a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1064ac: 0xae1100cc  sw          $s1, 0xCC($s0)
    ctx->pc = 0x1064acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 17));
    // 0x1064b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1064b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1064b4: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1064b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x1064b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1064b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1064bc: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x1064bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1064c0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1064c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1064c4: 0x340282c0  ori         $v0, $zero, 0x82C0
    ctx->pc = 0x1064c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33472u)));
    // 0x1064c8: 0xae1400d8  sw          $s4, 0xD8($s0)
    ctx->pc = 0x1064c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 20));
    // 0x1064cc: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x1064ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x1064d0: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1064d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1064d4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1064d8: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x1064d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x1064dc: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1064dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x1064e0: 0xae1e00e0  sw          $fp, 0xE0($s0)
    ctx->pc = 0x1064e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 30));
    // 0x1064e4: 0xae1700e4  sw          $s7, 0xE4($s0)
    ctx->pc = 0x1064e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 23));
    // 0x1064e8: 0xae1500e8  sw          $s5, 0xE8($s0)
    ctx->pc = 0x1064e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 21));
    // 0x1064ec: 0xa21600f4  sb          $s6, 0xF4($s0)
    ctx->pc = 0x1064ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 22));
    // 0x1064f0: 0xe61400ec  swc1        $f20, 0xEC($s0)
    ctx->pc = 0x1064f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1064f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1064F4u;
    {
        const bool branch_taken_0x1064f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1064F4u;
            // 0x1064f8: 0xe61400f0  swc1        $f20, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064f4) {
            ctx->pc = 0x106508u;
            goto label_106508;
        }
    }
    ctx->pc = 0x1064FCu;
    // 0x1064fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1064fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106500: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106500u;
    SET_GPR_U32(ctx, 31, 0x106508u);
    ctx->pc = 0x106504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106500u;
            // 0x106504: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106508u; }
        if (ctx->pc != 0x106508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106508u; }
        if (ctx->pc != 0x106508u) { return; }
    }
    ctx->pc = 0x106508u;
label_106508:
    // 0x106508: 0x8f8282ac  lw          $v0, -0x7D54($gp)
    ctx->pc = 0x106508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
    // 0x10650c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x10650cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106510: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x106510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x106514: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106518: 0xae110110  sw          $s1, 0x110($s0)
    ctx->pc = 0x106518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
    // 0x10651c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10651cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106520: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106524: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106528: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x106528u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10652c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x10652cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106530: 0x34028540  ori         $v0, $zero, 0x8540
    ctx->pc = 0x106530u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34112u)));
    // 0x106534: 0xae12011c  sw          $s2, 0x11C($s0)
    ctx->pc = 0x106534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 18));
    // 0x106538: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x106538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x10653c: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x10653cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106540: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106544: 0xae070118  sw          $a3, 0x118($s0)
    ctx->pc = 0x106544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 7));
    // 0x106548: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x106548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x10654c: 0xae1e0124  sw          $fp, 0x124($s0)
    ctx->pc = 0x10654cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 30));
    // 0x106550: 0xae170128  sw          $s7, 0x128($s0)
    ctx->pc = 0x106550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 23));
    // 0x106554: 0xae15012c  sw          $s5, 0x12C($s0)
    ctx->pc = 0x106554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 21));
    // 0x106558: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x106558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x10655c: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x10655cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x106560: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106560u;
    {
        const bool branch_taken_0x106560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106560u;
            // 0x106564: 0xe6140134  swc1        $f20, 0x134($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106560) {
            ctx->pc = 0x106574u;
            goto label_106574;
        }
    }
    ctx->pc = 0x106568u;
    // 0x106568: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10656c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10656Cu;
    SET_GPR_U32(ctx, 31, 0x106574u);
    ctx->pc = 0x106570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10656Cu;
            // 0x106570: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106574u; }
        if (ctx->pc != 0x106574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106574u; }
        if (ctx->pc != 0x106574u) { return; }
    }
    ctx->pc = 0x106574u;
label_106574:
    // 0x106574: 0x8f8282b0  lw          $v0, -0x7D50($gp)
    ctx->pc = 0x106574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x106578: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x106578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10657c: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x10657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x106580: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106584: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x106584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
    // 0x106588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10658c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x10658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106590: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106594: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106598: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x106598u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10659c: 0x340287c0  ori         $v0, $zero, 0x87C0
    ctx->pc = 0x10659cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34752u)));
    // 0x1065a0: 0xae140160  sw          $s4, 0x160($s0)
    ctx->pc = 0x1065a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 20));
    // 0x1065a4: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x1065a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x1065a8: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1065a8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1065ac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1065acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1065b0: 0xae07015c  sw          $a3, 0x15C($s0)
    ctx->pc = 0x1065b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 7));
    // 0x1065b4: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1065b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x1065b8: 0xae1e0168  sw          $fp, 0x168($s0)
    ctx->pc = 0x1065b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 30));
    // 0x1065bc: 0xae17016c  sw          $s7, 0x16C($s0)
    ctx->pc = 0x1065bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 23));
    // 0x1065c0: 0xae150170  sw          $s5, 0x170($s0)
    ctx->pc = 0x1065c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 21));
    // 0x1065c4: 0xa216017c  sb          $s6, 0x17C($s0)
    ctx->pc = 0x1065c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 380), (uint8_t)GPR_U32(ctx, 22));
    // 0x1065c8: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x1065c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x1065cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1065CCu;
    {
        const bool branch_taken_0x1065cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1065D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1065CCu;
            // 0x1065d0: 0xe6140178  swc1        $f20, 0x178($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1065cc) {
            ctx->pc = 0x1065E0u;
            goto label_1065e0;
        }
    }
    ctx->pc = 0x1065D4u;
    // 0x1065d4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1065d8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1065D8u;
    SET_GPR_U32(ctx, 31, 0x1065E0u);
    ctx->pc = 0x1065DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1065D8u;
            // 0x1065dc: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065E0u; }
        if (ctx->pc != 0x1065E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1065E0u; }
        if (ctx->pc != 0x1065E0u) { return; }
    }
    ctx->pc = 0x1065E0u;
label_1065e0:
    // 0x1065e0: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x1065e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
    // 0x1065e4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1065e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1065e8: 0x8f9282ec  lw          $s2, -0x7D14($gp)
    ctx->pc = 0x1065e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    // 0x1065ec: 0x248206c0  addiu       $v0, $a0, 0x6C0
    ctx->pc = 0x1065ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    // 0x1065f0: 0xae110198  sw          $s1, 0x198($s0)
    ctx->pc = 0x1065f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 17));
    // 0x1065f4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x1065f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1065f8: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x1065f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x1065fc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106600: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x106600u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x106604: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x106604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x106608: 0x34028a40  ori         $v0, $zero, 0x8A40
    ctx->pc = 0x106608u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)35392u)));
    // 0x10660c: 0xae1301a4  sw          $s3, 0x1A4($s0)
    ctx->pc = 0x10660cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 19));
    // 0x106610: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x106610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x106614: 0xae1e01ac  sw          $fp, 0x1AC($s0)
    ctx->pc = 0x106614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 30));
    // 0x106618: 0xae1701b0  sw          $s7, 0x1B0($s0)
    ctx->pc = 0x106618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 23));
    // 0x10661c: 0xae1501b4  sw          $s5, 0x1B4($s0)
    ctx->pc = 0x10661cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 21));
    // 0x106620: 0xa21601c0  sb          $s6, 0x1C0($s0)
    ctx->pc = 0x106620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 22));
    // 0x106624: 0xe61401b8  swc1        $f20, 0x1B8($s0)
    ctx->pc = 0x106624u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x106628: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x106628u;
    {
        const bool branch_taken_0x106628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106628u;
            // 0x10662c: 0xe61401bc  swc1        $f20, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106628) {
            ctx->pc = 0x106640u;
            goto label_106640;
        }
    }
    ctx->pc = 0x106630u;
    // 0x106630: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106634: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106634u;
    SET_GPR_U32(ctx, 31, 0x10663Cu);
    ctx->pc = 0x106638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106634u;
            // 0x106638: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10663Cu; }
        if (ctx->pc != 0x10663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10663Cu; }
        if (ctx->pc != 0x10663Cu) { return; }
    }
    ctx->pc = 0x10663Cu;
    // 0x10663c: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x10663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
label_106640:
    // 0x106640: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x106640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x106644: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x106644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106648: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x106648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x10664c: 0x2c830155  sltiu       $v1, $a0, 0x155
    ctx->pc = 0x10664cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x106650: 0x24027780  addiu       $v0, $zero, 0x7780
    ctx->pc = 0x106650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30592));
    // 0x106654: 0xae0701e0  sw          $a3, 0x1E0($s0)
    ctx->pc = 0x106654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 7));
    // 0x106658: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x106658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x10665c: 0x24072800  addiu       $a3, $zero, 0x2800
    ctx->pc = 0x10665cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x106660: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x106660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x106664: 0xe6140200  swc1        $f20, 0x200($s0)
    ctx->pc = 0x106664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x106668: 0xae1201dc  sw          $s2, 0x1DC($s0)
    ctx->pc = 0x106668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 18));
    // 0x10666c: 0xae1101e8  sw          $s1, 0x1E8($s0)
    ctx->pc = 0x10666cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 17));
    // 0x106670: 0xae0701f0  sw          $a3, 0x1F0($s0)
    ctx->pc = 0x106670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 7));
    // 0x106674: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x106674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x106678: 0xae1501f8  sw          $s5, 0x1F8($s0)
    ctx->pc = 0x106678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 21));
    // 0x10667c: 0xa2160204  sb          $s6, 0x204($s0)
    ctx->pc = 0x10667cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 22));
    // 0x106680: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106680u;
    {
        const bool branch_taken_0x106680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106680u;
            // 0x106684: 0xe61401fc  swc1        $f20, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106680) {
            ctx->pc = 0x106690u;
            goto label_106690;
        }
    }
    ctx->pc = 0x106688u;
    // 0x106688: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x106688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x10668c: 0xaf848164  sw          $a0, -0x7E9C($gp)
    ctx->pc = 0x10668cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934884), GPR_U32(ctx, 4));
label_106690:
    // 0x106690: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x106690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x106694: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x106694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x106698: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106698u;
    {
        const bool branch_taken_0x106698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106698) {
            ctx->pc = 0x10669Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106698u;
            // 0x10669c: 0x8f838154  lw          $v1, -0x7EAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1066ACu;
            goto label_1066ac;
        }
    }
    ctx->pc = 0x1066A0u;
    // 0x1066a0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1066a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1066a4: 0xaf828150  sw          $v0, -0x7EB0($gp)
    ctx->pc = 0x1066a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 2));
    // 0x1066a8: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x1066a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
label_1066ac:
    // 0x1066ac: 0x2c62012d  sltiu       $v0, $v1, 0x12D
    ctx->pc = 0x1066acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x1066b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1066B0u;
    {
        const bool branch_taken_0x1066b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1066b0) {
            ctx->pc = 0x1066B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1066B0u;
            // 0x1066b4: 0x8f838158  lw          $v1, -0x7EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1066C4u;
            goto label_1066c4;
        }
    }
    ctx->pc = 0x1066B8u;
    // 0x1066b8: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1066b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1066bc: 0xaf828154  sw          $v0, -0x7EAC($gp)
    ctx->pc = 0x1066bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
    // 0x1066c0: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x1066c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_1066c4:
    // 0x1066c4: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x1066c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x1066c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1066C8u;
    {
        const bool branch_taken_0x1066c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1066c8) {
            ctx->pc = 0x1066CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1066C8u;
            // 0x1066cc: 0x8f83815c  lw          $v1, -0x7EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1066DCu;
            goto label_1066dc;
        }
    }
    ctx->pc = 0x1066D0u;
    // 0x1066d0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1066d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1066d4: 0xaf828158  sw          $v0, -0x7EA8($gp)
    ctx->pc = 0x1066d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 2));
    // 0x1066d8: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x1066d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
label_1066dc:
    // 0x1066dc: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x1066dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x1066e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1066E0u;
    {
        const bool branch_taken_0x1066e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1066e0) {
            ctx->pc = 0x1066E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1066E0u;
            // 0x1066e4: 0x8f838160  lw          $v1, -0x7EA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1066F4u;
            goto label_1066f4;
        }
    }
    ctx->pc = 0x1066E8u;
    // 0x1066e8: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1066e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1066ec: 0xaf82815c  sw          $v0, -0x7EA4($gp)
    ctx->pc = 0x1066ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 2));
    // 0x1066f0: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x1066f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_1066f4:
    // 0x1066f4: 0x2c620169  sltiu       $v0, $v1, 0x169
    ctx->pc = 0x1066f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)361) ? 1 : 0);
    // 0x1066f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1066F8u;
    {
        const bool branch_taken_0x1066f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1066FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1066F8u;
            // 0x1066fc: 0x8f918170  lw          $s1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1066f8) {
            ctx->pc = 0x106708u;
            goto label_106708;
        }
    }
    ctx->pc = 0x106700u;
    // 0x106700: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106704: 0xaf828160  sw          $v0, -0x7EA0($gp)
    ctx->pc = 0x106704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 2));
label_106708:
    // 0x106708: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x106708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x10670c: 0x8f85833c  lw          $a1, -0x7CC4($gp)
    ctx->pc = 0x10670cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935356)));
    // 0x106710: 0x2473eb18  addiu       $s3, $v1, -0x14E8
    ctx->pc = 0x106710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961944));
    // 0x106714: 0x8f848340  lw          $a0, -0x7CC0($gp)
    ctx->pc = 0x106714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x106718: 0x8f828344  lw          $v0, -0x7CBC($gp)
    ctx->pc = 0x106718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935364)));
    // 0x10671c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x10671cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x106720: 0x8f838348  lw          $v1, -0x7CB8($gp)
    ctx->pc = 0x106720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x106724: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x106724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x106728: 0xace5eb18  sw          $a1, -0x14E8($a3)
    ctx->pc = 0x106728u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961944), GPR_U32(ctx, 5));
    // 0x10672c: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x10672cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x106730: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x106730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x106734: 0x162600e0  bne         $s1, $a2, . + 4 + (0xE0 << 2)
    ctx->pc = 0x106734u;
    {
        const bool branch_taken_0x106734 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x106738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106734u;
            // 0x106738: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106734) {
            ctx->pc = 0x106AB8u;
            goto label_106ab8;
        }
    }
    ctx->pc = 0x10673Cu;
    // 0x10673c: 0x8f9182e0  lw          $s1, -0x7D20($gp)
    ctx->pc = 0x10673cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x106740: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x106740u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x106744: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x106744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106748: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x106748u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x10674c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10674Cu;
    {
        const bool branch_taken_0x10674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10674Cu;
            // 0x106750: 0x2416007f  addiu       $s6, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10674c) {
            ctx->pc = 0x106760u;
            goto label_106760;
        }
    }
    ctx->pc = 0x106754u;
    // 0x106754: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106758: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106758u;
    SET_GPR_U32(ctx, 31, 0x106760u);
    ctx->pc = 0x10675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106758u;
            // 0x10675c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106760u; }
        if (ctx->pc != 0x106760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106760u; }
        if (ctx->pc != 0x106760u) { return; }
    }
    ctx->pc = 0x106760u;
label_106760:
    // 0x106760: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x106764: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x106764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x106768: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x10676c: 0x8f928338  lw          $s2, -0x7CC8($gp)
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935352)));
    // 0x106770: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106774: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106778: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x106778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x10677c: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x10677cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106784: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x106784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106788: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10678c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x10678cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x106790: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x106790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x106794: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x106794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x106798: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x106798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x10679c: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x10679cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x1067a0: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x1067a0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x1067a4: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x1067a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x1067a8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1067a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1067ac: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x1067acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x1067b0: 0xae150060  sw          $s5, 0x60($s0)
    ctx->pc = 0x1067b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 21));
    // 0x1067b4: 0xa216006c  sb          $s6, 0x6C($s0)
    ctx->pc = 0x1067b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 22));
    // 0x1067b8: 0xe6140064  swc1        $f20, 0x64($s0)
    ctx->pc = 0x1067b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1067bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1067BCu;
    {
        const bool branch_taken_0x1067bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1067BCu;
            // 0x1067c0: 0xe6140068  swc1        $f20, 0x68($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067bc) {
            ctx->pc = 0x1067D0u;
            goto label_1067d0;
        }
    }
    ctx->pc = 0x1067C4u;
    // 0x1067c4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1067c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1067c8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1067C8u;
    SET_GPR_U32(ctx, 31, 0x1067D0u);
    ctx->pc = 0x1067CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1067C8u;
            // 0x1067cc: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067D0u; }
        if (ctx->pc != 0x1067D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1067D0u; }
        if (ctx->pc != 0x1067D0u) { return; }
    }
    ctx->pc = 0x1067D0u;
label_1067d0:
    // 0x1067d0: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x1067d4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1067d8: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x1067d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x1067dc: 0x241e1800  addiu       $fp, $zero, 0x1800
    ctx->pc = 0x1067dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1067e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1067e4: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x1067e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x1067e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1067e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1067ec: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1067ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x1067f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1067f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1067f4: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x1067f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1067f8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1067f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1067fc: 0x24027d70  addiu       $v0, $zero, 0x7D70
    ctx->pc = 0x1067fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32112));
    // 0x106800: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x106800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x106804: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x106804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x106808: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x106808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x10680c: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x10680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x106810: 0xae170094  sw          $s7, 0x94($s0)
    ctx->pc = 0x106810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 23));
    // 0x106814: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x106814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x106818: 0x24170300  addiu       $s7, $zero, 0x300
    ctx->pc = 0x106818u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x10681c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x10681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x106820: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106820u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106824: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x106824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x106828: 0xae0700a0  sw          $a3, 0xA0($s0)
    ctx->pc = 0x106828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
    // 0x10682c: 0xae1500a4  sw          $s5, 0xA4($s0)
    ctx->pc = 0x10682cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 21));
    // 0x106830: 0xa21600b0  sb          $s6, 0xB0($s0)
    ctx->pc = 0x106830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 22));
    // 0x106834: 0xe61400a8  swc1        $f20, 0xA8($s0)
    ctx->pc = 0x106834u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x106838: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106838u;
    {
        const bool branch_taken_0x106838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106838u;
            // 0x10683c: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106838) {
            ctx->pc = 0x10684Cu;
            goto label_10684c;
        }
    }
    ctx->pc = 0x106840u;
    // 0x106840: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106844: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106844u;
    SET_GPR_U32(ctx, 31, 0x10684Cu);
    ctx->pc = 0x106848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106844u;
            // 0x106848: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10684Cu; }
        if (ctx->pc != 0x10684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10684Cu; }
        if (ctx->pc != 0x10684Cu) { return; }
    }
    ctx->pc = 0x10684Cu;
label_10684c:
    // 0x10684c: 0x8f8282a8  lw          $v0, -0x7D58($gp)
    ctx->pc = 0x10684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x106850: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106854: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x106854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x106858: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10685c: 0xae1100cc  sw          $s1, 0xCC($s0)
    ctx->pc = 0x10685cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 17));
    // 0x106860: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106864: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106868: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10686c: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x10686cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106870: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106870u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106874: 0x340282c0  ori         $v0, $zero, 0x82C0
    ctx->pc = 0x106874u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33472u)));
    // 0x106878: 0xae1400d8  sw          $s4, 0xD8($s0)
    ctx->pc = 0x106878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 20));
    // 0x10687c: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x10687cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x106880: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106880u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106884: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106888: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x106888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x10688c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x10688cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x106890: 0xae1e00e0  sw          $fp, 0xE0($s0)
    ctx->pc = 0x106890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 30));
    // 0x106894: 0xae1700e4  sw          $s7, 0xE4($s0)
    ctx->pc = 0x106894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 23));
    // 0x106898: 0xae1500e8  sw          $s5, 0xE8($s0)
    ctx->pc = 0x106898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 21));
    // 0x10689c: 0xa21600f4  sb          $s6, 0xF4($s0)
    ctx->pc = 0x10689cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 22));
    // 0x1068a0: 0xe61400ec  swc1        $f20, 0xEC($s0)
    ctx->pc = 0x1068a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1068a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1068A4u;
    {
        const bool branch_taken_0x1068a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1068A4u;
            // 0x1068a8: 0xe61400f0  swc1        $f20, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068a4) {
            ctx->pc = 0x1068B8u;
            goto label_1068b8;
        }
    }
    ctx->pc = 0x1068ACu;
    // 0x1068ac: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1068acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1068b0: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1068B0u;
    SET_GPR_U32(ctx, 31, 0x1068B8u);
    ctx->pc = 0x1068B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1068B0u;
            // 0x1068b4: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1068B8u; }
        if (ctx->pc != 0x1068B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1068B8u; }
        if (ctx->pc != 0x1068B8u) { return; }
    }
    ctx->pc = 0x1068B8u;
label_1068b8:
    // 0x1068b8: 0x8f8282ac  lw          $v0, -0x7D54($gp)
    ctx->pc = 0x1068b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
    // 0x1068bc: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1068bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1068c0: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x1068c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x1068c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1068c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1068c8: 0xae110110  sw          $s1, 0x110($s0)
    ctx->pc = 0x1068c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
    // 0x1068cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1068ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1068d0: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x1068d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x1068d4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1068d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1068d8: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x1068d8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1068dc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1068dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1068e0: 0x34028540  ori         $v0, $zero, 0x8540
    ctx->pc = 0x1068e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34112u)));
    // 0x1068e4: 0xae12011c  sw          $s2, 0x11C($s0)
    ctx->pc = 0x1068e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 18));
    // 0x1068e8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1068e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1068ec: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1068ecu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1068f0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1068f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1068f4: 0xae070118  sw          $a3, 0x118($s0)
    ctx->pc = 0x1068f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 7));
    // 0x1068f8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1068f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1068fc: 0xae1e0124  sw          $fp, 0x124($s0)
    ctx->pc = 0x1068fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 30));
    // 0x106900: 0xae170128  sw          $s7, 0x128($s0)
    ctx->pc = 0x106900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 23));
    // 0x106904: 0xae15012c  sw          $s5, 0x12C($s0)
    ctx->pc = 0x106904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 21));
    // 0x106908: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x106908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x10690c: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x10690cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x106910: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106910u;
    {
        const bool branch_taken_0x106910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106910u;
            // 0x106914: 0xe6140134  swc1        $f20, 0x134($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106910) {
            ctx->pc = 0x106924u;
            goto label_106924;
        }
    }
    ctx->pc = 0x106918u;
    // 0x106918: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10691c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10691Cu;
    SET_GPR_U32(ctx, 31, 0x106924u);
    ctx->pc = 0x106920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10691Cu;
            // 0x106920: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106924u; }
        if (ctx->pc != 0x106924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106924u; }
        if (ctx->pc != 0x106924u) { return; }
    }
    ctx->pc = 0x106924u;
label_106924:
    // 0x106924: 0x8f8282b0  lw          $v0, -0x7D50($gp)
    ctx->pc = 0x106924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x106928: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x106928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10692c: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x10692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x106930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106934: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x106934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
    // 0x106938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10693c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x10693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106940: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106944: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106944u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106948: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x106948u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10694c: 0x340287c0  ori         $v0, $zero, 0x87C0
    ctx->pc = 0x10694cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34752u)));
    // 0x106950: 0xae140160  sw          $s4, 0x160($s0)
    ctx->pc = 0x106950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 20));
    // 0x106954: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x106954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x106958: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106958u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x10695c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x10695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106960: 0xae07015c  sw          $a3, 0x15C($s0)
    ctx->pc = 0x106960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 7));
    // 0x106964: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x106964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x106968: 0xae1e0168  sw          $fp, 0x168($s0)
    ctx->pc = 0x106968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 30));
    // 0x10696c: 0xae17016c  sw          $s7, 0x16C($s0)
    ctx->pc = 0x10696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 23));
    // 0x106970: 0xae150170  sw          $s5, 0x170($s0)
    ctx->pc = 0x106970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 21));
    // 0x106974: 0xa216017c  sb          $s6, 0x17C($s0)
    ctx->pc = 0x106974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 380), (uint8_t)GPR_U32(ctx, 22));
    // 0x106978: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x106978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x10697c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10697Cu;
    {
        const bool branch_taken_0x10697c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10697Cu;
            // 0x106980: 0xe6140178  swc1        $f20, 0x178($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10697c) {
            ctx->pc = 0x106990u;
            goto label_106990;
        }
    }
    ctx->pc = 0x106984u;
    // 0x106984: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106988: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106988u;
    SET_GPR_U32(ctx, 31, 0x106990u);
    ctx->pc = 0x10698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106988u;
            // 0x10698c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106990u; }
        if (ctx->pc != 0x106990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106990u; }
        if (ctx->pc != 0x106990u) { return; }
    }
    ctx->pc = 0x106990u;
label_106990:
    // 0x106990: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x106990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
    // 0x106994: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x106994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106998: 0x8f9282ec  lw          $s2, -0x7D14($gp)
    ctx->pc = 0x106998u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    // 0x10699c: 0x248206c0  addiu       $v0, $a0, 0x6C0
    ctx->pc = 0x10699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    // 0x1069a0: 0xae110198  sw          $s1, 0x198($s0)
    ctx->pc = 0x1069a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 17));
    // 0x1069a4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x1069a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1069a8: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x1069a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x1069ac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1069acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1069b0: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x1069b0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x1069b4: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1069b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1069b8: 0x34028a40  ori         $v0, $zero, 0x8A40
    ctx->pc = 0x1069b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)35392u)));
    // 0x1069bc: 0xae1301a4  sw          $s3, 0x1A4($s0)
    ctx->pc = 0x1069bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 19));
    // 0x1069c0: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x1069c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x1069c4: 0xae1e01ac  sw          $fp, 0x1AC($s0)
    ctx->pc = 0x1069c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 30));
    // 0x1069c8: 0xae1701b0  sw          $s7, 0x1B0($s0)
    ctx->pc = 0x1069c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 23));
    // 0x1069cc: 0xae1501b4  sw          $s5, 0x1B4($s0)
    ctx->pc = 0x1069ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 21));
    // 0x1069d0: 0xa21601c0  sb          $s6, 0x1C0($s0)
    ctx->pc = 0x1069d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 22));
    // 0x1069d4: 0xe61401b8  swc1        $f20, 0x1B8($s0)
    ctx->pc = 0x1069d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x1069d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1069D8u;
    {
        const bool branch_taken_0x1069d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1069DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1069D8u;
            // 0x1069dc: 0xe61401bc  swc1        $f20, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069d8) {
            ctx->pc = 0x1069F0u;
            goto label_1069f0;
        }
    }
    ctx->pc = 0x1069E0u;
    // 0x1069e0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1069e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1069e4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1069E4u;
    SET_GPR_U32(ctx, 31, 0x1069ECu);
    ctx->pc = 0x1069E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1069E4u;
            // 0x1069e8: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069ECu; }
        if (ctx->pc != 0x1069ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1069ECu; }
        if (ctx->pc != 0x1069ECu) { return; }
    }
    ctx->pc = 0x1069ECu;
    // 0x1069ec: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x1069ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
label_1069f0:
    // 0x1069f0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1069f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1069f4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1069f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1069f8: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x1069f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x1069fc: 0x2c830155  sltiu       $v1, $a0, 0x155
    ctx->pc = 0x1069fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x106a00: 0x24027780  addiu       $v0, $zero, 0x7780
    ctx->pc = 0x106a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30592));
    // 0x106a04: 0xae0701e0  sw          $a3, 0x1E0($s0)
    ctx->pc = 0x106a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 7));
    // 0x106a08: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x106a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x106a0c: 0x24072800  addiu       $a3, $zero, 0x2800
    ctx->pc = 0x106a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x106a10: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x106a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x106a14: 0xe6140200  swc1        $f20, 0x200($s0)
    ctx->pc = 0x106a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x106a18: 0xae1201dc  sw          $s2, 0x1DC($s0)
    ctx->pc = 0x106a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 18));
    // 0x106a1c: 0xae1101e8  sw          $s1, 0x1E8($s0)
    ctx->pc = 0x106a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 17));
    // 0x106a20: 0xae0701f0  sw          $a3, 0x1F0($s0)
    ctx->pc = 0x106a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 7));
    // 0x106a24: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x106a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x106a28: 0xae1501f8  sw          $s5, 0x1F8($s0)
    ctx->pc = 0x106a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 21));
    // 0x106a2c: 0xa2160204  sb          $s6, 0x204($s0)
    ctx->pc = 0x106a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 22));
    // 0x106a30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106A30u;
    {
        const bool branch_taken_0x106a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106A30u;
            // 0x106a34: 0xe61401fc  swc1        $f20, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a30) {
            ctx->pc = 0x106A40u;
            goto label_106a40;
        }
    }
    ctx->pc = 0x106A38u;
    // 0x106a38: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x106a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x106a3c: 0xaf848164  sw          $a0, -0x7E9C($gp)
    ctx->pc = 0x106a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934884), GPR_U32(ctx, 4));
label_106a40:
    // 0x106a40: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x106a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x106a44: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x106a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x106a48: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A48u;
    {
        const bool branch_taken_0x106a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a48) {
            ctx->pc = 0x106A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A48u;
            // 0x106a4c: 0x8f838154  lw          $v1, -0x7EAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106A5Cu;
            goto label_106a5c;
        }
    }
    ctx->pc = 0x106A50u;
    // 0x106a50: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106a54: 0xaf828150  sw          $v0, -0x7EB0($gp)
    ctx->pc = 0x106a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 2));
    // 0x106a58: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x106a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
label_106a5c:
    // 0x106a5c: 0x2c62012d  sltiu       $v0, $v1, 0x12D
    ctx->pc = 0x106a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x106a60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A60u;
    {
        const bool branch_taken_0x106a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a60) {
            ctx->pc = 0x106A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A60u;
            // 0x106a64: 0x8f838158  lw          $v1, -0x7EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106A74u;
            goto label_106a74;
        }
    }
    ctx->pc = 0x106A68u;
    // 0x106a68: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106a6c: 0xaf828154  sw          $v0, -0x7EAC($gp)
    ctx->pc = 0x106a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
    // 0x106a70: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x106a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_106a74:
    // 0x106a74: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x106a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x106a78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A78u;
    {
        const bool branch_taken_0x106a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a78) {
            ctx->pc = 0x106A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A78u;
            // 0x106a7c: 0x8f83815c  lw          $v1, -0x7EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106A8Cu;
            goto label_106a8c;
        }
    }
    ctx->pc = 0x106A80u;
    // 0x106a80: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106a84: 0xaf828158  sw          $v0, -0x7EA8($gp)
    ctx->pc = 0x106a84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 2));
    // 0x106a88: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x106a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
label_106a8c:
    // 0x106a8c: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x106a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x106a90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106A90u;
    {
        const bool branch_taken_0x106a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106a90) {
            ctx->pc = 0x106A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106A90u;
            // 0x106a94: 0x8f838160  lw          $v1, -0x7EA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106AA4u;
            goto label_106aa4;
        }
    }
    ctx->pc = 0x106A98u;
    // 0x106a98: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106a9c: 0xaf82815c  sw          $v0, -0x7EA4($gp)
    ctx->pc = 0x106a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 2));
    // 0x106aa0: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x106aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_106aa4:
    // 0x106aa4: 0x2c620169  sltiu       $v0, $v1, 0x169
    ctx->pc = 0x106aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)361) ? 1 : 0);
    // 0x106aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106AA8u;
    {
        const bool branch_taken_0x106aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AA8u;
            // 0x106aac: 0x8f918170  lw          $s1, -0x7E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aa8) {
            ctx->pc = 0x106AB8u;
            goto label_106ab8;
        }
    }
    ctx->pc = 0x106AB0u;
    // 0x106ab0: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106ab4: 0xaf828160  sw          $v0, -0x7EA0($gp)
    ctx->pc = 0x106ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 2));
label_106ab8:
    // 0x106ab8: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x106ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x106abc: 0x8f858350  lw          $a1, -0x7CB0($gp)
    ctx->pc = 0x106abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935376)));
    // 0x106ac0: 0x2473eb18  addiu       $s3, $v1, -0x14E8
    ctx->pc = 0x106ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961944));
    // 0x106ac4: 0x8f848354  lw          $a0, -0x7CAC($gp)
    ctx->pc = 0x106ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935380)));
    // 0x106ac8: 0x8f828358  lw          $v0, -0x7CA8($gp)
    ctx->pc = 0x106ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x106acc: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x106accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x106ad0: 0x8f83835c  lw          $v1, -0x7CA4($gp)
    ctx->pc = 0x106ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935388)));
    // 0x106ad4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x106ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x106ad8: 0xace5eb18  sw          $a1, -0x14E8($a3)
    ctx->pc = 0x106ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961944), GPR_U32(ctx, 5));
    // 0x106adc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x106adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x106ae0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x106ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x106ae4: 0x162600e0  bne         $s1, $a2, . + 4 + (0xE0 << 2)
    ctx->pc = 0x106AE4u;
    {
        const bool branch_taken_0x106ae4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 6));
        ctx->pc = 0x106AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AE4u;
            // 0x106ae8: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ae4) {
            ctx->pc = 0x106E68u;
            goto label_106e68;
        }
    }
    ctx->pc = 0x106AECu;
    // 0x106aec: 0x8f9182e0  lw          $s1, -0x7D20($gp)
    ctx->pc = 0x106aecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    // 0x106af0: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x106af0u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x106af4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x106af4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106af8: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x106af8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106AFCu;
    {
        const bool branch_taken_0x106afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106AFCu;
            // 0x106b00: 0x2416007f  addiu       $s6, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106afc) {
            ctx->pc = 0x106B10u;
            goto label_106b10;
        }
    }
    ctx->pc = 0x106B04u;
    // 0x106b04: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106b08: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106B08u;
    SET_GPR_U32(ctx, 31, 0x106B10u);
    ctx->pc = 0x106B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106B08u;
            // 0x106b0c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106B10u; }
        if (ctx->pc != 0x106B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106B10u; }
        if (ctx->pc != 0x106B10u) { return; }
    }
    ctx->pc = 0x106B10u;
label_106b10:
    // 0x106b10: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x106b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x106b14: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x106b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x106b18: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x106b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x106b1c: 0x8f92834c  lw          $s2, -0x7CB4($gp)
    ctx->pc = 0x106b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935372)));
    // 0x106b20: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106b24: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106b28: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x106b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x106b2c: 0x3b900  sll         $s7, $v1, 4
    ctx->pc = 0x106b2cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106b34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x106b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x106b38: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106b3c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x106b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x106b40: 0x24032800  addiu       $v1, $zero, 0x2800
    ctx->pc = 0x106b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x106b44: 0x24072000  addiu       $a3, $zero, 0x2000
    ctx->pc = 0x106b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x106b48: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x106b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x106b4c: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x106b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x106b50: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x106b50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x106b54: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x106b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x106b58: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x106b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x106b5c: 0xae07005c  sw          $a3, 0x5C($s0)
    ctx->pc = 0x106b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x106b60: 0xae150060  sw          $s5, 0x60($s0)
    ctx->pc = 0x106b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 21));
    // 0x106b64: 0xa216006c  sb          $s6, 0x6C($s0)
    ctx->pc = 0x106b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 22));
    // 0x106b68: 0xe6140064  swc1        $f20, 0x64($s0)
    ctx->pc = 0x106b68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x106b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106B6Cu;
    {
        const bool branch_taken_0x106b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106B6Cu;
            // 0x106b70: 0xe6140068  swc1        $f20, 0x68($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106b6c) {
            ctx->pc = 0x106B80u;
            goto label_106b80;
        }
    }
    ctx->pc = 0x106B74u;
    // 0x106b74: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106b78: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106B78u;
    SET_GPR_U32(ctx, 31, 0x106B80u);
    ctx->pc = 0x106B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106B78u;
            // 0x106b7c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106B80u; }
        if (ctx->pc != 0x106B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106B80u; }
        if (ctx->pc != 0x106B80u) { return; }
    }
    ctx->pc = 0x106B80u;
label_106b80:
    // 0x106b80: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x106b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x106b84: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x106b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106b88: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x106b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x106b8c: 0x241e1800  addiu       $fp, $zero, 0x1800
    ctx->pc = 0x106b8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x106b90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106b94: 0xae120088  sw          $s2, 0x88($s0)
    ctx->pc = 0x106b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 18));
    // 0x106b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106b9c: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106ba0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106ba4: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x106ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106ba8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106bac: 0x24027d70  addiu       $v0, $zero, 0x7D70
    ctx->pc = 0x106bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32112));
    // 0x106bb0: 0xae07008c  sw          $a3, 0x8C($s0)
    ctx->pc = 0x106bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 7));
    // 0x106bb4: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x106bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x106bb8: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x106bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x106bbc: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x106bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x106bc0: 0xae170094  sw          $s7, 0x94($s0)
    ctx->pc = 0x106bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 23));
    // 0x106bc4: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x106bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x106bc8: 0x24170300  addiu       $s7, $zero, 0x300
    ctx->pc = 0x106bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x106bcc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x106bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x106bd0: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106bd0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106bd4: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x106bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x106bd8: 0xae0700a0  sw          $a3, 0xA0($s0)
    ctx->pc = 0x106bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
    // 0x106bdc: 0xae1500a4  sw          $s5, 0xA4($s0)
    ctx->pc = 0x106bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 21));
    // 0x106be0: 0xa21600b0  sb          $s6, 0xB0($s0)
    ctx->pc = 0x106be0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 176), (uint8_t)GPR_U32(ctx, 22));
    // 0x106be4: 0xe61400a8  swc1        $f20, 0xA8($s0)
    ctx->pc = 0x106be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x106be8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106BE8u;
    {
        const bool branch_taken_0x106be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106BE8u;
            // 0x106bec: 0xe61400ac  swc1        $f20, 0xAC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106be8) {
            ctx->pc = 0x106BFCu;
            goto label_106bfc;
        }
    }
    ctx->pc = 0x106BF0u;
    // 0x106bf0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106bf4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106BF4u;
    SET_GPR_U32(ctx, 31, 0x106BFCu);
    ctx->pc = 0x106BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106BF4u;
            // 0x106bf8: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106BFCu; }
        if (ctx->pc != 0x106BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106BFCu; }
        if (ctx->pc != 0x106BFCu) { return; }
    }
    ctx->pc = 0x106BFCu;
label_106bfc:
    // 0x106bfc: 0x8f8282a8  lw          $v0, -0x7D58($gp)
    ctx->pc = 0x106bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935208)));
    // 0x106c00: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x106c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106c04: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x106c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x106c08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106c0c: 0xae1100cc  sw          $s1, 0xCC($s0)
    ctx->pc = 0x106c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 17));
    // 0x106c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106c14: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106c18: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106c1c: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x106c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106c20: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106c20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106c24: 0x340282c0  ori         $v0, $zero, 0x82C0
    ctx->pc = 0x106c24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33472u)));
    // 0x106c28: 0xae1400d8  sw          $s4, 0xD8($s0)
    ctx->pc = 0x106c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 20));
    // 0x106c2c: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x106c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x106c30: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106c30u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106c34: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106c38: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x106c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x106c3c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x106c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x106c40: 0xae1e00e0  sw          $fp, 0xE0($s0)
    ctx->pc = 0x106c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 30));
    // 0x106c44: 0xae1700e4  sw          $s7, 0xE4($s0)
    ctx->pc = 0x106c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 23));
    // 0x106c48: 0xae1500e8  sw          $s5, 0xE8($s0)
    ctx->pc = 0x106c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 21));
    // 0x106c4c: 0xa21600f4  sb          $s6, 0xF4($s0)
    ctx->pc = 0x106c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 22));
    // 0x106c50: 0xe61400ec  swc1        $f20, 0xEC($s0)
    ctx->pc = 0x106c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x106c54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C54u;
    {
        const bool branch_taken_0x106c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106C54u;
            // 0x106c58: 0xe61400f0  swc1        $f20, 0xF0($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c54) {
            ctx->pc = 0x106C68u;
            goto label_106c68;
        }
    }
    ctx->pc = 0x106C5Cu;
    // 0x106c5c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106c60: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106C60u;
    SET_GPR_U32(ctx, 31, 0x106C68u);
    ctx->pc = 0x106C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106C60u;
            // 0x106c64: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106C68u; }
        if (ctx->pc != 0x106C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106C68u; }
        if (ctx->pc != 0x106C68u) { return; }
    }
    ctx->pc = 0x106C68u;
label_106c68:
    // 0x106c68: 0x8f8282ac  lw          $v0, -0x7D54($gp)
    ctx->pc = 0x106c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935212)));
    // 0x106c6c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x106c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106c70: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x106c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
    // 0x106c74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106c78: 0xae110110  sw          $s1, 0x110($s0)
    ctx->pc = 0x106c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 17));
    // 0x106c7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106c80: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106c84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106c88: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x106c88u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106c8c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106c90: 0x34028540  ori         $v0, $zero, 0x8540
    ctx->pc = 0x106c90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34112u)));
    // 0x106c94: 0xae12011c  sw          $s2, 0x11C($s0)
    ctx->pc = 0x106c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 18));
    // 0x106c98: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x106c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x106c9c: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106c9cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106ca0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106ca4: 0xae070118  sw          $a3, 0x118($s0)
    ctx->pc = 0x106ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 7));
    // 0x106ca8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x106ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x106cac: 0xae1e0124  sw          $fp, 0x124($s0)
    ctx->pc = 0x106cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 30));
    // 0x106cb0: 0xae170128  sw          $s7, 0x128($s0)
    ctx->pc = 0x106cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 23));
    // 0x106cb4: 0xae15012c  sw          $s5, 0x12C($s0)
    ctx->pc = 0x106cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 21));
    // 0x106cb8: 0xa2160138  sb          $s6, 0x138($s0)
    ctx->pc = 0x106cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 22));
    // 0x106cbc: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x106cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x106cc0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106CC0u;
    {
        const bool branch_taken_0x106cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106CC0u;
            // 0x106cc4: 0xe6140134  swc1        $f20, 0x134($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cc0) {
            ctx->pc = 0x106CD4u;
            goto label_106cd4;
        }
    }
    ctx->pc = 0x106CC8u;
    // 0x106cc8: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106ccc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106CCCu;
    SET_GPR_U32(ctx, 31, 0x106CD4u);
    ctx->pc = 0x106CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106CCCu;
            // 0x106cd0: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106CD4u; }
        if (ctx->pc != 0x106CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106CD4u; }
        if (ctx->pc != 0x106CD4u) { return; }
    }
    ctx->pc = 0x106CD4u;
label_106cd4:
    // 0x106cd4: 0x8f8282b0  lw          $v0, -0x7D50($gp)
    ctx->pc = 0x106cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x106cd8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x106cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106cdc: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x106cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
    // 0x106ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106ce4: 0xae110154  sw          $s1, 0x154($s0)
    ctx->pc = 0x106ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 17));
    // 0x106ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106cec: 0x246306c0  addiu       $v1, $v1, 0x6C0
    ctx->pc = 0x106cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1728));
    // 0x106cf0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x106cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x106cf4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x106cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106cf8: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x106cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x106cfc: 0x340287c0  ori         $v0, $zero, 0x87C0
    ctx->pc = 0x106cfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34752u)));
    // 0x106d00: 0xae140160  sw          $s4, 0x160($s0)
    ctx->pc = 0x106d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 20));
    // 0x106d04: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x106d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x106d08: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x106d08u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x106d0c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106d10: 0xae07015c  sw          $a3, 0x15C($s0)
    ctx->pc = 0x106d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 7));
    // 0x106d14: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x106d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x106d18: 0xae1e0168  sw          $fp, 0x168($s0)
    ctx->pc = 0x106d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 30));
    // 0x106d1c: 0xae17016c  sw          $s7, 0x16C($s0)
    ctx->pc = 0x106d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 23));
    // 0x106d20: 0xae150170  sw          $s5, 0x170($s0)
    ctx->pc = 0x106d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 21));
    // 0x106d24: 0xa216017c  sb          $s6, 0x17C($s0)
    ctx->pc = 0x106d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 380), (uint8_t)GPR_U32(ctx, 22));
    // 0x106d28: 0xe6140174  swc1        $f20, 0x174($s0)
    ctx->pc = 0x106d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x106d2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x106D2Cu;
    {
        const bool branch_taken_0x106d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D2Cu;
            // 0x106d30: 0xe6140178  swc1        $f20, 0x178($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d2c) {
            ctx->pc = 0x106D40u;
            goto label_106d40;
        }
    }
    ctx->pc = 0x106D34u;
    // 0x106d34: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106d38: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106D38u;
    SET_GPR_U32(ctx, 31, 0x106D40u);
    ctx->pc = 0x106D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106D38u;
            // 0x106d3c: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D40u; }
        if (ctx->pc != 0x106D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D40u; }
        if (ctx->pc != 0x106D40u) { return; }
    }
    ctx->pc = 0x106D40u;
label_106d40:
    // 0x106d40: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x106d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
    // 0x106d44: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x106d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x106d48: 0x8f9282ec  lw          $s2, -0x7D14($gp)
    ctx->pc = 0x106d48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935276)));
    // 0x106d4c: 0x248206c0  addiu       $v0, $a0, 0x6C0
    ctx->pc = 0x106d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    // 0x106d50: 0xae110198  sw          $s1, 0x198($s0)
    ctx->pc = 0x106d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 17));
    // 0x106d54: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x106d54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x106d58: 0xae0301a0  sw          $v1, 0x1A0($s0)
    ctx->pc = 0x106d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 3));
    // 0x106d5c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x106d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x106d60: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x106d60u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x106d64: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x106d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x106d68: 0x34028a40  ori         $v0, $zero, 0x8A40
    ctx->pc = 0x106d68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)35392u)));
    // 0x106d6c: 0xae1301a4  sw          $s3, 0x1A4($s0)
    ctx->pc = 0x106d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 19));
    // 0x106d70: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x106d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x106d74: 0xae1e01ac  sw          $fp, 0x1AC($s0)
    ctx->pc = 0x106d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 30));
    // 0x106d78: 0xae1701b0  sw          $s7, 0x1B0($s0)
    ctx->pc = 0x106d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 23));
    // 0x106d7c: 0xae1501b4  sw          $s5, 0x1B4($s0)
    ctx->pc = 0x106d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 21));
    // 0x106d80: 0xa21601c0  sb          $s6, 0x1C0($s0)
    ctx->pc = 0x106d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 448), (uint8_t)GPR_U32(ctx, 22));
    // 0x106d84: 0xe61401b8  swc1        $f20, 0x1B8($s0)
    ctx->pc = 0x106d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x106d88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x106D88u;
    {
        const bool branch_taken_0x106d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D88u;
            // 0x106d8c: 0xe61401bc  swc1        $f20, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d88) {
            ctx->pc = 0x106DA0u;
            goto label_106da0;
        }
    }
    ctx->pc = 0x106D90u;
    // 0x106d90: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x106d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x106d94: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x106D94u;
    SET_GPR_U32(ctx, 31, 0x106D9Cu);
    ctx->pc = 0x106D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106D94u;
            // 0x106d98: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D9Cu; }
        if (ctx->pc != 0x106D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D9Cu; }
        if (ctx->pc != 0x106D9Cu) { return; }
    }
    ctx->pc = 0x106D9Cu;
    // 0x106d9c: 0x8f848164  lw          $a0, -0x7E9C($gp)
    ctx->pc = 0x106d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934884)));
label_106da0:
    // 0x106da0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x106da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x106da4: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x106da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x106da8: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x106da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x106dac: 0x2c830155  sltiu       $v1, $a0, 0x155
    ctx->pc = 0x106dacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x106db0: 0x24027780  addiu       $v0, $zero, 0x7780
    ctx->pc = 0x106db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30592));
    // 0x106db4: 0xae0701e0  sw          $a3, 0x1E0($s0)
    ctx->pc = 0x106db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 7));
    // 0x106db8: 0xae0201ec  sw          $v0, 0x1EC($s0)
    ctx->pc = 0x106db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    // 0x106dbc: 0x24072800  addiu       $a3, $zero, 0x2800
    ctx->pc = 0x106dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x106dc0: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x106dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x106dc4: 0xe6140200  swc1        $f20, 0x200($s0)
    ctx->pc = 0x106dc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x106dc8: 0xae1201dc  sw          $s2, 0x1DC($s0)
    ctx->pc = 0x106dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 18));
    // 0x106dcc: 0xae1101e8  sw          $s1, 0x1E8($s0)
    ctx->pc = 0x106dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 17));
    // 0x106dd0: 0xae0701f0  sw          $a3, 0x1F0($s0)
    ctx->pc = 0x106dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 7));
    // 0x106dd4: 0xae0201f4  sw          $v0, 0x1F4($s0)
    ctx->pc = 0x106dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x106dd8: 0xae1501f8  sw          $s5, 0x1F8($s0)
    ctx->pc = 0x106dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 21));
    // 0x106ddc: 0xa2160204  sb          $s6, 0x204($s0)
    ctx->pc = 0x106ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 516), (uint8_t)GPR_U32(ctx, 22));
    // 0x106de0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106DE0u;
    {
        const bool branch_taken_0x106de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DE0u;
            // 0x106de4: 0xe61401fc  swc1        $f20, 0x1FC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106de0) {
            ctx->pc = 0x106DF0u;
            goto label_106df0;
        }
    }
    ctx->pc = 0x106DE8u;
    // 0x106de8: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x106de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x106dec: 0xaf848164  sw          $a0, -0x7E9C($gp)
    ctx->pc = 0x106decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934884), GPR_U32(ctx, 4));
label_106df0:
    // 0x106df0: 0x8f838150  lw          $v1, -0x7EB0($gp)
    ctx->pc = 0x106df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x106df4: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x106df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x106df8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106DF8u;
    {
        const bool branch_taken_0x106df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106df8) {
            ctx->pc = 0x106DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106DF8u;
            // 0x106dfc: 0x8f838154  lw          $v1, -0x7EAC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106E0Cu;
            goto label_106e0c;
        }
    }
    ctx->pc = 0x106E00u;
    // 0x106e00: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106e04: 0xaf828150  sw          $v0, -0x7EB0($gp)
    ctx->pc = 0x106e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 2));
    // 0x106e08: 0x8f838154  lw          $v1, -0x7EAC($gp)
    ctx->pc = 0x106e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
label_106e0c:
    // 0x106e0c: 0x2c62012d  sltiu       $v0, $v1, 0x12D
    ctx->pc = 0x106e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)301) ? 1 : 0);
    // 0x106e10: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E10u;
    {
        const bool branch_taken_0x106e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106e10) {
            ctx->pc = 0x106E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106E10u;
            // 0x106e14: 0x8f838158  lw          $v1, -0x7EA8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106E24u;
            goto label_106e24;
        }
    }
    ctx->pc = 0x106E18u;
    // 0x106e18: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106e1c: 0xaf828154  sw          $v0, -0x7EAC($gp)
    ctx->pc = 0x106e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
    // 0x106e20: 0x8f838158  lw          $v1, -0x7EA8($gp)
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934872)));
label_106e24:
    // 0x106e24: 0x2c620141  sltiu       $v0, $v1, 0x141
    ctx->pc = 0x106e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x106e28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E28u;
    {
        const bool branch_taken_0x106e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106e28) {
            ctx->pc = 0x106E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106E28u;
            // 0x106e2c: 0x8f83815c  lw          $v1, -0x7EA4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106E3Cu;
            goto label_106e3c;
        }
    }
    ctx->pc = 0x106E30u;
    // 0x106e30: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106e34: 0xaf828158  sw          $v0, -0x7EA8($gp)
    ctx->pc = 0x106e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934872), GPR_U32(ctx, 2));
    // 0x106e38: 0x8f83815c  lw          $v1, -0x7EA4($gp)
    ctx->pc = 0x106e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934876)));
label_106e3c:
    // 0x106e3c: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x106e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x106e40: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E40u;
    {
        const bool branch_taken_0x106e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106e40) {
            ctx->pc = 0x106E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106E40u;
            // 0x106e44: 0x8f838160  lw          $v1, -0x7EA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106E54u;
            goto label_106e54;
        }
    }
    ctx->pc = 0x106E48u;
    // 0x106e48: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106e4c: 0xaf82815c  sw          $v0, -0x7EA4($gp)
    ctx->pc = 0x106e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934876), GPR_U32(ctx, 2));
    // 0x106e50: 0x8f838160  lw          $v1, -0x7EA0($gp)
    ctx->pc = 0x106e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934880)));
label_106e54:
    // 0x106e54: 0x2c620169  sltiu       $v0, $v1, 0x169
    ctx->pc = 0x106e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)361) ? 1 : 0);
    // 0x106e58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E58u;
    {
        const bool branch_taken_0x106e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E58u;
            // 0x106e5c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e58) {
            ctx->pc = 0x106E6Cu;
            goto label_106e6c;
        }
    }
    ctx->pc = 0x106E60u;
    // 0x106e60: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x106e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x106e64: 0xaf828160  sw          $v0, -0x7EA0($gp)
    ctx->pc = 0x106e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934880), GPR_U32(ctx, 2));
label_106e68:
    // 0x106e68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_106e6c:
    // 0x106e6c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x106e6cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106e70: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106e70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106e74: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106e74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106e78: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106e7c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106e80: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106e84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e90: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x106e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106e94: 0x3e00008  jr          $ra
    ctx->pc = 0x106E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E94u;
            // 0x106e98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105C50u: goto label_105c50;
            case 0x105CC0u: goto label_105cc0;
            case 0x105D3Cu: goto label_105d3c;
            case 0x105DA8u: goto label_105da8;
            case 0x105E14u: goto label_105e14;
            case 0x105E80u: goto label_105e80;
            case 0x105EE0u: goto label_105ee0;
            case 0x105F30u: goto label_105f30;
            case 0x105F4Cu: goto label_105f4c;
            case 0x105F64u: goto label_105f64;
            case 0x105F7Cu: goto label_105f7c;
            case 0x105F94u: goto label_105f94;
            case 0x105FA8u: goto label_105fa8;
            case 0x106000u: goto label_106000;
            case 0x106070u: goto label_106070;
            case 0x1060ECu: goto label_1060ec;
            case 0x106158u: goto label_106158;
            case 0x1061C4u: goto label_1061c4;
            case 0x106230u: goto label_106230;
            case 0x106290u: goto label_106290;
            case 0x1062E0u: goto label_1062e0;
            case 0x1062FCu: goto label_1062fc;
            case 0x106314u: goto label_106314;
            case 0x10632Cu: goto label_10632c;
            case 0x106344u: goto label_106344;
            case 0x106358u: goto label_106358;
            case 0x1063B0u: goto label_1063b0;
            case 0x106420u: goto label_106420;
            case 0x10649Cu: goto label_10649c;
            case 0x106508u: goto label_106508;
            case 0x106574u: goto label_106574;
            case 0x1065E0u: goto label_1065e0;
            case 0x106640u: goto label_106640;
            case 0x106690u: goto label_106690;
            case 0x1066ACu: goto label_1066ac;
            case 0x1066C4u: goto label_1066c4;
            case 0x1066DCu: goto label_1066dc;
            case 0x1066F4u: goto label_1066f4;
            case 0x106708u: goto label_106708;
            case 0x106760u: goto label_106760;
            case 0x1067D0u: goto label_1067d0;
            case 0x10684Cu: goto label_10684c;
            case 0x1068B8u: goto label_1068b8;
            case 0x106924u: goto label_106924;
            case 0x106990u: goto label_106990;
            case 0x1069F0u: goto label_1069f0;
            case 0x106A40u: goto label_106a40;
            case 0x106A5Cu: goto label_106a5c;
            case 0x106A74u: goto label_106a74;
            case 0x106A8Cu: goto label_106a8c;
            case 0x106AA4u: goto label_106aa4;
            case 0x106AB8u: goto label_106ab8;
            case 0x106B10u: goto label_106b10;
            case 0x106B80u: goto label_106b80;
            case 0x106BFCu: goto label_106bfc;
            case 0x106C68u: goto label_106c68;
            case 0x106CD4u: goto label_106cd4;
            case 0x106D40u: goto label_106d40;
            case 0x106DA0u: goto label_106da0;
            case 0x106DF0u: goto label_106df0;
            case 0x106E0Cu: goto label_106e0c;
            case 0x106E24u: goto label_106e24;
            case 0x106E3Cu: goto label_106e3c;
            case 0x106E54u: goto label_106e54;
            case 0x106E68u: goto label_106e68;
            case 0x106E6Cu: goto label_106e6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x106E9Cu;
}
