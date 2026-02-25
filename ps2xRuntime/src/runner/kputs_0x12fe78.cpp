#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kputs
// Address: 0x12fe78 - 0x12fe9c
void kputs_0x12fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kputs_0x12fe78");
#endif

    ctx->pc = 0x12fe78u;

    // 0x12fe78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fe7c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12fe80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12fe80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12fe88: 0xc04bc24  jal         func_12F090
    ctx->pc = 0x12FE88u;
    SET_GPR_U32(ctx, 31, 0x12FE90u);
    ctx->pc = 0x12FE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE88u;
            // 0x12fe8c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F090u;
    if (runtime->hasFunction(0x12F090u)) {
        auto targetFn = runtime->lookupFunction(0x12F090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE90u; }
        if (ctx->pc != 0x12FE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Deci2Call_0x12f090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE90u; }
        if (ctx->pc != 0x12FE90u) { return; }
    }
    ctx->pc = 0x12FE90u;
    // 0x12fe90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fe94: 0x3e00008  jr          $ra
    ctx->pc = 0x12FE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE94u;
            // 0x12fe98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FE9Cu;
}
