#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sysbitNext
// Address: 0x12a2f8 - 0x12a314
void _sysbitNext_0x12a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitNext_0x12a2f8");
#endif

    ctx->pc = 0x12a2f8u;

    // 0x12a2f8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x12a2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12a2fc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x12a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12a300: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12a300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12a304: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x12a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x12a308: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a30c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A30Cu;
            // 0x12a310: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A314u;
}
