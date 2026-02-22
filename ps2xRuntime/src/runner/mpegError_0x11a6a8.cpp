#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegError
// Address: 0x11a6a8 - 0x11a6d0
void mpegError_0x11a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a6a8u;

    // 0x11a6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a6ac: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x11a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x11a6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a6b4: 0x24845f28  addiu       $a0, $a0, 0x5F28
    ctx->pc = 0x11a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24360));
    // 0x11a6b8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x11A6B8u;
    SET_GPR_U32(ctx, 31, 0x11A6C0u);
    ctx->pc = 0x11A6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6B8u;
            // 0x11a6bc: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6C0u; }
        if (ctx->pc != 0x11A6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A6C0u; }
        if (ctx->pc != 0x11A6C0u) { return; }
    }
    ctx->pc = 0x11A6C0u;
    // 0x11a6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11A6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A6C8u;
            // 0x11a6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A6D0u;
}
