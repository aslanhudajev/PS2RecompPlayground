#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2LoadImage
// Address: 0x16f960 - 0x16fcb4
void Tim2LoadImage_0x16f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2LoadImage_0x16f960");
#endif

    ctx->pc = 0x16f960u;

    // 0x16f960: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16f964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16f968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16f96c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16f970: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x16f970u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f974: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16f978: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16f97c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16f980: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16f984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16f988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16f98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16f990: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x16f990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x16f994: 0x184000ba  blez        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x16F994u;
    {
        const bool branch_taken_0x16f994 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F994u;
            // 0x16f998: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f994) {
            ctx->pc = 0x16FC80u;
            goto label_16fc80;
        }
    }
    ctx->pc = 0x16F99Cu;
    // 0x16f99c: 0x93c60013  lbu         $a2, 0x13($fp)
    ctx->pc = 0x16f99cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 19)));
    // 0x16f9a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x16f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x16f9a4: 0x24a5118c  addiu       $a1, $a1, 0x118C
    ctx->pc = 0x16f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4492));
    // 0x16f9a8: 0x97c4001a  lhu         $a0, 0x1A($fp)
    ctx->pc = 0x16f9a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 26)));
    // 0x16f9ac: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x16f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x16f9b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f9b4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x16f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16f9b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16f9bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16f9bcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x16f9c0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f9c4: 0x3284003f  andi        $a0, $s4, 0x3F
    ctx->pc = 0x16f9c4u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 20), _mm_cvtsi32_si128((int)63u)));
    // 0x16f9c8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x16f9cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16f9ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x16f9d0: 0xa7c3001a  sh          $v1, 0x1A($fp)
    ctx->pc = 0x16f9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x16f9d4: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x16f9d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x16f9d8: 0x97d30014  lhu         $s3, 0x14($fp)
    ctx->pc = 0x16f9d8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x16f9dc: 0x97d20016  lhu         $s2, 0x16($fp)
    ctx->pc = 0x16f9dcu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x16f9e0: 0x16a2000f  bne         $s5, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16F9E0u;
    {
        const bool branch_taken_0x16f9e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9E0u;
            // 0x16f9e4: 0x3c34821  addu        $t1, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9e0) {
            ctx->pc = 0x16FA20u;
            goto label_16fa20;
        }
    }
    ctx->pc = 0x16F9E8u;
    // 0x16f9e8: 0xdfc20018  ld          $v0, 0x18($fp)
    ctx->pc = 0x16f9e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16f9ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9f0: 0x97c30018  lhu         $v1, 0x18($fp)
    ctx->pc = 0x16f9f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16f9f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16f9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9f8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16f9f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9fc: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x16f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x16fa00: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x16fa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x16fa04: 0x30753fff  andi        $s5, $v1, 0x3FFF
    ctx->pc = 0x16fa04u;
    SET_GPR_VEC(ctx, 21, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16383u)));
    // 0x16fa08: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x16fa08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16fa0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16fa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa10: 0xc05bd48  jal         func_16F520
    ctx->pc = 0x16FA10u;
    SET_GPR_U32(ctx, 31, 0x16FA18u);
    ctx->pc = 0x16FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA10u;
            // 0x16fa14: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F520u;
    if (runtime->hasFunction(0x16F520u)) {
        auto targetFn = runtime->lookupFunction(0x16F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA18u; }
        if (ctx->pc != 0x16FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadTexture_0x16f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA18u; }
        if (ctx->pc != 0x16FA18u) { return; }
    }
    ctx->pc = 0x16FA18u;
    // 0x16fa18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16FA18u;
    {
        const bool branch_taken_0x16fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa18) {
            ctx->pc = 0x16FA98u;
            goto label_16fa98;
        }
    }
    ctx->pc = 0x16FA20u;
label_16fa20:
    // 0x16fa20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa24: 0xc05bd08  jal         func_16F420
    ctx->pc = 0x16FA24u;
    SET_GPR_U32(ctx, 31, 0x16FA2Cu);
    ctx->pc = 0x16FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA24u;
            // 0x16fa28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F420u;
    if (runtime->hasFunction(0x16F420u)) {
        auto targetFn = runtime->lookupFunction(0x16F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA2Cu; }
        if (ctx->pc != 0x16FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2CalcBufWidth_0x16f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA2Cu; }
        if (ctx->pc != 0x16FA2Cu) { return; }
    }
    ctx->pc = 0x16FA2Cu;
    // 0x16fa2c: 0x97ca0018  lhu         $t2, 0x18($fp)
    ctx->pc = 0x16fa2cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16fa30: 0x2408c000  addiu       $t0, $zero, -0x4000
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x16fa34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x16fa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16fa38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16fa38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x16fa3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x16fa40: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x16fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x16fa44: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x16fa44u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)63u)));
    // 0x16fa48: 0x32ab3fff  andi        $t3, $s5, 0x3FFF
    ctx->pc = 0x16fa48u;
    SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 21), _mm_cvtsi32_si128((int)16383u)));
    // 0x16fa4c: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x16fa4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x16fa50: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x16fa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x16fa54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16fa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16fa58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa5c: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x16fa5cu;
    SET_GPR_VEC(ctx, 10, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x16fa60: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x16fa60u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 11)));
    // 0x16fa64: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16fa64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa68: 0xa7ca0018  sh          $t2, 0x18($fp)
    ctx->pc = 0x16fa68u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 24), (uint16_t)GPR_U32(ctx, 10));
    // 0x16fa6c: 0xdfca0018  ld          $t2, 0x18($fp)
    ctx->pc = 0x16fa6cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x16fa70: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x16fa70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x16fa74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16fa74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x16fa78: 0xc05bd48  jal         func_16F520
    ctx->pc = 0x16FA78u;
    SET_GPR_U32(ctx, 31, 0x16FA80u);
    ctx->pc = 0x16FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA78u;
            // 0x16fa7c: 0xffc20018  sd          $v0, 0x18($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F520u;
    if (runtime->hasFunction(0x16F520u)) {
        auto targetFn = runtime->lookupFunction(0x16F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA80u; }
        if (ctx->pc != 0x16FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadTexture_0x16f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA80u; }
        if (ctx->pc != 0x16FA80u) { return; }
    }
    ctx->pc = 0x16FA80u;
    // 0x16fa80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16fa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa88: 0xc05bd00  jal         func_16F400
    ctx->pc = 0x16FA88u;
    SET_GPR_U32(ctx, 31, 0x16FA90u);
    ctx->pc = 0x16FA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA88u;
            // 0x16fa8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F400u;
    if (runtime->hasFunction(0x16F400u)) {
        auto targetFn = runtime->lookupFunction(0x16F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA90u; }
        if (ctx->pc != 0x16FA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2CalcBufSize_0x16f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FA90u; }
        if (ctx->pc != 0x16FA90u) { return; }
    }
    ctx->pc = 0x16FA90u;
    // 0x16fa90: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16fa94: 0x0  nop
    ctx->pc = 0x16fa94u;
    // NOP
label_16fa98:
    // 0x16fa98: 0x93c20011  lbu         $v0, 0x11($fp)
    ctx->pc = 0x16fa98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x16fa9c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16fa9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16faa0: 0x14200077  bnez        $at, . + 4 + (0x77 << 2)
    ctx->pc = 0x16FAA0u;
    {
        const bool branch_taken_0x16faa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAA0u;
            // 0x16faa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faa0) {
            ctx->pc = 0x16FC80u;
            goto label_16fc80;
        }
    }
    ctx->pc = 0x16FAA8u;
    // 0x16faa8: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FAA8u;
    {
        const bool branch_taken_0x16faa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x16FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAA8u;
            // 0x16faac: 0x27d10030  addiu       $s1, $fp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faa8) {
            ctx->pc = 0x16FAB8u;
            goto label_16fab8;
        }
    }
    ctx->pc = 0x16FAB0u;
    // 0x16fab0: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x16fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x16fab4: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x16fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
label_16fab8:
    // 0x16fab8: 0x93c20011  lbu         $v0, 0x11($fp)
    ctx->pc = 0x16fab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x16fabc: 0x97c3000c  lhu         $v1, 0xC($fp)
    ctx->pc = 0x16fabcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x16fac0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fac4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x16fac4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16fac8: 0x1420006d  bnez        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x16FAC8u;
    {
        const bool branch_taken_0x16fac8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAC8u;
            // 0x16facc: 0x3c3b821  addu        $s7, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fac8) {
            ctx->pc = 0x16FC80u;
            goto label_16fc80;
        }
    }
    ctx->pc = 0x16FAD0u;
    // 0x16fad0: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x16fad4: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x16fad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16fad8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x16fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x16fadc: 0x0  nop
    ctx->pc = 0x16fadcu;
    // NOP
label_16fae0:
    // 0x16fae0: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FAE0u;
    {
        const bool branch_taken_0x16fae0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x16FAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAE0u;
            // 0x16fae4: 0x131043  sra         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fae0) {
            ctx->pc = 0x16FAF0u;
            goto label_16faf0;
        }
    }
    ctx->pc = 0x16FAE8u;
    // 0x16fae8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x16fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16faec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16faecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_16faf0:
    // 0x16faf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16faf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16faf4: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FAF4u;
    {
        const bool branch_taken_0x16faf4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x16FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAF4u;
            // 0x16faf8: 0x121043  sra         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faf4) {
            ctx->pc = 0x16FB04u;
            goto label_16fb04;
        }
    }
    ctx->pc = 0x16FAFCu;
    // 0x16fafc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16fb00: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16fb00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_16fb04:
    // 0x16fb04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16fb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb08: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16fb0c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x16fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x16fb10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16fb14: 0x16a20024  bne         $s5, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16FB14u;
    {
        const bool branch_taken_0x16fb14 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x16FB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB14u;
            // 0x16fb18: 0x2e3b821  addu        $s7, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb14) {
            ctx->pc = 0x16FBA8u;
            goto label_16fba8;
        }
    }
    ctx->pc = 0x16FB1Cu;
    // 0x16fb1c: 0x2ac10004  slti        $at, $s6, 0x4
    ctx->pc = 0x16fb1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16fb20: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x16FB20u;
    {
        const bool branch_taken_0x16fb20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb20) {
            ctx->pc = 0x16FB58u;
            goto label_16fb58;
        }
    }
    ctx->pc = 0x16FB28u;
    // 0x16fb28: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x16fb28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16fb2c: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x16fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x16fb30: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x16fb34: 0x641816  dsrlv       $v1, $a0, $v1
    ctx->pc = 0x16fb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x16fb38: 0x441016  dsrlv       $v0, $a0, $v0
    ctx->pc = 0x16fb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x16fb3c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x16fb3cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16383u)));
    // 0x16fb40: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x16fb40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x16fb44: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x16fb44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fb48: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x16fb48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16fb4c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x16fb4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x16fb50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16FB50u;
    {
        const bool branch_taken_0x16fb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB50u;
            // 0x16fb54: 0x6303f  dsra32      $a2, $a2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb50) {
            ctx->pc = 0x16FB88u;
            goto label_16fb88;
        }
    }
    ctx->pc = 0x16FB58u;
label_16fb58:
    // 0x16fb58: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x16fb58u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16fb5c: 0x2603ffb0  addiu       $v1, $s0, -0x50
    ctx->pc = 0x16fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x16fb60: 0x2602ffbe  addiu       $v0, $s0, -0x42
    ctx->pc = 0x16fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967230));
    // 0x16fb64: 0x641816  dsrlv       $v1, $a0, $v1
    ctx->pc = 0x16fb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x16fb68: 0x441016  dsrlv       $v0, $a0, $v0
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x16fb6c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x16fb6cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16383u)));
    // 0x16fb70: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x16fb70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x16fb74: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x16fb74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16fb78: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x16fb78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16fb7c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x16fb7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x16fb80: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x16fb80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x16fb84: 0x0  nop
    ctx->pc = 0x16fb84u;
    // NOP
label_16fb88:
    // 0x16fb88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb8c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16fb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16fb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb94: 0xc05bd48  jal         func_16F520
    ctx->pc = 0x16FB94u;
    SET_GPR_U32(ctx, 31, 0x16FB9Cu);
    ctx->pc = 0x16FB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB94u;
            // 0x16fb98: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F520u;
    if (runtime->hasFunction(0x16F520u)) {
        auto targetFn = runtime->lookupFunction(0x16F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB9Cu; }
        if (ctx->pc != 0x16FB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadTexture_0x16f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FB9Cu; }
        if (ctx->pc != 0x16FB9Cu) { return; }
    }
    ctx->pc = 0x16FB9Cu;
    // 0x16fb9c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16FB9Cu;
    {
        const bool branch_taken_0x16fb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb9c) {
            ctx->pc = 0x16FC60u;
            goto label_16fc60;
        }
    }
    ctx->pc = 0x16FBA4u;
    // 0x16fba4: 0x0  nop
    ctx->pc = 0x16fba4u;
    // NOP
label_16fba8:
    // 0x16fba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbac: 0xc05bd08  jal         func_16F420
    ctx->pc = 0x16FBACu;
    SET_GPR_U32(ctx, 31, 0x16FBB4u);
    ctx->pc = 0x16FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBACu;
            // 0x16fbb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F420u;
    if (runtime->hasFunction(0x16F420u)) {
        auto targetFn = runtime->lookupFunction(0x16F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBB4u; }
        if (ctx->pc != 0x16FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2CalcBufWidth_0x16f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBB4u; }
        if (ctx->pc != 0x16FBB4u) { return; }
    }
    ctx->pc = 0x16FBB4u;
    // 0x16fbb4: 0x2ac10004  slti        $at, $s6, 0x4
    ctx->pc = 0x16fbb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16fbb8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x16FBB8u;
    {
        const bool branch_taken_0x16fbb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBB8u;
            // 0x16fbbc: 0x15203c  dsll32      $a0, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbb8) {
            ctx->pc = 0x16FBF8u;
            goto label_16fbf8;
        }
    }
    ctx->pc = 0x16FBC0u;
    // 0x16fbc0: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x16fbc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16fbc4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x16fbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x16fbc8: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x16fbcc: 0x643014  dsllv       $a2, $a0, $v1
    ctx->pc = 0x16fbccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x16fbd0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x16fbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16fbd4: 0x2603fffa  addiu       $v1, $s0, -0x6
    ctx->pc = 0x16fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x16fbd8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x16fbd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16fbdc: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x16fbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x16fbe0: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x16fbe0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x16fbe4: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x16fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x16fbe8: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x16fbe8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16fbec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16fbecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x16fbf0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16FBF0u;
    {
        const bool branch_taken_0x16fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBF0u;
            // 0x16fbf4: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbf0) {
            ctx->pc = 0x16FC30u;
            goto label_16fc30;
        }
    }
    ctx->pc = 0x16FBF8u;
label_16fbf8:
    // 0x16fbf8: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x16fbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x16fbfc: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x16fbfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16fc00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x16fc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x16fc04: 0x2603ffb0  addiu       $v1, $s0, -0x50
    ctx->pc = 0x16fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x16fc08: 0x643014  dsllv       $a2, $a0, $v1
    ctx->pc = 0x16fc08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x16fc0c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x16fc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x16fc10: 0x2603ffbe  addiu       $v1, $s0, -0x42
    ctx->pc = 0x16fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967230));
    // 0x16fc14: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x16fc14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x16fc18: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x16fc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x16fc1c: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x16fc1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x16fc20: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x16fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x16fc24: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x16fc24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16fc28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16fc28u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x16fc2c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x16fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_16fc30:
    // 0x16fc30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16fc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16fc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16fc3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc40: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x16fc40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc44: 0xc05bd48  jal         func_16F520
    ctx->pc = 0x16FC44u;
    SET_GPR_U32(ctx, 31, 0x16FC4Cu);
    ctx->pc = 0x16FC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC44u;
            // 0x16fc48: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F520u;
    if (runtime->hasFunction(0x16F520u)) {
        auto targetFn = runtime->lookupFunction(0x16F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC4Cu; }
        if (ctx->pc != 0x16FC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadTexture_0x16f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC4Cu; }
        if (ctx->pc != 0x16FC4Cu) { return; }
    }
    ctx->pc = 0x16FC4Cu;
    // 0x16fc4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16fc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc54: 0xc05bd00  jal         func_16F400
    ctx->pc = 0x16FC54u;
    SET_GPR_U32(ctx, 31, 0x16FC5Cu);
    ctx->pc = 0x16FC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC54u;
            // 0x16fc58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F400u;
    if (runtime->hasFunction(0x16F400u)) {
        auto targetFn = runtime->lookupFunction(0x16F400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC5Cu; }
        if (ctx->pc != 0x16FC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2CalcBufSize_0x16f400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC5Cu; }
        if (ctx->pc != 0x16FC5Cu) { return; }
    }
    ctx->pc = 0x16FC5Cu;
    // 0x16fc5c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_16fc60:
    // 0x16fc60: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16fc64: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x16fc64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x16fc68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16fc6c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x16fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x16fc70: 0x93c20011  lbu         $v0, 0x11($fp)
    ctx->pc = 0x16fc70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x16fc74: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x16fc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16fc78: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x16FC78u;
    {
        const bool branch_taken_0x16fc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC78u;
            // 0x16fc7c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc78) {
            ctx->pc = 0x16FAE0u;
            goto label_16fae0;
        }
    }
    ctx->pc = 0x16FC80u;
label_16fc80:
    // 0x16fc80: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x16fc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16fc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16fc88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16fc88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16fc8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16fc8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16fc90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16fc90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16fc94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16fc94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16fc98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16fc98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16fc9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16fc9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16fca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16fca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fcac: 0x3e00008  jr          $ra
    ctx->pc = 0x16FCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCACu;
            // 0x16fcb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FA20u: goto label_16fa20;
            case 0x16FA98u: goto label_16fa98;
            case 0x16FAB8u: goto label_16fab8;
            case 0x16FAE0u: goto label_16fae0;
            case 0x16FAF0u: goto label_16faf0;
            case 0x16FB04u: goto label_16fb04;
            case 0x16FB58u: goto label_16fb58;
            case 0x16FB88u: goto label_16fb88;
            case 0x16FBA8u: goto label_16fba8;
            case 0x16FBF8u: goto label_16fbf8;
            case 0x16FC30u: goto label_16fc30;
            case 0x16FC60u: goto label_16fc60;
            case 0x16FC80u: goto label_16fc80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FCB4u;
}
