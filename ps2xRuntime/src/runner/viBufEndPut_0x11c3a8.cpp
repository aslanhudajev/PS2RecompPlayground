#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufEndPut
// Address: 0x11c3a8 - 0x11c3f8
void viBufEndPut_0x11c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufEndPut_0x11c3a8");
#endif

    ctx->pc = 0x11c3a8u;

    // 0x11c3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11c3ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11c3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c3b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c3bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c0: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x11C3C0u;
    SET_GPR_U32(ctx, 31, 0x11C3C8u);
    ctx->pc = 0x11C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3C0u;
            // 0x11c3c4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3C8u; }
        if (ctx->pc != 0x11C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C3C8u; }
        if (ctx->pc != 0x11C3C8u) { return; }
    }
    ctx->pc = 0x11C3C8u;
    // 0x11c3c8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x11c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11c3cc: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x11c3ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x11c3d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11c3d4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x11c3d8: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x11c3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x11c3dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x11c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x11c3e0: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x11c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x11c3e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c3e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11c3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c3f0: 0x80438b0  j           func_10E2C0
    ctx->pc = 0x11C3F0u;
    ctx->pc = 0x11C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3F0u;
            // 0x11c3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SignalSema_0x10e2c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11C3F8u;
}
