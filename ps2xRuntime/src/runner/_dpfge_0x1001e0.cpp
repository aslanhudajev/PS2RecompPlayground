#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dpfge
// Address: 0x1001e0 - 0x100204
void _dpfge_0x1001e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dpfge_0x1001e0");
#endif

    ctx->pc = 0x1001e0u;

    // 0x1001e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1001e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1001e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1001e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1001e8: 0xc0409ca  jal         func_102728
    ctx->pc = 0x1001E8u;
    SET_GPR_U32(ctx, 31, 0x1001F0u);
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1001F0u; }
        if (ctx->pc != 0x1001F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1001F0u; }
        if (ctx->pc != 0x1001F0u) { return; }
    }
    ctx->pc = 0x1001F0u;
    // 0x1001f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1001f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1001f4: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1001f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1001f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1001f8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1001fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1001FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1001FCu;
            // 0x100200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100204u;
}
