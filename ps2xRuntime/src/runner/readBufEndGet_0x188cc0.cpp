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
// Address: 0x188cc0 - 0x188d0c
void readBufEndGet_0x188cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("readBufEndGet_0x188cc0");
#endif

    ctx->pc = 0x188cc0u;

    // 0x188cc0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188cc4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188cc8: 0x8c220004  lw          $v0, 0x4($at)
    ctx->pc = 0x188cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x188ccc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x188cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x188cd0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x188CD0u;
    {
        const bool branch_taken_0x188cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cd0) {
            ctx->pc = 0x188CE0u;
            goto label_188ce0;
        }
    }
    ctx->pc = 0x188CD8u;
    // 0x188cd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x188CD8u;
    {
        const bool branch_taken_0x188cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188cd8) {
            ctx->pc = 0x188CE8u;
            goto label_188ce8;
        }
    }
    ctx->pc = 0x188CE0u;
label_188ce0:
    // 0x188ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ce4: 0x0  nop
    ctx->pc = 0x188ce4u;
    // NOP
label_188ce8:
    // 0x188ce8: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188cec: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188cecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188cf0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x188cf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cf4: 0x8c230004  lw          $v1, 0x4($at)
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x188cf8: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188cfc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x188cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188d00: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x188d00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x188d04: 0x3e00008  jr          $ra
    ctx->pc = 0x188D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188D04u;
            // 0x188d08: 0xac230004  sw          $v1, 0x4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188CE0u: goto label_188ce0;
            case 0x188CE8u: goto label_188ce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188D0Cu;
}
