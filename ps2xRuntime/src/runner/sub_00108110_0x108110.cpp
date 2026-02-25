#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_00108110
// Address: 0x108110 - 0x108150
void sub_00108110_0x108110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00108110_0x108110");
#endif

    ctx->pc = 0x108110u;

    // 0x108110: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x108110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x108114: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x108114u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7u)));
    // 0x108118: 0x24c6f6a8  addiu       $a2, $a2, -0x958
    ctx->pc = 0x108118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964904));
    // 0x10811c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x108120: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x108124: 0x2442f6a0  addiu       $v0, $v0, -0x960
    ctx->pc = 0x108124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964896));
    // 0x108128: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x108128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10812c: 0x80c70000  lb          $a3, 0x0($a2)
    ctx->pc = 0x10812cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108130: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x108130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108134: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x108134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x108138: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x108138u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10813c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10813Cu;
    {
        const bool branch_taken_0x10813c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10813c) {
            ctx->pc = 0x108140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10813Cu;
            // 0x108140: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x108144u;
            goto label_108144;
        }
    }
    ctx->pc = 0x108144u;
label_108144:
    // 0x108144: 0x1012  mflo        $v0
    ctx->pc = 0x108144u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x108148: 0x3e00008  jr          $ra
    ctx->pc = 0x108148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108144u: goto label_108144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108150u;
}
