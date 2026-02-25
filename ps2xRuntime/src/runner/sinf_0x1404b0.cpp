#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sinf
// Address: 0x1404b0 - 0x1405a0
void sinf_0x1404b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sinf_0x1404b0");
#endif

    ctx->pc = 0x1404b0u;

    // 0x1404b0: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1404b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1404b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1404b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1404b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1404b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404bc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1404bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1404c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1404c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x1404c4: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1404c8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1404c8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1404cc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1404ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4056u)));
    // 0x1404d0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1404d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1404d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1404D4u;
    {
        const bool branch_taken_0x1404d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1404D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1404D4u;
            // 0x1404d8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404d4) {
            ctx->pc = 0x1404F0u;
            goto label_1404f0;
        }
    }
    ctx->pc = 0x1404DCu;
    // 0x1404dc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1404dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1404e0: 0xc0500a8  jal         func_1402A0
    ctx->pc = 0x1404E0u;
    SET_GPR_U32(ctx, 31, 0x1404E8u);
    ctx->pc = 0x1404E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1404E0u;
            // 0x1404e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402A0u;
    if (runtime->hasFunction(0x1402A0u)) {
        auto targetFn = runtime->lookupFunction(0x1402A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404E8u; }
        if (ctx->pc != 0x1404E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x1402a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1404E8u; }
        if (ctx->pc != 0x1404E8u) { return; }
    }
    ctx->pc = 0x1404E8u;
    // 0x1404e8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1404E8u;
    {
        const bool branch_taken_0x1404e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1404E8u;
            // 0x1404ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404e8) {
            ctx->pc = 0x140598u;
            goto label_140598;
        }
    }
    ctx->pc = 0x1404F0u;
label_1404f0:
    // 0x1404f0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1404f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1404f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1404f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1404f8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1404f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1404fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1404FCu;
    {
        const bool branch_taken_0x1404fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1404fc) {
            ctx->pc = 0x14050Cu;
            goto label_14050c;
        }
    }
    ctx->pc = 0x140504u;
    // 0x140504: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x140504u;
    {
        const bool branch_taken_0x140504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140504u;
            // 0x140508: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140504) {
            ctx->pc = 0x140594u;
            goto label_140594;
        }
    }
    ctx->pc = 0x14050Cu;
label_14050c:
    // 0x14050c: 0xc04fd06  jal         func_13F418
    ctx->pc = 0x14050Cu;
    SET_GPR_U32(ctx, 31, 0x140514u);
    ctx->pc = 0x140510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14050Cu;
            // 0x140510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F418u;
    if (runtime->hasFunction(0x13F418u)) {
        auto targetFn = runtime->lookupFunction(0x13F418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140514u; }
        if (ctx->pc != 0x140514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_rem_pio2f_0x13f418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140514u; }
        if (ctx->pc != 0x140514u) { return; }
    }
    ctx->pc = 0x140514u;
    // 0x140514: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x140514u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x140518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14051c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14051Cu;
    {
        const bool branch_taken_0x14051c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x140520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14051Cu;
            // 0x140520: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14051c) {
            ctx->pc = 0x140560u;
            goto label_140560;
        }
    }
    ctx->pc = 0x140524u;
    // 0x140524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x140524u;
    {
        const bool branch_taken_0x140524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140524u;
            // 0x140528: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140524) {
            ctx->pc = 0x14053Cu;
            goto label_14053c;
        }
    }
    ctx->pc = 0x14052Cu;
    // 0x14052c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14052Cu;
    {
        const bool branch_taken_0x14052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14052Cu;
            // 0x140530: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14052c) {
            ctx->pc = 0x14054Cu;
            goto label_14054c;
        }
    }
    ctx->pc = 0x140534u;
    // 0x140534: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x140534u;
    {
        const bool branch_taken_0x140534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140534) {
            ctx->pc = 0x140588u;
            goto label_140588;
        }
    }
    ctx->pc = 0x14053Cu;
label_14053c:
    // 0x14053c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14053Cu;
    {
        const bool branch_taken_0x14053c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x140540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14053Cu;
            // 0x140540: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14053c) {
            ctx->pc = 0x140574u;
            goto label_140574;
        }
    }
    ctx->pc = 0x140544u;
    // 0x140544: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x140544u;
    {
        const bool branch_taken_0x140544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140544) {
            ctx->pc = 0x140588u;
            goto label_140588;
        }
    }
    ctx->pc = 0x14054Cu;
label_14054c:
    // 0x14054c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140550: 0xc0500a8  jal         func_1402A0
    ctx->pc = 0x140550u;
    SET_GPR_U32(ctx, 31, 0x140558u);
    ctx->pc = 0x140554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140550u;
            // 0x140554: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402A0u;
    if (runtime->hasFunction(0x1402A0u)) {
        auto targetFn = runtime->lookupFunction(0x1402A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140558u; }
        if (ctx->pc != 0x140558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x1402a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140558u; }
        if (ctx->pc != 0x140558u) { return; }
    }
    ctx->pc = 0x140558u;
    // 0x140558: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x140558u;
    {
        const bool branch_taken_0x140558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140558u;
            // 0x14055c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140558) {
            ctx->pc = 0x140598u;
            goto label_140598;
        }
    }
    ctx->pc = 0x140560u;
label_140560:
    // 0x140560: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x140560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140564: 0xc04fdfe  jal         func_13F7F8
    ctx->pc = 0x140564u;
    SET_GPR_U32(ctx, 31, 0x14056Cu);
    ctx->pc = 0x140568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140564u;
            // 0x140568: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F7F8u;
    if (runtime->hasFunction(0x13F7F8u)) {
        auto targetFn = runtime->lookupFunction(0x13F7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14056Cu; }
        if (ctx->pc != 0x14056Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x13f7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14056Cu; }
        if (ctx->pc != 0x14056Cu) { return; }
    }
    ctx->pc = 0x14056Cu;
    // 0x14056c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14056Cu;
    {
        const bool branch_taken_0x14056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14056Cu;
            // 0x140570: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14056c) {
            ctx->pc = 0x140598u;
            goto label_140598;
        }
    }
    ctx->pc = 0x140574u;
label_140574:
    // 0x140574: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140578: 0xc0500a8  jal         func_1402A0
    ctx->pc = 0x140578u;
    SET_GPR_U32(ctx, 31, 0x140580u);
    ctx->pc = 0x14057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140578u;
            // 0x14057c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402A0u;
    if (runtime->hasFunction(0x1402A0u)) {
        auto targetFn = runtime->lookupFunction(0x1402A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140580u; }
        if (ctx->pc != 0x140580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_sinf_0x1402a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140580u; }
        if (ctx->pc != 0x140580u) { return; }
    }
    ctx->pc = 0x140580u;
    // 0x140580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x140580u;
    {
        const bool branch_taken_0x140580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140580u;
            // 0x140584: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140580) {
            ctx->pc = 0x140594u;
            goto label_140594;
        }
    }
    ctx->pc = 0x140588u;
label_140588:
    // 0x140588: 0xc04fdfe  jal         func_13F7F8
    ctx->pc = 0x140588u;
    SET_GPR_U32(ctx, 31, 0x140590u);
    ctx->pc = 0x14058Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140588u;
            // 0x14058c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F7F8u;
    if (runtime->hasFunction(0x13F7F8u)) {
        auto targetFn = runtime->lookupFunction(0x13F7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140590u; }
        if (ctx->pc != 0x140590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___kernel_cosf_0x13f7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140590u; }
        if (ctx->pc != 0x140590u) { return; }
    }
    ctx->pc = 0x140590u;
    // 0x140590: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x140590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_140594:
    // 0x140594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140598:
    // 0x140598: 0x3e00008  jr          $ra
    ctx->pc = 0x140598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14059Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140598u;
            // 0x14059c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1404F0u: goto label_1404f0;
            case 0x14050Cu: goto label_14050c;
            case 0x14053Cu: goto label_14053c;
            case 0x14054Cu: goto label_14054c;
            case 0x140560u: goto label_140560;
            case 0x140574u: goto label_140574;
            case 0x140588u: goto label_140588;
            case 0x140594u: goto label_140594;
            case 0x140598u: goto label_140598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1405A0u;
}
