#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetTLBHandler
// Address: 0x137118 - 0x137178
void SetTLBHandler_0x137118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetTLBHandler_0x137118");
#endif

    ctx->pc = 0x137118u;

    // 0x137118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13711c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x13711cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x137120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137124: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x137124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x137128: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x137128u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
    // 0x13712c: 0x26107640  addiu       $s0, $s0, 0x7640
    ctx->pc = 0x13712cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30272));
    // 0x137130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x137130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137134: 0xac5107f8  sw          $s1, 0x7F8($v0)
    ctx->pc = 0x137134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2040), GPR_U32(ctx, 17));
    // 0x137138: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13713c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13713cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137140: 0xc04ba44  jal         func_12E910
    ctx->pc = 0x137140u;
    SET_GPR_U32(ctx, 31, 0x137148u);
    ctx->pc = 0x137144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137140u;
            // 0x137144: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E910u;
    if (runtime->hasFunction(0x12E910u)) {
        auto targetFn = runtime->lookupFunction(0x12E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137148u; }
        if (ctx->pc != 0x137148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x12e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137148u; }
        if (ctx->pc != 0x137148u) { return; }
    }
    ctx->pc = 0x137148u;
    // 0x137148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13714c: 0xc04ba44  jal         func_12E910
    ctx->pc = 0x13714Cu;
    SET_GPR_U32(ctx, 31, 0x137154u);
    ctx->pc = 0x137150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13714Cu;
            // 0x137150: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E910u;
    if (runtime->hasFunction(0x12E910u)) {
        auto targetFn = runtime->lookupFunction(0x12E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137154u; }
        if (ctx->pc != 0x137154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x12e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137154u; }
        if (ctx->pc != 0x137154u) { return; }
    }
    ctx->pc = 0x137154u;
    // 0x137154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137158: 0xc04ba44  jal         func_12E910
    ctx->pc = 0x137158u;
    SET_GPR_U32(ctx, 31, 0x137160u);
    ctx->pc = 0x13715Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137158u;
            // 0x13715c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E910u;
    if (runtime->hasFunction(0x12E910u)) {
        auto targetFn = runtime->lookupFunction(0x12E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137160u; }
        if (ctx->pc != 0x137160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x12e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137160u; }
        if (ctx->pc != 0x137160u) { return; }
    }
    ctx->pc = 0x137160u;
    // 0x137160: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x137160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137168: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x137168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13716c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13716cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137170: 0x3e00008  jr          $ra
    ctx->pc = 0x137170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137170u;
            // 0x137174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137178u;
}
