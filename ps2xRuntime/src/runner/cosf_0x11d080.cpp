#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cosf
// Address: 0x11d080 - 0x11d168
void cosf_0x11d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cosf_0x11d080");
#endif

    ctx->pc = 0x11d080u;

    // 0x11d080: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11d080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11d084: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d08c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11d090: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11d090u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x11d094: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x11d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x11d098: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11d098u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x11d09c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x11d09cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4056u)));
    // 0x11d0a0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11d0a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11d0a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D0A4u;
    {
        const bool branch_taken_0x11d0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0A4u;
            // 0x11d0a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0a4) {
            ctx->pc = 0x11D0C0u;
            goto label_11d0c0;
        }
    }
    ctx->pc = 0x11D0ACu;
    // 0x11d0ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11d0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11d0b0: 0xc04758e  jal         func_11D638
    ctx->pc = 0x11D0B0u;
    SET_GPR_U32(ctx, 31, 0x11D0B8u);
    ctx->pc = 0x11D638u;
    if (runtime->hasFunction(0x11D638u)) {
        auto targetFn = runtime->lookupFunction(0x11D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B8u; }
        if (ctx->pc != 0x11D0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0B8u; }
        if (ctx->pc != 0x11D0B8u) { return; }
    }
    ctx->pc = 0x11D0B8u;
    // 0x11d0b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11D0B8u;
    {
        const bool branch_taken_0x11d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0B8u;
            // 0x11d0bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0b8) {
            ctx->pc = 0x11D160u;
            goto label_11d160;
        }
    }
    ctx->pc = 0x11D0C0u;
label_11d0c0:
    // 0x11d0c0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x11d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x11d0c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d0c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11d0c8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11d0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11d0cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D0CCu;
    {
        const bool branch_taken_0x11d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0cc) {
            ctx->pc = 0x11D0DCu;
            goto label_11d0dc;
        }
    }
    ctx->pc = 0x11D0D4u;
    // 0x11d0d4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11D0D4u;
    {
        const bool branch_taken_0x11d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0D4u;
            // 0x11d0d8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0d4) {
            ctx->pc = 0x11D15Cu;
            goto label_11d15c;
        }
    }
    ctx->pc = 0x11D0DCu;
label_11d0dc:
    // 0x11d0dc: 0xc047496  jal         func_11D258
    ctx->pc = 0x11D0DCu;
    SET_GPR_U32(ctx, 31, 0x11D0E4u);
    ctx->pc = 0x11D0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0DCu;
            // 0x11d0e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D258u;
    if (runtime->hasFunction(0x11D258u)) {
        auto targetFn = runtime->lookupFunction(0x11D258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0E4u; }
        if (ctx->pc != 0x11D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0E4u; }
        if (ctx->pc != 0x11D0E4u) { return; }
    }
    ctx->pc = 0x11D0E4u;
    // 0x11d0e4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x11d0e4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x11d0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d0ec: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11D0ECu;
    {
        const bool branch_taken_0x11d0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0ECu;
            // 0x11d0f0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0ec) {
            ctx->pc = 0x11D12Cu;
            goto label_11d12c;
        }
    }
    ctx->pc = 0x11D0F4u;
    // 0x11d0f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D0F4u;
    {
        const bool branch_taken_0x11d0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0F4u;
            // 0x11d0f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0f4) {
            ctx->pc = 0x11D10Cu;
            goto label_11d10c;
        }
    }
    ctx->pc = 0x11D0FCu;
    // 0x11d0fc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D0FCu;
    {
        const bool branch_taken_0x11d0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0FCu;
            // 0x11d100: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0fc) {
            ctx->pc = 0x11D11Cu;
            goto label_11d11c;
        }
    }
    ctx->pc = 0x11D104u;
    // 0x11d104: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11D104u;
    {
        const bool branch_taken_0x11d104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D104u;
            // 0x11d108: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d104) {
            ctx->pc = 0x11D154u;
            goto label_11d154;
        }
    }
    ctx->pc = 0x11D10Cu;
label_11d10c:
    // 0x11d10c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D10Cu;
    {
        const bool branch_taken_0x11d10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D10Cu;
            // 0x11d110: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d10c) {
            ctx->pc = 0x11D144u;
            goto label_11d144;
        }
    }
    ctx->pc = 0x11D114u;
    // 0x11d114: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11D114u;
    {
        const bool branch_taken_0x11d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D114u;
            // 0x11d118: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d114) {
            ctx->pc = 0x11D154u;
            goto label_11d154;
        }
    }
    ctx->pc = 0x11D11Cu;
label_11d11c:
    // 0x11d11c: 0xc04758e  jal         func_11D638
    ctx->pc = 0x11D11Cu;
    SET_GPR_U32(ctx, 31, 0x11D124u);
    ctx->pc = 0x11D120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D11Cu;
            // 0x11d120: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D638u;
    if (runtime->hasFunction(0x11D638u)) {
        auto targetFn = runtime->lookupFunction(0x11D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D124u; }
        if (ctx->pc != 0x11D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D124u; }
        if (ctx->pc != 0x11D124u) { return; }
    }
    ctx->pc = 0x11D124u;
    // 0x11d124: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11D124u;
    {
        const bool branch_taken_0x11d124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D124u;
            // 0x11d128: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d124) {
            ctx->pc = 0x11D160u;
            goto label_11d160;
        }
    }
    ctx->pc = 0x11D12Cu;
label_11d12c:
    // 0x11d12c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d134: 0xc047838  jal         func_11E0E0
    ctx->pc = 0x11D134u;
    SET_GPR_U32(ctx, 31, 0x11D13Cu);
    ctx->pc = 0x11D138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D134u;
            // 0x11d138: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E0E0u;
    if (runtime->hasFunction(0x11E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D13Cu; }
        if (ctx->pc != 0x11D13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D13Cu; }
        if (ctx->pc != 0x11D13Cu) { return; }
    }
    ctx->pc = 0x11D13Cu;
    // 0x11d13c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11D13Cu;
    {
        const bool branch_taken_0x11d13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D13Cu;
            // 0x11d140: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d13c) {
            ctx->pc = 0x11D15Cu;
            goto label_11d15c;
        }
    }
    ctx->pc = 0x11D144u;
label_11d144:
    // 0x11d144: 0xc04758e  jal         func_11D638
    ctx->pc = 0x11D144u;
    SET_GPR_U32(ctx, 31, 0x11D14Cu);
    ctx->pc = 0x11D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D144u;
            // 0x11d148: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D638u;
    if (runtime->hasFunction(0x11D638u)) {
        auto targetFn = runtime->lookupFunction(0x11D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D14Cu; }
        if (ctx->pc != 0x11D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D14Cu; }
        if (ctx->pc != 0x11D14Cu) { return; }
    }
    ctx->pc = 0x11D14Cu;
    // 0x11d14c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D14Cu;
    {
        const bool branch_taken_0x11d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D14Cu;
            // 0x11d150: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d14c) {
            ctx->pc = 0x11D15Cu;
            goto label_11d15c;
        }
    }
    ctx->pc = 0x11D154u;
label_11d154:
    // 0x11d154: 0xc047838  jal         func_11E0E0
    ctx->pc = 0x11D154u;
    SET_GPR_U32(ctx, 31, 0x11D15Cu);
    ctx->pc = 0x11D158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D154u;
            // 0x11d158: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E0E0u;
    if (runtime->hasFunction(0x11E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D15Cu; }
        if (ctx->pc != 0x11D15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D15Cu; }
        if (ctx->pc != 0x11D15Cu) { return; }
    }
    ctx->pc = 0x11D15Cu;
label_11d15c:
    // 0x11d15c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d160:
    // 0x11d160: 0x3e00008  jr          $ra
    ctx->pc = 0x11D160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D160u;
            // 0x11d164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D0C0u: goto label_11d0c0;
            case 0x11D0DCu: goto label_11d0dc;
            case 0x11D10Cu: goto label_11d10c;
            case 0x11D11Cu: goto label_11d11c;
            case 0x11D12Cu: goto label_11d12c;
            case 0x11D144u: goto label_11d144;
            case 0x11D154u: goto label_11d154;
            case 0x11D15Cu: goto label_11d15c;
            case 0x11D160u: goto label_11d160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D168u;
}
