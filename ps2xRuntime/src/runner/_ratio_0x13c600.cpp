#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ratio
// Address: 0x13c600 - 0x13c6c0
void _ratio_0x13c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ratio_0x13c600");
#endif

    ctx->pc = 0x13c600u;

    // 0x13c600: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13c604: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x13c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x13c608: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13c60c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13c60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c614: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13c618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13c618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13c61c: 0xc04f0c0  jal         func_13C300
    ctx->pc = 0x13C61Cu;
    SET_GPR_U32(ctx, 31, 0x13C624u);
    ctx->pc = 0x13C620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C61Cu;
            // 0x13c620: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C300u;
    if (runtime->hasFunction(0x13C300u)) {
        auto targetFn = runtime->lookupFunction(0x13C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C624u; }
        if (ctx->pc != 0x13C624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x13c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C624u; }
        if (ctx->pc != 0x13C624u) { return; }
    }
    ctx->pc = 0x13C624u;
    // 0x13c624: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13c624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c62c: 0xc04f0c0  jal         func_13C300
    ctx->pc = 0x13C62Cu;
    SET_GPR_U32(ctx, 31, 0x13C634u);
    ctx->pc = 0x13C630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C62Cu;
            // 0x13c630: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C300u;
    if (runtime->hasFunction(0x13C300u)) {
        auto targetFn = runtime->lookupFunction(0x13C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C634u; }
        if (ctx->pc != 0x13C634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _b2d_0x13c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C634u; }
        if (ctx->pc != 0x13C634u) { return; }
    }
    ctx->pc = 0x13C634u;
    // 0x13c634: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13c638: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13c638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c63c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13c640: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13c640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c644: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x13c644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13c648: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13c648u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c64c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13c650: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x13c650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13c654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c658: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13C658u;
    {
        const bool branch_taken_0x13c658 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13C65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C658u;
            // 0x13c65c: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c658) {
            ctx->pc = 0x13C680u;
            goto label_13c680;
        }
    }
    ctx->pc = 0x13C660u;
    // 0x13c660: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x13c660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x13c664: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c668: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x13c668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13c66c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13c66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13c670: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c674: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x13c674u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
    // 0x13c678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13C678u;
    {
        const bool branch_taken_0x13c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C678u;
            // 0x13c67c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c678) {
            ctx->pc = 0x13C69Cu;
            goto label_13c69c;
        }
    }
    ctx->pc = 0x13C680u;
label_13c680:
    // 0x13c680: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x13c680u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x13c684: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c688: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x13c688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13c68c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x13c68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x13c690: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c694: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x13c694u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x13c698: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x13c698u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
label_13c69c:
    // 0x13c69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6a0: 0xc04092a  jal         func_1024A8
    ctx->pc = 0x13C6A0u;
    SET_GPR_U32(ctx, 31, 0x13C6A8u);
    ctx->pc = 0x13C6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6A0u;
            // 0x13c6a4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1024A8u;
    if (runtime->hasFunction(0x1024A8u)) {
        auto targetFn = runtime->lookupFunction(0x1024A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6A8u; }
        if (ctx->pc != 0x13C6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x1024a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C6A8u; }
        if (ctx->pc != 0x13C6A8u) { return; }
    }
    ctx->pc = 0x13C6A8u;
    // 0x13c6a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13c6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c6ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13c6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c6b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x13c6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c6b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13c6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6B8u;
            // 0x13c6bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C680u: goto label_13c680;
            case 0x13C69Cu: goto label_13c69c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C6C0u;
}
