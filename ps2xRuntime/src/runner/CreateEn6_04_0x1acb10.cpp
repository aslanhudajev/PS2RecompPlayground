#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateEn6_04
// Address: 0x1acb10 - 0x1accc4
void CreateEn6_04_0x1acb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateEn6_04_0x1acb10");
#endif

    ctx->pc = 0x1acb10u;

    // 0x1acb10: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1acb14: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1acb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1acb18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1acb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1acb1c: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1acb20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1acb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1acb24: 0x2463cd00  addiu       $v1, $v1, -0x3300
    ctx->pc = 0x1acb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954240));
    // 0x1acb28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1acb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1acb2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1acb2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1acb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1acb34: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1acb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
    // 0x1acb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1acb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1acb3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1acb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb40: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1acb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x1acb44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1acb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acb48: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1acb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x1acb4c: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1acb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1acb50: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1acb54: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x1acb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x1acb58: 0x2442ccd0  addiu       $v0, $v0, -0x3330
    ctx->pc = 0x1acb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954192));
    // 0x1acb5c: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1acb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x1acb60: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1acb64: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1acb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x1acb68: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1acb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x1acb6c: 0xc060694  jal         func_181A50
    ctx->pc = 0x1ACB6Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB74u);
    ctx->pc = 0x1ACB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB6Cu;
            // 0x1acb70: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB74u; }
        if (ctx->pc != 0x1ACB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB74u; }
        if (ctx->pc != 0x1ACB74u) { return; }
    }
    ctx->pc = 0x1ACB74u;
    // 0x1acb74: 0xc060544  jal         func_181510
    ctx->pc = 0x1ACB74u;
    SET_GPR_U32(ctx, 31, 0x1ACB7Cu);
    ctx->pc = 0x1ACB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACB74u;
            // 0x1acb78: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181510u;
    if (runtime->hasFunction(0x181510u)) {
        auto targetFn = runtime->lookupFunction(0x181510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB7Cu; }
        if (ctx->pc != 0x1ACB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeClone_0x181510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB7Cu; }
        if (ctx->pc != 0x1ACB7Cu) { return; }
    }
    ctx->pc = 0x1ACB7Cu;
    // 0x1acb7c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1acb7cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acb80: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1acb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1acb84: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1acb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1acb88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1acb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1acb8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1acb8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1acb90: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1acb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1acb94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1acb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acb98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1acb98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1acb9c: 0x0  nop
    ctx->pc = 0x1acb9cu;
    // NOP
    // 0x1acba0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1acba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1acba4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1acba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1acba8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1acba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1acbac: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1acbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1acbb0: 0x12620027  beq         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1ACBB0u;
    {
        const bool branch_taken_0x1acbb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ACBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBB0u;
            // 0x1acbb4: 0xafb30068  sw          $s3, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbb0) {
            ctx->pc = 0x1ACC50u;
            goto label_1acc50;
        }
    }
    ctx->pc = 0x1ACBB8u;
    // 0x1acbb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acbbc: 0x12620024  beq         $s3, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ACBBCu;
    {
        const bool branch_taken_0x1acbbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1acbbc) {
            ctx->pc = 0x1ACC50u;
            goto label_1acc50;
        }
    }
    ctx->pc = 0x1ACBC4u;
    // 0x1acbc4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACBC4u;
    {
        const bool branch_taken_0x1acbc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbc4) {
            ctx->pc = 0x1ACBD8u;
            goto label_1acbd8;
        }
    }
    ctx->pc = 0x1ACBCCu;
    // 0x1acbcc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1ACBCCu;
    {
        const bool branch_taken_0x1acbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acbcc) {
            ctx->pc = 0x1ACC98u;
            goto label_1acc98;
        }
    }
    ctx->pc = 0x1ACBD4u;
    // 0x1acbd4: 0x0  nop
    ctx->pc = 0x1acbd4u;
    // NOP
label_1acbd8:
    // 0x1acbd8: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1ACBD8u;
    SET_GPR_U32(ctx, 31, 0x1ACBE0u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBE0u; }
        if (ctx->pc != 0x1ACBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBE0u; }
        if (ctx->pc != 0x1ACBE0u) { return; }
    }
    ctx->pc = 0x1ACBE0u;
    // 0x1acbe0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1acbe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acbe8: 0x0  nop
    ctx->pc = 0x1acbe8u;
    // NOP
    // 0x1acbec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1acbecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1acbf0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1ACBF0u;
    SET_GPR_U32(ctx, 31, 0x1ACBF8u);
    ctx->pc = 0x1ACBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACBF0u;
            // 0x1acbf4: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBF8u; }
        if (ctx->pc != 0x1ACBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACBF8u; }
        if (ctx->pc != 0x1ACBF8u) { return; }
    }
    ctx->pc = 0x1ACBF8u;
    // 0x1acbf8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1acbfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acc00: 0x0  nop
    ctx->pc = 0x1acc00u;
    // NOP
    // 0x1acc04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1acc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1acc08: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1ACC08u;
    SET_GPR_U32(ctx, 31, 0x1ACC10u);
    ctx->pc = 0x1ACC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC08u;
            // 0x1acc0c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC10u; }
        if (ctx->pc != 0x1ACC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC10u; }
        if (ctx->pc != 0x1ACC10u) { return; }
    }
    ctx->pc = 0x1ACC10u;
    // 0x1acc10: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1acc14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1acc14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1acc18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acc18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acc1c: 0x0  nop
    ctx->pc = 0x1acc1cu;
    // NOP
    // 0x1acc20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1acc20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1acc24: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1ACC24u;
    SET_GPR_U32(ctx, 31, 0x1ACC2Cu);
    ctx->pc = 0x1ACC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC24u;
            // 0x1acc28: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC2Cu; }
        if (ctx->pc != 0x1ACC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC2Cu; }
        if (ctx->pc != 0x1ACC2Cu) { return; }
    }
    ctx->pc = 0x1ACC2Cu;
    // 0x1acc2c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1acc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1acc30: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1acc30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1acc34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acc38: 0x0  nop
    ctx->pc = 0x1acc38u;
    // NOP
    // 0x1acc3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1acc3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1acc40: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1acc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1acc44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1ACC44u;
    {
        const bool branch_taken_0x1acc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC44u;
            // 0x1acc48: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc44) {
            ctx->pc = 0x1ACC98u;
            goto label_1acc98;
        }
    }
    ctx->pc = 0x1ACC4Cu;
    // 0x1acc4c: 0x0  nop
    ctx->pc = 0x1acc4cu;
    // NOP
label_1acc50:
    // 0x1acc50: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1acc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1acc54: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1ACC54u;
    SET_GPR_U32(ctx, 31, 0x1ACC5Cu);
    ctx->pc = 0x1ACC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC54u;
            // 0x1acc58: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC5Cu; }
        if (ctx->pc != 0x1ACC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC5Cu; }
        if (ctx->pc != 0x1ACC5Cu) { return; }
    }
    ctx->pc = 0x1ACC5Cu;
    // 0x1acc5c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1acc60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1acc60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1acc64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acc68: 0x0  nop
    ctx->pc = 0x1acc68u;
    // NOP
    // 0x1acc6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1acc6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1acc70: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1ACC70u;
    SET_GPR_U32(ctx, 31, 0x1ACC78u);
    ctx->pc = 0x1ACC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC70u;
            // 0x1acc74: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC78u; }
        if (ctx->pc != 0x1ACC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACC78u; }
        if (ctx->pc != 0x1ACC78u) { return; }
    }
    ctx->pc = 0x1ACC78u;
    // 0x1acc78: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1acc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1acc7c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1acc7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39322u)));
    // 0x1acc80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1acc80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1acc84: 0x0  nop
    ctx->pc = 0x1acc84u;
    // NOP
    // 0x1acc88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1acc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1acc8c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1acc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1acc90: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1acc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1acc94: 0x0  nop
    ctx->pc = 0x1acc94u;
    // NOP
label_1acc98:
    // 0x1acc98: 0xc05ba20  jal         func_16E880
    ctx->pc = 0x1ACC98u;
    SET_GPR_U32(ctx, 31, 0x1ACCA0u);
    ctx->pc = 0x1ACC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACC98u;
            // 0x1acc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E880u;
    if (runtime->hasFunction(0x16E880u)) {
        auto targetFn = runtime->lookupFunction(0x16E880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCA0u; }
        if (ctx->pc != 0x1ACCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEnemy_0x16e880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCA0u; }
        if (ctx->pc != 0x1ACCA0u) { return; }
    }
    ctx->pc = 0x1ACCA0u;
    // 0x1acca0: 0xc06b3c4  jal         func_1ACF10
    ctx->pc = 0x1ACCA0u;
    SET_GPR_U32(ctx, 31, 0x1ACCA8u);
    ctx->pc = 0x1ACCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCA0u;
            // 0x1acca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACF10u;
    if (runtime->hasFunction(0x1ACF10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCA8u; }
        if (ctx->pc != 0x1ACCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En6_04Move_0x1acf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACCA8u; }
        if (ctx->pc != 0x1ACCA8u) { return; }
    }
    ctx->pc = 0x1ACCA8u;
    // 0x1acca8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1acca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1accac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1accacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1accb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1accb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1accb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1accb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1accb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1accb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1accbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACCBCu;
            // 0x1accc0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACBD8u: goto label_1acbd8;
            case 0x1ACC50u: goto label_1acc50;
            case 0x1ACC98u: goto label_1acc98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACCC4u;
}
