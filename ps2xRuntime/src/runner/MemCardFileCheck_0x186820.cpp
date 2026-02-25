#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardFileCheck
// Address: 0x186820 - 0x186850
void MemCardFileCheck_0x186820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardFileCheck_0x186820");
#endif

    ctx->pc = 0x186820u;

    // 0x186820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186824: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x186828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18682c: 0xc065cc8  jal         func_197320
    ctx->pc = 0x18682Cu;
    SET_GPR_U32(ctx, 31, 0x186834u);
    ctx->pc = 0x186830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18682Cu;
            // 0x186830: 0x2484b740  addiu       $a0, $a0, -0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197320u;
    if (runtime->hasFunction(0x197320u)) {
        auto targetFn = runtime->lookupFunction(0x197320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186834u; }
        if (ctx->pc != 0x186834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCheckSum_0x197320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186834u; }
        if (ctx->pc != 0x186834u) { return; }
    }
    ctx->pc = 0x186834u;
    // 0x186834: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18683c: 0x8c23ba1c  lw          $v1, -0x45E4($at)
    ctx->pc = 0x18683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949404)));
    // 0x186840: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x186840u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x186844: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x186844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x186848: 0x3e00008  jr          $ra
    ctx->pc = 0x186848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186848u;
            // 0x18684c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186850u;
}
