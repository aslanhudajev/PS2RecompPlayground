#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getLog2
// Address: 0x11b0f8 - 0x11b134
void getLog2_0x11b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getLog2_0x11b0f8");
#endif

    ctx->pc = 0x11b0f8u;

    // 0x11b0f8: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B0F8u;
    {
        const bool branch_taken_0x11b0f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0F8u;
            // 0x11b0fc: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0f8) {
            ctx->pc = 0x11B120u;
            goto label_11b120;
        }
    }
    ctx->pc = 0x11B100u;
    // 0x11b100: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11b100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11b104: 0x0  nop
    ctx->pc = 0x11b104u;
    // NOP
label_11b108:
    // 0x11b108: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B108u;
    {
        const bool branch_taken_0x11b108 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B108u;
            // 0x11b10c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b108) {
            ctx->pc = 0x11B124u;
            goto label_11b124;
        }
    }
    ctx->pc = 0x11B110u;
    // 0x11b110: 0x641007  srav        $v0, $a0, $v1
    ctx->pc = 0x11b110u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x11b114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11b114u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x11b118: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11B118u;
    {
        const bool branch_taken_0x11b118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b118) {
            ctx->pc = 0x11B11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B118u;
            // 0x11b11c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B108u;
            goto label_11b108;
        }
    }
    ctx->pc = 0x11B120u;
label_11b120:
    // 0x11b120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b124:
    // 0x11b124: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x11b124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x11b128: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11b128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B12Cu;
            // 0x11b130: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11B108u: goto label_11b108;
            case 0x11B120u: goto label_11b120;
            case 0x11B124u: goto label_11b124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11B134u;
}
