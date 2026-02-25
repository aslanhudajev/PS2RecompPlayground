#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _pictureHeader
// Address: 0x1285e0 - 0x1286a4
void _pictureHeader_0x1285e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_pictureHeader_0x1285e0");
#endif

    ctx->pc = 0x1285e0u;

    // 0x1285e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1285e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1285e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1285e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1285e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1285e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1285ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1285ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1285f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1285f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1285f4: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x1285F4u;
    SET_GPR_U32(ctx, 31, 0x1285FCu);
    ctx->pc = 0x1285F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1285F4u;
            // 0x1285f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285FCu; }
        if (ctx->pc != 0x1285FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1285FCu; }
        if (ctx->pc != 0x1285FCu) { return; }
    }
    ctx->pc = 0x1285FCu;
    // 0x1285fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1285fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128604: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128604u;
    SET_GPR_U32(ctx, 31, 0x12860Cu);
    ctx->pc = 0x128608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128604u;
            // 0x128608: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12860Cu; }
        if (ctx->pc != 0x12860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12860Cu; }
        if (ctx->pc != 0x12860Cu) { return; }
    }
    ctx->pc = 0x12860Cu;
    // 0x12860c: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x12860cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x128610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128614: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128614u;
    SET_GPR_U32(ctx, 31, 0x12861Cu);
    ctx->pc = 0x128618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128614u;
            // 0x128618: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12861Cu; }
        if (ctx->pc != 0x12861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12861Cu; }
        if (ctx->pc != 0x12861Cu) { return; }
    }
    ctx->pc = 0x12861Cu;
    // 0x12861c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x12861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x128620: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x128620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x128624: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x128624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x128628u;
    {
        const bool branch_taken_0x128628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128628u;
            // 0x12862c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128628) {
            ctx->pc = 0x128650u;
            goto label_128650;
        }
    }
    ctx->pc = 0x128630u;
    // 0x128630: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128630u;
    SET_GPR_U32(ctx, 31, 0x128638u);
    ctx->pc = 0x128634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128630u;
            // 0x128634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128638u; }
        if (ctx->pc != 0x128638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128638u; }
        if (ctx->pc != 0x128638u) { return; }
    }
    ctx->pc = 0x128638u;
    // 0x128638: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x128638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x12863c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128640: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x128640u;
    SET_GPR_U32(ctx, 31, 0x128648u);
    ctx->pc = 0x128644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128640u;
            // 0x128644: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128648u; }
        if (ctx->pc != 0x128648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128648u; }
        if (ctx->pc != 0x128648u) { return; }
    }
    ctx->pc = 0x128648u;
    // 0x128648: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x128648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x12864c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x12864cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_128650:
    // 0x128650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x128650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128654: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x128654u;
    {
        const bool branch_taken_0x128654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x128658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128654u;
            // 0x128658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128654) {
            ctx->pc = 0x128678u;
            goto label_128678;
        }
    }
    ctx->pc = 0x12865Cu;
    // 0x12865c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12865Cu;
    SET_GPR_U32(ctx, 31, 0x128664u);
    ctx->pc = 0x128660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12865Cu;
            // 0x128660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128664u; }
        if (ctx->pc != 0x128664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128664u; }
        if (ctx->pc != 0x128664u) { return; }
    }
    ctx->pc = 0x128664u;
    // 0x128664: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x128664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x128668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12866c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x12866Cu;
    SET_GPR_U32(ctx, 31, 0x128674u);
    ctx->pc = 0x128670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12866Cu;
            // 0x128670: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128674u; }
        if (ctx->pc != 0x128674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128674u; }
        if (ctx->pc != 0x128674u) { return; }
    }
    ctx->pc = 0x128674u;
    // 0x128674: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x128674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_128678:
    // 0x128678: 0xc04a270  jal         func_1289C0
    ctx->pc = 0x128678u;
    SET_GPR_U32(ctx, 31, 0x128680u);
    ctx->pc = 0x12867Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128678u;
            // 0x12867c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1289C0u;
    if (runtime->hasFunction(0x1289C0u)) {
        auto targetFn = runtime->lookupFunction(0x1289C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128680u; }
        if (ctx->pc != 0x128680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x1289c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128680u; }
        if (ctx->pc != 0x128680u) { return; }
    }
    ctx->pc = 0x128680u;
    // 0x128680: 0xc04a1aa  jal         func_1286A8
    ctx->pc = 0x128680u;
    SET_GPR_U32(ctx, 31, 0x128688u);
    ctx->pc = 0x128684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128680u;
            // 0x128684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1286A8u;
    if (runtime->hasFunction(0x1286A8u)) {
        auto targetFn = runtime->lookupFunction(0x1286A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128688u; }
        if (ctx->pc != 0x128688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x1286a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128688u; }
        if (ctx->pc != 0x128688u) { return; }
    }
    ctx->pc = 0x128688u;
    // 0x128688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12868c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128694: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12869c: 0x804a282  j           func_128A08
    ctx->pc = 0x12869Cu;
    ctx->pc = 0x1286A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12869Cu;
            // 0x1286a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128A08u;
    if (runtime->hasFunction(0x128A08u)) {
        auto targetFn = runtime->lookupFunction(0x128A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _updateTempTackData_0x128a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1286A4u;
}
