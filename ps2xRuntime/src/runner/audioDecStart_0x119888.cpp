#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecStart
// Address: 0x119888 - 0x1198a4
void audioDecStart_0x119888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119888u;

    // 0x119888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11988c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11988cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119890: 0xc046606  jal         func_119818
    ctx->pc = 0x119890u;
    SET_GPR_U32(ctx, 31, 0x119898u);
    ctx->pc = 0x119818u;
    if (runtime->hasFunction(0x119818u)) {
        auto targetFn = runtime->lookupFunction(0x119818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119898u; }
        if (ctx->pc != 0x119898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecResume_0x119818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119898u; }
        if (ctx->pc != 0x119898u) { return; }
    }
    ctx->pc = 0x119898u;
    // 0x119898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11989c: 0x3e00008  jr          $ra
    ctx->pc = 0x11989Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1198A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11989Cu;
            // 0x1198a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1198A4u;
}
