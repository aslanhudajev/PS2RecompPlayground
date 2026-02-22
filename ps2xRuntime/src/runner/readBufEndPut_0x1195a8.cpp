#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: readBufEndPut
// Address: 0x1195a8 - 0x1195ec
void readBufEndPut_0x1195a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1195a8u;

    // 0x1195a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1195ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1195acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1195b0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1195b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1195b4: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1195b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1195b8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1195b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1195bc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1195BCu;
    {
        const bool branch_taken_0x1195bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1195bc) {
            ctx->pc = 0x1195C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1195BCu;
            // 0x1195c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1195C4u;
            goto label_1195c4;
        }
    }
    ctx->pc = 0x1195C4u;
label_1195c4:
    // 0x1195c4: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x1195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1195c8: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1195cc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1195ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1195d0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1195d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1195d4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1195d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1195d8: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x1195d8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1195dc: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x1195dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x1195e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1195e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1195e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1195E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1195E4u;
            // 0x1195e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1195C4u: goto label_1195c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1195ECu;
}
