#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: handler_endimage
// Address: 0x1878f0 - 0x187938
void handler_endimage_0x1878f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("handler_endimage_0x1878f0");
#endif

    ctx->pc = 0x1878f0u;

    // 0x1878f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1878f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1878f4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1878f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1878f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1878f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1878fc: 0x8c22cad0  lw          $v0, -0x3530($at)
    ctx->pc = 0x1878fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953680)));
    // 0x187900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187900u;
    {
        const bool branch_taken_0x187900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187900) {
            ctx->pc = 0x187920u;
            goto label_187920;
        }
    }
    ctx->pc = 0x187908u;
    // 0x187908: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x187908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18790c: 0xc062abc  jal         func_18AAF0
    ctx->pc = 0x18790Cu;
    SET_GPR_U32(ctx, 31, 0x187914u);
    ctx->pc = 0x187910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18790Cu;
            // 0x187910: 0x2484fd80  addiu       $a0, $a0, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AAF0u;
    if (runtime->hasFunction(0x18AAF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187914u; }
        if (ctx->pc != 0x187914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufDecCount_0x18aaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187914u; }
        if (ctx->pc != 0x187914u) { return; }
    }
    ctx->pc = 0x187914u;
    // 0x187914: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x187914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x187918: 0xac20cad0  sw          $zero, -0x3530($at)
    ctx->pc = 0x187918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953680), GPR_U32(ctx, 0));
    // 0x18791c: 0x0  nop
    ctx->pc = 0x18791cu;
    // NOP
label_187920:
    // 0x187920: 0xf  sync
    ctx->pc = 0x187920u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x187924: 0x42000038  ei
    ctx->pc = 0x187924u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x187928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18792c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187930: 0x3e00008  jr          $ra
    ctx->pc = 0x187930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187930u;
            // 0x187934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187920u: goto label_187920;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187938u;
}
