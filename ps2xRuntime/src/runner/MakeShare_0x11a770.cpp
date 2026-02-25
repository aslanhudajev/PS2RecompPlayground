#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MakeShare
// Address: 0x11a770 - 0x11a81c
void MakeShare_0x11a770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MakeShare_0x11a770");
#endif

    ctx->pc = 0x11a770u;

    // 0x11a770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11a774: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11a778: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11a77c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11a77cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a780: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11a780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11a784: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a788: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a78c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x11a78cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11a794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a798: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11a79c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x11a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11a7a0: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11A7A0u;
    {
        const bool branch_taken_0x11a7a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7A0u;
            // 0x11a7a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a7a0) {
            ctx->pc = 0x11A7FCu;
            goto label_11a7fc;
        }
    }
    ctx->pc = 0x11A7A8u;
    // 0x11a7a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a7ac: 0x0  nop
    ctx->pc = 0x11a7acu;
    // NOP
label_11a7b0:
    // 0x11a7b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7b4: 0xc04725c  jal         func_11C970
    ctx->pc = 0x11A7B4u;
    SET_GPR_U32(ctx, 31, 0x11A7BCu);
    ctx->pc = 0x11A7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7B4u;
            // 0x11a7b8: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C970u;
    if (runtime->hasFunction(0x11C970u)) {
        auto targetFn = runtime->lookupFunction(0x11C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7BCu; }
        if (ctx->pc != 0x11A7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetIndex_0x11c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7BCu; }
        if (ctx->pc != 0x11A7BCu) { return; }
    }
    ctx->pc = 0x11A7BCu;
    // 0x11a7bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11a7c0: 0xc047264  jal         func_11C990
    ctx->pc = 0x11A7C0u;
    SET_GPR_U32(ctx, 31, 0x11A7C8u);
    ctx->pc = 0x11A7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7C0u;
            // 0x11a7c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C990u;
    if (runtime->hasFunction(0x11C990u)) {
        auto targetFn = runtime->lookupFunction(0x11C990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7C8u; }
        if (ctx->pc != 0x11A7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShareGetDst_0x11c990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7C8u; }
        if (ctx->pc != 0x11A7C8u) { return; }
    }
    ctx->pc = 0x11A7C8u;
    // 0x11a7c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x11a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11a7cc: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x11a7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x11a7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a7d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11a7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11a7d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11a7dc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x11a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11a7e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11a7e4: 0xc04b76a  jal         func_12DDA8
    ctx->pc = 0x11A7E4u;
    SET_GPR_U32(ctx, 31, 0x11A7ECu);
    ctx->pc = 0x11A7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7E4u;
            // 0x11a7e8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DDA8u;
    if (runtime->hasFunction(0x12DDA8u)) {
        auto targetFn = runtime->lookupFunction(0x12DDA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7ECu; }
        if (ctx->pc != 0x11A7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x12dda8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A7ECu; }
        if (ctx->pc != 0x11A7ECu) { return; }
    }
    ctx->pc = 0x11A7ECu;
    // 0x11a7ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x11a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11a7f0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11a7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a7f4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11A7F4u;
    {
        const bool branch_taken_0x11a7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a7f4) {
            ctx->pc = 0x11A7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A7F4u;
            // 0x11a7f8: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A7B0u;
            goto label_11a7b0;
        }
    }
    ctx->pc = 0x11A7FCu;
label_11a7fc:
    // 0x11a7fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11a7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a800: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11a800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a804: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11a804u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a808: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11a808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a80c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a814: 0x3e00008  jr          $ra
    ctx->pc = 0x11A814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A814u;
            // 0x11a818: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A7B0u: goto label_11a7b0;
            case 0x11A7FCu: goto label_11a7fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A81Cu;
}
