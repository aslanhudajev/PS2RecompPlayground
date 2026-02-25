#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecCreate
// Address: 0x187750 - 0x187864
void audioDecCreate_0x187750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecCreate_0x187750");
#endif

    ctx->pc = 0x187750u;

    // 0x187750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x187758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18775c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187764: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x187764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x187768: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x187768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18776c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x18776cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x187770: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x187770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x187774: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x187774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x187778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x187778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18777c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x18777cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x187780: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x187780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x187784: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x187784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x187788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18778c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x18778cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x187790: 0xac900048  sw          $s0, 0x48($a0)
    ctx->pc = 0x187790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 16));
    // 0x187794: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x187794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x187798: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x187798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x18779c: 0xc04d72c  jal         func_135CB0
    ctx->pc = 0x18779Cu;
    SET_GPR_U32(ctx, 31, 0x1877A4u);
    ctx->pc = 0x1877A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18779Cu;
            // 0x1877a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135CB0u;
    if (runtime->hasFunction(0x135CB0u)) {
        auto targetFn = runtime->lookupFunction(0x135CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877A4u; }
        if (ctx->pc != 0x1877A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x135cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877A4u; }
        if (ctx->pc != 0x1877A4u) { return; }
    }
    ctx->pc = 0x1877A4u;
    // 0x1877a4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1877a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1877a8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1877ac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1877ACu;
    {
        const bool branch_taken_0x1877ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877ACu;
            // 0x1877b0: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877ac) {
            ctx->pc = 0x1877C8u;
            goto label_1877c8;
        }
    }
    ctx->pc = 0x1877B4u;
    // 0x1877b4: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1877B4u;
    SET_GPR_U32(ctx, 31, 0x1877BCu);
    ctx->pc = 0x1877B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877B4u;
            // 0x1877b8: 0x24842500  addiu       $a0, $a0, 0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877BCu; }
        if (ctx->pc != 0x1877BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877BCu; }
        if (ctx->pc != 0x1877BCu) { return; }
    }
    ctx->pc = 0x1877BCu;
    // 0x1877bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1877BCu;
    {
        const bool branch_taken_0x1877bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877BCu;
            // 0x1877c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877bc) {
            ctx->pc = 0x187850u;
            goto label_187850;
        }
    }
    ctx->pc = 0x1877C4u;
    // 0x1877c4: 0x0  nop
    ctx->pc = 0x1877c4u;
    // NOP
label_1877c8:
    // 0x1877c8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1877c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1877cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1877ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877d0: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1877D0u;
    SET_GPR_U32(ctx, 31, 0x1877D8u);
    ctx->pc = 0x1877D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877D0u;
            // 0x1877d4: 0x24842520  addiu       $a0, $a0, 0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877D8u; }
        if (ctx->pc != 0x1877D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877D8u; }
        if (ctx->pc != 0x1877D8u) { return; }
    }
    ctx->pc = 0x1877D8u;
    // 0x1877d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1877d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877dc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1877dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1877e0: 0xc04d72c  jal         func_135CB0
    ctx->pc = 0x1877E0u;
    SET_GPR_U32(ctx, 31, 0x1877E8u);
    ctx->pc = 0x1877E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877E0u;
            // 0x1877e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135CB0u;
    if (runtime->hasFunction(0x135CB0u)) {
        auto targetFn = runtime->lookupFunction(0x135CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877E8u; }
        if (ctx->pc != 0x1877E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifAllocSysMemory_0x135cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1877E8u; }
        if (ctx->pc != 0x1877E8u) { return; }
    }
    ctx->pc = 0x1877E8u;
    // 0x1877e8: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x1877e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
    // 0x1877ec: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x1877ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1877f0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1877F0u;
    {
        const bool branch_taken_0x1877f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877F0u;
            // 0x1877f4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877f0) {
            ctx->pc = 0x187808u;
            goto label_187808;
        }
    }
    ctx->pc = 0x1877F8u;
    // 0x1877f8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1877F8u;
    SET_GPR_U32(ctx, 31, 0x187800u);
    ctx->pc = 0x1877FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1877F8u;
            // 0x1877fc: 0x24842500  addiu       $a0, $a0, 0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187800u; }
        if (ctx->pc != 0x187800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187800u; }
        if (ctx->pc != 0x187800u) { return; }
    }
    ctx->pc = 0x187800u;
    // 0x187800: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x187800u;
    {
        const bool branch_taken_0x187800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187800u;
            // 0x187804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187800) {
            ctx->pc = 0x187850u;
            goto label_187850;
        }
    }
    ctx->pc = 0x187808u;
label_187808:
    // 0x187808: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x187808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18780c: 0x24842520  addiu       $a0, $a0, 0x2520
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9504));
    // 0x187810: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 31, 0x187818u);
    ctx->pc = 0x187814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187810u;
            // 0x187814: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187818u; }
        if (ctx->pc != 0x187818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187818u; }
        if (ctx->pc != 0x187818u) { return; }
    }
    ctx->pc = 0x187818u;
    // 0x187818: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18781c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18781cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187820: 0x2484c2c0  addiu       $a0, $a0, -0x3D40
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
    // 0x187824: 0xc04ed90  jal         func_13B640
    ctx->pc = 0x187824u;
    SET_GPR_U32(ctx, 31, 0x18782Cu);
    ctx->pc = 0x187828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187824u;
            // 0x187828: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B640u;
    if (runtime->hasFunction(0x13B640u)) {
        auto targetFn = runtime->lookupFunction(0x13B640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18782Cu; }
        if (ctx->pc != 0x18782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x13b640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18782Cu; }
        if (ctx->pc != 0x18782Cu) { return; }
    }
    ctx->pc = 0x18782Cu;
    // 0x18782c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x18782cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x187830: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x187830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x187834: 0x24a5c2c0  addiu       $a1, $a1, -0x3D40
    ctx->pc = 0x187834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951616));
    // 0x187838: 0xc061bd8  jal         func_186F60
    ctx->pc = 0x187838u;
    SET_GPR_U32(ctx, 31, 0x187840u);
    ctx->pc = 0x18783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187838u;
            // 0x18783c: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186F60u;
    if (runtime->hasFunction(0x186F60u)) {
        auto targetFn = runtime->lookupFunction(0x186F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187840u; }
        if (ctx->pc != 0x187840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x186f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187840u; }
        if (ctx->pc != 0x187840u) { return; }
    }
    ctx->pc = 0x187840u;
    // 0x187840: 0xc061bbc  jal         func_186EF0
    ctx->pc = 0x187840u;
    SET_GPR_U32(ctx, 31, 0x187848u);
    ctx->pc = 0x187844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187840u;
            // 0x187844: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EF0u;
    if (runtime->hasFunction(0x186EF0u)) {
        auto targetFn = runtime->lookupFunction(0x186EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187848u; }
        if (ctx->pc != 0x187848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeMasterVolume_0x186ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187848u; }
        if (ctx->pc != 0x187848u) { return; }
    }
    ctx->pc = 0x187848u;
    // 0x187848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18784c: 0x0  nop
    ctx->pc = 0x18784cu;
    // NOP
label_187850:
    // 0x187850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18785c: 0x3e00008  jr          $ra
    ctx->pc = 0x18785Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18785Cu;
            // 0x187860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1877C8u: goto label_1877c8;
            case 0x187808u: goto label_187808;
            case 0x187850u: goto label_187850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187864u;
}
