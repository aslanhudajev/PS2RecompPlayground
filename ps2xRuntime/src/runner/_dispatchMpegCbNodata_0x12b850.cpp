#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dispatchMpegCbNodata
// Address: 0x12b850 - 0x12b878
void _dispatchMpegCbNodata_0x12b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dispatchMpegCbNodata_0x12b850");
#endif

    ctx->pc = 0x12b850u;

    // 0x12b850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12b85c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12b85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b860: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x12B860u;
    SET_GPR_U32(ctx, 31, 0x12B868u);
    ctx->pc = 0x12B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B860u;
            // 0x12b864: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B868u; }
        if (ctx->pc != 0x12B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B868u; }
        if (ctx->pc != 0x12B868u) { return; }
    }
    ctx->pc = 0x12B868u;
    // 0x12b868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12b868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b870: 0x3e00008  jr          $ra
    ctx->pc = 0x12B870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B870u;
            // 0x12b874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B878u;
}
