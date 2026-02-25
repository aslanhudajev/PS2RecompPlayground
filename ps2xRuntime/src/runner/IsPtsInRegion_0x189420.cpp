#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: IsPtsInRegion
// Address: 0x189420 - 0x189440
void IsPtsInRegion_0x189420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("IsPtsInRegion_0x189420");
#endif

    ctx->pc = 0x189420u;

    // 0x189420: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x189424: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189428: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x189428u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18942c: 0x0  nop
    ctx->pc = 0x18942cu;
    // NOP
    // 0x189430: 0x0  nop
    ctx->pc = 0x189430u;
    // NOP
    // 0x189434: 0x1010  mfhi        $v0
    ctx->pc = 0x189434u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x189438: 0x3e00008  jr          $ra
    ctx->pc = 0x189438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189438u;
            // 0x18943c: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189440u;
}
