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
// Address: 0x1195f0 - 0x119638
void readBufBeginGet_0x1195f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufBeginGet_0x1195f0");
#endif

    ctx->pc = 0x1195f0u;

    // 0x1195f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1195f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195f4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1195f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1195f8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1195f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1195fc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1195fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119600: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x119600u;
    {
        const bool branch_taken_0x119600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x119600) {
            ctx->pc = 0x119630u;
            goto label_119630;
        }
    }
    ctx->pc = 0x119608u;
    // 0x119608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11960c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x11960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x119610: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x119610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x119614: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x119618: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119618u;
    {
        const bool branch_taken_0x119618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x119618) {
            ctx->pc = 0x11961Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119618u;
            // 0x11961c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119620u;
            goto label_119620;
        }
    }
    ctx->pc = 0x119620u;
label_119620:
    // 0x119620: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x119620u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119624: 0x1010  mfhi        $v0
    ctx->pc = 0x119624u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x119628: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x119628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x11962c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11962cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_119630:
    // 0x119630: 0x3e00008  jr          $ra
    ctx->pc = 0x119630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119630u;
            // 0x119634: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119620u: goto label_119620;
            case 0x119630u: goto label_119630;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119638u;
}
