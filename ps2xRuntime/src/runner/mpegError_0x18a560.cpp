#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: mpegError
// Address: 0x18a560 - 0x18a588
void mpegError_0x18a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mpegError_0x18a560");
#endif

    ctx->pc = 0x18a560u;

    // 0x18a560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a564: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x18a568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a56c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18a570: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x18A570u;
    SET_GPR_U32(ctx, 31, 0x18A578u);
    ctx->pc = 0x18A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A570u;
            // 0x18a574: 0x248426d8  addiu       $a0, $a0, 0x26D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A578u; }
        if (ctx->pc != 0x18A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A578u; }
        if (ctx->pc != 0x18A578u) { return; }
    }
    ctx->pc = 0x18A578u;
    // 0x18a578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a580: 0x3e00008  jr          $ra
    ctx->pc = 0x18A580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A580u;
            // 0x18a584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A588u;
}
