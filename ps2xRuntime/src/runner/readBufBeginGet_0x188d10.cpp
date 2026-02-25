#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readBufBeginGet
// Address: 0x188d10 - 0x188d68
void readBufBeginGet_0x188d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufBeginGet_0x188d10");
#endif

    ctx->pc = 0x188d10u;

    // 0x188d10: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188d14: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d18: 0x8c260004  lw          $a2, 0x4($at)
    ctx->pc = 0x188d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x188d1c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x188D1Cu;
    {
        const bool branch_taken_0x188d1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D1Cu;
            // 0x188d20: 0x3c010005  lui         $at, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d1c) {
            ctx->pc = 0x188D58u;
            goto label_188d58;
        }
    }
    ctx->pc = 0x188D24u;
    // 0x188d24: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d28: 0x8c230008  lw          $v1, 0x8($at)
    ctx->pc = 0x188d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x188d2c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188d30: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d34: 0x8c220000  lw          $v0, 0x0($at)
    ctx->pc = 0x188d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x188d38: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x188d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x188d3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x188d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188d40: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x188d40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x188d44: 0x0  nop
    ctx->pc = 0x188d44u;
    // NOP
    // 0x188d48: 0x0  nop
    ctx->pc = 0x188d48u;
    // NOP
    // 0x188d4c: 0x1010  mfhi        $v0
    ctx->pc = 0x188d4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x188d50: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x188d54: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x188d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_188d58:
    // 0x188d58: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188d5c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d60: 0x3e00008  jr          $ra
    ctx->pc = 0x188D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D60u;
            // 0x188d64: 0x8c220004  lw          $v0, 0x4($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188D58u: goto label_188d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188D68u;
}
