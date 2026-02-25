#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitAlarm
// Address: 0x1380f0 - 0x1381c4
void InitAlarm_0x1380f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitAlarm_0x1380f0");
#endif

    ctx->pc = 0x1380f0u;

    // 0x1380f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1380f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1380f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1380f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1380f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1380f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1380fc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x1380fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6160u)));
    // 0x138100: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x138100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x138104: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x138104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x138108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13810c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138110: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x138110u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
    // 0x138114: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x138114u;
    {
        const bool branch_taken_0x138114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138114u;
            // 0x138118: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138114) {
            ctx->pc = 0x1381B0u;
            goto label_1381b0;
        }
    }
    ctx->pc = 0x13811Cu;
    // 0x13811c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x138120: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138124: 0x24501a68  addiu       $s0, $v0, 0x1A68
    ctx->pc = 0x138124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6760));
    // 0x138128: 0x8c441a68  lw          $a0, 0x1A68($v0)
    ctx->pc = 0x138128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    // 0x13812c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13812cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x138130: 0xc04e022  jal         func_138088
    ctx->pc = 0x138130u;
    SET_GPR_U32(ctx, 31, 0x138138u);
    ctx->pc = 0x138134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138130u;
            // 0x138134: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138088u;
    if (runtime->hasFunction(0x138088u)) {
        auto targetFn = runtime->lookupFunction(0x138088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138138u; }
        if (ctx->pc != 0x138138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x138088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138138u; }
        if (ctx->pc != 0x138138u) { return; }
    }
    ctx->pc = 0x138138u;
    // 0x138138: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x138138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x13813c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x13813cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x138140: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x138144: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x138144u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)24576u)));
    // 0x138148: 0xc04e026  jal         func_138098
    ctx->pc = 0x138148u;
    SET_GPR_U32(ctx, 31, 0x138150u);
    ctx->pc = 0x13814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138148u;
            // 0x13814c: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138098u;
    if (runtime->hasFunction(0x138098u)) {
        auto targetFn = runtime->lookupFunction(0x138098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138150u; }
        if (ctx->pc != 0x138150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x138098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138150u; }
        if (ctx->pc != 0x138150u) { return; }
    }
    ctx->pc = 0x138150u;
    // 0x138150: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x138150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x138154: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x138154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x138158: 0x24a51a40  addiu       $a1, $a1, 0x1A40
    ctx->pc = 0x138158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6720));
    // 0x13815c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x13815cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8192u)));
    // 0x138160: 0xc04e026  jal         func_138098
    ctx->pc = 0x138160u;
    SET_GPR_U32(ctx, 31, 0x138168u);
    ctx->pc = 0x138164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138160u;
            // 0x138164: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138098u;
    if (runtime->hasFunction(0x138098u)) {
        auto targetFn = runtime->lookupFunction(0x138098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138168u; }
        if (ctx->pc != 0x138168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x138098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138168u; }
        if (ctx->pc != 0x138168u) { return; }
    }
    ctx->pc = 0x138168u;
    // 0x138168: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x138168u;
    SET_GPR_U32(ctx, 31, 0x138170u);
    ctx->pc = 0x13816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138168u;
            // 0x13816c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138170u; }
        if (ctx->pc != 0x138170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138170u; }
        if (ctx->pc != 0x138170u) { return; }
    }
    ctx->pc = 0x138170u;
    // 0x138170: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x138170u;
    SET_GPR_U32(ctx, 31, 0x138178u);
    ctx->pc = 0x138174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138170u;
            // 0x138174: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138178u; }
        if (ctx->pc != 0x138178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138178u; }
        if (ctx->pc != 0x138178u) { return; }
    }
    ctx->pc = 0x138178u;
    // 0x138178: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x138178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13817c: 0xc04e022  jal         func_138088
    ctx->pc = 0x13817Cu;
    SET_GPR_U32(ctx, 31, 0x138184u);
    ctx->pc = 0x138180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13817Cu;
            // 0x138180: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138088u;
    if (runtime->hasFunction(0x138088u)) {
        auto targetFn = runtime->lookupFunction(0x138088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138184u; }
        if (ctx->pc != 0x138184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x138088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138184u; }
        if (ctx->pc != 0x138184u) { return; }
    }
    ctx->pc = 0x138184u;
    // 0x138184: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x138184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_138188:
    // 0x138188: 0xc04e038  jal         func_1380E0
    ctx->pc = 0x138188u;
    SET_GPR_U32(ctx, 31, 0x138190u);
    ctx->pc = 0x13818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138188u;
            // 0x13818c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1380E0u;
    if (runtime->hasFunction(0x1380E0u)) {
        auto targetFn = runtime->lookupFunction(0x1380E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138190u; }
        if (ctx->pc != 0x138190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x1380e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138190u; }
        if (ctx->pc != 0x138190u) { return; }
    }
    ctx->pc = 0x138190u;
    // 0x138190: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x138190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138198: 0xc04e022  jal         func_138088
    ctx->pc = 0x138198u;
    SET_GPR_U32(ctx, 31, 0x1381A0u);
    ctx->pc = 0x13819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138198u;
            // 0x13819c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138088u;
    if (runtime->hasFunction(0x138088u)) {
        auto targetFn = runtime->lookupFunction(0x138088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1381A0u; }
        if (ctx->pc != 0x1381A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x138088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1381A0u; }
        if (ctx->pc != 0x1381A0u) { return; }
    }
    ctx->pc = 0x1381A0u;
    // 0x1381a0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1381a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1381a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1381A4u;
    {
        const bool branch_taken_0x1381a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1381a4) {
            ctx->pc = 0x1381A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1381A4u;
            // 0x1381a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138188u;
            goto label_138188;
        }
    }
    ctx->pc = 0x1381ACu;
    // 0x1381ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1381acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1381b0:
    // 0x1381b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1381b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1381b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1381b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1381b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1381b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1381bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1381BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1381C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1381BCu;
            // 0x1381c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138188u: goto label_138188;
            case 0x1381B0u: goto label_1381b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1381C4u;
}
