#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dpfgt
// Address: 0x100210 - 0x100230
void _dpfgt_0x100210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dpfgt_0x100210");
#endif

    ctx->pc = 0x100210u;

    // 0x100210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100218: 0xc0409ca  jal         func_102728
    ctx->pc = 0x100218u;
    SET_GPR_U32(ctx, 31, 0x100220u);
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100220u; }
        if (ctx->pc != 0x100220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100220u; }
        if (ctx->pc != 0x100220u) { return; }
    }
    ctx->pc = 0x100220u;
    // 0x100220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100224: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100228: 0x3e00008  jr          $ra
    ctx->pc = 0x100228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100228u;
            // 0x10022c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100230u;
}
