#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isPathCurParent
// Address: 0x11e8b0 - 0x11e980
void isPathCurParent_0x11e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isPathCurParent_0x11e8b0");
#endif

    ctx->pc = 0x11e8b0u;

    // 0x11e8b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e8b4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x11e8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x11e8b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11e8bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11e8c0: 0xc04f382  jal         func_13CE08
    ctx->pc = 0x11E8C0u;
    SET_GPR_U32(ctx, 31, 0x11E8C8u);
    ctx->pc = 0x11E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8C0u;
            // 0x11e8c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE08u;
    if (runtime->hasFunction(0x13CE08u)) {
        auto targetFn = runtime->lookupFunction(0x13CE08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8C8u; }
        if (ctx->pc != 0x11E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strchr_0x13ce08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8C8u; }
        if (ctx->pc != 0x11E8C8u) { return; }
    }
    ctx->pc = 0x11E8C8u;
    // 0x11e8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E8CCu;
    {
        const bool branch_taken_0x11e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8CCu;
            // 0x11e8d0: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8cc) {
            ctx->pc = 0x11E918u;
            goto label_11e918;
        }
    }
    ctx->pc = 0x11E8D4u;
    // 0x11e8d4: 0xc04f5aa  jal         func_13D6A8
    ctx->pc = 0x11E8D4u;
    SET_GPR_U32(ctx, 31, 0x11E8DCu);
    ctx->pc = 0x13D6A8u;
    if (runtime->hasFunction(0x13D6A8u)) {
        auto targetFn = runtime->lookupFunction(0x13D6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8DCu; }
        if (ctx->pc != 0x11E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x13d6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8DCu; }
        if (ctx->pc != 0x11E8DCu) { return; }
    }
    ctx->pc = 0x11E8DCu;
    // 0x11e8dc: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x11E8DCu;
    SET_GPR_U32(ctx, 31, 0x11E8E4u);
    ctx->pc = 0x11E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8DCu;
            // 0x11e8e0: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8E4u; }
        if (ctx->pc != 0x11E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8E4u; }
        if (ctx->pc != 0x11E8E4u) { return; }
    }
    ctx->pc = 0x11E8E4u;
    // 0x11e8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8e8: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x11e8e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11e8ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8f0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x11E8F0u;
    {
        const bool branch_taken_0x11e8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8F0u;
            // 0x11e8f4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8f0) {
            ctx->pc = 0x11E970u;
            goto label_11e970;
        }
    }
    ctx->pc = 0x11E8F8u;
    // 0x11e8f8: 0xc04f5aa  jal         func_13D6A8
    ctx->pc = 0x11E8F8u;
    SET_GPR_U32(ctx, 31, 0x11E900u);
    ctx->pc = 0x13D6A8u;
    if (runtime->hasFunction(0x13D6A8u)) {
        auto targetFn = runtime->lookupFunction(0x13D6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E900u; }
        if (ctx->pc != 0x11E900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x13d6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E900u; }
        if (ctx->pc != 0x11E900u) { return; }
    }
    ctx->pc = 0x11E900u;
    // 0x11e900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e904: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x11E904u;
    SET_GPR_U32(ctx, 31, 0x11E90Cu);
    ctx->pc = 0x11E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E904u;
            // 0x11e908: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E90Cu; }
        if (ctx->pc != 0x11E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E90Cu; }
        if (ctx->pc != 0x11E90Cu) { return; }
    }
    ctx->pc = 0x11E90Cu;
    // 0x11e90c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11E90Cu;
    {
        const bool branch_taken_0x11e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E90Cu;
            // 0x11e910: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e90c) {
            ctx->pc = 0x11E940u;
            goto label_11e940;
        }
    }
    ctx->pc = 0x11E914u;
    // 0x11e914: 0x0  nop
    ctx->pc = 0x11e914u;
    // NOP
label_11e918:
    // 0x11e918: 0xc04f47e  jal         func_13D1F8
    ctx->pc = 0x11E918u;
    SET_GPR_U32(ctx, 31, 0x11E920u);
    ctx->pc = 0x13D1F8u;
    if (runtime->hasFunction(0x13D1F8u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E920u; }
        if (ctx->pc != 0x11E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x13d1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E920u; }
        if (ctx->pc != 0x11E920u) { return; }
    }
    ctx->pc = 0x11E920u;
    // 0x11e920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e924: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x11e924u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11e928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e92c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11E92Cu;
    {
        const bool branch_taken_0x11e92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E92Cu;
            // 0x11e930: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e92c) {
            ctx->pc = 0x11E970u;
            goto label_11e970;
        }
    }
    ctx->pc = 0x11E934u;
    // 0x11e934: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x11E934u;
    SET_GPR_U32(ctx, 31, 0x11E93Cu);
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E93Cu; }
        if (ctx->pc != 0x11E93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E93Cu; }
        if (ctx->pc != 0x11E93Cu) { return; }
    }
    ctx->pc = 0x11E93Cu;
    // 0x11e93c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_11e940:
    // 0x11e940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e944: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x11E944u;
    SET_GPR_U32(ctx, 31, 0x11E94Cu);
    ctx->pc = 0x11E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E944u;
            // 0x11e948: 0x24a5f040  addiu       $a1, $a1, -0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E94Cu; }
        if (ctx->pc != 0x11E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E94Cu; }
        if (ctx->pc != 0x11E94Cu) { return; }
    }
    ctx->pc = 0x11E94Cu;
    // 0x11e94c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11e950: 0x24a5f048  addiu       $a1, $a1, -0xFB8
    ctx->pc = 0x11e950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963272));
    // 0x11e954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E954u;
    {
        const bool branch_taken_0x11e954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E954u;
            // 0x11e958: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e954) {
            ctx->pc = 0x11E96Cu;
            goto label_11e96c;
        }
    }
    ctx->pc = 0x11E95Cu;
    // 0x11e95c: 0xc04f3e6  jal         func_13CF98
    ctx->pc = 0x11E95Cu;
    SET_GPR_U32(ctx, 31, 0x11E964u);
    ctx->pc = 0x13CF98u;
    if (runtime->hasFunction(0x13CF98u)) {
        auto targetFn = runtime->lookupFunction(0x13CF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E964u; }
        if (ctx->pc != 0x11E964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x13cf98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E964u; }
        if (ctx->pc != 0x11E964u) { return; }
    }
    ctx->pc = 0x11E964u;
    // 0x11e964: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E964u;
    {
        const bool branch_taken_0x11e964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e964) {
            ctx->pc = 0x11E968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E964u;
            // 0x11e968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E970u;
            goto label_11e970;
        }
    }
    ctx->pc = 0x11E96Cu;
label_11e96c:
    // 0x11e96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e970:
    // 0x11e970: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11e970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e974: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11e974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11e978: 0x3e00008  jr          $ra
    ctx->pc = 0x11E978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E978u;
            // 0x11e97c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E918u: goto label_11e918;
            case 0x11E940u: goto label_11e940;
            case 0x11E96Cu: goto label_11e96c;
            case 0x11E970u: goto label_11e970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E980u;
}
