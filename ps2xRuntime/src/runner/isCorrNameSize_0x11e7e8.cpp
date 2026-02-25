#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isCorrNameSize
// Address: 0x11e7e8 - 0x11e858
void isCorrNameSize_0x11e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isCorrNameSize_0x11e7e8");
#endif

    ctx->pc = 0x11e7e8u;

    // 0x11e7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e7ec: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x11e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x11e7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e7f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11e7f8: 0xc04f382  jal         func_13CE08
    ctx->pc = 0x11E7F8u;
    SET_GPR_U32(ctx, 31, 0x11E800u);
    ctx->pc = 0x11E7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7F8u;
            // 0x11e7fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE08u;
    if (runtime->hasFunction(0x13CE08u)) {
        auto targetFn = runtime->lookupFunction(0x13CE08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E800u; }
        if (ctx->pc != 0x11E800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strchr_0x13ce08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E800u; }
        if (ctx->pc != 0x11E800u) { return; }
    }
    ctx->pc = 0x11E800u;
    // 0x11e800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e804: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11E804u;
    {
        const bool branch_taken_0x11e804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E804u;
            // 0x11e808: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e804) {
            ctx->pc = 0x11E830u;
            goto label_11e830;
        }
    }
    ctx->pc = 0x11E80Cu;
    // 0x11e80c: 0xc04f5aa  jal         func_13D6A8
    ctx->pc = 0x11E80Cu;
    SET_GPR_U32(ctx, 31, 0x11E814u);
    ctx->pc = 0x13D6A8u;
    if (runtime->hasFunction(0x13D6A8u)) {
        auto targetFn = runtime->lookupFunction(0x13D6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E814u; }
        if (ctx->pc != 0x11E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x13d6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E814u; }
        if (ctx->pc != 0x11E814u) { return; }
    }
    ctx->pc = 0x11E814u;
    // 0x11e814: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x11E814u;
    SET_GPR_U32(ctx, 31, 0x11E81Cu);
    ctx->pc = 0x11E818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E814u;
            // 0x11e818: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E81Cu; }
        if (ctx->pc != 0x11E81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E81Cu; }
        if (ctx->pc != 0x11E81Cu) { return; }
    }
    ctx->pc = 0x11E81Cu;
    // 0x11e81c: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x11e81cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11e820: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E820u;
    {
        const bool branch_taken_0x11e820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E820u;
            // 0x11e824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e820) {
            ctx->pc = 0x11E844u;
            goto label_11e844;
        }
    }
    ctx->pc = 0x11E828u;
    // 0x11e828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11E828u;
    {
        const bool branch_taken_0x11e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E828u;
            // 0x11e82c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e828) {
            ctx->pc = 0x11E84Cu;
            goto label_11e84c;
        }
    }
    ctx->pc = 0x11E830u;
label_11e830:
    // 0x11e830: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x11E830u;
    SET_GPR_U32(ctx, 31, 0x11E838u);
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E838u; }
        if (ctx->pc != 0x11E838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E838u; }
        if (ctx->pc != 0x11E838u) { return; }
    }
    ctx->pc = 0x11E838u;
    // 0x11e838: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x11e838u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11e83c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E83Cu;
    {
        const bool branch_taken_0x11e83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E83Cu;
            // 0x11e840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e83c) {
            ctx->pc = 0x11E848u;
            goto label_11e848;
        }
    }
    ctx->pc = 0x11E844u;
label_11e844:
    // 0x11e844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e848:
    // 0x11e848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e84c:
    // 0x11e84c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11e84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11e850: 0x3e00008  jr          $ra
    ctx->pc = 0x11E850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E850u;
            // 0x11e854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E830u: goto label_11e830;
            case 0x11E844u: goto label_11e844;
            case 0x11E848u: goto label_11e848;
            case 0x11E84Cu: goto label_11e84c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E858u;
}
