#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CameraViewMicroD
// Address: 0x181700 - 0x18172c
void CameraViewMicroD_0x181700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CameraViewMicroD_0x181700");
#endif

    ctx->pc = 0x181700u;

    // 0x181700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181708: 0x8c8401b0  lw          $a0, 0x1B0($a0)
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x18170c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18170Cu;
    {
        const bool branch_taken_0x18170c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18170c) {
            ctx->pc = 0x181720u;
            goto label_181720;
        }
    }
    ctx->pc = 0x181714u;
    // 0x181714: 0xc059f3c  jal         func_167CF0
    ctx->pc = 0x181714u;
    SET_GPR_U32(ctx, 31, 0x18171Cu);
    ctx->pc = 0x167CF0u;
    if (runtime->hasFunction(0x167CF0u)) {
        auto targetFn = runtime->lookupFunction(0x167CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18171Cu; }
        if (ctx->pc != 0x18171Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cameraview_0x167cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18171Cu; }
        if (ctx->pc != 0x18171Cu) { return; }
    }
    ctx->pc = 0x18171Cu;
    // 0x18171c: 0x0  nop
    ctx->pc = 0x18171cu;
    // NOP
label_181720:
    // 0x181720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181724: 0x3e00008  jr          $ra
    ctx->pc = 0x181724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181724u;
            // 0x181728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181720u: goto label_181720;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18172Cu;
}
