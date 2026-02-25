#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MpegMain
// Address: 0x188770 - 0x188848
void MpegMain_0x188770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MpegMain_0x188770");
#endif

    ctx->pc = 0x188770u;

    // 0x188770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18877c: 0xc062234  jal         func_1888D0
    ctx->pc = 0x18877Cu;
    SET_GPR_U32(ctx, 31, 0x188784u);
    ctx->pc = 0x188780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18877Cu;
            // 0x188780: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1888D0u;
    if (runtime->hasFunction(0x1888D0u)) {
        auto targetFn = runtime->lookupFunction(0x1888D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188784u; }
        if (ctx->pc != 0x188784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        alloc_buf_0x1888d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188784u; }
        if (ctx->pc != 0x188784u) { return; }
    }
    ctx->pc = 0x188784u;
    // 0x188784: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188788: 0xc04bad4  jal         func_12EB50
    ctx->pc = 0x188788u;
    SET_GPR_U32(ctx, 31, 0x188790u);
    ctx->pc = 0x18878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188788u;
            // 0x18878c: 0xac30cae8  sw          $s0, -0x3518($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953704), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EB50u;
    if (runtime->hasFunction(0x12EB50u)) {
        auto targetFn = runtime->lookupFunction(0x12EB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188790u; }
        if (ctx->pc != 0x188790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x12eb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188790u; }
        if (ctx->pc != 0x188790u) { return; }
    }
    ctx->pc = 0x188790u;
    // 0x188790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188794: 0xc04babc  jal         func_12EAF0
    ctx->pc = 0x188794u;
    SET_GPR_U32(ctx, 31, 0x18879Cu);
    ctx->pc = 0x188798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188794u;
            // 0x188798: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EAF0u;
    if (runtime->hasFunction(0x12EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x12EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18879Cu; }
        if (ctx->pc != 0x18879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x12eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18879Cu; }
        if (ctx->pc != 0x18879Cu) { return; }
    }
    ctx->pc = 0x18879Cu;
    // 0x18879c: 0xc04c52a  jal         func_1314A8
    ctx->pc = 0x18879Cu;
    SET_GPR_U32(ctx, 31, 0x1887A4u);
    ctx->pc = 0x1887A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18879Cu;
            // 0x1887a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1314A8u;
    if (runtime->hasFunction(0x1314A8u)) {
        auto targetFn = runtime->lookupFunction(0x1314A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887A4u; }
        if (ctx->pc != 0x1887A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x1314a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887A4u; }
        if (ctx->pc != 0x1887A4u) { return; }
    }
    ctx->pc = 0x1887A4u;
    // 0x1887a4: 0xc04d6ee  jal         func_135BB8
    ctx->pc = 0x1887A4u;
    SET_GPR_U32(ctx, 31, 0x1887ACu);
    ctx->pc = 0x135BB8u;
    if (runtime->hasFunction(0x135BB8u)) {
        auto targetFn = runtime->lookupFunction(0x135BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887ACu; }
        if (ctx->pc != 0x1887ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x135bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887ACu; }
        if (ctx->pc != 0x1887ACu) { return; }
    }
    ctx->pc = 0x1887ACu;
    // 0x1887ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1887acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1887b0: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1887b4: 0xc042b42  jal         func_10AD08
    ctx->pc = 0x1887B4u;
    SET_GPR_U32(ctx, 31, 0x1887BCu);
    ctx->pc = 0x10AD08u;
    if (runtime->hasFunction(0x10AD08u)) {
        auto targetFn = runtime->lookupFunction(0x10AD08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887BCu; }
        if (ctx->pc != 0x1887BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10ad08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887BCu; }
        if (ctx->pc != 0x1887BCu) { return; }
    }
    ctx->pc = 0x1887BCu;
    // 0x1887bc: 0xc041984  jal         func_106610
    ctx->pc = 0x1887BCu;
    SET_GPR_U32(ctx, 31, 0x1887C4u);
    ctx->pc = 0x1887C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1887BCu;
            // 0x1887c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106610u;
    if (runtime->hasFunction(0x106610u)) {
        auto targetFn = runtime->lookupFunction(0x106610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887C4u; }
        if (ctx->pc != 0x1887C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaReset_0x106610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887C4u; }
        if (ctx->pc != 0x1887C4u) { return; }
    }
    ctx->pc = 0x1887C4u;
    // 0x1887c4: 0xc042e7c  jal         func_10B9F0
    ctx->pc = 0x1887C4u;
    SET_GPR_U32(ctx, 31, 0x1887CCu);
    ctx->pc = 0x1887C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1887C4u;
            // 0x1887c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B9F0u;
    if (runtime->hasFunction(0x10B9F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887CCu; }
        if (ctx->pc != 0x1887CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10b9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887CCu; }
        if (ctx->pc != 0x1887CCu) { return; }
    }
    ctx->pc = 0x1887CCu;
    // 0x1887cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1887ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1887d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1887d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1887d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1887d8: 0xc042ada  jal         func_10AB68
    ctx->pc = 0x1887D8u;
    SET_GPR_U32(ctx, 31, 0x1887E0u);
    ctx->pc = 0x1887DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1887D8u;
            // 0x1887dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (runtime->hasFunction(0x10AB68u)) {
        auto targetFn = runtime->lookupFunction(0x10AB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887E0u; }
        if (ctx->pc != 0x1887E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x10ab68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887E0u; }
        if (ctx->pc != 0x1887E0u) { return; }
    }
    ctx->pc = 0x1887E0u;
    // 0x1887e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1887e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1887e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1887e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887ec: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1887f0: 0xc061f98  jal         func_187E60
    ctx->pc = 0x1887F0u;
    SET_GPR_U32(ctx, 31, 0x1887F8u);
    ctx->pc = 0x1887F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1887F0u;
            // 0x1887f4: 0x240801e0  addiu       $t0, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E60u;
    if (runtime->hasFunction(0x187E60u)) {
        auto targetFn = runtime->lookupFunction(0x187E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887F8u; }
        if (ctx->pc != 0x1887F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        clearGsMem_0x187e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1887F8u; }
        if (ctx->pc != 0x1887F8u) { return; }
    }
    ctx->pc = 0x1887F8u;
    // 0x1887f8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1887fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1887fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188800: 0x2484fb40  addiu       $a0, $a0, -0x4C0
    ctx->pc = 0x188800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966080));
    // 0x188804: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x188804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x188808: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x188808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x18880c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18880cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188810: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188814: 0xc042dbe  jal         func_10B6F8
    ctx->pc = 0x188814u;
    SET_GPR_U32(ctx, 31, 0x18881Cu);
    ctx->pc = 0x188818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188814u;
            // 0x188818: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B6F8u;
    if (runtime->hasFunction(0x10B6F8u)) {
        auto targetFn = runtime->lookupFunction(0x10B6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18881Cu; }
        if (ctx->pc != 0x18881Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDBuff_0x10b6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18881Cu; }
        if (ctx->pc != 0x18881Cu) { return; }
    }
    ctx->pc = 0x18881Cu;
    // 0x18881c: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x18881Cu;
    SET_GPR_U32(ctx, 31, 0x188824u);
    ctx->pc = 0x188820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18881Cu;
            // 0x188820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188824u; }
        if (ctx->pc != 0x188824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188824u; }
        if (ctx->pc != 0x188824u) { return; }
    }
    ctx->pc = 0x188824u;
    // Skip movie/MPEG playback - no IPU yet (0x188824 would jal movie)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16));  // $a0 = $s0 (buffer for unalloc_buf)
    ctx->pc = 0x18882Cu;
    // 0x18882c: 0xc062214  jal         func_188850
    ctx->pc = 0x18882Cu;
    SET_GPR_U32(ctx, 31, 0x188834u);
    ctx->pc = 0x188850u;
    if (runtime->hasFunction(0x188850u)) {
        auto targetFn = runtime->lookupFunction(0x188850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188834u; }
        if (ctx->pc != 0x188834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unalloc_buf_0x188850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188834u; }
        if (ctx->pc != 0x188834u) { return; }
    }
    ctx->pc = 0x188834u;
    // 0x188834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18883c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18883cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188840: 0x3e00008  jr          $ra
    ctx->pc = 0x188840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188840u;
            // 0x188844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188848u;
}
