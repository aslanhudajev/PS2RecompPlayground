#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dpflt
// Address: 0x100260 - 0x100280
void _dpflt_0x100260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dpflt_0x100260");
#endif

    ctx->pc = 0x100260u;

    // 0x100260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100268: 0xc0409ca  jal         func_102728
    ctx->pc = 0x100268u;
    SET_GPR_U32(ctx, 31, 0x100270u);
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100270u; }
        if (ctx->pc != 0x100270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100270u; }
        if (ctx->pc != 0x100270u) { return; }
    }
    ctx->pc = 0x100270u;
    // 0x100270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100274: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x100274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x100278: 0x3e00008  jr          $ra
    ctx->pc = 0x100278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100278u;
            // 0x10027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100280u;
}
