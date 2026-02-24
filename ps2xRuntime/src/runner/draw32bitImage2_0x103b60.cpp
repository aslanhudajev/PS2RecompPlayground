#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: draw32bitImage2
// Address: 0x103b60 - 0x103e00
void draw32bitImage2_0x103b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("draw32bitImage2_0x103b60");
#endif

    ctx->pc = 0x103b60u;

    // 0x103b60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x103b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x103b64: 0x8f8282b4  lw          $v0, -0x7D4C($gp)
    ctx->pc = 0x103b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x103b68: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x103b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x103b6c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x103b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x103b70: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x103b70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b74: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x103b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x103b78: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x103b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b7c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x103b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x103b80: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x103b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x103b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x103b88: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x103b88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x103b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103b90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x103b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103b98: 0x317200ff  andi        $s2, $t3, 0xFF
    ctx->pc = 0x103b98u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)255u)));
    // 0x103b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103ba0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x103ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x103ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ba8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103BA8u;
    {
        const bool branch_taken_0x103ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x103BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103BA8u;
            // 0x103bac: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ba8) {
            ctx->pc = 0x103BC0u;
            goto label_103bc0;
        }
    }
    ctx->pc = 0x103BB0u;
    // 0x103bb0: 0x24052b00  addiu       $a1, $zero, 0x2B00
    ctx->pc = 0x103bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11008));
    // 0x103bb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x103bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bb8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x103BB8u;
    SET_GPR_U32(ctx, 31, 0x103BC0u);
    ctx->pc = 0x103BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103BB8u;
            // 0x103bbc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103230u;
    if (runtime->hasFunction(0x103230u)) {
        auto targetFn = runtime->lookupFunction(0x103230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103BC0u; }
        if (ctx->pc != 0x103BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load32bitImage_0x103230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103BC0u; }
        if (ctx->pc != 0x103BC0u) { return; }
    }
    ctx->pc = 0x103BC0u;
label_103bc0:
    // 0x103bc0: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x103bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103bc4: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x103bc4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103bc8: 0xaf9082b4  sw          $s0, -0x7D4C($gp)
    ctx->pc = 0x103bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 16));
    // 0x103bcc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103bd0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x103bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x103bd4: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x103bd4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)5u)));
    // 0x103bd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x103bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x103bdc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103be0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x103be4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x103be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x103be8: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x103be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x103bec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bf0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x103bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x103bf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x103bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x103bf8: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x103bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x103bfc: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x103bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x103c00: 0xc040a92  jal         func_102A48
    ctx->pc = 0x103C00u;
    SET_GPR_U32(ctx, 31, 0x103C08u);
    ctx->pc = 0x103C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103C00u;
            // 0x103c04: 0xfc400020  sd          $zero, 0x20($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A48u;
    if (runtime->hasFunction(0x102A48u)) {
        auto targetFn = runtime->lookupFunction(0x102A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C08u; }
        if (ctx->pc != 0x103C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C08u; }
        if (ctx->pc != 0x103C08u) { return; }
    }
    ctx->pc = 0x103C08u;
    // 0x103c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c10: 0xc040a92  jal         func_102A48
    ctx->pc = 0x103C10u;
    SET_GPR_U32(ctx, 31, 0x103C18u);
    ctx->pc = 0x103C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103C10u;
            // 0x103c14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102A48u;
    if (runtime->hasFunction(0x102A48u)) {
        auto targetFn = runtime->lookupFunction(0x102A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C18u; }
        if (ctx->pc != 0x103C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103C18u; }
        if (ctx->pc != 0x103C18u) { return; }
    }
    ctx->pc = 0x103C18u;
    // 0x103c18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103c1c: 0x2624003f  addiu       $a0, $s1, 0x3F
    ctx->pc = 0x103c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x103c20: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x103c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x103c24: 0x223200b  movn        $a0, $s1, $v1
    ctx->pc = 0x103c24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
    // 0x103c28: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x103c2c: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x103c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x103c30: 0x1087b8  dsll        $s0, $s0, 30
    ctx->pc = 0x103c30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x103c34: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x103c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x103c38: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x103c38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x103c3c: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x103c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x103c40: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x103c40u;
    SET_GPR_VEC(ctx, 16, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x103c44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x103c44u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x103c48: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x103c48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x103c4c: 0x123600  sll         $a2, $s2, 24
    ctx->pc = 0x103c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x103c50: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x103c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x103c54: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x103c54u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x103c58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x103c58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x103c5c: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x103c5cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 18)));
    // 0x103c60: 0x155043  sra         $t2, $s5, 1
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 21), 1));
    // 0x103c64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x103c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x103c68: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x103c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x103c6c: 0x34a52b00  ori         $a1, $a1, 0x2B00
    ctx->pc = 0x103c6cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)11008u)));
    // 0x103c70: 0x8f9582b8  lw          $s5, -0x7D48($gp)
    ctx->pc = 0x103c70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103c74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x103c74u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x103c78: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x103c78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x103c7c: 0x28a9023  subu        $s2, $s4, $t2
    ctx->pc = 0x103c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x103c80: 0x174843  sra         $t1, $s7, 1
    ctx->pc = 0x103c80u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 23), 1));
    // 0x103c84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x103c88: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x103c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x103c8c: 0x240b001f  addiu       $t3, $zero, 0x1F
    ctx->pc = 0x103c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x103c90: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x103c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x103c94: 0x356b0029  ori         $t3, $t3, 0x29
    ctx->pc = 0x103c94u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 11), _mm_cvtsi32_si128((int)41u)));
    // 0x103c98: 0x240c0042  addiu       $t4, $zero, 0x42
    ctx->pc = 0x103c98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x103c9c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x103c9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103ca0: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x103ca0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x103ca4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x103ca4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x103ca8: 0x35ce8001  ori         $t6, $t6, 0x8001
    ctx->pc = 0x103ca8u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 14), _mm_cvtsi32_si128((int)32769u)));
    // 0x103cac: 0x3c0f4343  lui         $t7, 0x4343
    ctx->pc = 0x103cacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)17219 << 16));
    // 0x103cb0: 0x35ef4343  ori         $t7, $t7, 0x4343
    ctx->pc = 0x103cb0u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 15), _mm_cvtsi32_si128((int)17219u)));
    // 0x103cb4: 0xfea40030  sd          $a0, 0x30($s5)
    ctx->pc = 0x103cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 48), GPR_U64(ctx, 4));
    // 0x103cb8: 0x2c98023  subu        $s0, $s6, $t1
    ctx->pc = 0x103cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x103cbc: 0xfea20038  sd          $v0, 0x38($s5)
    ctx->pc = 0x103cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 56), GPR_U64(ctx, 2));
    // 0x103cc0: 0x26a70090  addiu       $a3, $s5, 0x90
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x103cc4: 0xfea50040  sd          $a1, 0x40($s5)
    ctx->pc = 0x103cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 5));
    // 0x103cc8: 0x3c080010  lui         $t0, 0x10
    ctx->pc = 0x103cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    // 0x103ccc: 0xfeab0050  sd          $t3, 0x50($s5)
    ctx->pc = 0x103cccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 80), GPR_U64(ctx, 11));
    // 0x103cd0: 0x28a5021  addu        $t2, $s4, $t2
    ctx->pc = 0x103cd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
    // 0x103cd4: 0xfeac0058  sd          $t4, 0x58($s5)
    ctx->pc = 0x103cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 12));
    // 0x103cd8: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x103cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x103cdc: 0xfea60060  sd          $a2, 0x60($s5)
    ctx->pc = 0x103cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 96), GPR_U64(ctx, 6));
    // 0x103ce0: 0x26a200b0  addiu       $v0, $s5, 0xB0
    ctx->pc = 0x103ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x103ce4: 0xaeb20090  sw          $s2, 0x90($s5)
    ctx->pc = 0x103ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 18));
    // 0x103ce8: 0x135900  sll         $t3, $s3, 4
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x103cec: 0xfead0068  sd          $t5, 0x68($s5)
    ctx->pc = 0x103cecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 13));
    // 0x103cf0: 0x26a500d0  addiu       $a1, $s5, 0xD0
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x103cf4: 0xfeae0070  sd          $t6, 0x70($s5)
    ctx->pc = 0x103cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 112), GPR_U64(ctx, 14));
    // 0x103cf8: 0x2c94821  addu        $t1, $s6, $t1
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 9)));
    // 0x103cfc: 0xfeaf0078  sd          $t7, 0x78($s5)
    ctx->pc = 0x103cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 120), GPR_U64(ctx, 15));
    // 0x103d00: 0x26a600f0  addiu       $a2, $s5, 0xF0
    ctx->pc = 0x103d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x103d04: 0xfea00048  sd          $zero, 0x48($s5)
    ctx->pc = 0x103d04u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 72), GPR_U64(ctx, 0));
    // 0x103d08: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x103d08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
    // 0x103d0c: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x103d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
    // 0x103d10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d14: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x103d14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
    // 0x103d18: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x103d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x103d1c: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x103d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x103d20: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x103d20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x103d24: 0xaeb100a0  sw          $s1, 0xA0($s5)
    ctx->pc = 0x103d24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 17));
    // 0x103d28: 0xaea000a4  sw          $zero, 0xA4($s5)
    ctx->pc = 0x103d28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
    // 0x103d2c: 0xaeaa00b0  sw          $t2, 0xB0($s5)
    ctx->pc = 0x103d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 10));
    // 0x103d30: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x103d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x103d34: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x103d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x103d38: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x103d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x103d3c: 0xaeb200d0  sw          $s2, 0xD0($s5)
    ctx->pc = 0x103d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 208), GPR_U32(ctx, 18));
    // 0x103d40: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x103d40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103d44: 0xaea000c0  sw          $zero, 0xC0($s5)
    ctx->pc = 0x103d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 0));
    // 0x103d48: 0xaeab00c4  sw          $t3, 0xC4($s5)
    ctx->pc = 0x103d48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 11));
    // 0x103d4c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x103d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103d50: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x103d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x103d54: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x103d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x103d58: 0xaeb100e0  sw          $s1, 0xE0($s5)
    ctx->pc = 0x103d58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 17));
    // 0x103d5c: 0xaeab00e4  sw          $t3, 0xE4($s5)
    ctx->pc = 0x103d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 11));
    // 0x103d60: 0xaeaa00f0  sw          $t2, 0xF0($s5)
    ctx->pc = 0x103d60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 10));
    // 0x103d64: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x103d64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x103d68: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x103d68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x103d6c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x103d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x103d70: 0x7ea20100  sq          $v0, 0x100($s5)
    ctx->pc = 0x103d70u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 256), GPR_VEC(ctx, 2));
    // 0x103d74: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x103d78: 0xaeac0100  sw          $t4, 0x100($s5)
    ctx->pc = 0x103d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 256), GPR_U32(ctx, 12));
    // 0x103d7c: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x103d7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x103d80: 0xc043948  jal         func_10E520
    ctx->pc = 0x103D80u;
    SET_GPR_U32(ctx, 31, 0x103D88u);
    ctx->pc = 0x103D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103D80u;
            // 0x103d84: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103D88u; }
        if (ctx->pc != 0x103D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103D88u; }
        if (ctx->pc != 0x103D88u) { return; }
    }
    ctx->pc = 0x103D88u;
    // 0x103d88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d8c: 0xc043322  jal         func_10CC88
    ctx->pc = 0x103D8Cu;
    SET_GPR_U32(ctx, 31, 0x103D94u);
    ctx->pc = 0x103D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103D8Cu;
            // 0x103d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103D94u; }
        if (ctx->pc != 0x103D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103D94u; }
        if (ctx->pc != 0x103D94u) { return; }
    }
    ctx->pc = 0x103D94u;
    // 0x103d94: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d9c: 0xc04372a  jal         func_10DCA8
    ctx->pc = 0x103D9Cu;
    SET_GPR_U32(ctx, 31, 0x103DA4u);
    ctx->pc = 0x103DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103D9Cu;
            // 0x103da0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DA4u; }
        if (ctx->pc != 0x103DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DA4u; }
        if (ctx->pc != 0x103DA4u) { return; }
    }
    ctx->pc = 0x103DA4u;
    // 0x103da4: 0x8f8382b8  lw          $v1, -0x7D48($gp)
    ctx->pc = 0x103da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103da8: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x103da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x103dac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x103dacu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x103db0: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103db4: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x103DB4u;
    SET_GPR_U32(ctx, 31, 0x103DBCu);
    ctx->pc = 0x103DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103DB4u;
            // 0x103db8: 0x652824  and         $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DBCu; }
        if (ctx->pc != 0x103DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DBCu; }
        if (ctx->pc != 0x103DBCu) { return; }
    }
    ctx->pc = 0x103DBCu;
    // 0x103dbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dc0: 0xc043322  jal         func_10CC88
    ctx->pc = 0x103DC0u;
    SET_GPR_U32(ctx, 31, 0x103DC8u);
    ctx->pc = 0x103DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103DC0u;
            // 0x103dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DC8u; }
        if (ctx->pc != 0x103DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103DC8u; }
        if (ctx->pc != 0x103DC8u) { return; }
    }
    ctx->pc = 0x103DC8u;
    // 0x103dc8: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x103dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x103dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x103dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x103dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x103dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103dd8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x103dd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103ddc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x103ddcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103de0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x103de0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103de4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x103de4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103de8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x103de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103dec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x103decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103df0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103df8: 0x804372a  j           func_10DCA8
    ctx->pc = 0x103DF8u;
    ctx->pc = 0x103DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103DF8u;
            // 0x103dfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA8u;
    if (runtime->hasFunction(0x10DCA8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x103E00u;
}
