#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecDelete
// Address: 0x11a0f8 - 0x11a12c
void videoDecDelete_0x11a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecDelete_0x11a0f8");
#endif

    ctx->pc = 0x11a0f8u;

    // 0x11a0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a108: 0xc047282  jal         func_11CA08
    ctx->pc = 0x11A108u;
    SET_GPR_U32(ctx, 31, 0x11A110u);
    ctx->pc = 0x11A10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A108u;
            // 0x11a10c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11CA08u;
    if (runtime->hasFunction(0x11CA08u)) {
        auto targetFn = runtime->lookupFunction(0x11CA08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A110u; }
        if (ctx->pc != 0x11A110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufDelete_0x11ca08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A110u; }
        if (ctx->pc != 0x11A110u) { return; }
    }
    ctx->pc = 0x11A110u;
    // 0x11a110: 0xc047d4e  jal         func_11F538
    ctx->pc = 0x11A110u;
    SET_GPR_U32(ctx, 31, 0x11A118u);
    ctx->pc = 0x11A114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A110u;
            // 0x11a114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F538u;
    if (runtime->hasFunction(0x11F538u)) {
        auto targetFn = runtime->lookupFunction(0x11F538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A118u; }
        if (ctx->pc != 0x11A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegDelete_0x11f538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A118u; }
        if (ctx->pc != 0x11A118u) { return; }
    }
    ctx->pc = 0x11A118u;
    // 0x11a118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a124: 0x3e00008  jr          $ra
    ctx->pc = 0x11A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A124u;
            // 0x11a128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A12Cu;
}
