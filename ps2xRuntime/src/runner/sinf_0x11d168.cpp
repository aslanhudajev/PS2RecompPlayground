#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sinf
// Address: 0x11d168 - 0x11d258
void sinf_0x11d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11d168u;

    // 0x11d168: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11d168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11d16c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d16cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d174: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11d178: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11d178u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x11d17c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x11d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x11d180: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11d180u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x11d184: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x11d184u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4056u)));
    // 0x11d188: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11d188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11d18c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D18Cu;
    {
        const bool branch_taken_0x11d18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D18Cu;
            // 0x11d190: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d18c) {
            ctx->pc = 0x11D1A8u;
            goto label_11d1a8;
        }
    }
    ctx->pc = 0x11D194u;
    // 0x11d194: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11d194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11d198: 0xc047838  jal         func_11E0E0
    ctx->pc = 0x11D198u;
    SET_GPR_U32(ctx, 31, 0x11D1A0u);
    ctx->pc = 0x11D19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D198u;
            // 0x11d19c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E0E0u;
    if (runtime->hasFunction(0x11E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A0u; }
        if (ctx->pc != 0x11D1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1A0u; }
        if (ctx->pc != 0x11D1A0u) { return; }
    }
    ctx->pc = 0x11D1A0u;
    // 0x11d1a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11D1A0u;
    {
        const bool branch_taken_0x11d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1A0u;
            // 0x11d1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1a0) {
            ctx->pc = 0x11D250u;
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D1A8u;
label_11d1a8:
    // 0x11d1a8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x11d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x11d1ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11d1acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11d1b0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11d1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11d1b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D1B4u;
    {
        const bool branch_taken_0x11d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1b4) {
            ctx->pc = 0x11D1C4u;
            goto label_11d1c4;
        }
    }
    ctx->pc = 0x11D1BCu;
    // 0x11d1bc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11D1BCu;
    {
        const bool branch_taken_0x11d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1BCu;
            // 0x11d1c0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1bc) {
            ctx->pc = 0x11D24Cu;
            goto label_11d24c;
        }
    }
    ctx->pc = 0x11D1C4u;
label_11d1c4:
    // 0x11d1c4: 0xc047496  jal         func_11D258
    ctx->pc = 0x11D1C4u;
    SET_GPR_U32(ctx, 31, 0x11D1CCu);
    ctx->pc = 0x11D1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1C4u;
            // 0x11d1c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D258u;
    if (runtime->hasFunction(0x11D258u)) {
        auto targetFn = runtime->lookupFunction(0x11D258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1CCu; }
        if (ctx->pc != 0x11D1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x11d258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1CCu; }
        if (ctx->pc != 0x11D1CCu) { return; }
    }
    ctx->pc = 0x11D1CCu;
    // 0x11d1cc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x11d1ccu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x11d1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d1d4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D1D4u;
    {
        const bool branch_taken_0x11d1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1D4u;
            // 0x11d1d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d4) {
            ctx->pc = 0x11D218u;
            goto label_11d218;
        }
    }
    ctx->pc = 0x11D1DCu;
    // 0x11d1dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D1DCu;
    {
        const bool branch_taken_0x11d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1DCu;
            // 0x11d1e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1dc) {
            ctx->pc = 0x11D1F4u;
            goto label_11d1f4;
        }
    }
    ctx->pc = 0x11D1E4u;
    // 0x11d1e4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D1E4u;
    {
        const bool branch_taken_0x11d1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1E4u;
            // 0x11d1e8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1e4) {
            ctx->pc = 0x11D204u;
            goto label_11d204;
        }
    }
    ctx->pc = 0x11D1ECu;
    // 0x11d1ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11D1ECu;
    {
        const bool branch_taken_0x11d1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1ec) {
            ctx->pc = 0x11D240u;
            goto label_11d240;
        }
    }
    ctx->pc = 0x11D1F4u;
label_11d1f4:
    // 0x11d1f4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11D1F4u;
    {
        const bool branch_taken_0x11d1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1F4u;
            // 0x11d1f8: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1f4) {
            ctx->pc = 0x11D22Cu;
            goto label_11d22c;
        }
    }
    ctx->pc = 0x11D1FCu;
    // 0x11d1fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11D1FCu;
    {
        const bool branch_taken_0x11d1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1fc) {
            ctx->pc = 0x11D240u;
            goto label_11d240;
        }
    }
    ctx->pc = 0x11D204u;
label_11d204:
    // 0x11d204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d208: 0xc047838  jal         func_11E0E0
    ctx->pc = 0x11D208u;
    SET_GPR_U32(ctx, 31, 0x11D210u);
    ctx->pc = 0x11D20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D208u;
            // 0x11d20c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E0E0u;
    if (runtime->hasFunction(0x11E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D210u; }
        if (ctx->pc != 0x11D210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D210u; }
        if (ctx->pc != 0x11D210u) { return; }
    }
    ctx->pc = 0x11D210u;
    // 0x11d210: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11D210u;
    {
        const bool branch_taken_0x11d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D210u;
            // 0x11d214: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d210) {
            ctx->pc = 0x11D250u;
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D218u;
label_11d218:
    // 0x11d218: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11d21c: 0xc04758e  jal         func_11D638
    ctx->pc = 0x11D21Cu;
    SET_GPR_U32(ctx, 31, 0x11D224u);
    ctx->pc = 0x11D220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D21Cu;
            // 0x11d220: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D638u;
    if (runtime->hasFunction(0x11D638u)) {
        auto targetFn = runtime->lookupFunction(0x11D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D224u; }
        if (ctx->pc != 0x11D224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D224u; }
        if (ctx->pc != 0x11D224u) { return; }
    }
    ctx->pc = 0x11D224u;
    // 0x11d224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D224u;
    {
        const bool branch_taken_0x11d224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D224u;
            // 0x11d228: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d224) {
            ctx->pc = 0x11D250u;
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D22Cu;
label_11d22c:
    // 0x11d22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d230: 0xc047838  jal         func_11E0E0
    ctx->pc = 0x11D230u;
    SET_GPR_U32(ctx, 31, 0x11D238u);
    ctx->pc = 0x11D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D230u;
            // 0x11d234: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E0E0u;
    if (runtime->hasFunction(0x11E0E0u)) {
        auto targetFn = runtime->lookupFunction(0x11E0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D238u; }
        if (ctx->pc != 0x11D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x11e0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D238u; }
        if (ctx->pc != 0x11D238u) { return; }
    }
    ctx->pc = 0x11D238u;
    // 0x11d238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D238u;
    {
        const bool branch_taken_0x11d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D238u;
            // 0x11d23c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d238) {
            ctx->pc = 0x11D24Cu;
            goto label_11d24c;
        }
    }
    ctx->pc = 0x11D240u;
label_11d240:
    // 0x11d240: 0xc04758e  jal         func_11D638
    ctx->pc = 0x11D240u;
    SET_GPR_U32(ctx, 31, 0x11D248u);
    ctx->pc = 0x11D244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D240u;
            // 0x11d244: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D638u;
    if (runtime->hasFunction(0x11D638u)) {
        auto targetFn = runtime->lookupFunction(0x11D638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D248u; }
        if (ctx->pc != 0x11D248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x11d638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D248u; }
        if (ctx->pc != 0x11D248u) { return; }
    }
    ctx->pc = 0x11D248u;
    // 0x11d248: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11d248u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_11d24c:
    // 0x11d24c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d250:
    // 0x11d250: 0x3e00008  jr          $ra
    ctx->pc = 0x11D250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D250u;
            // 0x11d254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11D1A8u: goto label_11d1a8;
            case 0x11D1C4u: goto label_11d1c4;
            case 0x11D1F4u: goto label_11d1f4;
            case 0x11D204u: goto label_11d204;
            case 0x11D218u: goto label_11d218;
            case 0x11D22Cu: goto label_11d22c;
            case 0x11D240u: goto label_11d240;
            case 0x11D24Cu: goto label_11d24c;
            case 0x11D250u: goto label_11d250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11D258u;
}
