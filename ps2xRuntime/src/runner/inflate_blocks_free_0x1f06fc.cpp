#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_blocks_free
// Address: 0x1f06fc - 0x1f0764
void inflate_blocks_free_0x1f06fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_blocks_free_0x1f06fc");
#endif

    ctx->pc = 0x1f06fcu;

label_1f06fc:
    // 0x1f06fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f06fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f0700:
    // 0x1f0700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f0704:
    // 0x1f0704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f0708:
    // 0x1f0708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f070c:
    // 0x1f070c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f070cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0710:
    // 0x1f0710: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f0710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0714:
    // 0x1f0714: 0xc07beaa  jal         func_1EFAA8
label_1f0718:
    if (ctx->pc == 0x1F0718u) {
        ctx->pc = 0x1F0718u;
            // 0x1f0718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F071Cu;
        goto label_1f071c;
    }
    ctx->pc = 0x1F0714u;
    SET_GPR_U32(ctx, 31, 0x1F071Cu);
    ctx->pc = 0x1F0718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0714u;
            // 0x1f0718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAA8u;
    if (runtime->hasFunction(0x1EFAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1EFAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F071Cu; }
        if (ctx->pc != 0x1F071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x1efaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F071Cu; }
        if (ctx->pc != 0x1F071Cu) { return; }
    }
    ctx->pc = 0x1F071Cu;
label_1f071c:
    // 0x1f071c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1f071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1f0720:
    // 0x1f0720: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f0720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f0724:
    // 0x1f0724: 0x40f809  jalr        $v0
label_1f0728:
    if (ctx->pc == 0x1F0728u) {
        ctx->pc = 0x1F0728u;
            // 0x1f0728: 0x8e25002c  lw          $a1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x1F072Cu;
        goto label_1f072c;
    }
    ctx->pc = 0x1F0724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F072Cu);
        ctx->pc = 0x1F0728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0724u;
            // 0x1f0728: 0x8e25002c  lw          $a1, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F06FCu: goto label_1f06fc;
            case 0x1F0700u: goto label_1f0700;
            case 0x1F0704u: goto label_1f0704;
            case 0x1F0708u: goto label_1f0708;
            case 0x1F070Cu: goto label_1f070c;
            case 0x1F0710u: goto label_1f0710;
            case 0x1F0714u: goto label_1f0714;
            case 0x1F0718u: goto label_1f0718;
            case 0x1F071Cu: goto label_1f071c;
            case 0x1F0720u: goto label_1f0720;
            case 0x1F0724u: goto label_1f0724;
            case 0x1F0728u: goto label_1f0728;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F0730u: goto label_1f0730;
            case 0x1F0734u: goto label_1f0734;
            case 0x1F0738u: goto label_1f0738;
            case 0x1F073Cu: goto label_1f073c;
            case 0x1F0740u: goto label_1f0740;
            case 0x1F0744u: goto label_1f0744;
            case 0x1F0748u: goto label_1f0748;
            case 0x1F074Cu: goto label_1f074c;
            case 0x1F0750u: goto label_1f0750;
            case 0x1F0754u: goto label_1f0754;
            case 0x1F0758u: goto label_1f0758;
            case 0x1F075Cu: goto label_1f075c;
            case 0x1F0760u: goto label_1f0760;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F072Cu; }
            if (ctx->pc != 0x1F072Cu) { return; }
        }
    }
    ctx->pc = 0x1F072Cu;
label_1f072c:
    // 0x1f072c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1f072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1f0730:
    // 0x1f0730: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f0730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f0734:
    // 0x1f0734: 0x40f809  jalr        $v0
label_1f0738:
    if (ctx->pc == 0x1F0738u) {
        ctx->pc = 0x1F0738u;
            // 0x1f0738: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x1F073Cu;
        goto label_1f073c;
    }
    ctx->pc = 0x1F0734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F073Cu);
        ctx->pc = 0x1F0738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0734u;
            // 0x1f0738: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F06FCu: goto label_1f06fc;
            case 0x1F0700u: goto label_1f0700;
            case 0x1F0704u: goto label_1f0704;
            case 0x1F0708u: goto label_1f0708;
            case 0x1F070Cu: goto label_1f070c;
            case 0x1F0710u: goto label_1f0710;
            case 0x1F0714u: goto label_1f0714;
            case 0x1F0718u: goto label_1f0718;
            case 0x1F071Cu: goto label_1f071c;
            case 0x1F0720u: goto label_1f0720;
            case 0x1F0724u: goto label_1f0724;
            case 0x1F0728u: goto label_1f0728;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F0730u: goto label_1f0730;
            case 0x1F0734u: goto label_1f0734;
            case 0x1F0738u: goto label_1f0738;
            case 0x1F073Cu: goto label_1f073c;
            case 0x1F0740u: goto label_1f0740;
            case 0x1F0744u: goto label_1f0744;
            case 0x1F0748u: goto label_1f0748;
            case 0x1F074Cu: goto label_1f074c;
            case 0x1F0750u: goto label_1f0750;
            case 0x1F0754u: goto label_1f0754;
            case 0x1F0758u: goto label_1f0758;
            case 0x1F075Cu: goto label_1f075c;
            case 0x1F0760u: goto label_1f0760;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F073Cu; }
            if (ctx->pc != 0x1F073Cu) { return; }
        }
    }
    ctx->pc = 0x1F073Cu;
label_1f073c:
    // 0x1f073c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1f073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1f0740:
    // 0x1f0740: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1f0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1f0744:
    // 0x1f0744: 0x40f809  jalr        $v0
label_1f0748:
    if (ctx->pc == 0x1F0748u) {
        ctx->pc = 0x1F0748u;
            // 0x1f0748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F074Cu;
        goto label_1f074c;
    }
    ctx->pc = 0x1F0744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F074Cu);
        ctx->pc = 0x1F0748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0744u;
            // 0x1f0748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F06FCu: goto label_1f06fc;
            case 0x1F0700u: goto label_1f0700;
            case 0x1F0704u: goto label_1f0704;
            case 0x1F0708u: goto label_1f0708;
            case 0x1F070Cu: goto label_1f070c;
            case 0x1F0710u: goto label_1f0710;
            case 0x1F0714u: goto label_1f0714;
            case 0x1F0718u: goto label_1f0718;
            case 0x1F071Cu: goto label_1f071c;
            case 0x1F0720u: goto label_1f0720;
            case 0x1F0724u: goto label_1f0724;
            case 0x1F0728u: goto label_1f0728;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F0730u: goto label_1f0730;
            case 0x1F0734u: goto label_1f0734;
            case 0x1F0738u: goto label_1f0738;
            case 0x1F073Cu: goto label_1f073c;
            case 0x1F0740u: goto label_1f0740;
            case 0x1F0744u: goto label_1f0744;
            case 0x1F0748u: goto label_1f0748;
            case 0x1F074Cu: goto label_1f074c;
            case 0x1F0750u: goto label_1f0750;
            case 0x1F0754u: goto label_1f0754;
            case 0x1F0758u: goto label_1f0758;
            case 0x1F075Cu: goto label_1f075c;
            case 0x1F0760u: goto label_1f0760;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F074Cu; }
            if (ctx->pc != 0x1F074Cu) { return; }
        }
    }
    ctx->pc = 0x1F074Cu;
label_1f074c:
    // 0x1f074c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f074cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0750:
    // 0x1f0750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0754:
    // 0x1f0754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f0758:
    // 0x1f0758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f075c:
    // 0x1f075c: 0x3e00008  jr          $ra
label_1f0760:
    if (ctx->pc == 0x1F0760u) {
        ctx->pc = 0x1F0760u;
            // 0x1f0760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F0764u;
        goto label_fallthrough_0x1f075c;
    }
    ctx->pc = 0x1F075Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F075Cu;
            // 0x1f0760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F06FCu: goto label_1f06fc;
            case 0x1F0700u: goto label_1f0700;
            case 0x1F0704u: goto label_1f0704;
            case 0x1F0708u: goto label_1f0708;
            case 0x1F070Cu: goto label_1f070c;
            case 0x1F0710u: goto label_1f0710;
            case 0x1F0714u: goto label_1f0714;
            case 0x1F0718u: goto label_1f0718;
            case 0x1F071Cu: goto label_1f071c;
            case 0x1F0720u: goto label_1f0720;
            case 0x1F0724u: goto label_1f0724;
            case 0x1F0728u: goto label_1f0728;
            case 0x1F072Cu: goto label_1f072c;
            case 0x1F0730u: goto label_1f0730;
            case 0x1F0734u: goto label_1f0734;
            case 0x1F0738u: goto label_1f0738;
            case 0x1F073Cu: goto label_1f073c;
            case 0x1F0740u: goto label_1f0740;
            case 0x1F0744u: goto label_1f0744;
            case 0x1F0748u: goto label_1f0748;
            case 0x1F074Cu: goto label_1f074c;
            case 0x1F0750u: goto label_1f0750;
            case 0x1F0754u: goto label_1f0754;
            case 0x1F0758u: goto label_1f0758;
            case 0x1F075Cu: goto label_1f075c;
            case 0x1F0760u: goto label_1f0760;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f075c:
    ctx->pc = 0x1F0764u;
}
