#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: initialisePads
// Address: 0x1025d0 - 0x1025fc
void initialisePads_0x1025d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("initialisePads_0x1025d0");
#endif

    ctx->pc = 0x1025d0u;

    // 0x1025d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1025d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1025d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1025d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1025d8: 0xc045792  jal         func_115E48
    ctx->pc = 0x1025D8u;
    SET_GPR_U32(ctx, 31, 0x1025E0u);
    ctx->pc = 0x1025DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1025D8u;
            // 0x1025dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115E48u;
    if (runtime->hasFunction(0x115E48u)) {
        auto targetFn = runtime->lookupFunction(0x115E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025E0u; }
        if (ctx->pc != 0x1025E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadInit_0x115e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1025E0u; }
        if (ctx->pc != 0x1025E0u) { return; }
    }
    ctx->pc = 0x1025E0u;
    // 0x1025e0: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1025e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1025e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1025e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1025e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1025e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025ec: 0x24c6e000  addiu       $a2, $a2, -0x2000
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959104));
    // 0x1025f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025f4: 0x804582a  j           func_1160A8
    ctx->pc = 0x1025F4u;
    ctx->pc = 0x1025F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1025F4u;
            // 0x1025f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1160A8u;
    if (runtime->hasFunction(0x1160A8u)) {
        auto targetFn = runtime->lookupFunction(0x1160A8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        scePadPortOpen_0x1160a8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1025FCu;
}
