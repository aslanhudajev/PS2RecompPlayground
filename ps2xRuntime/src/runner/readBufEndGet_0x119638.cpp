#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: readBufEndGet
// Address: 0x119638 - 0x11965c
void readBufEndGet_0x119638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufEndGet_0x119638");
#endif

    ctx->pc = 0x119638u;

    // 0x119638: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x119638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x11963c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x119640: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x119640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x119644: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x119644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119648: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x119648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11964c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x11964cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x119650: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x119650u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x119654: 0x3e00008  jr          $ra
    ctx->pc = 0x119654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119654u;
            // 0x119658: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11965Cu;
}
