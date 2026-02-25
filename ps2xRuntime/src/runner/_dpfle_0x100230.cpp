#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dpfle
// Address: 0x100230 - 0x100254
void _dpfle_0x100230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dpfle_0x100230");
#endif

    ctx->pc = 0x100230u;

    // 0x100230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100238: 0xc0409ca  jal         func_102728
    ctx->pc = 0x100238u;
    SET_GPR_U32(ctx, 31, 0x100240u);
    ctx->pc = 0x102728u;
    if (runtime->hasFunction(0x102728u)) {
        auto targetFn = runtime->lookupFunction(0x102728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100240u; }
        if (ctx->pc != 0x100240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x102728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100240u; }
        if (ctx->pc != 0x100240u) { return; }
    }
    ctx->pc = 0x100240u;
    // 0x100240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100244: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100248: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100248u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x10024c: 0x3e00008  jr          $ra
    ctx->pc = 0x10024Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10024Cu;
            // 0x100250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100254u;
}
