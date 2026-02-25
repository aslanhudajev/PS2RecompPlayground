#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2CalcBufSize
// Address: 0x16f400 - 0x16f41c
void Tim2CalcBufSize_0x16f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2CalcBufSize_0x16f400");
#endif

    ctx->pc = 0x16f400u;

    // 0x16f400: 0xa61818  mult        $v1, $a1, $a2
    ctx->pc = 0x16f400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x16f404: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F404u;
    {
        const bool branch_taken_0x16f404 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F404u;
            // 0x16f408: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f404) {
            ctx->pc = 0x16F414u;
            goto label_16f414;
        }
    }
    ctx->pc = 0x16F40Cu;
    // 0x16f40c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x16f410: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_16f414:
    // 0x16f414: 0x3e00008  jr          $ra
    ctx->pc = 0x16F414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F414u: goto label_16f414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F41Cu;
}
