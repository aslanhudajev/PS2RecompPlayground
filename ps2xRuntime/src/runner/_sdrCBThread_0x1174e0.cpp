#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sdrCBThread
// Address: 0x1174e0 - 0x117544
void _sdrCBThread_0x1174e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sdrCBThread_0x1174e0");
#endif

    ctx->pc = 0x1174e0u;

    // 0x1174e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1174e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1174e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1174e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1174e8: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x1174E8u;
    SET_GPR_U32(ctx, 31, 0x1174F0u);
    ctx->pc = 0x1174ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1174E8u;
            // 0x1174ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (runtime->hasFunction(0x10FC40u)) {
        auto targetFn = runtime->lookupFunction(0x10FC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F0u; }
        if (ctx->pc != 0x1174F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x10fc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F0u; }
        if (ctx->pc != 0x1174F0u) { return; }
    }
    ctx->pc = 0x1174F0u;
    // 0x1174f0: 0xc043864  jal         func_10E190
    ctx->pc = 0x1174F0u;
    SET_GPR_U32(ctx, 31, 0x1174F8u);
    ctx->pc = 0x10E190u;
    if (runtime->hasFunction(0x10E190u)) {
        auto targetFn = runtime->lookupFunction(0x10E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F8u; }
        if (ctx->pc != 0x1174F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x10e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1174F8u; }
        if (ctx->pc != 0x1174F8u) { return; }
    }
    ctx->pc = 0x1174F8u;
    // 0x1174f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1174fc: 0xc0441ac  jal         func_1106B0
    ctx->pc = 0x1174FCu;
    SET_GPR_U32(ctx, 31, 0x117504u);
    ctx->pc = 0x117500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1174FCu;
            // 0x117500: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1106B0u;
    if (runtime->hasFunction(0x1106B0u)) {
        auto targetFn = runtime->lookupFunction(0x1106B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117504u; }
        if (ctx->pc != 0x117504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetRpcQueue_0x1106b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117504u; }
        if (ctx->pc != 0x117504u) { return; }
    }
    ctx->pc = 0x117504u;
    // 0x117504: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x117504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x117508: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x117508u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
    // 0x11750c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11750cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x117510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117518: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x117518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11751c: 0x24c67548  addiu       $a2, $a2, 0x7548
    ctx->pc = 0x11751cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30024));
    // 0x117520: 0x24e7c040  addiu       $a3, $a3, -0x3FC0
    ctx->pc = 0x117520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950976));
    // 0x117524: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x117524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x117528: 0xc0441d2  jal         func_110748
    ctx->pc = 0x117528u;
    SET_GPR_U32(ctx, 31, 0x117530u);
    ctx->pc = 0x11752Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117528u;
            // 0x11752c: 0x34a50704  ori         $a1, $a1, 0x704 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)1796u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110748u;
    if (runtime->hasFunction(0x110748u)) {
        auto targetFn = runtime->lookupFunction(0x110748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117530u; }
        if (ctx->pc != 0x117530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRegisterRpc_0x110748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117530u; }
        if (ctx->pc != 0x117530u) { return; }
    }
    ctx->pc = 0x117530u;
    // 0x117530: 0xc0442d8  jal         func_110B60
    ctx->pc = 0x117530u;
    SET_GPR_U32(ctx, 31, 0x117538u);
    ctx->pc = 0x117534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117530u;
            // 0x117534: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B60u;
    if (runtime->hasFunction(0x110B60u)) {
        auto targetFn = runtime->lookupFunction(0x110B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117538u; }
        if (ctx->pc != 0x117538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifRpcLoop_0x110b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117538u; }
        if (ctx->pc != 0x117538u) { return; }
    }
    ctx->pc = 0x117538u;
    // 0x117538: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x117538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11753c: 0x3e00008  jr          $ra
    ctx->pc = 0x11753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11753Cu;
            // 0x117540: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117544u;
}
