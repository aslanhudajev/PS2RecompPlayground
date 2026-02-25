#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CommonDefaultSetting
// Address: 0x197250 - 0x197318
void CommonDefaultSetting_0x197250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CommonDefaultSetting_0x197250");
#endif

    ctx->pc = 0x197250u;

    // 0x197250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197258: 0xc065df8  jal         func_1977E0
    ctx->pc = 0x197258u;
    SET_GPR_U32(ctx, 31, 0x197260u);
    ctx->pc = 0x1977E0u;
    if (runtime->hasFunction(0x1977E0u)) {
        auto targetFn = runtime->lookupFunction(0x1977E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197260u; }
        if (ctx->pc != 0x197260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultOptions_0x1977e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197260u; }
        if (ctx->pc != 0x197260u) { return; }
    }
    ctx->pc = 0x197260u;
    // 0x197260: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x197260u;
    SET_GPR_U32(ctx, 31, 0x197268u);
    ctx->pc = 0x197264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197260u;
            // 0x197264: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197268u; }
        if (ctx->pc != 0x197268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197268u; }
        if (ctx->pc != 0x197268u) { return; }
    }
    ctx->pc = 0x197268u;
    // 0x197268: 0xc065dd4  jal         func_197750
    ctx->pc = 0x197268u;
    SET_GPR_U32(ctx, 31, 0x197270u);
    ctx->pc = 0x19726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197268u;
            // 0x19726c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197750u;
    if (runtime->hasFunction(0x197750u)) {
        auto targetFn = runtime->lookupFunction(0x197750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197270u; }
        if (ctx->pc != 0x197270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultKeySetting_0x197750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197270u; }
        if (ctx->pc != 0x197270u) { return; }
    }
    ctx->pc = 0x197270u;
    // 0x197270: 0xc065dd4  jal         func_197750
    ctx->pc = 0x197270u;
    SET_GPR_U32(ctx, 31, 0x197278u);
    ctx->pc = 0x197274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197270u;
            // 0x197274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197750u;
    if (runtime->hasFunction(0x197750u)) {
        auto targetFn = runtime->lookupFunction(0x197750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197278u; }
        if (ctx->pc != 0x197278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultKeySetting_0x197750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197278u; }
        if (ctx->pc != 0x197278u) { return; }
    }
    ctx->pc = 0x197278u;
    // 0x197278: 0xc066128  jal         func_1984A0
    ctx->pc = 0x197278u;
    SET_GPR_U32(ctx, 31, 0x197280u);
    ctx->pc = 0x1984A0u;
    if (runtime->hasFunction(0x1984A0u)) {
        auto targetFn = runtime->lookupFunction(0x1984A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197280u; }
        if (ctx->pc != 0x197280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefaultRanking_0x1984a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197280u; }
        if (ctx->pc != 0x197280u) { return; }
    }
    ctx->pc = 0x197280u;
    // 0x197280: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x197284: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197288: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x197288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x19728c: 0x0  nop
    ctx->pc = 0x19728cu;
    // NOP
label_197290:
    // 0x197290: 0xac600224  sw          $zero, 0x224($v1)
    ctx->pc = 0x197290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 0));
    // 0x197294: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x197294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
    // 0x197298: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x19729c: 0xac60022c  sw          $zero, 0x22C($v1)
    ctx->pc = 0x19729cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 0));
    // 0x1972a0: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x1972a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x1972a4: 0xac600230  sw          $zero, 0x230($v1)
    ctx->pc = 0x1972a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 0));
    // 0x1972a8: 0xac600234  sw          $zero, 0x234($v1)
    ctx->pc = 0x1972a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 0));
    // 0x1972ac: 0xac600238  sw          $zero, 0x238($v1)
    ctx->pc = 0x1972acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 0));
    // 0x1972b0: 0xac60023c  sw          $zero, 0x23C($v1)
    ctx->pc = 0x1972b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 572), GPR_U32(ctx, 0));
    // 0x1972b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1972B4u;
    {
        const bool branch_taken_0x1972b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972B4u;
            // 0x1972b8: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972b4) {
            ctx->pc = 0x197290u;
            goto label_197290;
        }
    }
    ctx->pc = 0x1972BCu;
    // 0x1972bc: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1972bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1972c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1972c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972c4: 0x24841610  addiu       $a0, $a0, 0x1610
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
label_1972c8:
    // 0x1972c8: 0xac80025c  sw          $zero, 0x25C($a0)
    ctx->pc = 0x1972c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 0));
    // 0x1972cc: 0xac800260  sw          $zero, 0x260($a0)
    ctx->pc = 0x1972ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 608), GPR_U32(ctx, 0));
    // 0x1972d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1972d4: 0xac800264  sw          $zero, 0x264($a0)
    ctx->pc = 0x1972d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 0));
    // 0x1972d8: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x1972d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1972dc: 0xac800268  sw          $zero, 0x268($a0)
    ctx->pc = 0x1972dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 616), GPR_U32(ctx, 0));
    // 0x1972e0: 0xac80026c  sw          $zero, 0x26C($a0)
    ctx->pc = 0x1972e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 620), GPR_U32(ctx, 0));
    // 0x1972e4: 0xac800270  sw          $zero, 0x270($a0)
    ctx->pc = 0x1972e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 0));
    // 0x1972e8: 0xac800274  sw          $zero, 0x274($a0)
    ctx->pc = 0x1972e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 0));
    // 0x1972ec: 0xac800278  sw          $zero, 0x278($a0)
    ctx->pc = 0x1972ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 0));
    // 0x1972f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1972F0u;
    {
        const bool branch_taken_0x1972f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1972F0u;
            // 0x1972f4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972f0) {
            ctx->pc = 0x1972C8u;
            goto label_1972c8;
        }
    }
    ctx->pc = 0x1972F8u;
    // 0x1972f8: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x1972fc: 0xc065cc8  jal         func_197320
    ctx->pc = 0x1972FCu;
    SET_GPR_U32(ctx, 31, 0x197304u);
    ctx->pc = 0x197300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1972FCu;
            // 0x197300: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197320u;
    if (runtime->hasFunction(0x197320u)) {
        auto targetFn = runtime->lookupFunction(0x197320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197304u; }
        if (ctx->pc != 0x197304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCheckSum_0x197320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197304u; }
        if (ctx->pc != 0x197304u) { return; }
    }
    ctx->pc = 0x197304u;
    // 0x197304: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197308: 0xac2218ec  sw          $v0, 0x18EC($at)
    ctx->pc = 0x197308u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6380), GPR_U32(ctx, 2));
    // 0x19730c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197310: 0x3e00008  jr          $ra
    ctx->pc = 0x197310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197310u;
            // 0x197314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197290u: goto label_197290;
            case 0x1972C8u: goto label_1972c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197318u;
}
